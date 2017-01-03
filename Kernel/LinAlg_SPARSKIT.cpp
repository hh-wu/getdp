// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Ruth Sabariego
//

#include <math.h>
#include <string.h>
#include "GetDPConfig.h"
#include "LinAlg.h"
#include "ProData.h"
#include "DofData.h"
#include "MallocUtils.h"
#include "Message.h"

extern struct CurrentData Current ;

extern char *Name_Path;

#if defined(HAVE_SPARSKIT)

static const char *Name_SolverFile = NULL, *Name_DefaultSolverFile = "solver.par" ;
static char *SolverOptions[100];

void LinAlg_InitializeSolver(int* sargc, char*** sargv)
{
  int i=1, argc, iopt=0;
  char **argv;

  argc = *sargc ;
  argv = *sargv ;
  SolverOptions[0] = NULL;

  while (i < argc) {
    if (argv[i][0] == '-') {
      if (!strcmp(argv[i]+1, "solver") || !strcmp(argv[i]+1, "s")) {
	i++ ;
	if (i<argc && argv[i][0]!='-')
	  Name_SolverFile = argv[i++] ;
	else
	  Message::Error("Missing file name");
      }
      else if (!strcmp(argv[i]+1, "slepc")) {
        i++;
      }
      else{
	i++ ;
	if (i<argc && argv[i][0]!='-') {
	  SolverOptions[iopt++] = argv[i-1]+1;
	  SolverOptions[iopt++] = argv[i];
	  SolverOptions[iopt] = NULL;
	  i++ ;
	}
	else {
	  Message::Error("Missing number");
	}
      }
    }
    else
      Message::Info("Unknown option: '%s'", argv[i++]) ;
  }
}

void LinAlg_FinalizeSolver()
{
}

void LinAlg_SetCommSelf()
{
}

void LinAlg_SetCommWorld()
{
}

void LinAlg_CreateSolver(gSolver *Solver, const char *SolverDataFileName)
{
  int  i;
  char FileName[256];

  strcpy(FileName, Name_Path);

  if(SolverDataFileName){
    // name in .pro file
    if(SolverDataFileName[0] == '/' || SolverDataFileName[0] == '\\'){
      // -> absolute if it starts with '/' or '\'
      strcpy(FileName, SolverDataFileName);
    }
    else{
      // -> relative otherwise FIXME: wrong on Windows - see Fix_RelativePath
      strcat(FileName, SolverDataFileName);
    }
  }
  else if (Name_SolverFile){
    // name on command line -> always absolute
    strcpy(FileName, Name_SolverFile);
  }
  else{
    // default file name -> always relative
    strcat(FileName, Name_DefaultSolverFile);
  }

  Message::Info("Loading parameter file '%s'", FileName);

  init_solver(&Solver->Params, FileName) ;

  i = 0;
  while(SolverOptions[i] && SolverOptions[i+1]){
    init_solver_option(&Solver->Params, SolverOptions[i], SolverOptions[i+1]) ;
    i+=2;
  }
}

void LinAlg_SetGlobalSolverOptions(const std::string &opt)
{
}

void LinAlg_CreateVector(gVector *V, gSolver *Solver, int n)
{
  init_vector(n, &V->V) ;
  V->N = n ;
}

void LinAlg_CreateMatrix(gMatrix *M, gSolver *Solver, int n, int m)
{
  init_matrix(n, &M->M, &Solver->Params) ;
}

void LinAlg_DestroySolver(gSolver *Solver)
{
  Message::Debug("'LinAlg_DestroySolver' not yet implemented");
}

void LinAlg_DestroyVector(gVector *V)
{
  Free(V->V);
}

void LinAlg_DestroyMatrix(gMatrix *M)
{
  free_matrix(&M->M) ;
}

void LinAlg_CopyScalar(gScalar *S1, gScalar *S2)
{
  S2->s = S1->s ;
}

void LinAlg_CopyVector(gVector *V1, gVector *V2)
{
  memcpy(V2->V, V1->V, V1->N*sizeof(double)) ;
}

void LinAlg_SwapVector(gVector *V1, gVector *V2)
{
  if(V1->N != V2->N){
    Message::Error("Cannot swap vectors of different size");
    return;
  }
  for(int i = 0; i < V1->N; i++){
    double tmp = V1->V[i];
    V1->V[i] = V2->V[i];
    V2->V[i] = tmp;
  }
}

void LinAlg_CopyMatrix(gMatrix *M1, gMatrix *M2)
{
  Message::Error("'LinAlg_CopyMatrix' not yet implemented");
}

