#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

#if _PETSC

/* This is the interface library for the PETSC solver */

/* Encore assez experimental... Aucune desallocation 
   n'est effectuee. */
/* Mais si, mais si */
#include "LinAlg.h"
#include "Message.h"

static int  ierr, its, i_Start, i_End ;
static int  SolverInitialized=0 ;

/* Initialize */

void gInitialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu){
  MPI_Init(argc, argv);
  MPI_Comm_size(MPI_COMM_WORLD, NbrCpu);
  MPI_Comm_rank(MPI_COMM_WORLD, RankCpu);
}

void gInitializeSolver(int* argc, char*** argv, int *NbrCpu, int *RankCpu){
  /* This function detects if MPI is initialized */
  PetscInitialize(argc, argv, PETSC_NULL, PETSC_NULL);
  SolverInitialized = 1;
  /* just in case... */
  MPI_Comm_size(PETSC_COMM_WORLD, NbrCpu);
  MPI_Comm_rank(PETSC_COMM_WORLD, RankCpu);
}

/* Finalize */

void gFinalize(void){
  /* a retester --geuz*/
  int flag;
  MPI_Initialized(&flag);
  if(flag) MPI_Finalize();
}

void gFinalizeSolver(void){
  if(SolverInitialized) PetscFinalize();
}

/* Sequential */

void gSequentialBegin(void){
  ierr = PetscSequentialPhaseBegin(MPI_COMM_WORLD, 1); CHKERRA(ierr);
}

void gSequentialEnd(void){
  ierr = PetscSequentialPhaseEnd(MPI_COMM_WORLD, 1); CHKERRA(ierr);
}

/* Create */

void gCreateSolver(gSolver *Solver, char * SolverDataFileName){
}
void gCreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part){
#ifdef _METIS
  int NbrCpu, RankCpu;

  MPI_Comm_size(MPI_COMM_WORLD, &NbrCpu);
  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);
  if(NbrPart != NbrCpu){
    Msg(WARNING, "%d Partitions on %d CPU", NbrPart, NbrCpu);
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
}
void gCreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
		   int NbrPart, int *Part, int *Nnz){

  int NbrCpu, RankCpu;
  /*
  ierr = MatCreateSeqAIJ(PETSC_COMM_SELF, n, m, 20, PETSC_NULL, &M->M); CHKERRA(ierr);
  ierr = MatCreateMPIBAIJ(PETSC_COMM_WORLD, 1, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         30, PETSC_NULL, 30, PETSC_NULL, &M->M); CHKERRA(ierr); 
  ierr = MatCreateMPIRowbs(PETSC_COMM_WORLD, PETSC_DECIDE, n, 30, PETSC_NULL, PETSC_NULL, &M->M);
  */
#ifdef _METIS
  MPI_Comm_size(PETSC_COMM_WORLD, &NbrCpu);
  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);

  if(NbrPart != NbrCpu) Msg(ERROR, "%d Partitions on %d CPU", NbrPart, NbrCpu);

  i_Start = Part[RankCpu]-1 ;
  i_End   = Part[RankCpu+1]-1 ;
  ierr = MatCreateMPIAIJ(PETSC_COMM_WORLD,
			 i_End-i_Start, i_End-i_Start, 
			 n, m, 
			 1, &Nnz[i_Start], 
			 1, &Nnz[i_Start], 
			 &M->M); CHKERRA(ierr); 
  Msg(PETSC, "Matrix Creation : %d->%d", i_Start, i_End-1);
#else
  ierr = MatCreateMPIAIJ(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         30, PETSC_NULL, 30, PETSC_NULL, &M->M); CHKERRA(ierr); 
  ierr = MatGetOwnershipRange(M->M, &i_Start, &i_End) ; CHKERRA(ierr);
  Msg(PETSC, "Matrix Creation : %d->%d", i_Start, i_End);
#endif
}


/* Destroy */

void gDestroySolver(gSolver *Solver){
  ierr = SLESDestroy(Solver->sles); CHKERRA(ierr);
  ierr = PCDestroy(Solver->pc); CHKERRA(ierr);
  ierr = KSPDestroy(Solver->ksp); CHKERRA(ierr);
}
void gDestroyVector(gVector *V){
  ierr = VecDestroy(V->V); CHKERRA(ierr);
}
void gDestroyMatrix(gMatrix *M){
  ierr = MatDestroy(M->M); CHKERRA(ierr);
}

