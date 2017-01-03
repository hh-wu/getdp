// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <algorithm>
#include <sys/stat.h>
#include "GetDPConfig.h"
#include "Message.h"
#include "GmshSocket.h"
#include "onelab.h"
#include "OS.h"
#include "ProData.h" // for onelab
#include "ProParser.h" // for onelab

#if !defined(WIN32) || defined(__CYGWIN__)
#include <sys/time.h>
#include <sys/resource.h>
#endif

#if defined(WIN32)
#include <windows.h>
#include <process.h>
#endif

#if defined(HAVE_PETSC)
#include "petsc.h"
#endif

#if defined(HAVE_GSL)
#include <gsl/gsl_errno.h>
#endif

#if defined(HAVE_GMSH)
#include <gmsh/Gmsh.h>
#include <gmsh/GmshConfig.h>
#include <gmsh/GmshMessage.h>
#endif

#if defined(HAVE_OCTAVE)
#undef _D1
#undef _D2
#undef HAVE_ARPACK
#include <octave/oct.h>
#include <octave/octave.h>
#include <octave/toplev.h>
#endif

#if defined(HAVE_PYTHON)
#undef HAVE_DLOPEN
#include <Python.h>
#endif

int Message::_commRank = 0;
int Message::_commSize = 1;
int Message::_isCommWorld = 1; // is the communicator set to WORLD (==1) or SELF (!=1)
int Message::_errorCount = 0;
int Message::_lastPETScError = 0;
bool Message::_exitOnError = false;
bool Message::_operatingInTimeLoopAdaptive = false;
int Message::_verbosity = 5;
int Message::_progressMeterStep = 10;
int Message::_progressMeterCurrent = 0;
bool Message::_infoCpu = false;
double Message::_startTime = 0.;
std::map<std::string, double> Message::_timers;
GmshClient* Message::_client = 0;
onelab::client* Message::_onelabClient = 0;
#if !defined(HAVE_ONELAB) // if Gmsh is compiled without onelab
onelab::server *onelab::server::_server = 0;
#endif

#if defined(HAVE_NO_VSNPRINTF)
static int vsnprintf(char *str, size_t size, const char *fmt, va_list ap)
{
  if(strlen(fmt) > size - 1){ // just copy the format
    strncpy(str, fmt, size - 1);
    str[size - 1] = '\0';
    return size;
  }
  return vsprintf(str, fmt, ap);
}
#endif

#if defined(_MSC_VER) && (_MSC_VER == 1310) //NET 2003
#define vsnprintf _vsnprintf
#endif

#if defined(HAVE_GSL)
static void gslErrorHandler(const char *reason, const char *file, int line,
                            int gsl_errno)
{
  Message::Error("GSL: %s (%s, line %d)", reason, file, line);
}
#endif

void Message::Initialize(int argc, char **argv)
{
  _startTime = GetTimeOfDay();
  _errorCount = 0;
#if defined(HAVE_PETSC)
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &_commRank);
  MPI_Comm_size(MPI_COMM_WORLD, &_commSize);
  MPI_Errhandler_set(MPI_COMM_WORLD, MPI_ERRORS_RETURN);
#endif
#if defined(HAVE_GSL)
  gsl_set_error_handler(&gslErrorHandler);
#endif
#if defined(HAVE_OCTAVE)
  string_vector oargv(2);
  oargv(0) = "embedded";
  oargv(1) = "-q";
  octave_main(2, oargv.c_str_vec(), 1);
#endif
#if defined(HAVE_PYTHON)
#if (PY_MAJOR_VERSION < 3)
  Py_SetProgramName(argv[0]);
  Py_InitializeEx(0);
  PySys_SetArgv(argc, argv);
#else // requires Python 3.5
  std::vector<wchar_t*> wargv(argc ? argc : 1);
  for(int i = 0; i < argc; i++)
    wargv[i] = Py_DecodeLocale(argv[i], NULL);
  Py_SetProgramName(wargv[0]);
  Py_InitializeEx(0);
  PySys_SetArgv(argc, &wargv[0]);
#endif
#endif
}

void Message::Finalize()
{
#if defined(HAVE_PETSC)
  // if: to avoid a 'PETSC ERROR' message when calling MPI_Finalize()
  // (not coherent with prior MPI_Init(&argc, &argv)... but do nothing when _commSize == 1)
  if(_commSize > 1){
    int initialized, finalized;
    MPI_Initialized(&initialized);
    MPI_Finalized(&finalized);
    if(initialized && !finalized)
      MPI_Finalize();
  }
#endif
  FinalizeSocket();
  FinalizeOnelab();
#if defined(HAVE_PYTHON)
  // FIXME: this should be called, but it segfaults if the getdp lib is itself
  // wrapped into python with swig
  //Py_Finalize();
#endif
}

