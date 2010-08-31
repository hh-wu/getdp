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
#include <complex>
#include <string>
#include <cstring>
#include <stdio.h>
#include "GetDPConfig.h"
#include "LinAlg.h"
#include "MallocUtils.h"
#include "Message.h"

#if defined(HAVE_SLEPC)
#include <slepc.h>
#endif

// Johan, we curse you for a thousand generations!
#include "ProData.h"
#include "DofData.h"
extern struct CurrentData Current ;

#if defined(HAVE_PETSC)

/* 
   Options for PETSc can be provided on the command line, or in the file
   ~/.petscrc. 

   By default, we use the following options (GMRES iterative solver,
   1.e-10 relative tolerance with ILU(6) preconditioner and RCMK
   renumbering):

     -pc_type ilu
     -pc_ilu_levels 6 (version 2.3.0) 
        or -pc_factor_levels 6 (version 2.3.1)
     -pc_ilu_mat_ordering_type rcm (version 2.3.0)
        or -pc_factor_mat_ordering rcm (version 2.3.1)
     -ksp_rtol 1.e-10

   Other useful options include:

     -ksp_gmres_restart 100
     -ksp_monitor
     ...

   To use a direct solver (a sparse lu) instead of an iterative
   solver, use

     -ksp_type preonly -pc_type lu

   When PETSc is compiled with external solvers (UMFPACK, SuperLU,
   etc.), they can be accessed simply by changing the matrix type. For
   example, with umfpack:

     -mat_type umfpack (version 2.3.x)
       or -pc_factor_mat_solver_package umfpack (version 3.0.0)
*/

#define MYCHECK(ierr) CHKERRABORT(PETSC_COMM_WORLD,ierr)
static int  ierr, SolverInitialized = 0;

void LinAlg_Initialize(int* argc, char*** argv)
{
  MPI_Init(argc, argv);
}

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

void LinAlg_Finalize()
{
  int flag;
  MPI_Initialized(&flag);
  if(flag) MPI_Finalize();
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

void LinAlg_Barrier()
{
  MPI_Barrier(PETSC_COMM_WORLD);
}

void LinAlg_CreateSolver(gSolver *Solver, const char *SolverDataFileName)
{
  for(int i = 0; i < 10; i++) Solver->ksp[i] = NULL;
}

void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n)
{
  ierr = VecCreate(PETSC_COMM_WORLD, &V->V); MYCHECK(ierr);
  ierr = VecSetSizes(V->V, PETSC_DECIDE, n); MYCHECK(ierr);
  // override the default options with the ones from the option
  // database (if any)
  ierr = VecSetFromOptions(V->V); MYCHECK(ierr);
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

  ierr = MatCreateSeqAIJ(PETSC_COMM_WORLD, n, m, 0, &nnz[0], &M->M);

  // override the default options with the ones from the option
  // database (if any)
  ierr = MatSetFromOptions(M->M); MYCHECK(ierr);
}

void LinAlg_DestroySolver(gSolver *Solver)
{
  for(int i = 0; i < 10; i++){
    if(Solver->ksp[i]){
      ierr = KSPDestroy(Solver->ksp[i]); MYCHECK(ierr);
    }
  }
}

void LinAlg_DestroyVector(gVector *V)
{
  ierr = VecDestroy(V->V); MYCHECK(ierr);
}

void LinAlg_DestroyMatrix(gMatrix *M)
{
  ierr = MatDestroy(M->M); MYCHECK(ierr);
}

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2)
{
  S1->s = S2->s;
}

void LinAlg_CopyVector(gVector *V1, gVector *V2)
{
  ierr = VecCopy(V1->V, V2->V); MYCHECK(ierr);
}

void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2)
{
  ierr = MatCopy(M1->M, M2->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
}

void LinAlg_ZeroScalar(gScalar *S)
{
  S->s = 0.;
}

void LinAlg_ZeroVector(gVector *V)
{
  PetscScalar zero = 0.0;

  ierr = VecSet(V->V, zero); MYCHECK(ierr);
}

void LinAlg_ZeroMatrix(gMatrix *M)
{
  ierr = MatZeroEntries(M->M); MYCHECK(ierr);
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
  PetscInt n;  
  ierr = VecGetSize(V->V, &n); MYCHECK(ierr);
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
    ierr = VecSetValues(V->V, 1, &i, &tmp, INSERT_VALUES); MYCHECK(ierr);
  }
}

