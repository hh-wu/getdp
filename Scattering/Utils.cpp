// $Id: Utils.cpp,v 1.10 2003-03-18 01:37:52 geuzaine Exp $

#include "Utils.h"

// define some global variables (move this to trash after merge with
// getdp)

int Flag_SOCKET=0;
char *Name_Path=NULL;
int Verbose = 2;
int NbCpu, RankCpu;
int Flag_FMM = 0;
void FMM_MatVectorProd(double *, double *){;}

// temporary replacement for Message.c

void Msg(int level, char *fmt, ...){
  va_list  args;
  extern int Verbose;
  switch(level){
  case GERROR: fprintf(stderr, "Error: "); break;
  case WARNING: fprintf(stderr, "Warning: "); break;
  case SPARSKIT: fprintf(stderr, "Sparskit: "); break;
  case GDEBUG: if(Verbose<2) return;
  case INFO: if(Verbose<1) return;
  }
  if(NbCpu>1) fprintf(stderr, "[%3d] ", RankCpu);
  va_start (args, fmt);
  vfprintf(stderr, fmt, args); 
  if(level!=SPARSKIT && level!=ITER) fprintf(stderr, "\n");
  fflush(stderr);
  va_end (args);
  if(level == GERROR) exit(1);
}

int Cmp(char *str1, char *str2, int min){
  int l1 = strlen(str1);
  if(l1>(int)strlen(str2) || l1<min) return 0;
  if(!strncmp(str1,str2,l1)) return 1;
  return 0;
}

double GetNum(int argc, char *argv[], int *i){
  if (*i<argc && argv[*i][0]!='-') { //how to treat negative number?
    return atof(argv[(*i)++]); 
  }
  else{ 
    Msg(GERROR, "Missing number"); 
    return 0;
  }
}

char *GetString(int argc, char *argv[], int *i){
  if (*i<argc && argv[*i][0]!='-') {
    return argv[(*i)++]; 
  }
  else{ 
    Msg(GERROR, "Missing string"); 
    return NULL;
  }
}
