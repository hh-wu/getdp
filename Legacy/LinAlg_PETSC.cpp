// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributor(s):
//   David Colignon
//   Ruth Sabariego
//   Jose Geraldo A. Brito Neto
//

#include <vector>
#include <algorithm>
#include <complex>
#include <string>
#include <cstring>
#include <stdio.h>
#include "GetDPConfig.h"
#include "LinAlg.h"
#include "MallocUtils.h"
#include "Message.h"
#include "OS.h"

#if defined(HAVE_SLEPC)
#include <slepc.h>
#endif

// Johan, we curse you for a thousand generations!
#include "ProData.h"
#include "DofData.h"
extern struct CurrentData Current ;

#if defined(HAVE_PETSC)

// Options for PETSc can be provided on the command line, or in the file
// ~/.petscrc. 
//
// By default we try to use the MUMPS or UMFPACK direct solver (if
// available, with PETSc 3). Otherwise we use a GMRES iterative solver
// preconditionned with an ILU(6).
//
// All these options can be changed at runtime. For example you could
// use
//
//   -pc_type ilu
//   -pc_factor_levels 0
//   -ksp_rtol 1.e-6
//   -ksp_gmres_restart 500
//   -ksp_monitor
//
// for GMRES with ILU(0), with a restart of 500 and a stopping
// criterion of 1e-6. Or you could set
//
//   -pc_type lu
//   -pc_factor_mat_solver_package mumps
//   -ksp_type gmres
//
// to use the MUMPS direct solver as a preconditioner to GMRES (useful
// e.g if the matrix changed a bit, but you want to keep the same
// factorization using "SolveAgain").

static void _try(int ierr){ CHKERRABORT(PETSC_COMM_WORLD, ierr); }
static int SolverInitialized = 0;

void LinAlg_InitializeSolver(int* argc, char*** argv)
{
  // This function detects if MPI is initialized
  PetscInitialize(argc, argv, PETSC_NULL, PETSC_NULL);
#if defined(HAVE_SLEPC)
  SlepcInitialize(argc, argv, PETSC_NULL, PETSC_NULL);
#endif
  SolverInitialized = 1;

  // get additional petsc options from specified file (useful e.g. on
  // Windows where we don't know where to search for ~/.petsrc)
  for(int i = 0; i < *argc - 1; i++){
    if (!strcmp((*argv)[i], "-solver")){
#if (PETSC_VERSION_MAJOR == 2)
      PetscOptionsInsertFile((*argv)[i+1]);
#else
      PetscOptionsInsertFile(PETSC_COMM_WORLD, (*argv)[i+1], PETSC_FALSE);
#endif
    }
  }
}

void LinAlg_FinalizeSolver()
{
  if(SolverInitialized){
#if defined(HAVE_SLEPC)
    SlepcFinalize();
#endif
    PetscFinalize();
  }
}

void LinAlg_CreateSolver(gSolver *Solver, const char *SolverDataFileName)
{
  for(int i = 0; i < 10; i++) Solver->ksp[i] = NULL;
}

void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n)
{
  _try(VecCreate(PETSC_COMM_WORLD, &V->V));
  _try(VecSetSizes(V->V, PETSC_DECIDE, n));
  // override the default options with the ones from the option
  // database (if any)
  _try(VecSetFromOptions(V->V));

  // create sequential vector that will contain all the values on all
  // the procs
  if(Msg::GetCommSize() > 1)
    _try(VecCreateSeq(PETSC_COMM_SELF, n, &V->Vseq));
}

static void _fillseq(gVector *V)
{
  if(Msg::GetCommSize() == 1) return;
  // collect all the values from the parallel petsc vector into a
  // sequential vector on each processor
  VecScatter ctx;
  VecScatterCreateToAll(V->V, &ctx, &V->Vseq);
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 3) 
  VecScatterBegin(V->V, V->Vseq, INSERT_VALUES, SCATTER_FORWARD, ctx);
  VecScatterEnd(V->V, V->Vseq, INSERT_VALUES, SCATTER_FORWARD, ctx);