void Message::Exit(int level)
{
#if defined(HAVE_PETSC)
  if(level && _commSize > 1){
    // abort (and not finalize) in order to terminate the full job *now*
    MPI_Abort(MPI_COMM_WORLD, level);
  }
#endif
  Finalize();
#if defined(HAVE_OCTAVE)
  clean_up_and_exit(level);
#else
  exit(level);
#endif
}

static int streamIsFile(FILE* stream)
{
  // the given stream is definitely not interactive if it is a regular file
  struct stat stream_stat;
  if(fstat(fileno(stream), &stream_stat) == 0){
    if(stream_stat.st_mode & S_IFREG) return 1;
  }
  return 0;
}

static int streamIsVT100(FILE* stream)
{
  // if running inside emacs the terminal is not VT100
  const char* emacs = getenv("EMACS");
  if(emacs && *emacs == 't') return 0;

  // list of known terminal names (from cmake)
  static const char* names[] =
    {"Eterm", "ansi", "color-xterm", "con132x25", "con132x30", "con132x43",
     "con132x60", "con80x25",  "con80x28", "con80x30", "con80x43", "con80x50",
     "con80x60",  "cons25", "console", "cygwin", "dtterm", "eterm-color", "gnome",
     "gnome-256color", "konsole", "konsole-256color", "kterm", "linux", "msys",
     "linux-c", "mach-color", "mlterm", "putty", "rxvt", "rxvt-256color",
     "rxvt-cygwin", "rxvt-cygwin-native", "rxvt-unicode", "rxvt-unicode-256color",
     "screen", "screen-256color", "screen-256color-bce", "screen-bce", "screen-w",
     "screen.linux", "vt100", "xterm", "xterm-16color", "xterm-256color",
     "xterm-88color", "xterm-color", "xterm-debian", 0};
  const char** t = 0;
  const char* term = getenv("TERM");
  if(term){
    for(t = names; *t && strcmp(term, *t) != 0; ++t) {}
  }
  if(!(t && *t)) return 0;
  return 1;
}

void Message::Fatal(const char *fmt, ...)
{
  _errorCount++;

  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_client){
    _client->Error(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendError(str);
  }
  else{
    const char *c0 = "", *c1 = "";
    if(!streamIsFile(stderr) && streamIsVT100(stderr)){
      c0 = "\33[1m\33[31m"; c1 = "\33[0m";  // bold red
    }
    if(_commSize > 1)
      fprintf(stderr, "%sFatal   : [rank %3d] %s%s\n", c0, _commRank, str, c1);
    else
      fprintf(stderr, "%sFatal   : %s%s\n", c0, str, c1);
    fflush(stderr);
  }

  Exit(1);
}

void Message::Error(const char *fmt, ...)
{
  _errorCount++;

  if(!_exitOnError && _verbosity < 1) return;

  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_client){
    _client->Error(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendError(str);
  }
  else{
    const char *c0 = "", *c1 = "";
    if(!streamIsFile(stderr) && streamIsVT100(stderr)){
      c0 = "\33[1m\33[31m"; c1 = "\33[0m";  // bold red
    }
    if(_commSize > 1)
      fprintf(stderr, "%sError   : [rank %3d] %s%s\n", c0, _commRank, str, c1);
    else
      fprintf(stderr, "%sError   : %s%s\n", c0, str, c1);
    fflush(stderr);
  }

  if(_exitOnError){
    // Error() should normally not exit; use Fatal() for that
    Exit(1);
  }
}

void Message::Warning(const char *fmt, ...)
{
  if((_commRank && _isCommWorld) || _verbosity < 2) return;
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_client){
    _client->Warning(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendWarning(str);
  }
  else{
    const char *c0 = "", *c1 = "";
    if(!streamIsFile(stdout) && streamIsVT100(stdout)){
      c0 = "\33[35m"; c1 = "\33[0m";  // magenta
    }
    if(_isCommWorld)
      fprintf(stdout, "%sWarning : %s%s\n", c0, str, c1);
    else
      fprintf(stdout, "%sWarning : [rank %3d] %s%s\n", c0, _commRank, str, c1);
    fflush(stdout);
  }
}

void Message::Info(const char *fmt, ...)
{
  if((_commRank && _isCommWorld) || _verbosity < 4) return;
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  Info(4, str);
}

void Message::Info(int level, const char *fmt, ...)
{
  if((_commRank && _isCommWorld && level > 0) || _verbosity < abs(level)) return;

  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_infoCpu){
    Cpu(level, false, true, true, true, true, str);
    return;
  }

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendInfo(str);
  }
  else{
    if(_isCommWorld && (_commSize == 1 || level > 0))
      fprintf(stdout, "Info    : %s\n", str);
    else
      fprintf(stdout, "Info    : [rank %3d] %s\n", _commRank, str);
    fflush(stdout);
  }
}

