#define RCSID "$Id: LinAlg_SPARSKIT.c,v 1.14 2001-11-22 15:38:35 ledinh Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#if _SPARSKIT

/* This is the interface library for the Default (SPARSKIT based) solver */

#include "GetDP.h"
#include "Magic.h"
#include "LinAlg.h"

extern char  Name_Path[MAX_FILE_NAME_LENGTH] ;
static char *Name_SolverFile=NULL, *Name_DefaultSolverFile="solver.par" ;
static char *SolverOptions[100];

/* Init */

void LinAlg_Initialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu){

  GetDP_Begin("LinAlg_Initialize");

  *NbrCpu = 1 ;
  *RankCpu = 0 ;

  GetDP_End ;
}
void LinAlg_InitializeSolver(int* sargc, char*** sargv, int *NbrCpu, int *RankCpu){
  int i=1, argc, iopt=0;
  char **argv;
 
  GetDP_Begin("LinAlg_InitializeSolver");

  *NbrCpu = 1 ;
  *RankCpu = 0 ;
  argc = *sargc ;
  argv = *sargv ;
  SolverOptions[0] = NULL;

  while (i < argc) {
    if (argv[i][0] == '-') {
      if (!strcmp(argv[i]+1, "solver") || !strcmp(argv[i]+1, "s")) {
	i++ ;
	if (i<argc && argv[i][0]!='-')
	  Name_SolverFile = argv[i++] ;
	else
	  Msg(ERROR, "Missing file name");
      }
      else{
	i++ ;
	if (i<argc && argv[i][0]!='-') { 
	  SolverOptions[iopt++] = argv[i-1]+1;
	  SolverOptions[iopt++] = argv[i];
	  SolverOptions[iopt] = NULL;
	  i++ ; 
	}
	else {
	  Msg(ERROR, "Missing number");
	}
      }
    }
    else
      Msg(SPARSKIT, "Unknown option: '%s'\n", argv[i++]) ; 
  }

  GetDP_End ;
}

/* Finalize */

void LinAlg_Finalize(void){
}
void LinAlg_FinalizeSolver(void){
}

/* Sequential */

void LinAlg_SequentialBegin(void){
}
void LinAlg_SequentialEnd(void){
}

/* Create */

void LinAlg_CreateSolver(gSolver *Solver, char * SolverDataFileName){
  int  i;
  char FileName[MAX_FILE_NAME_LENGTH];

  GetDP_Begin("LinAlg_CreateSolver");
  
  strcpy(FileName, Name_Path);

  if(SolverDataFileName){
    /* name in .pro file */
    if(SolverDataFileName[0] == '/' || SolverDataFileName[0] == '\\'){
      /* -> absolute if it starts with / or \ */
      strcpy(FileName, SolverDataFileName);
    }
    else{
      /* -> relative otherwise */
      strcat(FileName, SolverDataFileName);
    }
  }
  else if (Name_SolverFile){
    /* name on command line -> always absolute */
    strcpy(FileName, Name_SolverFile);
  }
  else{
    /* default file name -> always relative */
    strcat(FileName, Name_DefaultSolverFile);
  }
  
  Msg(SPARSKIT, "Loading parameter file '%s'\n", FileName);

  init_solver(&Solver->Params, FileName) ;

  i = 0;
  while(SolverOptions[i] && SolverOptions[i+1]){
    init_solver_option(&Solver->Params, SolverOptions[i], SolverOptions[i+1]) ;
    i+=2;
  }

  GetDP_End ;
}
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part){

  GetDP_Begin("LinAlg_CreateVector");

  init_vector(n, &V->V) ;
  V->N = n ;

  GetDP_End ;
}
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
		   int NbrPart, int *Part, int *Nnz){

  GetDP_Begin("LinAlg_CreateMatrix");

  init_matrix(n, &M->M, &Solver->Params) ;

  GetDP_End ;
}

/* Destroy */

void LinAlg_DestroySolver(gSolver *Solver){

  GetDP_Begin("LinAlg_DestroySolver");

  Msg(ERROR, "'LinAlg_DestroySolver' not yet implemented");

  GetDP_End ;
}
void LinAlg_DestroyVector(gVector *V){

  GetDP_Begin("LinAlg_DestroyVector");

  Free(V->V);

  GetDP_End ;
}
void LinAlg_DestroyMatrix(gMatrix *M){

  GetDP_Begin("LinAlg_DestroyMatrix");

  Msg(ERROR, "'LinAlg_DestroyMatrix' not yet implemented");  

  GetDP_End ;
}

