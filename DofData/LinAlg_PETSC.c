#define RCSID "$Id: LinAlg_PETSC.c,v 1.17 2001-03-03 19:21:20 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

#if _PETSC

/* This is the interface library for the PETSC solver */

#include "GetDP.h"
#include "LinAlg.h"

/* Pour tester assemblage sans faire d'appel a PETSc */
/*
#define VecSetValues dummyvec
#define MatSetValues dummymat
int dummyvec( Vec aa, int bb, int * cc, Scalar * dd , int ee ) {
  return 0;
}
int dummymat( Mat aa, int bb, int * cc, int dd, int * ee, Scalar * ff, int gg ) {
  return 0; 
}
*/

static int  ierr, i_Start, i_End ;
static int  SolverInitialized=0 ;

/* Initialize */

void LinAlg_Initialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu){

  GetDP_Begin("LinAlg_Initialize");

  MPI_Init(argc, argv);
  MPI_Comm_size(MPI_COMM_WORLD, NbrCpu);
  MPI_Comm_rank(MPI_COMM_WORLD, RankCpu);

  GetDP_End ;
}

void LinAlg_InitializeSolver(int* argc, char*** argv, int *NbrCpu, int *RankCpu){

  GetDP_Begin("LinAlg_InitializeSolver");

  /* This function detects if MPI is initialized */
  PetscInitialize(argc, argv, PETSC_NULL, PETSC_NULL);
  SolverInitialized = 1;
  /* just in case... */
  MPI_Comm_size(PETSC_COMM_WORLD, NbrCpu);
  MPI_Comm_rank(PETSC_COMM_WORLD, RankCpu);

  GetDP_End ;
}

/* Finalize */

void LinAlg_Finalize(void){
  int flag;

  GetDP_Begin("LinAlg_Finalize");

  MPI_Initialized(&flag);
  if(flag) MPI_Finalize();

  GetDP_End ;
}

void LinAlg_FinalizeSolver(void){

  GetDP_Begin("LinAlg_Finalize");

  if(SolverInitialized) PetscFinalize();

  GetDP_End ;
}

/* Sequential */

void LinAlg_SequentialBegin(void){

  GetDP_Begin("LinAlg_SequentialBegin");

  ierr = PetscSequentialPhaseBegin(MPI_COMM_WORLD, 1); CHKERRA(ierr);

  GetDP_End ;
}

void LinAlg_SequentialEnd(void){

  GetDP_Begin("LinAlg_SequentialEnd");

  ierr = PetscSequentialPhaseEnd(MPI_COMM_WORLD, 1); CHKERRA(ierr);

  GetDP_End ;
}

/* Create */

void LinAlg_CreateSolver(gSolver *Solver, char * SolverDataFileName){
}
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part){
#ifdef _METIS
  int NbrCpu, RankCpu;
#endif

  GetDP_Begin("LinAlg_CreateVector");

#ifdef _METIS
  MPI_Comm_size(MPI_COMM_WORLD, &NbrCpu);
  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);
  if(NbrPart != NbrCpu){
    Msg(WARNING, "%d partitions on %d CPU", NbrPart, NbrCpu);
    ierr = VecCreate(PETSC_COMM_WORLD, PETSC_DECIDE, n, &V->V); CHKERRA(ierr);
    ierr = VecSetFromOptions(V->V); CHKERRA(ierr);
  }
  else{
    ierr = VecCreateMPI(PETSC_COMM_WORLD, 
			Part[RankCpu+1]-Part[RankCpu], 
			n, 
			&V->V); CHKERRA(ierr);
  }
#else
  ierr = VecCreate(PETSC_COMM_WORLD, PETSC_DECIDE, n, &V->V); CHKERRA(ierr);
  ierr = VecSetFromOptions(V->V); CHKERRA(ierr);
