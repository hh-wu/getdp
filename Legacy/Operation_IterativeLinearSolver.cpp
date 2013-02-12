// GetDP - Copyright (C) 1997-2013 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.
//
// Contributed by Bertrand Thierry

#include <stdio.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "SolvingOperations.h"
#include "Message.h"

#include<iostream>
#include<fstream>
#include<stdlib.h>

// for performance tests
#if !defined(WIN32)
#define TIMER
#endif

#if defined(HAVE_PETSC) && defined(HAVE_GMSH)

#include "petscksp.h"
#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>

class ILS{
  //A new communicator can be created. If some processes have no work they must
  //be excluded from the communicator to avoir dead-lock
 private:
  // current cpu number and total number of cpus
  static MPI_Comm _comm;
  static int _commRank, _commSize;
  //static std::vector< double > time_MatMult;
  //static std::vector< double > time_Bcast;
public:
  static int GetCommRank(){ return _commRank; }
  static int GetCommSize(){ return _commSize; }
  static MPI_Comm GetComm(){ return _comm; }
  //  static void AddTimeMatMult(double t){time_MatMult.push_back(t);};
  //static void AddTimeBcast(double t){time_Bcast.push_back(t);};
};

MPI_Comm ILS::_comm = MPI_COMM_WORLD;
int ILS::_commRank = 0;
int ILS::_commSize = 1;

class Field{
public:
  PetscInt nb_field; //number of Fields in this class
  PetscInt n_elem; //total number of element of all fields in this class
  std::vector<PetscInt> GmshTag; //GmshTag[j] = tag of field j (in getdp/gmsh, ie : outside IterativeLinearSolver)
  std::vector<PetscInt> ILSTag; //ILSTag[j] = local tag of field j in the function IterativeLinearSolver (usefull for MyField).
  std::vector<PetscInt> rank; //rank[j] is the mpi_rank of the process that owns field j
  std::vector<PetscInt> size; //size[j] = nb of elements in the field j
  std::vector<PetscInt> iStart; //starting index in the Petsc Vec containing all the fields
  std::vector<PetscInt> iEnd; //same as iStart but ending (a priori useless)
  //variables for transfering data with neighbors
  static bool areNeighbor;
  int nb_field_to_receive; // number of field that this process must receive
  //  std::vector<MPI_Comm> comm; //comm[j] is the communicator of process that need Field[j] (i.e : process that will participate to the broadcast of the view)
  std::vector<std::vector<PetscInt> > myN;
  std::vector<std::vector<PetscInt> > mySizeV; //sizes of vectors of PView that this process is in charge
  std::vector<std::vector<PetscInt> > theirN;
  std::vector<std::vector<PetscInt> > theirSizeV;
  std::vector<PetscInt>               FieldToReceive; //GmshTag of the fields that must be received by the current MPI processe (concatenation of myNeighbor)
  std::vector<std::vector<PetscInt> > RankToSend; //RankToSend[j] returns the rank to which the j^th local field must be sent
  //CPU Time
  std::vector<double> TimeBcast, TimeIt, TimeTreatment;

  //The bellow function is usefull to do a reverse search:
  //Given the GmshTag of a field (GetDP/GMSH) it returns its local tag in IterativeLinearSolver (ILSTag)
  //Indeed, ILS can renumber the field in another way than gmsh/getdp
  int GetILSTagFromGmshTag(int gTag){
    for (int j = 0; j < nb_field ; j++)
      if(GmshTag[j] == gTag) return ILSTag[j];
    return -1; //error
  }
  int GetRankFromGmshTag(int gTag){
    for (int j = 0; j < nb_field ; j++)
      if(GmshTag[j] == gTag) return rank[j];
    return -1; //error
  }
  int GetRankFromILSTag(int ilsTag){
    for (int j = 0; j < nb_field ; j++)
      if(ILSTag[j] == ilsTag) return rank[j];
    return -1; //error
  }
  int GetGmshTagFromRank(int irank){
    for (int j = 0; j < nb_field ; j++)
      if(rank[j] == irank) return GmshTag[j];
    return -1; //error
  }
};

bool Field::areNeighbor = false;

// Matrix Free structure (Matrix Shell)
typedef struct{
  char *LinearSystemType;
  Field *MyField;
  Field *AllField;
  struct Resolution *Resolution_P;
  struct Operation *Operation_P;
  struct DofData *DofData_P0;
  struct GeoData *GeoData_P0;
} ILSMat;

PetscErrorCode ReadFields(int nb_field, int nth_vect, struct Operation *Operation_P,
                          std::vector<std::vector<std::vector<double> > > *vector_field,
                          std::vector<PetscInt> *tagFields_loc,
                          std::vector<PetscInt> *sizes_field,
                          int *n);
PetscErrorCode InitData(Field *MyField, Field *AllField, struct Operation *Operation_P, std::vector<std::vector<std::vector<double> > > *B_std);
PetscErrorCode PViewBCast(Field MyField, Field AllField);
PetscErrorCode Orthonormalizer(std::vector<Vec> X, int SizeX);
PetscErrorCode DgmresDDM_Build(Mat A, int nb_field, int nb_deflation, Mat *M);
PetscErrorCode BuildIterationMatrix(Mat A, Mat *IterationMatrix);
PetscErrorCode PrintMatrix(Mat A, const char* fileName, const char* varname);
PetscErrorCode PrintVec(Vec b, const char* filename, const char* varname);
PetscErrorCode PrintVecSeq(Vec b, const char* filename, const char* varname);
PetscErrorCode Jacobi_Solver(Mat A, Vec X, Vec B, double Tol, int MaxIter);
PetscErrorCode MatMultILSMat(Mat A, Vec X, Vec Y);
PetscErrorCode STD_vector_to_PETSc_Vec(std::vector<std::vector<std::vector<double> > > std_vec,
                                       Vec petsc_vec,
				       Field *Local);
PetscErrorCode PETSc_Vec_to_STD_Vec(Vec petsc_vec,
                                    Field *Local,
                                    std::vector<std::vector<std::vector<double> > > *std_vec);
PetscErrorCode CreateILSMat(ILSMat **shell);
PetscErrorCode SetILSMat(ILSMat **shell,
                           char *LinearSystemType,
                           Field *MyField,
                           Field *AllField,
                           struct Resolution  	*Resolution_P,
                           struct Operation   	*Operation_P,
                           struct DofData     	*DofData_P0,
                           struct GeoData     	*GeoData_P0);

int Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                    struct Operation   *Operation_P,
                                    struct DofData     *DofData_P0,
                                    struct GeoData     *GeoData_P0)
{
  PetscErrorCode ierr;
  int mpi_comm_size = Message::GetCommSize();
  int mpi_comm_rank = Message::GetCommRank();
  ILSMat *ctx; // Matrix Shell context
  Mat A;
  KSP ksp;
  const KSPType ksp_choice;
  int MaxIter, Restart;
  double Tol;
  std::vector<std::vector<std::vector<double> > > B_std; // right hand side (std version)
  Vec B, X;// right hand side and Solution
  PC pc;
  MPI_Comm ILSComm = PETSC_COMM_WORLD; //by default, KSP is launch in total parallel
  char *LinearSystemType;
  Field MyField, AllField;
  double time_total = 0.;
#if defined(TIMER)
  clock_t time_start = clock();
#endif
  /*-------------
    Initializing
    -----------*/
  MPI_Barrier(PETSC_COMM_WORLD);
  Message::Info("Initalizing Iterative Linear Solver");
  InitData(&MyField, &AllField, Operation_P, &B_std);