void LinAlg_ScanMatrix(FILE *file, gMatrix *M)
{
  Msg::Error("'LinAlg_ScanMatrix' not yet implemented");  
}

void LinAlg_ReadScalar(FILE *file, gScalar *S)
{
  Msg::Error("'LinAlg_ReadScalar' not yet implemented");
}

void LinAlg_ReadVector(FILE *file, gVector *V)
{
  PetscInt n;
  ierr = VecGetSize(V->V, &n); MYCHECK(ierr);
  PetscScalar *tmp = (PetscScalar*)Malloc(n*sizeof(PetscScalar));
  fread(tmp, sizeof(PetscScalar), n, file);
  for(PetscInt i = 0; i < n; i++){
    ierr = VecSetValues(V->V, 1, &i, &tmp[i], INSERT_VALUES); MYCHECK(ierr);
  }
  Free(tmp);
}

void LinAlg_ReadMatrix(FILE *file, gMatrix *M)
{
  Msg::Error("'LinAlg_ReadMatrix' not yet implemented");  
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
    ierr = VecGetLocalSize(V->V, &n); MYCHECK(ierr);
    PetscScalar *tmp;
    ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
    for (int i = 0; i < n; i++){
#if defined(PETSC_USE_COMPLEX)
      fprintf(file, "%.16g %.16g\n", real(tmp[i]), imag(tmp[i]));
#else
      fprintf(file, "%.16g\n", tmp[i]);
#endif
    }
    fflush(file);
    ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);
  }
  else{
    PetscViewer fd;
    PetscViewerASCIIOpen(PETSC_COMM_WORLD, "vector.m", &fd); MYCHECK(ierr);
    ierr = PetscViewerSetFormat(fd, PETSC_VIEWER_ASCII_MATLAB); MYCHECK(ierr);
    ierr = VecView(V->V, fd); MYCHECK(ierr);
    ierr = PetscViewerDestroy(fd); MYCHECK(ierr);
  }
} 

void LinAlg_PrintMatrix(FILE *file, gMatrix *M, bool matlab)
{
  if(!matlab) Msg::Error("Non-matlab output not available for this matrix");
  PetscViewer fd;
  PetscViewerASCIIOpen(PETSC_COMM_WORLD, "matrix.m", &fd); MYCHECK(ierr);
  ierr = PetscViewerSetFormat(fd, PETSC_VIEWER_ASCII_MATLAB); MYCHECK(ierr);
  ierr = MatView(M->M, fd); MYCHECK(ierr);
  ierr = PetscViewerDestroy(fd); MYCHECK(ierr);
}

void LinAlg_WriteScalar(FILE *file, gScalar *S)
{
  Msg::Error("'LinAlg_WriteScalar' not yet implemented");
}

void LinAlg_WriteVector(FILE *file, gVector *V)
{
  PetscInt n;
  ierr = VecGetLocalSize(V->V, &n); MYCHECK(ierr);
  PetscScalar *tmp;
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
  fwrite(tmp, sizeof(PetscScalar), n, file);
  fprintf(file, "\n");
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);
}

void LinAlg_WriteMatrix(FILE *file, gMatrix *M)
{
  Msg::Error("'LinAlg_WriteMatrix' not yet implemented");  
}

void LinAlg_GetVectorSize(gVector *V, int *i)
{
  PetscInt t;
  ierr = VecGetSize(V->V, &t); MYCHECK(ierr);
  if(t > INT_MAX) Msg::Error("Problem too big\n");
  *i = t;
}

void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high)
{
  PetscInt tlow, thigh;
  ierr = VecGetOwnershipRange(V->V, &tlow, &thigh); MYCHECK(ierr);
  if(tlow > INT_MAX || thigh > INT_MAX) Msg::Error("Problem too big");
  *low = tlow;
  *high = thigh;
}

void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j)
{
  PetscInt ti, tj;
  ierr = MatGetSize(M->M, &ti, &tj); MYCHECK(ierr);
  if(ti > INT_MAX || tj > INT_MAX) Msg::Error("Problem too big");
  *i = ti;
  *j = tj;
}

void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high)
{
  PetscInt tlow, thigh;
  ierr = MatGetOwnershipRange(M->M, &tlow, &thigh); MYCHECK(ierr);
  if(tlow > INT_MAX || thigh > INT_MAX) Msg::Error("Problem too big");
  *low = tlow;
  *high = thigh;
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
  PetscScalar *tmp;
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
  S->s = tmp[i];
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);
}

