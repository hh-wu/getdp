// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
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
// By default we use a direct solver (MUMPS, UMFPACK or the PETSc LU).
//
// All these options can be changed at runtime. For example you could
// use
//
//   -pc_type ilu
//   -pc_factor_levels 0
//   -ksp_type gmres
//   -ksp_rtol 1.e-6
//   -ksp_gmres_restart 500
//   -ksp_monitor
//
// for GMRES with ILU(0), with a restart of 500 and a stopping
// criterion of 1e-6.

static MPI_Comm MyComm = MPI_COMM_SELF;
static PetscViewer MyPetscViewer;

static void _try(int ierr)
{
  CHKERRCONTINUE(ierr);
  if(PetscUnlikely(ierr)){
    const char *text;
    PetscErrorMessage(ierr, &text, 0);
    // Do not produce an error in case of a PETSc-crash when we are in
    // TimeLoopAdaptive loop
    if (Message::GetOperatingInTimeLoopAdaptive())
      Message::Warning("PETSc error: %s", text);
    else
      Message::Error("PETSc error: %s", text);
    Message::SetLastPETScError(ierr);
  }
}

static int SolverInitialized = 0;

#if ((PETSC_VERSION_RELEASE == 0) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 7)))
#define PetscTruth PetscBool
#define PetscOptionsGetTruth(A, B, C, D) PetscOptionsGetBool(A, NULL, B, C, D)
#define PetscOptionsInsertFile(A, B, C) PetscOptionsInsertFile(A, NULL, B, C)
#define PetscOptionsGetInt(A, B, C, D) PetscOptionsGetInt(NULL, A, B, C, D);
#define PetscOptionsSetValue(A, B) PetscOptionsSetValue(NULL, A, B)
#define PetscOptionsInsertString(A) PetscOptionsInsertString(NULL, A)
#define PetscViewerSetFormat(A, B) PetscViewerPushFormat(A, B)
#elif ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2))
#define PetscTruth PetscBool
#define PetscOptionsGetTruth PetscOptionsGetBool
#endif

void LinAlg_InitializeSolver(int* argc, char*** argv)
{
  if(SolverInitialized) return;
  SolverInitialized = 1;

  // This function detects if MPI is initialized
  PetscInitialize(argc, argv, PETSC_NULL, PETSC_NULL);
  PetscPopSignalHandler();
  MyPetscViewer = PETSC_VIEWER_STDOUT_SELF;
  MyComm = PETSC_COMM_WORLD;
#if defined(HAVE_SLEPC)
  SlepcInitialize(argc, argv, PETSC_NULL, PETSC_NULL);
#endif

  // get additional petsc options from specified file (useful e.g. on
  // Windows where we don't know where to search for ~/.petscrc)
  for(int i = 0; i < *argc - 1; i++){
    if (!strcmp((*argv)[i], "-solver")){
#if (PETSC_VERSION_MAJOR == 2)
      PetscOptionsInsertFile((*argv)[i+1]);
#else
      PetscOptionsInsertFile(MyComm, (*argv)[i+1], PETSC_FALSE);
#endif
    }
  }
}

void LinAlg_FinalizeSolver()
{
  // this causes random crashes with PETSC 3 when doing several
  // initialize/finalize calls (when using getdp as a library). Until we figure
  // out what's happening, let's simply initialize petsc/slepc once, and never
  // finalize.
#if (PETSC_VERSION_MAJOR == 3)  && (PETSC_VERSION_MINOR <= 7)
  return;
#endif

  if(SolverInitialized){
#if defined(HAVE_SLEPC)
    SlepcFinalize();
#endif
    PetscFinalize();
    SolverInitialized = 0;
  }
}

void LinAlg_SetCommSelf()
{
  Message::Info("Set communicator to SELF");
  MyComm = PETSC_COMM_SELF;
  Message::SetIsCommWorld(0);
}

void LinAlg_SetCommWorld()
{
  Message::Info("Set communicator to WORLD");
  MyComm = PETSC_COMM_WORLD;
  Message::SetIsCommWorld(1);
}

void LinAlg_CreateSolver(gSolver *Solver, const char *SolverDataFileName)
{
  for(int i = 0; i < 10; i++){
    Solver->ksp[i] = NULL;
    Solver->snes[i] = NULL;
  }
}

void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n)
{
  _try(VecCreate(MyComm, &V->V));
  _try(VecSetSizes(V->V, PETSC_DECIDE, n));

  // override the default options with the ones from the option
  // database (if any)
  _try(VecSetFromOptions(V->V));

  // create sequential vector that will contain all the values on all
  // the procs
  if(Message::GetCommSize() > 1 && MyComm != PETSC_COMM_SELF){
    _try(VecCreateSeq(PETSC_COMM_SELF, n, &V->Vseq));
    V->haveSeq = 1;
  }
  else{
    V->haveSeq = 0;
  }
}

