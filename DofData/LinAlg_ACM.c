#define RCSID "$Id: LinAlg_ACM.c,v 1.1 2002-04-12 17:09:15 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

#if defined(_ACM)

#include <complex>
typedef std::complex<double> Complex;
extern Complex I;

/* This is the interface library for the ACM fortran-complex solvers */

#include "GetDP.h"
#include "LinAlg.h"

/* stuff for matrix-free matrices */

typedef struct{
  void *ctx;
  void (*fct)(gMatrix *A, gVector *x, gVector *y);
} acmCtx;

static acmCtx acmContext;

int cmpax_(doublecomplex *y, doublecomplex *x, integer *N){
  gMatrix A1;
  gVector x1, y1;

  x1.V = x; 
  y1.V = y;
  acmCtx.fct(&A1,&x1,&y1);
  return 0;
}

/* Initialize */

void LinAlg_Initialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu){
}

void LinAlg_InitializeSolver(int* argc, char*** argv, int *NbrCpu, int *RankCpu){
}

/* Finalize */

void LinAlg_Finalize(void){
}

void LinAlg_FinalizeSolver(void){
}

/* Barrier */

void LinAlg_Barrier(void){
}

/* Sequential */

void LinAlg_SequentialBegin(void){
}

void LinAlg_SequentialEnd(void){
}

/* Create */

void LinAlg_CreateSolver(gSolver *Solver, char * SolverDataFileName){
}
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part){
  V->V = new Complex[n];
  V->N = n;
}
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
			 int NbrPart, int *Part, int *Nnz){
}
void LinAlg_CreateMatrixShell(gMatrix *A, gSolver *Solver, int n, int m, void *myCtx, 
			      void (*myMult)(gMatrix *A, gVector *x, gVector *y)){
  petscCtx *ctx=(acmCtx*)Malloc(sizeof(acmCtx)); //memory leak! to change...
  ctx->ctx = myCtx;
  ctx->fct = myMult;
}


/* Destroy */

void LinAlg_DestroySolver(gSolver *Solver){
}
void LinAlg_DestroyVector(gVector *V){
}
void LinAlg_DestroyMatrix(gMatrix *M){
}

/* Copy */

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2){
}
void LinAlg_CopyVector(gVector *V1, gVector *V2){
}
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2){
}

/* Zero */

void LinAlg_ZeroScalar(gScalar *S){
}
void LinAlg_ZeroVector(gVector *V){
  for(int i=0; i<v->N; i++) V->V[i]=0.;
}
void LinAlg_ZeroMatrix(gMatrix *M){
}

/* Scan */

void LinAlg_ScanScalar(FILE *file, gScalar *S){
}
void LinAlg_ScanVector(FILE *file, gVector *V) {
}
void LinAlg_ScanMatrix(FILE *file, gMatrix *M){
}

/* Read */

void LinAlg_ReadScalar(FILE *file, gScalar *S){
}
void LinAlg_ReadVector(FILE *file, gVector *V) {
}
void LinAlg_ReadMatrix(FILE *file, gMatrix *M){
}

/* Print */

void LinAlg_PrintScalar(FILE *file, gScalar *S){
}
void LinAlg_PrintVector(FILE *file, gVector *V){
} 
void LinAlg_PrintMatrix(FILE *file, gMatrix *M){
}

/* Write */

void LinAlg_WriteScalar(FILE *file, gScalar *S){
}
void LinAlg_WriteVector(FILE *file, gVector *V){
}
void LinAlg_WriteMatrix(FILE *file, gMatrix *M){
}

/* Get */

void LinAlg_GetVectorSize(gVector *V, int *i){
  *i = V->N;
}
void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high){
}
void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j){
}
void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high){
}
void LinAlg_GetDoubleInScalar(double *d, gScalar *S){
}
void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S){
}
void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i){
}
void LinAlg_GetDoubleInVector(double *d, gVector *V, int i){
}
void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i){
}
void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){
  *d1 = V->V[i].real() ;
  *d2 = V->V[i].imag() ;
}
void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
}
void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j){
}
void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){
}
void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1){
}
void LinAlg_GetMatrixContext(gMatrix *A, void **myCtx){
  *myCtx = acmContext->ctx;
}

/* Set */

void LinAlg_SetScalar(gScalar *S, double *d){
}
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i){
}
void LinAlg_SetDoubleInVector(double d, gVector *V, int i){
}
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j){
  V->V[i] = d1 + I * d2 ;
}
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
}
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j){
}
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
}

/* Add */

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
}
void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i){
}
void LinAlg_AddDoubleInVector(double d, gVector *V, int i){
}
void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j){
  V->V[i] += d1 + I * d2 ;
}
void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
}
void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j){
}
void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
}
void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3){
}
void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){
}
void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
}
void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){
}

/* Sub */

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
}
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3){
}
void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
}

/* Prod */

void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
}
void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2){
}
void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){
}
void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){  
}
void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2){
}
void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){
}
void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d){
}
void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){
}
void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){
}
void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){
}
void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2){
}


/* Div */

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
}
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2){
}


/* Assemble */

void LinAlg_AssembleMatrix(gMatrix *M){
}
void LinAlg_AssembleVector(gVector *V){
}

/* Solve */

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){
  int maxit = 200;
  int rstrt = 200;
  double tol = 1.e-14;

  acmgmres_(X->V, B->B, &X->N, &maxit, &rstrt, &tol)
}

#endif
