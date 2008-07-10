// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "GetDPVersion.h"
#include "ProData.h"
#include "SolvingAnalyse.h"
#include "Numeric.h"
#include "LinAlg.h"
#include "OS.h"
#include "MallocUtils.h"
#include "Message.h"

int     Flag_PRE = 0, Flag_CAL = 0, Flag_POS = 0, Flag_RESTART = 0;
int     Flag_XDATA = 0, Flag_BIN = 0, Flag_SPLIT = 0;
double  Flag_ORDER = -1.;
char   *Name_Generic = 0, *Name_Path = 0;
char   *Name_Resolution = 0 ;
char   *Name_PostOperation[NBR_MAX_POS] = {0};
char   *Name_MshFile = 0, *Name_ResFile[NBR_MAX_RES] = {0}, *Name_AdaptFile = 0 ;

void Info(int level, char *arg0)
{
  switch(level){
  case 0 :
    fprintf(stderr, 
	    "GetDP, a General environment for the treatment of Discrete Problems\n"
	    "Copyright (C) 1997-2008 P. Dular, C. Geuzaine\n"
#if defined(HAVE_SPARSKIT)
	    "Usage: %s [file] [options]\n"
#else
	    "Usage: [mpirun [MPI options]] %s [file] [options] [PETSc options]\n"
#endif
	    "Processing options:\n"
	    "  -pre 'Resolution'         pre-processing\n"
	    "  -cal                      processing\n"
	    "  -pos 'PostOperation(s)'   post-processing\n"
	    "  -msh file                 read mesh (in msh format) from file\n"
	    "  -restart                  resume processing from where it stopped\n"
	    "  -solve 'Resolution'       same as -pre 'Resolution' -cal\n"
	    "  -split                    save processing results in separate files\n"
	    "  -res file(s)              load processing results from file(s)\n"
	    "  -name string              use string as generic file name\n"
	    "  -adapt file               read adaptation constraints from file\n"
	    "  -order num                restrict maximum interpolation order\n"
#if defined(HAVE_SPARSKIT)
	    "Linear solver options:\n"
	    "  -solver file              specify parameter file (default: solver.par)\n"
	    "  -'Parameter' num          override value of solver parameter 'Parameter'\n"
#endif
	    "Output options:\n"
	    "  -bin                      use binary format for output files\n"
	    "  -socket string            communicate through socket string\n"
	    "Other options:\n"
	    "  -check                    interactive check of problem structure\n"
	    "  -v num                    set verbosity level (default: 4)\n"
	    "  -p num                    set progress indicator update (default: 10)\n"
	    "  -version                  show version number\n"
	    "  -info                     show detailed version information\n"
	    "  -help                     show this message\n", arg0);
    break;
  case 1:
    fprintf(stderr, "%s\n", GETDP_VERSION);
    break;
  case 2:
    fprintf(stderr, "Version      : %s\n", GETDP_VERSION);
    fprintf(stderr, "License      : %s\n", GETDP_SHORT_LICENSE);
    fprintf(stderr, "Build OS     : %s\n", GETDP_OS);
    fprintf(stderr, "Build date   : %s\n", GETDP_DATE);
    fprintf(stderr, "Build host   : %s\n", GETDP_HOST);
    fprintf(stderr, "Packager     : %s\n", GETDP_PACKAGER);
#if defined(HAVE_SPARSKIT) && defined(HAVE_ILU_FLOAT)
    fprintf(stderr, "Solver       : Sparskit (real arithmetic, single precision ILU)\n");
#elif defined(HAVE_SPARSKIT)
    fprintf(stderr, "Solver       : Sparskit (real arithmetic)\n");
#elif defined(HAVE_PETSC) && defined(PETSC_USE_COMPLEX)
    fprintf(stderr, "Solver       : PETSc (complex arithmetic)\n");
#elif defined(HAVE_PETSC)
    fprintf(stderr, "Solver       : PETSc (real arithmetic)\n");
#else
    fprintf(stderr, "Solver       : none\n");
#endif
    fprintf(stderr, "Web site     : http://www.geuz.org/getdp/\n");
    fprintf(stderr, "Mailing list : getdp@geuz.org\n");
    break;
  }
  exit(0);
}

/* ------------------------------------------------------------------------ */
/*  G e t _ O p t i o n s                                                   */
/* ------------------------------------------------------------------------ */

