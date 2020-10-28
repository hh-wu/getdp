// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

extern struct CurrentData Current ;

#if defined(HAVE_GMSH)

#include <gmsh/GmshGlobal.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>
#include <gmsh/Numeric.h>

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

  double N = 0.;

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
      N += 1.;
    }
    else if(data->searchVector(x, y, z, &val[0])){
      for(int j = 0; j < 3; j++)
        V->Val[j] += val[j];
      if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1){
        for(int j = 0; j < 3; j++)
          V->Val[MAX_DIM + j] += val[3 + j];
      }
      V->Type = VECTOR;
      N += 1.;
    }
    else if(data->searchTensor(x, y, z, &val[0])){
      for(int j = 0; j < 9; j++)
        V->Val[j] += val[j];
      if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1){
        for(int j = 0; j < 9; j++)
          V->Val[MAX_DIM + j] += val[9 + j];
      }
      V->Type = TENSOR;
      N += 1.;
    }
    else{
      Message::Error("Did not find data at point (%g,%g,%g) in View with tag %d",
                     x, y, z, iview[i]);
    }
  }

  if(N > 1.){
    Message::Debug("Averaging data %g times on vertex (%g,%g,%g)", N, x, y, z);
    for (int k = 0; k < Current.NbrHar; k++)
      for (int j = 0; j < 9; j++)
        V->Val[MAX_DIM * k + j] = 0. ;
  }
}

static void F_X_Field(F_ARG, int type, bool complex, bool grad=false)
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
  int numComp = (type == SCALAR) ? (grad ? 3 : 1) :
    (type == VECTOR) ? (grad ? 9 : 3) : 9; // TODO: grad of tensor

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

  // TODO: we could treat the third arguement as a tolerance (and call
  // searchScalarWithTol & friends)

  // Complex{Scalar,Vector,Tensor}Field assume that the Gmsh view contains real
  // and imaginary parts for each step
  if(complex) TimeStep *= 2;

  for (int k = 0; k < Current.NbrHar; k++)
    for (int j = 0; j < numComp; j++)
      V->Val[MAX_DIM * k + j] = 0. ;
  V->Type = (numComp == 1) ? SCALAR : (numComp == 3) ? VECTOR : TENSOR;

  std::vector<int> iview;
  if(!Fct->NbrParameters){
    // use last view by default
    iview.push_back(PView::list.back()->getTag());
  }
  else{
    for(int i = 0; i < Fct->NbrParameters; i++)
      iview.push_back(Fct->Para[i]);
  }

  int qn = 0;
  double *qx = 0, *qy = 0, *qz = 0;
  if(Current.Element){
    qn = MatchElement ? Current.Element->GeoElement->NbrNodes : 0;
    qx = Current.Element->x;
    qy = Current.Element->y;
    qz = Current.Element->z;
  }

  double N = 0.;

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
    bool found = false;
    switch(type){
    case SCALAR :
      if(data->searchScalar(x, y, z, &val[0], -1, 0, qn, qx, qy, qz, grad))
        found = true;
      break;
    case VECTOR :
      if(data->searchVector(x, y, z, &val[0], -1, 0, qn, qx, qy, qz, grad))
        found = true;
      break;
    case TENSOR :
      // TODO: grad of tensor not allowed yet - not sure how we should return
      // the values; provide 3 routines that return 3 tensors, or add argumemt
      // to select what to return?
      if(data->searchTensor(x, y, z, &val[0], -1, 0, qn, qx, qy, qz, false))
        found = true;
      break;
    }
    if(found){
      for(int j = 0; j < numComp; j++)
        V->Val[j] += val[numComp * TimeStep + j];
      if(complex && Current.NbrHar == 2 && data->getNumTimeSteps() > TimeStep + 1)
        for(int j = 0; j < numComp; j++)
          V->Val[MAX_DIM + j] += val[numComp * (TimeStep + 1) + j];
      N += 1.;
    }
  }

  if(N > 1.){
    Message::Debug("Averaging data %g times on vertex (%g,%g,%g)", N, x, y, z);
    for (int k = 0; k < Current.NbrHar; k++)
      for (int j = 0; j < numComp; j++)
        V->Val[MAX_DIM * k + j] /= N ;
  }
}