#else
  VecScatterBegin(ctx, V->V, V->Vseq, INSERT_VALUES, SCATTER_FORWARD);
  VecScatterEnd(ctx, V->V, V->Vseq, INSERT_VALUES, SCATTER_FORWARD);
#endif
  VecScatterDestroy(ctx);
}

void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m)
{
  PetscInt prealloc = 100;
  PetscTruth set;
  PetscOptionsGetInt(PETSC_NULL, "-petsc_prealloc", &prealloc, &set);

  // prealloc cannot be bigger than the number of rows!
  prealloc = (n < prealloc) ? n : prealloc; 
  std::vector<PetscInt> nnz(n, prealloc);

  // preallocate non local equations as full lines (this is not
  // optimal, but preallocating too few elements leads to horrible
  // assembly performance: petsc really sucks at dynamic reallocation
  // in the AIJ matrix format)
  for(unsigned int i = 0; i < Current.DofData->NonLocalEquations.size(); i++)
    nnz[Current.DofData->NonLocalEquations[i] - 1] = n;

  if(Msg::GetCommSize() > 1) // FIXME: alloc full lines...
    _try(MatCreateMPIAIJ(PETSC_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, n, m, 
                         prealloc, PETSC_NULL, prealloc, PETSC_NULL, &M->M));
  else
    _try(MatCreateSeqAIJ(PETSC_COMM_WORLD, n, m, 0, &nnz[0], &M->M));

  // override the default options with the ones from the option
  // database (if any)
  _try(MatSetFromOptions(M->M));
}

void LinAlg_DestroySolver(gSolver *Solver)
{
  for(int i = 0; i < 10; i++)
    if(Solver->ksp[i]) _try(KSPDestroy(Solver->ksp[i]));
}

void LinAlg_DestroyVector(gVector *V)
{
  _try(VecDestroy(V->V));
  if(Msg::GetCommSize() > 1)
    _try(VecDestroy(V->Vseq));
}

void LinAlg_DestroyMatrix(gMatrix *M)
{
  _try(MatDestroy(M->M));
}

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2)
{
  S1->s = S2->s;
}

void LinAlg_CopyVector(gVector *V1, gVector *V2)
{
  _try(VecCopy(V1->V, V2->V));
  if(Msg::GetCommSize() > 1)
    _try(VecCopy(V1->Vseq, V2->Vseq));
}

void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2)
{
  _try(MatCopy(M1->M, M2->M, DIFFERENT_NONZERO_PATTERN));
}

void LinAlg_ZeroScalar(gScalar *S)
{
  S->s = 0.;
}

void LinAlg_ZeroVector(gVector *V)
{
  PetscScalar zero = 0.0;

  _try(VecSet(V->V, zero));
  if(Msg::GetCommSize() > 1)
    _try(VecSet(V->Vseq, zero));
}

void LinAlg_ZeroMatrix(gMatrix *M)
{
  _try(MatZeroEntries(M->M));
}

void LinAlg_ScanScalar(FILE *file, gScalar *S)
{
#if defined(PETSC_USE_COMPLEX)
  double a, b;
  fscanf(file, "%lf %lf", &a, &b);
  S->s = a + PETSC_i * b;
#else
  fscanf(file, "%lf", &S->s);
#endif
}

void LinAlg_ScanVector(FILE *file, gVector *V)
{
  if(Msg::GetCommSize() > 1)
    Msg::Error("ScanVector not implemented in parallel");
  PetscInt n;  
  _try(VecGetSize(V->V, &n));
  for(PetscInt i = 0; i < n; i++){
    double a, b;
    PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
    fscanf(file, "%lf %lf", &a, &b);
    tmp = a + PETSC_i * b;
#else
    fscanf(file, "%lf", &a);
    tmp = a;
#endif
    _try(VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES));
  }
}

void LinAlg_ScanMatrix(FILE *file, gMatrix *M)
{
  Msg::Error("ScanMatrix not yet implemented");  
}

void LinAlg_ReadScalar(FILE *file, gScalar *S)
{
  Msg::Error("ReadScalar not yet implemented");
}

