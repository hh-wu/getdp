/* $Id: GetDP.h,v 1.3 2000-10-30 09:48:16 geuzaine Exp $ */
#ifndef _GETDP_H_
#define _GETDP_H_

/* This header should be included in any GetDP source file. Modify it
   only if really necessary, since it will force the whole code to be
   rebuilt... */

#include "Message.h"
#include "Malloc.h"

#define GETDP_STACK_SIZE 50
extern int   GetDP_CurrentStackIndex ;
extern char *GetDP_CurrentFunction[GETDP_STACK_SIZE] ;
extern char *GetDP_CurrentSourceFile[GETDP_STACK_SIZE] ;
extern int   GetDP_CurrentSourceLine[GETDP_STACK_SIZE] ;

#ifdef USE_DEBUG

#define GetDP_Begin(text)					\
  GetDP_CurrentFunction[GetDP_CurrentStackIndex] = text ;	\
  GetDP_CurrentSourceFile[GetDP_CurrentStackIndex] = RCSID ;    \
  GetDP_CurrentSourceLine[GetDP_CurrentStackIndex++] = __LINE__

#define GetDP_End				\
  GetDP_CurrentStackIndex-- ;			\
  return

#define GetDP_Return(value)			\
  GetDP_CurrentStackIndex-- ;			\
  return(value)

#define GetDP_Exit(value)			\
  GetDP_CurrentStackIndex-- ;			\
  exit(value)

#else

#define GetDP_Begin(text)
#define GetDP_End return
#define GetDP_Return(value) return(value)
#define GetDP_Exit(value) exit(value)

#endif

#endif
