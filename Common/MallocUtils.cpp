// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "GetDPConfig.h"
#include <stdio.h>
#include <stdlib.h>
#include "MallocUtils.h"
#include "Message.h"

#if !defined(HAVE_GMSH)

void *Malloc(size_t size)
{
  void *ptr;

  if(!size)
    return (NULL);
  ptr = malloc(size);
  if(ptr == NULL)
    Message::Fatal("Out of memory (buy some more RAM!)");
  return (ptr);
}

void *Calloc(size_t num, size_t size)
{
  void *ptr;

  if(!size)
    return (NULL);
  ptr = calloc(num, size);
  if(ptr == NULL)
    Message::Fatal("Out of memory (buy some more RAM!)");
  return (ptr);
}

void *Realloc(void *ptr, size_t size)
{
  if(!size)
    return (NULL);
  ptr = realloc(ptr, size);
  if(ptr == NULL)
    Message::Fatal("Out of memory (buy some more RAM!)");
  return (ptr);
}

void Free(void *ptr)
{
  if(ptr == NULL)
    return;
  free(ptr);
}

#endif
