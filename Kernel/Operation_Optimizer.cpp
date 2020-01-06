// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
//
// Contributed by Erin Kuci

#include <map>
#include <string>
#include <vector>
#include "ProData.h"
#include "ProParser.h"
#include "Cal_Quantity.h"
#include "Message.h"
#include "GetDPConfig.h"

#if defined(HAVE_MMA) && defined(HAVE_PETSC)

#include "mma_mat.h"
#include "mma_primaldual.h"

// utility functions
static void CreateVector(Vec& Vector, PetscInt nn)
{
  VecCreate(PETSC_COMM_WORLD, &Vector);
  VecSetSizes(Vector,PETSC_DECIDE,nn);
  VecSetFromOptions(Vector);
}

static void UpdateVector(const PetscReal value, const PetscInt row, Vec& vector)
{
  VecSetValue(vector,row,value,INSERT_VALUES);
}

static void GetValueVector(double &value, const PetscInt id, const Vec& vector)
{
  PetscScalar val;
  VecGetValues(vector, 1, &id, &val);
  value = PetscRealPart(val);
}

static void AssembleVector(const Vec& vector)
{
  VecAssemblyBegin(vector);
  VecAssemblyEnd(vector);
}

static void CreateMatrix(Mat& Matrix, PetscInt nbrows, PetscInt nbcols)
{
  // full matrix... but in AIJ format for subsequent operations in mma
  PetscInt prealloc = nbcols;
  MatCreateAIJ(MPI_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, nbrows, nbcols,
               prealloc, PETSC_NULL, prealloc, PETSC_NULL, &Matrix);

  // Preallocation routines automatically set now MAT_NEW_NONZERO_ALLOCATION_ERR,
  // what causes a problem when the mask of the matrix changes (e.g. moving band)
  // We must disable the error generation and allow new allocation (if needed)
  MatSetOption(Matrix,MAT_NEW_NONZERO_ALLOCATION_ERR,PETSC_FALSE);

  // override the default options with the ones from the option database (if
  // any)
  MatSetFromOptions(Matrix);
}

static void UpdateMatrixRowFromVector(double* myvecvals, int vecsize,
                                      PetscInt row, Mat& Matrix)
{
  // Count the number of nonzero elements in the vector:
  //int numnonzero = 0;
  //for (int i = 0; i < vecsize; i++){if (myvecvals[i] != 0){numnonzero++;}}

  // Get the adresses and values of the nonzeros:
  //int nonzeroadresses[numnonzero];
  //double nonzerovalues[numnonzero];
  //int index = 0;
  //for (int i = 0; i < vecsize; i++){
  //    if (myvecvals[i] != 0){
  //        nonzeroadresses[index] = i;
  //        nonzerovalues[index] = myvecvals[i];
  //        index++;
  //    }
  //}
  int nonzeroadresses[vecsize];
  PetscScalar nonzerovalues[vecsize];
  for (int i = 0; i < vecsize; i++){
    nonzeroadresses[i] = i;
    nonzerovalues[i] = (PetscScalar)myvecvals[i];
  }

  // fill the matrix
  PetscInt row_vec[1] = {row};
  MatSetValues(Matrix,1,row_vec,vecsize,nonzeroadresses,nonzerovalues,
                INSERT_VALUES);

//  MatSetValues(Matrix,1,row_vec,numnonzero,nonzeroadresses,nonzerovalues,
//    INSERT_VALUES);
}

static void AssembleMatrix(const Mat& Matrix)
{
  MatAssemblyBegin(Matrix, MAT_FINAL_ASSEMBLY);
  MatAssemblyEnd(Matrix, MAT_FINAL_ASSEMBLY);
}

class optimizerContext
{
 public:
  // name of getdp variables used for I/O with the parser
  std::string algorithm;
  std::string currentPoint;
  std::string objective, objectiveSensitivity;
  std::vector<std::string> constraints, constraintsSensitivity;
  // internal petsc data
  PetscInt nvar, mcon;
  Vec xval_pt, LowerBounds, UpperBounds, GradOfObjective, Constraints;
  Mat GradOfConstraints;
  // subproblem
  MMA_MAT *subProblem;
  // subproblem solver
  MMA_PRIMALDUAL_INTERIORPOINT *subProblemSolver;

