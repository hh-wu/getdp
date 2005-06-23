#define RCSID "$Id: LinAlg_PETSC.c,v 1.38 2005-06-23 01:45:00 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   David Colignon
 *   Ruth Sabariego
 *   Jose Geraldo A. Brito Neto
 */

/* This is the interface library for the PETSC solver */

#include "GetDP.h"

#if defined(HAVE_PETSC)

#include "LinAlg.h"
#include "F_FMMOperations.h"
#include "SafeIO.h"

extern int Flag_FMM ;

/* error checking, petsc-style */

#define MYCHECK(ierr) CHKERRABORT(PETSC_COMM_WORLD,ierr)
static int  ierr, SolverInitialized=0 ;

/* stuff for matrix-free matrices */

typedef struct{
  void *ctx;
  void (*fct)(gMatrix *A, gVector *x, gVector *y);
} petscCtx;

int petscMult(Mat A, Vec x, Vec y){
  gMatrix A1;
  gVector x1, y1;
  petscCtx *ctx;
  A1.M = A; x1.V = x; y1.V = y;
  MatShellGetContext(A,(void**)&ctx);
  ctx->fct(&A1,&x1,&y1);
  return 0;
}

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

/* Barrier */

void LinAlg_Barrier(void){

  GetDP_Begin("LinAlg_Barrier");

  MPI_Barrier(PETSC_COMM_WORLD);

  GetDP_End;
}

/* Sequential */

void LinAlg_SequentialBegin(void){

  GetDP_Begin("LinAlg_SequentialBegin");

  ierr = PetscSequentialPhaseBegin(MPI_COMM_WORLD, 1); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_SequentialEnd(void){

  GetDP_Begin("LinAlg_SequentialEnd");

  ierr = PetscSequentialPhaseEnd(MPI_COMM_WORLD, 1); MYCHECK(ierr);

  GetDP_End ;
}

/* Create */

void LinAlg_CreateSolver(gSolver *Solver, char * SolverDataFileName){
#if ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR>=2))
  Solver->ksp = NULL;
#else
  Solver->sles = NULL;
#endif
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
    ierr = VecCreate(PETSC_COMM_WORLD, &V->V); MYCHECK(ierr);
    ierr = VecSetSizes(V->V,PETSC_DECIDE,n);MYCHECK(ierr);
    ierr = VecSetFromOptions(V->V); MYCHECK(ierr);
  }
  else{
    ierr = VecCreateMPI(PETSC_COMM_WORLD, 
			Part[RankCpu+1]-Part[RankCpu], 
			n, 
			&V->V); MYCHECK(ierr);
  }
#else
  ierr = VecCreate(PETSC_COMM_WORLD, &V->V); MYCHECK(ierr);
  ierr = VecSetSizes(V->V, PETSC_DECIDE, n); MYCHECK(ierr);

  /*
  ierr = VecCreateSeq(PETSC_COMM_WORLD, n, &V->V); MYCHECK(ierr);
  */

  ierr = VecSetFromOptions(V->V); MYCHECK(ierr);
#endif

  GetDP_End ;
}

void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
			 int NbrPart, int *Part, int *Nnz){

#ifdef _METIS
  int NbrCpu, RankCpu, i_Start, i_End;
#endif

  GetDP_Begin("LinAlg_CreateMatrix");

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
			 &M->M); MYCHECK(ierr); 
#else
  /* dense */
  /*
  ierr = MatCreateMPIDense(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, n, m, 
			   PETSC_NULL, &M->M); MYCHECK(ierr); 
  */
  
  /* "dense sparse" */
  /*
  ierr = MatCreateMPIAIJ(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         n, PETSC_NULL, m, PETSC_NULL, &M->M); MYCHECK(ierr); 
  */
  /* normal sparse */

  ierr = MatCreateMPIAIJ(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         50, PETSC_NULL, 50, PETSC_NULL, &M->M); MYCHECK(ierr); 
  

  /* sequential sparse */
  /*
  ierr = MatCreateSeqAIJ(PETSC_COMM_SELF, n, m, 20, PETSC_NULL, &M->M); MYCHECK(ierr);
  */

  /* rowbs format, for blocksolve */
  /*
  ierr = MatCreateMPIRowbs(PETSC_COMM_WORLD, PETSC_DECIDE, n, 50, PETSC_NULL, &M->M);
  */

