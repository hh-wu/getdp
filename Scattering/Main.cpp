// $Id: Main.cpp,v 1.5 2002-03-08 23:02:30 geuzaine Exp $

#include "GetDP.h"
#include "LinAlg.h"
#include "Utils.h"
#include "Solve.h"

int main(int argc, char *argv[]){
  Ctx ctx;
  int sargc;
  char **sargv=(char**)Malloc(256*sizeof(char**));

  LinAlg_Initialize(&argc, &argv, &NbCpu, &RankCpu);

  if(argc < 2){
    Msg(INFO, "Usage: %s [-f|-c|-i1|-i2] options...", argv[0]);
    LinAlg_FinalizeSolver() ;
    LinAlg_Finalize() ;
    exit(1);
  }

  ctx.WaveNum[0] = 1600.;
  ctx.WaveNum[1] = 0.;
  ctx.WaveNum[2] = 0.;
  ctx.Epsilon = 1.;
  ctx.Rise = 0.5;
  ctx.InitialTarget = 0.;
  ctx.NbIntPts = 10000;
  ctx.NbTargetPts = 20;
  ctx.Type = 0;
  ctx.scat.Type = Scatterer::Circle;
  ctx.f.ChgOfVar = 0;

  sargv[0] = argv[0] ;
  int i = sargc = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if(Cmp(argv[i]+1, "full", 1)){ 
	i++; ctx.Type |= FULL_INTEGRATION; Msg(INFO, "Full Nystrom integrator");
      }
      else if(Cmp(argv[i]+1, "critical", 1)){ 
	i++; Msg(INFO, "Critical point integrator");
      }
      else if(Cmp(argv[i]+1, "i1", 2)){ 
	i++; ctx.Type |= INTERACT1; Msg(INFO, "Interactive integrator");
      }
      else if(Cmp(argv[i]+1, "i2", 2)){ 
	i++; ctx.Type |= INTERACT2; Msg(INFO, "Interactive critical point integrator");
      }
      else if(Cmp(argv[i]+1, "build", 1)){ 
	i++; ctx.Type |= BUILD_MATRIX; Msg(INFO, "Build matrix and solve system");
      }
      else if(Cmp(argv[i]+1, "iter", 2)){ 
	i++; ctx.Type |= ITER_SOLVE; Msg(INFO, "Iterative solver");
      }
      else if(Cmp(argv[i]+1, "nbpts", 1)){ 
	i++; ctx.NbIntPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "targets", 1)){ 
	i++; ctx.NbTargetPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "zero", 1)){ 
	i++; ctx.InitialTarget = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "k", 1)){
	i++; ctx.WaveNum[0] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "epsilon", 1)){
	i++; ctx.Epsilon = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "cv", 1)){ 
	i++; ctx.f.ChgOfVar = 1;
      }
      else if(Cmp(argv[i]+1, "rise", 1)){
	i++; ctx.Rise = GetNum(argc,argv,&i);
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

  Msg(INFO, "Options: -nbpts %d, -targets %d, -zero %g, -k %g, -eps %g, -rise %g", 
      ctx.NbIntPts, ctx.NbTargetPts, ctx.InitialTarget, ctx.WaveNum[0], 
      ctx.Epsilon, ctx.Rise);

  LinAlg_InitializeSolver(&sargc, &sargv, &NbCpu, &RankCpu) ;

  if(ctx.Type & ITER_SOLVE)         IterSolve(&ctx);
  else if(ctx.Type & BUILD_MATRIX)  BuildSolve(&ctx);
  else                              ForwardMap(&ctx);

  LinAlg_FinalizeSolver() ;
  LinAlg_Finalize() ;
  
  return 0;
}

