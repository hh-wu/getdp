/* $Id: LianAlg_SPARSKIT-soslow.c,v 1.3 2000-10-30 01:05:48 geuzaine Exp $ */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#if _SPARSKIT

/* This is the interface library for the Default (SPARSKIT based) solver */

#include "LinAlg.h"
#include "Message.h"
#include "ualloc.h"
#include "Solver_F.h"

static char *Name_SolverFile=NULL, *Name_DefaultSolverFile="SOLVER.PAR" ;

/* Init */

void LinAlg_Initialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu){
  *NbrCpu = 1 ;
  *RankCpu = 0 ;
}
void LinAlg_InitializeSolver(int* sargc, char*** sargv, int *NbrCpu, int *RankCpu){
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
  init_solver(&Solver->Params,
	      SolverDataFileName ? SolverDataFileName :
	      (Name_SolverFile ? Name_SolverFile : Name_DefaultSolverFile)) ;
}
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part){
  V->V = (double*) Malloc (n * sizeof(double)); 
  V->N = n ;
}
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m, 
		   int NbrPart, int *Part, int *Nnz){
  int i, j = 0 ;

  M->M.T = Solver->Params.Matrix_Format;  
  M->M.N = n;
  M->M.changed = 1 ;
  M->M.ILU_Exists = 0;
  M->M.notranspose = 0 ;

  switch (M->M.T) {
  case SPARSE :
    M->M.S.a = List_Create (n, n, sizeof(double));
    M->M.S.ai = List_Create (n, n, sizeof(int));
    M->M.S.ptr = List_Create (n, n, sizeof(int));
    M->M.S.jptr = List_Create (n+1, n, sizeof(int)); 
    /* '+1' mandatory: csr_format writes 'nnz+1' in jptr[n] */
    for(i=0; i<n; i++) List_Add (M->M.S.jptr, &j);
    break;
  case DENSE :
    M->M.F.LU_Exist = 0;
    /* All Sparskit iterative algorithms were interfaced to solve 
       A^T x = b. This is silly, but... The LU algorithm is the only
       one which requires the non-transposed matrix. */
    if(M->M.T == DENSE && Solver->Params.Algorithm == LU){
      M->M.F.lu = (double*) Malloc (n * n * sizeof(double));
      M->M.notranspose = 1 ;
    }
    M->M.F.a = (double*) Malloc (n * n * sizeof(double));
    break;
  default :
    Msg(ERROR, "Unknown type of Matrix Storage Format: %d", M->M.T);
    break;
  }
}

/* Destroy */

void LinAlg_DestroySolver(gSolver *Solver){
  Msg(ERROR, "'LinAlg_DestroySolver' not Implemented (yet)");
}
void LinAlg_DestroyVector(gVector *V){
  Free(V->V);
}
void LinAlg_DestroyMatrix(gMatrix *M){
  Msg(ERROR, "'LinAlg_DestroyMatrix' not Implemented (yet)");  
}

/* Copy */

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2){
  S2->d = S1->d ;
}
void LinAlg_CopyVector(gVector *V1, gVector *V2){
  memcpy(V2->V, V1->V, V1->N*sizeof(double)) ;
}
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2){
  Msg(ERROR, "'LinAlg_CopyMatrix' not Implemented (yet)");  
}

/* Zero */

void LinAlg_ZeroScalar(gScalar *S){
  S->d = 0. ;
}
void LinAlg_ZeroVector(gVector *V){
  int i;
  for(i=0; i<V->N; i++) V->V[i] = 0.0;
}
void LinAlg_ZeroMatrix(gMatrix *M){
  int i, j = 0;

  M->M.changed = 1 ;

  switch (M->M.T) {
  case SPARSE :
    List_Reset (M->M.S.a);
    List_Reset (M->M.S.ai);
    List_Reset (M->M.S.ptr);
    List_Reset (M->M.S.jptr);
    for (i=0; i<M->M.N; i++) List_Add (M->M.S.jptr, &j);
    break;
  case DENSE :
    for(i=0; i<(M->M.N)*(M->M.N); i++) M->M.F.a[i] = 0.0;
    break;    
  }

  /* the matrix-vector product routine is buggy if there are lines
     without any element in the matrix. */
  for(i=0 ; i<M->M.N ; i++) LinAlg_AddDoubleInMatrix(0., M, i, j) ;
}