void Message::Direct(const char *fmt, ...)
{
  if((_commRank && _isCommWorld) || _verbosity < 3) return;
  va_list args;
  va_start(args, fmt);
  char str[1024];
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  Direct(3, str);
}

void Message::Direct(int level, const char *fmt, ...)
{
  if((_commRank && _isCommWorld && level > 0) || _verbosity < abs(level)) return;
  va_list args;
  va_start(args, fmt);
  char str[1024];
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendInfo(str);
  }
  else{
    const char *c0 = "", *c1 = "";
    if(abs(level) == 3 && !streamIsFile(stdout) && streamIsVT100(stdout)){
      c0 = "\33[34m"; c1 = "\33[0m";  // blue
    }
    if(_isCommWorld && (_commSize == 1 || level > 0))
      fprintf(stdout, "%s%s%s\n", c0, str, c1);
    else
      fprintf(stdout, "%s[rank %3d] %s%s\n", c0, _commRank, str, c1);
    fflush(stdout);
  }
}

void Message::Check(const char *fmt, ...)
{
  static std::string buffer;
  if(_commRank && _isCommWorld) return;
  char str[5000];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    buffer += str;
    bool found = false;
    std::string::size_type idx = 0;
    while(1){
      idx = buffer.find('\n');
      if(idx == std::string::npos) break;
      found = true;
      buffer.replace(idx, 1, " ");
      idx++;
    }
    if(found){
      _onelabClient->sendInfo(buffer);
      buffer.clear();
    }
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
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendInfo(str);
  }
  else{
    if(_commSize > 1)
      fprintf(stdout, "Debug   : [rank %3d] %s\n", _commRank, str);
    else
      fprintf(stdout, "Debug   : %s\n", str);
    fflush(stdout);
  }
}

double Message::GetWallClockTime()
{
  return GetTimeOfDay() - _startTime;
}

void Message::Cpu(const char *fmt, ...)
{
  if(_verbosity < 5) return;

  va_list args;
  va_start(args, fmt);
  char str[1024];
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);

  Cpu(5, false, true, true, true, true, str);
}

void Message::Cpu(int level, bool printDate, bool printWallTime, bool printCpu,
                  bool printMem, bool printTraffic, const char *fmt, ...)
{
  if(_verbosity < abs(level)) return;

  double s = 0.;
  long mem = 0;
  GetResources(&s, &mem);
  double val[2] = {s, (double)mem / 1024. / 1024.};
  double min[2] = {val[0], val[1]};
  double max[2] = {val[0], val[1]};
  double sum[2] = {val[0], val[1]};

#if defined(HAVE_PETSC)
  if(_commSize > 1 && _isCommWorld){
    MPI_Reduce(val, min, 2, MPI_DOUBLE, MPI_MIN, 0, MPI_COMM_WORLD);
    MPI_Reduce(val, max, 2, MPI_DOUBLE, MPI_MAX, 0, MPI_COMM_WORLD);
    MPI_Reduce(val, sum, 2, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
  }
#endif

  if(_commRank && _isCommWorld && level > 0) return;

  if(!mem) printMem = false;

  onelab::remoteNetworkClient *remote = 0;
  if(_onelabClient){
    remote = dynamic_cast<onelab::remoteNetworkClient*>(_onelabClient);
    if(!remote || !remote->getGmshClient())
      printTraffic = false;
  }
  else{
    printTraffic = false;
  }

  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(str, sizeof(str), fmt, args);
  va_end(args);
  if(strlen(fmt)) strcat(str, " ");

  std::string pdate = "";
  if(printDate){
    time_t now;
    time(&now);
    pdate = ctime(&now);
    pdate.resize(pdate.size() - 1);
    if(printWallTime || printCpu || printMem || printTraffic)
      pdate += ", ";
  }

  std::string pwall = "";
  if(printWallTime){
    char tmp[128];
    sprintf(tmp, "Wall = %gs", GetWallClockTime());
    pwall = tmp;
    if(printCpu || printMem || printTraffic)
      pwall += ", ";
  }

  std::string pcpu = "";
  if(printCpu){
    char tmp[128];
    if(_commSize > 1 && _isCommWorld)
      sprintf(tmp, "CPU = %gs [%gs,%gs]", sum[0], min[0], max[0]);
    else
      sprintf(tmp, "CPU = %gs", max[0]);
    pcpu = tmp;
    if(printMem || printTraffic)
      pcpu += ", ";
  }

  std::string pmem = "";
  if(mem && printMem){
    char tmp[128];
    if(_commSize > 1 && _isCommWorld)
      sprintf(tmp, "Mem = %gMb [%gMb,%gMb]", sum[1], min[1], max[1]);
    else
      sprintf(tmp, "Mem = %gMb", max[1]);
    pmem = tmp;
    if(printTraffic)
      pmem += ", ";
  }

  std::string ptraffic = "";
  if(printTraffic){
    unsigned long int r = remote->getGmshClient()->ReceivedBytes();
    unsigned long int s = remote->getGmshClient()->SentBytes();
    double rmb = (double)r / 1024. / 1024.;
    double smb = (double)s / 1024. / 1024.;
    char tmp[128];
    sprintf(tmp, "Recv/Send = %g/%gMb", rmb, smb);
    ptraffic = tmp;
  }

  char str2[256] = "";
  if(pdate.size() || pwall.size() || pcpu.size() || pmem.size() || ptraffic.size())
    sprintf(str2, "(%s%s%s%s%s)", pdate.c_str(), pwall.c_str(), pcpu.c_str(),
            pmem.c_str(), ptraffic.c_str());
  strcat(str, str2);

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendInfo(str);
  }
  else{
    if(_isCommWorld && (_commSize == 1 || level > 0))
      fprintf(stdout, "Info    : %s\n", str);
    else
      fprintf(stdout, "Info    : [rank %3d] %s\n", _commRank, str);
    fflush(stdout);
  }
}

