// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

// This file contains a bunch of functions that depend on OS-dependent
// features and/or system calls

// these are available on all OSes
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <time.h>
#include <string.h>

#if defined(__APPLE__)
#include <sys/sysctl.h>
#endif

#if defined(__linux__) && !defined(BUILD_ANDROID)
#include <sys/sysinfo.h>
#endif

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
#include <sys/timeb.h>
#endif

#include "Message.h"

#if defined(WIN32) && !defined(__CYGWIN__)

// Unicode utility routines borrowed from FLTK

static unsigned int utf8decode(const char* p, const char* end, int* len)
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

static unsigned int utf8toUtf16(const char* src, unsigned int srclen,
                                unsigned short* dst, unsigned int dstlen)
{
  const char* p = src;
  const char* e = src+srclen;
  unsigned int count = 0;
  if (dstlen) for (;;) {
    if (p >= e) {dst[count] = 0; return count;}
    if (!(*p & 0x80)) { // ascii
      dst[count] = *p++;
    } else {
      int len; unsigned int ucs = utf8decode(p,e,&len);
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
      int len; unsigned int ucs = utf8decode(p,e,&len);
      p += len;
      if (ucs >= 0x10000) ++count;
    }
    ++count;
  }
  return count;
}

static unsigned int utf8FromUtf16(char* dst, unsigned int dstlen,
                                  const wchar_t* src, unsigned int srclen)
{
  unsigned int i = 0;
  unsigned int count = 0;
  if (dstlen) {
    for (;;) {
      unsigned int ucs;
      if (i >= srclen) {dst[count] = 0; return count;}
      ucs = src[i++];
      if (ucs < 0x80U) {
        dst[count++] = ucs;
        if (count >= dstlen) {dst[count-1] = 0; break;}
      }
      else if (ucs < 0x800U) { /* 2 bytes */
        if (count+2 >= dstlen) {dst[count] = 0; count += 2; break;}
        dst[count++] = 0xc0 | (ucs >> 6);
        dst[count++] = 0x80 | (ucs & 0x3F);
      }
      else if (ucs >= 0xd800 && ucs <= 0xdbff && i < srclen &&
	       src[i] >= 0xdc00 && src[i] <= 0xdfff) {
        /* surrogate pair */
        unsigned int ucs2 = src[i++];
        ucs = 0x10000U + ((ucs&0x3ff)<<10) + (ucs2&0x3ff);
        /* all surrogate pairs turn into 4-byte utf8 */
        if (count+4 >= dstlen) {dst[count] = 0; count += 4; break;}
        dst[count++] = 0xf0 | (ucs >> 18);
        dst[count++] = 0x80 | ((ucs >> 12) & 0x3F);
        dst[count++] = 0x80 | ((ucs >> 6) & 0x3F);
        dst[count++] = 0x80 | (ucs & 0x3F);
      }
      else {
        /* all others are 3 bytes: */
        if (count+3 >= dstlen) {dst[count] = 0; count += 3; break;}
        dst[count++] = 0xe0 | (ucs >> 12);
        dst[count++] = 0x80 | ((ucs >> 6) & 0x3F);
        dst[count++] = 0x80 | (ucs & 0x3F);
      }
    }
  }
  /* we filled dst, measure the rest: */
  while (i < srclen) {
    unsigned int ucs = src[i++];
    if (ucs < 0x80U) {
      count++;
    }
    else if (ucs < 0x800U) { /* 2 bytes */
      count += 2;
    }
    else if (ucs >= 0xd800 && ucs <= 0xdbff && i < srclen-1 &&
             src[i+1] >= 0xdc00 && src[i+1] <= 0xdfff) {
      /* surrogate pair */
      ++i;
      count += 4;
    }
    else {
      count += 3;
    }
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
  unsigned int wn = utf8toUtf16(f, (unsigned int) l, NULL, 0) + 1;
  wbuf[i] = (wchar_t*)realloc(wbuf[i], sizeof(wchar_t)*wn);
  wn = utf8toUtf16(f, (unsigned int) l, (unsigned short *)wbuf[i], wn);
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
#if defined(WIN32) && !defined(__CYGWIN__)
  FILETIME creation, exit, kernel, user;
  if(GetProcessTimes(GetCurrentProcess(), &creation, &exit, &kernel, &user)){
    *s = 1.e-7 * 4294967296. * (double)user.dwHighDateTime +
         1.e-7 * (double)user.dwLowDateTime;
  }
  PROCESS_MEMORY_COUNTERS info;
  GetProcessMemoryInfo(GetCurrentProcess(), &info, sizeof(info));
  *mem = (long)info.PeakWorkingSetSize;
#else
  static struct rusage r;
  getrusage(RUSAGE_SELF, &r);
  *s = (double)r.ru_utime.tv_sec + 1.e-6 * (double)r.ru_utime.tv_usec;
#if defined(__APPLE__)
  *mem = (long)r.ru_maxrss;
#else
  *mem = (long)(r.ru_maxrss * 1024L);
#endif
#endif
}

double GetTotalRam()
{
  double ram = 0;
#if defined(__APPLE__)
  int name[] = {CTL_HW, HW_MEMSIZE};
  int64_t value;
  size_t len = sizeof(value);
  if(sysctl(name, 2, &value, &len, NULL, 0) != -1)
    ram = value / (1024 * 1024);
#elif defined (WIN32)
  MEMORYSTATUSEX status;
  status.dwLength = sizeof(status);
  GlobalMemoryStatusEx(&status);
  ram = status.ullTotalPhys  / ((double)1024 * 1024);
#elif defined(BUILD_ANDROID)
  ram = 1024;
#elif defined(__linux__)
  struct sysinfo infos;
  if(sysinfo(&infos) != -1)
    ram = infos.totalram * (unsigned long)infos.mem_unit / ((double)1024 * 1024);
#endif
  return ram;
}

double GetTimeOfDay()
{
#if defined(WIN32) && !defined(__CYGWIN__)
  struct _timeb  localTime;
  _ftime(&localTime);
  return localTime.time + 1.e-3 * localTime.millitm;
#else
  struct timeval t;
  gettimeofday(&t, NULL);
  return t.tv_sec + 1.e-6 * t.tv_usec;
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

void SleepSeconds(double s)
{
#if defined(WIN32) && !defined(__CYGWIN__)
  Sleep((long)(1.e3 * s));
#else
  usleep((long)(1.e6 * s));
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

int RenameFile(const std::string &oldName, const std::string &newName)
{
#if defined(WIN32) && !defined(__CYGWIN__)
  setwbuf(0, oldName.c_str());
  setwbuf(1, newName.c_str());
  return _wrename(wbuf[0], wbuf[1]);
#else
  return rename(oldName.c_str(), newName.c_str());
#endif
}

int StatusFile(const std::string &fileName)
{
#if defined(WIN32) && !defined(__CYGWIN__)
  struct _stat buf;
  setwbuf(0, fileName.c_str());
  int ret = _wstat(wbuf[0], &buf);
#else
  struct stat buf;
  int ret = stat(fileName.c_str(), &buf);
#endif
  return ret;
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

int CreateDirs(const std::string &dirName)
{
  size_t cur = 0;
  int ret = 1;
  do {
    cur = dirName.find("/", cur + 1);
    if(!CreateDir(dirName.substr(0, cur))) ret = 0;
  } while(cur != std::string::npos);

  return ret;
}

static std::vector<std::string> splitFileName(const std::string &fileName)
{
  std::vector<std::string> s; s.resize(3);
  if(fileName.size()){
    // returns [path, baseName, extension]
    int idot = (int)fileName.find_last_of('.');
    int islash = (int)fileName.find_last_of("/\\");
    if(idot == (int)std::string::npos) idot = -1;
    if(islash == (int)std::string::npos) islash = -1;
    if(idot > 0)
      s[2] = fileName.substr(idot);
    if(islash > 0)
      s[0] = fileName.substr(0, islash + 1);
    s[1] = fileName.substr(s[0].size(), fileName.size() - s[0].size() - s[2].size());
  }
  return s;
}

std::string GetDirName(const std::string &fileName)
{
  return splitFileName(fileName)[0];
}

std::string GetBaseName(const std::string &fileName)
{
  return splitFileName(fileName)[1];
}

std::string GetFullPath(const std::string &fileName)
{
#if defined(WIN32) && !defined(__CYGWIN__)
  setwbuf(0, fileName.c_str());
  wchar_t path[MAX_PATH];
  unsigned long size = GetFullPathNameW(wbuf[0], MAX_PATH, path, NULL);
  if(size){
    char dst[MAX_PATH];
    utf8FromUtf16(dst, MAX_PATH, path, size);
    return std::string(dst);
  }
#else
  char path[4096];
  if(realpath(fileName.c_str(), path))
    return path;
#endif
  return fileName;
}