/* Copy */

void gCopyScalar(gScalar *S1, gScalar *S2){
  S1->s = S2->s ;
}
void gCopyVector(gVector *V1, gVector *V2){
  ierr = VecCopy(V1->V, V2->V) ; CHKERRA(ierr);
}
void gCopyMatrix(gMatrix *M1, gMatrix *M2){
  ierr = MatCopy(M1->M, M2->M, SAME_NONZERO_PATTERN) ; CHKERRA(ierr);
}

/* Zero */

void gZeroScalar(gScalar *S){
  S->s = 0. ;
}
void gZeroVector(gVector *V){
  Scalar zero = 0.0 ;
  ierr = VecSet(&zero,V->V); CHKERRA(ierr);
}
void gZeroMatrix(gMatrix *M){
  ierr = MatZeroEntries(M->M); CHKERRA(ierr);
}

/* Scan */

void gScanScalar(FILE *file, gScalar *S){
#if PETSC_USE_COMPLEX
  double a, b ;
  fscanf(file, "%lf %lf", &a, &b) ;
  S->s = a + PETSC_i * b ;
#else
  fscanf(file, "%lf", &S->s) ;
#endif
}
void gScanVector(FILE *file, gVector *V) {
#if PETSC_USE_COMPLEX
  int i, n ;
  Scalar tmp ;
  double a, b ;  
  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  for(i=0 ; i<n ; i++){
    fscanf(file, "%lf %lf", &a, &b) ;
    tmp = a + PETSC_i * b ;
    ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
  }
#else
  int i, n ;
  Scalar tmp ;
  double a ;
  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  for(i=0 ; i<n ; i++){
    fscanf(file, "%lf", &a) ;
    tmp = a ;
    ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
  }
#endif
}
void gScanMatrix(FILE *file, gMatrix *M){
  Msg(ERROR, "'gScanMatrix' not Implemented (yet)");  
}

/* Read */

void gReadScalar(FILE *file, gScalar *S){
  Msg(ERROR, "'gReadScalar' not Implemented (yet)");
}
void gReadVector(FILE *file, gVector *V) {
  int n ;
  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  fread(V->V, sizeof(Scalar), n, file);
}
void gReadMatrix(FILE *file, gMatrix *M){
  Msg(ERROR, "'gReadMatrix' not Implemented (yet)");  
}

/* Print */

void gPrintScalar(FILE *file, gScalar *S){
#if PETSC_USE_COMPLEX
  fprintf(file, "%.16g %.16g", real(S->s), imag(S->s)) ;
#else
  fprintf(file, "%.16g", S->s) ;
#endif
}


/* 
void gPrintVector(FILE *file, gVector *V){
  int    i, n ;
  Vec    seqvec;
  IS     is;
  VecScatter ctx;
  Scalar *tmp ;
  
  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  ierr = VecCreateSeq(PETSC_COMM_SELF,n,&seqvec); 
  ierr = ISCreateStride(PETSC_COMM_SELF,n,0,1,&is); CHKERRA(ierr);
  ierr = VecScatterCreate(V->V,is,seqvec,is,&ctx); CHKERRA(ierr);
  ierr = VecScatterBegin(V->V,seqvec,INSERT_VALUES,SCATTER_FORWARD,ctx); CHKERRA(ierr);
  ierr = VecScatterEnd(V->V,seqvec,INSERT_VALUES,SCATTER_FORWARD,ctx); CHKERRA(ierr);
  ierr = VecGetArray(seqvec, &tmp); CHKERRA(ierr);
  
  for (i=0 ; i<n ; i++){
#if PETSC_USE_COMPLEX
    ierr = PetscFPrintf(PETSC_COMM_WORLD, file, "%.16g %.16g\n", 
			real(tmp[i]), imag(tmp[i])) ; CHKERRA(ierr);
#else
    ierr = PetscFPrintf(PETSC_COMM_WORLD, file, "%.16g\n", tmp[i]) ; CHKERRA(ierr);
#endif
  }
  ierr = VecRestoreArray(seqvec, &tmp); CHKERRA(ierr);
  ierr = VecDestroy(seqvec); CHKERRA(ierr);
} 
*/

