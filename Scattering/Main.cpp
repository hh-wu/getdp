// $Id: Main.cpp,v 1.1 2002-02-28 01:05:08 geuzaine Exp $

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "GetDP.h"
#include "LinAlg.h"
#include "Utils.h"
#include "Solve.h"

int main(int argc, char *argv[]){
  double WaveNum[3]={1600.,0.,0.}, Epsilon=1., Rise=0.5, InitialTarget=0.;
  int NbIntPts=10000, NbTargetPts=20;
  int Type=0, sargc;
  char **sargv=(char**)Malloc(256*sizeof(char**));
  Scatterer scat;
  Function f;

  LinAlg_Initialize(&argc, &argv, &NBRCPU, &RANKCPU);

  if(argc < 2){
    Msg(INFO, "Usage: %s [-f|-c|-i1|-i2] options...", argv[0]);
    LinAlg_FinalizeSolver() ;
    LinAlg_Finalize() ;
    exit(1);
  }

  sargv[0] = argv[0] ;
  int i = sargc = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if(Cmp(argv[i]+1, "full", 1)){ 
	i++; Type |= FULL_INTEGRATION; Msg(INFO, "Full Nystrom integrator");
      }
      else if(Cmp(argv[i]+1, "critical", 1)){ 
	i++; Type |= CRITICAL_INTEGRATION; Msg(INFO, "Critical point integrator");
      }
      else if(Cmp(argv[i]+1, "i1", 2)){ 
	i++; Type |= INTERACT1; Msg(INFO, "Interactive integrator");
      }
      else if(Cmp(argv[i]+1, "i2", 2)){ 
	i++; Type |= INTERACT2; Msg(INFO, "Interactive critical point integrator");
      }
      else if(Cmp(argv[i]+1, "build", 1)){ 
	i++; Type |= BUILD_MATRIX; Msg(INFO, "Build matrix and solve system");
      }
      else if(Cmp(argv[i]+1, "iter", 2)){ 
	i++; Type |= ITER_SOLVE; Msg(INFO, "Iterative solver");
      }
      else if(Cmp(argv[i]+1, "nbpts", 1)){ 
	i++; NbIntPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "targets", 1)){ 
	i++; NbTargetPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "zero", 1)){ 
	i++; InitialTarget = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "k", 1)){
	i++; WaveNum[0] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "epsilon", 1)){
	i++; Epsilon = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "rise", 1)){
	i++; Rise = GetNum(argc,argv,&i);
      }
      else if(Cmp(argv[i]+1, "verbose", 1)){ 
	i++; Verbose = (int)GetNum(argc,argv,&i);
      }
      else{
	Msg(INFO, "Passing unknown option '%s' to solver", argv[i]); 
	sargv[sargc++] = argv[i++]; 
      }
    }
    else{
      Msg(INFO, "Passing unknown option '%s' to solver", argv[i]); 
      sargv[sargc++] = argv[i++]; 
    }
  }

  LinAlg_InitializeSolver(&sargc, &sargv, &NBRCPU, &RANKCPU) ;

  Msg(INFO, "Options: -nbpts %d, -targets %d, -zero %g, -k %g, -eps %g, -rise %g", 
      NbIntPts, NbTargetPts, InitialTarget, WaveNum[0], Epsilon, Rise);

  if(Type & ITER_SOLVE){
    f.which = 2;
    IterSolve(Type, &f, &scat, WaveNum, NbTargetPts, 
	      InitialTarget, NbIntPts, Epsilon, Rise);
  }
  else if(Type & BUILD_MATRIX){
    f.which = 1;
    BuildSolve(Type, &f, &scat, WaveNum, NbTargetPts, 
	       InitialTarget, NbIntPts, Epsilon, Rise);
  }
  else{
    f.which = 0;
    ForwardSolve(Type, &f, &scat, WaveNum, NbTargetPts, 
		 InitialTarget, NbIntPts, Epsilon, Rise);
  }

  LinAlg_FinalizeSolver() ;
  LinAlg_Finalize() ;
  
  return 0;
}

