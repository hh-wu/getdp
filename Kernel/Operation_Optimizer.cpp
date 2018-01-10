// GetDP - Copyright (C) 1997-2018 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
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

class optimizerContext;

static optimizerContext *context = 0;

// some vector operations
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
    VecGetValues(vector, 1, &id, &value);
}


static void AssembleVector(const Vec& vector)
{
    VecAssemblyBegin(vector);
    VecAssemblyEnd(vector);
}

// some matrix operations
static void CreateMatrix(Mat& Matrix, PetscInt nbrows, PetscInt nbcols)
{
    
  PetscInt prealloc = 2500;
  PetscInt prealloc_full = nbrows;
  int nonloc = nbrows; //Current.DofData->NonLocalEquations.size();
  // heuristic for preallocation of global rows: don't prelloc more than 500 Mb
  double limit = 1000. * 1024. * 1024. / (sizeof(double));
  double estim = (double)nonloc * (double)nbrows;
  if(estim > limit){
      prealloc_full = (int)(limit / nonloc);
      PetscPrintf(PETSC_COMM_WORLD,"Heuristic -petsc_prealloc_full changed to %f\n",prealloc_full);
  }
    
  //PetscInt prealloc,prealloc_full;
    
  PetscOptionsGetInt(NULL, NULL, "-mma_prealloc", &prealloc, NULL);
  PetscOptionsGetInt(NULL, NULL, "-mma_prealloc_full", &prealloc_full, NULL);
    
  // prealloc cannot be bigger than the number of rows!
  PetscPrintf(PETSC_COMM_WORLD,"*** Heuristic prealloc: %f, mcon:%f\n",(PetscScalar)prealloc,(PetscScalar)nbrows);
  prealloc = (nbrows < prealloc) ? nbrows : prealloc;
  //PetscPrintf(PETSC_COMM_WORLD,"Heuristic prealloc: %i\n",prealloc);
    
  prealloc_full = (nbrows < prealloc_full) ? nbrows : prealloc_full;
    
  std::vector<PetscInt> nnz(nbrows, prealloc);
    
  // preallocate non local equations as full lines (this is not
  // optimal, but preallocating too few elements leads to horrible
  // assembly performance: petsc really sucks at dynamic reallocation
  // in the AIJ matrix format)
  for(int i = 0; i < nonloc; i++){nnz[i] = prealloc_full;}
    
  MatCreateAIJ(MPI_COMM_WORLD, PETSC_DECIDE, PETSC_DECIDE, nbrows, nbcols,
                 prealloc, PETSC_NULL, prealloc, PETSC_NULL, &Matrix);
    
  //PetscPrintf(PETSC_COMM_WORLD,"Heuristic prealloc: %i\n",prealloc);
    
  // Preallocation routines automatically set now MAT_NEW_NONZERO_ALLOCATION_ERR,
  // what causes a problem when the mask of the matrix changes (e.g. moving band)
  // We must disable the error generation and allow new allocation (if needed)
  MatSetOption(Matrix,MAT_NEW_NONZERO_ALLOCATION_ERR,PETSC_FALSE);
    
  // override the default options with the ones from the option
  // database (if any)
  MatSetFromOptions(Matrix);
    
  //PetscPrintf(PETSC_COMM_WORLD,"Heuristic prealloc OK!\n");
}

static void UpdateMatrixRowFromVector(double* myvecvals, int vecsize, PetscInt row, Mat& Matrix)
{
    
  //int vecsize = myvector.size();
  //std::cout << "vector size:" << vecsize << std::endl;
    
  // Get all values:
  //densematrix vecvals = myvector.getvalues(intdensematrix(vecsize,1, 0,1));
  //double* myvecvals = vecvals.getvalues();
    
  // Count the number of nonzero elements in the vector:
  int numnonzero = 0;
  for (int i = 0; i < vecsize; i++){if (myvecvals[i] != 0){numnonzero++;}}
    
  // Get the adresses and values of the nonzeros:
  int nonzeroadresses[numnonzero];
  double nonzerovalues[numnonzero];
  int index = 0;
  for (int i = 0; i < vecsize; i++){
    if (myvecvals[i] != 0){
      nonzeroadresses[index] = i;
      nonzerovalues[index] = myvecvals[i];
      index++;
    }
  }
    
  // fill the matrix
  PetscInt row_vec[1] = {row};
  MatSetValues(Matrix,1,row_vec,numnonzero,nonzeroadresses,nonzerovalues,INSERT_VALUES);
    
}

