#define RCSID "$Id: Main.c,v 1.37 2001-05-18 12:26:27 dular Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

#include "GetDP.h"
#include "Init_Problem.h"
#include "LinAlg.h"
#include "Magic.h"
#include "Socket.h"

extern FILE *yyin ;
long int     yylinenum=0 ;
int          yycolnum=0, yyincludenum=0 ;
char         yyname[MAX_FILE_NAME_LENGTH]="", yyincludename[MAX_FILE_NAME_LENGTH];
int          yyparse(void) ;
int          yyrestart(FILE*) ;
void         Interactive(void);

int   GetDP_CurrentStackIndex = 0 ;
char *GetDP_CurrentFunction[GETDP_STACK_SIZE] ;
char *GetDP_CurrentSourceFile[GETDP_STACK_SIZE] ;
int   GetDP_CurrentSourceLine[GETDP_STACK_SIZE] ;

FILE   *PostStream, *LogStream, *PrintStream ;
List_T *GeoData_L, *PreResolutionIndex_L ;

struct Problem           Problem_S ;
struct Expression       *Problem_Expression0 ;
struct CurrentData       Current ;
struct PostProcessing    InteractivePostProcessing_S ;
struct PostSubOperation  InteractivePostSubOperation_S ;

int     TreatmentStatus;
int     ErrorLevel, InteractiveLevel=0; 
int     InteractiveCompute, InteractiveInterrupt=0 ;
int     Flag_PRE, Flag_PAR, Flag_CAL, Flag_POS, Flag_IPOS, Flag_XDATA;
int     Flag_CHECK, Flag_LRES, Flag_LPOS, Flag_LIPOS; 
int     Flag_RESTART, Flag_LOG, Flag_VERBOSE, Flag_BIN, Flag_PROGRESS ;
int     Flag_SPLIT, Flag_SOCKET ;
double  Flag_ORDER ;
char    Name_Generic[MAX_FILE_NAME_LENGTH] ;
char   *Name_Resolution ;
char   *Name_PostProcessing[NBR_MAX_POS], *Name_PostOperation[NBR_MAX_POS] ;
char   *Name_MshFile, *Name_ResFile[NBR_MAX_RES], *Name_AdaptFile ;

int Flag_RemoveSingularity = 0;

/* ------------------------------------------------------------------------ */
/*  m a i n                                                                 */
/* ------------------------------------------------------------------------ */

#ifdef _BLACKBOX
#include "MainBlackBox.c"
#else

int  main(int argc, char *argv[]) {
  char  **sargv;
  int   sargc, i, choose = 1 ;
  char  Name_ProFile[MAX_FILE_NAME_LENGTH], Name_LogFile[MAX_FILE_NAME_LENGTH] ;

  GetDP_Begin("main");

  /* handle some signals */

  signal(SIGFPE,  Signal); /* Floating-point exception (ANSI).  */
  signal(SIGSEGV, Signal); /* Segmentation violation (ANSI).  */
  signal(SIGINT,  Signal); /* Interrupt (ANSI).  */

  /* init MPI for multi-processor jobs */

  LinAlg_Initialize(&argc, &argv, &Current.NbrCpu, &Current.RankCpu);

  /* no arguments on command line */

  if(argc < 2) Info(0, argv[0]); 
  
  /* process getdp options, save unused options in sargv */

  sargv = (char**)Malloc(256*sizeof(char**));

  Init_GlobalVariables() ;
  Get_Options(argc, argv, &sargc, sargv, Name_ProFile, Name_Generic) ;

  /* log file */

  if(Flag_LOG){
    strcpy(Name_LogFile, Name_Generic) ;
    strcat(Name_LogFile, ".log") ;
    if(!(LogStream = fopen(Name_LogFile, "w+"))){
      Flag_LOG = 0;
      Msg(WARNING, "Unable to open file '%s'", Name_LogFile) ;
    }
  }

  /* unused options */

  if(sargc > 1){
    Msg(INFO1, "Passing unused options to solver: '") ;
    for(i = 1 ; i < sargc ; i++) {
      if(i != 1) Msg(INFO2, " ") ; 
      Msg(INFO2, "%s", sargv[i]) ;
    }
    Msg(INFO3, "'") ;
  }

  /* default .res file */

  if(!Name_ResFile[0]){
    Name_ResFile[0] = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char)) ;
    strcpy(Name_ResFile[0], Name_Generic) ;
    strcat(Name_ResFile[0], ".res") ;
    Name_ResFile[1] = NULL ;
  }

  /* default .msh file */

  if(!Name_MshFile){
    Name_MshFile = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char)) ;
    strcpy(Name_MshFile, Name_Generic) ;
    strcat(Name_MshFile, ".msh") ;
  }

  /* Solver init */

  LinAlg_InitializeSolver(&sargc, &sargv, &Current.NbrCpu, &Current.RankCpu) ;

  /* fill-in problem structure (read pro files) */

  Init_ProblemStructure();
  Read_ProblemStructure(Name_ProFile) ;

  /* process */

  Problem_Expression0 = (Problem_S.Expression)?
    (struct Expression*)List_Pointer(Problem_S.Expression, 0) : NULL ;

  if (!Flag_PRE && !Flag_PAR && !Flag_CAL && !Flag_POS && !Flag_CHECK){
    Flag_LRES = Flag_LPOS = 1 ;
    choose = 0 ;
  }

  if (Flag_CHECK) Print_ProblemStructure(&Problem_S) ;
  if (Flag_LRES) Print_ListResolution(choose, &Problem_S) ;
  if (Flag_LPOS) Print_ListPostOperation(choose, &Problem_S) ;
  if (Flag_LIPOS) Print_ListPostProcessing(choose, &Problem_S) ;

  if (Flag_PRE || Flag_PAR || Flag_CAL || Flag_POS) SolvingAnalyse() ;

  /* finalize the solver */

  LinAlg_FinalizeSolver() ;

  /* end */
  
  Msg(DIRECT, "E n d");

  if(Flag_LOG) fclose(LogStream);
  
  /* finalize MPI job */

  LinAlg_Finalize() ;

  /* close socket */

  if(Flag_SOCKET>0){
    Socket_SendInt(Flag_SOCKET, GETDP_END);
    Socket_Close(Flag_SOCKET);
  }

  GetDP_Return(0) ;
}

