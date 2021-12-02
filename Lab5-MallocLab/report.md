# 说明

1. 请提交该文件生成的HTML文件, 生成快捷键为 C-c C-e h h.
2. HTML文件名格式: cachelab-2020-179074123-李雷.html

# Malloc Lab

## 解题思路的文字说明

本次 lab，malloclab，自己手写一个内存分配器。

mm_init()： 用双边界标记将堆的头部初始化为8字节已占用的序言块，尾部初始化为0字节已占用的结尾块，以方便边界条件的处理；头部前面还需要填入一个字大小的零（alignment padding），以满足每个块有效载荷双字对齐的要求；初始堆为空时需要调用 extend_heap() 申请 CHUNKSIZE 大小的空间，还需要初始化大小类链表，让每个链表初始时指向NULL；

extend_heap()： 调用 mem_sbrk 申请新的空间来完成堆的增长，并且在扩展堆时满足对齐到双字的要求，扩展成功后为新的空闲块初始化头部和尾部边界标记，将其加入隐式空闲链表的尾部，最后调用 coalesce() 检查是否需要与前面的空闲块进行合并；

coalesce()：根据四种情况进行空闲块的合并，需要调用 remove_list() 从大小类链表中删除大小发生变化的块，四种情况地最后都需要调用 insert_list() 将合并后的块插入到大小类链表中去；

remove_list( )与 insert_list() ：前者给定块指针，将块指针从分离空闲链表中去掉；后者给定块指针和块大小（其实也可以不给块大小，这里为了方便直接传参传进来了），将块插入到合适的链表中合适的位置（链表从小到大排列）。两者的操作较为相似，都需要根据大小确定大小类链表的标号（这一步通过循环移位完成），然后计算大小类链表的起始地址 heap_listp + class_idx * WSIZE ，最后遍历从头到尾访问该大小类链表找到删除/插入位置。需要分为四种情况：1）中部删除/插入；2）头部删除/插入；3）尾部删除/插入；4）只剩一个表元的删除/空链表插入。我的代码中对其公共部分作了code motion来提高速度；

mm_malloc()：函数先将传入的 size 向上对齐到双字，并留出边界标记所需的空间，接着调用   find_fit() 函数在隐式空闲链表中寻找合适的块，若有则调用 place() 占用空闲块，否则调用 extend_heap() 扩展堆之后占用空闲块同时优化双字对齐操作；调用 find_fit() 在分离空闲链表中寻找合适的块；用 place() 的返回值作为申请空间成功时的返回值；

find_fit()：利用分离适配找到对应的大小类链表，在链表中做首次适配找寻合适大小的块，若没有合适大小的块则返回 NULL ；

mm_free()：简单地将被释放块的边界标记中的占用位标记为0，并调用 coalesce() 检查是否需要合并空闲块；

mm_realloc()：最主要的一点是检查旁边的块是不是空闲的，如果是空闲的，并且旁边块的大小加上当前块的大小比需要的新的空间大，那么进行块的合并，并且将合并后的块作为新的空间，否则申请新的空间。

## 代码

