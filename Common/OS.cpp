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
#include <psapi.h>
#include <direct.h>
#include <io.h>
#endif

#include "Message.h"

#if defined(WIN32) && !defined(__CYGWIN__)

// Unicode utility routines borrowed from FLTK

static unsigned utf8decode(const char* p, const char* end, int* len)
{
  static unsigned short cp1252[32] = {
    0x20ac, 0x0081, 0x201a, 0x0192, 0x201e, 0x2026, 0x2020, 0x2021,
    0x02c6, 0x2030, 0x0160, 0x2039, 0x0152, 0x008d, 0x017d, 0x008f,
    0x0090, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014,
    0x02dc, 0x2122, 0x0161, 0x203a, 0x0153, 0x009d, 0x017e, 0x0178
  };
  unsigned char c = *(unsigned char*)p;
  if (c < 0x80) {
    if (len) *len = 1;
    return c;
  } else if (c < 0xa0) {
    if (len) *len = 1;
    return cp1252[c-0x80];
  } else if (c < 0xc2) {
    goto FAIL;
  }
  if ( (end && p+1 >= end) || (p[1]&0xc0) != 0x80) goto FAIL;
  if (c < 0xe0) {
    if (len) *len = 2;
    return
      ((p[0] & 0x1f) << 6) +
      ((p[1] & 0x3f));
  } else if (c == 0xe0) {
    if (((unsigned char*)p)[1] < 0xa0) goto FAIL;
    goto UTF8_3;
  } else if (c < 0xf0) {
  UTF8_3:
    if ( (end && p+2 >= end) || (p[2]&0xc0) != 0x80) goto FAIL;
    if (len) *len = 3;
    return
      ((p[0] & 0x0f) << 12) +
      ((p[1] & 0x3f) << 6) +
      ((p[2] & 0x3f));
  } else if (c == 0xf0) {
    if (((unsigned char*)p)[1] < 0x90) goto FAIL;
    goto UTF8_4;
  } else if (c < 0xf4) {
  UTF8_4:
    if ( (end && p+3 >= end) || (p[2]&0xc0) != 0x80 || (p[3]&0xc0) != 0x80) goto FAIL;
    if (len) *len = 4;
    return
      ((p[0] & 0x07) << 18) +
      ((p[1] & 0x3f) << 12) +
      ((p[2] & 0x3f) << 6) +
      ((p[3] & 0x3f));
  } else if (c == 0xf4) {
    if (((unsigned char*)p)[1] > 0x8f) goto FAIL; // after 0x10ffff
    goto UTF8_4;
  } else {
  FAIL:
    if (len) *len = 1;
    return c;
  }
}

static unsigned utf8toUtf16(const char* src, unsigned srclen,
                            unsigned short* dst, unsigned dstlen)
{
  const char* p = src;
  const char* e = src+srclen;
  unsigned count = 0;
  if (dstlen) for (;;) {
    if (p >= e) {dst[count] = 0; return count;}
    if (!(*p & 0x80)) { // ascii
      dst[count] = *p++;
    } else {
      int len; unsigned ucs = utf8decode(p,e,&len);
      p += len;
      if (ucs < 0x10000) {
	dst[count] = ucs;
      } else {
	// make a surrogate pair:
	if (count+2 >= dstlen) {dst[count] = 0; count += 2; break;}
	dst[count] = (((ucs-0x10000u)>>10)&0x3ff) | 0xd800;
	dst[++count] = (ucs&0x3ff) | 0xdc00;
      }
    }
    if (++count == dstlen) {dst[count-1] = 0; break;}
  }
  // we filled dst, measure the rest:
  while (p < e) {
    if (!(*p & 0x80)) p++;
    else {
      int len; unsigned ucs = utf8decode(p,e,&len);
      p += len;
      if (ucs >= 0x10000) ++count;
    }
    ++count;
  }
  return count;
}

static wchar_t *wbuf[2] = {NULL, NULL};

static void setwbuf(int i, const char *f)
{
  // all strings in GetDP are supposed to be UTF8-encoded, which is natively
  // supported by Mac and Linux. Windows does not support UTF-8, but UTF-16
  // (through wchar_t), so we need to convert.
  if(i != 0 && i != 1) return;
  size_t l = strlen(f);
  unsigned wn = utf8toUtf16(f, (unsigned) l, NULL, 0) + 1;
  wbuf[i] = (wchar_t*)realloc(wbuf[i], sizeof(wchar_t)*wn);
  wn = utf8toUtf16(f, (unsigned) l, (unsigned short *)wbuf[i], wn);
  wbuf[i][wn] = 0;
}

#endif

FILE *FOpen(const char *f, const char *mode)
{
#if defined (WIN32) && !defined(__CYGWIN__)
  setwbuf(0, f);
  setwbuf(1, mode);
  return _wfopen(wbuf[0], wbuf[1]);
#else
  return fopen(f, mode);
#endif
}

void GetResources(double *s, long *mem)
{
#if !defined(WIN32) || defined(__CYGWIN__)
  static struct rusage r;
  getrusage(RUSAGE_SELF, &r);
  *s = (double)r.ru_utime.tv_sec + 1.e-6 * (double)r.ru_utime.tv_usec;
#if defined(__APPLE__)
  *mem = (long)r.ru_maxrss;
#else
  *mem = (long)(r.ru_maxrss * 1024L);
#endif
#else
  FILETIME creation, exit, kernel, user;
  if(GetProcessTimes(GetCurrentProcess(), &creation, &exit, &kernel, &user)){
    *s = 1.e-7 * 4294967296. * (double)user.dwHighDateTime +
         1.e-7 * (double)user.dwLowDateTime;
  }
  PROCESS_MEMORY_COUNTERS info;
  GetProcessMemoryInfo(GetCurrentProcess(), &info, sizeof(info));
  *mem = (long)info.PeakWorkingSetSize;
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

int RemoveFile(const std::string &fileName)
{
#if defined(WIN32) && !defined(__CYGWIN__)
  setwbuf(0, fileName.c_str());
  return _wunlink(wbuf[0]);
#else
  return unlink(fileName.c_str());
#endif
}

int CreateDir(const std::string &dirName)
{
  if(dirName.empty()) return 1;
#if defined(WIN32) && !defined(__CYGWIN__)
  setwbuf(0, dirName.c_str());
  if(_wmkdir(wbuf[0])) return 0;
#else
  if(mkdir(dirName.c_str(), 0777)) return 0;
#endif
  return 1;
}
