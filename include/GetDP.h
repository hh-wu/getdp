/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

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