void _fillseq(Vec &V, Vec &Vseq)
{
  // collect all the values from the parallel petsc vector into a sequential
  // vector on each processor
  VecScatter ctx;
  VecScatterCreateToAll(V, &ctx, NULL);
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 3)
  VecScatterBegin(V, Vseq, INSERT_VALUES, SCATTER_FORWARD, ctx);
  VecScatterEnd(V, Vseq, INSERT_VALUES, SCATTER_FORWARD, ctx);
#else
  VecScatterBegin(ctx, V, Vseq, INSERT_VALUES, SCATTER_FORWARD);
  VecScatterEnd(ctx, V, Vseq, INSERT_VALUES, SCATTER_FORWARD);
#endif

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  VecScatterDestroy(&ctx);
#else
  VecScatterDestroy(ctx);
#endif
}

static void _fillseq(gVector *V)
{
  if(V->haveSeq) _fillseq(V->V, V->Vseq);
}

void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m)
{
  PetscInt prealloc = 100;
  PetscInt prealloc_full = n;
  int nonloc = Current.DofData->NonLocalEquations.size();

  // heuristic for preallocation of global rows: don't prelloc more than 100 Mb
  int onegig = (int)(100 * 1024 * 1024 / (gSCALAR_SIZE * sizeof(double)));
  if(nonloc * n > onegig){
    prealloc_full = (int)(onegig / nonloc);
    Message::Debug("Heuristic -petsc_prealloc_full changed to %d", prealloc_full);
  }

  PetscTruth set;
  PetscOptionsGetInt(PETSC_NULL, "-petsc_prealloc", &prealloc, &set);
  PetscOptionsGetInt(PETSC_NULL, "-petsc_prealloc_full", &prealloc_full, &set);

  // prealloc cannot be bigger than the number of rows!
  prealloc = (n < prealloc) ? n : prealloc;
  prealloc_full = (n < prealloc_full) ? n : prealloc_full;

  std::vector<PetscInt> nnz(n, prealloc);

  // preallocate non local equations as full lines (this is not
  // optimal, but preallocating too few elements leads to horrible
  // assembly performance: petsc really sucks at dynamic reallocation
  // in the AIJ matrix format)
  for(int i = 0; i < nonloc; i++)
    nnz[Current.DofData->NonLocalEquations[i] - 1] = prealloc_full;

  if(Message::GetCommSize() > 1){ // FIXME: alloc full lines...
#if ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 3))
    _try(MatCreateAIJ(MyComm, PETSC_DECIDE, PETSC_DECIDE, n, m,
                      prealloc, PETSC_NULL, prealloc, PETSC_NULL, &M->M));
#else
    _try(MatCreateMPIAIJ(MyComm, PETSC_DECIDE, PETSC_DECIDE, n, m,
                         prealloc, PETSC_NULL, prealloc, PETSC_NULL, &M->M));
#endif
  }
  else{
    _try(MatCreateSeqAIJ(PETSC_COMM_SELF, n, m, 0, &nnz[0], &M->M));
    // PETSc (I)LU does not like matrices with empty (non assembled) diagonals

    for(int i = 0; i < n; i++){
      PetscScalar d = 0.;
      _try(MatSetValues(M->M, 1, &i, 1, &i, &d, INSERT_VALUES));
    }
    _try(MatAssemblyBegin(M->M, MAT_FLUSH_ASSEMBLY));
    _try(MatAssemblyEnd(M->M, MAT_FLUSH_ASSEMBLY));

  }

  //MatSetOption(M->M, MAT_NEW_NONZERO_ALLOCATION_ERR, PETSC_FALSE);

#if ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 3))
  // Preallocation routines automatically set now MAT_NEW_NONZERO_ALLOCATION_ERR,
  // what causes a problem when the mask of the matrix changes (e.g. moving band)
  // We must disable the error generation and allow new allocation (if needed)
  _try(MatSetOption(M->M,MAT_NEW_NONZERO_ALLOCATION_ERR,PETSC_FALSE));
#endif

  // override the default options with the ones from the option
  // database (if any)
  _try(MatSetFromOptions(M->M));

}

void LinAlg_DestroySolver(gSolver *Solver)
{
  for(int i = 0; i < 10; i++){
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    if(Solver->ksp[i]) _try(KSPDestroy(&Solver->ksp[i]));
    if(Solver->snes[i]) _try(SNESDestroy(&Solver->snes[i]));
#else
    if(Solver->ksp[i]) _try(KSPDestroy(Solver->ksp[i]));
    if(Solver->snes[i]) _try(SNESDestroy(Solver->snes[i]));
#endif
  }
}

void LinAlg_DestroyVector(gVector *V)
{
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(VecDestroy(&V->V));
  if(V->haveSeq) _try(VecDestroy(&V->Vseq));
#else
  _try(VecDestroy(V->V));
  if(V->haveSeq) _try(VecDestroy(V->Vseq));
#endif
}