void gPrintVector(FILE *file, gVector *V){
  Scalar *tmp ;
  int     i, n ;

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
} 

void gPrintMatrix(FILE *file, gMatrix *M){
  Msg(ERROR, "'gPrintMatrix' not Implemented (yet)");  
}

/* Write */

void gWriteScalar(FILE *file, gScalar *S){
  Msg(ERROR, "'gWriteScalar' not Implemented (yet)");
}
void gWriteVector(FILE *file, gVector *V){
  Scalar *tmp ;
  int n ;

  ierr = VecGetSize(V->V, &n); CHKERRA(ierr);
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
  fwrite(tmp, sizeof(Scalar), n, file);
  fprintf(file, "\n");
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);
}
void gWriteMatrix(FILE *file, gMatrix *M){
  Msg(ERROR, "'gWriteMatrix' not Implemented (yet)");  
}

/* Get */

void gGetVectorSize(gVector *V, int *i){
  ierr = VecGetSize(V->V, i); CHKERRA(ierr);
}
void gGetMatrixSize(gMatrix *M, int *i, int *j){
  ierr = MatGetSize(M->M, i, j); CHKERRA(ierr);
}
void gGetDoubleInScalar(double *d, gScalar *S){
#if PETSC_USE_COMPLEX
  *d = real(S->s) ;
#else
  *d = S->s ;
#endif
}
void gGetComplexInScalar(double *d1, double *d2, gScalar *S){
#if PETSC_USE_COMPLEX
  *d1 = real(S->s) ;
  *d2 = imag(S->s) ;
#else
  Msg(ERROR, "'gGetComplexInScalar' not Available with this Solver");  
#endif
}
void gGetScalarInVector(gScalar *S, gVector *V, int i){
  Scalar *tmp ;
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
  S->s = tmp[i] ;
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);
}
void gGetDoubleInVector(double *d, gVector *V, int i){
  Scalar *tmp ;
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
#if PETSC_USE_COMPLEX
  *d = real(tmp[i]) ;
#else
  *d = tmp[i] ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);
}
void gGetAbsDoubleInVector(double *d, gVector *V, int i){
  Scalar *tmp ;
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
#if PETSC_USE_COMPLEX
  *d = fabs(real(tmp[i])) ;
#else
  *d = fabs(tmp[i]) ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);
}
void gGetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){
  Scalar *tmp ;
  ierr = VecGetArray(V->V, &tmp); CHKERRA(ierr);
#if PETSC_USE_COMPLEX
  *d1 = real(tmp[i]) ;
  *d2 = imag(tmp[i]) ;
#else
  *d1 = (double)tmp[i] ;
  *d2 = (double)tmp[j] ;
#endif
  ierr = VecRestoreArray(V->V, &tmp); CHKERRA(ierr);
}
void gGetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  Msg(ERROR, "'gGetScalarInMatrix' not Implemented (yet)");  
}
void gGetDoubleInMatrix(double *d, gMatrix *M, int i, int j){
  Msg(ERROR, "'gGetDoubleInMatrix' not Implemented (yet)");  
}
void gGetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){
  Msg(ERROR, "'gGetComplexInMatrix' not Implemented (yet)");  
}

/* Set */

void gSetScalar(gScalar *S, double *d){
#if PETSC_USE_COMPLEX
  S->s = d[0] + (PETSC_i * d[1]) ;
#else
  S->s = d[0] ;
#endif
}
void gSetScalarInVector(gScalar *S, gVector *V, int i){
  ierr = VecSetValues(V->V, 1, &i, &S->s, ADD_VALUES); CHKERRA(ierr);
}
void gSetDoubleInVector(double d, gVector *V, int i){
  Scalar tmp ;
  tmp = d ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
}
void gSetComplexInVector(double d1, double d2, gVector *V, int i, int j){
  Scalar tmp ;
#if PETSC_USE_COMPLEX
  tmp = d1 + PETSC_i * d2 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
#else
  tmp = d1 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); CHKERRA(ierr);
  tmp = d2 ;
  ierr = VecSetValues(V->V, 1, &j, &tmp, INSERT_VALUES); CHKERRA(ierr);