/* Copy */

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2){

  GetDP_Begin("LinAlg_CopyScalar");

  S2->d = S1->d ;

  GetDP_End ;
}
void LinAlg_CopyVector(gVector *V1, gVector *V2){

  GetDP_Begin("LinAlg_CopyVector");

  memcpy(V2->V, V1->V, V1->N*sizeof(double)) ;

  GetDP_End ;
}
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2){

  GetDP_Begin("LinAlg_CopyMatrix");

  Msg(ERROR, "'LinAlg_CopyMatrix' not yet implemented");  

  GetDP_End ;
}

/* Zero */

void LinAlg_ZeroScalar(gScalar *S){

  GetDP_Begin("LinAlg_ZeroScalar");

  S->d = 0. ;

  GetDP_End ;
}
void LinAlg_ZeroVector(gVector *V){

  GetDP_Begin("LinAlg_ZeroCopyVector");

  zero_vector(V->N, V->V) ;

  GetDP_End ;
}
void LinAlg_ZeroMatrix(gMatrix *M){
  int i ;

  GetDP_Begin("LinAlg_ZeroMatrix");

  zero_matrix(&M->M) ;
  /* la routine de produit matrice vecteur est buggee s'il
     existe des lignes sans aucun element dans la matrice... */
  for(i=0 ; i<M->M.N ; i++) add_matrix_double(&M->M, i+1, i+1, 0.0) ;

  GetDP_End ;
}

/* Scan */

void LinAlg_ScanScalar(FILE *file, gScalar *S){

  GetDP_Begin("LinAlg_ScanScalar");

  fscanf(file, "%lf", &S->d) ;

  GetDP_End ;
}
void LinAlg_ScanVector(FILE *file, gVector *V) {
  int i ;

  GetDP_Begin("LinAlg_ScanVector");

  for(i=0 ; i<V->N ; i++) fscanf(file, "%lf", &V->V[i]) ;

  GetDP_End ;
}
void LinAlg_ScanMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_ScanMatrix");

  Msg(ERROR, "'LinAlg_ScanMatrix' not yet implemented");

  GetDP_End ;
}

/* Read */

void LinAlg_ReadScalar(FILE *file, gScalar *S){

  GetDP_Begin("LinAlg_ReadScalar");

  Msg(ERROR, "'LinAlg_ReadScalar' not yet implemented");

  GetDP_End ;
}
void LinAlg_ReadVector(FILE *file, gVector *V) {

  GetDP_Begin("LinAlg_ReadVector");

  fread(V->V, sizeof(double), V->N, file);

  GetDP_End ;
}
void LinAlg_ReadMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_ReadMatrix");

  Msg(ERROR, "'LinAlg_ReadMatrix' not yet implemented");

  GetDP_End ;
}

/* Print */

void LinAlg_PrintScalar(FILE *file, gScalar *S){

  GetDP_Begin("LinAlg_PrintScalar");

  fprintf(file, "%.16g", S->d) ;

  GetDP_End ;
}
void LinAlg_PrintVector(FILE *file, gVector *V){

  GetDP_Begin("LinAlg_PrintVector");

  formatted_write_vector(file, V->N, V->V, KUL) ;

  GetDP_End ;
}
void LinAlg_PrintMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_PrintMatrix");

  formatted_write_matrix(file, &M->M, KUL) ;

  GetDP_End ;
}

/* Write */

void LinAlg_WriteScalar(FILE *file, gScalar *S){

  GetDP_Begin("LinAlg_WriteScalar");

  Msg(ERROR, "'LinAlg_WriteScalar' not yet implemented");

  GetDP_End ;
}
void LinAlg_WriteVector(FILE *file, gVector *V){

  GetDP_Begin("LinAlg_WriteVector");

  fwrite(V->V, sizeof(double), V->N, file);
  fprintf(file, "\n");

  GetDP_End ;
}
void LinAlg_WriteMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_WriteMatrix");

  binary_write_matrix(&M->M, "A", ".mat") ;

  GetDP_End ;
}

/* Get */

