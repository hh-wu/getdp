// $Id: Solve.cpp,v 1.6 2002-03-05 22:48:10 geuzaine Exp $

#include "GetDP.h"
#include "Complex.h"
#include "LinAlg.h"
#include "Utils.h"
#include "List.h"
#include "Data_Numeric.h"
#include "Solve.h"

double GetTarget(int i, int nb, double start){
  return 2*PI*i/(double)nb + start;
}

void ComputeRHS(Ctx *ctx, gVector *b){
  int i, beg, end;
  double t, xt[3], kr;
  Complex res;

  LinAlg_GetLocalVectorRange(b,&beg,&end);
  beg /= gCOMPLEX_INCREMENT;
  end /= gCOMPLEX_INCREMENT;
  Msg(INFO, "RHS %d->%d", beg, end-1);

  for(i=beg ; i<end ; i++){
    t = GetTarget(i,ctx->NbTargetPts,ctx->InitialTarget);
    ctx->scat.Val(t,xt);
    kr = ctx->WaveNum[0]*xt[0]+ctx->WaveNum[1]*xt[1]+ctx->WaveNum[2]*xt[2];
    res = cos(kr)+I*sin(kr);
    res *= 2 / NORM3(ctx->WaveNum); // warning!
    LinAlg_SetComplexInVector(res, b, i);
  }
  LinAlg_AssembleVector(b);
  //LinAlg_PrintVector(stderr,b);
}

void PostProcess(Ctx *ctx, gVector *x){
  double t;
  int i;
  Complex res; 

  LinAlg_SequentialBegin() ;
  LinAlg_PrintVector(stderr,x);
  LinAlg_SequentialEnd() ;

  ctx->f.Type = Function::Vector;
  ctx->f.NumBF = ctx->NbTargetPts;
  ctx->f.Sol = x;
  
  for(i=0 ; i<100 ; i++){
    t = 2*PI*i/100.;
    res = ctx->f.bf(t);
    if(!RankCpu) fprintf(stdout, "%g %g %g\n", t, res.real(), res.imag());
  }
}


// Forward map computation only

void ForwardSolve(Ctx *ctx){
  List_T *reslist=List_Create(ctx->NbTargetPts,20,sizeof(Complex));
  Complex res;
  double t;
  int i;

  ctx->f.Type = Function::Test; 

  for(i=0 ; i<ctx->NbTargetPts ; i++){
    t = GetTarget(i,ctx->NbTargetPts,ctx->InitialTarget);
    res = Integrate(ctx, t); 
    Msg(INFO, "==> I(%d: %.7e) = %' '.15e %+.15e * i", i+1, t, res.real(), res.imag());
    List_Add(reslist, &res);
  }

  List_PrintMatlabComplex(reslist);
  List_Delete(reslist);
}

// Full Matrix solver

void BuildSolve(Ctx *ctx){
  gSolver Solver;
  gMatrix A;
  gVector b, x;
  Complex res;
  double t;
  int i, j, nbdof, beg, end;

  ctx->f.Type = Function::Single; 

  if(!(ctx->NbTargetPts % 2)) ctx->NbTargetPts++;
  
  nbdof = gCOMPLEX_INCREMENT*ctx->NbTargetPts;
  
  LinAlg_CreateSolver(&Solver, "solver.par") ;
  LinAlg_CreateMatrix(&A, &Solver, nbdof, nbdof, 0, NULL, NULL) ;
  LinAlg_CreateVector(&b, &Solver, nbdof, 1, NULL) ;
  LinAlg_CreateVector(&x, &Solver, nbdof, 1, NULL) ;
  LinAlg_ZeroMatrix(&A);

  ComputeRHS(ctx,&b);

  LinAlg_GetLocalMatrixRange(&A,&beg,&end);
  beg /= gCOMPLEX_INCREMENT;
  end /= gCOMPLEX_INCREMENT;
  Msg(INFO, "MAT %d->%d", beg, end-1);
  
  for(i=beg ; i<end ; i++){
    t = GetTarget(i,ctx->NbTargetPts,ctx->InitialTarget);
    Msg(INFO, "Assembling line %d", i);
    for(j=0 ; j<ctx->NbTargetPts ; j++){
      ctx->f.NumBF = -ctx->NbTargetPts/2+j;
      res = (-I/2.) * Integrate(ctx, t); 
      LinAlg_AddComplexInMatrix(res, &A, i, j);
    }
  }
  LinAlg_AssembleMatrix(&A);
  LinAlg_Solve(&A, &b, &Solver, &x);

  PostProcess(ctx,&x);
  
  LinAlg_DestroyMatrix(&A);
  LinAlg_DestroyVector(&b);
  LinAlg_DestroyVector(&x);
  LinAlg_DestroySolver(&Solver);
}


// Iterative solver

void MatrixFreeMatMult(gMatrix *A, gVector *x, gVector *y){
  Ctx *ctx;
  int i, beg, end;
  double t;
  Complex res;

  LinAlg_GetMatrixContext(A,(void **)(&ctx));

  ctx->f.NumBF = ctx->NbTargetPts;
  ctx->f.Sol = x;
  LinAlg_GetLocalVectorRange(x,&beg,&end);
  beg /= gCOMPLEX_INCREMENT;
  end /= gCOMPLEX_INCREMENT;
  Msg(INFO, "A*x %d->%d", beg, end-1);
  
  for(i=beg ; i<end ; i++){
    t = GetTarget(i,ctx->NbTargetPts,ctx->InitialTarget);
    res = (-I/2.) * Integrate(ctx, t);
    LinAlg_SetComplexInVector(res, y, i);
  }
  
  LinAlg_Barrier();
}

void IterSolve(Ctx *ctx){
  gSolver Solver;
  gVector b, x;
  gMatrix A;
  int nbdof;

  ctx->f.Type = Function::Vector; 

  if(!(ctx->NbTargetPts % 2)) ctx->NbTargetPts++;

  nbdof = gCOMPLEX_INCREMENT*ctx->NbTargetPts;
  
  LinAlg_CreateSolver(&Solver, "solver.par") ;
  LinAlg_CreateVector(&b, &Solver, nbdof, 1, NULL);
  LinAlg_CreateVector(&x, &Solver, nbdof, 1, NULL);
  LinAlg_CreateMatrixShell(&A, &Solver, nbdof, nbdof, (void*)ctx, MatrixFreeMatMult);

  ComputeRHS(ctx,&b);

  LinAlg_Solve(&A, &b, &Solver, &x);

  PostProcess(ctx,&x);

  LinAlg_DestroyMatrix(&A);
  LinAlg_DestroyVector(&b);
  LinAlg_DestroyVector(&x);
  LinAlg_DestroySolver(&Solver);
}