void Message::ProgressMeter(int n, int N, const char *fmt, ...)
{
  if((_commRank && _isCommWorld) || _verbosity < 4 ||
     _progressMeterStep <= 0 || _progressMeterStep >= 100) return;

  double percent = 100. * (double)n/(double)N;

  if(N <= 0 || percent >= _progressMeterCurrent || n > N - 1){

    char str[1024], str2[1024];
    va_list args;
    va_start(args, fmt);
    vsnprintf(str, sizeof(str), fmt, args);
    va_end(args);
    sprintf(str2, "%3d%%    : %s", _progressMeterCurrent, str);
    if(_onelabClient && _onelabClient->getName() == "GetDP"){
      _onelabClient->sendProgress(str);
    }

    if(N <= 0){
      if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
        onelab::number o(_onelabClient->getName() + "/Progress", n);
        o.setLabel(std::string("GetDP ") + str);
        o.setMin(0);
        o.setMax(N);
        o.setVisible(false);
        o.setReadOnly(true);
        _onelabClient->set(o);
      }
      return;
    }

    if(_client){
      _client->Progress(str2);
    }
    else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
      onelab::number o(_onelabClient->getName() + "/Progress",
                       (n > N - 1) ? 0 : n);
      o.setLabel(std::string("GetDP ") + str);
      o.setMin(0);
      o.setMax(N);
      o.setVisible(false);
      o.setReadOnly(true);
      _onelabClient->set(o);
    }
    else if(!streamIsFile(stdout)){
      fprintf(stdout, "%s                                          \r",
              (n > N - 1) ? "" : str2);
      fflush(stdout);
    }
    while(_progressMeterCurrent < percent)
      _progressMeterCurrent += _progressMeterStep;
  }
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

  if(_client){
    _client->Info((char*)str.c_str());
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendInfo(str);
  }
  else{
    if(_commSize > 1)
      fprintf(stdout, "Timers  : [rank %3d] %s\n", _commRank, str.c_str());
    else
      fprintf(stdout, "Timers  : %s\n", str.c_str());
    fflush(stdout);
  }
}

void Message::PrintErrorCounter(const char *title)
{
  if(!_errorCount || _commRank || _verbosity < 1) return;

  Message::Error("%s encountered %d error%s - check the log for details",
                 title, _errorCount, (_errorCount > 1) ? "s" : "");
}

void Message::InitializeSocket(std::string sockname)
{
  if(sockname.size()){
    _client = new GmshClient();
    if(_client->Connect(sockname.c_str()) < 0){
      Message::Error("Could not connect to socket `%s'", sockname.c_str());
      delete _client;
      _client = 0;
    }
    else{
      _client->Start();
    }
  }
}

void Message::SendMergeFileRequest(const std::string &filename)
{
  if(_client){
    _client->MergeFile((char*)filename.c_str());
  }
  else if(_onelabClient && _onelabClient->getName() != "GetDPServer"){
    _onelabClient->sendMergeFileRequest(filename);
  }
}

void Message::TestSocket()
{
  if(_client){
    std::string tmp("View \"test\" {\n");
    for(int i= 0; i < 1000000; i++)
      tmp += "ST(0,0,0, 1,0,0, 0,1,0){1,2,3};\n";
    tmp += "};\n";
    _client->SpeedTest(tmp.c_str());
  }
}

void Message::SendOptionOnSocket(int num, std::string option)
{
  if(_client){
    _client->Option(num, option.c_str());
  }
}

void Message::FinalizeSocket()
{
  if(_client){
    _client->Stop();
    _client->Disconnect();
    delete _client;
    _client = 0;
  }
}

