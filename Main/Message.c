#define RCSID "$Id: Message.c,v 1.77 2006-02-25 05:50:37 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

#include <signal.h>
#include <sys/time.h>

#if !defined (WIN32) || defined(__CYGWIN__)
#include <sys/resource.h>
#endif

#if defined(__APPLE__)
#define RUSAGE_SELF      0
#define RUSAGE_CHILDREN -1
#endif

#include "GetDP.h"
#include "GetDPVersion.h"
#include "CurrentData.h"
#include "LinAlg.h"
#include "GmshClient.h"

#if !defined(GETDP_EXTRA_VERSION)
#error 
#error include/GetDPVersion.h is not up-to-date. 
#error Please run 'make tag'.
#error
#endif


extern int     InteractiveLevel, InteractiveInterrupt ;

void FinalizeAndExit(void);

/* ------------------------------------------------------------------------ */
/*  I n f o                                                                 */
/* ------------------------------------------------------------------------ */

char acronym[]   = "GetDP, a General environment for the treatment of Discrete Problems\n";
char copyright[] = "Copyright (C) 1997-2005 Patrick Dular and Christophe Geuzaine\n";

char version[]   = "Version      : %s\n";
char license[]   = "License      : %s\n";
char os[]        = "Build OS     : %s\n";
char date[]      = "Build date   : %s\n";
char host[]      = "Build host   : %s\n";
char packager[]  = "Packager     : %s\n";
char url[]       = "Web site     : http://www.geuz.org/getdp/\n";
char email[]     = "Mailing list : getdp@geuz.org\n";

#if defined(HAVE_SPARSKIT)
#if defined(HAVE_ILU_FLOAT)
char solver[]    = "Solver       : Sparskit (real arithmetic, single precision preconditioning)\n";
#else
char solver[]    = "Solver       : Sparskit (real arithmetic)\n";
#endif
#else
#if defined(PETSC_USE_COMPLEX)
char solver[]    = "Solver       : PETSc (complex arithmetic)\n";
#else
char solver[]    = "Solver       : PETSc (real arithmetic)\n";
#endif
#endif

char help[] = 
#if defined(HAVE_SPARSKIT)
  "Usage: %s [file] [options]\n"
#else
  "Usage: [mpirun [MPI options]] %s [file] [options] [PETSc options]\n"
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
  "  -log                      save processing history in log file\n"
  "  -socket string            communicate through socket string\n"
  "Other options:\n"
  "  -check                    interactive check of problem structure\n"
  "  -v num                    set verbosity level (default: 4)\n"
  "  -p num                    set progress indicator update (default: 10)\n"
  "  -version                  show version number\n"
  "  -info                     show detailed version information\n"
  "  -help                     show this message\n"
  ;

void Info (int level, char *arg0){
  
  switch(level){
  case 0 :
    fprintf(stderr, acronym);
    fprintf(stderr, copyright);
    fprintf(stderr, help, arg0);
    break;
  case 1:
    fprintf(stderr, "%s\n", GETDP_VERSION);
    break;
  case 2:
    fprintf(stderr, version, GETDP_VERSION);
    fprintf(stderr, license, GETDP_SHORT_LICENSE);
    fprintf(stderr, os, GETDP_OS);
    fprintf(stderr, date, GETDP_DATE);
    fprintf(stderr, host, GETDP_HOST);
    fprintf(stderr, packager, GETDP_PACKAGER);
    fprintf(stderr, solver);
    fprintf(stderr, url);
    fprintf(stderr, email);
    break;
  }

  FinalizeAndExit();
}

/* ------------------------------------------------------------------------ */
/*  S i g n a l                                                             */
/* ------------------------------------------------------------------------ */