/* Scan */

void LinAlg_ScanScalar(FILE *file, gScalar *S){
  fscanf(file, "%lf", &S->d) ;
}
void LinAlg_ScanVector(FILE *file, gVector *V) {
  int i, dum ;
  for(i=0 ; i<V->N ; i++) fscanf(file, "%d %lf", &dum, &V->V[i]) ;
}
void LinAlg_ScanMatrix(FILE *file, gMatrix *M){
  int i,nnz,inb,inb2,style;
  double nb;
  
  fscanf(file,"%d %d\n", &M->M.T, &style);

  if(style != ELAP)
    Msg(ERROR, "LinAlg_ReadMatrix not ready for this type of Matrix") ;

  switch (M->M.T) {
  case SPARSE :
    List_Reset(M->M.S.jptr);
    fscanf(file,"%d %d\n", &M->M.N, &nnz);
    for(i=0 ; i<M->M.N ; i++){
      fscanf(file, " %d", &inb);
      List_Add(M->M.S.jptr, &inb);
    }
    for(i=0 ; i<nnz ; i++){
      fscanf(file, "%d %d %lf\n", &inb, &inb2, &nb);
      List_Add(M->M.S.ai, &inb);
      List_Add(M->M.S.ptr, &inb2);
      List_Add(M->M.S.a, &nb);
    }
    break;
    
  case DENSE :
    fscanf(file, "%d", &M->M.N);
    for(i=0;i<(M->M.N)*(M->M.N);i++){
      fscanf(file,"%d %d %lf\n", &inb, &inb, &M->M.F.a[i]);
    }
    break;
  }
}

/* Read */

void LinAlg_ReadScalar(FILE *file, gScalar *S){
  Msg(ERROR, "'LinAlg_ReadScalar' not Implemented (yet)");
}
void LinAlg_ReadVector(FILE *file, gVector *V) {
  fscanf(file,"%d\n", &V->N);
  LinAlg_CreateVector(V, NULL, V->N, 0, NULL) ;
  fread(V->V, sizeof(double), V->N, file);
}
void LinAlg_ReadMatrix(FILE *file, gMatrix *M){
  int   Nb, style;

  fscanf(file,"%d %d",&M->M.T, &style);
  M->M.ILU_Exists  = 0;

  switch (M->M.T) {
  case SPARSE :
    fscanf(file,"%d %d\n", &M->M.N, &Nb);

    M->M.S.ptr  = List_Create (Nb, 1, sizeof(int));
    M->M.S.ai   = List_Create (Nb, 1, sizeof(int));
    M->M.S.jptr = List_Create (M->M.N, 1, sizeof(int));
    M->M.S.a    = List_Create (Nb, 1, sizeof(double));

    fscanf(file,"%d %d %d %d %d\n", &M->M.S.ptr->nmax, &M->M.S.ptr->size, 
	   &M->M.S.ptr->incr, &M->M.S.ptr->n, &M->M.S.ptr->isorder);
    fscanf(file,"%d %d %d %d %d\n", &M->M.S.ai->nmax, &M->M.S.ai->size, 
	   &M->M.S.ai->incr, &M->M.S.ai->n, &M->M.S.ai->isorder);
    fscanf(file,"%d %d %d %d %d\n", &M->M.S.jptr->nmax, &M->M.S.jptr->size, 
	   &M->M.S.jptr->incr, &M->M.S.jptr->n, &M->M.S.jptr->isorder);
    fscanf(file,"%d %d %d %d %d\n", &M->M.S.a->nmax, &M->M.S.a->size, 
	   &M->M.S.a->incr, &M->M.S.a->n, &M->M.S.a->isorder);

    fread(M->M.S.ptr->array, sizeof(int), Nb, file);
    fread(M->M.S.ai->array, sizeof(int), Nb, file);
    fread(M->M.S.jptr->array, sizeof(int), M->M.N, file);
    fread(M->M.S.a->array, sizeof(double), Nb, file);
    break;
    
  case DENSE :
    fscanf(file,"%d\n", &M->M.N);
    M->M.F.LU_Exist = 0;
    M->M.F.a  = (double*) Malloc(M->M.N * M->M.N * sizeof(double));
    M->M.F.lu  = (double*) Malloc(M->M.N * M->M.N * sizeof(double));
    fread(M->M.F.a, sizeof(double), M->M.N * M->M.N, file);
    break ;
  }
}