void LinAlg_GetDoubleInVector(double *d, gVector *V, int i)
{
  PetscScalar *tmp;
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
#if defined(PETSC_USE_COMPLEX)
  *d = real(tmp[i]);
#else
  *d = tmp[i];
#endif
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);
}

void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i)
{
  PetscScalar *tmp;
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
#if defined(PETSC_USE_COMPLEX)
  *d = fabs(real(tmp[i]));
#else
  *d = fabs(tmp[i]);
#endif
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);
}

void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j)
{
  PetscScalar *tmp;
  ierr = VecGetArray(V->V, &tmp); MYCHECK(ierr);
#if defined(PETSC_USE_COMPLEX)
  *d1 = real(tmp[i]);
  *d2 = imag(tmp[i]);
#else
  *d1 = (double)tmp[i];
  *d2 = (double)tmp[j];
#endif
  ierr = VecRestoreArray(V->V, &tmp); MYCHECK(ierr);
}

void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  Msg::Error("'LinAlg_GetScalarInMatrix' not yet implemented");  
}

void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j)
{
  Msg::Error("'LinAlg_GetDoubleInMatrix' not yet implemented");  
}

void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l)
{
  Msg::Error("'LinAlg_GetComplexInMatrix' not yet implemented");  
}

void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1)
{
  Msg::Error("'LinAlg_GetColumnInMatrix' not yet implemented");  
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
  ierr = VecSet(V->V, tmp); MYCHECK(ierr);
}

void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i)
{
  PetscInt t = i;
  ierr = VecSetValues(V->V, 1, &t, &S->s, INSERT_VALUES); MYCHECK(ierr);
}

void LinAlg_SetDoubleInVector(double d, gVector *V, int i)
{
  PetscScalar tmp = d;
  PetscInt t = i;
  ierr = VecSetValues(V->V, 1, &t, &tmp, INSERT_VALUES); MYCHECK(ierr);
}

void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  PetscInt ti = i;
  tmp = d1 + PETSC_i * d2;
  ierr = VecSetValues(V->V, 1, &ti, &tmp, INSERT_VALUES); MYCHECK(ierr);
#else
  PetscInt ti = i, tj = j;
  tmp = d1;
  ierr = VecSetValues(V->V, 1, &ti, &tmp, INSERT_VALUES); MYCHECK(ierr);
  tmp = d2;
  ierr = VecSetValues(V->V, 1, &tj, &tmp, INSERT_VALUES); MYCHECK(ierr);
#endif
}

void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  PetscInt ti = i, tj = j;
  ierr = MatSetValues(M->M, 1, &ti, 1, &tj, &S->s, INSERT_VALUES); MYCHECK(ierr);
}

void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  Msg::Error("'LinAlg_SetDoubleInMatrix' not yet implemented");  
}

void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l)
{
  Msg::Error("'LinAlg_SetComplexInMatrix' not yet implemented");  
}

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s + S2->s;
}

void LinAlg_DummyVector(gVector *V)
{
  if(Current.DofData->DummyDof)
    Msg::Error("'LinAlg_DummyVector' not yet implemented");
  return;
}

void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i)
{
  PetscInt ti = i;
  ierr = VecSetValues(V->V, 1, &ti, &S->s, ADD_VALUES); MYCHECK(ierr);
}

void LinAlg_AddDoubleInVector(double d, gVector *V, int i)
{
  PetscScalar tmp = d;
  PetscInt t = i;
  ierr = VecSetValues(V->V, 1, &t, &tmp, ADD_VALUES); MYCHECK(ierr);
}

void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  PetscInt ti = i;
  tmp = d1 + PETSC_i * d2;
  ierr = VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES); MYCHECK(ierr);
#else
  PetscInt ti = i, tj = j;
  tmp = d1;
  ierr = VecSetValues(V->V, 1, &ti, &tmp, ADD_VALUES); MYCHECK(ierr);
  tmp = d2;
  ierr = VecSetValues(V->V, 1, &tj, &tmp, ADD_VALUES); MYCHECK(ierr);
#endif
}

void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  PetscInt ti = i, tj = j;
  ierr = MatSetValues(M->M, 1, &ti, 1, &tj, &S->s, ADD_VALUES); MYCHECK(ierr);
}

