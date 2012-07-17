// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <map>
#include <string>
#include <vector>
#include <stdarg.h>

class GmshClient;
namespace onelab{ class client; }
class Constant;
class Expression;
class Group;

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
  // communication with onelab server
  static onelab::client *_onelabClient;
  //parallelization
  static int _isCommWorld;
 public:
  Message() {}
  static void Init(int argc, char **argv);
  static void Exit(int level);
  static int GetCommRank(){ return _commRank; }
  static int GetCommSize(){ return _commSize; }
  static void SetCommRank(int val){ _commRank = val; }
  static void SetCommSize(int val){ _commSize = val; }
  static void Barrier();
  static int GetIsCommWorld(){return _isCommWorld; }
  static void SetIsCommWorld(int val){ _isCommWorld = val; }
  static int GetNumThreads();
  static int GetMaxThreads();
  static int GetThreadNum();
  static void SetVerbosity(int val){ _verbosity = val; }
  static int GetVerbosity(){ return _verbosity; }
  static void Fatal(const char *fmt, ...);
  static void Error(const char *fmt, ...);
  static void Warning(const char *fmt, ...);
  static void Info(const char *fmt, ...);
  static void Info(int verbosity, const char *fmt, ...);
  static void Direct(const char *fmt, ...);
  static void Check(const char *fmt, ...);
  static void Debug(const char *fmt, ...);
  static void Cpu(const char *fmt, ...);
  static void ProgressMeter(int n, int N, const char *fmt, ...);
  static void ProgressMeter(int n, int N){ ProgressMeter(n, N, ""); }
  static void SetProgressMeterStep(int step){ _progressMeterStep = (step > 0) ? step : 1; }
  static void ResetProgressMeter(){ if(!_commRank) _progressMeterCurrent = 0; }
  static double &Timer(std::string str){ return _timers[str]; }
  static void PrintTimers();
  static void InitializeSocket(std::string sockname);
  static void FinalizeSocket();
  static bool UseSocket(){ return _client ? true : false; }
  static void SendFileOnSocket(std::string filename);
  static void SendOptionOnSocket(int num, std::string option);
  static void TestSocket();
  static void InitializeOnelab(std::string name, std::string sockname);
  static void FinalizeOnelab();
  static bool UseOnelab(){ return _onelabClient ? true : false; }
  static std::string GetOnelabClientName();
  static void GetOnelabString(std::string name, char **val);
  static std::string GetOnelabAction();
  static void AddOnelabNumberChoice(std::string name, double val);
  static void AddOnelabStringChoice(std::string name, std::string kind, std::string choice);
  typedef std::map<std::string, std::vector<double> > fmap;
  typedef std::map<std::string, std::vector<std::string> > cmap;
  static void ExchangeOnelabParameter(Constant *c, fmap &fopt, cmap &copt);
  static void ExchangeOnelabParameter(Group *p, fmap &fopt, cmap &copt);
  static void ExchangeOnelabParameter(Expression *p, fmap &fopt, cmap &copt);
};

#endif