void LinAlg_ReadVector(FILE *file, gVector *V)
{
  if(Msg::GetCommSize() > 1)
    Msg::Error("ScanVector not implemented in parallel");
  PetscInt n;
  _try(VecGetSize(V->V, &n));
  PetscScalar *tmp = (PetscScalar*)Malloc(n*sizeof(PetscScalar));
  fread(tmp, sizeof(PetscScalar), n, file);
  for(PetscInt i = 0; i < n; i++)
    _try(VecSetValues(V->V, 1, &i, &tmp[i], INSERT_VALUES));
  Free(tmp);
}

void LinAlg_ReadMatrix(FILE *file, gMatrix *M)
{
  Msg::Error("ReadMatrix not yet implemented");  
}

void LinAlg_PrintScalar(FILE *file, gScalar *S)
{
#if defined(PETSC_USE_COMPLEX)
  fprintf(file, "%.16g %.16g", real(S->s), imag(S->s));
#else
  fprintf(file, "%.16g", S->s);
#endif
}

void LinAlg_PrintVector(FILE *file, gVector *V, bool matlab)
{
  if(!matlab){
    PetscInt n;
    _try(VecGetSize(V->V, &n));
    Vec VV = Msg::GetCommSize() > 1 ? V->Vseq : V->V;
    PetscScalar *tmp;
    _try(VecGetArray(VV, &tmp));
    for (int i = 0; i < n; i++){
#if defined(PETSC_USE_COMPLEX)
      fprintf(file, "%.16g %.16g\n", real(tmp[i]), imag(tmp[i]));
#else
      fprintf(file, "%.16g\n", tmp[i]);
#endif
    }
    fflush(file);
    _try(VecRestoreArray(VV, &tmp));
  }
  else{
    PetscViewer fd;
    _try(PetscViewerASCIIOpen(PETSC_COMM_WORLD, "vector.m", &fd));
    _try(PetscViewerSetFormat(fd, PETSC_VIEWER_ASCII_MATLAB));
    _try(VecView(V->V, fd));
    _try(PetscViewerDestroy(fd));
  }
} 

void LinAlg_PrintMatrix(FILE *file, gMatrix *M, bool matlab)
{
  if(!matlab) Msg::Error("Non-matlab output not available for this matrix");
  PetscViewer fd;
  _try(PetscViewerASCIIOpen(PETSC_COMM_WORLD, "matrix.m", &fd));
  _try(PetscViewerSetFormat(fd, PETSC_VIEWER_ASCII_MATLAB));
  _try(MatView(M->M, fd));
  _try(PetscViewerDestroy(fd));
}

void LinAlg_WriteScalar(FILE *file, gScalar *S)
{
  Msg::Error("WriteScalar not yet implemented");
}

void LinAlg_WriteVector(FILE *file, gVector *V)
{
  PetscInt n;
  _try(VecGetSize(V->V, &n));
  Vec VV = Msg::GetCommSize() > 1 ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
  fwrite(tmp, sizeof(PetscScalar), n, file);
  fprintf(file, "\n");
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_WriteMatrix(FILE *file, gMatrix *M)
{
  Msg::Error("WriteMatrix not yet implemented");  
}

void LinAlg_GetVectorSize(gVector *V, int *i)
{
  PetscInt t;
  _try(VecGetSize(V->V, &t));
  if(t > INT_MAX) Msg::Error("Problem too big");
  *i = t;
}

void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high)
{
  PetscInt tlow, thigh;
  _try(VecGetOwnershipRange(V->V, &tlow, &thigh));
  if(tlow > INT_MAX || thigh > INT_MAX) Msg::Error("Problem too big");
  *low = tlow;
  *high = thigh;
}

static bool _isInLocalRange(gVector *V, int i)
{
  if(Msg::GetCommSize() == 1) return true;
  int imin, imax;
  LinAlg_GetLocalVectorRange(V, &imin, &imax);
  return (i >= imin && i < imax);
}

