// GetDP - Copyright (C) 1997-2013 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

// This file contains a bunch of functions that depend on OS-dependent
// features and/or system calls

// these are available on all OSes
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <time.h>

#if !defined(WIN32) || defined(__CYGWIN__)
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>
#endif

#if defined(WIN32)
#include <windows.h>
#include <process.h>
#include <io.h>
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

void IncreaseStackSize()
{
#if !defined (WIN32) || defined(__CYGWIN__)
  static struct rlimit r;

  getrlimit(RLIMIT_STACK, &r);

  // Try to get at least 16 MB of stack. Running with too small a stack
  // can cause crashes in the recursive calls (cf. Cal_Quantity)
  if(r.rlim_cur < 16 * 1024 * 1024){
    Message::Info("Increasing process stack size (%d kB < 16 MB)", r.rlim_cur / 1024);
    r.rlim_cur = r.rlim_max;
    setrlimit(RLIMIT_STACK, &r);
  }
#endif
}

int BlockingSystemCall(const char *command)
{
#if defined(WIN32)
  STARTUPINFO suInfo;
  PROCESS_INFORMATION prInfo;
  memset(&suInfo, 0, sizeof(suInfo));
  suInfo.cb = sizeof(suInfo);
  Message::Info("Calling '%s'", command);
  CreateProcess(NULL, (char*)command, NULL, NULL, FALSE,
                NORMAL_PRIORITY_CLASS, NULL, NULL, &suInfo, &prInfo);
  // wait until child process exits.
  WaitForSingleObject(prInfo.hProcess, INFINITE);
  // close process and thread handles.
  CloseHandle(prInfo.hProcess);
  CloseHandle(prInfo.hThread);
  return 0;
#else
  if(!system(NULL)) {
    Message::Error("Could not find /bin/sh: aborting system call");
    return 1;
  }
  Message::Info("Calling '%s'", command);
  return system(command);
#endif
}

int UnlinkFile(const std::string &fileName)
{
#if !defined(WIN32) || defined(__CYGWIN__)
  return unlink(fileName.c_str());
#else
  return _unlink(fileName.c_str());
#endif
}