  /*-------------------
    Print Informations
    -----------------*/
  Tol = Operation_P->Case.IterativeLinearSolver.Tolerance;
  MaxIter = Operation_P->Case.IterativeLinearSolver.MaxIter;
  Restart = Operation_P->Case.IterativeLinearSolver.Restart;
  ksp_choice = Operation_P->Case.IterativeLinearSolver.Type;
  LinearSystemType = Operation_P->Case.IterativeLinearSolver.OpMatMult;
  if(strcmp(LinearSystemType, "I-A") && strcmp(LinearSystemType, "I+A") && strcmp(LinearSystemType, "A")){
    char tmp[1024];
    sprintf(tmp, "Linear system type \"%s\" unknown. Try \"A\", \"I-A\" or \"I+A\".", LinearSystemType);
    Message::Error(tmp);
  }
  //Print informations
  if(!strcmp(LinearSystemType, "A")) ierr = PetscPrintf(PETSC_COMM_WORLD, "Linear system type\t: %sX = B\n", LinearSystemType);
  else ierr = PetscPrintf(PETSC_COMM_WORLD, "Linear system type\t: (%s)X = B\n", LinearSystemType);
  CHKERRQ(ierr);
  if(mpi_comm_size >1){ ierr = PetscPrintf(PETSC_COMM_WORLD, "Number of Processus\t: %d\n", mpi_comm_size);CHKERRQ(ierr);}
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Iterative solver\t: %s\n", ksp_choice);CHKERRQ(ierr);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Tolerance\t\t: %g\n", Tol);CHKERRQ(ierr);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Max. numb. of iterations: %i\n", MaxIter);CHKERRQ(ierr);
  if(Restart >0){ierr = PetscPrintf(PETSC_COMM_WORLD, "Restart\t\t\t: %i\n", Restart);CHKERRQ(ierr);}
  else{ierr = PetscPrintf(PETSC_COMM_WORLD, "Restart\t\t\t: No Restart\n");CHKERRQ(ierr);}

  //if jacobi then MatMult(A,X) = A*X for linear system (I-A)*X=B
  if(!strcmp(ksp_choice, "jacobi")){
    if(strcmp(LinearSystemType, "I-A"))
      Message::Error("Jacobi method implemented only for linear system of type \"I-A\"");
    LinearSystemType = (char *)"A";
  }

  ierr = PetscPrintf(PETSC_COMM_WORLD, "Number of Fields\t: %d\n", AllField.nb_field);CHKERRQ(ierr);

  if(Field::areNeighbor)
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Neighbors are specified\t: Fast exchange between process\n");CHKERRQ(ierr);

  for(int iField = 0; iField < AllField.nb_field; iField++)
    if(mpi_comm_size>1)
      if(AllField.GmshTag[iField] < 10)
	ierr = PetscPrintf(PETSC_COMM_WORLD, "Size of Field %d\t\t: %d (on CPU %d)\n", AllField.GmshTag[iField], AllField.size[iField], AllField.rank[iField]);
      else
	ierr = PetscPrintf(PETSC_COMM_WORLD, "Size of Field %d\t: %d (on CPU %d)\n", AllField.GmshTag[iField], AllField.size[iField], AllField.rank[iField]);
    else
      if(AllField.GmshTag[iField] < 10)
	ierr = PetscPrintf(PETSC_COMM_WORLD, "Size of Field %d\t\t: %d\n", AllField.GmshTag[iField], AllField.size[iField]);
      else
	ierr = PetscPrintf(PETSC_COMM_WORLD, "Size of Field %d\t: %d\n", AllField.GmshTag[iField], AllField.size[iField]);
  CHKERRQ(ierr);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Total system size\t: %d\n", AllField.n_elem); CHKERRQ(ierr);
#if !defined(PETSC_USE_COMPLEX)
  AllField.n_elem *= 2;
  MyField.n_elem *= 2;
  ierr = PetscPrintf(PETSC_COMM_WORLD, "PETSc REAL arithmetic -> system size is doubled: n=%d\n", AllField.n_elem); CHKERRQ(ierr);
