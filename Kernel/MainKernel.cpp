// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <sstream>
#include <vector>
#include <string>
#include <string.h>
#include "GetDPConfig.h"
#include "GetDPVersion.h"
#include "onelab.h"
#include "ProData.h"
#include "ProParser.h"
#include "SolvingAnalyse.h"
#include "LinAlg.h"
#include "OS.h"
#include "MallocUtils.h"
#include "Message.h"

#if defined(HAVE_GMSH)
#include <gmsh/Gmsh.h>
#include <gmsh/GmshVersion.h>
#include <gmsh/GmshConfig.h>
#include <gmsh/PView.h>
#endif

int     Flag_PRE = 0, Flag_CAL = 0, Flag_POS = 0, Flag_RESTART = 0;
int     Flag_XDATA = 0, Flag_BIN = 0, Flag_SPLIT = 0, Flag_GMSH_VERSION = 1;
int     Flag_NETWORK_CACHE = 0, Flag_CALLED_WITH_ONELAB_SERVER = 0;
double  Flag_ORDER = -1.;
char   *Name_Generic = 0, *Name_Path = 0;
char   *Name_Resolution = 0;
char   *Name_MshFile = 0, *Name_AdaptFile = 0;
char   *Name_PostOperation[NBR_MAX_POS] = {0};
char   *Name_ResFile[NBR_MAX_RES] = {0};
char   *Name_GmshReadFile[NBR_MAX_RES] = {0};
int     Tag_GmshReadFile[NBR_MAX_RES] = {-1};

static void Info(int level, char *arg0)
{
  switch(level){
  case 0 :
    fprintf(stderr,
	    "GetDP, a General environment for the treatment of Discrete Problems\n"
	    "Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege\n"
	    "Usage: %s [file] [options]\n"
	    "Processing options:\n"
	    "  -pre 'Resolution'         pre-processing\n"
	    "  -cal                      processing\n"
	    "  -pos 'PostOperation(s)'   post-processing\n"
	    "  -msh file                 read mesh (in msh format) from file\n"
            "  -gmshread file(s)         read gmsh data (same as GmshRead in resolution)\n"
            "  -gmshtag tag(s)           tag(s) associated to GmshRead data\n"
	    "  -restart                  resume processing from where it stopped\n"
	    "  -solve 'Resolution'       same as -pre 'Resolution' -cal\n"
	    "  -split                    save processing results in separate files\n"
	    "  -res file(s)              load processing results from file(s)\n"
	    "  -name string              use string as generic file name\n"
	    "  -adapt file               read adaptation constraints from file\n"
	    "  -order num                restrict maximum interpolation order\n"
            "  -cache                    cache network computations to disk\n"
	    "Linear solver options:\n"
#if defined(HAVE_PETSC)
	    "  -solver file              specify parameter file (default: .petscrc)\n"
	    "  [PETsc options]           PETSc options (must be listed after [file])\n"
#endif
#if defined(HAVE_SLEPC)
	    "  -slepc                    use SLEPc instead of Arpack as eigensolver\n"
#endif
#if defined(HAVE_SPARSKIT)
	    "  -solver file              specify parameter file (default: solver.par)\n"
	    "  -'Parameter' num          override value of solver parameter 'Parameter'\n"
#endif
	    "Output options:\n"
	    "  -bin                      create binary output files\n"
	    "  -v2                       create mesh-based Gmsh output files when possible\n"
	    "Other options:\n"
	    "  -check                    interactive check of problem structure\n"
	    "  -v num                    set verbosity level (default: 5)\n"
     	    "  -cpu                      report CPU times for all operations\n"
	    "  -p num                    set progress indicator update (default: 10)\n"
	    "  -onelab name [address]    communicate with ONELAB (file or server address)\n"
            "  -setnumber name value     set constant number name=value (or -sn)\n"
            "  -setstring name value     set constant string name=value (or -ss)\n"
	    "  -version                  show version number\n"
	    "  -info                     show detailed version information\n"
	    "  -help                     show this message\n", arg0);
    break;
  case 1:
    fprintf(stderr, "%s\n", GETDP_VERSION);
    break;
  case 2:
    fprintf(stderr, "Version          : %s\n", GETDP_VERSION);
    fprintf(stderr, "License          : %s\n", GETDP_SHORT_LICENSE);
    fprintf(stderr, "Build OS         : %s\n", GETDP_OS);
    fprintf(stderr, "Build date       : %s\n", GETDP_DATE);
    fprintf(stderr, "Build host       : %s\n", GETDP_HOST);
    fprintf(stderr, "Build options    :%s\n", GETDP_CONFIG_OPTIONS);
#if defined(HAVE_PETSC)
    fprintf(stderr, "PETSc version    : %d.%d.%d (%s arithmetic)\n", PETSC_VERSION_MAJOR,
            PETSC_VERSION_MINOR, PETSC_VERSION_SUBMINOR,
#if defined(PETSC_USE_COMPLEX)
            "complex"
#else
            "real"
#endif
            );
#endif
#if defined(HAVE_GMSH)
    fprintf(stderr, "Gmsh lib version : %s%s (%s)\n",
            GMSH_VERSION, GMSH_EXTRA_VERSION, GMSH_DATE);
    fprintf(stderr, "Gmsh lib options :%s\n", GMSH_CONFIG_OPTIONS);
#endif
    fprintf(stderr, "Packaged by      : %s\n", GETDP_PACKAGER);
    fprintf(stderr, "Web site         : http://getdp.info\n");
    fprintf(stderr, "Mailing list     : getdp@onelab.info\n");
    break;
  }
  Message::Exit(0);
}

