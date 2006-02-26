#define RCSID "$Id: OS.c,v 1.2 2006-02-26 17:00:32 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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

/* This file contains a bunch of functions that depend on OS-dependent
   features and/or system calls*/

/* these are available on all OSes */
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

#if !defined(WIN32) || defined(__CYGWIN__)
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>
#else
#include <windows.h>
#include <process.h>
#include <io.h>
#endif

#if defined(__APPLE__)
#define RUSAGE_SELF      0
#define RUSAGE_CHILDREN -1
#endif

#include "Message.h"

void GetResources(double *s, long *mem)
{
#if !defined(WIN32) || defined(__CYGWIN__)
  static struct rusage r;
  getrusage(RUSAGE_SELF, &r);
  *s = (double)r.ru_utime.tv_sec + 1.e-6 * (double)r.ru_utime.tv_usec;
  *mem = (long)r.ru_maxrss;
#else
  FILETIME creation, exit, kernel, user;
  if(GetProcessTimes(GetCurrentProcess(), &creation, &exit, &kernel, &user)){
    *s = 1.e-7 * 4294967296. * (double)user.dwHighDateTime +
         1.e-7 * (double)user.dwLowDateTime;
  }
  *mem = 0;
#endif
}

void CheckResources(void){
#if !defined (WIN32) || defined(__CYGWIN__)
  static struct rlimit r;

  getrlimit(RLIMIT_STACK, &r);

  /* Try to get at least 1 MB of stack. Running with too small a stack
     causes getdp to crash in the recursive calls (mainly Cal_WholeQuantity) */
  if(r.rlim_cur < 1024*1024){
    Msg(INFO, "Increasing process stack size (%d kB < 1 MB)", r.rlim_cur/1024);
    r.rlim_cur = r.rlim_max;
    setrlimit(RLIMIT_STACK, &r);
  }
#endif
}

int GetProcessId()
{
#if !defined(WIN32) || defined(__CYGWIN__)
  return getpid();
#else
  return _getpid();
#endif
}

int UnlinkFile(char *filename)
{
#if !defined(WIN32) || defined(__CYGWIN__)
  return unlink(filename);
#else
  return _unlink(filename);
#endif
}