class localGetDP : public onelab::localClient {
public:
  localGetDP() : onelab::localClient("GetDP") {}
#if defined(HAVE_GMSH)
  void sendMergeFileRequest(const std::string &name)
  {
    GmshMergePostProcessingFile(name);
    Msg::RequestRender();
  }
  void sendInfo(const std::string &msg){ Msg::Info("%s", msg.c_str()); }
  void sendWarning(const std::string &msg){ Msg::Warning("%s", msg.c_str()); }
  void sendError(const std::string &msg){ Msg::Error("%s", msg.c_str()); }
  void sendProgress(const std::string &msg){ Msg::ProgressMeter(0, 0, true, msg.c_str()); }
#endif
};

void Message::InitializeOnelab(std::string name, std::string sockname)
{
  if(sockname.size()){
    // getdp is called by a distant onelab server
    onelab::remoteNetworkClient *c = new onelab::remoteNetworkClient(name, sockname);
    if(!c->getGmshClient()){
      Message::Error("Could not connect to ONELAB server");
      delete c;
    }
    else{
      _onelabClient = c;
      // send configuration options (we send them even if Action != initialize),
      // so that they are also sent e.g. when the database is reset
      onelab::string o(name + "/File extension", ".pro");
      o.setVisible(false);
      o.setAttribute("Persistent", "1");
      _onelabClient->set(o);
      onelab::number o2(name + "/Use command line", 1.);
      o2.setVisible(false);
      o2.setAttribute("Persistent", "1");
      _onelabClient->set(o2);
      onelab::number o3(name + "/Guess model name", 1.);
      o3.setVisible(false);
      o3.setAttribute("Persistent", "1");
      _onelabClient->set(o3);
      std::vector<onelab::string> ps;
      _onelabClient->get(ps, name + "/Action");
      if(ps.size()){
        Info("Performing ONELAB '%s'", ps[0].getValue().c_str());
        if(ps[0].getValue() == "initialize") Exit(0);
      }
    }
  }
  else{
    if(name == "GetDP"){
      // getdp is called within the same memory space as the server
      _onelabClient = new localGetDP();
    }
    else{
      // getdp is called without a connection to a onelab server, but with the
      // name of a onelab database file; GetDP in this case becomes the onelab
      // server
      _onelabClient = new onelab::localClient("GetDPServer");
      FILE *fp = FOpen(name.c_str(), "rb");
      if(fp){
        Message::Info("Reading ONELAB database '%s'", name.c_str());
        _onelabClient->fromFile(fp);
        fclose(fp);
      }
      else
        Message::Error("Could not open file '%s'", name.c_str());
    }
  }
}

void Message::AddOnelabNumberChoice(std::string name, const std::vector<double> &value,
                                    const char *color, const char *units)
{
  if(_onelabClient){
    std::vector<onelab::number> ps;

#if 0 // full exchange
    std::vector<double> choices;
    _onelabClient->get(ps, name);
    if(ps.size()){
      choices = ps[0].getChoices();
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setReadOnly(true);
    }
    if(color) ps[0].setAttribute("Highlight", color);
    if(units) ps[0].setAttribute("Units", units);
    ps[0].setValues(value);
    choices.insert(choices.end(), value.begin(), value.end());
    ps[0].setChoices(choices);
    _onelabClient->set(ps[0]);
#else // optimized exchange (without growing choice vector)
    _onelabClient->getWithoutChoices(ps, name);
    if(ps.empty()){
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setReadOnly(true);
    }
    if(color) ps[0].setAttribute("Highlight", color);
    if(units) ps[0].setAttribute("Units", units);
    ps[0].setValues(value);
    _onelabClient->setAndAppendChoices(ps[0]);
#endif

#if !defined(BUILD_ANDROID) // FIXME: understand why this leads to crashes
    // ask Gmsh to refresh
    onelab::string o("Gmsh/Action", "refresh");
    o.setVisible(false);
    _onelabClient->set(o);
#endif
  }
}

void Message::AddOnelabStringChoice(std::string name, std::string kind,
                                    std::string value, bool updateValue,
                                    bool readOnly)
{
  if(_onelabClient){
    std::vector<std::string> choices;
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name);
    if(ps.size()){
      choices = ps[0].getChoices();
      if(std::find(choices.begin(), choices.end(), value) == choices.end())
        choices.push_back(value);
      if(updateValue)
        ps[0].setValue(value);
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setKind(kind);
      ps[0].setValue(value);
      choices.push_back(value);
    }
    ps[0].setChoices(choices);
    if(readOnly){
      ps[0].setReadOnly(true);
      ps[0].setAttribute("AutoCheck", "0");
    }
    else{
      ps[0].setReadOnly(false);
      ps[0].setAttribute("AutoCheck", "1");
    }
    _onelabClient->set(ps[0]);
  }
}