 public:
  optimizerContext(char *nameAlgorithm, char *nameCurrentPoint,
                   char *nameObjective, char *nameObjectiveSensitivity,
                   List_T *nameConstraints, List_T *nameConstraintsSensitivity,
                   List_T *currentPointLowerBounds, List_T *currentPointUpperBounds)
    : algorithm(nameAlgorithm), currentPoint(nameCurrentPoint),
      objective(nameObjective), objectiveSensitivity(nameObjectiveSensitivity)
  {
    // names of GetDP exchange variables
    for(int i = 0; i < List_Nbr(nameConstraints); i++){
      char *c; List_Read(nameConstraints, i, &c);
      constraints.push_back(c);
    }
    for(int i = 0; i < List_Nbr(nameConstraintsSensitivity); i++){
      char *c; List_Read(nameConstraintsSensitivity, i, &c);
      constraintsSensitivity.push_back(c);
    }
    std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
      GetDPNumbersMap.find(currentPoint);
    nvar = itv->second.size();

    // FIXME: get actual number of constraints
    mcon = constraints.size();
      
    // Lower bounds of the current point
    CreateVector(LowerBounds, nvar);
    if(List_Nbr(currentPointLowerBounds) == 1){
      double v; List_Read(currentPointLowerBounds, 0, &v);
      VecSet(LowerBounds, v);
    }
    else{
      Message::Warning("Multiple lower bounds not implemented yet");
    }
    AssembleVector(LowerBounds);

    // Upper bounds of the current point
    CreateVector(UpperBounds, nvar);
    if(List_Nbr(currentPointUpperBounds) == 1){
      double v; List_Read(currentPointUpperBounds, 0, &v);
      VecSet(UpperBounds, v);
    }
    else{
      Message::Warning("Multiple lower bounds not implemented yet");
    }
    AssembleVector(UpperBounds);

    // Create all the useful vectors/matrices
    CreateVector(xval_pt, nvar);
    CreateVector(GradOfObjective, nvar);
    CreateVector(Constraints, mcon);
    CreateMatrix(GradOfConstraints, mcon, nvar);

    // Create the subproblem
    subProblem = new MMA_MAT(mcon, nvar, LowerBounds, UpperBounds);
    subProblem->verbosity = 0;

    // Create the solver of the subproblem
    subProblemSolver = new MMA_PRIMALDUAL_INTERIORPOINT(subProblem);
    subProblemSolver->verbosity = 0;

    printInfo();
  }
  void printInfo()
  {
    Message::Info("Optimizer algorithm: %s", algorithm.c_str());
    Message::Info("Optimizer Number of design variables: %i", nvar);
    Message::Info("Optimizer Number of constraints %i", mcon);
    //VecView(LowerBounds, PETSC_VIEWER_STDOUT_WORLD);
    //VecView(UpperBounds, PETSC_VIEWER_STDOUT_WORLD);
  }
};

static optimizerContext *context = 0;

static void UpdateCurrentPointList(const std::string &name, const Vec &data)
{
  double datav;
  std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
    GetDPNumbersMap.find(name);
  if(itv != GetDPNumbersMap.end()){
    printf(" - table Current Point \n");
    int ii = 0;
    for(std::map<int, std::vector<double> >::iterator it = itv->second.begin();
        it != itv->second.end(); it++){
      GetValueVector(datav, ii, data);
      for(unsigned int i = 0; i < it->second.size(); i++){
        it->second[i] = datav;
        //printf("%g ", it->second[i]);
      }
      ii++;
    }
  }
  else{
    std::map<std::string, std::vector<double> >::iterator its =
      GetDPNumbers.find(name);
    if(its != GetDPNumbers.end()){
      printf(" - scalar Current Point \n");
      for(unsigned int i = 0; i < its->second.size(); i++){
        GetValueVector(datav, i, data);
        its->second[i] = datav;
        //printf("%g ", its->second[i]);
      }
    }
    else{
      Message::Warning("Unknown %s", name.c_str());
    }
  }
}

static void UpdateVecFromInput(const std::string &type, const std::string &name,
                               Vec &vv, int idGlobal=0)
{
  std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
    GetDPNumbersMap.find(name);
  if(itv != GetDPNumbersMap.end()){
    printf(" - table %s:\n", type.c_str());
    int ii = 0;
    for(std::map<int, std::vector<double> >::iterator it = itv->second.begin();
        it != itv->second.end(); it++){
      UpdateVector(it->second[0], idGlobal+ii, vv);
      //printf("  ele %d: ", it->first);
      //for(unsigned int i = 0; i < it->second.size(); i++){
      //printf("%g ", it->second[i]);
      //}
      //printf("\n");
      ii++;
    }
  }
  else{
    std::map<std::string, std::vector<double> >::iterator its =
      GetDPNumbers.find(name);
    if(its != GetDPNumbers.end()){
      printf(" - scalar variable %s: \n", type.c_str());
      for(unsigned int i = 0; i < its->second.size(); i++){
        UpdateVector(its->second[i], idGlobal+i, vv);
      }
    }
    else{
      Message::Warning("Unknown %s: %s", type.c_str(), name.c_str());
    }
  }
}

