// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <map>
#include <string>
#include <stdarg.h>

class GmshClient;

// a class to manage messages
class Message {
 private:
  // current cpu number and total number of cpus
  static int _commRank, _commSize;
  // verbosity level
  static int _verbosity;
  // step (in %) of the progress meter and current progress %
  static int _progressMeterStep, _progressMeterCurrent;
  // timers
  static std::map<std::string, double> _timers;
  // communication with Gmsh
  static GmshClient *_client;
 public:
  Message() {}
  static void Init(int argc, char **argv){}
  static void Exit(int level){}
  static int GetCommRank(){ return _commRank; }
  static int GetCommSize(){ return _commSize; }
  static void SetCommRank(int val){ _commRank = val; }
  static void SetCommSize(int val){ _commSize = val; }
  static void Barrier();
  static int GetNumThreads();
  static int GetMaxThreads();
  static int GetThreadNum();
  static void SetVerbosity(int val){ _verbosity = val; }
  static int GetVerbosity(){ return _verbosity; }
  static void Fatal(const char *fmt, ...);
  static void Error(const char *fmt, ...);
  static void Warning(const char *fmt, ...);
  static void Info(const char *fmt, ...);
  static void Direct(const char *fmt, ...);
  static void Check(const char *fmt, ...);
  static void Debug(const char *fmt, ...);
  static void Cpu(const char *fmt, ...);
  static void ProgressMeter(int n, int N, const char *fmt, ...);
  static void ProgressMeter(int n, int N){ ProgressMeter(n, N, ""); }
  static void SetProgressMeterStep(int step){ _progressMeterStep = step; }
  static void ResetProgressMeter(){ if(!_commRank) _progressMeterCurrent = 0; }
  static double &Timer(std::string str){ return _timers[str]; }
  static void PrintTimers();
  static void InitializeSocket(std::string sockname);
  static void SendFileOnSocket(std::string filename);
  static void SendOptionOnSocket(int num, std::string option);
  static void TestSocket();
  static void FinalizeSocket();
  static bool UseSocket(){ return _client ? true : false; }
};

typedef Message Msg;

#endif
