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
 */

#ifndef _LINALG_H_
#define _LINALG_H_

#include <stdio.h>

/* 

GetDP only uses a predefined set of acces routines to scalars (double
precision floating point real or complex values), vectors of scalars
and matrices of scalars. To introduce a new solver in GetDP, you
should

1) define all following routines in a new libary. Already existing 
   libraries are LinAlg_SPARSKIT and LinAlg_PETSC

2) rebuild all GetDP libraries

3) link the LinAlg_XXX and the solver library with all other GetDP
   libraries

*/

#if defined(HAVE_SPARSKIT)

#include "Solver.h"
#define gSCALAR_SIZE 1
#define gCOMPLEX_INCREMENT 2
typedef struct { double d ; }             gScalar ;
typedef struct { Matrix M ; }             gMatrix ;
typedef struct { int N ; double *V ; }    gVector ;
typedef struct { Solver_Params Params ; } gSolver ;

#elif defined(HAVE_PETSC)

#include "petsc.h"

#if ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR>=2))
  #include "petscksp.h"
#else
  #include "petscsles.h"
#endif

#if PETSC_USE_COMPLEX
#define gSCALAR_SIZE 2
#define gCOMPLEX_INCREMENT 1
#else
#define gSCALAR_SIZE 1
#define gCOMPLEX_INCREMENT 2
#endif
typedef struct { PetscScalar s ; }               gScalar ;
typedef struct { Mat M ; }                       gMatrix ;
typedef struct { Vec V ; }                       gVector ;

#if ((PETSC_VERSION_MAJOR==2)&&(PETSC_VERSION_MINOR>=2))
  typedef struct { KSP ksp ; PC pc ; } gSolver ;
#else
  typedef struct { SLES sles ; PC pc ; KSP ksp ; } gSolver ;
#endif

#else

#error "You have to define either HAVE_SPARSKIT or HAVE_PETSC"

#endif

/* Init */

void LinAlg_Initialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu);
void LinAlg_InitializeSolver(int* argc, char*** argv, int *NbrCpu, int *RankCpu);

/* Finalize */

void LinAlg_Finalize(void);
void LinAlg_FinalizeSolver(void);

/* Barrier */

void LinAlg_Barrier(void);

/* Sequential */

void LinAlg_SequentialBegin(void);
void LinAlg_SequentialEnd(void);

/* Create */

void LinAlg_CreateSolver(gSolver *Solver, char * SolverDataFileName);
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part);
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m,
			 int NbrPart, int *Part, int *Nnz);
void LinAlg_CreateMatrixShell(gMatrix *A, gSolver *Solver, int n, int m, void *myCtx, 
			      void (*myMult)(gMatrix *A, gVector *x, gVector *y));

/* Destroy */

void LinAlg_DestroySolver(gSolver *Solver);
void LinAlg_DestroyVector(gVector *V);
void LinAlg_DestroyMatrix(gMatrix *M);

/* Copy */

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2);
void LinAlg_CopyVector(gVector *V1, gVector *V2);
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2);

/* Zero */

void LinAlg_ZeroScalar(gScalar *S);
void LinAlg_ZeroVector(gVector *V);
void LinAlg_ZeroMatrix(gMatrix *M);

/* Scan */

void LinAlg_ScanScalar(FILE *file, gScalar *S);
void LinAlg_ScanVector(FILE *file, gVector *V);
void LinAlg_ScanMatrix(FILE *file, gMatrix *M);

/* Read */

void LinAlg_ReadScalar(FILE *file, gScalar *S);
void LinAlg_ReadVector(FILE *file, gVector *V);
void LinAlg_ReadMatrix(FILE *file, gMatrix *M);

/* Print */

void LinAlg_PrintScalar(FILE *file, gScalar *S);
void LinAlg_PrintVector(FILE *file, gVector *V);
void LinAlg_PrintMatrix(FILE *file, gMatrix *M);

/* Write */

void LinAlg_WriteScalar(FILE *file, gScalar *S);
void LinAlg_WriteVector(FILE *file, gVector *V);
void LinAlg_WriteMatrix(FILE *file, gMatrix *M);

/* Get */

void LinAlg_GetVectorSize(gVector *V, int *i);
void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high);
void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j);
void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high);
void LinAlg_GetDoubleInScalar(double *d, gScalar *S);
void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S);
void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i);
void LinAlg_GetDoubleInVector(double *d, gVector *V, int i);
void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i);
void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j);
void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j);
void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l);
void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1);
void LinAlg_GetMatrixContext(gMatrix *A, void **myCtx);

/* Set */

void LinAlg_SetScalar(gScalar *S, double *d);
void LinAlg_SetVector(gVector *V, double *v);
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i);
void LinAlg_SetDoubleInVector(double d, gVector *V, int i);
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j);
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j);
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l);

/* Add */

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i);
void LinAlg_AddDoubleInVector(double d, gVector *V, int i);
void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j);
void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j);
void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l);
void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3);
void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3);
void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3);
void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3);

/* Sub */

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3);
void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3);

/* Prod */

void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2);
void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4);
void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2);
void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2);
void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2);
void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d);
void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2);
void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2);
void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2);
void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2);
void LinAlg_DummyVector(gVector *V);

/* Div */

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2);

/* Assemble */

void LinAlg_AssembleMatrix(gMatrix *M);
void LinAlg_AssembleVector(gVector *V);

/* FMM */

void LinAlg_FMMMatVectorProd(gVector *V1, gVector *V2);

/* Solve */

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X);

#endif