static void AssembleMatrix(const Mat& Matrix)
{
    MatAssemblyBegin(Matrix, MAT_FINAL_ASSEMBLY);
    MatAssemblyEnd(Matrix, MAT_FINAL_ASSEMBLY);
    //MatView(Matrix, PETSC_VIEWER_STDOUT_WORLD);
}

static void debugInput(const std::string &type, const std::string &name)
{
    std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
    GetDPNumbersMap.find(name);
    if(itv != GetDPNumbersMap.end()){
        printf(" - table %s:\n", type.c_str());
        for(std::map<int, std::vector<double> >::iterator it = itv->second.begin();
            it != itv->second.end(); it++){
            printf("  ele %d: ", it->first);
            for(unsigned int i = 0; i < it->second.size(); i++)
                printf("%g ", it->second[i]);
            printf("\n");
        }
    }
    else{
        std::map<std::string, std::vector<double> >::iterator its =
        GetDPNumbers.find(name);
        if(its != GetDPNumbers.end()){
            printf(" - scalar variable %s: ", type.c_str());
            for(unsigned int i = 0; i < its->second.size(); i++)
                printf("%g ", its->second[i]);
            printf("\n");
        }
        else{
            Message::Warning("Unknown %s: %s", type.c_str(), name.c_str());
        }
    }
}

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
            for(unsigned int i = 0; i < it->second.size(); i++)
            {
                it->second[i] = datav;
                printf("%g ", it->second[i]);
            }
            ii++;
        }
    }
    else{
        std::map<std::string, std::vector<double> >::iterator its =
        GetDPNumbers.find(name);
        if(its != GetDPNumbers.end()){
            printf(" - scalar Current Point \n");
            for(unsigned int i = 0; i < its->second.size(); i++)
            {
                GetValueVector(datav, i, data);
                its->second[i] = datav;
                printf("%g ", its->second[i]);
            }
        }
        else{
            Message::Warning("Unknown %s", name.c_str());
        }
    }
}

static void UpdateVecFromInput(const std::string &type, const std::string &name, Vec &vv, int idGlobal=0)
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

static void GetNumberOfDesignVariables(const struct Operation *Operation_P, int &val)
{
    std::map<std::string, std::map<int, std::vector<double> > >::iterator itv =
    GetDPNumbersMap.find(Operation_P->Case.OptimizerUpdate.currentPoint);
    val = itv->second.size();
}

static void GetNumberOfConstraints(const struct Operation *Operation_P, int &val)
{
    val=List_Nbr(Operation_P->Case.OptimizerUpdate.constraints);
}

static void UpdateMatFromInput(const std::string &type, const std::string &name, Mat &vv, int idGlobal=0)
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
  printf("Opti init:\n");

  printf(" - algorithm: %s\n", Operation_P->Case.OptimizerInitialize.algorithm);
    
  PetscInt nbDesVar=22;
  PetscInt nbConstr=1;

  Vec LowerBounds, UpperBounds;
  CreateVector(LowerBounds, nbDesVar);
  CreateVector(UpperBounds, nbDesVar);

  List_T *lb = Operation_P->Case.OptimizerInitialize.currentPointLowerBounds;
  printf(" - lower bounds: ");
  for(int i = 0; i < List_Nbr(lb); i++){
    double d;
    List_Read(lb, i, &d);
    printf("%g ", d);
  }
  printf("\n");

  List_T *ub = Operation_P->Case.OptimizerInitialize.currentPointUpperBounds;
  printf(" - upper bounds: ");
  for(int i = 0; i < List_Nbr(ub); i++){
    double d;
    List_Read(ub, i, &d);
    printf("%g ", d);
  }
  printf("\n");
    
  // fill the vector
  double low, upp;
  List_Read(lb, 0, &low);
  List_Read(ub, 0, &upp);

  for(int i = 0; i < nbDesVar; i++){
    UpdateVector(low, i, LowerBounds);
    UpdateVector(upp, i, UpperBounds);
  }

  AssembleVector(LowerBounds);
  AssembleVector(UpperBounds);

  //VecView(LowerBounds, PETSC_VIEWER_STDOUT_WORLD);
  //VecView(UpperBounds, PETSC_VIEWER_STDOUT_WORLD);

//  // Create the subproblem
//  MMA_MAT *subProblem = new MMA_MAT(nbConstr,nbDesVar,LowerBounds,UpperBounds);
//  subProblem->verbosity = 10;
//    
//  // Create the solver of the subproblem
//  MMA_PRIMALDUAL_INTERIORPOINT *subProblemSolver = new MMA_PRIMALDUAL_INTERIORPOINT(subProblem);
//  subProblemSolver->verbosity = 10;

}