void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j)
{
  PetscInt ti, tj;
  _try(MatGetSize(M->M, &ti, &tj));
  if(ti > INT_MAX || tj > INT_MAX) Msg::Error("Problem too big");
  *i = ti;
  *j = tj;
}

void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high)
{
  PetscInt tlow, thigh;
  _try(MatGetOwnershipRange(M->M, &tlow, &thigh));
  if(tlow > INT_MAX || thigh > INT_MAX) Msg::Error("Problem too big");
  *low = tlow;
  *high = thigh;
}

static bool _isInLocalRange(gMatrix *M, int i)
{
  if(Msg::GetCommSize() == 1) return true;
  int imin, imax;
  LinAlg_GetLocalMatrixRange(M, &imin, &imax);
  return (i >= imin && i < imax);
}

void LinAlg_GetDoubleInScalar(double *d, gScalar *S)
{
#if defined(PETSC_USE_COMPLEX)
  *d = real(S->s);
#else
  *d = S->s;
#endif
}

void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S)
{
#if defined(PETSC_USE_COMPLEX)
  *d1 = real(S->s);
  *d2 = imag(S->s);
#else
  Msg::Error("'LinAlg_GetComplexInScalar' not available with this Solver");  
#endif
}

void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i)
{
  Vec VV = Msg::GetCommSize() > 1 ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
  S->s = tmp[i];
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_GetDoubleInVector(double *d, gVector *V, int i)
{
  Vec VV = Msg::GetCommSize() > 1 ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
#if defined(PETSC_USE_COMPLEX)
  *d = real(tmp[i]);
#else
  *d = tmp[i];
#endif
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i)
{
  Vec VV = Msg::GetCommSize() > 1 ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
#if defined(PETSC_USE_COMPLEX)
  *d = fabs(real(tmp[i]));
#else
  *d = fabs(tmp[i]);
#endif
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j)
{
  Vec VV = Msg::GetCommSize() > 1 ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
#if defined(PETSC_USE_COMPLEX)
  *d1 = real(tmp[i]);
  *d2 = imag(tmp[i]);
#else
  *d1 = (double)tmp[i];
  *d2 = (double)tmp[j];
#endif
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  Msg::Error("GetScalarInMatrix not yet implemented");  
}

void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j)
{
  Msg::Error("GetDoubleInMatrix not yet implemented");  
}

void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l)
{
  Msg::Error("GetComplexInMatrix not yet implemented");  
}

void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1)
{
  Msg::Error("GetColumnInMatrix not yet implemented");  
}

void LinAlg_SetScalar(gScalar *S, double *d)
{
#if defined(PETSC_USE_COMPLEX)
  S->s = d[0] + (PETSC_i * d[1]);
#else
  S->s = d[0];
#endif
}

void LinAlg_SetVector(gVector *V, double *v)
{
  PetscScalar tmp = *v;
  _try(VecSet(V->V, tmp));
}

void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i)
{
  if(!_isInLocalRange(V, i)) return;
  PetscInt ti = i;
  _try(VecSetValues(V->V, 1, &ti, &S->s, INSERT_VALUES));
}

void LinAlg_SetDoubleInVector(double d, gVector *V, int i)
{
  if(!_isInLocalRange(V, i)) return;
  PetscScalar tmp = d;
  PetscInt ti = i;
  _try(VecSetValues(V->V, 1, &ti, &tmp, INSERT_VALUES));
}

void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  if(_isInLocalRange(V, i)){
    PetscInt ti = i;
    tmp = d1 + PETSC_i * d2;
    _try(VecSetValues(V->V, 1, &ti, &tmp, INSERT_VALUES));
  }
#else
  PetscInt ti = i, tj = j;
  if(_isInLocalRange(V, i)){
    tmp = d1;
    _try(VecSetValues(V->V, 1, &ti, &tmp, INSERT_VALUES));
  }
  if(_isInLocalRange(V, j)){
    tmp = d2;
    _try(VecSetValues(V->V, 1, &tj, &tmp, INSERT_VALUES));
  }
#endif
}