#endif

  GetDP_End ;
}
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
		   int NbrPart, int *Part, int *Nnz){

  int NbrCpu, RankCpu;

  GetDP_Begin("LinAlg_CreateMatrix");

  /*
  ierr = MatCreateSeqAIJ(PETSC_COMM_SELF, n, m, 20, PETSC_NULL, &M->M); CHKERRA(ierr);
  ierr = MatCreateMPIBAIJ(PETSC_COMM_WORLD, 1, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         30, PETSC_NULL, 30, PETSC_NULL, &M->M); CHKERRA(ierr); 
  ierr = MatCreateMPIRowbs(PETSC_COMM_WORLD,PETSCC_DECIDE, n, 50, PETSC_NULL, &M->M);
  */

#ifdef _METIS
  MPI_Comm_size(PETSC_COMM_WORLD, &NbrCpu);
  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);

  if(NbrPart != NbrCpu) Msg(ERROR, "%d partitions on %d CPU", NbrPart, NbrCpu);

  i_Start = Part[RankCpu]-1 ;
  i_End   = Part[RankCpu+1]-1 ;
  ierr = MatCreateMPIAIJ(PETSC_COMM_WORLD,
			 i_End-i_Start, i_End-i_Start, 
			 n, m, 
			 1, &Nnz[i_Start], 
			 1, &Nnz[i_Start], 
			 &M->M); CHKERRA(ierr); 
  Msg(PETSC, "Matrix creation: %d->%d", i_Start, i_End-1);
#else

  ierr = MatCreateMPIAIJ(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         50, PETSC_NULL, 50, PETSC_NULL, &M->M); CHKERRA(ierr); 
  ierr = MatGetOwnershipRange(M->M, &i_Start, &i_End) ; CHKERRA(ierr);
  Msg(PETSC, "Matrix creation: %d->%d", i_Start, i_End);

  /* ierr = MatCreateMPIRowbs(PETSC_COMM_WORLD, PETSC_DECIDE, n, 50, PETSC_NULL, &M->M);
  ierr = MatGetOwnershipRange(M->M, &i_Start, &i_End) ; CHKERRA(ierr);
  Msg(PETSC, "Matrix creation: %d->%d", i_Start, i_End); */

#endif

  GetDP_End ;
}


/* Destroy */

void LinAlg_DestroySolver(gSolver *Solver){

  GetDP_Begin("LinAlg_DestroySolver");

  ierr = SLESDestroy(Solver->sles); CHKERRA(ierr);
  ierr = PCDestroy(Solver->pc); CHKERRA(ierr);
  ierr = KSPDestroy(Solver->ksp); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_DestroyVector(gVector *V){

  GetDP_Begin("LinAlg_DestroyVector");

  ierr = VecDestroy(V->V); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_DestroyMatrix(gMatrix *M){

  GetDP_Begin("LinAlg_DestroyMatrix");

  ierr = MatDestroy(M->M); CHKERRA(ierr);

  GetDP_End ;
}

/* Copy */

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2){

  GetDP_Begin("LinAlg_CopyScalar");

  S1->s = S2->s ;

  GetDP_End ;
}
void LinAlg_CopyVector(gVector *V1, gVector *V2){

  GetDP_Begin("LinAlg_CopyVector");

  ierr = VecCopy(V1->V, V2->V) ; CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2){

  GetDP_Begin("LinAlg_CopyMatrix");

  ierr = MatCopy(M1->M, M2->M, SAME_NONZERO_PATTERN) ; CHKERRA(ierr);

  GetDP_End ;
}

/* Zero */

void LinAlg_ZeroScalar(gScalar *S){

  GetDP_Begin("LinAlg_ZeroScalar");

  S->s = 0. ;

  GetDP_End ;
}
void LinAlg_ZeroVector(gVector *V){
  Scalar zero = 0.0 ;

  GetDP_Begin("LinAlg_ZeroVector");

  ierr = VecSet(&zero,V->V); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_ZeroMatrix(gMatrix *M){

  GetDP_Begin("LinAlg_ZeroMatrix");

  ierr = MatZeroEntries(M->M); CHKERRA(ierr);

  GetDP_End ;
}

/* Scan */

void LinAlg_ScanScalar(FILE *file, gScalar *S){
#if PETSC_USE_COMPLEX
  double a, b ;
#endif

  GetDP_Begin("LinAlg_ScanScalar");

#if PETSC_USE_COMPLEX
  fscanf(file, "%lf %lf", &a, &b) ;
  S->s = a + PETSC_i * b ;
#else
  fscanf(file, "%lf", &S->s) ;
#endif

  GetDP_End ;
}
void LinAlg_ScanVector(FILE *file, gVector *V) {
  int i, n ;
  Scalar tmp ;
  double a, b ;  

  GetDP_Begin("LinAlg_ScanVector");
  
  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  for(i=0 ; i<n ; i++){
#if PETSC_USE_COMPLEX
    fscanf(file, "%lf %lf", &a, &b) ;
    tmp = a + PETSC_i * b ;
#else
    fscanf(file, "%lf", &a) ;
    tmp = a ;
#endif
    ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
  }

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
  int n ;

  GetDP_Begin("LinAlg_ReadVector");

  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  fread(V->V, sizeof(Scalar), n, file);

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

#if PETSC_USE_COMPLEX
  fprintf(file, "%.16g %.16g", real(S->s), imag(S->s)) ;
#else
  fprintf(file, "%.16g", S->s) ;
#endif

  GetDP_End ;
}
void LinAlg_PrintVector(FILE *file, gVector *V){
  Scalar *tmp ;
  int     i, n ;

  GetDP_Begin("LinAlg_PrintVector");

  ierr = VecGetLocalSize(V->V, &n); CHKERRA(ierr);
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);

  for (i=0 ; i<n ; i++){
#if PETSC_USE_COMPLEX
    fprintf(file, "%.16g %.16g\n", real(tmp[i]), imag(tmp[i])) ;
#else
    fprintf(file, "%.16g\n", tmp[i]) ;
#endif
  }
  fflush(file) ;

  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);

  GetDP_End ;
} 
void LinAlg_PrintMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_PrintMatrix");

  Msg(ERROR, "'LinAlg_PrintMatrix' not yet implemented");  

  GetDP_End ;
}

