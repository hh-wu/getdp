// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _LINALG_H_
#define _LINALG_H_

#include <stdio.h>
#include <map>
#include <string>
#include "GetDPConfig.h"

// GetDP only uses a predefined set of acces routines to scalars
// (double precision floating point real or complex values), vectors
// of scalars and matrices of scalars. Thse routines are redefined for
// each solver interface, currently Sparskit (LinAlg_SPARSKIT.cpp) and
// PETSc (LinAlg_PETSC.cpp)

#if defined(HAVE_SPARSKIT)

#include "Sparskit.h"
#define gSCALAR_SIZE 1
#define gCOMPLEX_INCREMENT 2
typedef struct { double s ; }             gScalar ;
typedef struct { Matrix M ; }             gMatrix ;
typedef struct { int N ; double *V ; }    gVector ;
typedef struct { Solver_Params Params ; } gSolver ;

#elif defined(HAVE_PETSC)

#include "petsc.h"
#if (PETSC_VERSION_MAJOR < 2) || ((PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR < 3))
  #error "GetDP requires PETSc version 2.3 or higher"
#else
  #include "petscksp.h"
  #include "petscsnes.h"
#endif
#if defined(PETSC_USE_COMPLEX)
  #define gSCALAR_SIZE 2
  #define gCOMPLEX_INCREMENT 1
#else
  #define gSCALAR_SIZE 1
  #define gCOMPLEX_INCREMENT 2
#endif
typedef struct { PetscScalar s ; } gScalar ;
typedef struct { Mat M ; }         gMatrix ;
typedef struct { Vec V, Vseq ; int haveSeq ; }   gVector ;
typedef struct { KSP ksp[10] ; SNES snes[10] ; }  gSolver ;

#else

#define gSCALAR_SIZE 1
#define gCOMPLEX_INCREMENT 2
typedef struct { double s; }    gScalar ;
typedef struct { double **m; }  gMatrix ;
typedef struct { double *m; }   gVector ;
typedef struct { int dummy; }   gSolver ;

#endif

void LinAlg_InitializeSolver(int* argc, char*** argv);
void LinAlg_FinalizeSolver(void);

void LinAlg_SetCommSelf();
void LinAlg_SetCommWorld();

void LinAlg_CreateSolver(gSolver *Solver, const char * SolverDataFileName);
void LinAlg_SetGlobalSolverOptions(const std::string &opt);
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n);
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m);

void LinAlg_DestroySolver(gSolver *Solver);
void LinAlg_DestroyVector(gVector *V);
void LinAlg_DestroyMatrix(gMatrix *M);

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2);
void LinAlg_CopyVector(gVector *V1, gVector *V2);
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2);

void LinAlg_SwapVector(gVector *V1, gVector *V2);

void LinAlg_ZeroScalar(gScalar *S);
void LinAlg_ZeroVector(gVector *V);
void LinAlg_ZeroMatrix(gMatrix *M);

void LinAlg_ScanScalar(FILE *file, gScalar *S);
void LinAlg_ScanVector(FILE *file, gVector *V);
void LinAlg_ScanMatrix(FILE *file, gMatrix *M);

void LinAlg_ReadScalar(FILE *file, gScalar *S);
void LinAlg_ReadVector(FILE *file, gVector *V);
void LinAlg_ReadMatrix(FILE *file, gMatrix *M);

void LinAlg_PrintScalar(FILE *file, gScalar *S);
void LinAlg_PrintVector(FILE *file, gVector *V, bool matlab=false,
                        const char* fileName="vector.m", const char* varName="Vec_0");
void LinAlg_PrintMatrix(FILE *file, gMatrix *M, bool matlab=false,
                        const char* fileName="matrix.m", const char* varName="Mat_0");

void LinAlg_WriteScalar(FILE *file, gScalar *S);
void LinAlg_WriteVector(FILE *file, gVector *V);
void LinAlg_WriteMatrix(FILE *file, gMatrix *M);

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

void LinAlg_SetScalar(gScalar *S, double *d);
void LinAlg_SetVector(gVector *V, double *v);
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i);
void LinAlg_SetDoubleInVector(double d, gVector *V, int i);
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j);
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j);
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j);
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l);

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

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3);
void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3);

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

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3);
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2);

void LinAlg_VectorNorm2(gVector *V1, double *norm);
void LinAlg_VectorNormInf(gVector *V1, double *norm);

void LinAlg_AssembleMatrix(gMatrix *M);
void LinAlg_AssembleVector(gVector *V);

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex=0);
void LinAlg_SolveAgain(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex=0);

void LinAlg_SolveNL(gMatrix *A, gVector *B, gMatrix *Jac, gVector *R, gSolver *Solver,
                    gVector *X, int solverIndex=0);

#endif
