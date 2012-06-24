// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
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
#include <gmsh/GmshConfig.h>
#endif

int Message::_isCommWorld = 1; // is the Communicator set to WORLD (=1) or SELF (!=1)
int Message::_commRank = 0;
int Message::_commSize = 1;
int Message::_verbosity = 3;
int Message::_progressMeterStep = 10;
int Message::_progressMeterCurrent = 0;
std::map<std::string, double> Message::_timers;
GmshClient* Message::_client = 0;
onelab::client* Message::_onelabClient = 0;
#if !defined(HAVE_ONELAB) // if Gmsh is compiled without onelab
onelab::server *onelab::server::_server = 0;
#endif

#if defined(HAVE_GSL)
static void gslErrorHandler(const char *reason, const char *file, int line,
                            int gsl_errno)
{
  Message::Error("GSL: %s (%s, line %d)", reason, file, line);
}
#endif

void Message::Init(int argc, char **argv)
{
#if defined(HAVE_PETSC)
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &_commRank);
  MPI_Comm_size(MPI_COMM_WORLD, &_commSize);
  MPI_Errhandler_set(MPI_COMM_WORLD, MPI_ERRORS_RETURN);
#endif
#if defined(HAVE_GSL)
  gsl_set_error_handler(&gslErrorHandler);
#endif
}

void Message::Exit(int level)
{
#if defined(HAVE_PETSC)
  int flag;
  MPI_Initialized(&flag);
  if(flag) MPI_Finalize();
#endif
  FinalizeSocket();
  FinalizeOnelab();
  exit(level);
}

void Message::Fatal(const char *fmt, ...)
{
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_client){
    _client->Error(str);
  }
  else if(_onelabClient){
    _onelabClient->sendError(str);
  }
  else{
    if(_commSize > 1)
      fprintf(stderr, "Fatal   : [On processor %d] %s\n", _commRank, str);
    else
      fprintf(stderr, "Fatal   : %s\n", str);
    fflush(stderr);
  }

  Exit(1);
}

void Message::Error(const char *fmt, ...)
{
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_client){
    _client->Error(str);
  }
  else if(_onelabClient){
    _onelabClient->sendError(str);
  }
  else{
    if(_commSize > 1)
      fprintf(stderr, "Error   : [On processor %d] %s\n", _commRank, str);
    else
      fprintf(stderr, "Error   : %s\n", str);
    fflush(stderr);
  }

  Exit(1);
}

void Message::Warning(const char *fmt, ...)
{
  if(_commRank || _verbosity < 1) return;
  char str[1024];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);

  if(_client){
    _client->Warning(str);
  }
  else if(_onelabClient){
    _onelabClient->sendWarning(str);
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

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient){
    _onelabClient->sendInfo(str);
  }
  else{
    fprintf(stdout, "Info    : %s\n", str);
    fflush(stdout);
  }
}

void Message::Direct(const char *fmt, ...)
{
  if(_commRank || _verbosity < 1) return;
  va_list args;
  va_start(args, fmt);
  char str[1024];
  vsprintf(str, fmt, args);
  va_end(args);

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient){
    _onelabClient->sendInfo(str);
  }
  else{
    fprintf(stdout, "%s\n", str);
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

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient){
    _onelabClient->sendInfo(str);
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

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient){
    _onelabClient->sendInfo(str);
  }
  else{
    if(_commSize > 1)
      fprintf(stdout, "Debug   : [On processor %d] %s\n", _commRank, str);
    else
      fprintf(stdout, "Debug   : %s\n", str);
    fflush(stdout);
  }
}

void Message::Cpu(const char *fmt, ...)
{
  if(_commRank || _verbosity < 2) return;
  double s = 0.;
  long mem = 0;
  GetResources(&s, &mem);

  char str[1024], str2[256];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);
  if(strlen(fmt)) strcat(str, " ");
  if(mem)
    sprintf(str2, "(CPU = %gs, Mem = %ldMb)", s, mem / 1024 / 1024);
  else
    sprintf(str2, "(CPU = %gs)", s);
  strcat(str, str2);

  if(_client){
    _client->Info(str);
  }
  else if(_onelabClient){
    _onelabClient->sendInfo(str);
  }
  else{
    fprintf(stdout, "Info    : %s\n", str);
    fflush(stdout);
  }
}