void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  if(!_isInLocalRange(M, i)) return;
  PetscInt ti = i, tj = j;
  _try(MatSetValues(M->M, 1, &ti, 1, &tj, &S->s, INSERT_VALUES));
}

void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  Msg::Error("SetDoubleInMatrix not yet implemented");  
}

void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l)
{
  Msg::Error("SetComplexInMatrix not yet implemented");  
}

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s + S2->s;
}

void LinAlg_DummyVector(gVector *V)
{
  if(Current.DofData->DummyDof)
    Msg::Error("DummyVector not yet implemented");
  return;
}

void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i)
{
  if(!_isInLocalRange(V, i)) return;
  PetscInt ti = i;
  _try(VecSetValues(V->V, 1, &ti, &S->s, ADD_VALUES));
}

void LinAlg_AddDoubleInVector(double d, gVector *V, int i)
{
  if(!_isInLocalRange(V, i)) return;
  PetscScalar tmp = d;
  PetscInt ti = i;
  _try(VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES));
}

void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  if(_isInLocalRange(V, i)){
    PetscInt ti = i;
    tmp = d1 + PETSC_i * d2;
    _try(VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES));
  }
#else
  PetscInt ti = i, tj = j;
  if(_isInLocalRange(V, i)){
    tmp = d1;
    _try(VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES));
  }
  if(_isInLocalRange(V, j)){
    tmp = d2;
    _try(VecSetValues(V->V, 1, &tj, &tmp, ADD_VALUES));
  }
#endif
}

void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  if(!_isInLocalRange(M, i)) return;
  PetscInt ti = i, tj = j;
  _try(MatSetValues(M->M, 1, &ti, 1, &tj, &S->s, ADD_VALUES));
}

void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  if(!_isInLocalRange(M, i)) return;
  PetscScalar tmp = d;
  PetscInt ti = i, tj = j;
  _try(MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES));
}

void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  PetscInt ti = i, tj = j;
  if(_isInLocalRange(M, i)){
    tmp = d1 + PETSC_i * d2;
    _try(MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES));
  }
#else
  PetscInt ti = i, tj = j, tk = k, tl = l;
  if(d1){
    tmp = d1;
    if(_isInLocalRange(M, i))
      _try(MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES));
    if(_isInLocalRange(M, k))
      _try(MatSetValues(M->M, 1, &tk, 1, &tl, &tmp, ADD_VALUES));
  }
  if(d2){
    if(_isInLocalRange(M, i)){
      tmp = -d2;
      _try(MatSetValues(M->M, 1, &ti, 1, &tl, &tmp, ADD_VALUES));
    }
    if(_isInLocalRange(M, k)){
      tmp = d2;
      _try(MatSetValues(M->M, 1, &tk, 1, &tj, &tmp, ADD_VALUES));
    }
  }
#endif
}

void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3)
{
  PetscScalar tmp = 1.0;
  if(V3 == V1){
    _try(VecAXPY(V1->V, tmp, V2->V));
    _fillseq(V1);
  }
  else if(V3 == V2){
    _try(VecAXPY(V2->V, tmp, V1->V));
    _fillseq(V2);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddVectorVector'");  
}

void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3)
{
  PetscScalar tmp = d;
  if(V3 == V1){
    _try(VecAXPY(V1->V, tmp, V2->V));
    _fillseq(V1);
  }
  else if(V3 == V2){
    _try(VecAYPX(V2->V, tmp, V1->V));
    _fillseq(V2);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");  
}

void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  PetscScalar tmp = 1.0;
  if(M3 == M1)
    _try(MatAXPY(M1->M, tmp, M2->M, DIFFERENT_NONZERO_PATTERN));
  else if(M3 == M2)
    _try(MatAXPY(M2->M, tmp, M1->M, DIFFERENT_NONZERO_PATTERN));
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddMatrixMatrix'");  
}

void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3)
{
  PetscScalar tmp = d;
  if(M3 == M1)
    _try(MatAXPY(M1->M, tmp, M2->M, DIFFERENT_NONZERO_PATTERN));
  else if(M3 == M2)
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 2)
    _try(MatAYPX(M2->M, tmp, M1->M));