#endif

  GetDP_End ;
}

void LinAlg_CreateMatrixShell(gMatrix *A, gSolver *Solver, int n, int m, void *myCtx, 
			      void (*myMult)(gMatrix *A, gVector *x, gVector *y)){
  GetDP_Begin("LinAlg_CreateMatrixShell");

  petscCtx *ctx=(petscCtx*)Malloc(sizeof(petscCtx)); /* memory leak! to change... */
  ctx->ctx = myCtx;
  ctx->fct = myMult;
  MatCreateShell(PETSC_COMM_WORLD,n,m,PETSC_DETERMINE,
		 PETSC_DETERMINE,(void*)ctx,&A->M);
  MatShellSetOperation(A->M,MATOP_MULT,(void(*)())petscMult);

  GetDP_End ;
}

/* Destroy */

void LinAlg_DestroySolver(gSolver *Solver){

  GetDP_Begin("LinAlg_DestroySolver");

#if ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR>=2))
  ierr = KSPDestroy(Solver->ksp); MYCHECK(ierr);
#else
  ierr = SLESDestroy(Solver->sles); MYCHECK(ierr);
#endif

  GetDP_End ;
}

void LinAlg_DestroyVector(gVector *V){

  GetDP_Begin("LinAlg_DestroyVector");

  ierr = VecDestroy(V->V); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_DestroyMatrix(gMatrix *M){

  GetDP_Begin("LinAlg_DestroyMatrix");

  ierr = MatDestroy(M->M); MYCHECK(ierr);

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

  ierr = VecCopy(V1->V, V2->V) ; MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2){

  GetDP_Begin("LinAlg_CopyMatrix");

  ierr = MatCopy(M1->M, M2->M, SAME_NONZERO_PATTERN) ; MYCHECK(ierr);

  GetDP_End ;
}

/* Zero */

void LinAlg_ZeroScalar(gScalar *S){

  GetDP_Begin("LinAlg_ZeroScalar");

  S->s = 0. ;

  GetDP_End ;
}

void LinAlg_ZeroVector(gVector *V){
  PetscScalar zero = 0.0 ;

  GetDP_Begin("LinAlg_ZeroVector");

  ierr = VecSet(&zero,V->V); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_ZeroMatrix(gMatrix *M){

  GetDP_Begin("LinAlg_ZeroMatrix");

  ierr = MatZeroEntries(M->M); MYCHECK(ierr);

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
  PetscScalar tmp ;
  double a, b ;  

  GetDP_Begin("LinAlg_ScanVector");
  
  ierr = VecGetSize(V->V, &n); MYCHECK(ierr);
  for(i=0 ; i<n ; i++){
#if PETSC_USE_COMPLEX
    fscanf(file, "%lf %lf", &a, &b) ;
    tmp = a + PETSC_i * b ;
#else
    fscanf(file, "%lf", &a) ;
    tmp = a ;
#endif
    ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); MYCHECK(ierr);
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

  ierr = VecGetSize(V->V, &n); MYCHECK(ierr);
  fread(V->V, sizeof(PetscScalar), n, file);

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
  PetscScalar *tmp ;
  int     i, n ;

  GetDP_Begin("LinAlg_PrintVector");

  ierr = VecGetLocalSize(V->V, &n); MYCHECK(ierr);
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);

  for (i=0 ; i<n ; i++){
#if PETSC_USE_COMPLEX
    fprintf(file, "%.16g %.16g\n", real(tmp[i]), imag(tmp[i])) ;
#else
    fprintf(file, "%.16g\n", tmp[i]) ;
#endif
  }
  fflush(file) ;

  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);

  GetDP_End ;
} 

