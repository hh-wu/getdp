#define RCSID "$Id: Message.c,v 1.20 2000-10-31 18:35:50 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

#ifndef MSDOS
#include <sys/resource.h>
#endif

#include "GetDP.h"
#include "CurrentData.h"
#include "Version.h"
#include "LinAlg.h"

extern int     InteractiveLevel, InteractiveInterrupt ;

void FinalizeAndExit(void);

/* ------------------------------------------------------------------------ */
/*  I n f o                                                                 */
/* ------------------------------------------------------------------------ */

/* The Sparskit is under GNU license. If we mention it, we have to 
   make GetDP free sofware... */

char acronym[]   = "GetDP %g, a General environment for the treatment of Discrete Problems\n";
char copyright[] = "Copyright (C) 1997-2000 P. Dular, C. Geuzaine\n";

char version[]   = "Version : %g\n";
char os[]        = "OS      : %s\n";
char build[]     = "Build   : %s\n";
char email[]     = "E-mail  : Patrick.Dular@ulg.ac.be, Christophe.Geuzaine@ulg.ac.be\n";
char url[]       = "URL     : http://www.geuz.org/getdp/\n";

#ifdef _SPARSKIT
#ifdef _ILU_FLOAT
char solver[]    = "Solver  : Default (real arithmetic, single precision preconditioning)\n";
#else
char solver[]    = "Solver  : Default (real arithmetic)\n";
#endif
#else
#ifdef PETSC_USE_COMPLEX
char solver[]    = "Solver  : PETSc (complex arithmetic)\n";
#else
char solver[]    = "Solver  : PETSc (real arithmetic)\n";
#endif
#endif

char help[] = 
#if _SPARSKIT
  "Usage: %s [file] [options]\n"
#else
  "Usage: mpirun [MPI options] %s [file] [options] [PETSc options]\n"
#endif
  "Processing options:\n"
  "  -pre 'Resolution'         pre-processing\n"
  "  -cal                      processing\n"
  "  -pos 'PostOperation(s)'   post-processing\n"
  "  -ipos 'PostProcessing(s)' interactive post-processing\n"
  "  -msh file                 read mesh (in msh format) from file\n"
  "  -restart                  resume processing from where it stopped\n"
  "  -solve 'Resolution'       same as -pre 'Resolution' -cal\n"
  "  -split                    save processing results in separate files\n"
  "  -res file(s)              load processing results from file(s)\n"
  "  -adapt file               read adaption constraints from file\n"
  "  -order float              restrict maximum interpolation order\n"
#if _SPARSKIT
  "Linear solver options:\n"
  "  -solver file              specify parameter file (default: SOLVER.PAR)\n"
#endif
  "Output options:\n"
  "  -bin                      use binary format for output files\n"
  "  -log                      save processing history in log file\n"
  "Other options:\n"
  "  -check                    interactive check of problem structure\n"
  "  -v int                    set verbosity level (default: 4)\n"
  "  -p int                    set progress indicator update (default: 10)\n"
  "  -info                     show version information\n"
  "  -version                  show version number\n"
  "  -help                     show this message\n"
  ;

void Info (int level, char *arg0){
  
  switch(level){
  case 0 :
    fprintf(stderr, acronym, GETDP_VERSION);
    fprintf(stderr, copyright);
    fprintf(stderr, help, arg0);
    break;
  case 1:
    fprintf(stderr, "%g\n", GETDP_VERSION);
    break;
  case 2:
    fprintf(stderr, version, GETDP_VERSION);
    fprintf(stderr, os, GETDP_OS);
    fprintf(stderr, build, GETDP_BUILD);
    fprintf(stderr, solver);
    fprintf(stderr, email);
    fprintf(stderr, url);
    break;
  }

  FinalizeAndExit();
}

/* ------------------------------------------------------------------------ */
/*  S i g n a l                                                             */
/* ------------------------------------------------------------------------ */

