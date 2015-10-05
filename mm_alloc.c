/*
 * mm_malloc
 * Searches for the next free block in memory to store the data. When such 
 * a block has been located, try to segment this block, creating two smaller
 * blocks, one in use and one that is free. In the case where there blocks are
 * not big enough, extend the size of the heap to accommodate more data.
 * 
 */

#include "mm_alloc.h"

#include <stdlib.h>

/* Your final implementation should comment out this macro. */
#define MM_USE_STUBS

s_block_ptr *first = NULL;
s_block_ptr *last = NULL;

void* mm_malloc(size_t size)
{
	s_block_ptr active = first;
	s_block_ptr segment = NULL;
	s_block_ptr extend = sbrk(0); //returns break address

	//Search for free block in memory
		
	*last = active;
	if(active!=NULL) {
		
	}
	
}

void* mm_realloc(void* ptr, size_t size)
{
#ifdef MM_USE_STUBS
    return realloc(ptr, size);
#else
#error Not implemented.
#endif
}

void mm_free(void* ptr)
{
#ifdef MM_USE_STUBS
    free(ptr);
#else
#error Not implemented.
#endif
}