void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  PetscScalar tmp = d;
  PetscInt ti = i, tj = j;
  ierr = MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES); MYCHECK(ierr);
}

void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l)
{
  PetscScalar tmp;
#if defined(PETSC_USE_COMPLEX)
  PetscInt ti = i, tj = j;
  tmp = d1 + PETSC_i * d2;
  ierr = MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES); MYCHECK(ierr);
#else
  PetscInt ti = i, tj = j, tk = k, tl = l;
  if(d1){
    tmp = d1;
    ierr = MatSetValues(M->M, 1, &ti, 1, &tj, &tmp, ADD_VALUES); MYCHECK(ierr);
    ierr = MatSetValues(M->M, 1, &tk, 1, &tl, &tmp, ADD_VALUES); MYCHECK(ierr);
  }
  if(d2){
    tmp = -d2;
    ierr = MatSetValues(M->M, 1, &ti, 1, &tl, &tmp, ADD_VALUES); MYCHECK(ierr);
    tmp = d2;
    ierr = MatSetValues(M->M, 1, &tk, 1, &tj, &tmp, ADD_VALUES); MYCHECK(ierr);
  }
#endif
}

void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3)
{
  PetscScalar tmp = 1.0;
  if(V3 == V1){
    ierr = VecAXPY(V1->V, tmp, V2->V); MYCHECK(ierr);
  }
  else if(V3 == V2){
    ierr = VecAXPY(V2->V, tmp, V1->V); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddVectorVector'");  
}

void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3)
{
  PetscScalar tmp = d;
  if(V3 == V1){
    ierr = VecAXPY(V1->V, tmp, V2->V); MYCHECK(ierr);
  }
  else if(V3 == V2){
    ierr = VecAYPX(V2->V, tmp, V1->V); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");  
}

void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  PetscScalar tmp = 1.0;
  if(M3 == M1){
    ierr = MatAXPY(M1->M, tmp, M2->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
  }
  else if(M3 == M2){
    ierr = MatAXPY(M2->M, tmp, M1->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_AddMatrixMatrix'");  
}

void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3)
{
  PetscScalar tmp = d;
  if(M3 == M1){
    ierr = MatAXPY(M1->M, tmp, M2->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
  }
  else if(M3 == M2){
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 2)
    ierr = MatAYPX(M2->M, tmp, M1->M); MYCHECK(ierr);
#else
    ierr = MatAYPX(M2->M, tmp, M1->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
#endif
  }
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
    ierr = VecAXPY(V1->V, tmp, V2->V); MYCHECK(ierr);
  }
  else if(V3 == V2){
    ierr = VecAYPX(V2->V, tmp, V1->V); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_SubVectorVector'");  
}

void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  Msg::Error("'LinAlg_SubMatrixMatrix' not yet implemented");    
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
    ierr = VecScale(V1->V, S->s); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdVectorScalar'");
}

void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2)
{
  PetscScalar tmp = d;
  if(V2 == V1){
    ierr = VecScale(V1->V, tmp); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdVectorDouble'");
}

void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2)
{
  Msg::Error("'LinAlg_ProdVectorComplex' not yet implemented");
}

void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d)
{
  PetscScalar tmp;
  ierr = VecDot(V1->V, V2->V, &tmp); MYCHECK(ierr);
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
  else
    ierr = MatMult(M->M, V1->V, V2->V); MYCHECK(ierr);
}

void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2)
{
  if(M2 == M1){
    ierr = MatScale(M1->M, S->s); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixScalar'");
}

void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2)
{
  PetscScalar tmp = d;
  if(M2 == M1){
    ierr = MatScale(M1->M, tmp); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
}

void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2)
{
#if defined(PETSC_USE_COMPLEX)
  if(M2 == M1){
    PetscScalar tmp = d1 + (PETSC_i * d2);
    ierr = MatScale(M1->M, tmp); MYCHECK(ierr);
  }
  else
    Msg::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
#else
  Msg::Error("'LinAlg_ProdMatrixComplex' not yet implemented");
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
  VecNorm(V1->V, NORM_2, &tmp);
  *norm = tmp;
}

void LinAlg_VectorNormInf(gVector *V1, double *norm)
{
  PetscReal tmp;
  VecNorm(V1->V, NORM_INFINITY, &tmp);
  *norm = tmp;
}