void Message::ProgressMeter(int n, int N, const char *fmt, ...)
{
  if(_commRank || _verbosity < 2) return;

  char str[1024], str2[256];
  va_list args;
  va_start(args, fmt);
  vsprintf(str, fmt, args);
  va_end(args);
  if(strlen(fmt)) strcat(str, " ");

  if(N <= 0){
    if(_onelabClient){
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

  double percent = 100. * (double)n/(double)N;

  sprintf(str2, "%s(%d %%)", str, _progressMeterCurrent);

  if(percent >= _progressMeterCurrent){
    if(_client){
      _client->Progress(str2);
    }
    else if(_onelabClient){
      onelab::number o(_onelabClient->getName() + "/Progress", n);
      o.setLabel(std::string("GetDP ") + str);
      o.setMin(0);
      o.setMax(N);
      o.setVisible(false);
      o.setReadOnly(true);
      _onelabClient->set(o);
    }
    else{
      fprintf(stdout, "%s                     \r", str2);
      fflush(stdout);
    }
    while(_progressMeterCurrent < percent)
      _progressMeterCurrent += _progressMeterStep;
  }

  if(n > N - 1){
    if(_client){
      _client->Progress("Done!");
    }
    else if(_onelabClient){
      onelab::number o(_onelabClient->getName() + "/Progress", 0);
      o.setLabel(std::string("GetDP ") + str);
      o.setMin(0);
      o.setMax(N);
      o.setVisible(false);
      o.setReadOnly(true);
      _onelabClient->set(o);
    }
    else{
      fprintf(stdout, "Done!                                              \r");
      fflush(stdout);
    }
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
  else if(_onelabClient){
    _onelabClient->sendInfo(str);
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

void Message::SendFileOnSocket(std::string filename)
{
  if(_client){
    _client->MergeFile((char*)filename.c_str());
  }
  else if(_onelabClient){
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

void Message::InitializeOnelab(std::string name, std::string sockname)
{
  if(sockname.size()){
    // getdp is called by a distant onelab server
    onelab::remoteNetworkClient *c = new onelab::remoteNetworkClient(name, sockname);
    if(!c->getGmshClient()){
      Error("Could not connect to OneLab server");
      delete c;
    }
    else{
      _onelabClient = c;
      // send configuration options (we send them even if Action != initialize),
      // so that they are also sent e.g. when the database is reset
      onelab::string o(name + "/FileExtension", ".pro");
      o.setVisible(false);
      _onelabClient->set(o);
      onelab::number o2(name + "/UseCommandLine", 1.);
      o2.setVisible(false);
      _onelabClient->set(o2);
      onelab::number o3(name + "/GuessModelName", 1.);
      o3.setVisible(false);
      _onelabClient->set(o3);
      std::vector<onelab::string> ps;
      _onelabClient->get(ps, name + "/Action");
      if(ps.size()){
        Info("Performing OneLab '%s'", ps[0].getValue().c_str());
        if(ps[0].getValue() == "initialize") Exit(0);
      }
    }
  }
  else{
    // getdp is called without onelab server, but with the name of a onelab
    // database file
    _onelabClient = new onelab::localClient("GetDP");
    Error("Reading OneLab db from file not implemented yet!");
    //_onelabClient->readDatabaseFromFile(name);
  }
}

void Message::AddOnelabNumberChoice(std::string name, double val)
{
  if(_onelabClient){
    std::vector<double> choices;
    std::vector<onelab::number> ps;
    _onelabClient->get(ps, name);
    if(ps.size()){
      choices = ps[0].getChoices();
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
    }
    ps[0].setValue(val);
    choices.push_back(val);
    ps[0].setChoices(choices);
    _onelabClient->set(ps[0]);

    // ask Gmsh to refresh
    onelab::string o("Gmsh/Action", "refresh");
    o.setVisible(false);
    _onelabClient->set(o);
  }
}

void Message::AddOnelabStringChoice(std::string name, std::string kind,
                                    std::string value)
{
  if(_onelabClient){
    std::vector<std::string> choices;
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name);
    if(ps.size()){
      choices = ps[0].getChoices();
      if(std::find(choices.begin(), choices.end(), value) == choices.end())
        choices.push_back(value);
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setKind(kind);
      choices.push_back(value);
    }
    ps[0].setValue(value);
    ps[0].setChoices(choices);
    _onelabClient->set(ps[0]);
  }
}

void Message::GetOnelabString(std::string name, char **val)
{
  if(_onelabClient){
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name);
    if(ps.size() && ps[0].getValue().size()){
      *val = strSave(ps[0].getValue().c_str());
      return;
    }
  }
  *val = 0;
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

static void _setStandardOptions(onelab::parameter *p, Message::fmap &fopt, Message::cmap &copt)
{
  if(copt.count("Label")) p->setLabel(copt["Label"][0]);
  if(copt.count("ShortHelp")) p->setLabel(copt["ShortHelp"][0]);
  if(copt.count("Help")) p->setHelp(copt["Help"][0]);
  if(fopt.count("Visible")) p->setVisible(fopt["Visible"][0] ? true : false);
  if(fopt.count("ReadOnly")) p->setReadOnly(fopt["ReadOnly"][0] ? true : false);
  if(copt.count("Highlight")) p->setAttribute("Highlight", copt["Highlight"][0]);
}

void Message::ExchangeOnelabParameter(Constant *c, fmap &fopt, cmap &copt)
{
  if(!_onelabClient) return;

  std::string name = _getParameterName(c->Name, copt);

  if(c->Type == VAR_FLOAT){
    std::vector<onelab::number> ps;
    _onelabClient->get(ps, name);
    bool noRange = true, noChoices = true, noLoop = true, noGraph = true;
    if(ps.size()){
      c->Value.Float = ps[0].getValue(); // use value from server
      // keep track of these attributes, which can be changed server-side
      if(ps[0].getMin() != -onelab::parameter::maxNumber() ||
         ps[0].getMax() != onelab::parameter::maxNumber() ||
         ps[0].getStep() != 0.) noRange = false;
      if(ps[0].getChoices().size()) noChoices = false;
      if(ps[0].getAttribute("Loop").size()) noLoop = false;
      if(ps[0].getAttribute("Graph").size()) noGraph = false;
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setValue(c->Value.Float);
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
    if(noChoices && fopt.count("Choices")){
      ps[0].setChoices(fopt["Choices"]);
      if(copt.count("Choices")) ps[0].setChoiceLabels(copt["Choices"]);
    }
    if(noLoop && copt.count("Loop")) ps[0].setAttribute("Loop", copt["Loop"][0]);
    if(noGraph && copt.count("Graph")) ps[0].setAttribute("Graph", copt["Graph"][0]);
    _setStandardOptions(&ps[0], fopt, copt);
    // If the parameter is set "read-only" here, the local value is used instead
    // of that from the server
    if(ps[0].getReadOnly()) ps[0].setValue(c->Value.Float);
    _onelabClient->set(ps[0]);
  }
  else if(c->Type == VAR_CHAR){
    std::vector<onelab::string> ps;
    _onelabClient->get(ps, name);
    if(ps.size()){
      c->Value.Char = strSave(ps[0].getValue().c_str()); // use value from server
    }
    else{
      ps.resize(1);
      ps[0].setName(name);
      ps[0].setValue(c->Value.Char);
    }
    // send updated parameter to server
    if(copt.count("Choices")) ps[0].setChoices(copt["Choices"]);
    _setStandardOptions(&ps[0], fopt, copt);
    // If the parameter is set "read-only" here, the local value is used instead
    // of that from the server
    if(ps[0].getReadOnly()) ps[0].setValue(c->Value.Char);
    _onelabClient->set(ps[0]);
  }
}

extern void Fill_GroupInitialListFromString(List_T *list, const char *str);

void Message::ExchangeOnelabParameter(Group *g, fmap &fopt, cmap &copt)
{
  if(!_onelabClient) return;

  std::string name = _getParameterName(g->Name, copt);

  std::vector<onelab::region> ps;
  _onelabClient->get(ps, name);
  if(ps.size()){
    // use value from server (FIXME: deal with ReadOnly)
    List_Reset(g->InitialList);
    std::set<std::string> val(ps[0].getValue());
    for(std::set<std::string>::iterator it = val.begin(); it != val.end(); it++)
      Fill_GroupInitialListFromString(g->InitialList, it->c_str());
  }
  else{
    ps.resize(1);
    ps[0].setName(name);
    if(copt.count("Strings")){
      std::set<std::string> val;
      std::vector<std::string> vec(copt["Strings"]);
      for(unsigned int i = 0; i < vec.size(); i++)
        val.insert(vec[i]);
      ps[0].setValue(val);
    }
  }
  // send updated parameter to server
  _setStandardOptions(&ps[0], fopt, copt);
  _onelabClient->set(ps[0]);
}

void Message::ExchangeOnelabParameter(Expression *e, fmap &fopt, cmap &copt)
{
  if(!_onelabClient) return;

  std::string name = _getParameterName(e->Name, copt);

  printf("exchanging function %s with OneLab!\n", name.c_str());
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
  else{
    MPI_Barrier(PETSC_COMM_SELF);
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