#endif


/* ------------------------------------------------------------------------ */
/*  I n i t _ G l o b a l V a r i a b l e s                                 */
/* ------------------------------------------------------------------------ */

void Init_GlobalVariables(void){ 

  GetDP_Begin("Init_GlobalVariables");

  Flag_PRE = 0   ; Flag_CAL = 0     ; Flag_POS = 0       ; Flag_IPOS = 0 ;  
  Flag_CHECK = 0 ; Flag_XDATA = 0   ; Flag_RESTART = 0   ; Flag_BIN = 0  ; 
  Flag_LRES = 0  ; Flag_LPOS = 0    ; Flag_LIPOS = 0     ; Flag_PAR = 0; 
  Flag_LOG = 0   ; Flag_VERBOSE = 4 ; Flag_PROGRESS = 10 ; Flag_SPLIT = 0 ;
  Flag_ORDER = -1. ; Flag_SOCKET = -1 ;

  Name_Resolution = Name_PostProcessing[0] = Name_PostOperation[0] = NULL ;
  Name_MshFile = Name_ResFile[0] = Name_AdaptFile = NULL ;

  PostStream = PrintStream = stdout ;

  GetDP_End ;
}  

/* ------------------------------------------------------------------------ */
/*  I n i t _ P r o b l e m S t r u c t u r e                               */
/* ------------------------------------------------------------------------ */

