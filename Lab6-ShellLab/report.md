# Tiny Shell Lab

## 解题思路的文字说明

本次 lab, shlab. 即编写一个简单的 shell。

在tsh.c中，需要完成七个函数的编写，分别是

```c
void eval(char *cmdline);
int builtin_cmd(char **argv, char *cmdline);
void do_bgfg(char **argv, char *cmdline);
void waitfg(pid_t pid);
 
void sigchld_handler(int sig);
void sigtstp_handler(int sig);
void sigint_handler(int sig);
```

可以分析出，其实 shell 就两种命令，一种 buildin 命令 (fg,bg,quit,jobs)，需要立即在 shell 中执行，一种外部命令，需要 fork 出新进程来执行，只不过这里需要考虑是前台进程和后台进程。



那先说说 buildin 命令，其中 jobs 已经有默认实现了，quit 也相对简单，剩下的就是 fg 和 bg。

1. fg 命令，无法是将后台（Running 或 Stopped）转换到前台来。 

2. bg 命令，将后台 Stopped 的进程转换为后台 Running。



再来看看外部命令，在 parseline 函数执行时，会返回当前的命令是前台进程还是后台进程。所以这部分不用我们操心。我们唯一需要做得，就是对前台进程和后台进程分别处理 。

1. 前台进程：最为直接的想法就是父进程调用 wait 系统调用，等待前台进程结束。但请注意刚才提到的知识点 1，前台进程结束后，wait 系统调用的确返回了，但同时，父进程会收到 SIGCHLD 信号，sigchld_handler 会被调用。这会带来什么问题？接着看后台进程如何处理。
2. 后台进程：后台进程意味不能阻塞 tsh 进程，也就意味着我们不能在 tsh 中调用 wait 系统调用，那唯一能回收后台进程（除非强制 kill）就是当后台进程结束后，父进程会收到 SIGHLD 信号，通过 sigchld_handler 来回收，也就意味着我们的 sigchld_handler 中会有 wait 系统调用的存在。fork 后的 wait 变为”伪 wait”, 前后台进程统一在 sigchld_handler 中回收处理。那什么是”伪 wait “，作用就是阻塞住当前的 tsh，不允许输入新命令，除此之外，前后台进程都是一样的。

## 代码