void Signal (int sig_num){

  /* It is VERY wrong to call stdio functions in a signal handler. But
     who cares? ;-) */

  if(sig_num == SIGINT){
    if(!InteractiveLevel){
      if(TreatmentStatus == _CAL && Flag_VERBOSE > 1){
	Msg(BIGINFO, "Switching to low verbosity mode"); 
	Flag_VERBOSE = 1;
      }
      else Msg(ERROR, "Interrupt (generated from terminal special character)"); 
    }
    else
      InteractiveInterrupt = 1;
    return;
  }
  switch (sig_num){
  case SIGSEGV : 
    Msg(BIGERROR, "Segmentation violation (invalid memory reference)");
    break;
  case SIGFPE : 
    Msg(BIGERROR, "Floating point exception (division by zero?)");
    break;
  default :
    Msg(ERROR, "Unknown signal");
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  M s g                                                                   */
/* ------------------------------------------------------------------------ */

void Print_GetDPContext(FILE *stream){
#if defined(HAVE_DEBUG_STACK)
  char FileName[256], FileVersion[256], FunctionName[256], FileAuthor[256];
  char Dum[256], FileDate[256];
  int  i, Line ;

  fprintf(stream, "Debug     : Stack trace (depth = %d) is printed below\n",
	  GetDP_CurrentStackIndex);
  for(i = 0; i < GetDP_CurrentStackIndex; i++){
    sscanf(GetDP_CurrentSourceFile[i],
	   "$Id: %s %s %s %s %s", FileName, FileVersion, FileDate, Dum, FileAuthor);
    FileName[strlen(FileName)-2] = '\0' ;
    strcpy(FunctionName, GetDP_CurrentFunction[i]);
    Line = GetDP_CurrentSourceLine[i];
    fprintf(stream, "'%s' in '%s', line %d (version %s by %s on %s)\n", 
	    FunctionName, FileName, Line, FileVersion, FileAuthor, FileDate);
  }
#endif
}


void PrintMsg(FILE *stream, int level, int Verbosity, 
	      va_list args, char *fmt, int *abort) {

  int  verb, nl, gmshlevel;
  char *str, prefix[1000], sockmsg[1000];

  switch(level){
  case CHECK     : verb = 0; nl = 0; str = NULL; break;
  case ERROR     : /* fall-through */
  case BIGERROR  : verb = 0; nl = 1; str = ERROR_STR; *abort = 1; break;
  case WARNING   : verb = 0; nl = 1; str = WARNING_STR; break;
  case OPERATION : verb = 2; nl = 1; str = OPERATION_STR; break;
  case LOADING   : verb = 2; nl = 1; str = LOADING_STR; break;
  case INFO      : verb = 3; nl = 1; str = INFO_STR; break;
  case INFO1     : verb = 3; nl = 0; str = INFO_STR; break;
  case INFO2     : verb = 3; nl = 0; str = NULL; break;
  case INFO3     : verb = 3; nl = 1; str = NULL; break;
  case BIGINFO   : verb = 1; nl = 1; str = BIGINFO_STR; break;
  case DEBUG     : verb =99; nl = 0; str = NULL; break;
  case DEBUG2    : verb =98; nl = 0; str = NULL; break;
  case SPARSKIT  : verb = 3; nl = 0; str = SPARSKIT_STR; break;
  case PETSC     : verb = 3; nl = 1; str = PETSC_STR; break;
  case ITER      : verb = 4; nl = 0; str = NULL; break;
  case DIRECT    : /* fall-through */
  default        : verb = 1; nl = 1; str = NULL; break;
  }

  if(Verbosity >= verb || stream == LogStream){

    if(Flag_SOCKET > 0 && stream != LogStream){
      if(str) strcpy(prefix, str); else strcpy(prefix, "");
      vsprintf(sockmsg, fmt, args);
      if(!nl) sockmsg[strlen(sockmsg)-1] = '\0' ;
      strcat(prefix, sockmsg);
      switch(level){
      case ERROR    : /* fall-through */
      case BIGERROR : gmshlevel = GMSH_CLIENT_ERROR; break;
      case WARNING  : gmshlevel = GMSH_CLIENT_WARNING; break;
      default       : gmshlevel = GMSH_CLIENT_INFO; break;
      }
      Gmsh_SendString(Flag_SOCKET, gmshlevel, prefix);
    }
#if !defined(WIN32) 
    else{ /* on everything but windows, don't print anything if getdp
	     is called with a socket arg: it would be piped to
	     .xsession-errors */
#endif
      if(str) fprintf(stream, str); 
      vfprintf(stream, fmt, args); 
      if(nl) fprintf(stream, "\n");
      if(level == BIGERROR){
	fprintf(stream, WHITE_STR "------------------------------------------------------\n");
	fprintf(stream, WHITE_STR "You have discovered a bug in GetDP! You may report it\n");
	fprintf(stream, WHITE_STR "by e-mail (together with any helpful data permitting to\n");
	fprintf(stream, WHITE_STR "reproduce it) to <getdp@geuz.org>\n");
      }
      if(*abort){
	Print_GetDPContext(stream);
      }
#if !defined(WIN32) 
    }
#endif

  }

  fflush(stream);
}

void GetResources(long *s, long *us, long *mem){
#if !defined (WIN32) || defined(__CYGWIN__)
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
#if !defined (WIN32) || defined(__CYGWIN__)
  char sockmsg[1000];
  if(Flag_SOCKET > 0){
    sprintf(sockmsg, RESOURCES_STR "%scpu %ld.%ld s / mem %ld kb\n", fmt, s, us, mem);
    Gmsh_SendString(Flag_SOCKET, GMSH_CLIENT_INFO, sockmsg);
  }
  else{
    fprintf(stream, RESOURCES_STR) ;
    fprintf(stream, "%scpu %ld.%ld s / mem %ld kb\n", fmt, s, us, mem);
  }
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
    }
    va_end (args);
    if(abort){
      Debug();
      FinalizeAndExit();
    }
  }
}