/* Print */

void LinAlg_PrintScalar(FILE *file, gScalar *S){
  fprintf(file, "%.16g", S->d) ;
}
void LinAlg_PrintVector(FILE *file, gVector *V){
  int i ;
  for(i=0 ; i<V->N ; i++) fprintf(file, "%d %.16g\n", i+1, V->V[i]) ;
}
void LinAlg_PrintMatrix(FILE *file, gMatrix *M){
  int *ptr,*ai,i,j,*jptr, *ia, *ja, *ir, nnz, ierr;
  int  un=1, style=KUL;
  double *a;

  if(!M->M.N){
    Msg(WARNING, "No Element in Matrix");
    return;
  }

  switch (M->M.T) {

  case DENSE :
    fprintf(file,"%d %d\n", M->M.T, ELAP); 
    for(i=0 ; i<M->M.N ; i++)
      for(j=0 ; j<M->M.N ; j++)
	fprintf(file,"%d %d %.16g\n", i+1, j+1, M->M.F.a[i*(M->M.N)+j]);
    break;

  case SPARSE :
    
    switch(style){
      
    case ELAP : 
      fprintf(file,"%d %d\n", M->M.T, ELAP); 
      a = (double*)M->M.S.a->array;
      ai = (int*)M->M.S.ai->array;
      ptr = (int*)M->M.S.ptr->array;
      jptr = (int*)M->M.S.jptr->array;
      fprintf(file,"%d\n",M->M.N);
      fprintf(file,"%d\n",List_Nbr(M->M.S.a));
      for(i=0;i<M->M.N;i++)
	fprintf(file," %d",jptr[i]);
      fprintf(file,"\n");
      for(i=0;i<List_Nbr(M->M.S.a);i++)
	fprintf(file,"%d %d %.16g \n",ai[i],ptr[i],a[i]);
      break;
    
    case KUL :
      fprintf(file,"%d %d\n", M->M.T, KUL); 
      csr_format(&M->M.S, M->M.N);
      a  = (double*) M->M.S.a->array;
      ia = (int*) M->M.S.jptr->array;
      ja = (int*) M->M.S.ptr->array; 
      nnz = List_Nbr(M->M.S.a);
      ir = (int*) Malloc(nnz * sizeof(int));
      csrcoo_(&M->M.N, &un, &nnz, a, ja, ia, &nnz, a, ir, ja, &ierr);      
      for(i=0 ; i<nnz ; i++)
	fprintf(file,"%d  %d  %.16g\n", ir[i], ja[i], a[i]);
      restore_format(&M->M.S);
      break;
    
    default : 
      Msg(ERROR, "Unknown Printing Style for Formatted Matrix Output");
    }
    break ;
    
  default :
    Msg(ERROR, "Unknown Matrix Format for Formatted Matrix Output");

  }
}

/* Write */