static void UpdateMatFromInput(const std::string &type, const std::string &name,
                               Mat &vv, int idGlobal=0)
{
  std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
    GetDPNumbersMap.find(name);
  if(itv != GetDPNumbersMap.end()){
    printf(" - table %s:\n", type.c_str());
    double myvecvals[itv->second.size()];
    int ii = 0;
    for(std::map<int, std::vector<double> >::iterator it = itv->second.begin();
        it != itv->second.end(); it++){
      //UpdateVector(it->second[0], idGlobal+ii, vv);
      myvecvals[ii] = it->second[0];
      //printf("  ele %d: ", it->first);
      //for(unsigned int i = 0; i < it->second.size(); i++){
      //    printf("%g ", it->second[i]);
      //}
      //printf("\n");
      ii++;
    }
    UpdateMatrixRowFromVector(myvecvals, itv->second.size(), idGlobal, vv);
  }
  else{
    std::map<std::string, std::vector<double> >::iterator its =
      GetDPNumbers.find(name);
    if(its != GetDPNumbers.end()){
      double myvecvals[its->second.size()];
      printf(" - scalar variable %s \n", type.c_str());
      for(unsigned int i = 0; i < its->second.size(); i++){
        myvecvals[i] = its->second[i];
        //printf("%g ", its->second[i]);
      }
      //printf("\n");
      UpdateMatrixRowFromVector(myvecvals, its->second.size(), idGlobal, vv);
    }
    else{
      Message::Warning("Unknown %s: %s", type.c_str(), name.c_str());
    }
  }
}

void Operation_OptimizerInitialize(struct Operation *Operation_P)
{
  context = new optimizerContext
    (Operation_P->Case.OptimizerInitialize.algorithm,
     Operation_P->Case.OptimizerInitialize.currentPoint,
     Operation_P->Case.OptimizerInitialize.objective,
     Operation_P->Case.OptimizerInitialize.objectiveSensitivity,
     Operation_P->Case.OptimizerInitialize.constraints,
     Operation_P->Case.OptimizerInitialize.constraintsSensitivity,
     Operation_P->Case.OptimizerInitialize.currentPointLowerBounds,
     Operation_P->Case.OptimizerInitialize.currentPointUpperBounds);
}

void Operation_OptimizerUpdate(struct Operation *Operation_P)
{
  //subProblem->nvar
  printf("Opti update:\n");

  // Update the vectors

  UpdateVecFromInput("currentPoint", context->currentPoint, context->xval_pt);
  AssembleVector(context->xval_pt);
  //VecView(context->xval_pt, PETSC_VIEWER_STDOUT_WORLD);

  UpdateVecFromInput("objectiveSensitivity", context->objectiveSensitivity,
                     context->GradOfObjective);
  AssembleVector(context->GradOfObjective);
  //VecView(context->GradOfObjective, PETSC_VIEWER_STDOUT_WORLD);

  // FIXME: constraints are not in the same order as they have been declared
  // => Maybe their sensitivity are in a different order => mix
  for(unsigned int i = 0; i < context->constraints.size(); i++){
    UpdateVecFromInput("constraints", context->constraints[i],
        context->Constraints, i);
  }
  AssembleVector(context->Constraints);
  //VecView(context->Constraints, PETSC_VIEWER_STDOUT_WORLD);

  for(unsigned int i = 0; i < context->constraintsSensitivity.size(); i++){
    UpdateMatFromInput("constraint sensitivity", context->constraintsSensitivity[i],
                       context->GradOfConstraints, i);
  }
  AssembleMatrix(context->GradOfConstraints);
  //MatView(context->GradOfConstraints, PETSC_VIEWER_STDOUT_WORLD);

  // Call the optimizer to update the current point
  context->subProblemSolver->UpdateCurrentPoint(context->xval_pt,
                                                context->GradOfObjective,
                                                context->Constraints,
                                                context->GradOfConstraints);
  //VecView(context->xval_pt, PETSC_VIEWER_STDOUT_WORLD);

  Value v;
  v.Type = SCALAR;
  context->subProblem->DesignChange(context->xval_pt, v.Val[0]);
  Cal_StoreInVariable(&v, Operation_P->Case.OptimizerUpdate.residual);

  // Update the list of design variables
  UpdateCurrentPointList(context->currentPoint, context->xval_pt);

}

void Operation_OptimizerFinalize(struct Operation *Operation_P)
{
  VecDestroy(&context->xval_pt);
  VecDestroy(&context->LowerBounds);
  VecDestroy(&context->UpperBounds);
  VecDestroy(&context->GradOfObjective);
  VecDestroy(&context->Constraints);
  MatDestroy(&context->GradOfConstraints);
}

#else

void Operation_OptimizerInitialize(struct Operation *Operation_P)
{
  Message::Error("This version of GetDP is not compiled with MMA support");
}

void Operation_OptimizerUpdate(struct Operation *Operation_P)
{
  Message::Error("This version of GetDP is not compiled with MMA support");
}

void Operation_OptimizerFinalize(struct Operation *Operation_P)
{
  Message::Error("This version of GetDP is not compiled with MMA support");
}


#endif