```c
#include "mm.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "memlib.h"

/*********************************************************
 * NOTE TO STUDENTS: Before you do anything else, please
 * provide your team information in the following struct.
 ********************************************************/
team_t team = {
    /* Team name */
    "None",
    /* First member's full name */
    "何岩",
    /* First member's email address */
    "199074277",
    /* Second member's full name (leave blank if none) */
    "",
    /* Second member's email address (leave blank if none) */
    ""};

/* single word (4) or double word (8) alignment */
#define ALIGNMENT 8

/* rounds up to the nearest multiple of ALIGNMENT */
#define ALIGN(size) (((size) + (ALIGNMENT - 1)) & ~0x7)

#define SIZE_T_SIZE (ALIGN(sizeof(size_t)))

/*附加的宏定义*/
#define WSIZE 4
#define DSIZE 8
#define CHUNKSIZE 16
#define OVERHEAD 24
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define PACK(size, alloc) ((size) | (alloc))
#define GET(p) (*(size_t *)(p))
#define PUT(p, value) (*(size_t *)(p) = (value))
#define GET_SIZE(p) (GET(p) & ~0x7)
#define GET_ALLOC(p) (GET(p) & 0x1)
#define HDRP(bp) ((void *)(bp)-WSIZE)
#define FTRP(bp) ((void *)(bp) + GET_SIZE(HDRP(bp)) - DSIZE)
#define NEXT_BLKP(bp) ((void *)(bp) + GET_SIZE(HDRP(bp)))
#define PREV_BLKP(bp) ((void *)(bp)-GET_SIZE(HDRP(bp) - WSIZE))
#define NEXT_FREEP(bp) (*(void **)(bp + DSIZE))
#define PREV_FREEP(bp) (*(void **)(bp))

static char *heap_listp = 0;
static char *free_listp = 0;

//函数原型声明
static void *extend_heap(size_t words);
static void place(void *bp, size_t size);
static void *find_fit(size_t size);
static void *coalesce(void *bp);
static void insert_at_front(void *bp);
static void remove_block(void *bp);

/**
 * @brief 初始化 malloc
 */
int mm_init(void) {
    //初始化 empty heap
    if ((heap_listp = mem_sbrk(2 * OVERHEAD)) == NULL) return -1;

    //初始化 free list 指针
    PUT(heap_listp, 0);
    PUT(heap_listp + WSIZE, PACK(OVERHEAD, 1));
    PUT(heap_listp + DSIZE, 0);
    PUT(heap_listp + DSIZE + WSIZE, 0);
    PUT(heap_listp + OVERHEAD, PACK(OVERHEAD, 1));
    PUT(heap_listp + WSIZE + OVERHEAD, PACK(0, 1));

    free_listp = heap_listp + DSIZE;

    //用 CHUNKSIZE 字节的 free block 来扩展 empty heap
    if (extend_heap(CHUNKSIZE / WSIZE) == NULL) return -1;

    return 0;
}

/**
 * @brief 根据 size 返回一个指针，该指针指向这个 block 的 payload 首地址
 * @param size block 大小
 * @return block point
 */

void *mm_malloc(size_t size) {
    size_t adjustedsize = MAX(ALIGN(size) + DSIZE, OVERHEAD);
    size_t extendedsize = MAX(adjustedsize, CHUNKSIZE);
    char *bp;

    //如果请求的大小小于0，则忽略不计
    if (size <= 0) return NULL;

    //遍历 free list，找到满足的 block
    if ((bp = find_fit(adjustedsize))) {
        place(bp, adjustedsize);
        return bp;
    }

    if ((bp = extend_heap(extendedsize / WSIZE)) == NULL) return NULL;

    place(bp, adjustedsize);
    return bp;
}

/**
 * @brief Freeing a block does nothing.
 */
void mm_free(void *bp) {
    if (!bp) return;
    size_t size = GET_SIZE(HDRP(bp));
    PUT(HDRP(bp), PACK(size, 0));
    PUT(FTRP(bp), PACK(size, 0));
    coalesce(bp);
}

/**
 * @brief mm_realloc - Implemented simply in terms of mm_malloc and mm_free
 */
void *mm_realloc(void *bp, size_t size) {
    void *oldbp = bp;
    void *newbp;
    size_t adjustedsize = MAX(ALIGN(size) + DSIZE, OVERHEAD);

    newbp = mm_malloc(size);
    if (newbp == NULL) return NULL;
    adjustedsize = GET_SIZE(HDRP(oldbp));
    if (size < adjustedsize) adjustedsize = size;
    memcpy(newbp, oldbp, adjustedsize);
    mm_free(oldbp);
    return newbp;
}

/**
 * @brief 使用 free block 扩展 heap
 * @param words 用来扩展 heap 的大小
 * @return 新获得的 heap 空间中 first block 的指针。
 */
static void *extend_heap(size_t words) {
    char *bp;
    size_t size;

    size = (words % 2) ? (words + 1) * WSIZE : words * WSIZE;  //分配偶数个大小
    if (size < OVERHEAD) size = OVERHEAD;                      // 保持一致
    if ((long)(bp = mem_sbrk(size)) == -1)  //如果发生错误，返回null
        return NULL;

    //初始化free block的header/footer和epilogue header
    PUT(HDRP(bp), PACK(size, 0));
    PUT(FTRP(bp), PACK(size, 0));
    PUT(HDRP(NEXT_BLKP(bp)), PACK(0, 1));
    return coalesce(bp);
}

/**
 * @brief 将新释放的 block 与相邻的 free block 相结合
 * @param bp 新释放的 block point
 * @return 指向 coalesced block 的指针
 */
static void *coalesce(void *bp) {
    size_t previous_alloc =
        GET_ALLOC(FTRP(PREV_BLKP(bp))) || PREV_BLKP(bp) == bp;
    size_t next__alloc = GET_ALLOC(HDRP(NEXT_BLKP(bp)));
    size_t size = GET_SIZE(HDRP(bp));

    if (previous_alloc && !next__alloc)  // case 1： 前分配，后free
    {
        size += GET_SIZE(HDRP(NEXT_BLKP(bp)));
        remove_block(NEXT_BLKP(bp));
        PUT(HDRP(bp), PACK(size, 0));
        PUT(FTRP(bp), PACK(size, 0));
    }

    else if (!previous_alloc && next__alloc)  // case 2： 前free，后分配
    {
        size += GET_SIZE(HDRP(PREV_BLKP(bp)));
        bp = PREV_BLKP(bp);
        remove_block(bp);
        PUT(HDRP(bp), PACK(size, 0));
        PUT(FTRP(bp), PACK(size, 0));
    }

    else if (!previous_alloc && !next__alloc)  // case3：前后两个都free
    {
        size += GET_SIZE(HDRP(PREV_BLKP(bp))) + GET_SIZE(HDRP(NEXT_BLKP(bp)));
        remove_block(PREV_BLKP(bp));
        remove_block(NEXT_BLKP(bp));
        bp = PREV_BLKP(bp);
        PUT(HDRP(bp), PACK(size, 0));
        PUT(FTRP(bp), PACK(size, 0));
    }
    insert_at_front(bp);  // 将 block 插入到 free list 的开始部分
    return bp;
}

/**
 * @brief 将 block 插入到 free list 的开始部分
 * @param bp 要添加到 free list 开始的 block point
 */
static void insert_at_front(void *bp) {
    NEXT_FREEP(bp) = free_listp;  // 设置下一个指针到 free list 的开始位置
    PREV_FREEP(free_listp) = bp;  // 将当前的前一个 block 设置为新的 block
    PREV_FREEP(bp) = NULL;        // 将前一个指针设为空
    free_listp = bp;
}

/**
 * @brief 从 free list 中删除一个 block
 * @param bp 要从 free list 中删除的 block 的指针。
 */
static void remove_block(void *bp) {
    if (PREV_FREEP(bp))  // 设置前一个 block 的指针指向下一个 block
        NEXT_FREEP(PREV_FREEP(bp)) = NEXT_FREEP(bp);
    else
        free_listp = NEXT_FREEP(bp);  // 将 free list 设置为下一个 block
    PREV_FREEP(NEXT_FREEP(bp)) = PREV_FREEP(bp);
}

/**
 * @brief 找到一个合适给定大小的 block
 * @param size 适合的 block 的大小
 * @return 用于分配的 block 的指针
 */
static void *find_fit(size_t size) {
    void *bp;

    // 遍历整个 free list，如果合适，返回指针
    for (bp = free_listp; GET_ALLOC(HDRP(bp)) == 0; bp = NEXT_FREEP(bp))
        if (size <= GET_SIZE(HDRP(bp))) return bp;
    return NULL;
}

/**
 * @brief 将一个指定大小的 block 放置到 free block 的开始处
 * @param bp 指向 free block 的 block point
 * @param size 要放置的 block 的大小
 */
static void place(void *bp, size_t size) {
    size_t totalsize = GET_SIZE(HDRP(bp));

    if ((totalsize - size) >= OVERHEAD) {
        PUT(HDRP(bp), PACK(size, 1));
        PUT(FTRP(bp), PACK(size, 1));
        remove_block(bp);
        bp = NEXT_BLKP(bp);
        PUT(HDRP(bp), PACK(totalsize - size, 0));
        PUT(FTRP(bp), PACK(totalsize - size, 0));
        coalesce(bp);
    } else {
        PUT(HDRP(bp), PACK(totalsize, 1));
        PUT(FTRP(bp), PACK(totalsize, 1));
        remove_block(bp);
    }
}
```