void Init_ProblemStructure(void){ 

  GetDP_Begin("Init_ProblemStructure");

  Problem_S.Expression        = NULL ;  
  Problem_S.Group             = NULL ;
  Problem_S.Constraint        = NULL ;
  Problem_S.JacobianMethod    = NULL ;  
  Problem_S.IntegrationMethod = NULL ;
  Problem_S.FunctionSpace     = NULL ;  
  Problem_S.Formulation       = NULL ;
  Problem_S.Resolution        = NULL ;  
  Problem_S.PostProcessing    = NULL ;  
  Problem_S.PostOperation     = NULL ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ O p t i o n s                                                   */
/* ------------------------------------------------------------------------ */

int Get_Options(int argc, char *argv[], int *sargc, char **sargv, 
		char *Name_ProFile, char *Name_Generic) {
  
  int  i, j, Flag_TmpLOG = 0, Flag_NameProblem = 0 ;

  GetDP_Begin("Get_Options");

  strcpy(Name_ProFile, "") ;  
  strcpy(Name_Generic, "") ;  

  i = *sargc = 1 ;

  while (i < argc) {
    
    if (argv[i][0] == '-') {
      
      if      (!strcmp(argv[i]+1, "cal"))    { Flag_CAL     = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "check"))  { Flag_CHECK   = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "xdata"))  { Flag_XDATA   = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "quiet"))  { Flag_VERBOSE = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "silent")) { Flag_VERBOSE = 0 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "log"))    { Flag_TmpLOG  = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "nolog"))  { Flag_TmpLOG  = 0 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "debug"))  { Flag_VERBOSE = 99 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "bin"))    { Flag_BIN     = 1 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "ascii"))  { Flag_BIN     = 0 ; i++ ; } 
      else if (!strcmp(argv[i]+1, "split"))  { Flag_SPLIT   = 1 ; i++ ; } 

      else if (!strcmp(argv[i]+1, "socket")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_SOCKET = Socket_Connect(argv[i]) ;
	  Socket_SendInt(Flag_SOCKET, getpid());
	  i++ ; 
	}
	else {
	  Msg(ERROR, "Missing socket name");
	}
      }

      else if (!strcmp(argv[i]+1, "i")) { 
	Interactive();
      } 

      else if (!strcmp(argv[i]+1, "restart")){ 
	Flag_PRE = Flag_PAR = 0 ; Flag_CAL = Flag_RESTART = 1 ; i++ ;
      } 

      else if (!strcmp(argv[i]+1, "verbose") ||
	       !strcmp(argv[i]+1, "v")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_VERBOSE = atoi(argv[i]) ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing number");
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
	  Flag_PROGRESS = atoi(argv[i]) ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing number");
	}
      } 

      else if (!strcmp(argv[i]+1, "pre")) {
	i++ ;
	if (i<argc && argv[i][0]=='#') {
	  Flag_PRE = 1 ; Flag_LRES = -atoi(argv[i]+1) ; i++ ;
	}
	else if (i<argc && argv[i][0]!='-') { 
	  Flag_PRE = 1 ; Name_Resolution = argv[i] ; i++ ; 
	}
	else {
	  Flag_PRE = Flag_LRES = 1 ;
	}
      }

      else if (!strcmp(argv[i]+1, "order") ||
	       !strcmp(argv[i]+1, "ord")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_ORDER = atof(argv[i]) ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing interpolation order") ;
	}
      }

      else if (!strcmp(argv[i]+1, "partition") ||
	       !strcmp(argv[i]+1, "part") ||
	       !strcmp(argv[i]+1, "par")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_PAR = atoi(argv[i]) ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing number of partitions") ;
	}
      }

      else if (!strcmp(argv[i]+1, "solve") ||
	       !strcmp(argv[i]+1, "sol")) {
	i++ ;
	if (i<argc && argv[i][0]=='#') {
	  Flag_PRE = Flag_CAL = 1 ; Flag_LRES = -atoi(argv[i]+1) ; i++ ;
	}
	else if (i<argc && argv[i][0]!='-') {
	  Flag_PRE = Flag_CAL = 1 ; Name_Resolution = argv[i] ; i++ ; 
	}
	else { 
	  Flag_PRE = Flag_CAL = Flag_LRES = 1 ;
	}
      }

      else if (!strcmp(argv[i]+1, "post") ||
	       !strcmp(argv[i]+1, "pos")) {
	i++ ; j = 0 ;
	if (i<argc && argv[i][0]=='#') {
	  Flag_POS = 1 ; Flag_LPOS = -atoi(argv[i]+1) ; i++ ;
	} /* Only one numbered (#) PostOperation allowed */
	else {
	  while (i<argc && argv[i][0]!='-') { 
	    Name_PostOperation[j] = argv[i] ; i++ ; j++ ;
	    if(j == NBR_MAX_POS)
	      Msg(ERROR, "Too many PostOperations");
	  }
	  if(!j){
	    Flag_POS = Flag_LPOS = 1 ;
	  }
	  else{
	    Flag_POS = 1 ;
	    Name_PostOperation[j] = NULL ;
	  }
	}
      }

      else if (!strcmp(argv[i]+1, "interactive-post") ||
	       !strcmp(argv[i]+1, "ipost") ||
	       !strcmp(argv[i]+1, "ipos")) {
	i++ ; j = 0 ;
	while (i<argc && argv[i][0]!='-') { 
	  Name_PostProcessing[j] = argv[i] ; i++ ; j++ ;
	  if(j == NBR_MAX_POS)
	    Msg(ERROR, "Too many PostProcessings");
	}
	if(!j){
	  Flag_IPOS = Flag_POS = Flag_LIPOS = 1 ;
	}
	else{
	  Flag_IPOS = Flag_POS = 1 ;
	  Name_PostProcessing[j] = NULL ;
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
	  Msg(ERROR, "Missing file name");
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
	  Msg(ERROR, "Missing file name");
	}
      }

      else if (!strcmp(argv[i]+1, "res")) {
	i++ ; j = 0 ;
	while (i<argc && argv[i][0]!='-') { 
	  Name_ResFile[j] = argv[i] ; i++ ; j++ ;
	  if(j == NBR_MAX_RES)
	    Msg(ERROR, "Too many '.res' files");
	}
	if(!j)
	  Msg(ERROR, "Missing file name");
	else{
	  Name_ResFile[j] = NULL ;
	}
      }

      else if (!strcmp(argv[i]+1, "name")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  strcpy(Name_Generic, argv[i]) ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing string");
	}
      }

      else {
	sargv[(*sargc)++] = argv[i++]; 
      }
      
    }
    else{
      if (!Flag_NameProblem) { 
	Flag_NameProblem = 1 ;
	sargv[0] = argv[i] ;
	strcpy(Name_ProFile, argv[i++]) ;
      }
      else{
	sargv[(*sargc)++] = argv[i++];
      }
    }
    
  }
  
  if(!strlen(Name_ProFile))
    Msg(ERROR, "Missing input file name");
  else{
    if(!strlen(Name_Generic)){
      strcpy(Name_Generic, Name_ProFile) ;
      if(strcmp(Name_ProFile+(strlen(Name_ProFile)-4), ".pro") &&
	 strcmp(Name_ProFile+(strlen(Name_ProFile)-4), ".PRO"))
	strcat(Name_ProFile,".pro") ;
      else
	Name_Generic[strlen(Name_ProFile)-4] = '\0' ;
    }
    else if(strcmp(Name_ProFile+(strlen(Name_ProFile)-4), ".pro") &&
	    strcmp(Name_ProFile+(strlen(Name_ProFile)-4), ".PRO"))
      strcat(Name_ProFile,".pro") ;
  }

  Flag_LOG = Flag_TmpLOG ;

  GetDP_Return(0) ;
}

