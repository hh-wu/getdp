#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

#include "Message.h"
#include "Init_Problem.h"
#include "ualloc.h"
#include "LinAlg.h"
#include "Magic.h"

extern FILE *yyin ;
long int     yylinenum=0 ;
int          yycolnum=0, yyincludenum=0 ;
char         yyname[MAX_FILE_NAME_LENGTH], yyincludename[MAX_FILE_NAME_LENGTH];
int          yyparse(void) ;
int          yyrestart(FILE*) ;

FILE   *PostStream, *LogStream, *PrintStream ;
List_T *GeoData_L, *PreResolutionIndex_L ;

struct Problem           Problem_S ;
struct Expression       *Problem_Expression0 ;
struct CurrentData       Current ;
struct PostProcessing    InteractivePostProcessing_S ;
struct PostSubOperation  InteractivePostSubOperation_S ;

int     TreatmentStatus;
int     ErrorLevel, InteractiveLevel=0; 
int     InteractiveCompute, InteractiveExit=0, InteractiveInterrupt=0 ;
int     Flag_PRE, Flag_PAR, Flag_CAL, Flag_POS, Flag_IPOS, Flag_XDATA;
int     Flag_CHECK, Flag_LRES, Flag_LPOS, Flag_LIPOS; 
int     Flag_RESTART, Flag_LOG, Flag_VERBOSE, Flag_BIN, Flag_PROGRESS ;
int     Flag_SPLIT ;
double  Flag_DEGREE ;
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
  char  ext[6], **sargv;
  int   sargc ;
  char  ProName[MAX_FILE_NAME_LENGTH], LogName[MAX_FILE_NAME_LENGTH] ;

  /* init MPI for multi-processor jobs */

  gInitialize(&argc, &argv, &Current.NbrCpu, &Current.RankCpu);

  /* no arguments on command line */

  if(argc < 2) Info(0, argv[0]); 
  
  /* process getdp options, save unused options in sargv */

  sargv = (char**)Malloc(256*sizeof(char**));

  Init_GlobalVariables() ;
  Get_Options(argc, argv, &sargc, sargv, ProName) ;

  /* handle some signals */

  signal(SIGFPE,  Signal); 
  signal(SIGSEGV, Signal);
  signal(SIGINT,  Signal); 

  /* generic problem name */

  strcpy(Name_Generic, ProName) ;
  strcpy(ext, ProName+(strlen(ProName)-4)) ;
  if(!strcmp(ext, ".pro") || !strcmp(ext, ".PRO"))
    Name_Generic[strlen(ProName)-4] = '\0' ;
  else
    strcat(ProName,".pro") ;

  /* default .res file */

  if(!Name_ResFile[0]){
    Name_ResFile[0] = (char*)Malloc((strlen(Name_Generic)+5)*sizeof(char)) ;
    strcpy(Name_ResFile[0], Name_Generic) ;
    strcat(Name_ResFile[0], ".res") ;
    Name_ResFile[1] = NULL ;
  }

  /* default .msh file */

  if (!Name_MshFile) {
    Name_MshFile = (char*) Malloc((strlen(Name_Generic)+5)*sizeof(char)) ;
    strcpy(Name_MshFile, Name_Generic) ;
    strcat(Name_MshFile, ".msh") ;
  }

  /* log file */

  if(Flag_LOG){
    strcpy(LogName, Name_Generic) ;
    strcat(LogName, ".log") ;
    if(!(LogStream = fopen(LogName, "w+"))){
      Flag_LOG = 0;
      Msg(WARNING, "Unable to Open File '%s'", LogName) ;
    }
  }

  /* Solver init */

  gInitializeSolver(&sargc, &sargv, &Current.NbrCpu, &Current.RankCpu) ;

  /* fill-in problem structure (read pro files) */

  Init_ProblemStructure();
  Read_ProblemStructure(ProName) ;

  /* process */

  if (Problem_S.Expression) Problem_Expression0 = (struct Expression*)
			      List_Pointer(Problem_S.Expression, 0) ;

  if (Flag_CHECK) Print_ProblemStructure(&Problem_S) ;
  if (Flag_LRES) Print_ListResolution(&Problem_S) ;
  if (Flag_LPOS) Print_ListPostOperation(&Problem_S) ;
  if (Flag_LIPOS) Print_ListPostProcessing(&Problem_S) ;
  if (Flag_PRE || Flag_PAR || Flag_CAL || Flag_POS) SolvingAnalyse() ;

  /* finalize the solver */

  gFinalizeSolver() ;

  /* end */
  
  Msg(DIRECT, "E n d");

  if(Flag_LOG) fclose(LogStream);
  
  /* finalize MPI job */

  gFinalize() ;

  return(0) ;
}