void LinAlg_DestroyMatrix(gMatrix *M)
{
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(MatDestroy(&M->M));
#else
  _try(MatDestroy(M->M));
#endif
}

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2)
{
  S1->s = S2->s;
}

void LinAlg_CopyVector(gVector *V1, gVector *V2)
{
  _try(VecCopy(V1->V, V2->V));
  if(V1->haveSeq) _try(VecCopy(V1->Vseq, V2->Vseq));
}

void LinAlg_SwapVector(gVector *V1, gVector *V2)
{
  _try(VecSwap(V1->V, V2->V));
  if(V1->haveSeq) _try(VecSwap(V1->Vseq, V2->Vseq));
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
  if(V->haveSeq) _try(VecSet(V->Vseq, zero));
}

void LinAlg_ZeroMatrix(gMatrix *M)
{
  _try(MatZeroEntries(M->M));
}

void LinAlg_ScanScalar(FILE *file, gScalar *S)
{
#if defined(PETSC_USE_COMPLEX)
  double a, b;
  if(fscanf(file, "%lf %lf", &a, &b) != 2)
    Message::Error("Could not scan scalar");
  S->s = a + PETSC_i * b;
#else
  if(fscanf(file, "%lf", &S->s) != 1)
    Message::Error("Could not scan scalar");
#endif
}

void LinAlg_ScanVector(FILE *file, gVector *V)
{
  PetscInt n;
  _try(VecGetSize(V->V, &n));
  for(PetscInt i = 0; i < n; i++){
    PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
    double a, b;
    if(fscanf(file, "%lf %lf", &a, &b) != 2)
      Message::Error("Could not read data in vector");
    tmp = a + PETSC_i * b;
#else
    double a;
    if(fscanf(file, "%lf", &a) != 1)
      Message::Error("Could not read data in vector");
    tmp = a;
#endif
    _try(VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES));
  }
  LinAlg_AssembleVector(V);
}

void LinAlg_ScanMatrix(FILE *file, gMatrix *M)
{
  Message::Error("ScanMatrix not yet implemented");
}

void LinAlg_ReadScalar(FILE *file, gScalar *S)
{
  Message::Error("ReadScalar not yet implemented");
}

void LinAlg_ReadVector(FILE *file, gVector *V)
{
  PetscInt n;
  _try(VecGetSize(V->V, &n));
  PetscScalar *tmp = (PetscScalar*)Malloc(n*sizeof(PetscScalar));
  fread(tmp, sizeof(PetscScalar), n, file);
  for(PetscInt i = 0; i < n; i++){
    _try(VecSetValues(V->V, 1, &i, &tmp[i], INSERT_VALUES));
  }
  LinAlg_AssembleVector(V);
  Free(tmp);
}

void LinAlg_ReadMatrix(FILE *file, gMatrix *M)
{
  Message::Error("ReadMatrix not yet implemented");
}

void LinAlg_PrintScalar(FILE *file, gScalar *S)
{
#if defined(PETSC_USE_COMPLEX)
  fprintf(file, "%.16g %.16g", real(S->s), imag(S->s));
#else
  fprintf(file, "%.16g", S->s);
#endif
}

void LinAlg_PrintVector(FILE *file, gVector *V, bool matlab,
                        const char* fileName, const char* varName)
{
  if(!matlab){
    PetscInt n;
    _try(VecGetSize(V->V, &n));
    Vec VV = V->haveSeq ? V->Vseq : V->V;
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
    _try(PetscViewerASCIIOpen(MyComm, fileName, &fd));
    _try(PetscViewerSetFormat(fd, PETSC_VIEWER_ASCII_MATLAB));
    _try(PetscObjectSetName((PetscObject)V->V, varName));
    _try(VecView(V->V, fd));
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    _try(PetscViewerDestroy(&fd));
#else
    _try(PetscViewerDestroy(fd));
#endif
  }
}

void LinAlg_PrintMatrix(FILE *file, gMatrix *M, bool matlab,
                        const char* fileName, const char* varName)
{
  if(!matlab){
    PetscInt n, m;
    _try(MatGetSize(M->M, &n, &m));
    for(int i = 0; i < n; i++){
      PetscInt ncols;
      const PetscInt *cols;
      const PetscScalar *vals;
      _try(MatGetRow(M->M, i, &ncols, &cols, &vals));
      for(int j = 0; j < m; j++){
#if defined(PETSC_USE_COMPLEX)
        fprintf(file, "[%d, %d] %.16g %.16g\n", i, j, real(vals[j]), imag(vals[j]) );
#else
        fprintf(file, "[%d, %d] %.16g\n", i, j, vals[j]);
#endif
      }
      _try(MatRestoreRow(M->M, i, &ncols, &cols, &vals));
    }
  }
  else{
    // ASCII
    PetscViewer fd;
    _try(PetscViewerASCIIOpen(MyComm, fileName, &fd));
    _try(PetscViewerSetFormat(fd, PETSC_VIEWER_ASCII_MATLAB));
    _try(PetscObjectSetName((PetscObject)M->M, varName));
    _try(MatView(M->M, fd));

    // Binary
    PetscViewer fd2;
    std::string tmp(fileName);
    _try(PetscViewerBinaryOpen(MyComm, (tmp + ".bin").c_str(), FILE_MODE_WRITE, &fd2));
    _try(PetscViewerSetFormat(fd2, PETSC_VIEWER_DEFAULT));
    _try(MatView(M->M, fd2));

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    _try(PetscViewerDestroy(&fd));
    _try(PetscViewerDestroy(&fd2));
#else
    _try(PetscViewerDestroy(fd));
    _try(PetscViewerDestroy(fd2));
#endif
  }
}

