// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributed by Bertrand Thierry

#include <stdio.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "SolvingOperations.h"
#include "Message.h"

#if defined(HAVE_PETSC) && defined(HAVE_GMSH)

#include "petscksp.h"
#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>

// Matrix Free structure (Matrix Shell)
typedef struct{
  int flag_operation; // MatMultFieldMat(A,X,Y) gives AX (flag_operation =0) or (I-A)X (flag_operation =1)
  std::vector<PetscInt>	FieldIndices;
  std::vector<PetscInt>	FieldSizes;
  struct Resolution *Resolution_P;
  struct Operation *Operation_P;
  struct DofData *DofData_P0;
  struct GeoData *GeoData_P0;
} FieldMat;

PetscErrorCode ReadFields(int nb_field, int nth_vect, struct Operation *Operation_P,
                          std::vector<std::vector<std::vector<double> > > *vector_field,
                          std::vector<PetscInt> *indices_field,
                          std::vector<PetscInt> *sizes_field,
                          int *n);
PetscErrorCode Orthonormalizer(std::vector<Vec> X, int SizeX);
PetscErrorCode DgmresDDM_Build(Mat A, struct Operation *Operation_P, int nb_field, int nb_deflation, Mat *M);
PetscErrorCode BuildIterationMatrix(Mat A, Mat *IterationMatrix);
PetscErrorCode PrintMatrix(Mat A, const char* fileName, const char* varname, bool BINARY);
PetscErrorCode PrintVecSeq(Vec b, const char* filename, const char* varname, bool BINARY);
PetscErrorCode Jacobi_Solver(Mat A, Vec X, Vec B, double Tol, int MaxIter);
PetscErrorCode MatMultFieldMat(Mat A, Vec X, Vec Y);
PetscErrorCode STD_vector_to_PETSc_Vec(std::vector<std::vector<std::vector<double> > > std_vec,
                                       Vec petsc_vec);
PetscErrorCode PETSc_Vec_to_STD_Vec(Vec petsc_vec,
                                    std::vector<PetscInt> FieldSizes,
                                    std::vector<std::vector<std::vector<double> > > *std_vec);
PetscErrorCode CreateFieldMat(FieldMat **shell);
PetscErrorCode SetFieldMat(FieldMat **shell,
                           int flag_operation,
                           std::vector<PetscInt> FieldIndices,
                           std::vector<PetscInt> FieldSizes,
                           struct Resolution  	*Resolution_P,
                           struct Operation   	*Operation_P,
                           struct DofData     	*DofData_P0,
                           struct GeoData     	*GeoData_P0);

int Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                    struct Operation   *Operation_P,
                                    struct DofData     *DofData_P0,
                                    struct GeoData     *GeoData_P0)
{
  FieldMat *ctx; // Matrix Shell context
  Mat A;
  KSP ksp;
  const KSPType ksp_choice;
  PetscErrorCode ierr;
  int MaxIter, Restart;
  double Tol;
  PetscInt nb_field;
  std::vector<PetscInt> indices_field, sizes_field;
  std::vector<std::vector<std::vector<double> > > B_std; // right hand side (std version)
  Vec B, X;// right hand side and Solution
  PetscInt n, n_loc; // number of unknowns (global and local)
  PC pc;
  int flag_operation = 1; //for the matmult product
  /*---------------------------------------------
    Reading data fromd GetDP
    ---------------------------------------------*/
  Tol = Operation_P->Case.IterativeLinearSolver.Tolerance;
  MaxIter = Operation_P->Case.IterativeLinearSolver.MaxIter;
  Restart = Operation_P->Case.IterativeLinearSolver.Restart;
  ksp_choice = Operation_P->Case.IterativeLinearSolver.Type;
  //Print informations
  if(Message::GetCommSize() >1){
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Number of Processus\t: %d\n", Message::GetCommSize());CHKERRQ(ierr);
  }
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Iterative solver\t: %s\n", ksp_choice);CHKERRQ(ierr);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Tolerance\t\t: %g\n", Tol);CHKERRQ(ierr);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Max. numb. of iterations: %i\n", MaxIter);CHKERRQ(ierr);
  if(Restart >0){ierr = PetscPrintf(PETSC_COMM_WORLD, "Restart\t\t\t: %i\n", Restart);CHKERRQ(ierr);}
  else{ierr = PetscPrintf(PETSC_COMM_WORLD, "Restart\t\t\t: No Restart\n");CHKERRQ(ierr);}

  //if jacobi then MatMult(A,X) = A*X (otherwise (I-A)*X)
  if(!strcmp(ksp_choice, "jacobi")){flag_operation = 0;}

  /*---------------------------------------------
    Initialization
    Reading the existing .pos file in order to
    create the vector of unknown (std and petsc).
    ---------------------------------------------*/
  nb_field = List_Nbr(Operation_P->Case.IterativeLinearSolver.FieldIndices);
  ierr = ReadFields(nb_field, 0, Operation_P, &B_std, &indices_field, &sizes_field, &n);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Number of Fields\t: %d\n", nb_field);
  //information
  for(int cpt_view = 0; cpt_view < nb_field; cpt_view++)
  		ierr = PetscPrintf(PETSC_COMM_WORLD, "Local size of Field %d: %d\n", cpt_view, sizes_field[cpt_view]);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Total system size: %d\n", n);