void Message::SetOnelabNumber(std::string name, double val, bool visible)
{
  if(_onelabClient){
    std::vector<onelab::number> numbers;
    _onelabClient->get(numbers, name);
    if(numbers.empty()){
      numbers.resize(1);
      numbers[0].setName(name);
    }
    numbers[0].setValue(val);
    numbers[0].setVisible(visible);
    _onelabClient->set(numbers[0]);
  }
}

void Message::SetOnelabString(std::string name, std::string val, bool visible)
{
  if(_onelabClient){
    std::vector<onelab::string> strings;
    _onelabClient->get(strings, name);
    if(strings.empty()){
      strings.resize(1);
      strings[0].setName(name);
    }
    strings[0].setValue(val);
    strings[0].setVisible(visible);
    _onelabClient->set(strings[0]);
  }
}

double Message::GetOnelabNumber(std::string name, double defaultValue,
                                bool errorIfMissing)
{
  if(_onelabClient){
    std::vector<onelab::number> numbers;
    _onelabClient->get(numbers, name);
    if(numbers.empty()){
      if(errorIfMissing)
        Message::Error("Unknown ONELAB number parameter '%s'", name.c_str());
      return defaultValue;
    }
    else
      return numbers[0].getValue();
  }
  if(errorIfMissing)
    Message::Warning("GetNumber requires a ONELAB client");
  return defaultValue;
}

std::string Message::GetOnelabString(std::string name, const std::string &defaultValue,
                                     bool errorIfMissing)
{
  if(_onelabClient){
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name);
    if(ps.empty()){
      if(errorIfMissing)
        Message::Error("Unknown ONELAB string parameter '%s'", name.c_str());
      return defaultValue;
    }
    else{
      return ps[0].getValue();
    }
  }
  if(errorIfMissing)
    Message::Warning("GetString requires a ONELAB client");
  return defaultValue;
}

std::string Message::GetOnelabAction()
{
  if(_onelabClient){
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, _onelabClient->getName() + "/Action");
    if(ps.size()) return ps[0].getValue();
  }
  return "";
}

std::string Message::GetOnelabClientName()
{
  if(_onelabClient) return _onelabClient->getName();
  return "";
}

static std::string _getParameterName(char *Name, Message::cmap &copt)
{
  std::string name(Name);
  if(copt.count("Path")){
    std::string path = copt["Path"][0];
    // if path ends with a number, assume it's for ordering purposes
    if(path.size() && path[path.size() - 1] >= '0' && path[path.size() - 1] <= '9')
      name = path + name;
    else if(path.size() && path[path.size() - 1] == '/')
      name = path + name;
    else
      name = path + "/" + name;
  }
  return name;
}

static void _setStandardOptions(onelab::parameter *p, Message::fmap &fopt,
                                Message::cmap &copt)
{
  // strings
  if(copt.count("Label")) p->setLabel(copt["Label"][0]);
  if(copt.count("ShortHelp")) // for backward compatibility
    p->setLabel(copt["ShortHelp"][0]);
  if(copt.count("Help")) p->setHelp(copt["Help"][0]);
  if(copt.count("Highlight")) p->setAttribute("Highlight", copt["Highlight"][0]);
  if(copt.count("Macro")) p->setAttribute("Macro", copt["Macro"][0]);
  if(copt.count("GmshOption")) p->setAttribute("GmshOption", copt["GmshOption"][0]);
  if(copt.count("Units")) p->setAttribute("Units", copt["Units"][0]);
  if(copt.count("AutoCheck")) // for backward compatibility
    p->setAttribute("AutoCheck", copt["AutoCheck"][0]);

  // numbers
  if(fopt.count("Visible")) p->setVisible(fopt["Visible"][0] ? true : false);
  if(fopt.count("ReadOnly")) p->setReadOnly(fopt["ReadOnly"][0] ? true : false);
  if(fopt.count("NeverChanged")) p->setNeverChanged(fopt["NeverChanged"][0] ? true : false);
  if(fopt.count("ChangedValue")) p->setChangedValue(fopt["ChangedValue"][0]);
  if(fopt.count("ReadOnlyRange"))
    p->setAttribute("ReadOnlyRange", fopt["ReadOnlyRange"][0] ? "1" : "0");
  if(fopt.count("AutoCheck"))
    p->setAttribute("AutoCheck", fopt["AutoCheck"][0] ? "1" : "0");
}