/* ------------------------------------------------------------------------ */
/*  G e t _ O p t i o n s                                                   */
/* ------------------------------------------------------------------------ */

static void Get_Options(int argc, char *argv[], int *sargc, char **sargv, char *pro,
                        int *lres, int *lpos, int *check)
{
  strcpy(pro, "");

  int i = *sargc = 1, j = 0;

  while (i < argc) {

    if (argv[i][0] == '-') {

      if      (!strcmp(argv[i]+1, "cal"))    { Flag_CAL     = 1; i++; }
      else if (!strcmp(argv[i]+1, "check"))  { *check       = 1; i++; }
      else if (!strcmp(argv[i]+1, "xdata"))  { Flag_XDATA   = 1; i++; }
      else if (!strcmp(argv[i]+1, "cache"))  { Flag_NETWORK_CACHE = 1; i++; }
      else if (!strcmp(argv[i]+1, "bin"))    { Flag_BIN     = 1; i++; }
      else if (!strcmp(argv[i]+1, "v2"))     { Flag_GMSH_VERSION = 2; i++; }
      else if (!strcmp(argv[i]+1, "ascii"))  { Flag_BIN     = 0; i++; }
      else if (!strcmp(argv[i]+1, "split"))  { Flag_SPLIT   = 1; i++; }

      else if (!strcmp(argv[i]+1, "socket")) {
        i++;
        if (i < argc && argv[i][0] != '-') {
          Message::InitializeSocket(argv[i]); i++;
        }
        else {
          Message::Error("Missing socket name");
        }
      }

      else if (!strcmp(argv[i]+1, "onelab")) {
        i++;
        if (i + 1 < argc && argv[i][0] != '-' && argv[i + 1][0] != '-') {
          Message::InitializeOnelab(argv[i], argv[i + 1]);
          i += 2;
        }
        else if (i < argc && argv[i][0] != '-') {
          Message::InitializeOnelab(argv[i], "");
          i += 1;
        }
        else {
          Message::Error("Missing client name and/or address of ONELAB server");
        }
      }

      else if (!strcmp(argv[i]+1, "setnumber") ||
               !strcmp(argv[i]+1, "sn")) {
        i++;
	if (i + 1 < argc && argv[i][0] != '-') {
          CommandLineNumbers[argv[i]] = std::vector<double>(1, atof(argv[i + 1]));
          i += 2;
	}
        else{
          Message::Error("Missing name and/or value for number definition");
        }
      }

      else if (!strcmp(argv[i]+1, "setstring") ||
               !strcmp(argv[i]+1, "ss")) {
        i++;
	if (i + 1 < argc && argv[i][0] != '-' && argv[i + 1][0] != '-') {
          CommandLineStrings[argv[i]] = std::vector<std::string>(1, argv[i + 1]);
          i += 2;
	}
        else{
          Message::Error("Missing name and/or value for string definition");
        }
      }

      else if (!strcmp(argv[i]+1, "setlist") ||
               !strcmp(argv[i]+1, "setlistofnumbers")) {
        i++;
	if (i + 1 < argc && argv[i][0] != '-') {
          std::string n(argv[i]);
          std::vector<double> v;
          int s = atoi(argv[i + 1]), j = 0;
          i += 2;
          while(j < s && i < argc){
            v.push_back(atof(argv[i]));
            i++; j++;
          }
          if(j < s)
            Message::Error("Missing values in list (got %d instead of %d)", j, s);
          CommandLineNumbers[n] = v;
	}
        else{
          Message::Error("Missing name and/or value for definition of list of numbers");
        }
      }

      else if (!strcmp(argv[i]+1, "restart")){
	Flag_CAL = Flag_RESTART = 1; i++;
      }

      else if (!strcmp(argv[i]+1, "verbose") ||
	       !strcmp(argv[i]+1, "v")) {
	i++;
	if (i < argc && argv[i][0] != '-') {
	  Message::SetVerbosity(atoi(argv[i])); i++;
	}
	else {
	  Message::Error("Missing number");
	}
      }

      else if (!strcmp(argv[i]+1, "cpu")) {
        Message::SetInfoCpu(true); i++;
      }

      else if (!strcmp(argv[i]+1, "help")  || !strcmp(argv[i]+1, "h") ||
	       !strcmp(argv[i]+1, "-help") || !strcmp(argv[i]+1, "-h")) {
	Info(0, argv[0]);
      }

      else if (!strcmp(argv[i]+1, "version") ||
	       !strcmp(argv[i]+1, "-version")) {
	Info(1, argv[0]);
      }

      else if (!strcmp(argv[i]+1, "info") ||
               !strcmp(argv[i]+1, "-info")) {
        Info(2, argv[0]);
      }

      else if (!strcmp(argv[i]+1, "progress") ||
	       !strcmp(argv[i]+1, "p")) {
	i++;
	if (i < argc && argv[i][0] != '-') {
	  Message::SetProgressMeterStep(atoi(argv[i])); i++;
	}
	else {
	  Message::Error("Missing number");
	}
      }

      else if (!strcmp(argv[i]+1, "pre")) {
	i++;
	if (i < argc && argv[i][0] == '#') {
	  Flag_PRE = 1; *lres = -atoi(argv[i]+1); i++;
	}
	else if (i < argc && argv[i][0] != '-') {
	  Flag_PRE = 1; Name_Resolution = strSave(argv[i]); i++;
	}
	else {
	  Flag_PRE = *lres = 1;
	}
      }

      else if (!strcmp(argv[i]+1, "order") ||
	       !strcmp(argv[i]+1, "ord")) {
	i++;
	if (i < argc && argv[i][0] != '-') {
	  Flag_ORDER = atof(argv[i]); i++;
	}
	else {
	  Message::Error("Missing interpolation order");
	}
      }

      else if (!strcmp(argv[i]+1, "solver")) {
        // fix when calling getdp from gmsh (since the GUI forces us
        // to put the -solver option before the .pro file!)
	sargv[(*sargc)++] = argv[i++];
	if (i < argc && argv[i][0] != '-') {
          sargv[(*sargc)++] = argv[i++];
	}
	else {
	  Message::Error("Missing solver option file name");
	}
      }

      else if (!strcmp(argv[i]+1, "solve") ||
	       !strcmp(argv[i]+1, "sol")) {
	i++;
	if (i < argc && argv[i][0] == '#') {
	  Flag_PRE = Flag_CAL = 1; *lres = -atoi(argv[i]+1); i++;
	}
	else if (i < argc && argv[i][0] != '-') {
	  Flag_PRE = Flag_CAL = 1; Name_Resolution = strSave(argv[i]); i++;
	}
	else {
	  Flag_PRE = Flag_CAL = *lres = 1;
	}
      }

      else if (!strcmp(argv[i]+1, "post") ||
	       !strcmp(argv[i]+1, "pos")) {
	i++; j = 0;
	if (i < argc && argv[i][0] == '#') {
	  Flag_POS = 1; *lpos = -atoi(argv[i]+1); i++;
	} /* Only one numbered (#) PostOperation allowed */
	else {
	  while (i < argc && argv[i][0] != '-') {
	    Name_PostOperation[j] = strSave(argv[i]); i++; j++;
	    if(j == NBR_MAX_POS){
	      Message::Error("Too many PostOperations");
              break;
            }
	  }
	  if(!j){
	    Flag_POS = *lpos = 1;
	  }
	  else{
	    Flag_POS = 1;
	    Name_PostOperation[j] = NULL;
	  }
	}
      }

      else if (!strcmp(argv[i]+1, "mesh") ||
	       !strcmp(argv[i]+1, "msh") ||
	       !strcmp(argv[i]+1, "m")) {
	i++;
	if (i < argc && argv[i][0] != '-') {
	  Name_MshFile = strSave(argv[i]); i++;
	}
	else {
	  Message::Error("Missing file name");
	}
      }

      else if (!strcmp(argv[i]+1, "adapt") ||
	       !strcmp(argv[i]+1, "adap") ||
	       !strcmp(argv[i]+1, "ada")) {
	i++;
	if (i < argc && argv[i][0] != '-') {
	  Name_AdaptFile = strSave(argv[i]); i++;
	}
	else {
	  Message::Error("Missing file name");
	}
      }

      else if (!strcmp(argv[i]+1, "res")) {
	i++; j = 0;
	while (i < argc && argv[i][0] != '-') {
	  Name_ResFile[j] = strSave(argv[i]); i++; j++;
	  if(j == NBR_MAX_RES){
	    Message::Error("Too many '.res' files");
            break;
          }
	}
	if(!j)
	  Message::Error("Missing file name");
	else{
	  Name_ResFile[j] = NULL;
	}
      }

      else if (!strcmp(argv[i]+1, "gmshread")) {
        for(int k = 0; k < NBR_MAX_RES; k++) Tag_GmshReadFile[k] = -1;
	i++; j = 0;
	while (i < argc && argv[i][0] != '-') {
	  Name_GmshReadFile[j] = strSave(argv[i]); i++; j++;
	  if(j == NBR_MAX_RES){
	    Message::Error("Too many GmshRead files");
            break;
          }
	}
	if(!j)
	  Message::Error("Missing file name");
	else{
	  Name_GmshReadFile[j] = NULL;
	}
      }

      else if (!strcmp(argv[i]+1, "gmshtag")) {
        for(int k = 0; k < NBR_MAX_RES; k++) Tag_GmshReadFile[k] = -1;
	i++; j = 0;
	while (i < argc && argv[i][0] != '-') {
	  Tag_GmshReadFile[j] = atoi(argv[i]); i++; j++;
	  if(j == NBR_MAX_RES){
	    Message::Error("Too many tags");
            break;
          }
	}
	if(!j)
	  Message::Error("Missing tag");
      }

      else if (!strcmp(argv[i]+1, "name")) {
	i++;
	if (i < argc && argv[i][0] != '-') {
	  Name_Generic = strSave(argv[i]); i++;
	}
	else {
	  Message::Error("Missing string");
	}
      }

      else if (!strcmp(argv[i]+1, "petscinfo") ||
	       !strcmp(argv[i]+1, "-petscinfo")) {
	sargv[(*sargc)++] = (char*)"-info";
	i++;
      }

      else {
	sargv[(*sargc)++] = argv[i++];
      }

    }
    else{
      if (!strlen(pro)) {
	sargv[0] = argv[i];
	strcpy(pro, argv[i++]);
      }
      else{
	sargv[(*sargc)++] = argv[i++];
      }
    }

  }

  if(!strlen(pro)){
    Message::Error("Missing input file name");
    Name_Generic = strSave("");
    *sargc = 0;
  }
  else{
    if(!Name_Generic){
      Name_Generic = strSave(pro);
      if(strcmp(pro+(strlen(pro)-4), ".pro") &&
	 strcmp(pro+(strlen(pro)-4), ".PRO"))
	strcat(pro,".pro");
      else
	Name_Generic[strlen(pro)-4] = '\0';
    }
    else{
      std::string fix = Fix_RelativePath(Name_Generic, pro);
      Free(Name_Generic);
      Name_Generic = strSave(fix.c_str());
      if(strcmp(pro+(strlen(pro)-4), ".pro") &&
         strcmp(pro+(strlen(pro)-4), ".PRO"))
        strcat(pro,".pro");
    }

    Name_Path = strSave(Name_Generic);
    i = strlen(Name_Path)-1;
    while(i >= 0 && Name_Path[i] != '/' && Name_Path[i] != '\\') i--;
    Name_Path[i+1] = '\0';
  }
}

