/* $Id: GetDP.h,v 1.5 2003-02-09 07:55:22 geuzaine Exp $ */
#ifndef _GETDP_H_
#define _GETDP_H_

/* This header should be included in any GetDP source file. Modify it
   only if really necessary, since it will force the whole code to be
   rebuilt... */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Message.h"
#include "Malloc.h"

/* All the code to build a stack frame as it runs */

#define GETDP_DEBUG_STACK_SIZE 1000

extern int   GetDP_CurrentStackIndex ;
extern char *GetDP_CurrentFunction[GETDP_DEBUG_STACK_SIZE] ;
extern char *GetDP_CurrentSourceFile[GETDP_DEBUG_STACK_SIZE] ;
extern int   GetDP_CurrentSourceLine[GETDP_DEBUG_STACK_SIZE] ;

#ifdef GETDP_USE_DEBUG_STACK

#define GetDP_Begin(text)						\
  {									\
    if(GetDP_CurrentStackIndex < GETDP_DEBUG_STACK_SIZE){		\
      GetDP_CurrentFunction[GetDP_CurrentStackIndex] = text ;		\
      GetDP_CurrentSourceFile[GetDP_CurrentStackIndex] = RCSID ;	\
      GetDP_CurrentSourceLine[GetDP_CurrentStackIndex++] = __LINE__;	\
    }									\
  }

#define GetDP_End				\
  {						\
    if(GetDP_CurrentStackIndex > 0){		\
      GetDP_CurrentStackIndex-- ;		\
      return;					\
    }						\
  }

#define GetDP_Return(value)			\
  {						\
    if(GetDP_CurrentStackIndex > 0){		\
      GetDP_CurrentStackIndex-- ;		\
    }						\
    return(value);				\
   }

#define GetDP_Exit(value)			\
  {						\
    if(GetDP_CurrentStackIndex > 0){		\
      GetDP_CurrentStackIndex-- ;		\
      exit(value);				\
    }						\
  }

#else

#define GetDP_Begin(text)
#define GetDP_End { return; }
#define GetDP_Return(value) { return(value); }
#define GetDP_Exit(value) { exit(value); }

#endif

#endif
