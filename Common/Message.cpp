// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <stdlib.h>
#include <stdio.h>

#if !defined(WIN32) || defined(__CYGWIN__)
#include <sys/time.h>
#include <sys/resource.h>
#endif

#if defined(WIN32)
#include <windows.h>
#include <process.h>
#endif

#if defined(__APPLE__)
#define RUSAGE_SELF      0
#define RUSAGE_CHILDREN -1
#endif

#include "Message.h"
#include "GmshClient.h"

// don't put the client in the Message class, to avoid having 
// to include GmshClient.h (and hence all the Windows crap) 
// in Message.h
static GmshClient _client;

int Message::_commRank = 0;
int Message::_commSize = 1;
int Message::_verbosity = 3;
int Message::_progressMeterStep = 10;
int Message::_progressMeterCurrent = 0;
std::map<std::string, double> Message::_timers;
int Message::_socket = 0;

void Message::Fatal(const char *fmt, ...)
{
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Error(str);
  }
  else{
    if(_commSize > 1) 
      fprintf(stderr, "Fatal   : [On processor %d] %s\n", _commRank, str);
    else
      fprintf(stderr, "Fatal   : %s\n", str);
    fflush(stderr);
  }
  exit(1);
}

void Message::Error(const char *fmt, ...)
{
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Error(str);
  }
  else{
    if(_commSize > 1) 
      fprintf(stderr, "Error   : [On processor %d] %s\n", _commRank, str);
    else
      fprintf(stderr, "Error   : %s\n", str);
    fflush(stderr);
  }

  FinalizeSocket();
  exit(1);
}

void Message::Warning(const char *fmt, ...)
{
  if(_commRank || _verbosity < 1) return;
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Warning(str);
  }
  else{
    fprintf(stdout, "Warning : %s\n", str);
    fflush(stdout);
  }
}

void Message::Info(const char *fmt, ...)
{
  if(_commRank || _verbosity < 2) return;
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Info(str);
  }
  else{
    fprintf(stdout, "Info    : %s\n", str);
    fflush(stdout);
  }
}

void Message::Direct(const char *fmt, ...)
{
  if(_commRank) return;
  va_list args;
  va_start(args, fmt);
  char str[1024];
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Info(str);
  }
  else{
    fprintf(stdout, "Info    : %s\n", str);
    fflush(stdout);
  }
}

void Message::Check(const char *fmt, ...)
{
  if(_commRank) return;
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Info(str);
  }
  else{
    fprintf(stdout, "%s", str);
    fflush(stdout);
  }
}

void Message::Debug(const char *fmt, ...)
{
  if(_verbosity < 99) return;
  va_list args;
  va_start(args, fmt);
  char str[1024];
  vsprintf(str, fmt, args);
  va_end(args);

  if(_socket){
    _client.Info(str);
  }
  else{
    if(_commSize > 1) 
      fprintf(stdout, "Debug   : [On processor %d] %s\n", _commRank, str);
    else
      fprintf(stdout, "Debug   : %s\n", str);
    fflush(stdout);
  }
}

static void GetResources(double *s, long *mem)
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

double Message::Cpu()
{
  double s = 0.;
  long mem = 0;
  GetResources(&s, &mem);
  return s;
}

void Message::Cpu(const char *fmt, ...)
{
  if(_commRank || _verbosity < 1) return;
  double s = 0.;
  long mem = 0;
  GetResources(&s, &mem);
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);
  if(strlen(fmt)) strcat(str, " ");

  if(_socket){
    char tmp[256];
    if(mem)
      sprintf(tmp, "(CPU = %gs Mem = %ldkb)\n", s, mem);
    else
      sprintf(tmp, "(CPU = %gs)\n", s);
    strcat(str, tmp);
    _client.Info(str);
  }
  else{
    fprintf(stdout, "Info    : ");
    if(mem)
      fprintf(stdout, "%s(CPU = %gs Mem = %ldkb)\n", str, s, mem);
    else
      fprintf(stdout, "%s(CPU = %gs)\n", str, s);
    fflush(stdout);
  }
}

void Message::ProgressMeter(int n, int N, const char *fmt, ...)
{
  if(_commRank || _verbosity < 2) return;
  va_list args;
  va_start(args, fmt);
  double percent = 100. * (double)n/(double)N;
  if(percent >= _progressMeterCurrent){
    vfprintf(stdout, fmt, args);
    fprintf(stdout, "(%d %%)                     \r", _progressMeterCurrent);
    while(_progressMeterCurrent < percent)
      _progressMeterCurrent += _progressMeterStep;
  }
  va_end(args);
  if(n > N - 1)
    fprintf(stdout, "Done!                                              \r");
  fflush(stdout);
}

void Message::PrintTimers()
{
  // do a single stdio call!
  std::string str;
  for(std::map<std::string, double>::iterator it = _timers.begin(); 
      it != _timers.end(); it++){
    if(it != _timers.begin()) str += ", ";
    char tmp[256];
    sprintf(tmp, "%s = %gs ", it->first.c_str(), it->second);
    str += std::string(tmp);
  }
  if(!str.size()) return;

  if(_socket){
    _client.Info((char*)str.c_str());
  }
  else{
    if(_commSize > 1) 
      fprintf(stdout, "Timers  : [On processor %d] %s\n", _commRank, str.c_str());
    else
      fprintf(stdout, "Timers  : %s\n", str.c_str());
    fflush(stdout);
  }
}

void Message::InitializeSocket(std::string sockname)
{
  if(sockname.size()){
    _socket = _client.Connect((char*)sockname.c_str());
    if(_socket < 0){
      Msg::Error("Could not connect to socket `%s'", sockname.c_str());
      _socket = 0;
    }
    else{
      _client.Start();
    }
  }
}

void Message::SendFileOnSocket(std::string filename)
{
  if(_socket){
    _client.MergeFile((char*)filename.c_str());
  }
}

void Message::SendOptionOnSocket(int num, std::string option)
{
  if(_socket){
    _client.Option(num, (char*)option.c_str());
  }
}

void Message::FinalizeSocket()
{
  if(_socket){
    _client.Stop();
    _client.Disconnect();
  }
}

#if defined(HAVE_PETSC)

#include "petsc.h"

void Message::Barrier()
{
  MPI_Barrier(PETSC_COMM_WORLD);
}

#else

void Message::Barrier()
{
}

#endif

#if defined(_OPENMP)

#include <omp.h>

int Message::GetNumThreads(){ return omp_get_num_threads(); }
int Message::GetMaxThreads(){ return omp_get_max_threads(); }
int Message::GetThreadNum(){ return omp_get_thread_num(); }

#else

int Message::GetNumThreads(){ return 1; }
int Message::GetMaxThreads(){ return 1; }
int Message::GetThreadNum(){ return 0; }

#endif