#else
    _try(MatAYPX(M2->M, tmp, M1->M, DIFFERENT_NONZERO_PATTERN));
#endif
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddMatrixProdMatrixDouble'");
}

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s - S2->s;
}

void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3)
{
  PetscScalar tmp = -1.0;
  if(V3 == V1){
    _try(VecAXPY(V1->V, tmp, V2->V));
    _fillseq(V1);
  }
  else if(V3 == V2){
    _try(VecAYPX(V2->V, tmp, V1->V));
    _fillseq(V2);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_SubVectorVector'");  
}

void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  Msg::Error("SubMatrixMatrix not yet implemented");    
}

void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s * S2->s;
}

void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2)
{
  S2->s = S1->s * d;
}

void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4)
{
#if defined(PETSC_USE_COMPLEX)
  PetscScalar tmp;
#endif

#if defined(PETSC_USE_COMPLEX)
  tmp = S->s * (d1 + PETSC_i * d2);
  *d3 = real(tmp);
  *d4 = imag(tmp);
#else
  *d3 = S->s * d1;
  *d4 = S->s * d2;
#endif
}

void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2)
{ 
  if(V2 == V1){
    _try(VecScale(V1->V, S->s));
    _fillseq(V1);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdVectorScalar'");
}

void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2)
{
  PetscScalar tmp = d;
  if(V2 == V1){
    _try(VecScale(V1->V, tmp));
    _fillseq(V1);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdVectorDouble'");
}

void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2)
{
  Msg::Error("ProdVectorComplex not yet implemented");
}

void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d)
{
  PetscScalar tmp;
  _try(VecDot(V1->V, V2->V, &tmp));
#if defined(PETSC_USE_COMPLEX)
  *d = real(tmp);
#else
  *d = tmp;
#endif
}

void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2)
{
  if(V2 == V1)
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixVector'");
  else{
    _try(MatMult(M->M, V1->V, V2->V));
    _fillseq(V2);
  }
}

void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2)
{
  if(M2 == M1)
    _try(MatScale(M1->M, S->s));
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixScalar'");
}

void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2)
{
  PetscScalar tmp = d;
  if(M2 == M1)
    _try(MatScale(M1->M, tmp));
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
}

void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2)
{
#if defined(PETSC_USE_COMPLEX)
  if(M2 == M1){
    PetscScalar tmp = d1 + (PETSC_i * d2);
    _try(MatScale(M1->M, tmp));
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
#else
  Msg::Error("ProdMatrixComplex not yet implemented");
#endif
}

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s / S2->s;
}

void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2)
{
  S2->s = S1->s / d;
}

void LinAlg_VectorNorm2(gVector *V1, double *norm)
{
  PetscReal tmp;
  _try(VecNorm(V1->V, NORM_2, &tmp));
  *norm = tmp;
}

void LinAlg_VectorNormInf(gVector *V1, double *norm)
{
  PetscReal tmp;
  _try(VecNorm(V1->V, NORM_INFINITY, &tmp));
  *norm = tmp;
}

void LinAlg_AssembleMatrix(gMatrix *M)
{
  Msg::Barrier();
  _try(MatAssemblyBegin(M->M, MAT_FINAL_ASSEMBLY));
  _try(MatAssemblyEnd(M->M, MAT_FINAL_ASSEMBLY));
}

void LinAlg_AssembleVector(gVector *V)
{
  Msg::Barrier();
  _try(VecAssemblyBegin(V->V));
  _try(VecAssemblyEnd(V->V));
  _fillseq(V);
}

#if defined(HAVE_ZITSOL)

extern "C" {
  int getdp_zitsol(int n, int nnz, int *row, int *col, double *valr, double *vali, 
		   double *rhsr, double *rhsi, double *solr, double *soli,
		   int precond, int lfil, double tol0, double tol, int im, int maxits);
}