#endif


/* ------------------------------------------------------------------------ */
/*  I n i t _ G l o b a l V a r i a b l e s                                 */
/* ------------------------------------------------------------------------ */

void Init_GlobalVariables(void){ 
  Flag_PRE = 0   ; Flag_CAL = 0     ; Flag_POS = 0       ; Flag_IPOS = 0 ;  
  Flag_CHECK = 0 ; Flag_XDATA = 0   ; Flag_RESTART = 0   ; Flag_BIN = 0  ; 
  Flag_LRES = 0  ; Flag_LPOS = 0    ; Flag_LIPOS = 0     ; Flag_PAR = 0; 
  Flag_LOG = 0   ; Flag_VERBOSE = 4 ; Flag_PROGRESS = 10 ; Flag_SPLIT = 0 ;
  Flag_DEGREE = -1. ;

  Name_Resolution = Name_PostProcessing[0] = Name_PostOperation[0] = NULL ;
  Name_MshFile = Name_ResFile[0] = Name_AdaptFile = NULL ;

  PostStream = PrintStream = stdout ;
}  

/* ------------------------------------------------------------------------ */
/*  I n i t _ P r o b l e m S t r u c t u r e                               */
/* ------------------------------------------------------------------------ */

void Init_ProblemStructure(void){ 
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
}

/* ------------------------------------------------------------------------ */
/*  G e t _ O p t i o n s                                                   */
/* ------------------------------------------------------------------------ */