void LinAlg_ZeroScalar(gScalar *S)
{
  S->s = 0. ;
}

void LinAlg_ZeroVector(gVector *V)
{
  zero_vector(V->N, V->V) ;
}

void LinAlg_ZeroMatrix(gMatrix *M)
{
  int i ;
  zero_matrix(&M->M) ;
  // la routine de produit matrice vecteur est buggee s'il existe des
  // lignes sans aucun element dans la matrice...
  for(i=0 ; i<M->M.N ; i++) add_matrix_double(&M->M, i+1, i+1, 0.0) ;
}

void LinAlg_ScanScalar(FILE *file, gScalar *S)
{
  fscanf(file, "%lf", &S->s) ;
}

void LinAlg_ScanVector(FILE *file, gVector *V)
{
  int i ;

  for(i=0 ; i<V->N ; i++) fscanf(file, "%lf", &V->V[i]) ;
}

void LinAlg_ScanMatrix(FILE *file, gMatrix *M)
{
  Message::Error("'LinAlg_ScanMatrix' not yet implemented");
}

void LinAlg_ReadScalar(FILE *file, gScalar *S)
{
  Message::Error("'LinAlg_ReadScalar' not yet implemented");
}

void LinAlg_ReadVector(FILE *file, gVector *V)
{
  fread(V->V, sizeof(double), V->N, file);
}

void LinAlg_ReadMatrix(FILE *file, gMatrix *M)
{
  Message::Error("'LinAlg_ReadMatrix' not yet implemented");
}

void LinAlg_PrintScalar(FILE *file, gScalar *S)
{
  fprintf(file, "%.16g", S->s) ;
}

void LinAlg_PrintVector(FILE *file, gVector *V, bool matlab,
                        const char* fileName, const char* varName)
{
  if(matlab) Message::Error("Matlab output not available for this vector");
  formatted_write_vector(file, V->N, V->V, KUL) ;
}

void LinAlg_PrintMatrix(FILE *file, gMatrix *M, bool matlab,
                        const char* fileName, const char* varName)
{
  if(matlab) Message::Error("Matlab output not available for this matrix");
  formatted_write_matrix(file, &M->M, KUL) ;
}

void LinAlg_WriteScalar(FILE *file, gScalar *S)
{
  Message::Error("'LinAlg_WriteScalar' not yet implemented");
}

void LinAlg_WriteVector(FILE *file, gVector *V)
{
  fwrite(V->V, sizeof(double), V->N, file);
  fprintf(file, "\n");
}

void LinAlg_WriteMatrix(FILE *file, gMatrix *M)
{
  binary_write_matrix(&M->M, "A", ".mat") ;
}

void LinAlg_GetVectorSize(gVector *V, int *i)
{
  *i = V->N ;
}

void LinAlg_GetLocalVectorRange(gVector *V, int *low, int *high)
{
  *low = 0 ;
  *high = V->N ;
}

void LinAlg_GetMatrixSize(gMatrix *M, int *i, int *j)
{
  *i = *j = M->M.N ;
}

void LinAlg_GetLocalMatrixRange(gMatrix *M, int *low, int *high)
{
  *low = 0 ;
  *high = M->M.N ;
}

void LinAlg_GetDoubleInScalar(double *d, gScalar *S)
{
  *d = S->s ;
}

void LinAlg_GetComplexInScalar(double *d1, double *d2, gScalar *S)
{
  Message::Error("'LinAlg_GetComplexInScalar' not available with this Solver");
}

void LinAlg_GetScalarInVector(gScalar *S, gVector *V, int i)
{
  S->s = V->V[i] ;
}

void LinAlg_GetDoubleInVector(double *d, gVector *V, int i)
{
  *d = V->V[i] ;
}

void LinAlg_GetAbsDoubleInVector(double *d, gVector *V, int i)
{
  *d = fabs(V->V[i]) ;
}

void LinAlg_GetComplexInVector(double *d1, double *d2, gVector *V, int i, int j)
{
  *d1 = V->V[i] ;
  *d2 = V->V[j] ;
}

void LinAlg_GetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  Message::Error("'LinAlg_GetScalarInMatrix' not yet implemented");
}

void LinAlg_GetDoubleInMatrix(double *d, gMatrix *M, int i, int j)
{
  get_element_in_matrix(&M->M, i, j, d);
}

void LinAlg_GetComplexInMatrix(double *d1, double *d2, gMatrix *M, int i, int j, int k, int l)
{
  Message::Error("'LinAlg_GetComplexInMatrix' not yet implemented");
}

