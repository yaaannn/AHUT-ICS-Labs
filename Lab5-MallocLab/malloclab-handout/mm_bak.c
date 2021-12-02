#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "memlib.h"
#include "mm.h"

/*********************************************************
 * NOTE TO STUDENTS: Before you do anything else, please
 * provide your team information in the following struct.
 ********************************************************/
team_t team = {
    /* Team name */
    "",
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