int Get_Options(int argc, char *argv[], int *sargc, char **sargv, 
		char *NameProblem) {
  
  int  i, j, Flag_TmpLOG = 0, Flag_NameProblem = 0 ;
  
  strcpy(NameProblem, "") ;  
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
	  Msg(ERROR, "Missing Number");
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
	  Msg(ERROR, "Missing Number");
	}
      } 

      else if (!strcmp(argv[i]+1, "pre")) {
	i++ ;
	if(Flag_PRE == 1){
	  Msg(ERROR, 
	      "This syntax is not valid any more.\n" 
	      "Old syntax: 'getdp -res <Resolution name> -pre'\n"
	      "New syntax: 'getdp -pre <Resolution name>'\n"
	      "Type 'getdp -help' for more info.");
	}
	if (i<argc && argv[i][0]!='-') { 
	  Flag_PRE = 1 ; Name_Resolution = argv[i] ; i++ ; 
	}
	else {
	  Flag_LRES = 1 ; i++ ;
	}
      }

      else if (!strcmp(argv[i]+1, "degree") ||
	       !strcmp(argv[i]+1, "deg")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_DEGREE = atof(argv[i]) ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing Degree") ;
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
	  Msg(ERROR, "Missing Number of Partitions") ;
	}
      }

      else if (!strcmp(argv[i]+1, "solve") ||
	       !strcmp(argv[i]+1, "sol")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Flag_PRE = Flag_CAL = 1 ; Name_Resolution = argv[i] ; i++ ; 
	}
	else { 
	  Flag_LRES = 1 ; i++ ;
	}
      }

      else if (!strcmp(argv[i]+1, "post") ||
	       !strcmp(argv[i]+1, "pos")) {
	i++ ; j = 0 ;
	while (i<argc && argv[i][0]!='-') { 
	  Name_PostOperation[j] = argv[i] ; i++ ; j++ ;
	  if(j == NBR_MAX_POS)
	    Msg(ERROR, "Too Many PostOperations");
	}
	if(!j){
	  Flag_LPOS = 1 ; i++ ; 
	}
	else{
	  Flag_POS = 1 ;
	  Name_PostOperation[j] = NULL ;
	}
      }

      else if (!strcmp(argv[i]+1, "interactive-post") ||
	       !strcmp(argv[i]+1, "ipost") ||
	       !strcmp(argv[i]+1, "ipos")) {
	i++ ; j = 0 ;
	while (i<argc && argv[i][0]!='-') { 
	  Name_PostProcessing[j] = argv[i] ; i++ ; j++ ;
	  if(j == NBR_MAX_POS)
	    Msg(ERROR, "Too Many PostOperations");
	}
	if(!j){
	  Flag_LIPOS = 1 ; i++ ; 
	}
	else{
	  Flag_IPOS = Flag_POS = 1 ;
	  Name_PostOperation[j] = NULL ;
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
	  Msg(ERROR, "Missing File Name");
	}
      }

      else if (!strcmp(argv[i]+1, "adapt") ||
	       !strcmp(argv[i]+1, "ada")) {
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  Name_AdaptFile = argv[i] ; i++ ; 
	}
	else {
	  Msg(ERROR, "Missing File Name");
	}
      }

      else if (!strcmp(argv[i]+1, "res")) {
	i++ ; j = 0 ;
	while (i<argc && argv[i][0]!='-') { 
	  Name_ResFile[j] = argv[i] ; i++ ; j++ ;
	  if(j == NBR_MAX_RES)
	    Msg(ERROR, "Too Many '.res' Files");
	}
	if(!j)
	  Msg(ERROR, "Missing File Name");
	else{
	  Flag_SPLIT = 1 ;
	  Name_ResFile[j] = NULL ;
	}
      }

      else {
	Msg(INFO, "Passing Option to Solver: '%s'", argv[i]) ; 
	sargv[(*sargc)++] = argv[i++]; 
      }
      
    }
    else{
      if (!Flag_NameProblem) { 
	Flag_NameProblem = 1 ; 
	sargv[0] = argv[i] ; 
	strcpy(NameProblem, argv[i++]) ; 
      }
      else{
	Msg(INFO, "Passing Option to Solver: '%s'", argv[i]) ;
	sargv[(*sargc)++] = argv[i++]; 
      }
    }
    
  }
  
  if(!strlen(NameProblem)) Msg(ERROR, "Missing Input File Name");

  Flag_LOG = Flag_TmpLOG ;

  return(0) ;
}

/* ------------------------------------------------------------------------ */
/*  F i n a l i z e A n d E x i t                                           */
/* ------------------------------------------------------------------------ */

void FinalizeAndExit(void){
  gFinalizeSolver();
  gFinalize();
  exit(1);
}

/* ------------------------------------------------------------------------ */
/*  R e a d _ P r o b l e m S t r u c t u r e                               */
/* ------------------------------------------------------------------------ */

void  Read_ProblemStructure (char * Name){

  char    String[MAX_STRING_LENGTH], Last_yyname[MAX_FILE_NAME_LENGTH];
  int     Last_yylinenum, Last_yyincludenum, Last_ErrorLevel, i ;

  Msg(LOADING, "Problem Definition '%s'", Name) ;

  Last_yylinenum = yylinenum ; 
  strcpy(Last_yyname, yyname);
  Last_ErrorLevel = ErrorLevel ; 
  Last_yyincludenum = yyincludenum ;

  if(!(yyin = fopen(Name, "r"))) Msg(ERROR, "Unable to Open File '%s'", Name);

  ErrorLevel = 0 ;  yylinenum = 1 ; yyincludenum=0 ; strcpy(yyname,Name) ;

  yyrestart(yyin); yyparse(); fclose(yyin);

  if(ErrorLevel) FinalizeAndExit();

  while(yyincludenum > 0){
    Read_ProblemStructure(yyincludename);    
    
    yyin = fopen(yyname, "r");
    yyrestart(yyin);
    for(i=0;i<yylinenum;i++) fgets(String, MAX_STRING_LENGTH, yyin);
    yylinenum++ ;
    yyparse(); fclose(yyin);
    if(ErrorLevel) FinalizeAndExit();
  }

  yylinenum = Last_yylinenum ; strcpy(yyname, Last_yyname) ;
  ErrorLevel = Last_ErrorLevel ; yyincludenum = Last_yyincludenum ;
}