void LinAlg_WriteScalar(FILE *file, gScalar *S){
  Msg(ERROR, "'LinAlg_WriteScalar' not Implemented (yet)");
}
void LinAlg_WriteVector(FILE *file, gVector *V){
  fprintf(file,"%d\n", V->N);
  fwrite(V->V, sizeof(double), V->N, file);
  fprintf(file, "\n");
}
void LinAlg_WriteMatrix(FILE *file, gMatrix *M){
  int   Nb;

  if(!M->M.N){
    Msg(WARNING, "No Element in Matrix");
    return;
  }

  fprintf(file,"%d %d\n", M->M.T, ELAP);

  switch (M->M.T) {
  case SPARSE :
    Nb = List_Nbr(M->M.S.a) ;

    fprintf(file,"%d %d\n", M->M.N, Nb);

    fprintf(file,"%d %d %d %d %d\n", M->M.S.ptr->nmax, M->M.S.ptr->size, 
	    M->M.S.ptr->incr, M->M.S.ptr->n, M->M.S.ptr->isorder);
    fprintf(file,"%d %d %d %d %d\n", M->M.S.ai->nmax, M->M.S.ai->size, 
	    M->M.S.ai->incr, M->M.S.ai->n, M->M.S.ai->isorder);
    fprintf(file,"%d %d %d %d %d\n", M->M.S.jptr->nmax, M->M.S.jptr->size, 
	    M->M.S.jptr->incr, M->M.S.jptr->n, M->M.S.jptr->isorder);
    fprintf(file,"%d %d %d %d %d\n", M->M.S.a->nmax, M->M.S.a->size, 
	    M->M.S.a->incr, M->M.S.a->n, M->M.S.a->isorder);

    fwrite(M->M.S.ptr->array, sizeof(int), Nb, file);
    fwrite(M->M.S.ai->array, sizeof(int), Nb, file);
    fwrite(M->M.S.jptr->array, sizeof(int), M->M.N, file);
    fwrite(M->M.S.a->array, sizeof(double), Nb, file);
    break;

  case DENSE :
    fprintf(file,"%d\n", M->M.N);
    fwrite(M->M.F.a, sizeof(double), M->M.N*M->M.N, file);
    break;
  }

}

/* Get */

void LinAlg_GetVectorSize(gVector *V, int *i){
  *i = V->N ;
}
void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j){
  *i = *j = M->M.N ;
}
void LinAlg_GetDoubleInScalar(double *d, gScalar *S){
  *d = S->d ;
}
void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S){
  Msg(ERROR, "'LinAlg_GetComplexInScalar' not Available with this Solver");
}
void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i){
  S->d = V->V[i] ;
}
void LinAlg_GetDoubleInVector(double *d, gVector *V, int i){
  *d = V->V[i] ;
}
void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i){
  *d = fabs(V->V[i]) ;
}
void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){
  *d1 = V->V[i] ;
  *d2 = V->V[j] ;
}
void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not Implemented (yet)");  
}
void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j){
  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not Implemented (yet)");  
}
void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){
  Msg(ERROR, "'LinAlg_GetScalarInMatrix' not Implemented (yet)");  
}

/* Set */

void LinAlg_SetScalar(gScalar *S, double *d){
  S->d = d[0] ;
}
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i){
  V->V[i] = S->d ;
}
void LinAlg_SetDoubleInVector(double d, gVector *V, int i){
  V->V[i] = d ;
}
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j){
  V->V[i] = d1 ;
  V->V[j] = d2 ;
}
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  Msg(ERROR, "'LinAlg_SetScalarInMatrix' not Implemented (yet)");  
}
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j){
  Msg(ERROR, "'LinAlg_SetScalarInMatrix' not Implemented (yet)");  
}
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  Msg(ERROR, "'LinAlg_SetScalarInMatrix' not Implemented (yet)");  
}