#if defined(HAVE_GMSH)
class GmshMsg : public GmshMessage{
public:
  void operator()(std::string level, std::string msg)
  {
    if(level == "Fatal")
      Message::Fatal("%s", msg.c_str());
    else if(level == "Error")
      Message::Error("%s", msg.c_str());
    else if(level == "Warning")
      Message::Warning("%s", msg.c_str());
    else
      Message::Info("%s", msg.c_str());
  }
};
#endif

static void Free_GlobalVariables()
{
  Flag_PRE = 0; Flag_CAL = 0; Flag_POS = 0; Flag_RESTART = 0;
  Flag_XDATA = 0; Flag_BIN = 0; Flag_SPLIT = 0; Flag_GMSH_VERSION = 1;
  Flag_NETWORK_CACHE = 0;
  Flag_ORDER = -1.;
  Free(Name_Generic); Name_Generic = 0;
  Free(Name_Path); Name_Path = 0;
  Free(Name_Resolution); Name_Resolution = 0;
  Free(Name_MshFile); Name_MshFile = 0;
  Free(Name_AdaptFile); Name_AdaptFile = 0;
  int i = 0;
  while(Name_PostOperation[i]){
    Free(Name_PostOperation[i]); Name_PostOperation[i] = 0; i++;
  }
  i = 0;
  while(Name_ResFile[i]){
    Free(Name_ResFile[i]); Name_ResFile[i] = 0; i++;
  }
  i = 0;
  while(Name_GmshReadFile[i]){
    Free(Name_GmshReadFile[i]); Name_GmshReadFile[i] = 0; i++;
  }
  Free_ProblemStructure();
  Free_ParserVariables();
}