void LinAlg_AssembleMatrix(gMatrix *M)
{
  ierr = MatAssemblyBegin(M->M, MAT_FINAL_ASSEMBLY); MYCHECK(ierr);
  ierr = MatAssemblyEnd(M->M, MAT_FINAL_ASSEMBLY); MYCHECK(ierr);  
}

void LinAlg_AssembleVector(gVector *V)
{
  ierr = VecAssemblyBegin(V->V); MYCHECK(ierr);
  ierr = VecAssemblyEnd(V->V); MYCHECK(ierr);
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
  ierr = MatGetInfo(A->M, MAT_LOCAL, &info);
  int nnz = info.nz_used;
  //int n = info.rows_local;
  PetscInt n;
  ierr = VecGetLocalSize(B->V, &n); MYCHECK(ierr);

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
    ierr = MatGetRow(A->M, i, &ncols, &cols, &vals);
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
    ierr = MatRestoreRow(A->M, i, &ncols, &cols, &vals);
  }

  Msg::Info("n = %d, nnz = %d (check k = %d)", n, nnz, k);

  PetscScalar *b, *x;
  ierr = VecGetArray(B->V, &b); MYCHECK(ierr);
  ierr = VecGetArray(X->V, &x); MYCHECK(ierr);
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
  ierr = VecRestoreArray(B->V, &b); MYCHECK(ierr);
  ierr = VecRestoreArray(X->V, &x); MYCHECK(ierr);

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
    ierr = VecSetValues(X->V, 1, &i, &d, INSERT_VALUES); MYCHECK(ierr);
  }
  
  Free(row); Free(col);
  Free(valr); Free(vali);
  Free(rhsr); Free(rhsi);
  Free(solr); Free(soli);
}

#endif

class matValue{ 
 public:
  int row, col; 
  std::complex<double> val;
  matValue(int r, int c, std::complex<double> v) : row(r), col(c), val(v) {}
};

class matValueLessThan{ // sort values by column
 public:
  bool operator()(const matValue *v1, const matValue *v2) const 
  { 
    if(v1->col != v2->col)   
      return v1->col < v2->col; 
    return v1->row < v2->row;
  }
};

static void _nastranPrintValue(FILE *fp, matValue *val, int &count)
{
  if(val->val == 0.) return;
  if(count == 4){ fprintf(fp, "\n*       "); count = 0; }
  fprintf(fp, "%16d", val->row + 1); count++;
  if(count == 4){ fprintf(fp, "\n*       "); count = 0; }
  fprintf(fp, " % -14.8E", val->val.real()); count ++;
#if defined(PETSC_USE_COMPLEX)
  if(count == 4){ fprintf(fp, "\n*       "); count = 0; }
  fprintf(fp, " % -14.8E", val->val.imag()); count++;
#endif
}

static void _nastranWriteMatrix(int m, int n, std::vector<matValue*> &val, 
                                const char *name)
{
  const char *fileName = (std::string(name) + std::string(".pch")).c_str();
  FILE *fp = fopen(fileName, "w");
  if(!fp){
    Msg::Error("Could not open file '%s'", fileName);
    return;
  }
  int shape = (m == n) ? 1 : 2;
#if defined(PETSC_USE_COMPLEX)
  int type = 3;
#else
  int type = 1;
#endif
  Msg::Info("Writing matrix '%s' (%d x %d) to Nastran punchfile '%s'", 
            name, m, n, fileName);
  fprintf(fp, "DMI     %-15s0%8d%8d       0        %8d%8d",
          name, shape, type, m, n);
  int col = -1, count = 0;
  for(unsigned int i = 0; i < val.size(); i++){
    if(val[i]->col != col){ // new column
      col = val[i]->col;
      fprintf(fp, "\nDMI*    %-16s%16d", name, col + 1);
      count = 2;
    }
    _nastranPrintValue(fp, val[i], count);
  }
  fprintf(fp, "\n");
  fclose(fp);
}