/* Write */

void LinAlg_WriteScalar(FILE *file, gScalar *S){

  GetDP_Begin("LinAlg_WriteScalar");

  Msg(ERROR, "'LinAlg_WriteScalar' not yet implemented");

  GetDP_End ;
}
void LinAlg_WriteVector(FILE *file, gVector *V){
  Scalar *tmp ;
  int n ;

  GetDP_Begin("LinAlg_WriteVector");

  ierr = VecGetLocalSize(V->V, &n); CHKERRA(ierr);
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
  fwrite(tmp, sizeof(Scalar), n, file);
  fprintf(file, "\n");
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_WriteMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_WriteMatrix");

  Msg(ERROR, "'LinAlg_WriteMatrix' not yet implemented");  

  GetDP_End ;
}

/* Get */

void LinAlg_GetVectorSize(gVector *V, int *i){

  GetDP_Begin("LinAlg_GetVectorSize");

  ierr = VecGetSize(V->V, i); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j){

  GetDP_Begin("LinAlg_GetMatrixSize");

  ierr = MatGetSize(M->M, i, j); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_GetDoubleInScalar(double *d, gScalar *S){

  GetDP_Begin("LinAlg_GetDoubleInScalar");

#if PETSC_USE_COMPLEX
  *d = real(S->s) ;
#else
  *d = S->s ;
#endif

  GetDP_End ;
}
void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S){

  GetDP_Begin("LinAlg_GetComplexInScalar");

#if PETSC_USE_COMPLEX
  *d1 = real(S->s) ;
  *d2 = imag(S->s) ;
#else
  Msg(ERROR, "'LinAlg_GetComplexInScalar' not available with this Solver");  
#endif

  GetDP_End ;
}
void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i){
  Scalar *tmp ;

  GetDP_Begin("LinAlg_GetScalarInVector");

  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
  S->s = tmp[i] ;
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_GetDoubleInVector(double *d, gVector *V, int i){
  Scalar *tmp ;

  GetDP_Begin("LinAlg_GetDoubleInVector");

  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
#if PETSC_USE_COMPLEX
  *d = real(tmp[i]) ;
#else
  *d = tmp[i] ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i){
  Scalar *tmp ;

  GetDP_Begin("LinAlg_GetAbsDoubleInVector");

  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
#if PETSC_USE_COMPLEX
  *d = fabs(real(tmp[i])) ;
#else
  *d = fabs(tmp[i]) ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){
  Scalar *tmp ;

  GetDP_Begin("LinAlg_GetComplexInVector");

  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
#if PETSC_USE_COMPLEX
  *d1 = real(tmp[i]) ;
  *d2 = imag(tmp[i]) ;
#else
  *d1 = (double)tmp[i] ;
  *d2 = (double)tmp[j] ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_GetScalarInMatrix");

  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_GetDoubleInMatrix");

  Msg(ERROR, "'LinAlg_GetDoubleInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){

  GetDP_Begin("LinAlg_GetComplexInMatrix");

  Msg(ERROR, "'LinAlg_GetComplexInMatrix' not yet implemented");  

  GetDP_End ;
}

/* Set */

void LinAlg_SetScalar(gScalar *S, double *d){

  GetDP_Begin("LinAlg_SetScalar");

#if PETSC_USE_COMPLEX
  S->s = d[0] + (PETSC_i * d[1]) ;
#else
  S->s = d[0] ;
#endif

  GetDP_End ;
}
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_SetScalarInVector");

  ierr = VecSetValues(V->V, 1, &i, &S->s, ADD_VALUES); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_SetDoubleInVector(double d, gVector *V, int i){
  Scalar tmp ;

  GetDP_Begin("LinAlg_SetDoubleInVector");

  tmp = d ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j){
  Scalar tmp ;

  GetDP_Begin("LinAlg_SetComplexInVector");

#if PETSC_USE_COMPLEX
  tmp = d1 + PETSC_i * d2 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
#else
  tmp = d1 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
  tmp = d2 ;
  ierr = VecSetValues(V->V, 1, &j, &tmp, INSERT_VALUES); CHKERRA(ierr);
#endif

  GetDP_End ;
}
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_SetScalarInMatrix");

  ierr = MatSetValues(M->M, 1, &i, 1, &j, &S->s, INSERT_VALUES); CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_SetDoubleInMatrix");

  Msg(ERROR, "'LinAlg_SetDoubleInMatrix' not yet implemented");  

  GetDP_End ;
}
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){

  GetDP_Begin("LinAlg_SetComplexInMatrix");

  Msg(ERROR, "'LinAlg_SetComplexInMatrix' not yet implemented");  

  GetDP_End ;
}

