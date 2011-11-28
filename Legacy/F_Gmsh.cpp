// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

extern struct CurrentData Current ;

#if defined(HAVE_GMSH)

#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>

void F_View(F_ARG)
{
  for (int k = 0; k < Current.NbrHar; k++)
    for (int j = 0; j < 9; j++)
      V->Val[MAX_DIM * k + j] = 0. ;
  V->Type = SCALAR;

  if(A->Type != VECTOR){
    Message::Error("View[] expects XYZ coordinates as argument");
    return;
  }
  double x = A->Val[0];
  double y = A->Val[1];
  double z = A->Val[2];

  int iview = PView::list.size() - 1; // use last view by default
  if(Fct->NbrParameters) iview = Fct->Para[0];

  if(iview < 0 || iview >= PView::list.size()){
    Message::Error("View[%d] does not exist", iview);
    return;
  } 

  PViewData *data = PView::list[iview]->getData();

  std::vector<double> val(9 * data->getNumTimeSteps());
  if(data->searchScalar(x, y, z, &val[0])){
    V->Val[0] = val[0];
    if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1)
      V->Val[MAX_DIM] = val[1];
    V->Type = SCALAR;
  }
  else if(data->searchVector(x, y, z, &val[0])){
    for(int j = 0; j < 3; j++)
      V->Val[j] = val[j];
    if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1){
      for(int j = 0; j < 3; j++)
        V->Val[MAX_DIM + j] = val[3 + j];
    }
    V->Type = VECTOR;
  }
  else if(data->searchTensor(x, y, z, &val[0])){
    for(int j = 0; j < 9; j++)
      V->Val[j] = val[j];
    if(Current.NbrHar == 2 && data->getNumTimeSteps() > 1){
      for(int j = 0; j < 9; j++)
        V->Val[MAX_DIM + j] = val[9 + j];
    }
    V->Type = TENSOR;
  }
  else{
    Message::Error("Did not find data in View[%d] at point (%g,%g,%g)",
                   iview, x, y, z);
  }
}

#else

void F_View(F_ARG)
{
  Message::Error("You need to compile GetDP with Gmsh support to use 'View'");
  V->Val[0] = 0. ;
  V->Type = SCALAR ;
}

#endif
