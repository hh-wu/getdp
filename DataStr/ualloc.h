#ifndef _UALLOC_H_
#define _UALLOC_H_

/* #define size_t unsigned   */
/* #define NULL ((char *) 0) */

void *Malloc(size_t size);
void *Calloc(size_t num, size_t size);
void *Realloc(void *ptr, size_t size);
void  Free(void *ptr);

#endif