#if !defined(PETSC_USE_COMPLEX)
  n *= 2;
  ierr = PetscPrintf(PETSC_COMM_WORLD, "PETSc REAL arithmetic -> system size is doubled: n=%d\n", n);
#endif

  //Petsc Vec of unknown
  ierr = VecCreateSeq(PETSC_COMM_SELF, n, &X);CHKERRQ(ierr);
/*  ierr = VecCreate(PETSC_COMM_WORLD, &X);CHKERRQ(ierr);
  ierr = VecSetSizes(X,PETSC_DECIDE, n);CHKERRQ(ierr);
  ierr = VecSetFromOptions(X);CHKERRQ(ierr);*/
  ierr = VecGetLocalSize(X,&n_loc);CHKERRQ(ierr);
  //Petsc Vec Right Hand Side
  ierr = VecDuplicate(X,&B);CHKERRQ(ierr);
  STD_vector_to_PETSc_Vec(B_std, B);
  //context of the shell matrix
  ierr = CreateFieldMat(&ctx);
  ierr = SetFieldMat(&ctx, flag_operation, indices_field, sizes_field, Resolution_P, Operation_P, DofData_P0, GeoData_P0);
  //Shell matrix containg the indices of the unknown field (on which the iterative solver works)
  ierr = MatCreateShell(PETSC_COMM_WORLD, n_loc, n_loc, n, n, ctx, &A);
  ierr = MatShellSetContext(A, ctx);CHKERRQ(ierr);
  ierr = MatShellSetOperation(A, MATOP_MULT, (void(*)(void))MatMultFieldMat);CHKERRQ(ierr);
  ierr = PetscBarrier((PetscObject) A);
    /*---------------------------------------------
    Creation of the iterative solver + solving
    ---------------------------------------------*/
  /*Jacobi Method (hand-made)*/
   if(!strcmp(ksp_choice,"print") || !strcmp(ksp_choice,"print_bin")){
					bool pBINARY = false;
					ierr = PetscPrintf(PETSC_COMM_WORLD, "Launching Print mode (no resolution):\n");CHKERRQ(ierr);
						if(!strcmp(ksp_choice,"print_bin")){
								pBINARY = true;
								ierr = PetscPrintf(PETSC_COMM_WORLD, "Print mode: Binary option enabled\n");CHKERRQ(ierr);
						}
					// Print ITERATION MATRIX
					Mat IterationMatrix;
					ierr = PetscPrintf(PETSC_COMM_WORLD, "Print mode: computing Iteration Matrix...");CHKERRQ(ierr);
					ierr = BuildIterationMatrix(A, &IterationMatrix);CHKERRQ(ierr);
					ierr = PetscPrintf(PETSC_COMM_WORLD, "done\nPrint mode: printing Iteration Matrix...");CHKERRQ(ierr);
					ierr = PrintMatrix(IterationMatrix, "file_mat_itmat.m", "IterationMatrix", pBINARY);CHKERRQ(ierr);
					ierr = PetscPrintf(PETSC_COMM_WORLD, "done\nPrint mode: printing Right Hand Side...");CHKERRQ(ierr);
					ierr = PrintVecSeq(B, "file_vec_rhs.m", "RightHandSide", pBINARY);CHKERRQ(ierr);
					ierr = PetscPrintf(PETSC_COMM_WORLD, "done\n");CHKERRQ(ierr);
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
					ierr = VecDestroy(&X);CHKERRQ(ierr);
					ierr = VecDestroy(&B);CHKERRQ(ierr);
					ierr = MatDestroy(&A);CHKERRQ(ierr);
#else
					ierr = VecDestroy(X);CHKERRQ(ierr);
					ierr = VecDestroy(B);CHKERRQ(ierr);
					ierr = MatDestroy(A);CHKERRQ(ierr);
#endif
					PetscFunctionReturn(0);
					}else if(!strcmp(ksp_choice,"jacobi"))
							ierr = Jacobi_Solver(A, X, B, Tol, MaxIter);
					else{//KRYLOV SUBSPACE SOLVER
						// creation of the ksp (iterative solver, not jacobi)
						ierr = KSPCreate(PETSC_COMM_WORLD,&ksp);CHKERRQ(ierr);
						ierr = KSPSetOperators(ksp,A,A,DIFFERENT_NONZERO_PATTERN);CHKERRQ(ierr);
						//tol etc.
						ierr = KSPSetTolerances(ksp, Tol, PETSC_DEFAULT, PETSC_DEFAULT, MaxIter); CHKERRQ(ierr);
						//Preconditioning
						ierr = KSPGetPC(ksp,&pc);CHKERRQ(ierr);
						if(!strcmp(ksp_choice,"dgmres_ddm")){
						// Special Deflated GMRES for the DDM (creation of a deflated vector space before the first iteration)
								ksp_choice = "gmres";
								Mat M; //deflation preconditioner
								int nb_deflation = List_Nbr(Operation_P->Case.IterativeLinearSolver.DeflationIndices);
								nb_deflation /= nb_field; // number of effective vectors
								if(nb_deflation >0){
										ierr = PetscPrintf(PETSC_COMM_WORLD, "DGMRES for DDM: adding %d vectors to the deflation...\n", nb_deflation); CHKERRQ(ierr);
										ierr = DgmresDDM_Build(A, Operation_P, nb_field, nb_deflation, &M); CHKERRQ(ierr);
										ierr = PCSetType(pc,PCMAT);CHKERRQ(ierr);
										ierr = PCSetOperators(pc, A, M, SAME_PRECONDITIONER);CHKERRQ(ierr);
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
		        ierr = KSPSetPCSide(ksp, PC_RIGHT);CHKERRQ(ierr);
#else
  		      ierr = KSPSetPreconditionerSide(ksp, PC_RIGHT); CHKERRQ(ierr);
#endif
    		  }
						}else ierr = PCSetType(pc,PCNONE);CHKERRQ(ierr);
					ierr = KSPSetType(ksp, ksp_choice); CHKERRQ(ierr);
					// below is only for ksp = gmres and its variants (other ksp does not have a restart)
					if(Restart>0 && (!strcmp(ksp_choice,"gmres") || !strcmp(ksp_choice,"dgmres") || !strcmp(ksp_choice,"lgmres") ||!strcmp(ksp_choice,"fgmres") )){
							ierr = KSPGMRESSetRestart(ksp, Restart); CHKERRQ(ierr);
					}
					//set ksp
					ierr = KSPSetFromOptions(ksp);CHKERRQ(ierr);
					//Solve
					ierr = KSPSolve(ksp,B,X);CHKERRQ(ierr);
					ierr = KSPView(ksp,PETSC_VIEWER_STDOUT_WORLD);CHKERRQ(ierr);
			}
  /*----------------------
    computing solution
    ----------------------*/
  //we reuse B_std to avoid the creation of a new std::vector ...
  ierr = PETSc_Vec_to_STD_Vec(X, sizes_field, &B_std); CHKERRQ(ierr);
  //update views
  for (unsigned int cpt_view = 0; cpt_view<indices_field.size(); cpt_view++){
    PView *view = PView::list[indices_field[cpt_view]];
    view->getData()->fromVector(B_std[cpt_view]);
  }
  /*-------------
    cleaning
    -------------*/
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = VecDestroy(&X);CHKERRQ(ierr);
  ierr = VecDestroy(&B);CHKERRQ(ierr);
  ierr = MatDestroy(&A);CHKERRQ(ierr);
  ierr = KSPDestroy(&ksp);CHKERRQ(ierr);