void LinAlg_PrintMatrix(FILE *file, gMatrix *M){

  GetDP_Begin("LinAlg_PrintMatrix");
  
  /*
  ierr = MatView(M->M,PETSC_VIEWER_STDOUT_WORLD); MYCHECK(ierr);
  */

  GetDP_End ;
}

/* Write */

void LinAlg_WriteScalar(FILE *file, gScalar *S){

  GetDP_Begin("LinAlg_WriteScalar");

  Msg(ERROR, "'LinAlg_WriteScalar' not yet implemented");

  GetDP_End ;
}

void LinAlg_WriteVector(FILE *file, gVector *V){
  PetscScalar *tmp ;
  int n ;

  GetDP_Begin("LinAlg_WriteVector");

  ierr = VecGetLocalSize(V->V, &n); MYCHECK(ierr);
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
  safe_fwrite(tmp, sizeof(PetscScalar), n, file);
  fprintf(file, "\n");
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);

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

  ierr = VecGetSize(V->V, i); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high){

  GetDP_Begin("LinAlg_GetLocalVectorRange");

  ierr = VecGetOwnershipRange(V->V, low, high) ; MYCHECK(ierr);

  GetDP_End ;

}

void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j){

  GetDP_Begin("LinAlg_GetMatrixSize");

  ierr = MatGetSize(M->M, i, j); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high){

  GetDP_Begin("LinAlg_GetLocalMatrixRange");

  ierr = MatGetOwnershipRange(M->M, low, high) ; MYCHECK(ierr);

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
  PetscScalar *tmp ;

  GetDP_Begin("LinAlg_GetScalarInVector");

  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
  S->s = tmp[i] ;
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_GetDoubleInVector(double *d, gVector *V, int i){
  PetscScalar *tmp ;

  GetDP_Begin("LinAlg_GetDoubleInVector");

  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
#if PETSC_USE_COMPLEX
  *d = real(tmp[i]) ;
#else
  *d = tmp[i] ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i){
  PetscScalar *tmp ;

  GetDP_Begin("LinAlg_GetAbsDoubleInVector");

  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
#if PETSC_USE_COMPLEX
  *d = fabs(real(tmp[i])) ;
#else
  *d = fabs(tmp[i]) ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){
  PetscScalar *tmp ;

  GetDP_Begin("LinAlg_GetComplexInVector");

  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
#if PETSC_USE_COMPLEX
  *d1 = real(tmp[i]) ;
  *d2 = imag(tmp[i]) ;
#else
  *d1 = (double)tmp[i] ;
  *d2 = (double)tmp[j] ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);

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

void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1){

  GetDP_Begin("LinAlg_GetColumnInMatrix");

  Msg(ERROR, "'LinAlg_GetColumnInMatrix' not yet implemented");  

  GetDP_End ;
}

void LinAlg_GetMatrixContext(gMatrix *A, void **myCtx){

  GetDP_Begin("LinAlg_GetMatrixContext");

  petscCtx *ctx;
  MatShellGetContext(A->M,(void**)&ctx);
  *myCtx = ctx->ctx;
  
  GetDP_End;
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

void LinAlg_SetVector(gVector *V, double *v){
  PetscScalar tmp ;
  int i, n;

  GetDP_Begin("LinAlg_SetVector");

  ierr = VecGetLocalSize(V->V, &n);  MYCHECK(ierr) ;
  for (i=0;i<n;i++){
    tmp = v[i]; 
    ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); MYCHECK(ierr);
  }

  GetDP_End ;
}

void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_SetScalarInVector");

  ierr = VecSetValues(V->V, 1, &i, &S->s, ADD_VALUES); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_SetDoubleInVector(double d, gVector *V, int i){
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_SetDoubleInVector");

  tmp = d ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j){
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_SetComplexInVector");

#if PETSC_USE_COMPLEX
  tmp = d1 + PETSC_i * d2 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); MYCHECK(ierr);
