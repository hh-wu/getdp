/* $Id: Message.c,v 1.10 2000-09-07 18:47:26 geuzaine Exp $ */
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

#ifndef MSDOS
#include <sys/resource.h>
#endif

#include "CurrentData.h"
#include "Message.h"
#include "Version.h"
#include "LinAlg.h"

extern int     InteractiveLevel, InteractiveInterrupt ;

void FinalizeAndExit(void);

/* ------------------------------------------------------------------------ */
/*  I n f o                                                                 */
/* ------------------------------------------------------------------------ */

/* The Sparskit is under GNU license. If we mention it, we have to 
   make GetDP free sofware... */

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

char acronym[]   = "GetDP %g, a General environment for the treatment of Discrete Problems\n";
char copyright[] = "Copyright (C) 1997-2000 P. Dular, C. Geuzaine\n";

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
  "  -degree float             specify maximum interpolation degree\n"
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
  "  -p int                    set progress update (default: 10)\n"
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

  switch (sig_num){
  case SIGSEGV : 
    Msg(ERROR, "Segmentation Violation (invalid memory reference)\n"
	"----------------------------------------------------------------------\n"
	"You have probably discovered a bug in GetDP...\n"
	"You may e-mail the context in which it occurred to one of the authors.\n"
	"Type 'getdp -info' to get feedback information.");
    break;
  case SIGINT : 
    if(!InteractiveLevel){
      if(Flag_VERBOSE > 1){
	Msg(BIGINFO, "Switching to Low Verbosity Mode - Once more to Interrupt"); 
	Flag_VERBOSE = 1;
      }
      else Msg(ERROR, "Interrupt (generated from terminal special char)"); 
    }
    else
      InteractiveInterrupt = 1;
    break;
  case SIGFPE : 
    Msg(ERROR, "Floating point exception (division by zero?)"); 
    break;
  default :
    Msg(ERROR, "Unknown Signal"); 
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  M s g                                                                   */
/* ------------------------------------------------------------------------ */

void PrintMsg(FILE *stream, int level, int Verbosity, 
	      va_list args, char *fmt, int *abort) {

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
    *abort = 1;
    break;

  case WARNING :
    fprintf(stream, WARNING_STR); 
    vfprintf(stream, fmt,args); 
    fprintf(stream, "\n");
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
    if(Verbosity > 2 || stream == LogStream){
      fprintf(stream, INFO_STR); 
      vfprintf(stream, fmt, args);
      fprintf(stream, "\n");
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

#ifdef MSDOS
void GetResources(long *s, long *us, long *mem){
  *s   = -1 ;
  *us  = -1 ;
  *mem = -1 ;
}
#else
void GetResources(long *s, long *us, long *mem){
  static struct rusage r;
  getrusage(RUSAGE_SELF,&r);
  *s   = (long)r.ru_utime.tv_sec ;
  *us  = (long)r.ru_utime.tv_usec ;
  *mem = (long)r.ru_maxrss ;
}
#endif

void PrintResources(FILE *stream, char *fmt, long s, long us, long mem){
  fprintf(stream, RESOURCES_STR) ;
  fprintf(stream, "%scpu %ld.%ld s / mem %ld kb\n", fmt, s, us, mem);
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
