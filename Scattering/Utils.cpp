// $Id: Utils.cpp,v 1.2 2002-02-11 22:50:02 geuzaine Exp $
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex>

#include "GetDP.h"
#include "Amos_F.h"
#include "Data_Numeric.h"
#include "Tools.h"
#include "Bessel.h"
#include "CriticalPoints.h"

// move this to trash after merge with getdp

void Msg(int level, char *fmt, ...){
  va_list  args;
  switch(level){
  case ERROR: fprintf(stderr, "Error: "); break;
  case WARNING: fprintf(stderr, "Warning: "); break;
  }
  va_start (args, fmt);
  vfprintf(stderr, fmt, args); 
  fprintf(stderr, "\n");
  fflush(stderr);
  va_end (args);
  if(level == ERROR) exit(1);
}

int Cmp(char *str1, char *str2, int min){
  int l1 = strlen(str1);
  if(l1>(int)strlen(str2) || l1<min) return 0;
  if(!strncmp(str1,str2,l1)) return 1;
  return 0;
}

double GetNum(int argc, char *argv[], int *i){
  if (*i<argc && argv[*i][0]!='-') { 
    return atof(argv[(*i)++]); 
  }
  else{ 
    Msg(ERROR, "Missing number"); 
    return 0;
  }
}