void CheckResources(void){
#if !defined (WIN32) || defined(__CYGWIN__)
  static struct rlimit r;

  getrlimit(RLIMIT_STACK, &r);

  /* Try to get at least 1 MB of stack. Running with too small a stack
     causes getdp to crash in the recursive calls (mainly Cal_WholeQuantity) */
  if(r.rlim_cur < 1024*1024){
    Msg(INFO, "Increasing process stack size (%d kB < 1 MB)", r.rlim_cur/1024);
    r.rlim_cur = r.rlim_max;
    setrlimit(RLIMIT_STACK, &r);
  }
#endif
}


/* ------------------------------------------------------------------------ */
/*  P r o g r e s s                                                         */
/* ------------------------------------------------------------------------ */

void Progress(int current, int final, char *label){
  char sockmsg[100];
  static int ProgressIndex ;

  if(Current.RankCpu || !Flag_VERBOSE || !Flag_PROGRESS) return ;

  if(!current){
    ProgressIndex = 0;
    if(100/(double)final > Flag_PROGRESS) Flag_PROGRESS = 100/final+1 ;
  }
  if(100*current/(double)final >= ProgressIndex){
    if(Flag_SOCKET > 0){
      sprintf(sockmsg, "(%s%d %%)", label, ProgressIndex) ;
      Gmsh_SendString(Flag_SOCKET, GMSH_CLIENT_PROGRESS, sockmsg);
    }
    else
      fprintf(stderr, "(%s%d %%)     \r", label, ProgressIndex) ;
    ProgressIndex += Flag_PROGRESS ;
  }
  if(current >= final-1){
    if(Flag_SOCKET < 0) fprintf(stderr, "                        \r") ;
  }

}


/* ------------------------------------------------------------------------ */
/*  D e b u g                                                               */
/* ------------------------------------------------------------------------ */

void Debug(void){
  /* non-empty so that optimizing compilers don't get rid of it */
  fprintf(stderr, "") ;
}