#else
  ierr = VecDestroy(X);CHKERRQ(ierr);
  ierr = VecDestroy(B);CHKERRQ(ierr);
  ierr = MatDestroy(A);CHKERRQ(ierr);
  ierr = KSPDestroy(ksp);CHKERRQ(ierr);
#endif

  PetscFunctionReturn(0);
}

/*-------- MatMultFieldMat ------
  User Matrix-vector product
  --------------------------------*/
PetscErrorCode MatMultFieldMat(Mat A, Vec X, Vec Y)
{
  PetscErrorCode ierr;
  std::vector<std::vector<std::vector<double> > > std_vec;
  std::vector<PetscInt>	field_indices, field_sizes;
  FieldMat *ctx;
  int nb_field;
  int flag_operation;

  ierr = MatShellGetContext(A, (void**)&ctx);CHKERRQ(ierr);
  field_indices = ctx->FieldIndices;
  field_sizes = ctx->FieldSizes;
  nb_field = (int)field_indices.size();
  flag_operation = ctx->flag_operation;

  //convert X to a std vector
  ierr = PETSc_Vec_to_STD_Vec(X, field_sizes, &std_vec);CHKERRQ(ierr);
  // Update PViews
  for (unsigned int cpt_view = 0; cpt_view<field_indices.size(); cpt_view++){
    PView *view = PView::list[field_indices[cpt_view]];
    view->getData()->fromVector(std_vec[cpt_view]);
  }
  //Getdp resolution (contained in the matrix context)
  Treatment_Operation(ctx->Resolution_P,
                      ctx->Operation_P->Case.IterativeLinearSolver.Operations_Ax,
                      ctx->DofData_P0,
                      ctx->GeoData_P0,
                      NULL, NULL);
  ierr = PetscBarrier((PetscObject)PETSC_NULL);CHKERRQ(ierr);
  //Extract the (std) vector from the (new) .pos files
  for(int cpt_view = 0; cpt_view < nb_field; cpt_view++) {
    PView *view = PView::list[field_indices[cpt_view]];
    view->getData()->toVector(std_vec[cpt_view]);
  }
  ierr = PetscBarrier((PetscObject)PETSC_NULL);CHKERRQ(ierr);
  //Convert the obtained vector to a Petsc Vec
  ierr = STD_vector_to_PETSc_Vec(std_vec, Y);CHKERRQ(ierr);

  //Set Y = X - Y
  if(flag_operation == 1)
    {ierr = VecAYPX(Y, -1.,X); CHKERRQ(ierr);}

  PetscFunctionReturn(0);
}

