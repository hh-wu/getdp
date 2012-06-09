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

/* Matrix Free structure (Matrix Shell)*/
typedef struct{
  int					flag_operation; // MatMultFieldMat(A,X,Y) gives AX (flag_operation =0) or (I-A)X (flag_operation =1)
  std::vector<PetscInt>	FieldIndices;
  std::vector<PetscInt>	FieldSizes;
  struct Resolution  		*Resolution_P;
  struct Operation   		*Operation_P;
  struct DofData     		*DofData_P0;
  struct GeoData     		*GeoData_P0;
} FieldMat;

PetscErrorCode Orthonormalizer(Vec *X, int SizeX);
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
  PetscInt n, n_loc, loc_size; // number of unknowns (globally and locally)
  PC pc;
  int flag_operation = 1; //for the matmult product

  KSPConvergedReason reason;
  PetscInt its;

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

  // Field numbers (unknown)
  nb_field = List_Nbr(Operation_P->Case.IterativeLinearSolver.FieldIndices);
  indices_field.resize(nb_field);
  for(int j = 0; j < nb_field; j++) {
    double d;
    List_Read(Operation_P->Case.IterativeLinearSolver.FieldIndices, j, &d);
    indices_field[j] = (int)d;
  }
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Number of Fields\t: %d\n", nb_field);

  //if jacobi then MatMult(A,X) = A*X (otherwise (I-A)*X)
  if(!strcmp(ksp_choice, "jacobi")){flag_operation = 0;}

  /*---------------------------------------------
    Initialization
    Reading the existing .pos file in order to
    create the vector of unknown (std and petsc).
    ---------------------------------------------*/
  B_std.resize(nb_field);
  n=0;
  for(int cpt_view = 0; cpt_view < nb_field; cpt_view++) {
    PView *view = PView::list[indices_field[cpt_view]];
    view->getData()->toVector(B_std[cpt_view]);
    loc_size = (int)B_std[cpt_view][0].size();
    sizes_field.push_back(loc_size); // how many compononents ?
    n += loc_size;
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Local size of View %d: %d\n", cpt_view, loc_size);
  }
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Total system size: %d\n", n);
#if !defined(PETSC_USE_COMPLEX)
  n *= 2;
  ierr = PetscPrintf(PETSC_COMM_WORLD, "PETSc REAL arithmetic -> system size is doubled: n=%d\n", n);
#endif

  //Petsc Vec of unknown