void LinAlg_GetVectorSize(gVector *V, int *i){

  GetDP_Begin("LinAlg_GetVectorSize");

  *i = V->N ;

  GetDP_End ;
}
void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j){

  GetDP_Begin("LinAlg_GetMatrixSize");

  *i = *j = M->M.N ;

  GetDP_End ;
}
void LinAlg_GetDoubleInScalar(double *d, gScalar *S){

  GetDP_Begin("LinAlg_GetDoubleInScalar");

  *d = S->d ;

  GetDP_End ;
}
void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S){

  GetDP_Begin("LinAlg_GetComplexInScalar");

  Msg(ERROR, "'LinAlg_GetComplexInScalar' not available with this Solver");

  GetDP_End ;
}
void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_GetScalarInVector");

  S->d = V->V[i] ;

  GetDP_End ;
}
void LinAlg_GetDoubleInVector(double *d, gVector *V, int i){

  GetDP_Begin("LinAlg_GetDoubleInVector");

  *d = V->V[i] ;

  GetDP_End ;
}
void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i){

  GetDP_Begin("LinAlg_GetAbsDoubleInVector");

  *d = fabs(V->V[i]) ;

  GetDP_End ;
}
void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){

  GetDP_Begin("LinAlg_GetComplexInVector");

  *d1 = V->V[i] ;
  *d2 = V->V[j] ;

  GetDP_End ;
}
void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_GetScalarInMatrix");

  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_GetDoubleInMatrix");

  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){

  GetDP_Begin("LinAlg_GetComplexInMatrix");

  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}

/* Set */

void LinAlg_SetScalar(gScalar *S, double *d){

  GetDP_Begin("LinAlg_SetScalar");

  S->d = d[0] ;

  GetDP_End ;
}
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_SetScalarInVector");

  V->V[i] = S->d ;

  GetDP_End ;
}
void LinAlg_SetDoubleInVector(double d, gVector *V, int i){

  GetDP_Begin("LinAlg_SetDoubleInVector");

  V->V[i] = d ;

  GetDP_End ;
}
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j){

  GetDP_Begin("LinAlg_SetComplexInVector");

  V->V[i] = d1 ;
  V->V[j] = d2 ;

  GetDP_End ;
}
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_SetScalarInMatrix");

  Msg(ERROR, "'LinAlg_SetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_SetDoubleInMatrix");

  Msg(ERROR, "'LinAlg_SetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){

  GetDP_Begin("LinAlg_SetComplexInMatrix");

  Msg(ERROR, "'LinAlg_SetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}

/* Add */

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){

  GetDP_Begin("LinAlg_AddScalarScalar");

  S3->d = S1->d + S2->d ;

  GetDP_End ;
}
void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_AddScalarInVector");

  V->V[i] += S->d ;

  GetDP_End ;
}
void LinAlg_AddDoubleInVector(double d, gVector *V, int i){

  GetDP_Begin("LinAlg_AddDoubleInVector");

  V->V[i] += d ;

  GetDP_End ;
}
void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j){

  GetDP_Begin("LinAlg_AddComplexInVector");

  V->V[i] += d1 ;
  V->V[j] += d2 ;

  GetDP_End ;
}
void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_AddScalarInMatrix");

  add_matrix_double(&M->M, i+1, j+1, S->d) ;

  GetDP_End ;
}
void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_AddDoubleInMatrix");

  add_matrix_double(&M->M, i+1, j+1, d) ;

  GetDP_End ;
}
void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){

  GetDP_Begin("LinAlg_AddComplexInMatrix");

  if(d1){
    add_matrix_double(&M->M, i+1, j+1, d1) ;
    add_matrix_double(&M->M, k+1, l+1, d1) ;
  }
  if(d2){
    add_matrix_double(&M->M, i+1, l+1, -d2) ;
    add_matrix_double(&M->M, k+1, j+1, d2) ;
  }

  GetDP_End ;
}
void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3){

  GetDP_Begin("LinAlg_AddvectorVector");

  if(V3==V1)
    add_vector_vector(V1->N, V1->V, V2->V) ;
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddVectorVector'");

  GetDP_End ;
}
void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){

  GetDP_Begin("LinAlg_AddVectorProdVectorDouble");

  if(V3==V1)
    add_vector_prod_vector_double(V1->N, V1->V, V2->V, d) ;
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");

  GetDP_End ;
}
void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){

  GetDP_Begin("LinAlg_AddMatrixMatrix");

  if(M3==M1)
    add_matrix_matrix(&M1->M, &M2->M) ;
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddMatrixMatrix'");

  GetDP_End ;
}
void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){

  GetDP_Begin("LinAlg_AddMatrixProdMatrixDouble");

  if(M3==M1)
    add_matrix_prod_matrix_double(&M1->M, &M2->M, d) ;
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddMatrixProdMatrixDouble'");

  GetDP_End ;
}

