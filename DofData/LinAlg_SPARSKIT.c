#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#if _SPARSKIT

/* This is the interface library for the Default (SPARSKIT based) solver */

#include "LinAlg.h"
#include "Message.h"
#include "ualloc.h"

static char *Name_SolverFile=NULL, *Name_DefaultSolverFile="SOLVER.PAR" ;

/* Init */

void gInitialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu){
  *NbrCpu = 1 ;
  *RankCpu = 0 ;
}
void gInitializeSolver(int* sargc, char*** sargv, int *NbrCpu, int *RankCpu){
  int i=1, argc;
  char **argv;
 
  *NbrCpu = 1 ;
  *RankCpu = 0 ;
  argc = *sargc ;
  argv = *sargv ;

  while (i < argc) {
    if (argv[i][0] == '-') {
      if (!strcmp(argv[i]+1, "solver") || !strcmp(argv[i]+1, "s")) {
	i++ ;
	if (i<argc && argv[i][0]!='-')
	  Name_SolverFile = argv[i++] ;
	else
	  Msg(ERROR, "Missing File Name");
      }
      else
	Msg(SPARSKIT, "Unknown Option: '%s'\n", argv[i++]) ; 
    }
    else
      Msg(SPARSKIT, "Unknown Option: '%s'\n", argv[i++]) ; 
  }
}

/* Finalize */

void gFinalize(void){
}
void gFinalizeSolver(void){
}

/* Sequential */

void gSequentialBegin(void){
}

void gSequentialEnd(void){
}

/* Create */

void gCreateSolver(gSolver *Solver, char * SolverDataFileName){
  init_solver(&Solver->Params,
	      SolverDataFileName ? SolverDataFileName :
	      (Name_SolverFile ? Name_SolverFile : Name_DefaultSolverFile)) ;
}
void gCreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part){
  init_vector(n, &V->V) ;
  V->N = n ;
}
void gCreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
		   int NbrPart, int *Part, int *Nnz){
  init_matrix(n, &M->M, &Solver->Params) ;
}

/* Destroy */

void gDestroySolver(gSolver *Solver){
  Msg(ERROR, "'gDestroySolver' not Implemented (yet)");
}
void gDestroyVector(gVector *V){
  Free(V->V);
}
void gDestroyMatrix(gMatrix *M){
  Msg(ERROR, "'gDestroyMatrix' not Implemented (yet)");  
}

/* Copy */

void gCopyScalar(gScalar *S1, gScalar *S2){
  S2->d = S1->d ;
}
void gCopyVector(gVector *V1, gVector *V2){
  memcpy(V2->V, V1->V, V1->N*sizeof(double)) ;
}
void gCopyMatrix(gMatrix *M1, gMatrix *M2){
  Msg(ERROR, "'gCopyMatrix' not Implemented (yet)");  
}

/* Zero */

void gZeroScalar(gScalar *S){
  S->d = 0. ;
}
void gZeroVector(gVector *V){
  zero_vector(V->N, V->V) ;
}
void gZeroMatrix(gMatrix *M){
  int i ;
  zero_matrix(&M->M) ;
  /* la routine de produit matrice vecteur est buggee s'il
     existe des lignes sans aucun element dans la matrice... */
  for(i=0 ; i<M->M.N ; i++) add_matrix_double(&M->M, i+1, i+1, 0.0) ;
}

/* Scan */

void gScanScalar(FILE *file, gScalar *S){
  fscanf(file, "%lf", &S->d) ;
}
void gScanVector(FILE *file, gVector *V) {
  int i ;
  for(i=0 ; i<V->N ; i++) fscanf(file, "%lf", &V->V[i]) ;
}
void gScanMatrix(FILE *file, gMatrix *M){
  Msg(ERROR, "'gScanMatrix' not Implemented (yet)");
}

/* Read */

