// $Id: Main.cpp,v 1.6 2002-04-12 17:11:02 geuzaine Exp $

#include "Utils.h"
#include "LinAlg.h"
#include "Main.h"
#include "Solve.h"
#include "Patch.h"

int main(int argc, char *argv[]){
  Ctx ctx;
  int sargc, spline=0;
  char **sargv=(char**)Malloc(256*sizeof(char**));

  LinAlg_Initialize(&argc, &argv, &NbCpu, &RankCpu);

  if(argc < 2){
    Msg(INFO, "Usage: %s [-f|-c|-i1|-i2] options...", argv[0]);
    LinAlg_FinalizeSolver() ;
    LinAlg_Finalize() ;
    exit(1);
  }

  // set some default values for the parameters
  ctx.waveNum[0] = 1; //1600.;
  ctx.waveNum[1] = 0.;
  ctx.waveNum[2] = 0.;
  ctx.epsilon = 1.;
  ctx.rise = 0.5;
  ctx.initialTarget = 0.;
  ctx.nbIntPts = 100; //10000;
  ctx.nbTargetPts = 20;
  ctx.type = 0;
  ctx.scat.type = Scatterer::CIRCLE;
  ctx.scat.a = 2.;
  ctx.scat.b = 1.;
  ctx.f.applyChgVar = 0;

  // get actual parameters on the command lines
  sargv[0] = argv[0] ;
  int i = sargc = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if(Cmp(argv[i]+1, "scatterer", 1)){ 
	i++; 
	char *str = GetString(argc,argv,&i);
	if(!strncmp(str,"circle",1)){
	  ctx.scat.type = Scatterer::CIRCLE;
	  Msg(INFO, "Scatterer: circle");
	}
	else if(!strncmp(str,"ellipse",1)){
	  ctx.scat.type = Scatterer::ELLIPSE;
	  Msg(INFO, "Scatterer: ellipse");
	}
	else{
	  Msg(ERROR, "Unknown scatterer");
	}
      }
      else if(Cmp(argv[i]+1, "spline", 2)){ 
	i++; spline=1; Msg(INFO, "Interpolation: cubic splines");
      }
      else if(Cmp(argv[i]+1, "full", 1)){ 
	i++; ctx.type |= FULL_INTEGRATION; Msg(INFO, "Integrator: full Nystrom");
      }
      else if(Cmp(argv[i]+1, "critical", 1)){ 
	i++; Msg(INFO, "Integrator: critical points");
      }
      else if(Cmp(argv[i]+1, "i1", 2)){ 
	i++; ctx.type |= INTERACT1; Msg(INFO, "Integrator: interactive (1 point)");
      }
      else if(Cmp(argv[i]+1, "i2", 2)){ 
	i++; ctx.type |= INTERACT2; Msg(INFO, "Integrator: interactive (complete)");
      }
      else if(Cmp(argv[i]+1, "iter", 2)){ 
	i++; ctx.type |= ITER_SOLVE; Msg(INFO, "Solver: iterative");
      }
      else if(Cmp(argv[i]+1, "nbpts", 1)){ 
	i++; ctx.nbIntPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "targets", 1)){ 
	i++; ctx.nbTargetPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "zero", 1)){ 
	i++; ctx.initialTarget = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "kx", 1)){
	i++; ctx.waveNum[0] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "ky", 2)){
	i++; ctx.waveNum[1] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "a", 1)){
	i++; ctx.scat.a = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "b", 1)){
	i++; ctx.scat.b = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "epsilon", 3)){
	i++; ctx.epsilon = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "patches", 2)){
	i++; ctx.type |= PATCHES; 
      }
      else if(Cmp(argv[i]+1, "post", 2)){
	i++; ctx.type |= POST_PROCESS; 
      }
      else if(Cmp(argv[i]+1, "cv", 1)){ 
	i++; ctx.f.applyChgVar = 1;
      }
      else if(Cmp(argv[i]+1, "rise", 1)){
	i++; ctx.rise = GetNum(argc,argv,&i);
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

  Msg(INFO, "Options: -nbpts %d, -targets %d, -zero %g, -k [%g %g %g], -eps %g, -rise %g", 
      ctx.nbIntPts, ctx.nbTargetPts, ctx.initialTarget, 
      ctx.waveNum[0], ctx.waveNum[1], ctx.waveNum[2], 
      ctx.epsilon, ctx.rise);

  // Initialize solver
  
  LinAlg_InitializeSolver(&sargc, &sargv, &NbCpu, &RankCpu) ;

  LinAlg_CreateSolver(&ctx.solver, "solver.par") ;

  // Create mesh (default is 1 single patch)

  Create_Mesh(&ctx, spline ? Patch::SPLINE : Patch::FOURIER);

  // solve!

  if(ctx.type & ITER_SOLVE)
    IterSolve(&ctx);
  else if(!(ctx.type & POST_PROCESS))
    ForwardMap(&ctx);

  if(ctx.type & POST_PROCESS)
    PostProcess(&ctx);

  LinAlg_FinalizeSolver() ;
  LinAlg_Finalize() ;
  
  return 0;
}