/* Add */

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){

  GetDP_Begin("LinAlg_AddScalarScalar");

  S3->s = S1->s + S2->s ;

  GetDP_End ;
}
void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_AddScalarInVector");

  if (i_Start <= i && i < i_End){
    ierr = VecSetValues(V->V, 1, &i, &S->s, ADD_VALUES); CHKERRA(ierr);
  }

  GetDP_End ;
}
void LinAlg_AddDoubleInVector(double d, gVector *V, int i){
  Scalar tmp ;

  GetDP_Begin("LinAlg_AddDoubleInVector");

  if (i_Start <= i && i < i_End){
    tmp = d ;
    ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); CHKERRA(ierr);
  }

  GetDP_End ;
}
void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j){
  Scalar tmp ;

  GetDP_Begin("LinAlg_AddComplexInVector");

#if PETSC_USE_COMPLEX
  if (i_Start <= i && i < i_End){
    tmp = d1 + PETSC_i * d2 ;
    ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
#else
  if (!i_Start) 
    Msg(ERROR, "Fake complex arithmetic not ready in parallel");
  tmp = d1 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); CHKERRA(ierr);
  tmp = d2 ;
  ierr = VecSetValues(V->V, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
#endif

  GetDP_End ;
}
void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_AddScalarInMatrix");

  if (i_Start <= i && i < i_End){
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &S->s, ADD_VALUES); CHKERRA(ierr);
  }

  GetDP_End ;
}
void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j){
  Scalar tmp ;

  GetDP_Begin("LinAlg_AddDoubleInMatrix");

  if (i_Start <= i && i < i_End){    
    tmp = d ;
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
  }

  GetDP_End ;
}
void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  Scalar tmp ;

  GetDP_Begin("LinAlg_AddComplexInMatrix");