#endif

  /*-------------------------
    Creating the vector/matrix
    -----------------------*/
  //Petsc Vec of unknown
  //    ierr = VecCreateSeq(PETSC_COMM_SELF, n, &X);CHKERRQ(ierr);
  ierr = VecCreate(ILSComm, &X);CHKERRQ(ierr);
  ierr = VecSetSizes(X, MyField.n_elem, AllField.n_elem);CHKERRQ(ierr);
  ierr = VecSetFromOptions(X);CHKERRQ(ierr);
  //  ierr = VecGetLocalSize(X,&n_loc);CHKERRQ(ierr);
  //Petsc Vec Right Hand Side
  ierr = VecDuplicate(X,&B);CHKERRQ(ierr);
  STD_vector_to_PETSc_Vec(B_std, B, &MyField);

  //context of the shell matrix
  ierr = CreateILSMat(&ctx); CHKERRQ(ierr);
  ierr = SetILSMat(&ctx, LinearSystemType, &MyField, &AllField, Resolution_P, Operation_P, DofData_P0, GeoData_P0); CHKERRQ(ierr);
  //Shell matrix containg the indices of the unknown field (on which the iterative solver works)
  ierr = MatCreateShell(ILSComm, MyField.n_elem, MyField.n_elem, AllField.n_elem, AllField.n_elem, ctx, &A); CHKERRQ(ierr);
  ierr = MatShellSetContext(A, ctx); CHKERRQ(ierr);
  ierr = MatShellSetOperation(A, MATOP_MULT, (void(*)(void))MatMultILSMat); CHKERRQ(ierr);
  ierr = PetscBarrier((PetscObject)PETSC_NULL); CHKERRQ(ierr);

  /*---------------------------------------------
    Creation of the iterative solver + solving
    ---------------------------------------------*/
  /*Jacobi Method (hand-made)*/
  if(!strcmp(ksp_choice,"print")){
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Launching Print mode (no resolution):\n");CHKERRQ(ierr);
    // Print ITERATION MATRIX
    Mat IterationMatrix;
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Print mode: computing Iteration Matrix...");CHKERRQ(ierr);
    ierr = BuildIterationMatrix(A, &IterationMatrix);CHKERRQ(ierr);
    ierr = PetscPrintf(PETSC_COMM_WORLD, "done\nPrint mode: printing Iteration Matrix...");CHKERRQ(ierr);
    ierr = PrintMatrix(IterationMatrix, "file_mat_itmat.m", "IterationMatrix");CHKERRQ(ierr);
    ierr = PetscPrintf(PETSC_COMM_WORLD, "done\nPrint mode: printing Right Hand Side...");CHKERRQ(ierr);
    ierr = PrintVec(B, "file_vec_rhs.m", "RightHandSide");CHKERRQ(ierr);
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
    ierr = KSPCreate(ILSComm,&ksp);CHKERRQ(ierr);
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
      nb_deflation /= AllField.nb_field; // number of effective vectors
      if(nb_deflation >0){
	ierr = PetscPrintf(PETSC_COMM_WORLD, "DGMRES for DDM: adding %d vectors to the deflation...\n", nb_deflation); CHKERRQ(ierr);
	ierr = DgmresDDM_Build(A, AllField.nb_field, nb_deflation, &M); CHKERRQ(ierr);
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
    if(Restart>0 && (!strcmp(ksp_choice,"gmres") || !strcmp(ksp_choice,"dgmres") || !strcmp(ksp_choice,"lgmres") ||!strcmp(ksp_choice,"fgmres") ))
      ierr = KSPGMRESSetRestart(ksp, Restart); CHKERRQ(ierr);
    //set ksp
    ierr = KSPSetFromOptions(ksp);CHKERRQ(ierr);
    //Solve
    ierr = KSPSolve(ksp,B,X);CHKERRQ(ierr);
    ierr = KSPView(ksp,PETSC_VIEWER_STDOUT_WORLD);CHKERRQ(ierr);
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    ierr = KSPDestroy(&ksp);CHKERRQ(ierr);
#else
    ierr = KSPDestroy(ksp);CHKERRQ(ierr);
#endif
  }
  /*----------------------
    computing solution
    ----------------------*/
  //we reuse B_std to avoid the creation of a new std::vector ...
  ierr = PETSc_Vec_to_STD_Vec(X, &MyField, &B_std); CHKERRQ(ierr);
  //update views
  for (int cpt_view = 0 ; cpt_view < MyField.nb_field; cpt_view++){
    PView *view = PView::getViewByTag(MyField.GmshTag[cpt_view]);
    view->getData()->fromVector(B_std[cpt_view]);
  }
  // Transfer PView
#if defined(TIMER)
  clock_t tbcast_start = clock();
#endif
  PViewBCast(MyField, AllField);
#if defined(TIMER)
  clock_t tbcast_end = clock();
  double t_bcast = difftime(tbcast_end, tbcast_start)/CLOCKS_PER_SEC;
  printf("Process %d: tbcast = %g\n", mpi_comm_rank, t_bcast);
#endif
  /*-------------
    cleaning
    -------------*/
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = VecDestroy(&X);CHKERRQ(ierr);
  ierr = VecDestroy(&B);CHKERRQ(ierr);
  ierr = MatDestroy(&A);CHKERRQ(ierr);
#else
  ierr = VecDestroy(X);CHKERRQ(ierr);
  ierr = VecDestroy(B);CHKERRQ(ierr);
  ierr = MatDestroy(A);CHKERRQ(ierr);
#endif
#if defined(TIMER)
  time_total = difftime(clock(), time_start)/CLOCKS_PER_SEC;
#endif
  //CPU Times
  double aver_it = 0, aver_com = 0;
  char filename[50];
  FILE *fid;
  sprintf(filename, "log_cpu_%d", mpi_comm_rank);
  fid = fopen(filename, "w");
  fprintf(fid, "Process rank %d\n", mpi_comm_rank);
  fprintf(fid, "it.  CPU \t CPU Treatment \t CPU communication\n");
  for (unsigned int i = 0; i < MyField.TimeBcast.size() ; i ++){
    fprintf(fid, "%d %g %g %g (%g%%)\n", i+1,  MyField.TimeIt[i], MyField.TimeTreatment[i], MyField.TimeBcast[i], MyField.TimeBcast[i]/MyField.TimeIt[i]*100);
    aver_com += MyField.TimeBcast[i]/MyField.TimeBcast.size();
    aver_it += MyField.TimeIt[i]/MyField.TimeIt.size();
  }
  fprintf(fid, "Average: %g %g\n", aver_it, aver_com);
  fprintf(fid, "Percent of communication in average: %g%%\n", aver_com/aver_it*100);
  fclose(fid);
  printf("Processus %d : ended in %g. \n", mpi_comm_rank, time_total);
  printf("Processus %d : Average iteration time %g with %g for communication (%g%%). \n", mpi_comm_rank, aver_it, aver_com, aver_com/aver_it*100);

  PetscBarrier((PetscObject)PETSC_NULL);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

//////////////////////////////
PetscErrorCode InitData(Field *MyField, Field *AllField, struct Operation *Operation_P, std::vector<std::vector<std::vector<double> > > *B_std)
{
  int mpi_comm_size = Message::GetCommSize();
  int mpi_comm_rank = Message::GetCommRank();
  std::vector<PetscInt> tab_nb_field_loc;
  std::vector<PetscInt> displs(mpi_comm_size);
  int counter = 0;

  //number of fields owned by me and the other tasks
  MyField->nb_field = List_Nbr(Operation_P->Case.IterativeLinearSolver.MyFieldTag);
  tab_nb_field_loc.resize(mpi_comm_size);
  MPI_Allgather(&MyField->nb_field, 1, MPI_INT, &tab_nb_field_loc[0], 1, MPI_INT, PETSC_COMM_WORLD);

  AllField->nb_field = 0;
  for (int irank = 0 ; irank < mpi_comm_size ; irank ++)
    AllField->nb_field += tab_nb_field_loc[irank];

  //displacement vector (for MPI_AllGatherV)
  displs[0] = 0;
  for (int irank = 1 ; irank < mpi_comm_size ; irank ++)
    displs[irank] = tab_nb_field_loc[irank-1] + displs[irank-1];

  // Tag of the fields owned by me ....
  MyField->GmshTag.resize(MyField->nb_field);
  MyField->ILSTag.resize(MyField->nb_field);
  MyField->rank.resize(MyField->nb_field);
  for(int iField = 0; iField < MyField->nb_field; iField++) {
    double d;
    List_Read(Operation_P->Case.IterativeLinearSolver.MyFieldTag, iField, &d);
    MyField->GmshTag[iField] = (int)d;
    MyField->rank[iField] = mpi_comm_rank;
    MyField->ILSTag[iField] = displs[mpi_comm_rank] + iField;
  }
  //...and by the other tasks
  AllField->GmshTag.resize(AllField->nb_field);
  AllField->rank.resize(AllField->nb_field);
  AllField->ILSTag.resize(AllField->nb_field);
  for (int iField = 0; iField < AllField->nb_field ; iField ++)
      AllField->ILSTag[iField] = iField;
  MPI_Allgatherv(&MyField->GmshTag[0], MyField->nb_field, MPI_INT, &AllField->GmshTag[0], &tab_nb_field_loc[0], &displs[0], MPI_INT, PETSC_COMM_WORLD);
  MPI_Allgatherv(&MyField->rank[0], MyField->nb_field, MPI_INT, &AllField->rank[0], &tab_nb_field_loc[0], &displs[0], MPI_INT, PETSC_COMM_WORLD);

  // Now the (local) fields in RAM must be read
  (*B_std).resize(MyField->nb_field);
  MyField->n_elem = 0;
  MyField->size.resize(MyField->nb_field);
  for(int iField = 0; iField < MyField->nb_field; iField ++) {
    (*B_std)[iField].resize(2);
    int d;
    PView *view = PView::getViewByTag(MyField->GmshTag[iField]);
    view->getData()->toVector((*B_std)[iField]);
    d = (*B_std)[iField][0].size();
    MyField->size[iField] = d;
    MyField->n_elem += d;
  }

  //Share information on the size of the local fields with other tasks
  MPI_Allreduce(&MyField->n_elem, &AllField->n_elem, 1, MPI_INT, MPI_SUM, PETSC_COMM_WORLD);
  AllField->size.resize(AllField->nb_field);
  MPI_Allgatherv(&MyField->size[0], MyField->nb_field, MPI_INT, &AllField->size[0], &tab_nb_field_loc[0], &displs[0], MPI_INT, PETSC_COMM_WORLD);

  //Compute the starting/ending index in the futur Petsc Vec containing all the Gmsh fields
  AllField->iStart.resize(AllField->nb_field);
  AllField->iEnd.resize(AllField->nb_field);
  MyField->iStart.resize(MyField->nb_field);
  MyField->iEnd.resize(MyField->nb_field);
  AllField->iStart[0] = 0;
  counter = 0;
  for(int j = 0; j < AllField->nb_field; j ++)
    {
      if(j > 0)
	AllField->iStart[j] = AllField->iEnd[j-1] + 1;
      AllField->iEnd[j] = AllField->iStart[j] + AllField->size[j] - 1;
      //Store in MyField if I am in charge of the Field
      if(AllField->rank[j] == mpi_comm_rank)
	{ MyField->iStart[counter] = AllField->iStart[j];
	  MyField->iEnd[counter] = AllField->iEnd[j];
	  counter++;
	}
    }

  //Who are my Neighbor for the Broadcast ?
  // At the time of writing, GetDP does not manage 2D-List. Thus, to act as-if, the list of neighbors is composed as follows:
  // NeighborFieldTag = {n_0, ... n_0 GmshTag ... , n_1,  ... n_1 GmshTag, ...}
  // example, if
  // MyFieldTag = {0, 3}
  // NeighborFieldTag = {2, 5, 1, 3, 2, 4, 6}
  // This mean that current process is in charge of Field with GmshTag 0 and 7.
  // Field of GmshTag 0 has 2 neighbors : fields of GmshTag 5 and 1
  // Field of GmshTag 7 has 3 neighbors : fields of GmshTag 2, 4 and 6
  //(if GetDP changes and accept list of list, then this trick should be useless and changed !)
  int nNeighbor_aux = 0; //, nNeighbor;
  nNeighbor_aux = List_Nbr(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag);
  //make every process agreed on whether there is neighbor or not
  if(mpi_comm_size < 2)
    Field::areNeighbor=false;
    //    AllField->comm.resize(0); // No Neighbor were provided -> PVIEWBcast on every process
  else{
    //suppose it's true
    Field::areNeighbor=true;
    //share info on neighbor
    int bool_neigh = (nNeighbor_aux > 0);
    std::vector<int> tab_bool_neigh(mpi_comm_size);
    MPI_Allgather(&bool_neigh, 1, MPI_INT, &tab_bool_neigh[0], 1, MPI_INT, MPI_COMM_WORLD);
    for(int irank = 0; irank < mpi_comm_size ; irank ++)
      if(tab_bool_neigh[irank] == 0 && AllField->GetGmshTagFromRank(irank) >= 0)
	  //if one process has no neighbord AND is charge of some fields (=is a worker)
	  Field::areNeighbor=false;
  }
  if(Field::areNeighbor){
    int cpt_neigh = 0; //counter in list IterativeLinearSolver.NeighborFieldTag
    //for every field, RankToSend contain the rank of the process in need of the field
    MyField->RankToSend.resize(MyField->nb_field);
    int cpt_send = 0;
    //over-sizing FieldToReceive, which contains the field that are needed by this mpi process
    MyField->FieldToReceive.resize(AllField->nb_field - MyField->nb_field);
    int cpt_recv = 0;
    //read through every neighbors
    for(int ifield = 0 ; ifield < MyField->nb_field ; ifield ++)
      {
	double d;
	List_Read(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag, cpt_neigh, &d);
	int n_neigh = (int)d;
	cpt_send = 0;
	//at maximum n_neigh process to send this view
	MyField->RankToSend[ifield].resize(n_neigh);
	for(int j = 0; j < n_neigh ; j ++)
	  {
	    //counter in list NeighborFieldTag
	    cpt_neigh ++;
	    List_Read(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag, cpt_neigh, &d);
	    int GmshTag_newneigh = (int)d;
	    //Check if not already stored (either because this process is in charge of the field or due to a doublon)
	    bool isStored = false;
	    for(int i = 0; i < MyField->nb_field ; i++)
	      {if(GmshTag_newneigh == MyField->GmshTag[i])
		  { isStored = true;
		    break; }
	      }
	    for(int i = 0; i < cpt_recv ; i++)
	      {if(GmshTag_newneigh == MyField->FieldToReceive[i])
		  { isStored = true;
		    break; }
	      }
	    // in case it's not already store
	    if(!isStored)
	      { MyField->FieldToReceive[cpt_recv] = GmshTag_newneigh;
		cpt_recv++; }
	    //check if stored in the table of Mpi processes which will receive this field
	    isStored = false;
	    int rank_new_neigh = AllField->rank[AllField->GetILSTagFromGmshTag(GmshTag_newneigh)];
	    MyField->RankToSend[ifield].resize(n_neigh);
	    //Maybe this process is in charge of this field..
	    if(rank_new_neigh == mpi_comm_rank)
	      isStored = true;
	    else{//...or maybe it is already stored ...
	      for(int i = 0; i < cpt_send ; i++)
		{
		  if(rank_new_neigh == MyField->RankToSend[ifield][i])
		    { isStored = true;
		      break; }
		}
	    }
	    if(!isStored) // not already stored
	      { MyField->RankToSend[ifield][cpt_send] = rank_new_neigh;
		cpt_send++; }
	  }
	//resize
	MyField->RankToSend[ifield].resize(cpt_send);
	cpt_neigh++;
      }
    //resize
    MyField->FieldToReceive.resize(cpt_recv);
    MyField->nb_field_to_receive = cpt_recv;

    //Check and exchange information on the size of the PView
    //Exchange information on the size of the PView (Field) with the neighbors
    MyField->myN.resize(MyField->nb_field);
    MyField->mySizeV.resize(MyField->nb_field);
    std::vector< MPI_Request > tab_request(0);
    for (int mfield = 0 ; mfield < MyField->nb_field ; mfield ++)
      {
	//Measure the size of the vectors of Field of local number mfield
	int GmshTag = MyField->GmshTag[mfield];
	PView *view = PView::getViewByTag(GmshTag);
	std::vector< std::vector<double>* > V(24);
	MyField->myN[mfield].resize(24);
	MyField->mySizeV[mfield].resize(24);
	view->getData()->getListPointers(&(MyField->myN[mfield][0]), &V[0]);
	for(int j = 0 ; j < 24 ; j++)
	  MyField->mySizeV[mfield][j] = (*(V[j])).size();
	//Exchange information about the sizes (mySizeV and myN)
	int n_proc_to_send = MyField->RankToSend[mfield].size();
	for(int j = 0 ; j < n_proc_to_send ; j++)
	  {
	    MPI_Request sendN, sendSizeV;
	    int tagN = 10*GmshTag + 1;
	    int tagSizeV = 10*GmshTag + 2;
	    //send vector myN and mysizeV
	    MPI_Isend(&(MyField->myN[mfield][0]), 24, MPI_INT, MyField->RankToSend[mfield][j], tagN, MPI_COMM_WORLD, &sendN);
	    MPI_Isend(&(MyField->mySizeV[mfield][0]), 24, MPI_INT, MyField->RankToSend[mfield][j], tagSizeV, MPI_COMM_WORLD, &sendSizeV);
	    tab_request.push_back(sendN);
	    tab_request.push_back(sendSizeV);
	  }
      }
    //Receive information from the other process
    MyField->theirN.resize(MyField->nb_field_to_receive);
    MyField->theirSizeV.resize(MyField->nb_field_to_receive);
    for (int ifield = 0 ; ifield < MyField->nb_field_to_receive ; ifield ++)
      {
	MPI_Request recvN, recvSizeV;
	//receive information on vectors N and sizeV from the other
	int fieldGmshTag = MyField->FieldToReceive[ifield];
	int fieldILSTag = AllField->GetILSTagFromGmshTag(fieldGmshTag);
	int rank_emiter = AllField->rank[fieldILSTag];
	int tagN = 10*fieldGmshTag + 1;
	int tagSizeV = 10*fieldGmshTag + 2;
	//resize before receiving
	MyField->theirN[ifield].resize(24);
	MyField->theirSizeV[ifield].resize(24);
	//Receive
	MPI_Irecv(&(MyField->theirN[ifield][0]), 24, MPI_INT, rank_emiter, tagN, MPI_COMM_WORLD, &recvN);
	MPI_Irecv(&(MyField->theirSizeV[ifield][0]), 24, MPI_INT, rank_emiter, tagSizeV, MPI_COMM_WORLD, &recvSizeV);
	tab_request.push_back(recvN);
	tab_request.push_back(recvSizeV);
      }

    //check if reception is ok
    std::vector< MPI_Status > tab_status;
    MPI_Waitall(tab_request.size(), &tab_request[0], &tab_status[0]);
    /*
    for (int irank = 0 ; irank < mpi_comm_size ; irank ++)
      {
	if (mpi_comm_rank == irank)
	  {
	    for(int ifield = 0 ; ifield < MyField->nb_field ; ifield++)
	      {
		printf("PROC %d, Field numb. %d., Myfield = ", mpi_comm_rank, MyField->GmshTag[ifield]);
		for (int j = 0 ; j < 24 ; j++)
		  printf("%d, ", MyField->myN[ifield][j]);
		printf("\nPROC %d, Field numb. %d., MySizeV = ", mpi_comm_rank, MyField->GmshTag[ifield]);
		for (int j = 0 ; j < 24 ; j++)
		  printf("%d, ", MyField->mySizeV[ifield][j]);
		printf("\n");
	      }
	    printf("-------------------------------\n");
	    for(int ifield = 0 ; ifield < MyField->nb_field_to_receive ; ifield ++)
	      {
		printf("PROC %d, Field numb. %d., THEIRfield = ", mpi_comm_rank, MyField->FieldToReceive[ifield]);
		for (int j = 0 ; j < 24 ; j++)
		  printf("%d, ", MyField->theirN[ifield][j]);
		printf("\nPROC %d, Field numb. %d., THEIRSizeV = ", mpi_comm_rank, MyField->FieldToReceive[ifield]);
		for (int j = 0 ; j < 24 ; j++)
		  printf("%d, ", MyField->theirSizeV[ifield][j]);
		printf("\n");
	      }
	    printf("====================================\n");
	    MPI_Barrier(MPI_COMM_WORLD);
	    sleep(1);
	  }
      }
*/


 /*    std::vector<int> tab_nNeighbor(mpi_comm_size);
    std::vector<int> myNeighbor;
    AllField->comm.resize(mpi_comm_size);
    myNeighbor.resize(nNeighbor_aux+1);
    myNeighbor[0] = mpi_comm_rank;
    nNeighbor = 1; // At least, one process in tab_MyNeighbor (self)
    for(int j = 0 ; j < nNeighbor_aux ; j++)
      {
	double d;
	int neighbor_rank;
	List_Read(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag, j, &d);
	//rank of the neighbor process (!= field (warning!))
	neighbor_rank = AllField->rank[AllField->GetILSTagFromGmshTag((int)d)];
	//is it already stored ?
	bool isNotAlreadyStored = true;
	for (int i = 0; i < nNeighbor ; i ++)
	  {
	    if(myNeighbor[i] == neighbor_rank)
	      { isNotAlreadyStored = false;
		break;}
	  }
	if(isNotAlreadyStored)
	  { myNeighbor[nNeighbor] = neighbor_rank;
	    nNeighbor ++;}// recompute the size (duplicate int is possible)
      }
    myNeighbor.resize(nNeighbor); //eliminate duplicate
    //Exchange the number of neighbors per process
    MPI_Allgather(&nNeighbor, 1, MPI_INT, &tab_nNeighbor[0], 1, MPI_INT, PETSC_COMM_WORLD);
    //Exchange the mpi_rank of the neighbor
    MPI_Group world_group;
    MPI_Comm_group(MPI_COMM_WORLD, &world_group);

    for(int irank = 0 ; irank < mpi_comm_size ; irank ++)
      {
	int nb_neigh = tab_nNeighbor[irank];
	std::vector<int> irankNeighbor;
	if(mpi_comm_rank != irank)
	  irankNeighbor.resize(nb_neigh);
	else
	  irankNeighbor = myNeighbor;
	//bcast
	MPI_Bcast(&irankNeighbor[0], nb_neigh, MPI_INT, irank, MPI_COMM_WORLD);
	//creation of the MPI_Communicator used when Processus irank is the root of a Broadcast
	MPI_Group newgroup;
	MPI_Group_incl(world_group, nb_neigh, &irankNeighbor[0], &newgroup);
	MPI_Comm new_comm;
	MPI_Comm_create(MPI_COMM_WORLD, newgroup, &new_comm);
	AllField->comm[irank] = new_comm;
	MPI_Group_free(&newgroup);
      }
    MPI_Group_free(&world_group);*/
  }

  PetscFunctionReturn(0);
}

/*-----PViewBCast--------
BCast of all PView
-----------------------*/
PetscErrorCode PViewBCast(Field MyField, Field AllField)
{  //TRANSFER PVIEW
  if(!(Field::areNeighbor))
    {
      for (int iField = 0 ; iField < AllField.nb_field ; iField ++)
	{
	  int GmshTag = AllField.GmshTag[iField];
	  int fieldRank = AllField.rank[iField];
	  std::vector< std::vector<double>* > V(24);
	  std::vector<int> sizeV(24);
	  std::vector<int> N(24);
	  int masterRank = fieldRank;
	  MPI_Comm fieldcomm = MPI_COMM_WORLD;
	  int mpi_fieldcomm_rank = Message::GetCommRank();
	  if(mpi_fieldcomm_rank == fieldRank)
	    {
	      PView *view = PView::getViewByTag(GmshTag);
	      view->getData()->getListPointers(&N[0], &V[0]);
	      for(int j = 0 ; j < 24 ; j++)
		sizeV[j] = (*(V[j])).size();
	    }
	  //Transfer PView
	  MPI_Bcast(&N[0], 24, MPI_INT, masterRank, fieldcomm);
	  MPI_Bcast(&sizeV[0], 24, MPI_INT, masterRank, fieldcomm);

	  for(int j = 0; j < 24 ; j ++)
	    {
	      if(mpi_fieldcomm_rank != masterRank)
		{
		  V[j] = new std::vector<double>;
		  (*(V[j])).resize(sizeV[j]);
		}
	      if(sizeV[j] > 0) //avoid useless BCast
		MPI_Bcast(&(*(V[j]))[0], sizeV[j], MPI_DOUBLE, masterRank, fieldcomm);
	    }
	  //All other tasks of the communicator create/update the views
	  if(mpi_fieldcomm_rank != masterRank)
	    {
	      PView *view = new PView(GmshTag);
	      view->getData()->importLists(&N[0], &V[0]);
	      for(int j = 0 ; j < 24 ; j++)
		delete V[j] ;
	    }
	}

    }
  //With a specification on the neighbors
  //Asynchrone Send/Recv (only with the neighbors)
  else{
    std::vector< MPI_Request > tab_request(0);
    //send my PView to my neighbors
    for (int ifield = 0 ; ifield < MyField.nb_field ; ifield ++)
      {
	int GmshTag = MyField.GmshTag[ifield];
	PView *view = PView::getViewByTag(GmshTag);
	std::vector< std::vector<double>* > V_send(24);
	std::vector<int> N(24);
	view->getData()->getListPointers(&N[0], &V_send[0]);
	for (int j = 0 ; j < 24 ; j ++)
	  {
	    int tag = 100*GmshTag + j;
	    int n_data = MyField.mySizeV[ifield][j];
	    if(n_data > 0)
	      {
		//Loop on the receiver
		for (unsigned int ineigh = 0 ; ineigh < MyField.RankToSend[ifield].size() ; ineigh ++)
		  {
		    MPI_Request sendV;
		    int receiver = MyField.RankToSend[ifield][ineigh];
		    MPI_Isend(&(*(V_send[j]))[0], n_data, MPI_DOUBLE, receiver, tag, MPI_COMM_WORLD, &sendV);
		    tab_request.push_back(sendV);
		  }
	      }
	  }
      }
    //receive all the PView I need
    std::vector< std::vector< std::vector<double>* > > V_recv(MyField.nb_field_to_receive);
    for (int ifield = 0 ; ifield < MyField.nb_field_to_receive ; ifield ++)
      {
	int GmshTag = MyField.FieldToReceive[ifield];
	int sender = AllField.GetRankFromGmshTag(GmshTag);
	/*	PView *view = new PView(GmshTag);
		std::vector< std::vector<double>* > V_recv(24);
		std::vector< std::vector<double>* > VV(24); //used to initialize PView*/
	V_recv[ifield].resize(24);
	std::vector<int> N(24);
	//allocate memory
	for (int j = 0 ; j < 24 ; j ++)
	  {
	    /*	    VV[j] = new std::vector<double>;
		    (*(VV[j])).resize(MyField.theirSizeV[ifield][j]);*/
	    V_recv[ifield][j] = new std::vector<double>;
	    (*(V_recv[ifield][j])).resize(MyField.theirSizeV[ifield][j]);
	  }
	/* //Allocate memory in PView (could be better ... ?)
	   view->getData()->importLists(&MyField.theirN[ifield][0], &VV[0]);
	for (int j = 0 ; j < 24 ; j ++)
	  delete VV[j];
	view->getData()->getListPointers(&N[0], &V_recv[0]);*/
	for (int j = 0 ; j < 24 ; j ++)
	  {
	    int n_data = MyField.theirSizeV[ifield][j];
	    if(n_data > 0)
	      {
		MPI_Request recvV;
		int tag = 100*GmshTag + j;
		//		MPI_Irecv(&(*(V_recv[j]))[0], n_data, MPI_DOUBLE, sender, tag, MPI_COMM_WORLD, &recvV);
		MPI_Irecv(&(*(V_recv[ifield][j]))[0], n_data, MPI_DOUBLE, sender, tag, MPI_COMM_WORLD, &recvV);
		tab_request.push_back(recvV);
	      }
	  }
      }
    //check if reception is ok
    std::vector< MPI_Status > tab_status(tab_request.size());
    MPI_Waitall(tab_request.size(), &tab_request[0], &tab_status[0]);
    for (int ifield = 0 ; ifield < MyField.nb_field_to_receive ; ifield ++)
      {
	int GmshTag = MyField.FieldToReceive[ifield];
	PView *view = new PView(GmshTag);
	view->getData()->importLists(&MyField.theirN[ifield][0], &V_recv[ifield][0]);
      }

  }
  /*  for (int iField = 0 ; iField < AllField.nb_field ; iField ++)
    {
      PetscBarrier((PetscObject)PETSC_NULL);
      int GmshTag = AllField.GmshTag[iField];
      int fieldRank = AllField.rank[iField];
      MPI_Comm fieldcomm; //communicator of MPI_Bcast
      int masterRank; // rank of the process root for MPI_BCast
      int mpi_fieldcomm_rank; //rank in the communicateur fieldcomm
      if(!(AllField->areNeighborSpecified()))
	{
	  masterRank = fieldRank;
	  fieldcomm = MPI_COMM_WORLD;
	  mpi_fieldcomm_rank = Message::GetCommRank();
	}else{ //select right communicator and set root proc for BCast to proc 0 (locally)
	  masterRank = 0;
	  fieldcomm = AllField.comm[fieldRank];
	  mpi_fieldcomm_rank = -1;
	  MPI_Comm_rank(fieldcomm, &mpi_fieldcomm_rank);
	  //mpi_fieldcomm_rank stays equal to -1 if current process is not in communicator fieldcomm
	}
      if(mpi_fieldcomm_rank > -1) //I belong to fieldcomm
	{
	  std::vector< std::vector<double>* > V(24);
	  std::vector<int> sizeV;
	  std::vector<int> N(24);
	  sizeV.resize(24);
	  if(mpi_fieldcomm_rank == masterRank)
	    {
	      PView *view = PView::getViewByTag(GmshTag);
	      view->getData()->getListPointers(&N[0], &V[0]);
	      for(int j = 0 ; j < 24 ; j++)
		sizeV[j] = (*(V[j])).size();
	    }
	  //Transfer PView
	  MPI_Bcast(&N[0], 24, MPI_INT, masterRank, fieldcomm);
	  MPI_Bcast(&sizeV[0], 24, MPI_INT, masterRank, fieldcomm);

	  for(int j = 0; j < 24 ; j ++)
	    {
	      if(mpi_fieldcomm_rank != masterRank)
		{
		  V[j] = new std::vector<double>;
		  (*(V[j])).resize(sizeV[j]);
		}
	      if(sizeV[j] > 0) //avoid useless BCast
		MPI_Bcast(&(*(V[j]))[0], sizeV[j], MPI_DOUBLE, masterRank, fieldcomm);
	    }
	  //All other tasks of the communicator create/update the views
	  if(mpi_fieldcomm_rank != masterRank)
	    {
	      PView *view = new PView(GmshTag);
	      view->getData()->importLists(&N[0], &V[0]);
	      for(int j = 0 ; j < 24 ; j++)
		delete V[j] ;
	    }
	}
    }*/
  PetscFunctionReturn(0);
}

/*-------- MatMultILSMat ------
  User Matrix-vector product
  --------------------------------*/
PetscErrorCode MatMultILSMat(Mat A, Vec X, Vec Y)
{
  PetscErrorCode ierr;
  std::vector<std::vector<std::vector<double> > > std_vec;
  Field MyField, AllField;
  ILSMat *ctx;
  char *LinearSystemType;

  //time
#if defined(TIMER)
  clock_t tBcast_start, tBcast_end;
  clock_t tTreatment_start, tTreatment_end;
  clock_t t_start = clock(), t_end;
#endif
  ierr = MatShellGetContext(A, (void**)&ctx);CHKERRQ(ierr);
  LinearSystemType = ctx->LinearSystemType;

  //convert X to a std vector
  ierr = PETSc_Vec_to_STD_Vec(X, ctx->MyField, &std_vec);CHKERRQ(ierr);

  // Update PViews
  for (int cpt_view = 0; cpt_view < ctx->MyField->nb_field; cpt_view++){
    PView *view = PView::getViewByTag(ctx->MyField->GmshTag[cpt_view]);
    view->getData()->fromVector(std_vec[cpt_view]);
  }

  //PVIEW BCAST !
#if defined(TIMER)
  tBcast_start = clock();
#endif
  PViewBCast(*(ctx->MyField), *(ctx->AllField));
#if defined(TIMER)
  tBcast_end = clock();
#endif
  //Getdp resolution (contained in the matrix context)
  //Barrier to ensure that every process have the good data in RAM
  //  ierr = PetscBarrier((PetscObject)PETSC_NULL);CHKERRQ(ierr);
#if defined(TIMER)
  tTreatment_start = clock();
#endif
  Treatment_Operation(ctx->Resolution_P,
                      ctx->Operation_P->Case.IterativeLinearSolver.Operations_Ax,
                      ctx->DofData_P0,
                      ctx->GeoData_P0,
                      NULL, NULL);
#if defined(TIMER)
  tTreatment_end = clock();
#endif
  //Extract the (std) vector from the (new) .pos files
  //This assumes that every process reads every .pos files
  for(int cpt_view = 0; cpt_view < ctx->MyField->nb_field; cpt_view++) {
    PView *view = PView::getViewByTag(ctx->MyField->GmshTag[cpt_view]);
    view->getData()->toVector(std_vec[cpt_view]);
  }

  //Convert the obtained vector to a Petsc Vec
  ierr = STD_vector_to_PETSc_Vec(std_vec, Y, ctx->MyField);CHKERRQ(ierr);

  //Set Y = X - Y
  if(!strcmp(LinearSystemType,"I-A")){
    ierr = VecAYPX(Y, -1.,X); CHKERRQ(ierr);
  }else if(!strcmp(LinearSystemType,"I+A")){
    ierr = VecAYPX(Y, 1.,X); CHKERRQ(ierr);
  }

  //time computation
#if defined(TIMER)
  t_end = clock();
  double t_MatMult, t_Bcast, t_Treatment;
  t_MatMult = difftime(t_end, t_start)/CLOCKS_PER_SEC;
  t_Bcast = difftime(tBcast_end, tBcast_start)/CLOCKS_PER_SEC;
  t_Treatment = difftime(tTreatment_end, tTreatment_start)/CLOCKS_PER_SEC;
  ctx->MyField->TimeTreatment.push_back(t_Treatment);
  ctx->MyField->TimeBcast.push_back(t_Bcast);
  ctx->MyField->TimeIt.push_back(t_MatMult);
  printf("Processus %d ended iteration in %g seconds with %g for communication\n", Message::GetCommRank(), t_MatMult, t_Bcast);
#endif
  ierr = PetscBarrier((PetscObject)PETSC_NULL);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

/* ----- STD_vector_to_PETSc_Vec ----
   Copy a STD Vector (std_vec) to a PETSc VEc (petsc_vec)
   In fact, copy the local part only of the PETSc Vec
*/
PetscErrorCode STD_vector_to_PETSc_Vec(std::vector<std::vector<std::vector<double> > > std_vec,
                                       Vec petsc_vec,
				       Field *Local)
{
  PetscInt        cpt = 0, nb_view = Local->nb_field;
  PetscErrorCode  ierr;

  for (int cpt_view = 0; cpt_view < nb_view; cpt_view++){
    std::vector<PetscScalar> val;
    int nb_element = Local->size[cpt_view];
    std::vector<PetscInt> ix(nb_element);
    for (int i = 0 ; i < nb_element ; i++){
      ix[i] = Local->iStart[cpt_view] + i;
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
  }
  ierr = VecAssemblyBegin(petsc_vec);CHKERRQ(ierr);
  ierr = VecAssemblyEnd(petsc_vec);CHKERRQ(ierr);
  PetscBarrier((PetscObject)petsc_vec);
  PetscFunctionReturn(0);
}

/* ----- PETSc_Vec_to_STD_Vec ----
   Copy Petsc Vec to a std::vector
   Send ONLY THE LOCAL Part of the PETSC VEC !!
*/
PetscErrorCode PETSc_Vec_to_STD_Vec(Vec petsc_vec,
                                    Field *Local,
                                    std::vector<std::vector<std::vector<double> > > *std_vec)
{
  PetscErrorCode ierr;
  PetscScalar    val;
  int nb_view = Local->nb_field;

  /*  // SCATTER/GATHER IF NOT SEQUENTIAL (each process needs the vector)
  Vec petsc_vecSEQ;
  const VecType type;
  ierr = VecGetType(petsc_vec, &type);CHKERRQ(ierr);

  if(strcmp(type, "seq")){//parallel vector -> must be sequentialized
    VecScatter ctx_scat;
    ierr = VecScatterCreateToAll(petsc_vec, &ctx_scat, &petsc_vecSEQ);CHKERRQ(ierr);
    ierr = VecScatterBegin(ctx_scat, petsc_vec, petsc_vecSEQ, INSERT_VALUES, SCATTER_FORWARD);CHKERRQ(ierr);
    ierr = VecScatterEnd(ctx_scat, petsc_vec, petsc_vecSEQ, INSERT_VALUES, SCATTER_FORWARD);CHKERRQ(ierr);
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    ierr = VecScatterDestroy(&ctx_scat);CHKERRQ(ierr);
#else
    ierr = VecScatterDestroy(ctx_scat);CHKERRQ(ierr);
#endif
}*/

  //initializing std_vec
  (*std_vec).resize(Local->nb_field);
  for (int cpt_view = 0 ; cpt_view < nb_view ; cpt_view++){
    int nb_elem = Local->size[cpt_view];
    (*std_vec)[cpt_view].resize(2);
    (*std_vec)[cpt_view][0].resize(nb_elem);
    (*std_vec)[cpt_view][1].resize(nb_elem);
  }

  for (int cpt_view = 0 ; cpt_view < nb_view ; cpt_view++){
    int nb_element = Local->size[cpt_view];
    int iStart = Local->iStart[cpt_view];
    for (int j = 0 ; j < nb_element ; j++) {
      int cpt = iStart + j;
#if defined(PETSC_USE_COMPLEX)
      /*      if(strcmp(type, "seq"))
        ierr = VecGetValues(petsc_vecSEQ, 1, &cpt, &val);
	else*/
      ierr = VecGetValues(petsc_vec, 1, &cpt, &val); CHKERRQ(ierr);
      (*std_vec)[cpt_view][0][j] = (double)PetscRealPart(val);
      (*std_vec)[cpt_view][1][j] = (double)PetscImaginaryPart(val);
#else
      /*      if(strcmp(type, "seq"))
        ierr = VecGetValues(petsc_vecSEQ, 1, &cpt, &val);
	else*/
      ierr = VecGetValues(petsc_vec, 1, &cpt, &val); CHKERRQ(ierr);
      (*std_vec)[cpt_view][0][j] = (double)(val);
      /*      if(strcmp(type, "seq"))
        ierr = VecGetValues(petsc_vecSEQ, 1, &cpt, &val);CHKERRQ(ierr);
	else*/
      ierr = VecGetValues(petsc_vec, 1, &cpt, &val);CHKERRQ(ierr);
      (*std_vec)[cpt_view][1][j] = (double)(val);
#endif
    }
  }
  /*  if(strcmp(type, "seq")){
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    ierr = VecDestroy(&petsc_vecSEQ);CHKERRQ(ierr);
#else
    ierr = VecDestroy(petsc_vecSEQ);CHKERRQ(ierr);
#endif
}*/
  PetscFunctionReturn(0);
}

/* ----- CreateILSMat ----
   Initialize the MatShell Matrix
   Preallocate the memory
*/
PetscErrorCode CreateILSMat(ILSMat **shell)
{
  ILSMat *newctx;
  std::vector<PetscInt> vec_indice, vec_size;
  PetscErrorCode ierr;

  ierr = PetscNew(ILSMat,&newctx);CHKERRQ(ierr);
  newctx->MyField = NULL;
  newctx->AllField = NULL;
  newctx->LinearSystemType = NULL;
  newctx->Resolution_P = NULL;
  newctx->Operation_P = NULL;
  newctx->DofData_P0 = NULL;
  newctx->GeoData_P0 = NULL;
  *shell = newctx;
  PetscFunctionReturn(0);
}

/* ----- SetILSMat ----
 Set data to the shell matrix contex
 */
PetscErrorCode SetILSMat(ILSMat **shell,
			 char *LinearSystemType,
			 Field *MyField,
			 Field *AllField,
			 struct Resolution *Resolution_P,
			 struct Operation *Operation_P,
			 struct DofData *DofData_P0,
			 struct GeoData *GeoData_P0)
{
//    PetscErrorCode	ierr;
  (*shell)->LinearSystemType = LinearSystemType;
  (*shell)->MyField = MyField;
  (*shell)->AllField = AllField;
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
    ierr = MatMultILSMat(A, X_old, X);
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

/*Reads and reassembles vectors from GMSH View/Field*/
PetscErrorCode ReadFields(int nb_field, int nth_vect, struct Operation *Operation_P,
                          std::vector<std::vector<std::vector<double> > > *vector_field,
                          std::vector<PetscInt> *tagFields_loc,
                          std::vector<PetscInt> *sizes_field,
                          int *n)
{
  int loc_size;
  (*vector_field).resize(nb_field);
  (*sizes_field).resize(nb_field);
  (*tagFields_loc).resize(nb_field);
  *n = 0;
  for(int cpt_view = 0; cpt_view < nb_field; cpt_view++) {
    double d;
    if(nth_vect == 0){ //we are creating the vector from the first argument of IterativeLinearSolver
      List_Read(Operation_P->Case.IterativeLinearSolver.MyFieldTag, cpt_view, &d);
    }
    else{ //Here is the (nth_vect+1) vector from the last argument of IterativeLinearSolver (deflation !)
      int shift = (nth_vect-1)*nb_field; // one vector contains nb_field views
      List_Read(Operation_P->Case.IterativeLinearSolver.DeflationIndices, shift + cpt_view, &d);
    }
    (*tagFields_loc)[cpt_view] = (int)d;
    //    PView *view = PView::list[(int)d];
    PView *view = PView::getViewByTag((int)d);
    view->getData()->toVector((*vector_field)[cpt_view]);
    loc_size = (int)(*vector_field)[cpt_view][0].size();
    (*sizes_field)[cpt_view] = loc_size; // how many components ?
    *n += loc_size;
  }
  PetscFunctionReturn(0);
}

PetscErrorCode DgmresDDM_Build(Mat A, int nb_field, int nb_deflation, Mat *M)
{
  //Right Preconditionner for "Deflated GMRES" with pre-given vectors. This is used for, e.g., DDM
  //We follow the paper Burrage, Kevin and Erhel, Jocelyne
  //On the performance of various adaptive preconditioned {GMRES} strategies
  //Numer. Linear Algebra Appl., 1998
  PetscErrorCode ierr;
  PetscInt m, n;
  ILSMat *ctx;

  ierr = MatShellGetContext(A, (void**)&ctx);CHKERRQ(ierr);

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
  Mat Id_defUt; //Id_def*Ut
  Mat UId_defUt; //U*Id_defUt

//  ierr = MatCreate(PETSC_COMM_WORLD, &U);CHKERRQ(ierr);
//  ierr = MatSetSizes(U, PETSC_DECIDE, PETSC_DECIDE, n, nb_deflation);CHKERRQ(ierr);
//  ierr = MatSetFromOptions(U);CHKERRQ(ierr);
  ierr = MatCreateSeqDense(PETSC_COMM_SELF, n, nb_deflation, PETSC_NULL, &U); CHKERRQ(ierr);
  //next two variables are useless but necessary to run ReadFields
  std::vector<PetscInt> indices_deflation, sizes_deflation;
  for(int cpt_deflation = 0; cpt_deflation < nb_deflation; cpt_deflation ++){
    std::vector<std::vector<std::vector<double> > > new_field;
    ierr = ReadFields(nb_field, cpt_deflation+1, (ctx->Operation_P), &new_field, &indices_deflation, &sizes_deflation, &n_aux);CHKERRQ(ierr);
    //create a Vec from the std::vec
    ierr = VecCreateSeq(PETSC_COMM_SELF, n, &DeflationVec[cpt_deflation]);CHKERRQ(ierr);
    //    ierr = VecCreate(PETSC_COMM_WORLD, &DeflationVec[cpt_deflation]);CHKERRQ(ierr);
	 // ierr = VecSetSizes(DeflationVec[cpt_deflation], PETSC_DECIDE, n);CHKERRQ(ierr);
	 // ierr = VecSetFromOptions(DeflationVec[cpt_deflation]);CHKERRQ(ierr);
    // COMMENTED BELOW BUT TO BE CHANGED !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    ierr = STD_vector_to_PETSc_Vec(new_field, DeflationVec[cpt_deflation]);CHKERRQ(ierr);
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
//  ierr = MatCreate(PETSC_COMM_WORLD, &AU);CHKERRQ(ierr);
//  ierr = MatSetSizes(AU, PETSC_DECIDE, PETSC_DECIDE, n, nb_deflation);CHKERRQ(ierr);
//  ierr = MatSetFromOptions(AU);
  for (int cpt_deflation =0; cpt_deflation <nb_deflation; cpt_deflation ++){
    Vec Y;
    std::vector<PetscScalar> vec_temp(n);
    ierr = VecDuplicate(DeflationVec[0],&Y);CHKERRQ(ierr);
    MatMultILSMat(A, DeflationVec[cpt_deflation], Y);
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
  ierr = MatCreateSeqDense(PETSC_COMM_SELF, n, n, PETSC_NULL, M); CHKERRQ(ierr);
//  ierr = MatCreate(PETSC_COMM_WORLD, &Id_n);CHKERRQ(ierr);
//  ierr = MatSetSizes(Id_n, PETSC_DECIDE, PETSC_DECIDE, n, n);CHKERRQ(ierr);
  for(int cpt =0; cpt <n; cpt++)
    ierr = MatSetValues((*M), 1, &cpt, 1, &cpt, &one, INSERT_VALUES);CHKERRQ(ierr);
  ierr = MatAssemblyBegin((*M), MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd((*M), MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  //Id_def <- inv(UtAU) - Id
  ierr = MatAYPX(Id_def, -1., invUtAU, SAME_NONZERO_PATTERN);CHKERRQ(ierr);
  //Id_def*Ut
  ierr = MatMatMult(Id_def, Ut, MAT_INITIAL_MATRIX, PETSC_DEFAULT, &Id_defUt);CHKERRQ(ierr);
  //U*Id_defUt
  ierr = MatMatMult(U, Id_defUt, MAT_INITIAL_MATRIX, PETSC_DEFAULT, &UId_defUt);CHKERRQ(ierr);
  // Id_n (=M) + UId_defUt
  ierr = MatAXPY((*M), 1., UId_defUt, SAME_NONZERO_PATTERN);CHKERRQ(ierr);
  //FREE MATRICES
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = MatDestroy(&U);CHKERRQ(ierr);
  ierr = MatDestroy(&Ut);CHKERRQ(ierr);
  ierr = MatDestroy(&AU);CHKERRQ(ierr);
  ierr = MatDestroy(&UtAU);CHKERRQ(ierr);
  ierr = MatDestroy(&invUtAU);CHKERRQ(ierr);
  ierr = MatDestroy(&Id_def);CHKERRQ(ierr);
  ierr = MatDestroy(&UId_defUt);CHKERRQ(ierr);
#else
  ierr = MatDestroy(U);CHKERRQ(ierr);
  ierr = MatDestroy(Ut);CHKERRQ(ierr);
  ierr = MatDestroy(AU);CHKERRQ(ierr);
  ierr = MatDestroy(UtAU);CHKERRQ(ierr);
  ierr = MatDestroy(invUtAU);CHKERRQ(ierr);
  ierr = MatDestroy(Id_def);CHKERRQ(ierr);
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
  PetscInt n_proc, m,n, m_loc, n_loc;
  PetscInt m_start, m_end, vec_m_start, vec_m_end;

  ierr = MPI_Comm_size(PETSC_COMM_WORLD, &n_proc); CHKERRQ(ierr);
  ierr = MatGetSize(A, &m, &n);
  ierr = MatCreate(PETSC_COMM_WORLD, IterationMatrix);CHKERRQ(ierr);
  ierr = MatSetSizes((*IterationMatrix), PETSC_DECIDE, PETSC_DECIDE, m, n);CHKERRQ(ierr);
  ierr = MatSetType((*IterationMatrix), MATMPIAIJ);CHKERRQ(ierr);
  ierr = MatSetFromOptions((*IterationMatrix));CHKERRQ(ierr);
//  ierr = MatMPIAIJSetPreallocation((*IterationMatrix), n/n_proc+1, PETSC_NULL, n-n/n_proc+1, PETSC_NULL);CHKERRQ(ierr);
  ierr = MatSetUp((*IterationMatrix));
  ierr = MatGetOwnershipRange((*IterationMatrix), &m_start, &m_end); CHKERRQ(ierr);
  ierr = MatGetLocalSize((*IterationMatrix), &m_loc, &n_loc); CHKERRQ(ierr);
  ierr = MatMPIAIJSetPreallocation((*IterationMatrix), m_loc, PETSC_NULL, n-m_loc, PETSC_NULL);CHKERRQ(ierr);
  std::vector<PetscInt> ix(m);
  for(PetscInt i = 0; i<m; i++)
    ix[i] = m_start + i;

  Vec ej, Aej;
  ierr = VecCreateSeq(PETSC_COMM_SELF, m, &ej);CHKERRQ(ierr);
/*  ierr = VecCreate(PETSC_COMM_WORLD, &ej);CHKERRQ(ierr);
  ierr = VecSetSizes(ej, m_loc, m);CHKERRQ(ierr);
  ierr = VecSetFromOptions(ej);CHKERRQ(ierr);*/
  ierr = VecDuplicate(ej, &Aej);CHKERRQ(ierr);
  ierr = VecGetOwnershipRange(ej, &vec_m_start, &vec_m_end);CHKERRQ(ierr);

  for(int cpt=0;cpt<n;cpt++){
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Column number %d over %d\n", cpt, n-1);
    std::vector<PetscScalar> vec_temp(n);
    VecSet(ej, zero);CHKERRQ(ierr);
    if(cpt >= vec_m_start && cpt<vec_m_end)
      ierr = VecSetValues(ej, 1., &cpt, &one, INSERT_VALUES) ;CHKERRQ(ierr);
    ierr = VecAssemblyBegin(ej);CHKERRQ(ierr);
    ierr = VecAssemblyEnd(ej);CHKERRQ(ierr);
    ierr = MatMultILSMat(A, ej, Aej);CHKERRQ(ierr);
    //stocking it in a Matrix
    ierr = VecGetValues(Aej, m_loc, &ix[0], &vec_temp[0]);CHKERRQ(ierr);
    ierr = MatSetValues((*IterationMatrix), m_loc, &ix[0], 1, &cpt, &vec_temp[0], INSERT_VALUES);CHKERRQ(ierr);
    if(cpt%100 == 0){ // flushing
      ierr = MatAssemblyBegin((*IterationMatrix), MAT_FLUSH_ASSEMBLY);CHKERRQ(ierr);
      ierr = MatAssemblyEnd((*IterationMatrix), MAT_FLUSH_ASSEMBLY);CHKERRQ(ierr);}
  }
  ierr = MatAssemblyBegin((*IterationMatrix), MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  ierr = MatAssemblyEnd((*IterationMatrix), MAT_FINAL_ASSEMBLY);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

//Print Iteration Matrix into file_IterationMatrix.m (matlab reading)
PetscErrorCode PrintMatrix(Mat A, const char* filename, const char* varname)
{
//This function is copy/paste of function LinAlg_PrintMatrix function
// located in Legacy/LinAlg_PETSC.cpp
  PetscErrorCode ierr;
  std::string tmp(filename);
  PetscInt m,n, m_max = 600;

  ierr = PetscObjectSetName((PetscObject)A, varname);
  // ASCII (if the matrix is not too large)
  ierr = MatGetSize(A, &m, &n);
  if(m < m_max){
    PetscViewer viewer;
    ierr = PetscViewerASCIIOpen(PETSC_COMM_WORLD, filename, &viewer);CHKERRQ(ierr);
    ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB);CHKERRQ(ierr);
    ierr = MatView(A, viewer);CHKERRQ(ierr);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    ierr = PetscViewerDestroy(&viewer);CHKERRQ(ierr);
#else
      ierr = PetscViewerDestroy(viewer);CHKERRQ(ierr);
#endif
  }
  else{
    ierr = PetscPrintf(PETSC_COMM_WORLD, "Warning: Matrix is too large, no ASCII Output (m=%d>%d)\n", m,m_max);
    CHKERRQ(ierr);
  }
  //BINARY
  //Add the petscfolder/bin/matlab path to your matlab paths and
  //type the following command in matlab, for real arithmetic :
  // A = PetscBinaryRead(filename) ;
  // and for complex arithmetic :
  // A = PetscBinaryRead(filename , 'complex', true) ;
  PetscViewer viewer_bin;
  ierr = PetscViewerBinaryOpen(PETSC_COMM_WORLD, (tmp + ".bin").c_str(), FILE_MODE_WRITE, &viewer_bin);CHKERRQ(ierr);
  ierr = PetscViewerSetFormat(viewer_bin, PETSC_VIEWER_DEFAULT);CHKERRQ(ierr);
  ierr = MatView(A, viewer_bin);CHKERRQ(ierr);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = PetscViewerDestroy(&viewer_bin);CHKERRQ(ierr);
#else
  ierr = PetscViewerDestroy(viewer_bin);CHKERRQ(ierr);
#endif

  PetscFunctionReturn(0);
}

//Print a Petsc Vec into a Matlab File
// TO BE CHANGED !!!!!!!!!!!!!
PetscErrorCode PrintVec(Vec b, const char* filename, const char* varname)
{
//This function is copy/paste of function LinAlg_PrintMatrix function
// located in Legacy/LinAlg_PETSC.cpp
  PetscErrorCode ierr;
  const VecType type;
  ierr = VecGetType(b, &type);CHKERRQ(ierr);
  if(!strcmp(type, "seq")){ // AND NUM_PROC > 1 !!!!!
    ierr = PrintVecSeq(b, filename, varname);CHKERRQ(ierr);
    PetscFunctionReturn(0);
  }

  PetscViewer viewer, viewer_bin;
  std::string tmp(filename);
  ierr = PetscObjectSetName((PetscObject)b, varname);CHKERRQ(ierr);
  // ASCII
  ierr = PetscViewerASCIIOpen(PETSC_COMM_WORLD, filename, &viewer);CHKERRQ(ierr);
  ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB);CHKERRQ(ierr);
  //see PrintMat function for the how-to use it
  ierr = PetscViewerBinaryOpen(PETSC_COMM_WORLD, (tmp + ".bin").c_str(), FILE_MODE_WRITE, &viewer_bin);CHKERRQ(ierr);
  ierr = PetscViewerSetFormat(viewer_bin, PETSC_VIEWER_DEFAULT);CHKERRQ(ierr);
  VecView(b,viewer);
  VecView(b,viewer_bin);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = PetscViewerDestroy(&viewer);CHKERRQ(ierr);
  ierr = PetscViewerDestroy(&viewer_bin);CHKERRQ(ierr);
#else
  ierr = PetscViewerDestroy(viewer);CHKERRQ(ierr);
  ierr = PetscViewerDestroy(viewer_bin);CHKERRQ(ierr);
#endif
  PetscFunctionReturn(0);
}

//Print a SEQUENTIAL Petsc Vec into a Matlab File
PetscErrorCode PrintVecSeq(Vec b, const char* filename, const char* varname){
  PetscErrorCode ierr;
  std::string tmp(filename);
  PetscViewer viewer, viewer_bin;

  ierr = PetscObjectSetName((PetscObject)b, varname);CHKERRQ(ierr);
  ierr = PetscViewerASCIIOpen(PETSC_COMM_SELF, filename, &viewer);CHKERRQ(ierr);
  ierr = PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB);CHKERRQ(ierr);
  //see PrintMat function for the how-to use it
  ierr = PetscViewerBinaryOpen(PETSC_COMM_SELF, (tmp + ".bin").c_str(), FILE_MODE_WRITE, &viewer_bin);CHKERRQ(ierr);
  ierr = PetscViewerSetFormat(viewer_bin, PETSC_VIEWER_DEFAULT);CHKERRQ(ierr);
  VecView(b,viewer);
  VecView(b,viewer_bin);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  ierr = PetscViewerDestroy(&viewer);CHKERRQ(ierr);
  ierr = PetscViewerDestroy(&viewer_bin);CHKERRQ(ierr);
#else
  ierr = PetscViewerDestroy(viewer);CHKERRQ(ierr);
  ierr = PetscViewerDestroy(viewer_bin);CHKERRQ(ierr);
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
