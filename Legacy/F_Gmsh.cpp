// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

extern struct CurrentData Current ;

#if defined(HAVE_GMSH)

#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>

void F_Field(F_ARG)
{
  if(A->Type != VECTOR){
    Message::Error("Field[] expects XYZ coordinates as argument");
    return;
  }
  if(PView::list.empty()){
    Message::Error("No views available to interpolate from");
    return;
  }
  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];

  if(Fct->NbrArguments > 1){
    Message::Error("Time and additional arguments are not supported in Field: "
                   "use {Scalar,Vector,Tensor}Field instead");
    return;
  }

  for (int k = 0; k < Current.NbrHar; k++)
    for (int j = 0; j < 9; j++)
      V->Val[MAX_DIM * k + j] = 0. ;
  V->Type = SCALAR;

  std::vector<int> iview;
  if(!Fct->NbrParameters){
    // use last view by default
    iview.push_back(PView::list.back()->getTag());
  }
  else{
    for(int i = 0; i < Fct->NbrParameters; i++)
      iview.push_back(Fct->Para[i]);
  }

  // add the values from all specified views
  for(unsigned int i = 0; i < iview.size(); i++){

    PView *v = PView::getViewByTag(iview[i]);
    if(!v){
      Message::Error("View with tag %d does not exist", iview[i]);
      return;
    }

    PViewData *data = v->getData();

    std::vector<double> val(9 * data->getNumTimeSteps());
    if(data->searchScalar(x, y, z, &val[0])){
      V->Val[0] += val[0];
      if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1)
        V->Val[MAX_DIM] += val[1];
      V->Type = SCALAR;
    }
    else if(data->searchVector(x, y, z, &val[0])){
      for(int j = 0; j < 3; j++)
        V->Val[j] += val[j];
      if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1){
        for(int j = 0; j < 3; j++)
          V->Val[MAX_DIM + j] += val[3 + j];
      }
      V->Type = VECTOR;
    }
    else if(data->searchTensor(x, y, z, &val[0])){
      for(int j = 0; j < 9; j++)
        V->Val[j] += val[j];
      if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1){
        for(int j = 0; j < 9; j++)
          V->Val[MAX_DIM + j] += val[9 + j];
      }
      V->Type = TENSOR;
    }
    else{
      Message::Error("Did not find data at point (%g,%g,%g) in View with tag %d",
                     x, y, z, iview[i]);
    }
  }
}

static void F_X_Field(F_ARG, int type, bool complex)
{
  if(A->Type != VECTOR){
    Message::Error("Field[] expects XYZ coordinates as argument");
    return;
  }
  if(PView::list.empty()){
    Message::Error("No views available to interpolate from");
    return;
  }

  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];
  int numComp = (type == SCALAR) ? 1 : (type == VECTOR) ? 3 : 9;

  int NbrArg = Fct->NbrArguments ;
  int TimeStep = 0, MatchElement = 0;
  if(NbrArg >= 2){
    if((A+1)->Type != SCALAR){
      Message::Error("Expected scalar second argument (time step)");
      return;
    }
    TimeStep = (int)(A+1)->Val[0];
  }
  if(NbrArg >= 3){
    if((A+2)->Type != SCALAR){
      Message::Error("Expected scalar second argument (element matching flag)");
      return;
    }
    MatchElement = (int)(A+2)->Val[0];
  }

  // Todo: we could treat the third arguement as a tolerance (and call
  // searchScalarWithTol & friends)

  // Complex{Scalar,Vector,Tensor}Field assume that the Gmsh view contains real
  // and imaginary parts for each step
  if(complex) TimeStep *= 2;

  for (int k = 0; k < Current.NbrHar; k++)
    for (int j = 0; j < numComp; j++)
      V->Val[MAX_DIM * k + j] = 0. ;
  V->Type = type;

  std::vector<int> iview;
  if(!Fct->NbrParameters){
    // use last view by default
    iview.push_back(PView::list.back()->getTag());
  }
  else{
    for(int i = 0; i < Fct->NbrParameters; i++)
      iview.push_back(Fct->Para[i]);
  }

  int qn = MatchElement ? Current.Element->GeoElement->NbrNodes : 0;
  double *qx = Current.Element->x;
  double *qy = Current.Element->y;
  double *qz = Current.Element->z;

  // add the values from all specified views
  for(unsigned int i = 0; i < iview.size(); i++){

    PView *v = PView::getViewByTag(iview[i]);
    if(!v){
      Message::Error("View with tag %d does not exist", iview[i]);
      return;
    }

    PViewData *data = v->getData();

    if(TimeStep < 0 || TimeStep >= data->getNumTimeSteps()){
      Message::Error("Invalid step %d in View with tag %d", TimeStep, iview[i]);
      continue;
    }

    std::vector<double> val(numComp * data->getNumTimeSteps());
    switch(type){
    case SCALAR :
      if(data->searchScalar(x, y, z, &val[0], -1, 0, qn, qx, qy, qz)){
        V->Val[0] += val[TimeStep];
        if(complex && Current.NbrHar == 2 && data->getNumTimeSteps() > TimeStep + 1)
          V->Val[MAX_DIM] += val[TimeStep + 1];
      }
      break;
    case VECTOR :
      if(data->searchVector(x, y, z, &val[0], -1, 0, qn, qx, qy, qz)){
        for(int j = 0; j < 3; j++)
          V->Val[j] += val[3 * TimeStep + j];
        if(complex && Current.NbrHar == 2 && data->getNumTimeSteps() > TimeStep + 1){
          for(int j = 0; j < 3; j++)
            V->Val[MAX_DIM + j] += val[3 * (TimeStep + 1) + j];
        }
      }
      break;
    case TENSOR :
      if(data->searchTensor(x, y, z, &val[0], -1, 0, qn, qx, qy, qz)){
        for(int j = 0; j < 9; j++)
          V->Val[j] += val[9 * TimeStep + j];
        if(complex && Current.NbrHar == 2 && data->getNumTimeSteps() > TimeStep + 1){
          for(int j = 0; j < 9; j++)
            V->Val[MAX_DIM + j] += val[9 * (TimeStep + 1) + j];
        }
      }
      break;
    }
  }
}

#else

void F_Field(F_ARG)
{
  Message::Error("You need to compile GetDP with Gmsh support to use 'Field'");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

static void F_X_Field(F_ARG, int type, bool complex)
{
  Message::Error("You need to compile GetDP with Gmsh support to use 'Field'");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

#endif

void F_ScalarField(F_ARG){ F_X_Field(Fct, A, V, SCALAR, false); }
void F_VectorField(F_ARG){ F_X_Field(Fct, A, V, VECTOR, false); }
void F_TensorField(F_ARG){ F_X_Field(Fct, A, V, TENSOR, false); }
void F_ComplexScalarField(F_ARG){ F_X_Field(Fct, A, V, SCALAR, true); }
void F_ComplexVectorField(F_ARG){ F_X_Field(Fct, A, V, VECTOR, true); }
void F_ComplexTensorField(F_ARG){ F_X_Field(Fct, A, V, TENSOR, true); }