#else
  tmp = d1 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); MYCHECK(ierr);
  tmp = d2 ;
  ierr = VecSetValues(V->V, 1, &j, &tmp, INSERT_VALUES); MYCHECK(ierr);
#endif

  GetDP_End ;
}

void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_SetScalarInMatrix");

  ierr = MatSetValues(M->M, 1, &i, 1, &j, &S->s, INSERT_VALUES); MYCHECK(ierr);

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

void LinAlg_DummyVector(gVector *V){

  GetDP_Begin("LinAlg_DummyVector");

  DummyDof = Current.DofData->DummyDof;
  if (DummyDof == NULL) GetDP_End ;

  Msg(ERROR, "'LinAlg_DummyVector' not yet implemented");  

  GetDP_End ;
}

void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i){

  GetDP_Begin("LinAlg_AddScalarInVector");

  ierr = VecSetValues(V->V, 1, &i, &S->s, ADD_VALUES); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_AddDoubleInVector(double d, gVector *V, int i){
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_AddDoubleInVector");

  tmp = d ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j){
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_AddComplexInVector");

#if PETSC_USE_COMPLEX
  tmp = d1 + PETSC_i * d2 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); MYCHECK(ierr);
#else
  tmp = d1 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); MYCHECK(ierr);
  tmp = d2 ;
  ierr = VecSetValues(V->V, 1, &j, &tmp, ADD_VALUES); MYCHECK(ierr);
#endif

  GetDP_End ;
}

void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){

  GetDP_Begin("LinAlg_AddScalarInMatrix");

  ierr = MatSetValues(M->M, 1, &i, 1, &j, &S->s, ADD_VALUES); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j){
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_AddDoubleInMatrix");

  tmp = d ;
  ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_AddComplexInMatrix");

#if PETSC_USE_COMPLEX
  tmp = d1 + PETSC_i * d2 ;
  ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); MYCHECK(ierr);
#else
  if(d1){
    tmp = d1 ;
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); MYCHECK(ierr);
    ierr = MatSetValues(M->M, 1, &k, 1, &l, &tmp, ADD_VALUES); MYCHECK(ierr);
  }
  if(d2){
    tmp = -d2 ;
    ierr = MatSetValues(M->M, 1, &i, 1, &l, &tmp, ADD_VALUES); MYCHECK(ierr);
    tmp = d2 ;
    ierr = MatSetValues(M->M, 1, &k, 1, &j, &tmp, ADD_VALUES); MYCHECK(ierr);
  }
#endif

  GetDP_End ;
}