int MainKernel(int argc, char *argv[])
{
  if(argc < 2) Info(0, argv[0]);

  std::string cmdline("");
  for(int i = 0; i < argc; i++){
    if(i) cmdline += " ";
    cmdline += argv[i];
  }

  Message::Initialize(argc, argv);

  char pro[256];
  char **sargv = (char**)Malloc(256 * sizeof(char*));
  int sargc, lres = 0, lpos = 0, check = 0;
  Get_Options(argc, argv, &sargc, sargv, pro, &lres, &lpos, &check);

  if(Message::GetErrorCount()){
    Message::Finalize();
    return Message::GetErrorCount();
  }
  Message::Info("Running '%s' [GetDP %s, %d node%s]", cmdline.c_str(),
                GETDP_VERSION, Message::GetCommSize(),
                Message::GetCommSize() > 1 ? "s" : "");
  Message::Cpu(3, true, true, true, true, true, "Started");

  if(sargc > 1){
    std::string solveropt("");
    for(int i = 1; i < sargc; i++){
      if(i > 1) solveropt += " ";
      solveropt += sargv[i];
    }
    Message::Debug("Passing unused options to solver: '%s'", solveropt.c_str());
  }

  if(!Name_ResFile[0]){
    Name_ResFile[0] = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char));
    strcpy(Name_ResFile[0], Name_Generic);
    strcat(Name_ResFile[0], ".res");
    Name_ResFile[1] = 0;
  }

  if(!Name_MshFile){
    std::string name = Message::GetOnelabString("Gmsh/MshFileName");
    if(name.size()){
      Name_MshFile = strSave(name.c_str());
      Message::Info("Got mesh name from Onelab: '%s'", Name_MshFile);
    }
  }
  if(!Name_MshFile){
    Name_MshFile = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char));
    strcpy(Name_MshFile, Name_Generic);
    strcat(Name_MshFile, ".msh");
  }