#endif
}
void gSetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  ierr = MatSetValues(M->M, 1, &i, 1, &j, &S->s, INSERT_VALUES); CHKERRA(ierr);
}
void gSetDoubleInMatrix(double d, gMatrix *M, int i, int j){
  Msg(ERROR, "'gSetDoubleInMatrix' not Implemented (yet)");  
}
void gSetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  Msg(ERROR, "'gSetComplexInMatrix' not Implemented (yet)");  
}

/* Add */

void gAddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->s = S1->s + S2->s ;
}
void gAddScalarInVector(gScalar *S, gVector *V, int i){
  if (i_Start <= i && i < i_End){
    ierr = VecSetValues(V->V, 1, &i, &S->s, ADD_VALUES); CHKERRA(ierr);
  }
}
void gAddDoubleInVector(double d, gVector *V, int i){
  Scalar tmp ;
  if (i_Start <= i && i < i_End){
    tmp = d ;
    ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
}
void gAddComplexInVector(double d1, double d2, gVector *V, int i, int j){
  Scalar tmp ;
#if PETSC_USE_COMPLEX
  tmp = d1 + PETSC_i * d2 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); CHKERRA(ierr);
#else
  tmp = d1 ;
  ierr = VecSetValues(V->V, 1, &i, &tmp, ADD_VALUES); CHKERRA(ierr);
  tmp = d2 ;
  ierr = VecSetValues(V->V, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
#endif
}
void gAddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  if (i_Start <= i && i < i_End){
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &S->s, ADD_VALUES); CHKERRA(ierr);
  }
}
void gAddDoubleInMatrix(double d, gMatrix *M, int i, int j){
  Scalar tmp ;
  if (i_Start <= i && i < i_End){    
    tmp = d ;
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
}
void gAddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  Scalar tmp ;

#if PETSC_USE_COMPLEX
  if (i_Start <= i && i < i_End){
    tmp = d1 + PETSC_i * d2 ;
    ierr = MatSetValues(M->M, 1, &i, 1, &j, &tmp, ADD_VALUES); CHKERRA(ierr);
  }
#else
  if (!i_Start) Msg(ERROR, "AddComplexInMatrix not Ready for Complex on Multi CPU");
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
}
void gAddVectorVector(gVector *V1, gVector *V2, gVector *V3){
  Scalar tmp=1.0 ;
  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; CHKERRA(ierr);
  }
  else if(V3==V2){
    ierr = VecAXPY(&tmp, V1->V, V2->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gAddVectorVector': Wrong Arguments");  
}
void gAddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){
  Scalar tmp ;
  tmp = d ;
  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; CHKERRA(ierr);
  }
  else if(V3==V2){
    ierr = VecAYPX(&tmp, V1->V, V2->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gAddVectorProdVectorDouble': Wrong Arguments");  
}
void gAddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  Scalar tmp=1.0 ;
  if(M3==M1){
    ierr = MatAXPY(&tmp, M2->M, M1->M) ; CHKERRA(ierr);
  }
  else if(M3==M2){
    ierr = MatAXPY(&tmp, M1->M, M2->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gAddMatrixMatrix': Wrong Arguments");  
}
void gAddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){
  Scalar tmp ;
  tmp = d ;
  if(M3==M1){
    ierr = MatAXPY(&tmp, M2->M, M1->M) ; CHKERRA(ierr);
  }
  else if(M3==M2){
    ierr = MatAYPX(&tmp, M1->M, M2->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gAddMatrixMatrix': Wrong Arguments");
}

/* Sub */

void gSubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->s = S1->s - S2->s ;
}
void gSubVectorVector(gVector *V1, gVector *V2, gVector *V3){
  Scalar tmp=-1.0 ;
  if(V3==V1){
    ierr = VecAXPY(&tmp, V2->V, V1->V) ; CHKERRA(ierr);
  }
  else if(V3==V2){
    ierr = VecAYPX(&tmp, V1->V, V2->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gSubVectorVector': Wrong Arguments");  
}
void gSubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  Msg(ERROR, "'gSubMatrixMatrix' not Implemented (yet)");    
}

/* Prod */

void gProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->s = S1->s * S2->s ;
}
void gProdScalarDouble(gScalar *S1, double d, gScalar *S2){
  S2->s = S1->s * d ;
}
void gProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){
#if PETSC_USE_COMPLEX
  Scalar tmp ;
  tmp = S->s * (d1 + PETSC_i * d2) ;
  *d3 = real(tmp) ;
  *d4 = imag(tmp) ;
#else
  *d3 = S->s * d1 ;
  *d4 = S->s * d2 ;
#endif
}
void gProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){  
  if(V2==V1){
    ierr = VecScale(&S->s, V1->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gProdVectorScalar': Wrong Arguments");
}
void gProdVectorDouble(gVector *V1, double d, gVector *V2){
  Scalar tmp ;
  tmp = d ;
  if(V2==V1){
    ierr = VecScale(&tmp, V1->V) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gProdVectorDouble': Wrong Arguments");
}
void gProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){
  Msg(ERROR, "'gProdVectorComplex' not Implemented (yet)");
}
void gProdVectorVector(gVector *V1, gVector *V2, double *d){
  Scalar tmp ;
  ierr = VecDot(V1->V, V2->V, &tmp) ; CHKERRA(ierr);
#ifdef PETSC_USE_COMPLEX
  *d = real(tmp) ;
#else
  *d = tmp ;
#endif
}
void gProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){
  if(V2==V1)
    Msg(ERROR, "'gProdMatrixVector': Wrong Arguments");
  else
    ierr = MatMult(M->M, V1->V, V2->V) ; CHKERRA(ierr);
}
void gProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){
  if(M2==M1){
    ierr = MatScale(&S->s, M1->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gProdMatrixScalar': Wrong Arguments");
}
void gProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){
  Scalar tmp ;
  tmp = d ;
  if(M2==M1){
    ierr = MatScale(&tmp, M1->M) ; CHKERRA(ierr);
  }
  else
    Msg(ERROR, "'gProdMatrixDouble': Wrong Arguments");
}
void gProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2){
  Msg(ERROR, "'gProdMatrixComplex' not Implemented (yet)");
}