void LinAlg_WriteScalar(FILE *file, gScalar *S)
{
  Message::Error("WriteScalar not yet implemented");
}

void LinAlg_WriteVector(FILE *file, gVector *V)
{
  PetscInt n;
  _try(VecGetSize(V->V, &n));
  Vec VV = V->haveSeq ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
  fwrite(tmp, sizeof(PetscScalar), n, file);
  fprintf(file, "\n");
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_WriteMatrix(FILE *file, gMatrix *M)
{
  Message::Error("WriteMatrix not yet implemented");
}

void LinAlg_GetVectorSize(gVector *V, int *i)
{
  PetscInt t;
  _try(VecGetSize(V->V, &t));
  if(t > INT_MAX) Message::Error("Problem too big");
  *i = t;
}

void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high)
{
  PetscInt tlow, thigh;
  _try(VecGetOwnershipRange(V->V, &tlow, &thigh));
  if(tlow > INT_MAX || thigh > INT_MAX) Message::Error("Problem too big");
  *low = tlow;
  *high = thigh;
}

static bool _isInLocalRange(gVector *V, int i)
{
  if(Message::GetCommSize() == 1) return true;
  int imin, imax;
  LinAlg_GetLocalVectorRange(V, &imin, &imax);
  return (i >= imin && i < imax);
}

void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j)
{
  PetscInt ti, tj;
  _try(MatGetSize(M->M, &ti, &tj));
  if(ti > INT_MAX || tj > INT_MAX) Message::Error("Problem too big");
  *i = ti;
  *j = tj;
}

void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high)
{
  PetscInt tlow, thigh;
  _try(MatGetOwnershipRange(M->M, &tlow, &thigh));
  if(tlow > INT_MAX || thigh > INT_MAX) Message::Error("Problem too big");
  *low = tlow;
  *high = thigh;
}

static bool _isInLocalRange(gMatrix *M, int i)
{
  if(Message::GetCommSize() == 1) return true;
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
  Message::Error("'LinAlg_GetComplexInScalar' not available with this Solver");
#endif
}

void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i)
{
  Vec VV = V->haveSeq ? V->Vseq : V->V;
  PetscScalar *tmp;
  _try(VecGetArray(VV, &tmp));
  S->s = tmp[i];
  _try(VecRestoreArray(VV, &tmp));
}

void LinAlg_GetDoubleInVector(double *d, gVector *V, int i)
{
  Vec VV = V->haveSeq ? V->Vseq : V->V;
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
  Vec VV = V->haveSeq ? V->Vseq : V->V;
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
  Vec VV = V->haveSeq ? V->Vseq : V->V;
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
  if(!_isInLocalRange(M, i)) return;
  PetscInt ti = i, tj = j;
  _try(MatGetValues(M->M, 1, &ti, 1, &tj, &S->s));
}

void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j)
{
  if(!_isInLocalRange(M, i)) return;
  PetscInt ti = i, tj = j;
  _try(MatGetValues(M->M, 1, &ti, 1, &tj, (PetscScalar*)d));
}

void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M,
                               int i, int j, int k, int l)
{
#if defined(PETSC_USE_COMPLEX)
  PetscScalar tmp;
  PetscInt ti = i, tj = j;
  if(_isInLocalRange(M, i)){
    _try(MatGetValues(M->M, 1, &ti, 1, &tj, &tmp));
    *d1 = real(tmp) ;
    *d2 = imag(tmp) ;
  }
#else
  PetscInt ti = i, tj = j, tk = k, tl = l;
  if(_isInLocalRange(M, i))
    _try(MatGetValues(M->M, 1, &ti, 1, &tj, (PetscScalar*)d1));
  if(_isInLocalRange(M, k))
    _try(MatGetValues(M->M, 1, &tk, 1, &tl, (PetscScalar*)d2));
#endif
}

void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1)
{
  Message::Error("GetColumnInMatrix not yet implemented");
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
  if(V->haveSeq) _try(VecSet(V->Vseq, tmp));
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
  if(!_isInLocalRange(M, i)) return;
  PetscInt ti = i, tj = j;
  _try(MatSetValues(M->M, 1, &ti, 1, &tj, (PetscScalar*)&d, INSERT_VALUES));
}