void gReadScalar(FILE *file, gScalar *S){
  Msg(ERROR, "'gReadScalar' not Implemented (yet)");
}
void gReadVector(FILE *file, gVector *V) {
  fread(V->V, sizeof(double), V->N, file);
}
void gReadMatrix(FILE *file, gMatrix *M){
  Msg(ERROR, "'gReadMatrix' not Implemented (yet)");
}

/* Print */

void gPrintScalar(FILE *file, gScalar *S){
  fprintf(file, "%.16g", S->d) ;
}
void gPrintVector(FILE *file, gVector *V){
  int i ;
  for(i=0 ; i<V->N ; i++) fprintf(file, "%.16g\n", V->V[i]) ;
}
void gPrintMatrix(FILE *file, gMatrix *M){
  formatted_write_matrix(&M->M, "A", ".mat", KUL) ;
}

/* Write */

void gWriteScalar(FILE *file, gScalar *S){
  Msg(ERROR, "'gWriteScalar' not Implemented (yet)");
}
void gWriteVector(FILE *file, gVector *V){
  fwrite(V->V, sizeof(double), V->N, file);
  fprintf(file, "\n");
}
void gWriteMatrix(FILE *file, gMatrix *M){
  binary_write_matrix(&M->M, "A", ".mat") ;
}

/* Get */

void gGetVectorSize(gVector *V, int *i){
  *i = V->N ;
}
void gGetMatrixSize(gMatrix *M, int *i, int *j){
  *i = *j = M->M.N ;
}
void gGetDoubleInScalar(double *d, gScalar *S){
  *d = S->d ;
}
void gGetComplexInScalar(double *d1, double *d2, gScalar *S){
  Msg(ERROR, "'gGetComplexInScalar' not Available with this Solver");
}
void gGetScalarInVector(gScalar *S, gVector *V, int i){
  S->d = V->V[i] ;
}
void gGetDoubleInVector(double *d, gVector *V, int i){
  *d = V->V[i] ;
}
void gGetAbsDoubleInVector(double *d, gVector *V, int i){
  *d = fabs(V->V[i]) ;
}
void gGetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){
  *d1 = V->V[i] ;
  *d2 = V->V[j] ;
}
void gGetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  Msg(ERROR, "'gGetScalarInMatrix' not Implemented (yet)");  
}
void gGetDoubleInMatrix(double *d, gMatrix *M, int i, int j){
  Msg(ERROR, "'gGetScalarInMatrix' not Implemented (yet)");  
}
void gGetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){
  Msg(ERROR, "'gGetScalarInMatrix' not Implemented (yet)");  
}

/* Set */

void gSetScalar(gScalar *S, double *d){
  S->d = d[0] ;
}
void gSetScalarInVector(gScalar *S, gVector *V, int i){
  V->V[i] = S->d ;
}
void gSetDoubleInVector(double d, gVector *V, int i){
  V->V[i] = d ;
}
void gSetComplexInVector(double d1, double d2, gVector *V, int i, int j){
  V->V[i] = d1 ;
  V->V[j] = d2 ;
}
void gSetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  Msg(ERROR, "'gSetScalarInMatrix' not Implemented (yet)");  
}
void gSetDoubleInMatrix(double d, gMatrix *M, int i, int j){
  Msg(ERROR, "'gSetScalarInMatrix' not Implemented (yet)");  
}
void gSetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  Msg(ERROR, "'gSetScalarInMatrix' not Implemented (yet)");  
}

/* Add */

void gAddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d + S2->d ;
}
void gAddScalarInVector(gScalar *S, gVector *V, int i){
  V->V[i] += S->d ;
}
void gAddDoubleInVector(double d, gVector *V, int i){
  V->V[i] += d ;
}
void gAddComplexInVector(double d1, double d2, gVector *V, int i, int j){
  V->V[i] += d1 ;
  V->V[j] += d2 ;
}
void gAddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  add_matrix_double(&M->M, i+1, j+1, S->d) ;
}
void gAddDoubleInMatrix(double d, gMatrix *M, int i, int j){
  add_matrix_double(&M->M, i+1, j+1, d) ;
}
void gAddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  if(d1){
    add_matrix_double(&M->M, i+1, j+1, d1) ;
    add_matrix_double(&M->M, k+1, l+1, d1) ;
  }
  if(d2){
    add_matrix_double(&M->M, i+1, l+1, -d2) ;
    add_matrix_double(&M->M, k+1, j+1, d2) ;
  }
}
void gAddVectorVector(gVector *V1, gVector *V2, gVector *V3){
  if(V3==V1)
    add_vector_vector(V1->N, V1->V, V2->V) ;
  else
    Msg(ERROR, "'gAddVectorVector': Wrong Arguments");    
}
void gAddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){
  if(V3==V1)
    add_vector_prod_vector_double(V1->N, V1->V, V2->V, d) ;
  else
    Msg(ERROR, "'gAddVectorProdVectorDouble': Wrong Arguments");    
}
void gAddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  if(M3==M1)
    add_matrix_matrix(&M1->M, &M2->M) ;
  else
    Msg(ERROR, "'gAddMatrixMatrix': Wrong Arguments");
}
void gAddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){
  if(M3==M1)
    add_matrix_prod_matrix_double(&M1->M, &M2->M, d) ;
  else
    Msg(ERROR, "'gAddMatrixProdMatrixDouble': Wrong Arguments");
}

/* Sub */

void gSubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d - S2->d ;
}
void gSubVectorVector(gVector *V1, gVector *V2, gVector *V3){
  if(V3==V1) 
    sub_vector_vector_1(V1->N, V1->V, V2->V) ;
  else if (V3==V2) 
    sub_vector_vector_2(V1->N, V1->V, V2->V) ;
  else
    Msg(ERROR, "'gSubVectorVector': Wrong Arguments");  
}
void gSubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  Msg(ERROR, "'gSubMatrixMatrix' not Implemented (yet)");  
}

/* Prod */

void gProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d * S2->d ;
}
void gProdScalarDouble(gScalar *S1, double d, gScalar *S2){
  S2->d = S1->d * d ;
}
void gProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){
  *d3 = S->d * d1 ;
  *d4 = S->d * d2 ;
}
void gProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){
  Msg(ERROR, "'gProdVectorScalar' not Implemented (yet)");  
}
void gProdVectorDouble(gVector *V1, double d, gVector *V2){
  if(V2==V1)
    prod_vector_double(V1->N, V1->V, d);
  else
    Msg(ERROR, "'gProdVectorDouble': Wrong Arguments");
}
void gProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){
  Msg(ERROR, "'gProdVectorComplex' not Implemented (yet)");
}
void gProdVectorVector(gVector *V1, gVector *V2, double *d){
  prodsc_vector_vector (V1->N, V1->V, V2->V, d) ;
}
void gProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){
  if(V2==V1)
    Msg(ERROR, "'gProdMatrixVector': Wrong Arguments");
  else
    prod_matrix_vector(&M->M, V1->V, V2->V);
}
void gProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){
  if(M2==M1)
    prod_matrix_double (&M1->M, S->d);
  else
    Msg(ERROR, "'gProdMatrixScalar': Wrong Arguments");
}
void gProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){
  if(M2==M1)
    prod_matrix_double (&M1->M, d);
  else
    Msg(ERROR, "'gProdMatrixDouble': Wrong Arguments");
}
void gProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2){
  Msg(ERROR, "'gProdMatrixComplex' not Implemented (yet)");
}

/* Div */

void gDivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d / S2->d ;
}
void gDivScalarDouble(gScalar *S1, double d, gScalar *S2){
  S2->d = S1->d / d ;
}

/* Assemble */

void gAssembleMatrix(gMatrix *M){
}
void gAssembleVector(gVector *V){
}

/* Solve */

void gSolve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){
  solve_matrix(&A->M, &Solver->Params, B->V, X->V);
}

#endif