static void _zitsol(gMatrix *A, gVector *B, gVector *X)
{
  int precond = 1, lfil = 30, im = 100, maxits = 200;
  double tol0 = 0.01, tol = 1e-10;
  PetscTruth set;
  PetscOptionsGetInt(PETSC_NULL, "-zitsol_precond", &precond, &set);
  PetscOptionsGetInt(PETSC_NULL, "-zitsol_lfil", &lfil, &set);
  PetscOptionsGetInt(PETSC_NULL, "-zitsol_im", &im, &set);
  PetscOptionsGetInt(PETSC_NULL, "-zitsol_maxits", &maxits, &set);
  PetscOptionsGetReal(PETSC_NULL, "-zitsol_tol0", &tol0, &set);
  PetscOptionsGetReal(PETSC_NULL, "-zitsol_tol", &tol, &set);

  MatInfo info;
  _try(MatGetInfo(A->M, MAT_LOCAL, &info));
  int nnz = info.nz_used;
  //int n = info.rows_local;
  PetscInt n;
  _try(VecGetLocalSize(B->V, &n));

  int *row = (int*)Malloc(nnz * sizeof(int));
  int *col = (int*)Malloc(nnz * sizeof(int));
  double *valr = (double*)Malloc(nnz * sizeof(double));
  double *vali = (double*)Malloc(nnz * sizeof(double));
  double *rhsr = (double*)Malloc(n * sizeof(double));
  double *rhsi = (double*)Malloc(n * sizeof(double));
  double *solr = (double*)Malloc(n * sizeof(double));
  double *soli = (double*)Malloc(n * sizeof(double));

  int k = 0;
  for(int i = 0; i < n; i++){
    PetscInt ncols;
    const PetscInt *cols;
    const PetscScalar *vals;
    _try(MatGetRow(A->M, i, &ncols, &cols, &vals));
    for(int j = 0; j < ncols; j++){
      if(k >= nnz){
	Msg::Error("Something wrong in nnz: %d >= %d", k, nnz);
	return;
      }
      row[k] = i;
      col[k] = cols[j];
      Msg::Debug("A[%d][%d] = ", row[k], col[k]);
#if defined(PETSC_USE_COMPLEX)
      valr[k] = real(vals[j]);
      vali[k] = imag(vals[j]);
      Msg::Debug("%g+i*%g", valr[k], vali[k]);
#else
      valr[k] = vals[j];
      vali[k] = 0.;
      Msg::Debug("%g", valr[k]);
#endif
      k++;
    }
    _try(MatRestoreRow(A->M, i, &ncols, &cols, &vals));
  }

  Msg::Info("n = %d, nnz = %d (check k = %d)", n, nnz, k);

  PetscScalar *b, *x;
  _try(VecGetArray(B->V, &b));
  _try(VecGetArray(X->V, &x));
  for(int i = 0; i < n; i++){
#if defined(PETSC_USE_COMPLEX)
    rhsr[i] = real(b[i]);
    rhsi[i] = imag(b[i]);
    solr[i] = real(x[i]);
    soli[i] = imag(x[i]);
#else
    rhsr[i] = b[i];
    rhsi[i] = 0.;
    solr[i] = x[i];
    soli[i] = 0.;
#endif
  }
  _try(VecRestoreArray(B->V, &b));
  _try(VecRestoreArray(X->V, &x));

  int its = getdp_zitsol(n, nnz, row, col, valr, vali, rhsr, rhsi, solr, soli,
                         precond, lfil, tol0, tol, im, maxits);
  if(its >= maxits)
    Msg::Error("Did not converge in %d iterations", maxits);
  else
    Msg::Info("Converged in %d iterations", its);
  
  for(PetscInt i = 0; i < n; i++){
    PetscScalar d;
#if defined(PETSC_USE_COMPLEX)
    d = solr[i] + PETSC_i * soli[i];
#else
    d = solr[i];
#endif
    _try(VecSetValues(X->V, 1, &i, &d, INSERT_VALUES));
  }
  
  Free(row); Free(col);
  Free(valr); Free(vali);
  Free(rhsr); Free(rhsi);
  Free(solr); Free(soli);
}