static void _nastranReadSimpleVector(std::vector<matValue*> &val, const char *name)
{
  const char *fileName = (std::string(name) + std::string(".pch")).c_str();
  FILE *fp = fopen(fileName, "r");
  if(!fp){
    Msg::Error("Could not open file '%s'", fileName);
    return;
  }
  Msg::Info("Reading vector from Nastran punchfile '%s'", fileName);

  char buffer[256];
  fgets(buffer, sizeof(buffer), fp);
  char header[2][128];
  int tag[4], m, n;
  if(sscanf(buffer, "%s %s %d %d %d %d %d %d", header[0], header[1], 
            &tag[0], &tag[1], &tag[2], &tag[3], &m, &n) != 8){
    Msg::Error("Could not parse punch file header");
    return;
  }
  if(std::string(header[0]) != "DMI"){
    Msg::Error("Non-DMI punch file");
    return;
  }
  bool cplx = (tag[2] == 3 || tag[2] == 4);
  Msg::Info("%d elements, %s", m, cplx ? "complex" : "real");

  int col = -1, row = -1;
  double valr = 0., vali = 0.;
  char field[4][17];
  for(int i = 0; i < 4; i++) field[i][16] = '\0';
  while(!feof(fp)){
    if(!fgets(buffer, sizeof(buffer), fp)) break;
    for(int i = 0; i < 4; i++)
      strncpy(field[i], &buffer[8 + i * 16], 16);
    if(buffer[0] == 'D'){ // new column
      col = atoi(field[1]) - 1;
      row = atoi(field[2]) - 1;
      if(col != 0 || row != 0){
        Msg::Error("Can only read simple contiguous (full) Nastran vectors at the moment");
        return;
      }
      valr = atof(field[3]);
      if(!cplx) 
        val.push_back(new matValue(row++, col, std::complex<double>(valr, vali)));
    }
    else{
      for(int i = 0; i < 4; i++){
        if(val.size() == m) break;
        if(cplx && i % 2){
          vali = atof(field[i]);
          val.push_back(new matValue(row++, col, std::complex<double>(valr, vali)));
        }
        else {
          valr = atof(field[i]);
          if(!cplx) 
            val.push_back(new matValue(row++, col, std::complex<double>(valr, vali)));
        }
      }
    }
  }

  fclose(fp);
}

static void _nastran(gMatrix *A, gVector *B, gVector *X, char *solver)
{
  if(!solver || !strlen(solver)){
    Msg::Fatal("Invalid or empty Nastran solver");
    return;
  }

  Msg::Info("Solving using Nastran");

  // get sparse matrix and sort it by column (Nastran output is by
  // column; we don't use PETSc's own MatGetColumnVector because it is
  // atrociously slow. Yes, really. I tried.)
  MatInfo info;
  ierr = MatGetInfo(A->M, MAT_LOCAL, &info);
  int nnz = info.nz_used;
  PetscInt n;
  ierr = VecGetLocalSize(B->V, &n); MYCHECK(ierr);
  std::vector<matValue*> valA(nnz), valB(n);

  int k = 0;
  PetscScalar *tmpB;
  ierr = VecGetArray(B->V, &tmpB); MYCHECK(ierr);
  for(int i = 0; i < n; i++){
    valB[i] = new matValue(i, 0, tmpB[i]);
    PetscInt ncols;
    const PetscInt *cols;
    const PetscScalar *tmpA;
    ierr = MatGetRow(A->M, i, &ncols, &cols, &tmpA); MYCHECK(ierr);
    for(int j = 0; j < ncols; j++){
      if(k >= nnz){
	Msg::Error("Something wrong in nnz: %d >= %d", k, nnz);
	return;
      }
      valA[k++] = new matValue(i, cols[j], tmpA[j]);
    }
    ierr = MatRestoreRow(A->M, i, &ncols, &cols, &tmpA); MYCHECK(ierr);
  }
  ierr = VecRestoreArray(B->V, &tmpB); MYCHECK(ierr);
  std::sort(valA.begin(), valA.end(), matValueLessThan());

  Msg::Info("n = %d, nnz = %d", n, nnz);

  _nastranWriteMatrix(n, n, valA, "MATRIXA");
  _nastranWriteMatrix(n, 1, valB, "MATRIXB");

  for(unsigned int i = 0; i < valA.size(); i++) delete valA[i];
  for(unsigned int i = 0; i < valB.size(); i++) delete valB[i];

  // Calling Nastran, assuming that we have MATRIXA.pch and
  // MATRIXB.pch available; Natran should write MATRIXX.pch.
  Msg::Info("Calling '%s'", solver);
  system(solver);

  std::vector<matValue*> valX;
  _nastranReadSimpleVector(valX, "MATRIXX");
  
  if(valX.size() != n){
    Msg::Error("Wrong dimension of X vector");
    return;
  }
  
  for(PetscInt i = 0; i < valX.size(); i++){
#if defined(PETSC_USE_COMPLEX)
    PetscScalar d = valX[i]->val;
#else
    PetscScalar d = valX[i]->val.real();
#endif
    ierr = VecSetValues(X->V, 1, &i, &d, INSERT_VALUES); MYCHECK(ierr);
  }
}