void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M,
                               int i, int j, int k, int l)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  PetscInt ti = i, tj = j;
  if(_isInLocalRange(M, i)){
    tmp = d1 + PETSC_i * d2;
    _try(MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, INSERT_VALUES));
  }
#else
  PetscInt ti = i, tj = j, tk = k, tl = l;
  if(d1){
    tmp = d1;
    if(_isInLocalRange(M, i))
      _try(MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, INSERT_VALUES));
    if(_isInLocalRange(M, k))
      _try(MatSetValues(M->M, 1, &tk, 1, &tl, &tmp, INSERT_VALUES));
  }
  if(d2){
    if(_isInLocalRange(M, i)){
      tmp = -d2;
      _try(MatSetValues(M->M, 1, &ti, 1, &tl, &tmp, INSERT_VALUES));
    }
    if(_isInLocalRange(M, k)){
      tmp = d2;
      _try(MatSetValues(M->M, 1, &tk, 1, &tj, &tmp, INSERT_VALUES));
    }
  }
#endif
}

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s + S2->s;
}

void LinAlg_DummyVector(gVector *V)
{
  PetscInt n;
  PetscScalar zero = 0.0;

  if (Current.DofData->DummyDof == NULL) return ;

  _try(VecGetSize(V->V, &n));
  for(PetscInt i = 0; i < n; i++)
    if (Current.DofData->DummyDof[i]==1)
      _try(VecSetValues(V->V, 1, &i, &zero, INSERT_VALUES));
}

void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i)
{
  if(!_isInLocalRange(V, i)) return;

  if(Current.DofData->DummyDof)
    if(Current.DofData->DummyDof[i]==1) return ;

  PetscInt ti = i;
  _try(VecSetValues(V->V, 1, &ti, &S->s, ADD_VALUES));
}

void LinAlg_AddDoubleInVector(double d, gVector *V, int i)
{
  if(!_isInLocalRange(V, i)) return;

  if(Current.DofData->DummyDof)
    if(Current.DofData->DummyDof[i]==1) return ;

  PetscScalar tmp = d;
  PetscInt ti = i;
  _try(VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES));
}

void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  PetscScalar tmp;
  int iok=1, jok=1;

  if(Current.DofData->DummyDof){
    if(Current.DofData->DummyDof[i]==1) iok=0;
    if(Current.DofData->DummyDof[j]==1) jok=0;
  }

#if defined(PETSC_USE_COMPLEX)
  if(_isInLocalRange(V, i) && iok && jok){
    PetscInt ti = i;
    tmp = d1 + PETSC_i * d2;
    _try(VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES));
  }
#else
  PetscInt ti = i, tj = j;
  if(_isInLocalRange(V, i) && iok){
    tmp = d1;
    _try(VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES));
  }
  if(_isInLocalRange(V, j) && jok){
    tmp = d2;
    _try(VecSetValues(V->V, 1, &tj, &tmp, ADD_VALUES));
  }
#endif
}

void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  if(!_isInLocalRange(M, i)) return;

  if (Current.DofData->DummyDof)
    if ( (Current.DofData->DummyDof[i]==1 || Current.DofData->DummyDof[j]==1) && (i!=j) )
      return;

  PetscInt ti = i, tj = j;
  _try(MatSetValues(M->M, 1, &ti, 1, &tj, &S->s, ADD_VALUES));
}

void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  if(!_isInLocalRange(M, i)) return;

  if (Current.DofData->DummyDof)
    if ( (Current.DofData->DummyDof[i]==1 || Current.DofData->DummyDof[j]==1) && (i!=j) )
      return;

  PetscScalar tmp = d;
  PetscInt ti = i, tj = j;
  _try(MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES));
}

void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M,
                               int i, int j, int k, int l)
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
    Message::Error("Wrong arguments in 'LinAlg_AddVectorVector'");
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
    Message::Error("Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");
}

void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  PetscScalar tmp = 1.0;
  if(M3 == M1)
    _try(MatAXPY(M1->M, tmp, M2->M, DIFFERENT_NONZERO_PATTERN));
  else if(M3 == M2)
    _try(MatAXPY(M2->M, tmp, M1->M, DIFFERENT_NONZERO_PATTERN));
  else
    Message::Error("Wrong arguments in 'LinAlg_AddMatrixMatrix'");
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
    Message::Error("Wrong arguments in 'LinAlg_AddMatrixProdMatrixDouble'");
}

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s - S2->s;
}

void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3)
{
  PetscScalar tmp = -1.0;
  if(V3 == V1){
    _try(VecAXPY(V1->V, tmp, V2->V)); // V1->V = V1->V - V2->V
    _fillseq(V1);
  }
  else if(V3 == V2){
    _try(VecAYPX(V2->V, tmp, V1->V)); // V2->V = V1->V - V2->V
    _fillseq(V2);
  }
  else
    Message::Error("Wrong arguments in 'LinAlg_SubVectorVector'");
}

