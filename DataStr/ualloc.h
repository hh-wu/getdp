/* $Id: ualloc.h,v 1.2 2000-09-07 18:47:22 geuzaine Exp $ */
#ifndef _UALLOC_H_
#define _UALLOC_H_

/* #define size_t unsigned   */
/* #define NULL ((char *) 0) */

void *Malloc(size_t size);
void *Calloc(size_t num, size_t size);
void *Realloc(void *ptr, size_t size);
void  Free(void *ptr);

#endif