#if defined(HAVE_GMSH)
  Message::Info("Initializing Gmsh");
  GmshInitialize();
  GmshMsg *msg = 0;
  if(!GmshGetMessageHandler() && !Flag_CALLED_WITH_ONELAB_SERVER){
    // do not set msg handler if one is provided (e.g. on Android/iOS)
    msg = new GmshMsg;
    GmshSetMessageHandler(msg);
  }
  int j = 0;
  while(Name_GmshReadFile[j]){
    if(Tag_GmshReadFile[j] >= 0){
      PView::setGlobalTag(Tag_GmshReadFile[j]);
      Message::Info("GmshRead[%s] -> View[%d]", Name_GmshReadFile[j], Tag_GmshReadFile[j]);
    }
    else{
      Message::Info("GmshRead[%s]", Name_GmshReadFile[j]);
    }
    GmshMergePostProcessingFile(Name_GmshReadFile[j]);
    j++;
  }
#endif

  IncreaseStackSize();
  LinAlg_InitializeSolver(&sargc, &sargv);

  Init_ProblemStructure();
  Read_ProblemStructure(pro);
  Finalize_ProblemStructure();

  int choose = 1;
  if (!Flag_PRE && !Flag_CAL && !Flag_POS && !check){
    lres = lpos = 1;
    choose = 0;
  }

  if(lres)
    Print_ListResolution(choose, lres, &Name_Resolution);

  if(lpos)
    Print_ListPostOperation(choose, lpos, Name_PostOperation);

  if(check){
    Print_ProblemStructure();
  }
  else{
    check = Message::GetOnelabNumber
      (Message::GetOnelabClientName() + "/}ModelCheck");
    if(check) Print_Object(check - 1);
  }

  if(Flag_PRE || Flag_CAL || Flag_POS)
    SolvingAnalyse();

  LinAlg_FinalizeSolver();

  Message::PrintErrorCounter("Run");
  Message::Cpu(3, true, true, true, true, true, "Stopped");