void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{

  PetscScalar tmp = -1.0;
  if(M3 == M1) // M1->M = M1->M - M2->M
    _try(MatAXPY(M1->M, tmp, M2->M, DIFFERENT_NONZERO_PATTERN));
  else if(M3 == M2) // M2->M = M1->M - M2->M
    _try(MatAYPX(M2->M, tmp, M1->M, DIFFERENT_NONZERO_PATTERN));
  else
    Message::Error("Wrong arguments in 'LinAlg_SubMatrixMatrix'");
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
    Message::Error("Wrong arguments in 'LinAlg_ProdVectorScalar'");
}

void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2)
{
  PetscScalar tmp = d;
  if(V2 == V1){
    _try(VecScale(V1->V, tmp));
    _fillseq(V1);
  }
  else
    Message::Error("Wrong arguments in 'LinAlg_ProdVectorDouble'");
}

void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2)
{
  Message::Error("ProdVectorComplex not yet implemented");
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
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixVector'");
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
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixScalar'");
}

void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2)
{
  PetscScalar tmp = d;
  if(M2 == M1)
    _try(MatScale(M1->M, tmp));
  else
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
}

void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2)
{
#if defined(PETSC_USE_COMPLEX)
  if(M2 == M1){
    PetscScalar tmp = d1 + (PETSC_i * d2);
    _try(MatScale(M1->M, tmp));
  }
  else
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
#else
  Message::Error("ProdMatrixComplex not yet implemented");
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
  Message::Barrier();
  _try(MatAssemblyBegin(M->M, MAT_FINAL_ASSEMBLY));
  _try(MatAssemblyEnd(M->M, MAT_FINAL_ASSEMBLY));
}

void LinAlg_AssembleVector(gVector *V)
{
  Message::Barrier();
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
	Message::Error("Something wrong in nnz: %d >= %d", k, nnz);
	return;
      }
      row[k] = i;
      col[k] = cols[j];
      Message::Debug("A[%d][%d] = ", row[k], col[k]);
#if defined(PETSC_USE_COMPLEX)
      valr[k] = real(vals[j]);
      vali[k] = imag(vals[j]);
      Message::Debug("%g+i*%g", valr[k], vali[k]);
#else
      valr[k] = vals[j];
      vali[k] = 0.;
      Message::Debug("%g", valr[k]);
#endif
      k++;
    }
    _try(MatRestoreRow(A->M, i, &ncols, &cols, &vals));
  }

  Message::Info("n = %d, nnz = %d (check k = %d)", n, nnz, k);

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
    Message::Error("Did not converge in %d iterations", maxits);
  else
    Message::Info("Converged in %d iterations", its);

  Current.KSPIts = its;

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
  Message::Info("%3ld KSP Residual norm %14.12e", (long)it, rnorm);
  // Current.KSPResidual = rnorm;
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
    Message::Error("Linear Solver index out of range (%d)", kspIndex);
    return;
  }

  PetscInt i, j;
  _try(MatGetSize(A->M, &i, &j));
  if(!i){
    Message::Warning("Zero-size system: skipping solve!");
    return;
  }

  int view = !Solver->ksp[kspIndex];

  if(kspIndex != 0)
    Message::Info("Using solver index %d", kspIndex);

  if(!Solver->ksp[kspIndex]) {
    _try(KSPCreate(MyComm, &Solver->ksp[kspIndex]));
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 5)))
    _try(KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M));
#else
    _try(KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M, DIFFERENT_NONZERO_PATTERN));
#endif
    _try(KSPMonitorSet(Solver->ksp[kspIndex], _myKspMonitor, PETSC_NULL, PETSC_NULL));
    PC pc;
    _try(KSPGetPC(Solver->ksp[kspIndex], &pc));

    // set some default options: use direct solver (PARDISO, MUMPS, UMFPACK, or
    // native PETSc LU)
    _try(KSPSetType(Solver->ksp[kspIndex], "preonly"));
    _try(PCSetType(pc, PCLU));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
    _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#elif (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MKL_PARDISO)
    _try(PCFactorSetMatSolverPackage(pc, "mkl_pardiso"));
#elif (PETSC_VERSION_MAJOR > 2) && (defined(PETSC_HAVE_UMFPACK) || defined(PETSC_HAVE_SUITESPARSE))
    _try(PCFactorSetMatSolverPackage(pc, "umfpack"));
#else
    _try(PetscOptionsSetValue("-pc_factor_nonzeros_along_diagonal", "1e-12"));
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 3)
    _try(PCFactorSetMatOrdering(pc, MATORDERING_RCM));
#else
    _try(PCFactorSetMatOrderingType(pc, MATORDERINGRCM));