void Operation_OptimizerUpdate(struct Operation *Operation_P)
{
  // test context to verify that the initialization has been performed.
    

  //subProblem->nvar
  printf("Opti update:\n");
    

  PetscInt nvar;
  GetNumberOfDesignVariables(Operation_P, nvar);
  printf("Number of design variables: %i\n", nvar);
    
  PetscInt mcon;
  GetNumberOfConstraints(Operation_P, mcon);
  printf("Number of constraints: %i\n", mcon);
    
  Vec xval_pt;
  CreateVector(xval_pt, nvar); // create in Problem()
  UpdateVecFromInput("currentPoint", Operation_P->Case.OptimizerUpdate.currentPoint, xval_pt);
  AssembleVector(xval_pt);
  //VecView(xval_pt, PETSC_VIEWER_STDOUT_WORLD);
    
  Vec GradOfObjective;
  CreateVector(GradOfObjective, nvar);
  UpdateVecFromInput("objectiveSensitivity", Operation_P->Case.OptimizerUpdate.objectiveSensitivity, GradOfObjective);
  AssembleVector(GradOfObjective);
  //VecView(GradOfObjective, PETSC_VIEWER_STDOUT_WORLD);

  Vec Constraints;
  CreateVector(Constraints, mcon);
  for(int i = 0; i < List_Nbr(Operation_P->Case.OptimizerUpdate.constraints); i++){
    char *c; List_Read(Operation_P->Case.OptimizerUpdate.constraints, i, &c);
    UpdateVecFromInput("constraints", c, Constraints, i);
  }
  AssembleVector(Constraints);
  //VecView(Constraints, PETSC_VIEWER_STDOUT_WORLD);
    
  Mat GradOfConstraints;
  CreateMatrix(GradOfConstraints, mcon, nvar);
  for(int i = 0; i < List_Nbr(Operation_P->Case.OptimizerUpdate.constraintsSensitivity); i++){
    char *c; List_Read(Operation_P->Case.OptimizerUpdate.constraintsSensitivity, i, &c);
    //debugInput("constraint sensitivity", c);
    UpdateMatFromInput("constraint sensitivity", c, GradOfConstraints, i);
  }
  AssembleMatrix(GradOfConstraints);
  //MatView(GradOfConstraints, PETSC_VIEWER_STDOUT_WORLD);
    
  // debug
    
//  debugInput("current point", Operation_P->Case.OptimizerUpdate.currentPoint);
//  debugInput("objective", Operation_P->Case.OptimizerUpdate.objective);
//  for(int i = 0; i < List_Nbr(Operation_P->Case.OptimizerUpdate.constraints); i++){
//    char *c; List_Read(Operation_P->Case.OptimizerUpdate.constraints, i, &c);
//    debugInput("constraint", c);
//  }
//  debugInput("objective sensitivity", Operation_P->Case.OptimizerUpdate.objectiveSensitivity);
//  for(int i = 0; i < List_Nbr(Operation_P->Case.OptimizerUpdate.constraintsSensitivity); i++){
//    char *c; List_Read(Operation_P->Case.OptimizerUpdate.constraintsSensitivity, i, &c);
//    debugInput("constraint sensitivity", c);
//  }
  Value v;
  v.Type = SCALAR;
  v.Val[0] = 1e-12;
  Cal_StoreInVariable(&v, Operation_P->Case.OptimizerUpdate.residual);
    
  Vec LowerBounds, UpperBounds;
  CreateVector(LowerBounds, nvar);
  CreateVector(UpperBounds, nvar);
  AssembleVector(LowerBounds);
  AssembleVector(UpperBounds);
  VecSet(LowerBounds, 0.0);
  VecSet(UpperBounds, 1.0);
    
  // Create the subproblem
  MMA_MAT *subProblem = new MMA_MAT(mcon,nvar,LowerBounds,UpperBounds);
  subProblem->verbosity = 10;
    
  // Create the solver of the subproblem
  MMA_PRIMALDUAL_INTERIORPOINT *subProblemSolver = new MMA_PRIMALDUAL_INTERIORPOINT(subProblem);
  subProblemSolver->verbosity = 10;
    
  subProblemSolver->UpdateCurrentPoint(xval_pt,GradOfObjective,Constraints,GradOfConstraints);
  VecView(xval_pt, PETSC_VIEWER_STDOUT_WORLD);
    
  // Update the list of design variables
  UpdateCurrentPointList(Operation_P->Case.OptimizerUpdate.currentPoint, xval_pt);

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

#endif