/* Add */

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d + S2->d ;
}
void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i){
  V->V[i] += S->d ;
}
void LinAlg_AddDoubleInVector(double d, gVector *V, int i){
  V->V[i] += d ;
}
void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j){
  V->V[i] += d1 ;
  V->V[j] += d2 ;
}
void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){
  LinAlg_AddDoubleInMatrix(S->d, M, i, j) ;
}
void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j){
  int    ic, il, *ai, *pp, n, iptr, iptr2, jptr, *ptr, zero = 0;
  double *a;

  /* beware of the transposition! */

  ic = i+1 ; 
  il = j+1 ;

  M->M.changed = 1 ;

  switch (M->M.T) {

  case SPARSE :
    il--;
    pp = (int*)M->M.S.jptr->array;
    ptr = (int*)M->M.S.ptr->array;
    ai = (int*)M->M.S.ai->array;
    a = (double*)M->M.S.a->array;
    
    iptr = pp[il];
    iptr2 = iptr-1;
    
    while(iptr>0){
      iptr2 = iptr-1;
      jptr = ai[iptr2];
      if(jptr == ic){
	a[iptr2] += d;
	return;
      }
      iptr = ptr[iptr2];
    }

    List_Add(M->M.S.a, &d);
    List_Add(M->M.S.ai, &ic);
    List_Add(M->M.S.ptr, &zero);
    
    /* The pointers could have been modified in List_Add (reallocation) */
    ptr = (int*)M->M.S.ptr->array;
    ai = (int*)M->M.S.ai->array;
    a = (double*)M->M.S.a->array;
    
    n = List_Nbr(M->M.S.a);
    if(!pp[il]) pp[il] = n;
    else ptr[iptr2] = n;
    break;

  case DENSE :
    if(M->M.notranspose)
      M->M.F.a[((M->M.N))*(il-1)+(ic-1)] += d;
    else
      M->M.F.a[((M->M.N))*(ic-1)+(il-1)] += d;
    break;

  }

}
void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){
  if(d1){
    LinAlg_AddDoubleInMatrix(d1, M, i, j) ;
    LinAlg_AddDoubleInMatrix(d1, M, k, l) ;
  }
  if(d2){
    LinAlg_AddDoubleInMatrix(-d2, M, i, l) ;
    LinAlg_AddDoubleInMatrix(d2, M, k, j) ;
  }
}
void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3){
  int i;

  if(V3==V1)
    for(i=0; i<V1->N; i++) V1->V[i] += V2->V[i];
  else
    Msg(ERROR, "'LinAlg_AddVectorVector': Wrong Arguments");    
}
void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){
  int i;

  if(V3==V1)
     for(i=0; i<V1->N; i++) V1->V[i] += d*V2->V[i];
  else
    Msg(ERROR, "'LinAlg_AddVectorProdVectorDouble': Wrong Arguments");    
}
void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  int      i, *ai, iptr, *jptr, *ptr;
  double  *a;
  
  if(M3==M1){
    switch (M1->M.T) {
    case SPARSE :
      jptr = (int*) M2->M.S.jptr->array;
      ptr = (int*) M2->M.S.ptr->array;
      a = (double*) M2->M.S.a->array;
      ai = (int*) M2->M.S.ai->array;
      for (i=0; i<M2->M.N; i++) {
	iptr = jptr[i];
	while (iptr>0) {
	  /* LinAlg_AddDoubleInMatrix transposes: to perform the addition,
	     one has to transpose a second time */
	  LinAlg_AddDoubleInMatrix (a[iptr-1], M1, ai[iptr-1]-1, i); 
	  iptr = ptr[iptr-1];
	}
      }
      break;
    case DENSE :
      for(i=0; i<(M1->M.N)*(M1->M.N); i++) M1->M.F.a[i] += M2->M.F.a[i];
      break;
    }
  }
  else
    Msg(ERROR, "'LinAlg_AddMatrixMatrix': Wrong Arguments");
}
void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){
  int      i, *ai, iptr, *jptr, *ptr;
  double  *a;

  if(M3==M1){
    switch (M1->M.T) {
    case SPARSE :
      jptr = (int*) M2->M.S.jptr->array;
      ptr = (int*) M2->M.S.ptr->array;
      a = (double*) M2->M.S.a->array;
      ai = (int*) M2->M.S.ai->array;
      for (i=0; i<M2->M.N; i++) {
	iptr = jptr[i];
	while (iptr>0) {
	  /* LinAlg_AddDoubleInMatrix transposes: to perform the addition,
	     one has to transpose a second time */
	  LinAlg_AddDoubleInMatrix (d*a[iptr-1], M1, ai[iptr-1]-1, i); 
	  iptr = ptr[iptr-1];
	}
      }
      break;
    case DENSE :
      for(i=0; i<(M1->M.N)*(M1->M.N); i++) M1->M.F.a[i] += d*M2->M.F.a[i];
      break;
    }
  }
  else
    Msg(ERROR, "'LinAlg_AddMatrixProdMatrixDouble': Wrong Arguments");
}