void Get_Options(int argc, char *argv[], int *sargc, char **sargv, char *pro, 
		 int *lres, int *lpos, int *check)
{
  int  i, j, Flag_NameProblem = 0 ;

  strcpy(pro, "") ;  

  i = *sargc = 1 ;

  while (i < argc) {
    
    if (argv[i][0] == '-') {
      
      if      (!strcmp(argv[i]+1, "cal"))    { Flag_CAL     = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "check"))  { *check       = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "xdata"))  { Flag_XDATA   = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "bin"))    { Flag_BIN     = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "ascii"))  { Flag_BIN     = 0 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "split"))  { Flag_SPLIT   = 1 ; i++ ; } 

      else if (!strcmp(argv[i]+1, "socket")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Msg::InitializeSocket(argv[i]); i++ ; 
	}
	else {
	  Msg::Error("Missing socket name");
	}
      }

      else if (!strcmp(argv[i]+1, "restart")){ 
	Flag_CAL = Flag_RESTART = 1 ; i++ ;
      } 

      else if (!strcmp(argv[i]+1, "verbose") ||
	       !strcmp(argv[i]+1, "v")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Msg::SetVerbosity(atoi(argv[i])); i++ ; 
	}
	else {
	  Msg::Error("Missing number");
	}
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
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Msg::SetProgressMeterStep(atoi(argv[i])) ; i++ ;
	}
	else {
	  Msg::Error("Missing number");
	}
      } 

      else if (!strcmp(argv[i]+1, "pre")) {
	i++ ;
	if (i<argc && argv[i][0]=='#') {
	  Flag_PRE = 1 ; *lres = -atoi(argv[i]+1) ; i++ ;
	}
	else if (i<argc && argv[i][0]!='-') { 
	  Flag_PRE = 1 ; Name_Resolution = argv[i] ; i++ ; 
	}
	else {
	  Flag_PRE = *lres = 1 ;
	}
      }

      else if (!strcmp(argv[i]+1, "order") ||
	       !strcmp(argv[i]+1, "ord")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_ORDER = atof(argv[i]) ; i++ ; 
	}
	else {
	  Msg::Error("Missing interpolation order") ;
	}
      }

      else if (!strcmp(argv[i]+1, "solve") ||
	       !strcmp(argv[i]+1, "sol")) {
	i++ ;
	if (i<argc && argv[i][0]=='#') {
	  Flag_PRE = Flag_CAL = 1 ; *lres = -atoi(argv[i]+1) ; i++ ;
	}
	else if (i<argc && argv[i][0]!='-') {
	  Flag_PRE = Flag_CAL = 1 ; Name_Resolution = argv[i] ; i++ ; 
	}
	else { 
	  Flag_PRE = Flag_CAL = *lres = 1 ;
	}
      }

      else if (!strcmp(argv[i]+1, "post") ||
	       !strcmp(argv[i]+1, "pos")) {
	i++ ; j = 0 ;
	if (i<argc && argv[i][0]=='#') {
	  Flag_POS = 1 ; *lpos = -atoi(argv[i]+1) ; i++ ;
	} /* Only one numbered (#) PostOperation allowed */
	else {
	  while (i<argc && argv[i][0]!='-') { 
	    Name_PostOperation[j] = argv[i] ; i++ ; j++ ;
	    if(j == NBR_MAX_POS)
	      Msg::Error("Too many PostOperations");
	  }
	  if(!j){
	    Flag_POS = *lpos = 1 ;
	  }
	  else{
	    Flag_POS = 1 ;
	    Name_PostOperation[j] = NULL ;
	  }
	}
      }

      else if (!strcmp(argv[i]+1, "mesh") ||
	       !strcmp(argv[i]+1, "msh") ||
	       !strcmp(argv[i]+1, "m")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Name_MshFile = argv[i] ; i++ ; 
	}
	else {
	  Msg::Error("Missing file name");
	}
      }

      else if (!strcmp(argv[i]+1, "adapt") ||
	       !strcmp(argv[i]+1, "adap") ||
	       !strcmp(argv[i]+1, "ada")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Name_AdaptFile = argv[i] ; i++ ; 
	}
	else {
	  Msg::Error("Missing file name");
	}
      }

      else if (!strcmp(argv[i]+1, "res")) {
	i++ ; j = 0 ;
	while (i<argc && argv[i][0]!='-') { 
	  Name_ResFile[j] = argv[i] ; i++ ; j++ ;
	  if(j == NBR_MAX_RES)
	    Msg::Error("Too many '.res' files");
	}
	if(!j)
	  Msg::Error("Missing file name");
	else{
	  Name_ResFile[j] = NULL ;
	}
      }

      else if (!strcmp(argv[i]+1, "name")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Name_Generic = (char*)Malloc((strlen(argv[i]) + 1) * sizeof(char));
	  strcpy(Name_Generic, argv[i]) ; i++ ; 
	}
	else {
	  Msg::Error("Missing string");
	}
      }

      else if (!strcmp(argv[i]+1, "petscinfo") || 
	       !strcmp(argv[i]+1, "-petscinfo")) {
	sargv[(*sargc)++] = "-info" ;
	i++ ;
      }

      else {
	sargv[(*sargc)++] = argv[i++]; 
      }
      
    }
    else{
      if (!Flag_NameProblem) { 
	Flag_NameProblem = 1 ;
	sargv[0] = argv[i] ;
	strcpy(pro, argv[i++]) ;
      }
      else{
	sargv[(*sargc)++] = argv[i++];
      }
    }
    
  }
  
  if(!strlen(pro))
    Msg::Error("Missing input file name");
  else{
    if(!Name_Generic){
      Name_Generic = (char*)Malloc((strlen(pro) + 1) * sizeof(char));
      strcpy(Name_Generic, pro) ;
      if(strcmp(pro+(strlen(pro)-4), ".pro") &&
	 strcmp(pro+(strlen(pro)-4), ".PRO"))
	strcat(pro,".pro") ;
      else
	Name_Generic[strlen(pro)-4] = '\0' ;
    }
    else if(strcmp(pro+(strlen(pro)-4), ".pro") &&
	    strcmp(pro+(strlen(pro)-4), ".PRO"))
      strcat(pro,".pro") ;

    Name_Path = (char*)Malloc((strlen(Name_Generic) + 1) * sizeof(char));
    strcpy(Name_Path, Name_Generic);
    i = strlen(Name_Path)-1 ;
    while(i >= 0 && Name_Path[i] != '/' && Name_Path[i] != '\\') i-- ;
    Name_Path[i+1] = '\0';
  }
}