#if PETSC_USE_COMPLEX
  if (i_Start <= i && i < i_End){
    tmp = d1 + PETSC_i * d2 ;
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
#else
  if (!i_Start)
    Msg(ERROR, "Fake complex arithmetic not ready in parallel");
  if(d1){
    tmp = d1 ;
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
    ierr = MatSetValues(M->M, 1, &k, 1, &l, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
  if(d2){
    tmp = -d2 ;
    ierr = MatSetValues(M->M, 1, &i, 1, &l, &tmp, ADD_VALUES); CHKERRA(ierr);
    tmp = d2 ;
    ierr = MatSetValues(M->M, 1, &k, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
#endif

  GetDP_End ;
}
void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3){
  Scalar tmp=1.0 ;

  GetDP_Begin("LinAlg_AddVectorVector");

  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; CHKERRA(ierr);
  }
  else if(V3==V2){
    ierr = VecAXPY(&tmp, V1->V, V2->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddVectorVector'");  

  GetDP_End ;
}
void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){
  Scalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_AddvectorProdVectorDouble");

  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; CHKERRA(ierr);
  }
  else if(V3==V2){
    ierr = VecAYPX(&tmp, V1->V, V2->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");  

  GetDP_End ;
}
void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  Scalar tmp=1.0 ;

  GetDP_Begin("LinAlg_AddMatrixMatrix");

  if(M3==M1){
    ierr = MatAXPY(&tmp, M2->M, M1->M) ; CHKERRA(ierr);
  }
  else if(M3==M2){
    ierr = MatAXPY(&tmp, M1->M, M2->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddMatrixMatrix'");  

  GetDP_End ;
}
void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){
  Scalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_AddMatrixProdMatrixDouble");

  if(M3==M1){
    ierr = MatAXPY(&tmp, M2->M, M1->M) ; CHKERRA(ierr);
  }
  else if(M3==M2){
    ierr = MatAYPX(&tmp, M1->M, M2->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddMatrixMatrix'");

  GetDP_End ;
}

/* Sub */

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){

  GetDP_Begin("LinAlg_SubScalarScalar");

  S3->s = S1->s - S2->s ;

  GetDP_End ;
}
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3){
  Scalar tmp=-1.0 ;

  GetDP_Begin("LinAlg_SubVectorVector");

  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; CHKERRA(ierr);
  }
  else if(V3==V2){
    ierr = VecAYPX(&tmp, V1->V, V2->V) ; CHKERRA(ierr);
  }
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

  S3->s = S1->s * S2->s ;

  GetDP_End ;
}
void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2){

  GetDP_Begin("LinAlg_ProdScalarDouble");

  S2->s = S1->s * d ;

  GetDP_End ;
}
void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){
#if PETSC_USE_COMPLEX
  Scalar tmp ;
#endif

  GetDP_Begin("LinAlg_ProdScalarComplex");

#if PETSC_USE_COMPLEX
  tmp = S->s * (d1 + PETSC_i * d2) ;
  *d3 = real(tmp) ;
  *d4 = imag(tmp) ;
#else
  *d3 = S->s * d1 ;
  *d4 = S->s * d2 ;
#endif

  GetDP_End ;
}
void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){  

  GetDP_Begin("LinAlg_ProdVectorScalar");

  if(V2==V1){
    ierr = VecScale(&S->s, V1->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdVectorScalar'");

  GetDP_End ;
}
void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2){
  Scalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_ProdVectorDouble");

  if(V2==V1){
    ierr = VecScale(&tmp, V1->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdVectorDouble'");

  GetDP_End ;
}
void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){

  GetDP_Begin("LinAlg_ProdvectorComplex");

  Msg(ERROR, "'LinAlg_ProdVectorComplex' not yet implemented");

  GetDP_End ;
}
void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d){
  Scalar tmp ;

  GetDP_Begin("LinAlg_ProdVectorVector");

  ierr = VecDot(V1->V, V2->V, &tmp) ; CHKERRA(ierr);
#ifdef PETSC_USE_COMPLEX
  *d = real(tmp) ;
#else
  *d = tmp ;
#endif

  GetDP_End ;
}
void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){

  GetDP_Begin("LinAlg_ProdMatrixVector");

  if(V2==V1)
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdMatrixVector'");
  else
    ierr = MatMult(M->M, V1->V, V2->V) ; CHKERRA(ierr);

  GetDP_End ;
}
void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){

  GetDP_Begin("LinAlg_ProdMatrixScalar");

  if(M2==M1){
    ierr = MatScale(&S->s, M1->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdMatrixScalar'");

  GetDP_End ;
}
void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){
  Scalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_ProdMatrixDouble");

  if(M2==M1){
    ierr = MatScale(&tmp, M1->M) ; CHKERRA(ierr);
  }
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

  S3->s = S1->s / S2->s ;

  GetDP_End ;
}
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2){

  GetDP_Begin("LinAlg_DivScalarDouble");

  S2->s = S1->s / d ;

  GetDP_End ;
}