#endif
#endif

    // override the default options with the ones from the option database (if
    // any)
    _try(KSPSetFromOptions(Solver->ksp[kspIndex]));

    if(view && (!Message::GetCommRank() || !Message::GetIsCommWorld())){
      // either we are on parallel (!GetIsCommWorld) or in sequential with rank
      // = 0 (GetIsCommWorld)

#if (PETSC_VERSION_RELEASE == 0) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 4))
      const char *ksptype = "";
      _try(KSPGetType(Solver->ksp[kspIndex], &ksptype));
      const char *pctype = "";
      _try(PCGetType(pc, &pctype));
#else
      const KSPType ksptype;
      _try(KSPGetType(Solver->ksp[kspIndex], &ksptype));
      const PCType pctype;
      _try(PCGetType(pc, &pctype));
#endif

#if (PETSC_VERSION_MAJOR > 2)
      const MatSolverPackage stype;
      _try(PCFactorGetMatSolverPackage(pc, &stype));
#else
      const char *stype = "";
#endif
      Message::Info("N: %ld - %s %s %s", long(i), ksptype, pctype, stype);
    }
  }
  else if(precond){
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 5)))
    _try(KSPSetReusePreconditioner(Solver->ksp[kspIndex], PETSC_FALSE));
    _try(KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M));
#else
    _try(KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M, DIFFERENT_NONZERO_PATTERN));
#endif
  }
  else{
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 5)))
    _try(KSPSetReusePreconditioner(Solver->ksp[kspIndex], PETSC_TRUE));
#endif
  }

  _try(KSPSolve(Solver->ksp[kspIndex], B->V, X->V));

  // copy result on all procs
  _fillseq(X);

  if(view && Message::GetVerbosity() > 5)
    _try(KSPView(Solver->ksp[kspIndex], MyPetscViewer));

  PetscInt its;
  _try(KSPGetIterationNumber(Solver->ksp[kspIndex], &its));
  if(!Message::GetCommRank() || !Message::GetIsCommWorld()){
    if(its > 1) Message::Info("%d iterations", its);
  }
  Current.KSPIts = its;
}

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X,
                  int solverIndex)
{
  _solve(A, B, Solver, X, 1, solverIndex);
}

void LinAlg_SolveAgain(gMatrix *A, gVector *B, gSolver *Solver, gVector *X,
                       int solverIndex)
{
  _solve(A, B, Solver, X, 0, solverIndex);
}

void LinAlg_SetGlobalSolverOptions(const std::string &opt)
{
  _try(PetscOptionsInsertString(opt.c_str()));
}


extern void Generate_Residual (gVector *x, gVector *f) ;
extern void Generate_FullJacobian (gVector *x, gMatrix *Jac) ;

static PetscErrorCode _NLFormFunction(SNES snes, Vec x, Vec f, void *mctx)
{
  gVector gx, gf ;
  gx.V = x ;
  gx.haveSeq = 0;
  gf.V = f ;
  gf.haveSeq = 0;
  Generate_Residual(&gx, &gf) ;

  PetscScalar *ff ;
  _try(VecGetArray(gf.V, &ff)) ;
  PetscInt n;
  _try(VecGetSize(f, &n)) ;
  for(PetscInt i = 0; i < n; i++)
    _try(VecSetValues(f, 1, &i, &ff[i], INSERT_VALUES));
  _try(VecGetArray(f, &ff));
  return 0;
}

#if (PETSC_VERSION_MAJOR == 2) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR < 5))
static PetscErrorCode _NLFormJacobian(SNES snes, Vec x, Mat *J, Mat *PC,
                                      MatStructure *flag,
                                      void *mctx)
{
  gVector gx ;
  gx.V = x ;
  gx.haveSeq = 0;
  gMatrix gJ ;
  gJ.M = *J ;
  Generate_FullJacobian(&gx, &gJ);
  *J = gJ.M ;
  *flag = DIFFERENT_NONZERO_PATTERN ;
  Message::Barrier();
  _try(MatAssemblyBegin(*J, MAT_FINAL_ASSEMBLY));
  _try(MatAssemblyEnd(*J, MAT_FINAL_ASSEMBLY));
  if (*PC != *J){
    _try(MatAssemblyBegin(*PC, MAT_FINAL_ASSEMBLY));
    _try(MatAssemblyEnd(*PC, MAT_FINAL_ASSEMBLY));
  }
  return 0;
}
#else
static PetscErrorCode _NLFormJacobian(SNES snes, Vec x, Mat J, Mat PC,
                                      void *mctx)
{
  gVector gx ;
  gx.V = x ;
  gx.haveSeq = 0;
  gMatrix gJ ;
  Generate_FullJacobian(&gx, &gJ);
  //J = gJ.M;
  MatCopy(gJ.M, J, SAME_NONZERO_PATTERN);
  //Message::Barrier();
  return 0;
}
#endif

static PetscErrorCode _mySnesMonitor(SNES snes, PetscInt it, PetscReal rnorm, void *mctx)
{
  Message::Info("%3ld SNES Residual norm %14.12e", (long)it, rnorm);
  return 0;
}