void F_Distance(F_ARG)
{
  if(A->Type != VECTOR){
    Message::Error("Distance[] expects XYZ coordinates as argument");
    return;
  }

  SPoint3 p(A->Val[0], A->Val[1], A->Val[2]);

  if(Fct->NbrParameters != 1){
    Message::Error("Distance[] requires one view tag as parameter");
    return;
  }

  PView *v = PView::getViewByTag(Fct->Para[0]);
  if(!v){
    Message::Error("View with tag %d does not exist", Fct->Para[0]);
    return;
  }

  PViewData *data = v->getData();
  if(data->getNumTimeSteps() != 1 || !data->hasTimeStep(0)) {
    Message::Error("View used in Distance[] should have a single step");
    return;
  }

  double dist = 1e200;

  for(int ent = 0; ent < data->getNumEntities(0); ent++) {
    if(data->skipEntity(0, ent)) continue;
    for(int ele = 0; ele < data->getNumElements(0, ent); ele++) {
      if(data->skipElement(0, ent, ele)) continue;
      int numComp = data->getNumComponents(0, ent, ele);
      if(numComp != 3) {
        Message::Error("Distance[] expects a vector-valued view");
        return;
      }
      int numNodes = data->getNumNodes(0, ent, ele);
      if(numNodes != 2 && numNodes != 3) {
        Message::Error("Distance[] can only currently handle lines and triangles");
        return;
      }
      double nx[3], ny[3], nz[3], dx[3], dy[3], dz[3];
      for(int nod = 0; nod < numNodes; nod++) {
        data->getValue(0, ent, ele, nod, 0, dx[nod]);
        data->getValue(0, ent, ele, nod, 1, dy[nod]);
        data->getValue(0, ent, ele, nod, 2, dz[nod]);
        data->getNode(0, ent, ele, nod, nx[nod], ny[nod], nz[nod]);
      }
      double d;
      SPoint3 p1(nx[0] + dx[0], ny[0] + dy[0], nz[0] + dz[0]);
      SPoint3 p2(nx[1] + dx[1], ny[1] + dy[1], nz[1] + dz[1]);
      SPoint3 closePt;
      if(numNodes == 2) {
        // Warning: this is currently NOT signed!
        signedDistancePointLine(p1, p2, p, d, closePt);
      }
      else if(numNodes == 3) {
        SPoint3 p3(nx[2] + dx[2], ny[2] + dy[2], nz[2] + dz[2]);
        signedDistancePointTriangle(p1, p2, p3, p, d, closePt);
      }
      dist = std::min(dist, d);
    }
  }

  V->Type = SCALAR ;
  V->Val[0] = dist;
  V->Val[MAX_DIM] = 0.;
  for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

#else

void F_Field(F_ARG)
{
  Message::Error("You need to compile GetDP with Gmsh support to use Field[]");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

static void F_X_Field(F_ARG, int type, bool complex, bool grad=false)
{
  Message::Error("You need to compile GetDP with Gmsh support to use Field[]");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

void F_Distance(F_ARG)
{
  Message::Error("You need to compile GetDP with Gmsh support to use Distance[]");
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

void F_GradScalarField(F_ARG){ F_X_Field(Fct, A, V, SCALAR, false, true); }
void F_GradVectorField(F_ARG){ F_X_Field(Fct, A, V, VECTOR, false, true); }
void F_GradComplexScalarField(F_ARG){ F_X_Field(Fct, A, V, SCALAR, true, true); }
void F_GradComplexVectorField(F_ARG){ F_X_Field(Fct, A, V, VECTOR, true, true); }