void LinAlg_GetColumnInMatrix(gMatrix *M, int col, gVector *V1)
{
  get_column_in_matrix(&M->M, col, V1->V);
}

void LinAlg_SetScalar(gScalar *S, double *d)
{
  S->s = d[0] ;
}

void LinAlg_SetVector(gVector *V, double *v)
{
  int i;

  for(i=0; i<V->N; i++) V->V[i] = *v ;
}

void LinAlg_SetScalarInVector(gScalar *S, gVector *V, int i)
{
  V->V[i] = S->s ;
}

void LinAlg_SetDoubleInVector(double d, gVector *V, int i)
{
  V->V[i] = d ;
}

void LinAlg_SetComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  V->V[i] = d1 ;
  V->V[j] = d2 ;
}

void LinAlg_SetScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{
  Message::Error("'LinAlg_SetScalarInMatrix' not yet implemented");
}

void LinAlg_SetDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  Message::Error("'LinAlg_SetDoubleInMatrix' not yet implemented");
}

void LinAlg_SetComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l)
{
  Message::Error("'LinAlg_SetComplexInMatrix' not yet implemented");
}

void LinAlg_AddScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s + S2->s ;
}

void LinAlg_DummyVector(gVector *V)
{
  int * DummyDof, i;

  DummyDof = Current.DofData->DummyDof;
  if (DummyDof == NULL) return ;

  for (i=0 ; i<V->N ; i++) if (DummyDof[i] == 1) V->V[i] = 0 ;
}

void LinAlg_AddScalarInVector(gScalar *S, gVector *V, int i)
{
  int * DummyDof;

  if ((DummyDof = Current.DofData->DummyDof))
    if (DummyDof[i] == 1) return ;

  V->V[i] += S->s ;
}

void LinAlg_AddDoubleInVector(double d, gVector *V, int i)
{
  int * DummyDof;

  if ((DummyDof = Current.DofData->DummyDof))
    if (DummyDof[i] == 1)
      return ;

  V->V[i] += d ;
}

void LinAlg_AddComplexInVector(double d1, double d2, gVector *V, int i, int j)
{
  int * DummyDof, iok,jok;

  iok=jok=1;

  if ((DummyDof = Current.DofData->DummyDof)) {
    if (DummyDof[i] == 1) iok=0;
    if (DummyDof[j] == 1) jok=0;
  }

  if (iok)
    V->V[i] += d1 ;

  if (jok)
    V->V[j] += d2 ;
}

void LinAlg_AddScalarInMatrix(gScalar *S, gMatrix *M, int i, int j)
{

  int * DummyDof;

  if ((DummyDof = Current.DofData->DummyDof))
    if ( (DummyDof[i] == 1 || DummyDof[j] == 1) && (i != j) )
      return ;

  add_matrix_double(&M->M, i+1, j+1, S->s) ;
}

void LinAlg_AddDoubleInMatrix(double d, gMatrix *M, int i, int j)
{
  int * DummyDof;

  if ((DummyDof = Current.DofData->DummyDof))
    if ( (DummyDof[i] == 1 || DummyDof[j] == 1) && (i != j) )
      return ;

  add_matrix_double(&M->M, i+1, j+1, d) ;
}

void LinAlg_AddComplexInMatrix(double d1, double d2, gMatrix *M, int i, int j, int k, int l)
{
  if(d1){
    add_matrix_double(&M->M, i+1, j+1, d1) ;
    add_matrix_double(&M->M, k+1, l+1, d1) ;
  }
  if(d2){
    add_matrix_double(&M->M, i+1, l+1, -d2) ;
    add_matrix_double(&M->M, k+1, j+1, d2) ;
  }
}

void LinAlg_AddVectorVector(gVector *V1, gVector *V2, gVector *V3)
{
  if(V3 == V1)
    add_vector_vector(V1->N, V1->V, V2->V) ;
  else
    Message::Error("Wrong arguments in 'LinAlg_AddVectorVector'");
}

void LinAlg_AddVectorProdVectorDouble(gVector *V1, gVector *V2, double d, gVector *V3)
{
  if(V3 == V1)
    add_vector_prod_vector_double(V1->N, V1->V, V2->V, d) ;
  else
    Message::Error("Wrong arguments in 'LinAlg_AddVectorProdVectorDouble'");
}

void LinAlg_AddMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  if(M3 == M1)
    add_matrix_matrix(&M1->M, &M2->M) ;
  else
    Message::Error("Wrong arguments in 'LinAlg_AddMatrixMatrix'");
}