void Signal (int sig_num){

  if(sig_num == SIGINT){
    if(!InteractiveLevel){
      if(Flag_VERBOSE > 1){
	Msg(BIGINFO, "Switching to Low Verbosity Mode - Once more to Interrupt"); 
	Flag_VERBOSE = 1;
      }
      else Msg(ERROR, "Interrupt (generated from terminal special char)"); 
    }
    else
      InteractiveInterrupt = 1;
    return;
  }

  switch (sig_num){
  case SIGSEGV : 
    Msg(ERROR, "Segmentation Violation (Invalid Memory Reference)\n"
	"----------------------------------------------------------------------\n"
	"You have discovered (yet another) a bug in GetDP...\n"
	"You may e-mail the context in which it occurred to one of the authors.\n"
	"Type 'getdp -info' to get feedback information");
    break;
  case SIGFPE : 
    Msg(ERROR, "Floating point exception (Division by Zero?)");
    break;
  default :
    Msg(ERROR, "Caught Unknown Signal");
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  M s g                                                                   */
/* ------------------------------------------------------------------------ */

void Get_GetDPContext(char *FileName, char *FileVersion, char *FileDate, 
		      char *FileAuthor, int *Line, char *FunctionName){
  unsigned int i = 5, j = 0 ;
  char Dum[32] ;

  sscanf(GetDP_CurrentSourceFile[GetDP_CurrentStackIndex-1],
	 "$Id: %s %s %s %s %s", FileName, FileVersion, FileDate, Dum, FileAuthor);
  FileName[strlen(FileName)-2] = '\0' ;
  strcpy(FunctionName, GetDP_CurrentFunction[GetDP_CurrentStackIndex-1]);
  *Line = GetDP_CurrentSourceLine[GetDP_CurrentStackIndex-1];
}


void PrintMsg(FILE *stream, int level, int Verbosity, 
	      va_list args, char *fmt, int *abort) {

#ifdef USE_DEBUG
  char FileName[256], FileVersion[32], FunctionName[256], FileAuthor[32], FileDate[32];
  int  Line ;
#endif

  switch(level){

  case CHECK :
    vfprintf(stream, fmt, args); 
    break;

  case DIRECT :
    if(Verbosity > 0 || stream == LogStream){
      vfprintf(stream, fmt, args); 
      fprintf(stream, "\n");
    }
    break;

  case ERROR :
    fprintf(stream, ERROR_STR); 
    vfprintf(stream, fmt, args); 
    fprintf(stream, "\n");
#ifdef USE_DEBUG
    Get_GetDPContext(FileName, FileVersion, FileDate, FileAuthor, 
		     &Line, FunctionName);
    fprintf(stream, WHITE_STR); 
    fprintf(stream, "In '%s' (V%s by %s on %s)\n", 
	    FileName, FileVersion, FileAuthor, FileDate);
    fprintf(stream, WHITE_STR); 
    fprintf(stream, "Function '%s' (L%d)\n", FunctionName, Line);
#endif
    *abort = 1;
    break;

  case WARNING :
    fprintf(stream, WARNING_STR); 
    vfprintf(stream, fmt,args); 
    fprintf(stream, "\n");
#ifdef USE_DEBUG
    Get_GetDPContext(FileName, FileVersion, FileDate, FileAuthor, 
		     &Line, FunctionName);
    fprintf(stream, WHITE_STR); 
    fprintf(stream, "In '%s' (V%s by %s on %s)\n", 
	    FileName, FileVersion, FileAuthor, FileDate);
    fprintf(stream, WHITE_STR); 
    fprintf(stream, "Function '%s' (L%d)\n", FunctionName, Line);
#endif
    break;

  case OPERATION :
    if(Verbosity > 1 || stream == LogStream){
      fprintf(stream, OPERATION_STR); 
      vfprintf(stream, fmt, args);
      fprintf(stream, "\n");
    }
    break;

  case LOADING :
    if(Verbosity > 1 || stream == LogStream){
      fprintf(stream, LOADING_STR); 
      vfprintf(stream, fmt, args);
      fprintf(stream, "\n");
    }
    break;

  case INFO :
  case INFO1 :
  case INFO2 :
  case INFO3 :
    if(Verbosity > 2 || stream == LogStream){
      if(level == INFO || level == INFO1) fprintf(stream, INFO_STR); 
      vfprintf(stream, fmt, args);
      if(level == INFO || level == INFO3) fprintf(stream, "\n");
    }
    break;

  case BIGINFO :
    if(Verbosity > 0 || stream == LogStream){
      fprintf(stream, BIGINFO_STR); 
      vfprintf(stream, fmt, args);
      fprintf(stream, "\n");
    }
    break;

  case DEBUG :
    if(Verbosity == 99) vfprintf(stream, fmt, args);
    break;

  case SPARSKIT :
    if(Verbosity > 2 || stream == LogStream){
      fprintf(stream, SPARSKIT_STR); 
      vfprintf(stream, fmt, args);
    }
    break;

  case PETSC :
    if(Verbosity > 2 || stream == LogStream){
      fprintf(stream, PETSC_STR); 
      vfprintf(stream, fmt, args);
      fprintf(stream, "\n");
    }
    break;

  case ITER :
    if(Flag_VERBOSE > 3 || stream == LogStream) vfprintf(stream, fmt, args);
    break;
  }

}

void GetResources(long *s, long *us, long *mem){
#ifndef MSDOS
  static struct rusage r;

  getrusage(RUSAGE_SELF,&r);
  *s   = (long)r.ru_utime.tv_sec ;
  *us  = (long)r.ru_utime.tv_usec ;
  *mem = (long)r.ru_maxrss ;
#else
  *s = *us = *mem = 0 ;
#endif
}

void PrintResources(FILE *stream, char *fmt, long s, long us, long mem){

#ifndef MSDOS
  fprintf(stream, RESOURCES_STR) ;
  fprintf(stream, "%scpu %ld.%ld s / mem %ld kb\n", fmt, s, us, mem);
#endif
}


void Msg(int level, char *fmt, ...){
  va_list  args;
  int      abort = 0;
  long     s, us, mem ;

  if(Current.RankCpu && level != PETSC) return ;

  if(level == RESOURCES){
    if(Flag_LOG || Flag_VERBOSE > 3) GetResources(&s, &us, &mem) ;
    if(Flag_VERBOSE > 3) PrintResources(stderr, fmt, s, us, mem) ;
    if(Flag_LOG) PrintResources(LogStream, fmt, s, us, mem) ;
  }
  else if(level == SUMMARY){
    if(Flag_LOG || Flag_VERBOSE > 0) GetResources(&s, &us, &mem) ;
    if(Flag_VERBOSE > 0) PrintResources(stderr, fmt, s, us, mem) ;
    if(Flag_LOG) PrintResources(LogStream, fmt, s, us, mem) ;
  }
  else{
    va_start (args, fmt);
    PrintMsg(stderr,level, Flag_VERBOSE, args, fmt, &abort) ;
    if(Flag_LOG) {
      PrintMsg(LogStream, level, Flag_VERBOSE, args, fmt, &abort) ;
      fflush(LogStream);
    }
    va_end (args);
    if(abort) FinalizeAndExit();
  }
}


/* ------------------------------------------------------------------------ */
/*  P r o g r e s s                                                         */
/* ------------------------------------------------------------------------ */

void Progress(int current, int final, char *label){
  static int ProgressIndex ;

  if(Current.RankCpu || !Flag_VERBOSE || !Flag_PROGRESS) return ;

  if(!current){
    ProgressIndex = 0;
    if(100/(double)final > Flag_PROGRESS) Flag_PROGRESS = 100/final+1 ;
  }
  if(100*current/(double)final >= ProgressIndex){
    fprintf(stderr, "(%s%d %%)     \r", label, ProgressIndex) ;
    ProgressIndex += Flag_PROGRESS ;
  }
  if(current >= final-1){
    fprintf(stderr, "                        \r") ;
  }

}


/* ------------------------------------------------------------------------ */
/*  D e b u g                                                               */
/* ------------------------------------------------------------------------ */

void Debug(void){

}