void Message::ExchangeOnelabParameter(Constant *c, fmap &fopt, cmap &copt)
{
  if(!_onelabClient) return;

  std::string name;
  if(copt.count("Name"))
    name = copt["Name"][0];

  if(name.empty()){
    if(copt.size() || fopt.size())
      Message::Error("From now on you need to use the `Name' attribute to create a "
                     "ONELAB parameter: `Name \"%s\"'",
                     _getParameterName(c->Name, copt).c_str());
    return;
  }

  if(c->Type == VAR_FLOAT || c->Type == VAR_LISTOFFLOAT){
    std::vector<onelab::number> ps;
    _onelabClient->get(ps, name);
    bool noRange = true, noChoices = true, noLoop = true;
    bool noGraph = true, noClosed = true;
    if(ps.size()){
      if(fopt.count("ReadOnly") && fopt["ReadOnly"][0]){ // use local value
        if(c->Type == VAR_FLOAT){
          ps[0].setValue(c->Value.Float);
        }
        else{
          std::vector<double> in;
          for(int i = 0; i < List_Nbr(c->Value.List); i++){
            double d;
            List_Read(c->Value.List, i, &d);
            in.push_back(d);
          }
          ps[0].setValues(in);
        }
      }
      else{ // use value from server
        if(c->Type == VAR_FLOAT){
          c->Value.Float = ps[0].getValue();
        }
        else{
          List_Reset(c->Value.List);
          for(unsigned int i = 0; i < ps[0].getValues().size(); i++){
            double d = ps[0].getValues()[i];
            List_Add(c->Value.List, &d);
          }
        }
      }
      // keep track of these attributes, which can be changed server-side
      // (unless they are not visible, or, for the range/choices, when
      // explicitely setting these attributes as ReadOnly)
      if(ps[0].getVisible()){
        if(!(fopt.count("ReadOnlyRange") && fopt["ReadOnlyRange"][0])){
          if(ps[0].getMin() != -onelab::parameter::maxNumber() ||
             ps[0].getMax() != onelab::parameter::maxNumber() ||
             ps[0].getStep() != 0.) noRange = false;
          if(ps[0].getChoices().size()) noChoices = false;
        }
        if(ps[0].getAttribute("Loop").size()) noLoop = false;
        if(ps[0].getAttribute("Graph").size()) noGraph = false;
        if(ps[0].getAttribute("Closed").size()) noClosed = false;
      }
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      if(c->Type == VAR_FLOAT){
        ps[0].setValue(c->Value.Float);
      }
      else{
        std::vector<double> in;
        for(int i = 0; i < List_Nbr(c->Value.List); i++){
          double d;
          List_Read(c->Value.List, i, &d);
          in.push_back(d);
        }
        ps[0].setValues(in);
      }
    }
    // send updated parameter to server
    if(noRange && fopt.count("Range") && fopt["Range"].size() == 2){
      ps[0].setMin(fopt["Range"][0]); ps[0].setMax(fopt["Range"][1]);
    }
    else if(noRange && fopt.count("Min") && fopt.count("Max")){
      ps[0].setMin(fopt["Min"][0]); ps[0].setMax(fopt["Max"][0]);
    }
    else if(noRange && fopt.count("Min")){
      ps[0].setMin(fopt["Min"][0]); ps[0].setMax(onelab::parameter::maxNumber());
    }
    else if(noRange && fopt.count("Max")){
      ps[0].setMax(fopt["Max"][0]); ps[0].setMin(-onelab::parameter::maxNumber());
    }
    if(noRange && fopt.count("Step")) ps[0].setStep(fopt["Step"][0]);
    // if no range/min/max/step info is provided, try to compute a reasonnable
    // range and step (this makes the gui much nicer to use)
    if(c->Type == VAR_FLOAT && noRange && !fopt.count("Range") &&
       !fopt.count("Step") && !fopt.count("Min") && !fopt.count("Max")){
      bool isInteger = (floor(c->Value.Float) == c->Value.Float);
      double fact = isInteger ? 10. : 100.;
      if(c->Value.Float > 0){
        ps[0].setMin(c->Value.Float / fact);
        ps[0].setMax(c->Value.Float * fact);
        ps[0].setStep((ps[0].getMax() - ps[0].getMin()) / 100.);
      }
      else if(c->Value.Float < 0){
        ps[0].setMin(c->Value.Float * fact);
        ps[0].setMax(c->Value.Float / fact);
        ps[0].setStep((ps[0].getMax() - ps[0].getMin()) / 100.);
      }
      if(c->Value.Float && isInteger){
        ps[0].setMin((int)ps[0].getMin());
        ps[0].setMax((int)ps[0].getMax());
        ps[0].setStep((int)ps[0].getStep());
      }
    }
    if(noChoices && fopt.count("Choices")){
      ps[0].setChoices(fopt["Choices"]);
      if(copt.count("Choices")) ps[0].setChoiceLabels(copt["Choices"]);
    }
    if(noLoop && copt.count("Loop")) // for backward compatibility
      ps[0].setAttribute("Loop", copt["Loop"][0]);
    if(noLoop && fopt.count("Loop"))
      ps[0].setAttribute("Loop", (fopt["Loop"][0] == 3.) ? "3" :
                         (fopt["Loop"][0] == 2.) ? "2" :
                         (fopt["Loop"][0] == 1.) ? "1" : "");
    if(noGraph && copt.count("Graph")) ps[0].setAttribute("Graph", copt["Graph"][0]);
    if(noClosed && copt.count("Closed")) // for backward compatibility
      ps[0].setAttribute("Closed", copt["Closed"][0]);
    if(noClosed && fopt.count("Closed"))
      ps[0].setAttribute("Closed", fopt["Closed"][0] ? "1" : "0");
    _setStandardOptions(&ps[0], fopt, copt);
    _onelabClient->set(ps[0]);
  }
  else if(c->Type == VAR_CHAR){
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name);
    bool noClosed = true, noMultipleSelection = true;
    if(ps.size()){
      if(fopt.count("ReadOnly") && fopt["ReadOnly"][0])
        ps[0].setValue(c->Value.Char); // use local value
      else
	c->Value.Char = strSave(ps[0].getValue().c_str()); // use value from server
      // keep track of these attributes, which can be changed server-side
      // (unless they are not visible)
      if(ps[0].getVisible()){
        if(ps[0].getAttribute("Closed").size()) noClosed = false;
        if(ps[0].getAttribute("MultipleSelection").size()) noMultipleSelection = false;
      }
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setValue(c->Value.Char);
    }
    // send updated parameter to server
    if(copt.count("Kind")) ps[0].setKind(copt["Kind"][0]);
    if(copt.count("Choices")) ps[0].setChoices(copt["Choices"]);
    if(noClosed && copt.count("Closed")) // for backward compatibility
      ps[0].setAttribute("Closed", copt["Closed"][0]);
    if(noClosed && fopt.count("Closed")) // for backward compatibility
      ps[0].setAttribute("Closed", fopt["Closed"][0] ? "1" : "0");
    if(noMultipleSelection && copt.count("MultipleSelection"))
      ps[0].setAttribute("MultipleSelection", copt["MultipleSelection"][0]);
    _setStandardOptions(&ps[0], fopt, copt);
    _onelabClient->set(ps[0]);
  }
}

