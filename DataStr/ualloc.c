/* $Id: ualloc.c,v 1.2 2000-09-07 18:47:22 geuzaine Exp $ */
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#include "ualloc.h"
#include "Message.h"

void *Malloc(size_t size)
{
  void *ptr;

  if (!size) return(NULL);
  ptr = malloc(size);
  if (ptr == NULL)
    Msg(ERROR, "Couldn't Allocate Requested Memory");
  return(ptr);
}

void *Calloc(size_t num, size_t size)
{
  void *ptr;

  if (!size) return(NULL);
  ptr = calloc(num, size);
  if (ptr == NULL)
    Msg(ERROR, "Couldn't Allocate and Initialize Requested Memory");
  return(ptr);
}

void *Realloc(void *ptr, size_t size)
{
  if (!size) return(NULL);
  ptr = realloc(ptr,size);
  if (ptr == NULL)
    Msg(ERROR, "Couldn't Reallocate Requested Memory");
  return(ptr);
}

void Free(void *ptr)
{
  if (ptr == NULL) return;
  free(ptr);
}