#endif

static PetscErrorCode _myKspMonitor(KSP ksp, PetscInt it, PetscReal rnorm, void *mctx)
{
  Msg::Info("%3ld KSP Residual norm %14.12e", (long)it, rnorm);
  return 0;
}

static void _solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, 
                   int precond, int kspIndex)
{
#if defined(HAVE_ZITSOL)
  // testing Yousef's new preconditioners and solvers
  PetscTruth set, zitsol = PETSC_FALSE;
  PetscOptionsGetTruth(PETSC_NULL, "-zitsol", &zitsol, &set);
  if(zitsol){ _zitsol(A, B, X); return; }
#endif

  if(kspIndex < 0 || kspIndex > 9){
    Msg::Error("Linear Solver index out of range (%d)", kspIndex);
    return;
  }

  PetscInt i, j;
  _try(MatGetSize(A->M, &i, &j));
  if(!i){
    Msg::Warning("Zero-size system: skipping solve!");
    return;
  }

  bool view = (!Solver->ksp[kspIndex] && Msg::GetVerbosity() > 2);

  if(view && !Msg::GetCommRank())
    Msg::Info("N: %ld", (long)i);

  if(kspIndex != 0)
    Msg::Info("Using solver index %d", kspIndex);

  if(!Solver->ksp[kspIndex]) {
    _try(KSPCreate(PETSC_COMM_WORLD, &Solver->ksp[kspIndex]));
    _try(KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M, DIFFERENT_NONZERO_PATTERN));
    if(Msg::UseSocket())
      _try(KSPMonitorSet(Solver->ksp[kspIndex], _myKspMonitor, PETSC_NULL, PETSC_NULL));
    PC pc;
    _try(KSPGetPC(Solver->ksp[kspIndex], &pc));

    // set some default options
    _try(KSPSetTolerances(Solver->ksp[kspIndex], 1.e-12, PETSC_DEFAULT, PETSC_DEFAULT, 
                          PETSC_DEFAULT));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS) // use MUMPS by default if available
    _try(PCSetType(pc, PCLU));
    _try(PCFactorSetMatSolverPackage(pc, "mumps"));
    _try(KSPSetType(Solver->ksp[kspIndex], "preonly"));
#elif (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_UMFPACK) // otherwise use UMFPACK if available
    _try(PCSetType(pc, PCLU));
    _try(PCFactorSetMatSolverPackage(pc, "umfpack"));
    _try(KSPSetType(Solver->ksp[kspIndex], "preonly"));
#else // otherwise use ILU(6) + GMRES
    _try(PCSetType(pc, PCILU));
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR == 0)
    _try(PCILUSetMatOrdering(pc, MATORDERING_RCM));
    _try(PCILUSetLevels(pc, 6));
#elif (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 3)
    _try(PCFactorSetMatOrdering(pc, MATORDERING_RCM));
    _try(PCFactorSetLevels(pc, 6));
#else
    _try(PCFactorSetMatOrderingType(pc, MATORDERING_RCM));
    _try(PCFactorSetLevels(pc, 6));
#endif
#endif

    // override the default options with the ones from the option
    // database (if any)
    _try(KSPSetFromOptions(Solver->ksp[kspIndex]));
  }
  else if(precond){
    _try(KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M, DIFFERENT_NONZERO_PATTERN));
  }

  _try(KSPSolve(Solver->ksp[kspIndex], B->V, X->V));

  // copy result on all procs
  _fillseq(X);

  if(view)
    _try(KSPView(Solver->ksp[kspIndex], PETSC_VIEWER_STDOUT_WORLD));
  
  if(!Msg::GetCommRank()){
    PetscInt its;
    _try(KSPGetIterationNumber(Solver->ksp[kspIndex], &its));
    Msg::Info("%d iterations", its);
  }
}

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex)
{
  _solve(A, B, Solver, X, 1, solverIndex);
}

void LinAlg_SolveAgain(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex)
{
  _solve(A, B, Solver, X, 0, solverIndex);
}

#endif