void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3){
  PetscScalar tmp=1.0 ;

  GetDP_Begin("LinAlg_AddVectorVector");

  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; MYCHECK(ierr);
  }
  else if(V3==V2){
    ierr = VecAXPY(&tmp, V1->V, V2->V) ; MYCHECK(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddVectorVector'");  

  GetDP_End ;
}

void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){
  PetscScalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_AddvectorProdVectorDouble");

  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; MYCHECK(ierr);
  }
  else if(V3==V2){
    ierr = VecAYPX(&tmp, V1->V, V2->V) ; MYCHECK(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");  

  GetDP_End ;
}

void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  PetscScalar tmp=1.0 ;

  GetDP_Begin("LinAlg_AddMatrixMatrix");

  if(M3==M1){
    ierr = MatAXPY(&tmp, M2->M, M1->M, SAME_NONZERO_PATTERN) ; MYCHECK(ierr);
  }
  else if(M3==M2){
    ierr = MatAXPY(&tmp, M1->M, M2->M, SAME_NONZERO_PATTERN) ; MYCHECK(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_AddMatrixMatrix'");  

  GetDP_End ;
}

void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){
  PetscScalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_AddMatrixProdMatrixDouble");

  if(M3==M1){
    ierr = MatAXPY(&tmp, M2->M, M1->M, SAME_NONZERO_PATTERN) ; MYCHECK(ierr);
  }
  else if(M3==M2){
    ierr = MatAYPX(&tmp, M1->M, M2->M) ; MYCHECK(ierr);
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
  PetscScalar tmp=-1.0 ;

  GetDP_Begin("LinAlg_SubVectorVector");

  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; MYCHECK(ierr);
  }
  else if(V3==V2){
    ierr = VecAYPX(&tmp, V1->V, V2->V) ; MYCHECK(ierr);
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
  PetscScalar tmp ;
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
    ierr = VecScale(&S->s, V1->V) ; MYCHECK(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdVectorScalar'");

  GetDP_End ;
}

void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2){
  PetscScalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_ProdVectorDouble");

  if(V2==V1){
    ierr = VecScale(&tmp, V1->V) ; MYCHECK(ierr);
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
  PetscScalar tmp ;

  GetDP_Begin("LinAlg_ProdVectorVector");

  ierr = VecDot(V1->V, V2->V, &tmp) ; MYCHECK(ierr);
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
    ierr = MatMult(M->M, V1->V, V2->V) ; MYCHECK(ierr);

  GetDP_End ;
}

void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){

  GetDP_Begin("LinAlg_ProdMatrixScalar");

  if(M2==M1){
    ierr = MatScale(&S->s, M1->M) ; MYCHECK(ierr);
  }
  else
    Msg(ERROR, "Wrong arguments in 'LinAlg_ProdMatrixScalar'");

  GetDP_End ;
}

void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){
  PetscScalar tmp ;
  tmp = d ;

  GetDP_Begin("LinAlg_ProdMatrixDouble");

  if(M2==M1){
    ierr = MatScale(&tmp, M1->M) ; MYCHECK(ierr);
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

  ierr = MatAssemblyBegin(M->M, MAT_FINAL_ASSEMBLY); MYCHECK(ierr);
  ierr = MatAssemblyEnd(M->M, MAT_FINAL_ASSEMBLY); MYCHECK(ierr);  

  GetDP_End ;
}

void LinAlg_AssembleVector(gVector *V){

  GetDP_Begin("LinAlg_AssembleVector");

  ierr = VecAssemblyBegin(V->V); MYCHECK(ierr);
  ierr = VecAssemblyEnd(V->V); MYCHECK(ierr);

  GetDP_End ;
}

/* FMM interface routine */

static int ii = 0;

int LinAlg_ApplyFMM(void *ptr, Vec xin, Vec xout){

  static Vec DTAxi ;
  PetscScalar *tmpV, tmp, mone = -1.0 ;
  double *x, *y ;
  int i, n;

  GetDP_Begin("LinAlg_ApplyFMM") ;

  ierr = VecCopy(xin, xout) ; MYCHECK(ierr) ;
  ierr = VecDuplicate(xin, &DTAxi); MYCHECK(ierr) ;

  ierr = PetscPrintf(PETSC_COMM_WORLD,"iteration %d xin vector:\n",ii); MYCHECK(ierr);
  ierr = VecView(xin,PETSC_VIEWER_STDOUT_WORLD); MYCHECK(ierr);

  ierr = VecGetLocalSize(xin, &n);  MYCHECK(ierr) ;
  ierr = VecGetArray(xin, &tmpV);  MYCHECK(ierr) ;
 
  if (!(ii%2)){    
#if PETSC_USE_COMPLEX
    x   = (double*)Malloc(2*n*sizeof(double));
    y   = (double*)Calloc(2*n,sizeof(double)) ;
    for(i = 0 ; i < n ; i++){    
      x[2*i]   = real(tmpV[i]) ;
      x[2*i+1] = imag(tmpV[i]) ;
    }
#else
    x   = (double*)Malloc(n*sizeof(double));
    y   = (double*)Calloc(n,sizeof(double)) ;
    for(i = 0 ; i < n ; i++) x[i] = tmpV[i] ;
#endif
   
    FMM_MatVectorProd( x, y ) ;
    
    for (i = 0; i < n ; i++){
#if PETSC_USE_COMPLEX   
      tmp = y[2*i] + PETSC_i* y[2*i+1] ; 
#else     
      tmp = y[i] ;
#endif
      VecSetValues(DTAxi, 1, &i, &tmp, INSERT_VALUES);
    }    
  }
  else{
     ierr = VecAXPY(&mone,DTAxi, xout);  MYCHECK(ierr) ;    
 }

  /*
    ierr = PetscPrintf(PETSC_COMM_WORLD,"iteration %d DTAxi vector:\n",ii); MYCHECK(ierr);
    ierr = VecView(DTAxi,PETSC_VIEWER_STDOUT_WORLD);MYCHECK(ierr);
    ierr = PetscPrintf(PETSC_COMM_WORLD,"iteration %d xout vector:\n",ii);MYCHECK(ierr);
    ierr = VecView(xout,PETSC_VIEWER_STDOUT_WORLD);MYCHECK(ierr); 
  */

  ierr = VecRestoreArray(xin, &tmpV); MYCHECK(ierr);
  ierr = VecAssemblyEnd(xin); MYCHECK(ierr);
  ierr = VecAssemblyEnd(xout); MYCHECK(ierr);
  Free(x);
  Free(y);
 
  ii++;
  printf("ITERATIONS! %d %d\n",ii,n);
  GetDP_Return(0);
}

void LinAlg_AddFMMDTAx( Vec xin, Vec xout ){

  PetscScalar *V, tmp ;
  double *x, *y ;
  int i, n ;

  GetDP_Begin("LinAlg_AddFMMDTAx") ;

  ierr = VecGetLocalSize(xin, &n);  MYCHECK(ierr) ;
  ierr = VecGetArray(xin, &V);  MYCHECK(ierr) ;
  ierr = VecRestoreArray(xin, &V); MYCHECK(ierr);

#if PETSC_USE_COMPLEX
  x   = (double*)Malloc(2*n*sizeof(double));
  y   = (double*)Calloc(2*n,sizeof(double)) ;
  for(i = 0 ; i < n ; i++){    
    x[2*i]   = real(V[i]) ;
    x[2*i+1] = imag(V[i]) ;
  }
#else
  x   = (double*)Malloc(n*sizeof(double));
  y   = (double*)Calloc(n,sizeof(double)) ;
  for(i = 0 ; i < n ; i++) x[i] = V[i] ;
#endif
  
  FMM_MatVectorProd( x, y ) ; /* y contains the DTAxi values */
  
  for (i = 0; i < n ; i++){
#if PETSC_USE_COMPLEX   
    tmp = y[2*i] + PETSC_i* y[2*i+1] ; 
#else     
    tmp = y[i] ;
#endif
    ierr = VecSetValues(xout, 1, &i, &tmp, ADD_VALUES); MYCHECK(ierr);
  }    

  ierr = VecRestoreArray(xin, &V); MYCHECK(ierr) ;
  ierr = VecAssemblyEnd(xin); MYCHECK(ierr) ;
  ierr = VecAssemblyEnd(xout); MYCHECK(ierr) ;
  Free(x);
  Free(y);
 
  GetDP_End;
}

int LinAlg_ApplyFMMMonitor(KSP ksp, int it,double rnorm,void *dummy){

  Vec      x, rhs, DTAxi;
  /* Vec      Residual, t, v ; */
  PetscScalar *tmpV, tmp, mone = -1.0, zero = 0.0 ;
  double *x_it, *y_it ;
  int i, n;

 GetDP_Begin("LinAlg_ApplyFMMMonitor") ;

 /* Build the solution vector */

 ierr = KSPBuildSolution(ksp,PETSC_NULL, &x); MYCHECK(ierr) ;

 ierr = VecDuplicate(x, &DTAxi); MYCHECK(ierr);
 ierr = VecSet(&zero,DTAxi) ; MYCHECK(ierr);

 ierr = VecGetLocalSize(x, &n);  MYCHECK(ierr) ;
 ierr = VecGetArray(x, &tmpV);  MYCHECK(ierr) ;
  
#if PETSC_USE_COMPLEX
  x_it   = (double*)Malloc(2*n*sizeof(double));
  y_it   = (double*)Calloc(2*n,sizeof(double)) ;
  for(i = 0 ; i < n ; i++){    
    x_it[2*i]   = real(tmpV[i]) ;
    x_it[2*i+1] = imag(tmpV[i]) ;
  }
#else
  x_it = (double*)Malloc(n*sizeof(double));
  y_it   = (double*)Calloc(n, sizeof(double)) ;
  for(i = 0 ; i < n ; i++) x_it[i] = tmpV[i] ;
#endif
  ierr = VecRestoreArray(x, &tmpV); MYCHECK(ierr);

  FMM_MatVectorProd( x_it, y_it ) ;

  for(i = 0 ; i < n ; i++){
#if PETSC_USE_COMPLEX   
    tmp = y_it[2*i] + PETSC_i* y_it[2*i+1] ; 
#else     
    tmp = y_it[i] ;
#endif
    ierr = VecSetValues(DTAxi, 1, &i, &tmp, INSERT_VALUES); MYCHECK(ierr);
  }

  ierr = KSPGetRhs(ksp, &rhs); MYCHECK(ierr) ;
  ierr = VecAYPX(&mone, DTAxi, rhs);MYCHECK(ierr);
#if ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR<2))
  ierr = KSPSetRhs(ksp, rhs); MYCHECK(ierr);
#endif

  /* ierr = VecAssemblyEnd(rhs); MYCHECK(ierr); */
  ierr = VecDestroy(DTAxi); MYCHECK(ierr);

  /*
  ierr = PetscPrintf(PETSC_COMM_WORLD,"iteration %d rhs vector:\n",it); MYCHECK(ierr);
  ierr = VecView(rhs,PETSC_VIEWER_STDOUT_WORLD); MYCHECK(ierr);

  ierr = VecDuplicate(x, &t); MYCHECK(ierr);
  ierr = VecSet(&zero,t); MYCHECK(ierr); 
  ierr = VecDuplicate(x, &v); MYCHECK(ierr); 
  ierr = VecSet(&zero,v); MYCHECK(ierr);  
  ierr = KSPBuildResidual(ksp, t, v, &Residual);
  */

  ierr = PetscPrintf(PETSC_COMM_WORLD,"iteration %d KSP Residual norm %14.12e \n",
		     it, rnorm); MYCHECK(ierr);

  GetDP_Return(0);
}

/* FMM */

void LinAlg_FMMMatVectorProd(gVector *V1, gVector *V2){

  GetDP_Begin("LinAlg_MatVectorProdVector");

  Msg(ERROR, "'LinAlg_FMMMatVectorProd' not yet implemented");  

  GetDP_End ;
}

/* Solve */

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){

  int its, RankCpu ;

  /*
  Vec diag, x, r, t,v,residual ;
  int i,n ;
  PetscScalar *tmpV ;
  */

  GetDP_Begin("LinAlg_Solve");

  /* Should be done only if the structure and/or the value of the elements change */

  /* Scaling */
  /*  
  VecDuplicate(X->V, &diag);
  MatGetDiagonal(A->M, diag);
  VecReciprocal(diag); 
  MatDiagonalScale(A->M, diag, PETSC_NULL);
  VecPointwiseMult(B->V, diag, B->V);
  */

#if ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR>=2))

  /* Should be done only once */
  if (! Solver->ksp) {
    ierr = KSPCreate(PETSC_COMM_WORLD, &Solver->ksp); MYCHECK(ierr);

    ierr = KSPSetOperators(Solver->ksp, A->M, A->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
    ierr = KSPSetFromOptions(Solver->ksp); MYCHECK(ierr);
  }

  /* Todo everytime */

  if (Flag_FMM){
    ierr = KSPGetPC(Solver->ksp, &Solver->pc); MYCHECK(ierr);
    /*
    ierr = PCSetType(Solver->pc,PCNONE);MYCHECK(ierr);
    ierr = PCSetType(Solver->pc,PCSHELL);MYCHECK(ierr);
    */
 
    /* put this for example in ~/.petscrc:
    ierr = KSPSetTolerances(Solver->ksp,1.e-9,PETSC_DEFAULT,PETSC_DEFAULT, 1000);MYCHECK(ierr);
    ierr = KSPGMRESSetRestart(Solver->ksp, 30);MYCHECK(ierr);
    */   

    /*
    ierr = PCShellSetName(Solver->pc,"FMM");MYCHECK(ierr);
    ierr = PCShellSetApply(Solver->pc, LinAlg_ApplyFMM, PETSC_NULL);MYCHECK(ierr) ;
    ierr = KSPSetMonitor(Solver->ksp, LinAlg_ApplyFMMMonitor, PETSC_NULL, 0);MYCHECK(ierr) ;    
    */
  }

  ierr = KSPSolve(Solver->ksp, B->V, X->V); MYCHECK(ierr);
  its = KSPGetIterationNumber (Solver->ksp, &its);
  ierr = KSPView(Solver->ksp,PETSC_VIEWER_STDOUT_WORLD);MYCHECK(ierr); 
  
#else

  /* Should be done only once */
  if (! Solver->sles) {
    ierr = SLESCreate(PETSC_COMM_WORLD, &Solver->sles); MYCHECK(ierr);

    /* Explicitly set the initial solution */
    /*
      KSP ksp;
      SLESGetKSP(Solver->sles,&ksp);
      KSPSetInitialGuessNonzero(ksp,PETSC_TRUE);
    */

    /* Should be done only if the structure and/or the value of the elements change */
    /* if (!ReUse_ILU) */

    ierr = SLESSetOperators(Solver->sles, A->M, A->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
    ierr = SLESSetFromOptions(Solver->sles); MYCHECK(ierr);
  }

  /* Todo everytime */

  if (Flag_FMM){
    ierr = SLESGetPC(Solver->sles, &Solver->pc); MYCHECK(ierr);
    /*
    ierr = PCSetType(Solver->pc,PCNONE);MYCHECK(ierr);
    ierr = PCSetType(Solver->pc,PCSHELL);MYCHECK(ierr);
    */
    ierr = SLESGetKSP(Solver->sles, &Solver->ksp); MYCHECK(ierr);
 
    /* put this for example in ~/.petscrc:
    ierr = KSPSetTolerances(Solver->ksp,1.e-9,PETSC_DEFAULT,PETSC_DEFAULT, 1000);MYCHECK(ierr);
    ierr = KSPGMRESSetRestart(Solver->ksp, 30);MYCHECK(ierr);
    */   

    /*
    ierr = PCShellSetName(Solver->pc,"FMM");MYCHECK(ierr);
    ierr = PCShellSetApply(Solver->pc, LinAlg_ApplyFMM, PETSC_NULL);MYCHECK(ierr) ;
    ierr = KSPSetMonitor(Solver->ksp, LinAlg_ApplyFMMMonitor, PETSC_NULL, 0);MYCHECK(ierr) ;    
    */
  }

  ierr = SLESSolve(Solver->sles, B->V, X->V, &its); MYCHECK(ierr);

  ierr = SLESView(Solver->sles,PETSC_VIEWER_STDOUT_WORLD);MYCHECK(ierr); 

#endif /* ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR>=2)) */

  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);

  if (!RankCpu) Msg(PETSC, "%d iterations", its) ;

  /* unscale */
  /*  VecReciprocal(diag); 
  MatDiagonalScale(A->M, diag, PETSC_NULL);
  VecPointwiseMult(newb, diag, B->V); */

  GetDP_End ;
}

#endif