static void _solveNL(gMatrix *A, gVector *B, gMatrix *J, gVector *R, gSolver *Solver,
                     gVector *X, int precond, int solverIndex)
{
  if(solverIndex < 0 || solverIndex > 9){
    Message::Error("NonLinear Solver index out of range (%d)", solverIndex);
    return;
  }

  PetscInt n, m;
  _try(MatGetSize(J->M, &n, &m));
  if(!n){
    Message::Warning("Zero-size jacobian: skipping solve!");
    return;
  }

  bool view = !Solver->snes[solverIndex];

  // either we are on sequential (!GetIsCommWorld) or in parallel with rank = 0
  // (GetIsCommWorld)
  if(view && (!Message::GetCommRank() || !Message::GetIsCommWorld()))
    Message::Info("N: %ld", (long)n);

  if(solverIndex != 0)
    Message::Info("Using nonlinear solver index %d", solverIndex);

  // Setting nonlinear solver defaults
  if(!Solver->snes[solverIndex]) {
    _try(SNESCreate(MyComm, &Solver->snes[solverIndex]));
    _try(SNESMonitorSet(Solver->snes[solverIndex], _mySnesMonitor,
                        PETSC_NULL, PETSC_NULL));
    /* //kj+++
    PetscReal abstol = 1.e-4;  //(PETSC_DEFAULT=1.e-15)
    PetscReal rtol   = 1.e-2;  //(PETSC_DEFAULT=1.e-8)
    PetscReal stol   = 1.e-2;  //(PETSC_DEFAULT=1.e-8)
    PetscInt maxit   = 50;     //(PETSC_DEFAULT=50)
    PetscInt maxf    = 10000;  //(PETSC_DEFAULT=10000)
    _try(SNESSetTolerances(Solver->snes[solverIndex], abstol, rtol,
                           stol, maxit, maxf));
    */
    _try(SNESSetTolerances(Solver->snes[solverIndex], 1.e-12, PETSC_DEFAULT,
                           PETSC_DEFAULT, PETSC_DEFAULT, PETSC_DEFAULT));

    // override default options with those from database (if any)
    //_try(SNESSetType(Solver->snes[solverIndex],SNESNEWTONLS)); // kj+++
    //_try(SNESQNSetType(Solver->snes[solverIndex], SNES_QN_LBFGS)); // kj+++
    _try(SNESSetFromOptions(Solver->snes[solverIndex]));

    /* //kj+++
    SNESType mySNESType;
    _try(SNESGetType(Solver->snes[solverIndex],&mySNESType));
    //Message::Info("Try to show Type");
    Message::Info("SNESType: %s", mySNESType);
    */

    PetscTruth fd_jacobian = PETSC_FALSE, snes_fd = PETSC_FALSE ;
    PetscOptionsGetTruth(PETSC_NULL, "-fd_jacobian", &fd_jacobian, 0);
    PetscOptionsGetTruth(PETSC_NULL, "-snes_fd", &snes_fd, 0);
    if (fd_jacobian || snes_fd) {
      //  Message::Error("Finite Difference Jacobian not yet implemented");

#if (PETSC_VERSION_RELEASE == 0) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 4))
      _try(SNESSetJacobian(Solver->snes[solverIndex], J->M, J->M,
                           SNESComputeJacobianDefault, PETSC_NULL));
#else
      _try(SNESSetJacobian(Solver->snes[solverIndex], J->M, J->M,
                           SNESDefaultComputeJacobian, PETSC_NULL));
#endif
    }
    else {
      Message::Info("Jacobian computed by GetDP");
      _try(SNESSetJacobian(Solver->snes[solverIndex], J->M, J->M, _NLFormJacobian,
                           PETSC_NULL));
    }
    _try(SNESSetFunction(Solver->snes[solverIndex], R->V, _NLFormFunction,
                         PETSC_NULL)); // R(x) = A(x)*x-b
  }

  KSP ksp;
  SNESGetKSP(Solver->snes[solverIndex], &ksp);
  PC pc;
  _try(KSPGetPC(ksp, &pc));
  _try(KSPSetType(ksp, "preonly"));
  _try(PCSetType(pc, PCLU));
#if (PETSC_VERSION_MAJOR > 2) && defined(PETSC_HAVE_MUMPS)
  _try(PCFactorSetMatSolverPackage(pc, "mumps"));
#endif
  _try(SNESSolve(Solver->snes[solverIndex], PETSC_NULL, X->V));

  // copy result on all procs
  _fillseq(X);

  if(view && Message::GetVerbosity() > 5)
    _try(SNESView(Solver->snes[solverIndex], MyPetscViewer));

  if(!Message::GetCommRank() || !Message::GetIsCommWorld()){
    PetscInt its;
    _try(SNESGetIterationNumber(Solver->snes[solverIndex], &its));
    Message::Info("Number of Newton iterations %d", its);
  }
}

void LinAlg_SolveNL(gMatrix *A, gVector *B, gMatrix *J, gVector *R,
                    gSolver *Solver, gVector *X, int solverIndex)
{
  _solveNL(A, B, J, R, Solver, X, 1, solverIndex);
}

#endif