```c
/*
 * tsh - A tiny shell program with job control
 *
 * 何岩 199074277
 */
#include <ctype.h>
#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* Misc manifest constants */
#define MAXLINE 1024   /* max line size */
#define MAXARGS 128    /* max args on a command line */
#define MAXJOBS 16     /* max jobs at any point in time */
#define MAXJID 1 << 16 /* max job ID */

/* Job states */
#define UNDEF 0 /* undefined */
#define FG 1    /* running in foreground */
#define BG 2    /* running in background */
#define ST 3    /* stopped */

/*
 * Jobs states: FG (foreground), BG (background), ST (stopped)
 * Job state transitions and enabling actions:
 *     FG -> ST  : ctrl-z
 *     ST -> FG  : fg command
 *     ST -> BG  : bg command
 *     BG -> FG  : fg command
 * At most 1 job can be in the FG state.
 */

/* Global variables */
extern char **environ;   /* defined in libc */
char prompt[] = "tsh> "; /* command line prompt (DO NOT CHANGE) */
int verbose = 0;         /* if true, print additional output */
int nextjid = 1;         /* next job ID to allocate */
char sbuf[MAXLINE];      /* for composing sprintf messages */

struct job_t {             /* The job struct */
    pid_t pid;             /* job PID */
    int jid;               /* job ID [1, 2, ...] */
    int state;             /* UNDEF, BG, FG, or ST */
    char cmdline[MAXLINE]; /* command line */
};
struct job_t jobs[MAXJOBS]; /* The job list */
/* End global variables */

/* Function prototypes */

/* Here are the functions that you will implement */
void eval(char *cmdline);
int builtin_cmd(char **argv);
void do_bgfg(char **argv);
void waitfg(pid_t pid);

void sigchld_handler(int sig);
void sigtstp_handler(int sig);
void sigint_handler(int sig);

/* Here are helper routines that we've provided for you */
int parseline(const char *cmdline, char **argv);
void sigquit_handler(int sig);

void clearjob(struct job_t *job);
void initjobs(struct job_t *jobs);
int maxjid(struct job_t *jobs);
int addjob(struct job_t *jobs, pid_t pid, int state, char *cmdline);
int deletejob(struct job_t *jobs, pid_t pid);
pid_t fgpid(struct job_t *jobs);
struct job_t *getjobpid(struct job_t *jobs, pid_t pid);
struct job_t *getjobjid(struct job_t *jobs, int jid);
int pid2jid(pid_t pid);
void listjobs(struct job_t *jobs);

void usage(void);
void unix_error(char *msg);
void app_error(char *msg);
typedef void handler_t(int);
handler_t *Signal(int signum, handler_t *handler);

/*
 * main - The shell's main routine
 */
int main(int argc, char **argv) {
    char c;
    char cmdline[MAXLINE];
    int emit_prompt = 1; /* emit prompt (default) */

    /* Redirect stderr to stdout (so that driver will get all output
     * on the pipe connected to stdout) */
    dup2(1, 2);

    /* Parse the command line */
    while ((c = getopt(argc, argv, "hvp")) != EOF) {
        switch (c) {
            case 'h': /* print help message */
                usage();
                break;
            case 'v': /* emit additional diagnostic info */
                verbose = 1;
                break;
            case 'p':            /* don't print a prompt */
                emit_prompt = 0; /* handy for automatic testing */
                break;
            default:
                usage();
        }
    }

    /* Install the signal handlers */

    /* These are the ones you will need to implement */
    Signal(SIGINT, sigint_handler);   /* ctrl-c */
    Signal(SIGTSTP, sigtstp_handler); /* ctrl-z */
    Signal(SIGCHLD, sigchld_handler); /* Terminated or stopped child */

    /* This one provides a clean way to kill the shell */
    Signal(SIGQUIT, sigquit_handler);

    /* Initialize the job list */
    initjobs(jobs);

    /* Execute the shell's read/eval loop */
    while (1) {
        /* Read command line */
        if (emit_prompt) {
            printf("%s", prompt);
            fflush(stdout);
        }
        if ((fgets(cmdline, MAXLINE, stdin) == NULL) && ferror(stdin))
            app_error("fgets error");
        if (feof(stdin)) { /* End of file (ctrl-d) */
            fflush(stdout);
            exit(0);
        }

        /* Evaluate the command line */
        eval(cmdline);
        fflush(stdout);
        fflush(stdout);
    }

    exit(0); /* control never reaches here */
}

/*
 * eval - Evaluate the command line that the user has just typed in
 *
 * If the user has requested a built-in command (quit, jobs, bg or fg)
 * then execute it immediately. Otherwise, fork a child process and
 * run the job in the context of the child. If the job is running in
 * the foreground, wait for it to terminate and then return.  Note:
 * each child process must have a unique process group ID so that our
 * background children don't receive SIGINT (SIGTSTP) from the kernel
 * when we type ctrl-c (ctrl-z) at the keyboard.
 */
void eval(char *cmdline) {
    char *argv[MAXARGS];  // 解析后的命令
    int bg;               // 是否是后台程序
    pid_t pid;            // 子进程id
    struct job_t *jd;
    sigset_t mask;

    bg = parseline(cmdline, argv);

    // 初始化blocking mask
    sigemptyset(&mask);
    sigaddset(&mask, SIGCHLD);
    sigaddset(&mask, SIGINT);
    sigaddset(&mask, SIGTSTP);

    if (!builtin_cmd(argv)) {
        // 正式执行命令
        sigprocmask(SIG_BLOCK, &mask, NULL);
        if ((pid = fork()) == 0) {
            sigprocmask(SIG_UNBLOCK, &mask, NULL);
            setpgid(0, 0);
            if (execve(argv[0], argv, environ) < 0) {
                printf("%s: Command not found.\n", argv[0]);
                exit(0);
            }
        }
        if (!bg) {
            // 前台处理进程
            addjob(jobs, pid, FG, cmdline);
            sigprocmask(SIG_UNBLOCK, &mask, NULL);
            waitfg(pid);
        } else {
            // block所有信号，避免竞争问题
            addjob(jobs, pid, BG, cmdline);
            sigprocmask(SIG_UNBLOCK, &mask, NULL);
            jd = getjobpid(jobs, pid);
            printf("[%d] (%d) %s", jd->jid, jd->pid, jd->cmdline);
        }
    }
    return;
}

/*
 * parseline - Parse the command line and build the argv array.
 *
 * Characters enclosed in single quotes are treated as a single
 * argument.  Return true if the user has requested a BG job, false if
 * the user has requested a FG job.
 */
int parseline(const char *cmdline, char **argv) {
    static char array[MAXLINE]; /* holds local copy of command line */
    char *buf = array;          /* ptr that traverses command line */
    char *delim;                /* points to first space delimiter */
    int argc;                   /* number of args */
    int bg;                     /* background job? */

    strcpy(buf, cmdline);
    buf[strlen(buf) - 1] = ' ';   /* replace trailing '\n' with space */
    while (*buf && (*buf == ' ')) /* ignore leading spaces */
        buf++;

    /* Build the argv list */
    argc = 0;
    if (*buf == '\'') {
        buf++;
        delim = strchr(buf, '\'');
    } else {
        delim = strchr(buf, ' ');
    }

    while (delim) {
        argv[argc++] = buf;
        *delim = '\0';
        buf = delim + 1;
        while (*buf && (*buf == ' ')) /* ignore spaces */
            buf++;

        if (*buf == '\'') {
            buf++;
            delim = strchr(buf, '\'');
        } else {
            delim = strchr(buf, ' ');
        }
    }
    argv[argc] = NULL;

    if (argc == 0) /* ignore blank line */
        return 1;

    /* should the job run in the background? */
    if ((bg = (*argv[argc - 1] == '&')) != 0) {
        argv[--argc] = NULL;
    }
    return bg;
}

/*
 * builtin_cmd - If the user has typed a built-in command then execute
 *    it immediately.
 */
int builtin_cmd(char **argv) {
    // 判定4种内置命令
    if (!strcmp(argv[0], "quit")) {
    }
    if (!strcmp(argv[0], "jobs")) {
        return 1;
    }
    if (!strcmp(argv[0], "bg")) {
        return 1;
    }
    if (!strcmp(argv[0], "fg")) {
        return 1;
    }
    return 0;  // 不是内部命令
}

/*
 * do_bgfg - Execute the builtin bg and fg commands
 */
void do_bgfg(char **argv) {
    struct job_t *jd = NULL;
    // 命令是否有效
    if (argv[1] == NULL) {
        printf("%s command requires PID or %%jobid argument\n", argv[0]);
        return;
    }
    // 判断参数后续是否全是数字
    if (argv[1][0] == '%') {
        if (!isdigit(argv[1][1])) {
            printf("%s: argument must be a pid or %%jobid\n", argv[0]);
            return;
        }

        int jid = atoi(&argv[1][1]);  // 获取 jid
        if (!(jd = getjobjid(jobs, jid))) {
            printf("%s: no such job\n", argv[1]);
            return;
        }
    }

    else {
        if (!isdigit(argv[1][0])) {
            printf("%s: argument must be a pid or %%jobid\n", argv[0]);
            return;
        }

        pid_t pid = atoi(argv[1]);  // 获取 pid
        if (!(jd = getjobpid(jobs, pid))) {
            printf("(%s): no such process\n", argv[1]);
            return;
        }
    }

    kill(-jd->pid, SIGCONT);  // 发送 SIGCONT 信号

    // 判断是否为后台进程
    if (!strcmp(argv[0], "bg")) {
        jd->state = BG;
        printf("[%d] (%d) %s", jd->jid, jd->pid, jd->cmdline);
    }

    else {
        jd->state = FG;
        waitfg(jd->pid);
    }

    return;
}

/*
 * waitfg - Block until process pid is no longer the foreground process
 */
void waitfg(pid_t pid) {
    struct job_t *fg_job = getjobpid(jobs, pid);
    if (!fg_job) {
        return;
    }
    while (fg_job->pid == pid && fg_job->state == FG) {
        sleep(1);
    }
    return;
}

/*****************
 * Signal handlers
 *****************/

/*
 * sigchld_handler - The kernel sends a SIGCHLD to the shell whenever
 *     a child job terminates (becomes a zombie), or stops because it
 *     received a SIGSTOP or SIGTSTP signal. The handler reaps all
 *     available zombie children, but doesn't wait for any other
 *     currently running children to terminate.
 */
void sigchld_handler(int sig) {
    pid_t child_pid;
    int status;

    // 循环获取 child_pid
    while ((child_pid = waitpid(-1, &status, WNOHANG | WUNTRACED)) > 0) {
        struct job_t *jd = getjobpid(jobs, child_pid);
        if (!jd) {
            printf("((%d): No such child", child_pid);
            return;
        }
        if (WIFSTOPPED(status)) {  // 如果 stopped
            jd->state = ST;
            printf("Job [%d] (%d) stopped by signal 20\n", jd->jid, child_pid);
        } else if (WIFSIGNALED(status)) {  // 如果 signalled
            deletejob(jobs, child_pid);
            printf("Job [%d] (%d) terminated by signal 2\n", jd->jid,
                   child_pid);
        } else if (WIFEXITED(status)) {  // 如果 exited
            deletejob(jobs, child_pid);
        } else {
            unix_error("waitpid error");
        }
    }
    return;
}

/*
 * sigint_handler - The kernel sends a SIGINT to the shell whenver the
 *    user types ctrl-c at the keyboard.  Catch it and send it along
 *    to the foreground job.
 */
void sigint_handler(int sig) {
    pid_t fpid;
    fpid = fgpid(jobs);  // 获取前台作业的 pid

    if (fpid > 0) {           // 如果已经有一个前台作业
        kill(-fpid, SIGINT);  // 向所有前台进程发送 SIGINT 信号
    }
    return;
}

/*
 * sigtstp_handler - The kernel sends a SIGTSTP to the shell whenever
 *     the user types ctrl-z at the keyboard. Catch it and suspend the
 *     foreground job by sending it a SIGTSTP.
 */
void sigtstp_handler(int sig) {
    pid_t fpid;
    fpid = fgpid(jobs);  // 获取前台作业的 pid

    if (fpid > 0) {  // 如果已经有一个正在运行的前台作业
        kill(-fpid, SIGTSTP);  /// 向所有前台进程发送 SIGTSTP 信号
    }
    return;
}

/*********************
 * End signal handlers
 *********************/

/***********************************************
 * Helper routines that manipulate the job list
 **********************************************/

/* clearjob - Clear the entries in a job struct */
void clearjob(struct job_t *job) {
    job->pid = 0;
    job->jid = 0;
    job->state = UNDEF;
    job->cmdline[0] = '\0';
}

/* initjobs - Initialize the job list */
void initjobs(struct job_t *jobs) {
    int i;

    for (i = 0; i < MAXJOBS; i++) clearjob(&jobs[i]);
}

/* maxjid - Returns largest allocated job ID */
int maxjid(struct job_t *jobs) {
    int i, max = 0;

    for (i = 0; i < MAXJOBS; i++)
        if (jobs[i].jid > max) max = jobs[i].jid;
    return max;
}

/* addjob - Add a job to the job list */
int addjob(struct job_t *jobs, pid_t pid, int state, char *cmdline) {
    int i;

    if (pid < 1) return 0;

    for (i = 0; i < MAXJOBS; i++) {
        if (jobs[i].pid == 0) {
            jobs[i].pid = pid;
            jobs[i].state = state;
            jobs[i].jid = nextjid++;
            if (nextjid > MAXJOBS) nextjid = 1;
            strcpy(jobs[i].cmdline, cmdline);
            if (verbose) {
                printf("Added job [%d] %d %s\n", jobs[i].jid, jobs[i].pid,
                       jobs[i].cmdline);
            }
            return 1;
        }
    }
    printf("Tried to create too many jobs\n");
    return 0;
}

/* deletejob - Delete a job whose PID=pid from the job list */
int deletejob(struct job_t *jobs, pid_t pid) {
    int i;

    if (pid < 1) return 0;

    for (i = 0; i < MAXJOBS; i++) {
        if (jobs[i].pid == pid) {
            clearjob(&jobs[i]);
            nextjid = maxjid(jobs) + 1;
            return 1;
        }
    }
    return 0;
}

/* fgpid - Return PID of current foreground job, 0 if no such job */
pid_t fgpid(struct job_t *jobs) {
    int i;

    for (i = 0; i < MAXJOBS; i++)
        if (jobs[i].state == FG) return jobs[i].pid;
    return 0;
}

/* getjobpid  - Find a job (by PID) on the job list */
struct job_t *getjobpid(struct job_t *jobs, pid_t pid) {
    int i;

    if (pid < 1) return NULL;
    for (i = 0; i < MAXJOBS; i++)
        if (jobs[i].pid == pid) return &jobs[i];
    return NULL;
}

/* getjobjid  - Find a job (by JID) on the job list */
struct job_t *getjobjid(struct job_t *jobs, int jid) {
    int i;

    if (jid < 1) return NULL;
    for (i = 0; i < MAXJOBS; i++)
        if (jobs[i].jid == jid) return &jobs[i];
    return NULL;
}

/* pid2jid - Map process ID to job ID */
int pid2jid(pid_t pid) {
    int i;

    if (pid < 1) return 0;
    for (i = 0; i < MAXJOBS; i++)
        if (jobs[i].pid == pid) {
            return jobs[i].jid;
        }
    return 0;
}

/* listjobs - Print the job list */
void listjobs(struct job_t *jobs) {
    int i;

    for (i = 0; i < MAXJOBS; i++) {
        if (jobs[i].pid != 0) {
            printf("[%d] (%d) ", jobs[i].jid, jobs[i].pid);
            switch (jobs[i].state) {
                case BG:
                    printf("Running ");
                    break;
                case FG:
                    printf("Foreground ");
                    break;
                case ST:
                    printf("Stopped ");
                    break;
                default:
                    printf("listjobs: Internal error: job[%d].state=%d ", i,
                           jobs[i].state);
            }
            printf("%s", jobs[i].cmdline);
        }
    }
}
/******************************
 * end job list helper routines
 ******************************/

/***********************
 * Other helper routines
 ***********************/

/*
 * usage - print a help message
 */
void usage(void) {
    printf("Usage: shell [-hvp]\n");
    printf("   -h   print this message\n");
    printf("   -v   print additional diagnostic information\n");
    printf("   -p   do not emit a command prompt\n");
    exit(1);
}

/*
 * unix_error - unix-style error routine
 */
void unix_error(char *msg) {
    fprintf(stdout, "%s: %s\n", msg, strerror(errno));
    exit(1);
}

/*
 * app_error - application-style error routine
 */
void app_error(char *msg) {
    fprintf(stdout, "%s\n", msg);
    exit(1);
}

/*
 * Signal - wrapper for the sigaction function
 */
handler_t *Signal(int signum, handler_t *handler) {
    struct sigaction action, old_action;

    action.sa_handler = handler;
    sigemptyset(&action.sa_mask); /* block sigs of type being handled */
    action.sa_flags = SA_RESTART; /* restart syscalls if possible */

    if (sigaction(signum, &action, &old_action) < 0) unix_error("Signal error");
    return (old_action.sa_handler);
}

/*
 * sigquit_handler - The driver program can gracefully terminate the
 *    child shell by sending it a SIGQUIT signal.
 */
void sigquit_handler(int sig) {
    printf("Terminating after receipt of SIGQUIT signal\n");
    exit(1);
}
```

## 运行结果与分析

```shell
# yaaannn @ YAAANNN-PC in ~/workspace/shlab-handout [22:39:50] C:255
$ make test01
./sdriver.pl -t trace01.txt -s ./tsh -a "-p"
#
# trace01.txt - Properly terminate on EOF.
#

# yaaannn @ YAAANNN-PC in ~/workspace/shlab-handout [22:44:21] 
$ make rtest01
./sdriver.pl -t trace01.txt -s ./tshref -a "-p"
#
# trace01.txt - Properly terminate on EOF.
#

```

经过检验，执行make test01到make test16的结果均与执行make rtest01到make rtest16的结果一致，符合要求。