int MainLegacy(int argc, char *argv[])
{
  if(argc < 2) Info(0, argv[0]);

  LinAlg_Initialize(&argc, &argv);

  char pro[256];
  char **sargv = (char**)Malloc(256 * sizeof(char*));
  int sargc, lres = 0, lpos = 0, check = 0;
  Get_Options(argc, argv, &sargc, sargv, pro, &lres, &lpos, &check) ;

  if(sargc > 1){
    Msg::Info( "Passing unused options to solver: ") ;
    for(int i = 1 ; i < sargc ; i++)
      Msg::Info("  %s", sargv[i]) ;
  }

  if(!Name_ResFile[0]){
    Name_ResFile[0] = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char)) ;
    strcpy(Name_ResFile[0], Name_Generic) ;
    strcat(Name_ResFile[0], ".res") ;
    Name_ResFile[1] = 0 ;
  }

  if(!Name_MshFile){
    Name_MshFile = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char)) ;
    strcpy(Name_MshFile, Name_Generic) ;
    strcat(Name_MshFile, ".msh") ;
  }

  check_gsl();
  CheckResources();

  LinAlg_InitializeSolver(&sargc, &sargv) ;

  Init_ProblemStructure();
  Read_ProblemStructure(pro);

  int choose = 1;
  if (!Flag_PRE && !Flag_CAL && !Flag_POS && !check){
    lres = lpos = 1;
    choose = 0;
  }

  if(check) 
    Print_ProblemStructure();

  if(lres)
    Print_ListResolution(choose, lres, &Name_Resolution);

  if(lpos) 
    Print_ListPostOperation(choose, lpos, &Name_PostOperation[0]);

  if(Flag_PRE || Flag_CAL || Flag_POS)
    SolvingAnalyse();

  LinAlg_FinalizeSolver();

  Msg::Direct("E n d");
  LinAlg_Finalize();
  return 0;
}