#if defined(HAVE_GMSH)
  if(!Flag_CALLED_WITH_ONELAB_SERVER) GmshFinalize();
  if(msg) delete msg;
#endif

  Free_GlobalVariables();
  Free(sargv);
  Message::Finalize();
  return Message::GetErrorCount();
}

int GetDP(const std::vector<std::string> &args, void *ptr)
{
  onelab::server *onelabServer = (onelab::server*) ptr;
  if(onelabServer != NULL){
    onelab::server::setInstance(onelabServer);
    Flag_CALLED_WITH_ONELAB_SERVER = 1;
  }
  int argc = args.size();
  std::vector<char*> argv(argc + 1, (char*)0);
  for(int i = 0; i < argc; i++) argv[i] = (char*)args[i].c_str();
  return MainKernel(argc, &argv[0]);
}

void GetDPClearNumbers()
{
  GetDPNumbers.clear();
}

void GetDPSetNumber(const std::string &name, double value)
{
  GetDPNumbers[name] = std::vector<double>(1, value);
  CommandLineNumbers[name] = std::vector<double>(1, value);
}

void GetDPSetNumber(const std::string &name, const std::vector<double> &value)
{
  GetDPNumbers[name] = value;
  CommandLineNumbers[name] = value;
}

std::vector<double> &GetDPGetNumber(const std::string &name)
{
  return GetDPNumbers[name];
}

void GetDPClearStrings()
{
  GetDPStrings.clear();
}

void GetDPSetString(const std::string &name, const std::string &value)
{
  GetDPStrings[name] = std::vector<std::string>(1, value);
  CommandLineStrings[name] = std::vector<std::string>(1, value);
}

void GetDPSetString(const std::string &name, const std::vector<std::string> &value)
{
  GetDPStrings[name] = value;
  CommandLineStrings[name] = value;
}

std::vector<std::string> &GetDPGetString(const std::string &name)
{
  return GetDPStrings[name];
}