/* ----- STD_vector_to_PETSc_Vec ----
   Copy a STD Vector (std_vec) to a PETSc vector (petsc_vec)
*/
PetscErrorCode STD_vector_to_PETSc_Vec(std::vector<std::vector<std::vector<double> > > std_vec,
                                       Vec petsc_vec)
{
  PetscInt		cpt = 0, nb_view;
  PetscErrorCode 	ierr;

  nb_view = (int)std_vec.size();
  for (int cpt_view = 0; cpt_view < nb_view; cpt_view++){
    std::vector<PetscScalar> val;
    int nb_element = (int)std_vec[cpt_view][0].size();
    std::vector<PetscInt> ix(nb_element);
    for (int i =0; i<nb_element; i++){
    		ix[i] = cpt + i;
#if defined(PETSC_USE_COMPLEX)
    		val.resize(nb_element);
						val[i] = std_vec[cpt_view][0][i] + PETSC_i*std_vec[cpt_view][1][i];
#else
    		val.resize(2*nb_element);
						val[2*i] = std_vec[cpt_view][0][i];
						val[2*i+1] = std_vec[cpt_view][1][i];
#endif
				}
#if defined(PETSC_USE_COMPLEX)
      ierr = VecSetValues(petsc_vec, nb_element, &ix[0], &val[0], INSERT_VALUES);
#else
      ierr = VecSetValues(petsc_vec, 2*nb_element, &ix[0], &val[0], INSERT_VALUES);
#endif
				cpt += nb_element;

/*
    for (int j = 0; j < nb_element; j++){
      // The line below can surely be improved !!!
#if defined(PETSC_USE_COMPLEX)
      ierr = VecSetValue(petsc_vec, cpt, std_vec[cpt_view][0][j] + PETSC_i*std_vec[cpt_view][1][j], INSERT_VALUES);CHKERRQ(ierr);
#else
      ierr = VecSetValue(petsc_vec, 2*cpt, std_vec[cpt_view][0][j], INSERT_VALUES);CHKERRQ(ierr);
      ierr = VecSetValue(petsc_vec, 2*cpt+1, std_vec[cpt_view][1][j], INSERT_VALUES);CHKERRQ(ierr);
#endif
      cpt++;
    }*/
  }
  ierr = VecAssemblyBegin(petsc_vec);CHKERRQ(ierr);
  ierr = VecAssemblyEnd(petsc_vec);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

/* ----- PETSc_Vec_to_STD_Vec ----
   Copy Petsc Vec to a std::vector
   Carreful if the vector is sequential (self) or parallel...
*/
PetscErrorCode PETSc_Vec_to_STD_Vec(Vec petsc_vec,
                                    std::vector<PetscInt> FieldSizes,
                                    std::vector<std::vector<std::vector<double> > > *std_vec)
{
  int cpt = 0, nb_view, nb_element;
  PetscErrorCode ierr;
  PetscScalar val;
  
  nb_view = FieldSizes.size();

		// SCATTER/GATHER IF NOT SEQUENTIAL
		Vec petsc_vecSEQ;
		const VecType type;
		ierr = VecGetType(petsc_vec, &type);

		if(strcmp(type, "seq")){//parallel vector
				VecScatter ctx_scat;
				ierr = VecScatterCreateToAll(petsc_vec, &ctx_scat, &petsc_vecSEQ);CHKERRQ(ierr);
				ierr = VecScatterBegin(ctx_scat, petsc_vec, petsc_vecSEQ, INSERT_VALUES, SCATTER_FORWARD);CHKERRQ(ierr);
				ierr = VecScatterEnd(ctx_scat, petsc_vec, petsc_vecSEQ, INSERT_VALUES, SCATTER_FORWARD);CHKERRQ(ierr);
				// destroy scatter context and local vector when no longer needed
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
		ierr = VecScatterDestroy(&ctx_scat);CHKERRQ(ierr);
#else
		ierr = VecScatterDestroy(ctx_scat);CHKERRQ(ierr);
#endif
		}else petsc_vecSEQ = petsc_vec;

  //initializing std_vec
  (*std_vec).resize(FieldSizes.size());
  for (int cpt_view = 0; cpt_view<nb_view; cpt_view++){
    (*std_vec)[cpt_view].resize(2);
    (*std_vec)[cpt_view][0].resize(FieldSizes[cpt_view]);
    (*std_vec)[cpt_view][1].resize(FieldSizes[cpt_view]);
  }

  for (int cpt_view = 0; cpt_view < nb_view; cpt_view++){
    nb_element = (int)FieldSizes[cpt_view];
    for (int j = 0; j<nb_element; j++) {
      // FOLLOWING LINE TO IMPROVE ??
#if defined(PETSC_USE_COMPLEX)
      ierr = VecGetValues(petsc_vecSEQ, 1, &cpt, &val);CHKERRQ(ierr);
      (*std_vec)[cpt_view][0][j] = (double)PetscRealPart(val);
      (*std_vec)[cpt_view][1][j] = (double)PetscImaginaryPart(val);
#else
      ierr = VecGetValues(petsc_vecSEQ, 1, &cpt, &val);CHKERRQ(ierr);
      (*std_vec)[cpt_view][0][j] = (double)(val);
      cpt++;
      ierr = VecGetValues(petsc_vecSEQ, 1, &cpt, &val);CHKERRQ(ierr);
      (*std_vec)[cpt_view][1][j] = (double)(val);
#endif
      cpt++;
    }
  }
		if(strcmp(type, "seq")){
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
		ierr = VecDestroy(&petsc_vecSEQ);CHKERRQ(ierr);
#else
		ierr = VecDestroy(petsc_vecSEQ);CHKERRQ(ierr);
#endif
		}
		PetscFunctionReturn(0);
}

/* ----- CreateFieldMat ----
   Initialize the MatShell Matrix
   Preallocate the memory
*/
PetscErrorCode CreateFieldMat(FieldMat **shell)
{
  FieldMat *newctx;
  std::vector<PetscInt> vec_indice, vec_size;
  PetscErrorCode ierr;

  ierr = PetscNew(FieldMat,&newctx);CHKERRQ(ierr);
  newctx->FieldIndices = vec_indice;
  newctx->FieldSizes = vec_size;
  newctx->flag_operation = 1;
  newctx->Resolution_P = NULL;
  newctx->Operation_P = NULL;
  newctx->DofData_P0 = NULL;
  newctx->GeoData_P0 = NULL;
  *shell = newctx;
  PetscFunctionReturn(0);
}

/* ----- SetFieldMat ----
 Set data to the shell matrix contex
 */
PetscErrorCode SetFieldMat(FieldMat **shell,
                           int flag_operation,
                           std::vector<PetscInt> FieldIndices,
                           std::vector<PetscInt> FieldSizes,
                           struct Resolution *Resolution_P,
                           struct Operation *Operation_P,
                           struct DofData *DofData_P0,
                           struct GeoData *GeoData_P0)
{
//    PetscErrorCode	ierr;
  (*shell)->flag_operation = flag_operation;
  (*shell)->FieldIndices = FieldIndices;
  (*shell)->FieldSizes = FieldSizes;
  (*shell)->Resolution_P = Resolution_P;
  (*shell)->Operation_P = Operation_P;
  (*shell)->DofData_P0 = DofData_P0;
  (*shell)->GeoData_P0 = GeoData_P0;
  PetscFunctionReturn(0);
}

/* ----- JACOBI METHOD ----- */
PetscErrorCode Jacobi_Solver(Mat A, Vec X, Vec B, double Tol, int MaxIter)
{
  PetscErrorCode	ierr;
  Vec				X_old, W;
  double residu;

  ierr = VecSet(X, 0.);
  ierr = VecDuplicate(X, &X_old);CHKERRQ(ierr);
  ierr = VecDuplicate(X, &W);CHKERRQ(ierr);

  ierr = VecCopy(X, W);

  for (int j=1; j < MaxIter; j++){
    ierr = VecCopy(X, X_old);
    ierr = MatMultFieldMat(A, X_old, X);
    ierr = VecAYPX(X, 1.,B); // X = X + B
    //convergence test

    ierr = VecWAXPY(W, -1.,X_old, X); //W = X-X_old
    ierr = VecNorm(W, NORM_2, &residu);
    printf("jacobi iteration %d residu %g\n", j, residu);
    if(residu < Tol){
      break;
    }
  }

  PetscFunctionReturn(0);
}

/*----- Orthonormalizer (modified gram-schmidt algormith) --------
  ----Used to orthonormalize initial deflated data (with DGMRES)----*/
PetscErrorCode Orthonormalizer(std::vector<Vec> X, int SizeX)
{
  PetscErrorCode	ierr;
  PetscScalar		alpha;
  PetscReal			modul;

  /* modified Gram-Schmidt */
  // normalize first vector
  ierr = VecNormalize(X[0], &modul);
  for (int j = 1; j<SizeX; j++) {
    for (int i=0; i<j; i++) {
      ierr = VecDot (X[j], X[i], &alpha);	CHKERRQ (ierr);
      ierr = VecAXPY (X[j], -alpha, X[i]); CHKERRQ (ierr);
    }
    ierr = VecNormalize(X[j], &modul);
  }

  PetscFunctionReturn(0);
}

/*Reads and reassembles vectors from GMSH View (or Field)*/
PetscErrorCode ReadFields(int nb_field, int nth_vect, struct Operation *Operation_P,
                          std::vector<std::vector<std::vector<double> > > *vector_field,
                          std::vector<PetscInt> *indices_field,
                          std::vector<PetscInt> *sizes_field,
                          int *n)
{
  int loc_size;
  (*vector_field).resize(nb_field);
  (*sizes_field).resize(nb_field);
  (*indices_field).resize(nb_field);
  *n = 0;
  for(int cpt_view = 0; cpt_view < nb_field; cpt_view++) {
    double d;
    if(nth_vect == 0){ //we are creating the vector from the first argument of IterativeLinearSolver
      List_Read(Operation_P->Case.IterativeLinearSolver.FieldIndices, cpt_view, &d);
    }
    else{ //Here is the (nth_vect+1) vector from the last argument of IterativeLinearSolver (deflation !)
      int shift = (nth_vect-1)*nb_field; // one vector contains nb_field views
      List_Read(Operation_P->Case.IterativeLinearSolver.DeflationIndices, shift + cpt_view, &d);
    }
    (*indices_field)[cpt_view] = (int)d;
    PView *view = PView::list[(int)d];
    view->getData()->toVector((*vector_field)[cpt_view]);
    loc_size = (int)(*vector_field)[cpt_view][0].size();
    (*sizes_field)[cpt_view] = loc_size; // how many components ?
    *n += loc_size;
  }
  PetscFunctionReturn(0);
}

PetscErrorCode DgmresDDM_Build(Mat A, struct Operation *Operation_P, int nb_field, int nb_deflation, Mat *M)
{
  //Right Preconditionner for "Deflated GMRES" with pre-given vectors. This is used for, e.g., DDM
  //We follow the paper Burrage, Kevin and Erhel, Jocelyne
  //On the performance of various adaptive preconditioned {GMRES} strategies
  //Numer. Linear Algebra Appl., 1998
  PetscErrorCode ierr;
  PetscInt m, n;

  ierr = MatGetSize(A, &m, &n);
  int n_aux = 0;
  std::vector<PetscInt> ix(n);
  for(PetscInt i = 0; i<n; i++)
    ix[i] = i;

  std::vector<Vec> DeflationVec(nb_deflation);
  Mat U, Ut, AU; //Matrix U, its transpose and A*U
  Mat UtAU; //Ut*A*U
  Mat invUtAU; //inverte of UtAU
  Mat Id_def; //identity matrix (size nb_deflation) and inverste of UtAU
  Mat Id_n; //identity matrix (size n)
  Mat Id_defUt; //Id_def*Ut
  Mat UId_defUt; //U*Id_defUt

/*  ierr = MatCreate(PETSC_COMM_WORLD, &U);CHKERRQ(ierr);
  ierr = MatSetSizes(U, PETSC_DECIDE, PETSC_DECIDE, n, nb_deflation);CHKERRQ(ierr);
  ierr = MatSetFromOptions(U);CHKERRQ(ierr);*/
  ierr = MatCreateSeqDense(PETSC_COMM_SELF, n, nb_deflation, PETSC_NULL, &U); CHKERRQ(ierr);
  //next two variables are useless but necessary to run ReadFields
  std::vector<PetscInt> indices_deflation, sizes_deflation;
  for(int cpt_deflation = 0; cpt_deflation < nb_deflation; cpt_deflation ++){
    std::vector<std::vector<std::vector<double> > > new_field;
    ierr = ReadFields(nb_field, cpt_deflation+1, Operation_P, &new_field, &indices_deflation, &sizes_deflation, &n_aux);CHKERRQ(ierr);
    //create a Vec from the std::vec
				ierr = VecCreateSeq(PETSC_COMM_SELF, n, &DeflationVec[cpt_deflation]);CHKERRQ(ierr);
/*    ierr = VecCreate(PETSC_COMM_WORLD, &DeflationVec[cpt_deflation]);CHKERRQ(ierr);
				ierr = VecSetSizes(DeflationVec[cpt_deflation], PETSC_DECIDE, n);CHKERRQ(ierr);
  		ierr = VecSetFromOptions(DeflationVec[cpt_deflation]);CHKERRQ(ierr);*/
    ierr = STD_vector_to_PETSc_Vec(new_field, DeflationVec[cpt_deflation]);CHKERRQ(ierr);
  }
  ierr = Orthonormalizer(DeflationVec, nb_deflation); CHKERRQ(ierr);
  //Stocking into matrix U
  for(int cpt_deflation = 0; cpt_deflation < nb_deflation; cpt_deflation ++){
    std::vector<PetscScalar> vec_temp(n);
    ierr = VecGetValues(DeflationVec[cpt_deflation], n, &ix[0], &vec_temp[0]);CHKERRQ(ierr);
    ierr = MatSetValues(U, n, &ix[0], 1, &cpt_deflation, &vec_temp[0], INSERT_VALUES);CHKERRQ(ierr);
  }
  ierr = MatAssemblyBegin(U, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd(U, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  //transpose U
  ierr = MatHermitianTranspose(U, MAT_INITIAL_MATRIX, &Ut);CHKERRQ(ierr);

  //Now compute AU
  ierr = MatCreateSeqDense(PETSC_COMM_SELF, n, nb_deflation, PETSC_NULL , &AU); CHKERRQ(ierr);
/*  ierr = MatCreate(PETSC_COMM_WORLD, &AU);CHKERRQ(ierr);
  ierr = MatSetSizes(AU, PETSC_DECIDE, PETSC_DECIDE, n, nb_deflation);CHKERRQ(ierr);
  ierr = MatSetFromOptions(AU);*/
  for (int cpt_deflation =0; cpt_deflation <nb_deflation; cpt_deflation ++){
    Vec Y;
    std::vector<PetscScalar> vec_temp(n);
    ierr = VecDuplicate(DeflationVec[0],&Y);CHKERRQ(ierr);
    MatMultFieldMat(A, DeflationVec[cpt_deflation], Y);
    //plug Y into matrix AU
    ierr = VecGetValues(Y, n, &ix[0], &vec_temp[0]);CHKERRQ(ierr);
    ierr = MatSetValues(AU, n, &ix[0], 1, &cpt_deflation, &vec_temp[0], INSERT_VALUES);CHKERRQ(ierr);
  }
  ierr = MatAssemblyBegin(AU, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd(AU, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  //Multiply Ut and AU
  ierr = MatMatMult(Ut, AU, MAT_INITIAL_MATRIX, PETSC_DEFAULT, &UtAU);CHKERRQ(ierr);
  //invert UtAU (= T)
  ierr = MatDuplicate(UtAU, MAT_DO_NOT_COPY_VALUES, &Id_def);CHKERRQ(ierr);
  PetscScalar one = 1.;
  for(int cpt =0; cpt <nb_deflation; cpt++)
    ierr = MatSetValues(Id_def, 1, &cpt, 1, &cpt, &one, INSERT_VALUES);CHKERRQ(ierr);
  ierr = MatAssemblyBegin(Id_def, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd(Id_def, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatDuplicate(UtAU, MAT_DO_NOT_COPY_VALUES, &invUtAU);
  ierr = MatLUFactor(UtAU, 0, 0, 0); CHKERRQ(ierr);
  ierr = MatMatSolve(UtAU, Id_def, invUtAU);CHKERRQ(ierr);
  //Compute the preconditioner (Matrix M);
  // M = Id_n +U*(lambda*inv(UtAU) - Id_def)*Ut
  ierr = MatCreateSeqDense(PETSC_COMM_SELF, n, n, PETSC_NULL, &Id_n); CHKERRQ(ierr);
/*  ierr = MatCreate(PETSC_COMM_WORLD, &Id_n);CHKERRQ(ierr);
  ierr = MatSetSizes(Id_n, PETSC_DECIDE, PETSC_DECIDE, n, n);CHKERRQ(ierr);*/
  for(int cpt =0; cpt <n; cpt++)
    ierr = MatSetValues(Id_n, 1, &cpt, 1, &cpt, &one, INSERT_VALUES);CHKERRQ(ierr);
  ierr = MatAssemblyBegin(Id_n, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd(Id_n, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  //Id_def <- inv(UtAU) - Id
  ierr = MatAYPX(Id_def, -1., invUtAU, SAME_NONZERO_PATTERN);CHKERRQ(ierr);
  //Id_def*Ut
  ierr = MatMatMult(Id_def, Ut, MAT_INITIAL_MATRIX, PETSC_DEFAULT, &Id_defUt);CHKERRQ(ierr);
  //U*Id_defUt
  ierr = MatMatMult(U, Id_defUt, MAT_INITIAL_MATRIX, PETSC_DEFAULT, &UId_defUt);CHKERRQ(ierr);
  // Id_n + UId_defUt
  ierr = MatAXPY(Id_n, 1., UId_defUt, SAME_NONZERO_PATTERN);CHKERRQ(ierr);
  //Now M point to Id_n
  ierr = MatDuplicate(Id_n, MAT_COPY_VALUES, M);CHKERRQ(ierr);
  //FREE MATRICES
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = MatDestroy(&U);CHKERRQ(ierr);
  ierr = MatDestroy(&Ut);CHKERRQ(ierr);
  ierr = MatDestroy(&AU);CHKERRQ(ierr);
  ierr = MatDestroy(&UtAU);CHKERRQ(ierr);
  ierr = MatDestroy(&invUtAU);CHKERRQ(ierr);
  ierr = MatDestroy(&Id_def);CHKERRQ(ierr);
  ierr = MatDestroy(&Id_n);CHKERRQ(ierr);
  ierr = MatDestroy(&UId_defUt);CHKERRQ(ierr);
#else
  ierr = MatDestroy(U);CHKERRQ(ierr);
  ierr = MatDestroy(Ut);CHKERRQ(ierr);
  ierr = MatDestroy(AU);CHKERRQ(ierr);
  ierr = MatDestroy(UtAU);CHKERRQ(ierr);
  ierr = MatDestroy(invUtAU);CHKERRQ(ierr);
  ierr = MatDestroy(Id_def);CHKERRQ(ierr);
  ierr = MatDestroy(Id_n);CHKERRQ(ierr);
  ierr = MatDestroy(UId_defUt);CHKERRQ(ierr);
#endif
  PetscFunctionReturn(0);
}

//Build the iteration matrix of the Matrix-free vector-product.
//Used to, e.g., study eigenvalues of the operators
PetscErrorCode BuildIterationMatrix(Mat A, Mat *IterationMatrix)
{
  const PetscScalar one = 1., zero = 0.;
  PetscErrorCode ierr;
  Mat AuxMatrix;
  PetscInt m,n, m_loc, n_loc, m_start, m_end;

  ierr = MatGetSize(A, &m, &n);
  ierr = MatCreate(PETSC_COMM_WORLD, &AuxMatrix);CHKERRQ(ierr);
  ierr = MatSetSizes(AuxMatrix, PETSC_DECIDE, PETSC_DECIDE, m, n);CHKERRQ(ierr);
//TO IMPROVE : PREALLOCATION
  ierr = MatSetUp(AuxMatrix); CHKERRQ(ierr);
  ierr = MatSetFromOptions(AuxMatrix);CHKERRQ(ierr);

		ierr = MatGetLocalSize(AuxMatrix, &m_loc, &n_loc); CHKERRQ(ierr);
		ierr = MatGetOwnershipRange(AuxMatrix, &m_start, &m_end); CHKERRQ(ierr);
		m_loc = m_end-m_start;
  std::vector<PetscInt> ix(m_loc);
  for(PetscInt i = 0; i<m_loc; i++)
    ix[i] = m_start + i;

	 Vec ej, Aej;
		ierr = VecCreateSeq(PETSC_COMM_SELF, m, &ej);CHKERRQ(ierr);
		ierr = VecSetFromOptions(ej);CHKERRQ(ierr);
		ierr = VecDuplicate(ej, &Aej);CHKERRQ(ierr);
  
  for(int cpt=0;cpt<n;cpt++){
    std::vector<PetscScalar> vec_temp(n);
				VecSet(ej, zero);CHKERRQ(ierr);
    ierr = VecSetValues(ej, 1., &cpt, &one, INSERT_VALUES) ;CHKERRQ(ierr);
    ierr = VecAssemblyBegin(ej);CHKERRQ(ierr);
    ierr = VecAssemblyEnd(ej);CHKERRQ(ierr);
    ierr = MatMultFieldMat(A, ej, Aej);CHKERRQ(ierr);
    //stocking it in a Matrix
    ierr = VecGetValues(Aej, m_loc, &ix[0], &vec_temp[0]);CHKERRQ(ierr);
    ierr = MatSetValues(AuxMatrix, m_loc, &ix[0], 1, &cpt, &vec_temp[0], INSERT_VALUES);CHKERRQ(ierr);
  }
  ierr = MatAssemblyBegin(AuxMatrix, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd(AuxMatrix, MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatDuplicate(AuxMatrix, MAT_COPY_VALUES, IterationMatrix);CHKERRQ(ierr);

#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = MatDestroy(&AuxMatrix);CHKERRQ(ierr);
#else
  ierr = MatDestroy(AuxMatrix);CHKERRQ(ierr);
#endif
  PetscFunctionReturn(0);
}

//Print Iteration Matrix into file_IterationMatrix.m (matlab reading)
PetscErrorCode PrintMatrix(Mat A, const char* filename, const char* varname, bool BINARY)
{
//This function is copy/paste of function LinAlg_PrintMatrix function 
// located in Legacy/LinAlg_PETSC.cpp 
  PetscErrorCode ierr;
	 PetscViewer viewer;
		std::string tmp(filename);
		ierr = PetscObjectSetName((PetscObject)A, varname);
		ierr = PetscViewerCreate(PETSC_COMM_WORLD, &viewer);CHKERRQ(ierr);
		if(!BINARY){
    // ASCII
				ierr = PetscViewerASCIIOpen(PETSC_COMM_WORLD, filename, &viewer);CHKERRQ(ierr);
				ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB);CHKERRQ(ierr);
		}else{ //BINARY
				//Add the petscfolder/bin/matlab path to your matlab paths and
				//type the following command in matlab, for real arithmetic :
				// PetscBinaryRead(filename) ;
				// and for complex arithmetic :
				// PetscBinaryRead(filename , 'complex') ;
				ierr = PetscViewerBinaryOpen(PETSC_COMM_WORLD, (tmp + ".bin").c_str(), FILE_MODE_WRITE, &viewer);CHKERRQ(ierr);
				ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_DEFAULT);CHKERRQ(ierr);
		}
				MatView(A,viewer);

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    ierr = PetscViewerDestroy(&viewer);CHKERRQ(ierr);
#else
    ierr = PetscViewerDestroy(viewer);CHKERRQ(ierr);
#endif

  PetscFunctionReturn(0);
}

//Print a Petsc Vec into a Matlab File
PetscErrorCode PrintVecSeq(Vec b, const char* filename, const char* varname, bool BINARY)
{
//This function is copy/paste of function LinAlg_PrintMatrix function 
// located in Legacy/LinAlg_PETSC.cpp 
  PetscErrorCode ierr;
	 PetscViewer viewer;
		std::string tmp(filename);
		
		ierr = PetscObjectSetName((PetscObject)b, varname);CHKERRQ(ierr);
		ierr = PetscViewerCreate(PETSC_COMM_WORLD, &viewer);CHKERRQ(ierr);
		if(!BINARY){
    // ASCII
				ierr = PetscViewerASCIIOpen(PETSC_COMM_SELF, filename, &viewer);CHKERRQ(ierr);
				ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB);CHKERRQ(ierr);
		}else{ //BINARY
				//see PrintMat function for the how-to use it
				ierr = PetscViewerBinaryOpen(PETSC_COMM_SELF, (tmp + ".bin").c_str(), FILE_MODE_WRITE, &viewer);CHKERRQ(ierr);
				ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_DEFAULT);CHKERRQ(ierr);
		}
				VecView(b,viewer);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    ierr = PetscViewerDestroy(&viewer);CHKERRQ(ierr);
#else
    ierr = PetscViewerDestroy(viewer);CHKERRQ(ierr);
#endif
  PetscFunctionReturn(0);
}

#else

int Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                    struct Operation   *Operation_P,
                                    struct DofData     *DofData_P0,
                                    struct GeoData     *GeoData_P0)
{
  Message::Error("IterativeLinearSolver requires PETSc and Gmsh");
  return 0;
}

#endif