/* Sub */

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){

  GetDP_Begin("LinAlg_SubScalarScalar");

  S3->d = S1->d - S2->d ;

  GetDP_End ;
}
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3){

  GetDP_Begin("LinAlg_SubVectorVector");

  if(V3==V1) 
    sub_vector_vector_1(V1->N, V1->V, V2->V) ;
  else if (V3==V2) 
    sub_vector_vector_2(V1->N, V1->V, V2->V) ;
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_SubVectorVector'");  

  GetDP_End ;
}
void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){

  GetDP_Begin("LinAlg_SubMatrixMatrix");

  Msg(ERROR, "'LinAlg_SubMatrixMatrix' not yet implemented");  

  GetDP_End ;
}

/* Prod */

void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){

  GetDP_Begin("LinAlg_ProdScalarScalar");

  S3->d = S1->d * S2->d ;

  GetDP_End ;
}
void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2){

  GetDP_Begin("LinAlg_ProdScalarDouble");

  S2->d = S1->d * d ;

  GetDP_End ;
}
void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){

  GetDP_Begin("LinAlg_ProdScalarComplex");

  *d3 = S->d * d1 ;
  *d4 = S->d * d2 ;

  GetDP_End ;
}
void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){

  GetDP_Begin("LinAlg_ProdvectorScalar");

  Msg(ERROR, "'LinAlg_ProdVectorScalar' not yet implemented");  

  GetDP_End ;
}
void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2){
  
  GetDP_Begin("LinAlg_ProdVectorDouble");

  if(V2==V1)
    prod_vector_double(V1->N, V1->V, d);
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdVectorDouble'");

  GetDP_End ;
}
void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){

  GetDP_Begin("LinAlg_ProdVectorComplex");

  Msg(ERROR, "'LinAlg_ProdVectorComplex' not yet implemented");

  GetDP_End ;
}
void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d){

  GetDP_Begin("LinAlg_ProdVectorVector");

  prodsc_vector_vector (V1->N, V1->V, V2->V, d) ;

  GetDP_End ;
}
void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){

  GetDP_Begin("LinAlg_ProdMatrixVector");

  if(V2==V1)
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdMatrixVector'");
  else
    prod_matrix_vector(&M->M, V1->V, V2->V);

  GetDP_End ;
}
void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){

  GetDP_Begin("LinAlg_ProdMatrixScalar");

  if(M2==M1)
    prod_matrix_double (&M1->M, S->d);
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdMatrixScalar'");

  GetDP_End ;
}
void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){

  GetDP_Begin("LinAlg_ProdMatrixDouble");

  if(M2==M1)
    prod_matrix_double (&M1->M, d);
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdMatrixDouble'");

  GetDP_End ;
}
void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2){

  GetDP_Begin("LinAlg_ProdMatrixComplex");

  Msg(ERROR, "'LinAlg_ProdMatrixComplex' not yet implemented");

  GetDP_End ;
}

/* Div */

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){

  GetDP_Begin("LinAlg_DivScalarScalar");

  S3->d = S1->d / S2->d ;

  GetDP_End ;
}
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2){

  GetDP_Begin("LinAlg_DivScalarDouble");

  S2->d = S1->d / d ;

  GetDP_End ;
}

/* Assemble */

void LinAlg_AssembleMatrix(gMatrix *M){
}
void LinAlg_AssembleVector(gVector *V){
}

/* Solve */

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){

  GetDP_Begin("LinAlg_Solve");

  solve_matrix(&A->M, &Solver->Params, B->V, X->V);

  GetDP_End ;
}


/* Get */

void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1){

  GetDP_Begin("LinAlg_GetColumnInMatrix");

   get_column_in_matrix(&M->M, col, V1->V);

  GetDP_End ;
}


#endif