/* ------------------------------------------------------------------------ */
/*  F i n a l i z e A n d E x i t                                           */
/* ------------------------------------------------------------------------ */

void FinalizeAndExit(void){

  GetDP_Begin("FinalizeAndExit");

  LinAlg_FinalizeSolver();
  LinAlg_Finalize();

  if(Flag_SOCKET>0){ 
    Socket_SendInt(Flag_SOCKET, GETDP_END);
    Socket_Close(Flag_SOCKET);
  }

  GetDP_Exit(1) ;
}

/* ------------------------------------------------------------------------ */
/*  R e a d _ P r o b l e m S t r u c t u r e                               */
/* ------------------------------------------------------------------------ */

void  Read_ProblemStructure (char * Name){

  char    AbsPath[2048], Last_yyname[MAX_FILE_NAME_LENGTH];
  int     Last_yylinenum, Last_yyincludenum, Last_ErrorLevel, i ;

  GetDP_Begin("Read_ProblemStructure");

  Last_yylinenum = yylinenum ; 
  strcpy(Last_yyname, yyname);
  Last_ErrorLevel = ErrorLevel ; 
  Last_yyincludenum = yyincludenum ;

  strcpy(AbsPath, yyname);
  i = strlen(yyname)-1 ;
  while(i >= 0 && yyname[i] != '/' && yyname[i] != '\\') i-- ;
  AbsPath[i+1] = '\0';
  strcat(AbsPath, Name);

  Msg(LOADING, "Problem definition '%s'", AbsPath) ;

  if(!(yyin = fopen(AbsPath, "r"))) Msg(ERROR, "Unable to open file '%s'", AbsPath);

  ErrorLevel = 0 ;  yylinenum = 1 ; yyincludenum=0 ; strcpy(yyname, AbsPath) ;

  yyrestart(yyin); yyparse(); fclose(yyin);

  if(ErrorLevel) FinalizeAndExit();

  while(yyincludenum > 0){
    Read_ProblemStructure(yyincludename);    
    
    yyin = fopen(yyname, "r");
    yyrestart(yyin);
    for(i=0;i<yylinenum;i++) fgets(AbsPath, 2048, yyin);
    yylinenum++ ;
    yyparse(); fclose(yyin);
    if(ErrorLevel) FinalizeAndExit();
  }

  yylinenum = Last_yylinenum ; strcpy(yyname, Last_yyname) ;
  ErrorLevel = Last_ErrorLevel ; yyincludenum = Last_yyincludenum ;

  GetDP_End ;
}
