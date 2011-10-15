// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <stdlib.h>
#include <stdio.h>
#include "GetDPConfig.h"
#include "Message.h"
#include "GmshSocket.h"
#include "ProData.h" // FIXME for onelab
#include "ProParser.h" // FIXME for onelab
#include "onelab.h"
#include "OS.h"

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

int Message::_commRank = 0;
int Message::_commSize = 1;
int Message::_verbosity = 3;
int Message::_progressMeterStep = 10;
int Message::_progressMeterCurrent = 0;
std::map<std::string, double> Message::_timers;
GmshClient* Message::_client = 0;
onelab::client* Message::_onelabClient = 0;

void Message::Init(int argc, char **argv)
{
#if defined(HAVE_PETSC)
  MPI_Init(&argc, &argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &_commRank);
  MPI_Comm_size(MPI_COMM_WORLD, &_commSize);
  MPI_Errhandler_set(MPI_COMM_WORLD, MPI_ERRORS_RETURN);
#endif
}

void Message::Exit(int level)
{
#if defined(HAVE_PETSC)
  int flag;
  MPI_Initialized(&flag);
  if(flag) MPI_Finalize();
#endif
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
  exit(1);
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

  FinalizeSocket();
  FinalizeOnelab();
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

  double percent = 100. * (double)n/(double)N;
  if(percent >= _progressMeterCurrent){
    sprintf(str2, "(%d %%)", _progressMeterCurrent);
    strcat(str, str2);
    if(_client){
      _client->Progress(str);
    }
    else if(_onelabClient){
      _onelabClient->sendProgress(str);
    }
    else{
      fprintf(stdout, "%s                      \r", str);
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
      _onelabClient->sendProgress("Done!");
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

void Message::InitializeOnelab(std::string sockname)
{
  _onelabClient = new onelab::remoteNetworkClient("GetDP", sockname);
  // if sockname is file, just do this!
  //_onelabClient = new onelab::localClient("GetDP", sockname);
  //_onelabClient->readDatabaseFromFile(sockname);
}

void Message::ExchangeOnelabParameter(Constant *c,
                                      std::map<std::string, 
                                      std::vector<double> > *floatOptions,
                                      std::map<std::string,
                                      std::vector<std::string> > *charOptions)
{
  if(!_onelabClient) return;

  std::string name(c->Name);
  if(charOptions && charOptions->count("Path")){
    std::string path = (*charOptions)["Path"][0];
    // if path ends with a number, assume it's for ordering purposes
    if(path.size() && path[path.size() - 1] >= '0' && path[path.size() - 1] <= '9')
      name = path + name;
    else if(path.size() && path[path.size() - 1] == '/')
      name = path + name;
    else
      name = path + "/" + name;
  }

  if(c->Type == VAR_FLOAT){
    std::vector<onelab::number> val;
    _onelabClient->get(val, name);
    if(val.size()){ // use value from server
      c->Value.Float = val[0].getValue();
    }
    else{ // send value to server
      onelab::number o(name, c->Value.Float);
      if(floatOptions){
        if(floatOptions->count("Range")){
          if((*floatOptions)["Range"].size() == 2){
            o.setMin((*floatOptions)["Range"][0]);
            o.setMax((*floatOptions)["Range"][1]);
          }
        }
        else if(floatOptions->count("Min") && floatOptions->count("Max")){
          o.setMin((*floatOptions)["Min"][0]);
          o.setMax((*floatOptions)["Max"][0]);
        }
        else if(floatOptions->count("Min")){
          o.setMin((*floatOptions)["Min"][0]);
          o.setMax(1.e200);
        }
        else if(floatOptions->count("Max")){
          o.setMax((*floatOptions)["Max"][0]);
          o.setMin(-1.e200);
        }
        if(floatOptions->count("Step"))
          o.setStep((*floatOptions)["Step"][0]);
        if(floatOptions->count("Choices"))
          o.setChoices((*floatOptions)["Choices"]);
      }
      if(charOptions){
        if(charOptions->count("Help"))
          o.setHelp((*charOptions)["Help"][0]);
        if(charOptions->count("ShortHelp"))
          o.setShortHelp((*charOptions)["ShortHelp"][0]);
      }
      _onelabClient->set(o);
    }
  }
  else if(c->Type == VAR_CHAR){
    std::vector<onelab::string> val;
    _onelabClient->get(val, name);
    if(val.size()){
      c->Value.Char = strSave((char*)val[0].getValue().c_str());
    }
    else{
      onelab::string o(name, c->Value.Char);
      if(charOptions){
        if(charOptions->count("Help"))
          o.setHelp((*charOptions)["Help"][0]);
        if(charOptions->count("ShortHelp"))
          o.setShortHelp((*charOptions)["ShortHelp"][0]);
        if(charOptions->count("Choices"))
          o.setChoices((*charOptions)["Choices"]);
      }
      _onelabClient->set(o);
    }
  }
}

void Message::ExchangeOnelabParameter(Group *group)
{
}

void Message::ExchangeOnelabParameter(Expression *function)
{
}

void Message::FinalizeOnelab()
{
  if(_onelabClient){
    delete _onelabClient;
    _onelabClient = 0;
  }
}

void Message::Barrier()
{
#if defined(HAVE_PETSC)
  MPI_Barrier(PETSC_COMM_WORLD);
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