/* Sub */

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d - S2->d ;
}
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3){
  int i;

  if(V3==V1) 
    for(i=0; i<V1->N; i++) V1->V[i] -= V2->V[i];
  else if (V3==V2) 
    for(i=0; i<V1->N; i++) V2->V[i] = V1->V[i] - V2->V[i];
  else
    Msg(ERROR, "'LinAlg_SubVectorVector': Wrong Arguments");  
}
void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){
  Msg(ERROR, "'LinAlg_SubMatrixMatrix' not Implemented (yet)");  
}

/* Prod */

void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d * S2->d ;
}
void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2){
  S2->d = S1->d * d ;
}
void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){
  *d3 = S->d * d1 ;
  *d4 = S->d * d2 ;
}
void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){
  Msg(ERROR, "'LinAlg_ProdVectorScalar' not Implemented (yet)");  
}
void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2){
  int i;

  if(V2==V1)
    for(i=0; i<V1->N; i++) V1->V[i] *= d;
  else
    Msg(ERROR, "'LinAlg_ProdVectorDouble': Wrong Arguments");
}
void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){
  Msg(ERROR, "'LinAlg_ProdVectorComplex' not Implemented (yet)");
}
void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d){
  int i;

  *d = 0.0 ;
  for (i=0; i<V1->N; i++) *d += V1->V[i] * V2->V[i];
}
void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){
  int     k, i, j, *ai, *jptr ;
  double  *a;

  /* M*V1 -> V2 where M is transposed! */

  if(V2==V1)
    Msg(ERROR, "'LinAlg_ProdMatrixVector': Wrong Arguments");
  else{
    switch (M->M.T) {
    case SPARSE :
      /* csr_format transposes! Thus, the matrix arriving in this
	 routine *has* to be the transposed! */
      if(M->M.changed){
	csr_format (&M->M.S, M->M.N);
	restore_format (&M->M.S);
	M->M.changed = 0 ;
      }
      jptr = (int*) M->M.S.jptr->array;
      a    = (double*) M->M.S.a->array;
      ai   = (int*) M->M.S.ai->array;
      for(i=0; i<M->M.N; i++){
	V2->V[i] = 0.0 ;
	for(k=jptr[i]; k<=jptr[i+1]-1; k++){
	  V2->V[i] += V1->V[ai[k-1]-1] * a[k-1];
	}
      }
      break;
    case DENSE :
      if(M->M.notranspose){
	for(i=0; i<M->M.N; i++){
	  V2->V[i] = 0.0 ;
	  for(j=0; j<M->M.N; j++) V2->V[i] += M->M.F.a[(M->M.N)*i+j] * V1->V[j];
	}
      }
      else{
	for(i=0; i<M->M.N; i++){
	  V2->V[i] = 0.0 ;
	  for(j=0; j<M->M.N; j++) V2->V[i] += M->M.F.a[(M->M.N)*j+i] * V1->V[j];
	}
      }
      break;
    }
  }

}
void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){
  if(M2==M1)
    LinAlg_ProdMatrixDouble(M1, S->d, M2);
  else
    Msg(ERROR, "'LinAlg_ProdMatrixScalar': Wrong Arguments");
}
void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){
  int i;
  double *a;

  if(M2==M1){
    switch (M1->M.T) {
    case SPARSE :
      a = (double*) M1->M.S.a->array;
      for(i=0; i<List_Nbr(M1->M.S.a); i++){
	a[i] *= d;
      }
      break;
    case DENSE :
      for(i=0; i<(M1->M.N)*(M1->M.N); i++) M1->M.F.a[i] *= d;    
      break;
    }
  }
  else
    Msg(ERROR, "'LinAlg_ProdMatrixDouble': Wrong Arguments");
}
void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2){
  Msg(ERROR, "'LinAlg_ProdMatrixComplex' not Implemented (yet)");
}

/* Div */

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){
  S3->d = S1->d / S2->d ;
}
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2){
  S2->d = S1->d / d ;
}

/* Assemble */

void LinAlg_AssembleMatrix(gMatrix *M){
}
void LinAlg_AssembleVector(gVector *V){
}

/* Solve */

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X){
  solve_matrix(&A->M, &Solver->Params, B->V, X->V);
}

#endif