/* Div */

void gDivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->s = S1->s / S2->s ;
}
void gDivScalarDouble(gScalar *S1, double d, gScalar *S2){
  S2->s = S1->s / d ;
}


/* Assemble */

void gAssembleMatrix(gMatrix *M){
  ierr = MatAssemblyBegin(M->M, MAT_FINAL_ASSEMBLY); CHKERRA(ierr);
  ierr = MatAssemblyEnd(M->M, MAT_FINAL_ASSEMBLY); CHKERRA(ierr);  
  /* ierr = MatView(M->M,VIEWER_STDOUT_WORLD); */
}
void gAssembleVector(gVector *V){
  ierr = VecAssemblyBegin(V->V); CHKERRA(ierr);
  ierr = VecAssemblyEnd(V->V); CHKERRA(ierr);

  /*  
      Msg(INFO, " Proc %d : Longueur Globale  %d \n", MPI_Proc_Rank, machin1); 
      ierr = VecGetLocalSize(V->V, &machin2);
      Msg(INFO, " Proc %d : Longueur Locale  %d \n", MPI_Proc_Rank, machin2); 
      ierr = ViewerPushFormat(VIEWER_STDOUT_WORLD, VIEWER_FORMAT_ASCII_INDEX, PETSC_NULL);
      ierr = VecView(V->V,VIEWER_STDOUT_WORLD);
  */
}

/* Solve */

void gSolve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){
  ierr = SLESCreate(PETSC_COMM_WORLD, &Solver->sles); CHKERRA(ierr);
  ierr = SLESSetOperators(Solver->sles, A->M, A->M, DIFFERENT_NONZERO_PATTERN); CHKERRA(ierr);
  ierr = SLESSetFromOptions(Solver->sles); CHKERRA(ierr);      
  ierr = SLESSolve(Solver->sles, B->V, X->V, &its); CHKERRA(ierr); 
}

#endif
