// $Id: Main.cpp,v 1.17 2002-06-17 07:41:01 geuzaine Exp $

/* Some tests:

   cv_doubleboyd, q=4, FFT*16+spline
   hf -iter -c -k 1600 -n 2500 -scat circ -t 100 -store -v 1 -eps 1.0 -rise 0.25
   hf -iter -c -k 3200 -n 2500 -scat circ -t 100 -store -v 1 -eps 0.5 -rise 0.125
  

 */


#include "Utils.h"
#include "LinAlg.h"
#include "Context.h"
#include "Patch.h"
#include "Fasster.h"

int main(int argc, char *argv[]){
  int sargc, spline=0;
  char **sargv=(char**)Malloc(256*sizeof(char**));

  LinAlg_Initialize(&argc, &argv, &NbCpu, &RankCpu);

  if(argc < 2){
    Msg(INFO, "Usage: %s [-f|-c|-i1|-i2] options...", argv[0]);
    Msg(INFO, "  -full : full Nystrom integrator");
    Msg(INFO, "  -critical : critical point integrator");
    Msg(INFO, "  -i1 : interactive integrator around 1 critical point");
    Msg(INFO, "  -i2 : complete interactive integrator");
    Msg(INFO, "Options:");
    Msg(INFO, "  -iter : solve the problem (iteratively) instead of computing the forward map");
    Msg(INFO, "  -scatterer circle|ellipse : choose scatterer");
    Msg(INFO, "  -spline : use cubic spline interpolation instead of Fourier series");
    Msg(INFO, "  -store : store discrete operator (to speed up iterations)");
    Msg(INFO, "  -kx, -ky : set wave number");
    Msg(INFO, "  -nbpts, -n1, -n2, -n3 : set number of integration points (meaning varies...)");
    Msg(INFO, "  -targets : set number of target points/unknowns");
    Msg(INFO, "  -a, -b : set ellipse dimensions");
    Msg(INFO, "  -zero : set starting point for forward map targets");
    Msg(INFO, "  -epsilon : set base epsilon for critical point integrator");
    Msg(INFO, "  -rise : set rise for partitions of unity");
    Msg(INFO, "  -patches : use multiple patches");
    Msg(INFO, "  -verbose : set output message verbosity");
    Msg(INFO, "Note:");
    Msg(INFO, "  all options and arguments may be abbreviated as long as the");
    Msg(INFO, "  abbreviations are not ambiguous");

    LinAlg_FinalizeSolver() ;
    LinAlg_Finalize() ;
    exit(1);
  }

  Ctx *ctx = new Ctx();

  ctx->waveNum[0] = 1; //1600.;
  ctx->waveNum[1] = 0.;
  ctx->waveNum[2] = 0.;
  ctx->epsilon = 1.;
  ctx->rise = 0.5;
  ctx->initialTarget = 0.;
  ctx->nbIntPts = 100; //10000;
  ctx->nbIntPts2 = 0;
  ctx->nbIntPts3 = 0;
  ctx->nbTargetPts = 20;
  ctx->type = 0;
  ctx->scat.type = Scatterer::ELLIPSE;
  ctx->scat.a = 1.;
  ctx->scat.b = 1.;
  ctx->f.applyChgVar = 0;
  ctx->iterNum = 0;

  // get actual parameters on the command lines
  sargv[0] = argv[0] ;
  int i = sargc = 1;
  while (i < argc) {
    if (argv[i][0] == '-') {
      if(Cmp(argv[i]+1, "scatterer", 2)){ 
	i++; char *str = GetString(argc,argv,&i);
	if(!strncmp(str,"circle",1))       ctx->scat.type = Scatterer::CIRCLE;
	else if(!strncmp(str,"ellipse",1)) ctx->scat.type = Scatterer::ELLIPSE;
	else if(!strncmp(str,"drop",1))    ctx->scat.type = Scatterer::DROP;
	else if(!strncmp(str,"kite",1))    ctx->scat.type = Scatterer::KITE;
	else Msg(ERROR, "Unknown scatterer");
      }
      else if(Cmp(argv[i]+1, "spline", 2)){ 
	i++; spline=1; Msg(INFO, "Interpolation: cubic splines");
      }
      else if(Cmp(argv[i]+1, "full", 1)){ 
	i++; ctx->type |= FULL_INTEGRATION; Msg(INFO, "Integrator: full Nystrom");
      }
      else if(Cmp(argv[i]+1, "critical", 1)){ 
	i++; Msg(INFO, "Integrator: critical points");
      }
      else if(Cmp(argv[i]+1, "ck", 2)){ 
	i++; Msg(INFO, "Real Colton and Kress integrator (always from 0 to 2*pi)");
	ctx->type |= REAL_COLTON_KRESS;
      }
      else if(Cmp(argv[i]+1, "i1", 2)){ 
	i++; ctx->type |= INTERACT1; Msg(INFO, "Integrator: interactive (1 point)");
      }
      else if(Cmp(argv[i]+1, "i2", 2)){ 
	i++; ctx->type |= INTERACT2; Msg(INFO, "Integrator: interactive (complete)");
      }
      else if(Cmp(argv[i]+1, "iter", 2)){ 
	i++; ctx->type |= ITER_SOLVE; Msg(INFO, "Solver: iterative");
      }
      else if(Cmp(argv[i]+1, "store", 2)){ 
	i++; ctx->type |= STORE_OPERATOR; Msg(INFO, "Solver: store discrete operator");
      }
      else if(Cmp(argv[i]+1, "nbpts", 1)){ 
	i++; ctx->nbIntPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "n1", 2)){ 
	i++; ctx->nbIntPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "n2", 2)){ 
	i++; ctx->nbIntPts2 = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "n3", 2)){ 
	i++; ctx->nbIntPts3 = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "targets", 1)){ 
	i++; ctx->nbTargetPts = (int)GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "zero", 1)){ 
	i++; ctx->initialTarget = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "kx", 1)){
	i++; ctx->waveNum[0] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "ky", 2)){
	i++; ctx->waveNum[1] = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "a", 1)){
	i++; ctx->scat.a = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "b", 1)){
	i++; ctx->scat.b = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "epsilon", 3)){
	i++; ctx->epsilon = GetNum(argc,argv,&i); 
      }
      else if(Cmp(argv[i]+1, "patches", 2)){
	i++; ctx->type |= PATCHES; 
      }
      else if(Cmp(argv[i]+1, "post", 2)){
	i++; ctx->type |= POST_PROCESS; 
      }
      else if(Cmp(argv[i]+1, "cv", 1)){ 
	i++; ctx->f.applyChgVar = 1;
      }
      else if(Cmp(argv[i]+1, "rise", 1)){
	i++; ctx->rise = GetNum(argc,argv,&i);
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

  if(ctx->scat.type == Scatterer::ELLIPSE)
    Msg(INFO, "Scatterer: ellipse [%g %g]", ctx->scat.a, ctx->scat.b);

  if(!ctx->nbIntPts2) ctx->nbIntPts2 = ctx->nbIntPts;
  if(!ctx->nbIntPts3) ctx->nbIntPts3 = ctx->nbIntPts;

  Msg(INFO, "Options: -nbpts %d, -targets %d, -zero %g, -k [%g %g %g], -eps %g, -rise %g", 
      ctx->nbIntPts, ctx->nbTargetPts, ctx->initialTarget, 
      ctx->waveNum[0], ctx->waveNum[1], ctx->waveNum[2], 
      ctx->epsilon, ctx->rise);

  // Initialize solver
  
  LinAlg_InitializeSolver(&sargc, &sargv, &NbCpu, &RankCpu) ;
  LinAlg_CreateSolver(&ctx->solver, "solver.par") ;

  // Initialize Fasster (Python)

  Fasster_Initialize();
  Fasster_InitializeScatterer(6, "fasster.sphere3D", "sphere");
  //Fasster_InitializeScatterer(4, "fasster.disk3D", "disk");

  // Create mesh (default is 1 single patch)

  ctx->createMesh(spline ? Patch::SPLINE : Patch::FOURIER);

  // solve!

  if(ctx->type & ITER_SOLVE)
    ctx->iterSolve();
  else if(!(ctx->type & POST_PROCESS))
    ctx->forwardMap();

  if(ctx->type & POST_PROCESS)
    ctx->postProcess();

  // Finalize Fasster (Python)

  Fasster_Finalize();

  // Finalize solver

  LinAlg_FinalizeSolver() ;
  LinAlg_Finalize() ;
  
  return 0;
}

