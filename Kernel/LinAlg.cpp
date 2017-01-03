// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "GetDPConfig.h"
#include "LinAlg.h"
#include "Message.h"

// default dummy solver interface

#if !defined(HAVE_PETSC) && !defined(HAVE_SPARSKIT)

#define err Message::Error("No solver is compiled in this version of GetDP")

void LinAlg_InitializeSolver(int* argc, char*** argv){}
void LinAlg_FinalizeSolver(){}
void LinAlg_SetCommSelf(){}
void LinAlg_SetCommWorld(){}
void LinAlg_CreateSolver(gSolver *Solver, const char * SolverDataFileName){ err; }
void LinAlg_SetGlobalSolverOptions(const std::string &opt){ err; }
void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n){ err; }
void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m){ err; }
void LinAlg_DestroySolver(gSolver *Solver){ err; }
void LinAlg_DestroyVector(gVector *V){ err; }
void LinAlg_DestroyMatrix(gMatrix *M){ err; }
void LinAlg_CopyScalar(gScalar *S1, gScalar *S2){ err; }
void LinAlg_CopyVector(gVector *V1, gVector *V2){ err; }
void LinAlg_SwapVector(gVector *V1, gVector *V2){ err; }
void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2){ err; }
void LinAlg_ZeroScalar(gScalar *S){ err; }
void LinAlg_ZeroVector(gVector *V){ err; }
void LinAlg_ZeroMatrix(gMatrix *M){ err; }
void LinAlg_ScanScalar(FILE *file, gScalar *S){ err; }
void LinAlg_ScanVector(FILE *file, gVector *V){ err; }
void LinAlg_ScanMatrix(FILE *file, gMatrix *M){ err; }
void LinAlg_ReadScalar(FILE *file, gScalar *S){ err; }
void LinAlg_ReadVector(FILE *file, gVector *V){ err; }
void LinAlg_ReadMatrix(FILE *file, gMatrix *M){ err; }
void LinAlg_PrintScalar(FILE *file, gScalar *S){ err; }
void LinAlg_PrintVector(FILE *file, gVector *V, bool matlab,
                        const char* fileName, const char* varName){ err; }
void LinAlg_PrintMatrix(FILE *file, gMatrix *M, bool matlab,
                        const char* fileName, const char*varName){ err; }
void LinAlg_WriteScalar(FILE *file, gScalar *S){ err; }
void LinAlg_WriteVector(FILE *file, gVector *V){ err; }
void LinAlg_WriteMatrix(FILE *file, gMatrix *M){ err; }
void LinAlg_GetVectorSize(gVector *V, int *i){ err; }
void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high){ err; }
void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j){ err; }
void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high){ err; }
void LinAlg_GetDoubleInScalar(double *d, gScalar *S){ err; }
void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S){ err; }
void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i){ err; }
void LinAlg_GetDoubleInVector(double *d, gVector *V, int i){ err; }
void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i){ err; }
void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j){ err; }
void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){ err; }
void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j){ err; }
void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l){ err; }
void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1){ err; }
void LinAlg_GetMatrixContext(gMatrix *A, void **myCtx){ err; }
void LinAlg_SetScalar(gScalar *S, double *d){ err; }
void LinAlg_SetVector(gVector *V, double *v){ err; }
void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i){ err; }
void LinAlg_SetDoubleInVector(double d, gVector *V, int i){ err; }
void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j){ err; }
void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){ err; }
void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j){ err; }
void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){ err; }
void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){ err; }
void LinAlg_DummyVector(gVector *V){ err; }
void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i){ err; }
void LinAlg_AddDoubleInVector(double d, gVector *V, int i){ err; }
void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j){ err; }
void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j){ err; }
void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j){ err; }
void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l){ err; }
void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3){ err; }
void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3){ err; }
void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){ err; }
void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3){ err; }
void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){ err; }
void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3){ err; }
void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3){ err; }
void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){ err; }
void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2){ err; }
void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4){ err; }
void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2){ err; }
void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2){ err; }
void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2){ err; }
void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d){ err; }
void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2){ err; }
void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2){ err; }
void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2){ err; }
void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2){ err; }
void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3){ err; }
void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2){ err; }
void LinAlg_VectorNorm2(gVector *V1, double *norm){ err; }
void LinAlg_VectorNormInf(gVector *V1, double *norm){ err; }
void LinAlg_AssembleMatrix(gMatrix *M){ err; }
void LinAlg_AssembleVector(gVector *V){ err; }
void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex){ err; }
void LinAlg_SolveAgain(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex){ err; }
void LinAlg_SolveNL(gMatrix *A, gVector *B, gMatrix *J, gVector *R, gSolver *Solver,
                    gVector *X, int solverIndex){ err; }

#endif
