/* $Id: LinAlg.h,v 1.2 2000-09-07 18:47:22 geuzaine Exp $ */
#ifndef _LINALG_H_
#define _LINALG_H_

/* 

GetDP only uses a predefined set of acces routines to scalars (double
precision floating point real or complex values), vectors of scalars
and matrices of scalars. To introduce a new solver in GetDP, you
should

1) define all following routines in a new libary. Already existing 
   libraries are LinAlg_SPARSKIT and LinAlg_PETSC

2) rebuild all GetDP libraries

3) link the LinAlg_XXX and the solver libary with all other GetDP
   libraries

*/

#if _SPARSKIT

#include "Solver.h"
#define gSCALAR_SIZE 1
#define gCOMPLEX_INCREMENT 2
typedef struct { double d ; }             gScalar ;
typedef struct { Matrix M ; }             gMatrix ;
typedef struct { int N ; double *V ; }    gVector ;
typedef struct { Solver_Params Params ; } gSolver ;

#elif _PETSC

#include "sles.h"
#if PETSC_USE_COMPLEX
#define gSCALAR_SIZE 2
#define gCOMPLEX_INCREMENT 1
#else
#define gSCALAR_SIZE 1
#define gCOMPLEX_INCREMENT 2
#endif
typedef struct { Scalar s ; }                    gScalar ;
typedef struct { Mat M ; }                       gMatrix ;
typedef struct { Vec V ; }                       gVector ;
typedef struct { SLES sles ; PC pc ; KSP ksp ; } gSolver ;

#elif _AZTEC

#error "GetDP is NOT ready for AZTEC solvers"

#endif

/* Init */

void gInitialize(int* argc, char*** argv, int *NbrCpu, int *RankCpu);
void gInitializeSolver(int* argc, char*** argv, int *NbrCpu, int *RankCpu);

/* Finalize */

void gFinalize(void);
void gFinalizeSolver(void);

/* Sequential */

void gSequentialBegin(void);
void gSequentialEnd(void);

/* Create */

void gCreateSolver(gSolver *Solver, char * SolverDataFileName);
void gCreateVector(gVector *V, gSolver *Solver, int n, int NbrPart, int *Part);
void gCreateMatrix(gMatrix *M, gSolver *Solver, int n, int m,
		   int NbrPart, int *Part, int *Nnz);

/* Destroy */

void gDestroySolver(gSolver *Solver);
void gDestroyVector(gVector *V);
void gDestroyMatrix(gMatrix *M);

/* Copy */

void gCopyScalar(gScalar *S1, gScalar *S2);
void gCopyVector(gVector *V1, gVector *V2);
void gCopyMatrix(gMatrix *M1, gMatrix *M2);

/* Zero */

void gZeroScalar(gScalar *S);
void gZeroVector(gVector *V);
void gZeroMatrix(gMatrix *M);

/* Scan */

void gScanScalar(FILE *file, gScalar *S);
void gScanVector(FILE *file, gVector *V);
void gScanMatrix(FILE *file, gMatrix *M);

/* Read */

void gReadScalar(FILE *file, gScalar *S);
void gReadVector(FILE *file, gVector *V);
void gReadMatrix(FILE *file, gMatrix *M);

/* Print */

void gPrintScalar(FILE *file, gScalar *S);
void gPrintVector(FILE *file, gVector *V);
void gPrintMatrix(FILE *file, gMatrix *M);

/* Write */

void gWriteScalar(FILE *file, gScalar *S);
void gWriteVector(FILE *file, gVector *V);
void gWriteMatrix(FILE *file, gMatrix *M);

/* Get */

void gGetVectorSize(gVector *V, int *i);
void gGetMatrixSize(gMatrix *M, int *i, int *j);
void gGetDoubleInScalar(double *d, gScalar *S);
void gGetComplexInScalar(double *d1, double *d2, gScalar *S);
void gGetScalarInVector(gScalar *S, gVector *V, int i);
void gGetDoubleInVector(double *d, gVector *V, int i);
void gGetAbsDoubleInVector(double *d, gVector *V, int i);
void gGetComplexInVector(double *d1, double *d2, gVector *V, int i, int j);
void gGetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void gGetDoubleInMatrix(double *d, gMatrix *M, int i, int j);
void gGetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l);

/* Set */

void gSetScalar(gScalar *S, double *d);
void gSetScalarInVector(gScalar *S, gVector *V, int i);
void gSetDoubleInVector(double d, gVector *V, int i);
void gSetComplexInVector(double d1, double d2, gVector *V, int i, int j);
void gSetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void gSetDoubleInMatrix(double d, gMatrix *M, int i, int j);
void gSetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l);

/* Add */

void gAddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void gAddScalarInVector(gScalar *S, gVector *V, int i);
void gAddDoubleInVector(double d, gVector *V, int i);
void gAddComplexInVector(double d1, double d2, gVector *V, int i, int j);
void gAddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void gAddDoubleInMatrix(double d, gMatrix *M, int i, int j);
void gAddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l);
void gAddVectorVector(gVector *V1, gVector *V2, gVector *V3);
void gAddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3);
void gAddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3);
void gAddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3);

/* Sub */

void gSubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void gSubVectorVector(gVector *V1, gVector *V2, gVector *V3);
void gSubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3);

/* Prod */

void gProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void gProdScalarDouble(gScalar *S1, double d, gScalar *S2);
void gProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4);
void gProdVectorScalar(gVector *V1, gScalar *S, gVector *V2);
void gProdVectorDouble(gVector *V1, double d, gVector *V2);
void gProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2);
void gProdVectorVector(gVector *V1, gVector *V2, double *d);
void gProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2);
void gProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2);
void gProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2);
void gProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2);

/* Div */

void gDivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void gDivScalarDouble(gScalar *S1, double d, gScalar *S2);

/* Assemble */

void gAssembleMatrix(gMatrix *M);
void gAssembleVector(gVector *V);

/* Solve */

void gSolve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X);


#endif

