// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <map>
#include <string>
#include <vector>
#include <stdarg.h>

class GmshClient;
struct Constant;
struct Expression;
struct Group;
namespace onelab{ class client; }

// a class to manage messages
class Message {
 private:
  // current cpu number and total number of cpus
  static int _commRank, _commSize, _isCommWorld;
  // error count
  static int _warningCount, _errorCount;
  // last PETSc error code
  static int _lastPETScError;
  // should we exit on error?
  static bool _exitOnError, _operatingInTimeLoopAdaptive;
  // verbosity level (0: silent except fatal errors, 1: +errors, 2: +warnings,
  // 3: +direct+important info, 4: +info+progress, 5 (=normal): +cpu, 6:
  // +matinfo, 10: elementary matrices, 99: debug)
  static int _verbosity;
  // step (in %) of the progress meter and current progress %
  static int _progressMeterStep, _progressMeterCurrent;
  // report cpu time for each info message?
  static bool _infoCpu;
  // starting time (gettimeofday at startup)
  static double _startTime;
  // timers
  static std::map<std::string, double> _timers;
  // communication with Gmsh
  static GmshClient *_client;
  // communication with onelab server
  static onelab::client *_onelabClient;
 public:
  Message() {}
  static void Initialize(int argc, char **argv);
  static void Finalize();
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
  static void ResetErrorCounter(){ _errorCount = 0; }
  static int GetErrorCount(){ return _errorCount; }
  static void SetExitOnError(bool val){ _exitOnError = val; }
  static void SetOperatingInTimeLoopAdaptive(bool val){ _operatingInTimeLoopAdaptive = val; }
  static bool GetOperatingInTimeLoopAdaptive(){ return _operatingInTimeLoopAdaptive; }
  static void Warning(const char *fmt, ...);
  static void Info(const char *fmt, ...);
  static void Info(int level, const char *fmt, ...);
  static void Direct(const char *fmt, ...);
  static void Direct(int level, const char *fmt, ...);
  static void Check(const char *fmt, ...);
  static void Debug(const char *fmt, ...);
  static double GetWallClockTime();
  static void Cpu(const char *fmt, ...);
  static void Cpu(int level, bool printDate, bool printWallTime, bool printCpu,
                  bool printMem, bool printTraffic, const char *fmt, ...);
  static void ProgressMeter(int n, int N, const char *fmt, ...);
  static void ProgressMeter(int n, int N){ ProgressMeter(n, N, ""); }
  static void SetProgressMeterStep(int step){ _progressMeterStep = step; }
  static int GetProgressMeterStep(){ return _progressMeterStep; }
  static void ResetProgressMeter(){ if(!_commRank) _progressMeterCurrent = 0; }
  static void SetInfoCpu(bool val){ _infoCpu = val; }
  static void PrintErrorCounter(const char *title);
  static void SetLastPETScError(int ierr){ _lastPETScError = ierr; }
  static int GetLastPETScError(){ return _lastPETScError; }
  static double &Timer(std::string str){ return _timers[str]; }
  static void PrintTimers();
  static void InitializeSocket(std::string sockname);
  static void FinalizeSocket();
  static bool UseSocket(){ return _client ? true : false; }
  static void SendMergeFileRequest(const std::string &filename);
  static void SendOptionOnSocket(int num, std::string option);
  static void TestSocket();
  static void InitializeOnelab(std::string name, std::string sockname);
  static void FinalizeOnelab();
  static bool UseOnelab(){ return _onelabClient ? true : false; }
  static std::string GetOnelabClientName();
  static void SetOnelabNumber(std::string name, double val, bool visible=true);
  static void SetOnelabString(std::string name, std::string val, bool visible=true);
  static double GetOnelabNumber(std::string name, double defaultValue=0.,
                                bool errorIfMissing=false);
  static std::string GetOnelabString(std::string name, const std::string &defaultValue="",
                                     bool errorIfMissing=false);
  static std::string GetOnelabAction();
  static void AddOnelabNumberChoice(std::string name, const std::vector<double> &value,
                                    const char *color=0, const char *units=0);
  static void AddOnelabStringChoice(std::string name, std::string kind,
                                    std::string value, bool updateValue=true,
                                    bool readOnly=false);
  typedef std::map<std::string, std::vector<double> > fmap;
  typedef std::map<std::string, std::vector<std::string> > cmap;
  static void ExchangeOnelabParameter(Constant *c, fmap &fopt, cmap &copt);
  static void UndefineOnelabParameter(const std::string &name);
};

#endif