## 运行结果与分析

```shell
# yaaannn @ YAAANNN-PC in ~/workspace/malloclab-handout [22:19:22] 
$ ./mdriver -V -f short1-bal.rep
Team Name:199074277
Member 1 :何岩:199074277
Measuring performance with gettimeofday().

Testing mm malloc
Reading tracefile: short1-bal.rep
Checking mm_malloc for correctness, efficiency, and performance.

Results for mm malloc:
trace  valid  util     ops      secs  Kops
 0       yes   66%      12  0.000000 24000
Total          66%      12  0.000000 24000

Perf index = 40 (util) + 40 (thru) = 80/100

# yaaannn @ YAAANNN-PC in ~/workspace/malloclab-handout [22:19:18] 
$ ./mdriver -V -f short2-bal.rep
Team Name:199074277
Member 1 :何岩:199074277
Measuring performance with gettimeofday().

Testing mm malloc
Reading tracefile: short2-bal.rep
Checking mm_malloc for correctness, efficiency, and performance.

Results for mm malloc:
trace  valid  util     ops      secs  Kops
 0       yes   99%      12  0.000001 20000
Total          99%      12  0.000001 20000

Perf index = 60 (util) + 40 (thru) = 100/100
```

对于两个测试用例，分别是80分和100分，已经不错了，但仍有待优化。