//  ierr = VecCreate(PETSC_COMM_WORLD, &X);CHKERRQ(ierr);
//  ierr = VecSetSizes(X,PETSC_DECIDE, n);CHKERRQ(ierr);
  ierr = VecCreateSeq(PETSC_COMM_SELF, n, &X);CHKERRQ(ierr);
  ierr = VecSetFromOptions(X);CHKERRQ(ierr);
  //Petsc Vec Right Hand Side
  ierr = VecDuplicate(X,&B);CHKERRQ(ierr);
  STD_vector_to_PETSc_Vec(B_std, B);
  //context of the shell matrix
  ierr = VecGetLocalSize(B,&n_loc);CHKERRQ(ierr);

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
  if(!strcmp(ksp_choice,"jacobi")){
  	ierr = Jacobi_Solver(A, X, B, Tol, MaxIter);
  }else{
  	// creation of the ksp (iterative solver, not jacobi)
  	ierr = KSPCreate(PETSC_COMM_WORLD,&ksp);CHKERRQ(ierr);
  	ierr = KSPSetOperators(ksp,A,A,DIFFERENT_NONZERO_PATTERN);CHKERRQ(ierr);
  	//tol etc.
  	ierr = KSPSetTolerances(ksp, Tol, PETSC_DEFAULT, PETSC_DEFAULT, MaxIter); CHKERRQ(ierr);
  	ierr = KSPSetType(ksp, ksp_choice); CHKERRQ(ierr);

  	//Preconditioning !
  	ierr = KSPGetPC(ksp,&pc);CHKERRQ(ierr);
  	ierr = PCSetType(pc,PCNONE);CHKERRQ(ierr);
  	// below is only for ksp = gmres and its variants (other ksp does not have a restart)
  	if(Restart>0){// && (!strcmp(ksp_choice,"gmres") || !strcmp(ksp_choice,"dgmres") || !strcmp(ksp_choice,"lgmres") ||!strcmp(ksp_choice,"fgmres") )){
    	ierr = KSPGMRESSetRestart(ksp, Restart); CHKERRQ(ierr);
  	}
  	if(!strcmp(ksp_choice,"dgmres")){
  	/*	int nb_deflation = List_Nbr(Operation_P->Case.IterativeLinearSolver.DeflationIndices);
  		nb_deflation /= nb_field; // number of effective vectors
		if(nb_deflation>=0){
		  ierr = PetscPrintf(PETSC_COMM_WORLD, "DGMRES: deflation data detected, adding to the deflation...\n"); CHKERRQ(ierr);
		  Vec DeflationVec[nb_deflation];
		  std::vector<std::vector<PetscInt> > indices_deflation; //indices of the view containing the deflation
		  indices_deflation.resize(nb_deflation);
  		  for(int cpt_deflation = 0; cpt_deflation < nb_deflation; cpt_deflation ++){
			indices_deflation[cpt_deflation].resize(nb_field);
  		  	for(int j = 0; j < nb_field; j++) {
    			double d;
    			List_Read(Operation_P->Case.IterativeLinearSolver.DeflationIndices, j + nb_field*cpt_deflation, &d);
    			indices_deflation[cpt_deflation][j] = (int)d;
  		  	}
  		  }
  		  //copying vectors
		  for(int cpt_deflation = 0; cpt_deflation < nb_deflation; cpt_deflation ++){
			  //construct each deflation vectors
  			  std::vector<std::vector<std::vector<double> > > VecTemp; // right hand side (std version)
			  VecTemp.resize(nb_field);
			  for(int cpt_view = 0; cpt_view < nb_field; cpt_view++) {
				  PView *view = PView::list[indices_deflation[cpt_deflation][cpt_view]];
				  view->getData()->toVector(VecTemp[cpt_view]);
			  }
			  ierr = VecDuplicate(X, &DeflationVec[cpt_deflation]);  CHKERRQ(ierr);
			  ierr = STD_vector_to_PETSc_Vec(VecTemp, DeflationVec[cpt_deflation]); CHKERRQ(ierr);
		  }
		  ierr = Orthonormalizer(DeflationVec, nb_deflation); CHKERRQ(ierr);
		  ierr = KSPDGMRESSetInitialDeflationData(ksp, DeflationVec, nb_deflation); CHKERRQ(ierr);
		  ierr = PetscPrintf(PETSC_COMM_WORLD, "DGMRES: %d vectors successfully added to the invariant subspace !\n", nb_deflation); CHKERRQ(ierr);
		*/
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
  for (int cpt_view = 0; cpt_view<indices_field.size(); cpt_view++){
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
  for (int cpt_view = 0; cpt_view<field_indices.size(); cpt_view++){
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
    int nb_element = (int)std_vec[cpt_view][0].size();
    for (int j = 0; j < nb_element; j++){
      // The line below can surely be improved !!!
	  #if defined(PETSC_USE_COMPLEX)
        ierr = VecSetValue(petsc_vec, cpt, std_vec[cpt_view][0][j] + PETSC_i*std_vec[cpt_view][1][j], INSERT_VALUES);CHKERRQ(ierr);
      #else
        ierr = VecSetValue(petsc_vec, 2*cpt, std_vec[cpt_view][0][j], INSERT_VALUES);CHKERRQ(ierr);
      	ierr = VecSetValue(petsc_vec, 2*cpt+1, std_vec[cpt_view][1][j], INSERT_VALUES);CHKERRQ(ierr);
      #endif
      cpt++;
    }
  }
  ierr = VecAssemblyBegin(petsc_vec);CHKERRQ(ierr);
  ierr = VecAssemblyEnd(petsc_vec);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

/* ----- PETSc_Vec_to_STD_Vec ----
   Copy and cut the Petsc Vec to a std::vector
*/
PetscErrorCode PETSc_Vec_to_STD_Vec(Vec petsc_vec,
                                    std::vector<PetscInt> FieldSizes,
                                    std::vector<std::vector<std::vector<double> > > *std_vec)
{
  int cpt = 0, nb_view, nb_element;
  PetscErrorCode ierr;
  PetscScalar val;

  nb_view = FieldSizes.size();

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
      // FOLLOWING LINE TO IMPROVED ??
	  #if defined(PETSC_USE_COMPLEX)
        ierr = VecGetValues(petsc_vec, 1, &cpt, &val);CHKERRQ(ierr);
    	(*std_vec)[cpt_view][0][j] = (double)PetscRealPart(val);
        (*std_vec)[cpt_view][1][j] = (double)PetscImaginaryPart(val);
	  #else
        ierr = VecGetValues(petsc_vec, 1, &cpt, &val);CHKERRQ(ierr);
        (*std_vec)[cpt_view][0][j] = (double)(val);
        cpt++;
        ierr = VecGetValues(petsc_vec, 1, &cpt, &val);CHKERRQ(ierr);
        (*std_vec)[cpt_view][1][j] = (double)(val);
	  #endif
	  cpt++;
    }
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
  PetscErrorCode	ierr;

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

	for (int j=1; j < MaxIter; j++)
	{
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
PetscErrorCode Orthonormalizer(Vec *X, int SizeX)
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