extern void Fill_GroupInitialListFromString(List_T *list, const char *str);

void Message::UndefineOnelabParameter(const std::string &name)
{
  if(!_onelabClient) return;
  _onelabClient->clear(name);
}

void Message::FinalizeOnelab()
{
  if(_onelabClient){
    // add default computation modes
    std::string name = _onelabClient->getName();
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name + "/Action");
    if(ps.size()){
      if(ps[0].getValue() != "initialize"){
        // Compute commands
        _onelabClient->get(ps, name + "/9ComputeCommand");
        if(ps.empty()){ // only change value if none exists
          ps.resize(1);
          ps[0].setName(name + "/9ComputeCommand");
          ps[0].setValue("-solve -pos");
        }
        ps[0].setLabel("Compute command");
        std::vector<std::string> choices;
        choices.push_back("-pre");
        choices.push_back("-cal");
        choices.push_back("-pos");
        choices.push_back("-solve");
        choices.push_back("-solve -pos");
        ps[0].setChoices(choices);
        _onelabClient->set(ps[0]);
        // Model checking
        std::vector<onelab::number> pn;
        _onelabClient->get(pn, name + "/}ModelCheck");
        if(pn.empty()){ // only change value if none exists
          pn.resize(1);
          pn[0].setName(name + "/}ModelCheck");
          pn[0].setValue(0);
        }
        if(pn[0].getVisible()){
          pn[0].setLabel("Model check");
          std::vector<double> nchoices;
          std::vector<std::string> labels;
          nchoices.push_back(0); labels.push_back("None");
          nchoices.push_back(1); labels.push_back("Constants");
          nchoices.push_back(2); labels.push_back("Groups");
          nchoices.push_back(3); labels.push_back("Functions");
          nchoices.push_back(4); labels.push_back("Constraints");
          nchoices.push_back(5); labels.push_back("Jacobians");
          nchoices.push_back(6); labels.push_back("Integrations");
          nchoices.push_back(7); labels.push_back("FunctionSpaces");
          nchoices.push_back(8); labels.push_back("Formulations");
          nchoices.push_back(9); labels.push_back("Resolutions");
          nchoices.push_back(10); labels.push_back("PostProcessings");
          nchoices.push_back(11); labels.push_back("PostOperations");
          pn[0].setChoices(nchoices);
          pn[0].setChoiceLabels(labels);
          _onelabClient->set(pn[0]);
        }
      }
    }
    delete _onelabClient;
    _onelabClient = 0;
  }
}

void Message::Barrier()
{
#if defined(HAVE_PETSC)
  if(_isCommWorld) {
    MPI_Barrier(PETSC_COMM_WORLD);
  }
#endif
}

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