void LinAlg_AddMatrixProdMatrixDouble(gMatrix *M1, gMatrix *M2, double d, gMatrix *M3)
{
  if(M3 == M1)
    add_matrix_prod_matrix_double(&M1->M, &M2->M, d) ;
  else
    Message::Error("Wrong arguments in 'LinAlg_AddMatrixProdMatrixDouble'");
}

void LinAlg_SubScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s - S2->s ;
}

void LinAlg_SubVectorVector(gVector *V1, gVector *V2, gVector *V3)
{
  if(V3 == V1)
    sub_vector_vector_1(V1->N, V1->V, V2->V) ;
  else if (V3 == V2)
    sub_vector_vector_2(V1->N, V1->V, V2->V) ;
  else
    Message::Error("Wrong arguments in 'LinAlg_SubVectorVector'");
}

void LinAlg_SubMatrixMatrix(gMatrix *M1, gMatrix *M2, gMatrix *M3)
{
  Message::Error("'LinAlg_SubMatrixMatrix' not yet implemented");
}

void LinAlg_ProdScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s * S2->s ;
}

void LinAlg_ProdScalarDouble(gScalar *S1, double d, gScalar *S2)
{
  S2->s = S1->s * d ;
}

void LinAlg_ProdScalarComplex(gScalar *S, double d1, double d2, double *d3, double *d4)
{
  *d3 = S->s * d1 ;
  *d4 = S->s * d2 ;
}

void LinAlg_ProdVectorScalar(gVector *V1, gScalar *S, gVector *V2)
{
  Message::Error("'LinAlg_ProdVectorScalar' not yet implemented");
}

void LinAlg_ProdVectorDouble(gVector *V1, double d, gVector *V2)
{
  if(V2 == V1)
    prod_vector_double(V1->N, V1->V, d);
  else
    Message::Error("Wrong arguments in 'LinAlg_ProdVectorDouble'");
}

void LinAlg_ProdVectorComplex(gVector *V1, double d1, double d2, gVector *V2)
{
  Message::Error("'LinAlg_ProdVectorComplex' not yet implemented");
}

void LinAlg_ProdVectorVector(gVector *V1, gVector *V2, double *d)
{
  prodsc_vector_vector (V1->N, V1->V, V2->V, d) ;
}

void LinAlg_ProdMatrixVector(gMatrix *M, gVector *V1, gVector *V2)
{
  if(V2 == V1)
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixVector'");
  else
    prod_matrix_vector(&M->M, V1->V, V2->V);
}

void LinAlg_ProdMatrixScalar(gMatrix *M1, gScalar *S, gMatrix *M2)
{
  if(M2 == M1)
    prod_matrix_double (&M1->M, S->s);
  else
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixScalar'");
}

void LinAlg_ProdMatrixDouble(gMatrix *M1, double d, gMatrix *M2)
{
  if(M2 == M1)
    prod_matrix_double (&M1->M, d);
  else
    Message::Error("Wrong arguments in 'LinAlg_ProdMatrixDouble'");
}

void LinAlg_ProdMatrixComplex(gMatrix *M1, double d1, double d2, gMatrix *M2)
{
  Message::Error("'LinAlg_ProdMatrixComplex' not yet implemented");
}

void LinAlg_DivScalarScalar(gScalar *S1, gScalar *S2, gScalar *S3)
{
  S3->s = S1->s / S2->s ;
}

void LinAlg_DivScalarDouble(gScalar *S1, double d, gScalar *S2)
{
  S2->s = S1->s / d ;
}

void LinAlg_VectorNorm2(gVector *V1, double *norm)
{
  norm2_vector(V1->N, V1->V, norm);
}

void LinAlg_VectorNormInf(gVector *V1, double *norm)
{
  norminf_vector(V1->N, V1->V, norm);
}

void LinAlg_AssembleMatrix(gMatrix *M)
{
}

void LinAlg_AssembleVector(gVector *V)
{
}

void LinAlg_Solve(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex)
{
  solve_matrix(&A->M, &Solver->Params, B->V, X->V);
}

void LinAlg_SolveAgain(gMatrix *A, gVector *B, gSolver *Solver, gVector *X, int solverIndex)
{
  int tmp = Solver->Params.Re_Use_LU;
  Solver->Params.Re_Use_LU = 1;
  solve_matrix(&A->M, &Solver->Params, B->V, X->V);
  Solver->Params.Re_Use_LU = tmp;
}

void LinAlg_SolveNL(gMatrix *A, gVector *B, gMatrix *J, gVector *R, gSolver *Solver,
                    gVector *X, int solverIndex)
{
  Message::Error("'LinAlg_SolveNL' not yet implemented for Sparskit");
}

#endif