/* Assemble */

void LinAlg_AssembleMatrix(gMatrix *M){

  GetDP_Begin("LinAlg_AssembleMatrix");

  ierr = MatAssemblyBegin(M->M, MAT_FINAL_ASSEMBLY); CHKERRA(ierr);
  ierr = MatAssemblyEnd(M->M, MAT_FINAL_ASSEMBLY); CHKERRA(ierr);  
  /* ierr = MatView(M->M,VIEWER_STDOUT_WORLD); */

  GetDP_End ;
}
void LinAlg_AssembleVector(gVector *V){

  GetDP_Begin("LinAlg_AssembleVector");

  ierr = VecAssemblyBegin(V->V); CHKERRA(ierr);
  ierr = VecAssemblyEnd(V->V); CHKERRA(ierr);

  /*  
      Msg(INFO, "CPU %d: total size = %d", MPI_Proc_Rank, machin1); 
      ierr = VecGetLocalSize(V->V, &machin2);
      Msg(INFO, "CPU %d: local size = %d", MPI_Proc_Rank, machin2); 
      ierr = ViewerPushFormat(VIEWER_STDOUT_WORLD, VIEWER_FORMAT_ASCII_INDEX, PETSC_NULL);
      ierr = VecView(V->V,VIEWER_STDOUT_WORLD);
  */

  GetDP_End ;
}

/* Solve */

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){
  Vec diag ;
  int its, RankCpu ;

  GetDP_Begin("LinAlg_Solve");

  /* Should be done only if the structure and/or the value of the elements change */

  /* scale */
  
  VecDuplicate(X->V, &diag);
  MatGetDiagonal(A->M, diag);
  VecReciprocal(diag); 
  MatDiagonalScale(A->M, diag, PETSC_NULL);
  VecPointwiseMult(B->V, diag, B->V);

  /* Should be done only once */

  ierr = SLESCreate(PETSC_COMM_WORLD, &Solver->sles); CHKERRA(ierr);

  /* Should be done only if the structure and/or the value of the elements change */
  /* if (!ReUse_ILU) */

  ierr = SLESSetOperators(Solver->sles, A->M, A->M, DIFFERENT_NONZERO_PATTERN); CHKERRA(ierr);
  ierr = SLESSetFromOptions(Solver->sles); CHKERRA(ierr);

  /* Todo everytime */
  
  ierr = SLESSolve(Solver->sles, B->V, X->V, &its); CHKERRA(ierr); 

  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);

  if (!RankCpu) Msg(PETSC, "%d iterations", its) ;

  /* unscale */
  /*  VecReciprocal(diag); 
  MatDiagonalScale(A->M, diag, PETSC_NULL);
  VecPointwiseMult(newb, diag, B->V); */

  GetDP_End ;
}

#endif