static PetscErrorCode _myKspMonitor(KSP ksp, PetscInt it, PetscReal rnorm, void *mctx)
{
  Msg::Info("%3ld KSP Residual norm %14.12e", (long)it, rnorm);
  return 0;
}

static void _solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, 
                   int precond, int kspIndex)
{
  PetscTruth set;

#if defined(HAVE_ZITSOL)
  // testing Yousef's new preconditioners and solvers
  PetscTruth zitsol = PETSC_FALSE;
  PetscOptionsGetTruth(PETSC_NULL, "-zitsol", &zitsol, &set);
  if(zitsol){ _zitsol(A, B, X); return; }
#endif

  // testing Nastran linear solvers
  char nastran[256];
  PetscOptionsGetString(PETSC_NULL, "-nastran", nastran, sizeof(nastran), &set);
  if(set){ _nastran(A, B, X, nastran); return; }

  if(kspIndex < 0 || kspIndex > 9){
    Msg::Error("Linear Solver index out of range (%d)", kspIndex);
    return;
  }

  int RankCpu;
  MPI_Comm_rank(PETSC_COMM_WORLD, &RankCpu);

  bool view = (!Solver->ksp[kspIndex] && Msg::GetVerbosity() > 2);

  if(view && !RankCpu){
    PetscInt i, j;
    ierr = MatGetSize(A->M, &i, &j); MYCHECK(ierr);
    Msg::Info("N: %ld", (long)i);
  }

  if(kspIndex != 0){
    Msg::Info("Using solver index %d", kspIndex);
  }

  if(!Solver->ksp[kspIndex]) {
    ierr = KSPCreate(PETSC_COMM_WORLD, &Solver->ksp[kspIndex]); MYCHECK(ierr);
    ierr = KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
    PC pc;
    ierr = KSPGetPC(Solver->ksp[kspIndex], &pc); MYCHECK(ierr);
    // set some default options
    ierr = PCSetType(pc, PCILU); MYCHECK(ierr);
#if (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR == 0)
    ierr = PCILUSetMatOrdering(pc, MATORDERING_RCM); MYCHECK(ierr);
    ierr = PCILUSetLevels(pc, 6); MYCHECK(ierr);
#elif (PETSC_VERSION_MAJOR == 2) && (PETSC_VERSION_MINOR == 3) && (PETSC_VERSION_SUBMINOR < 3)
    ierr = PCFactorSetMatOrdering(pc, MATORDERING_RCM); MYCHECK(ierr);
    ierr = PCFactorSetLevels(pc, 6); MYCHECK(ierr);
#else
    ierr = PCFactorSetMatOrderingType(pc, MATORDERING_RCM); MYCHECK(ierr);
    ierr = PCFactorSetLevels(pc, 6); MYCHECK(ierr);
#endif
    ierr = KSPSetTolerances(Solver->ksp[kspIndex], 1.e-10, PETSC_DEFAULT, PETSC_DEFAULT, 
			    PETSC_DEFAULT); MYCHECK(ierr);
    if(Msg::UseSocket()){
      ierr = KSPMonitorSet(Solver->ksp[kspIndex], _myKspMonitor, PETSC_NULL, PETSC_NULL); MYCHECK(ierr);
    }
    // override the default options with the ones from the option
    // database (if any)
    ierr = KSPSetFromOptions(Solver->ksp[kspIndex]); MYCHECK(ierr);
  }
  else if(precond){
    ierr = KSPSetOperators(Solver->ksp[kspIndex], A->M, A->M, DIFFERENT_NONZERO_PATTERN); MYCHECK(ierr);
  }
  
  ierr = KSPSolve(Solver->ksp[kspIndex], B->V, X->V); MYCHECK(ierr);

  if(view){
    ierr = KSPView(Solver->ksp[kspIndex], PETSC_VIEWER_STDOUT_SELF); MYCHECK(ierr);
  }
  
  if(!RankCpu){
    PetscInt its;
    ierr = KSPGetIterationNumber(Solver->ksp[kspIndex], &its); MYCHECK(ierr);
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
