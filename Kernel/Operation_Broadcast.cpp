// GetDP - Copyright (C) 1997-2019 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <set>
#include <stdio.h>
#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "SolvingOperations.h"
#include "Message.h"

#if defined(HAVE_MPI)
#include <mpi.h>
#endif

#if defined(HAVE_GMSH)
#include <gmsh.h>
#endif

#if !defined(HAVE_MPI)

int Operation_BroadcastFieldsGeneric(struct Resolution  *Resolution_P,
                                     struct Operation   *Operation_P,
                                     struct DofData     *DofData_P0,
                                     struct GeoData     *GeoData_P0)
{
  Message::Info("BroacastFields is noop without MPI");
  return 0;
}

int Operation_BroadcastVariables(struct Resolution  *Resolution_P,
                                 struct Operation   *Operation_P,
                                 struct DofData     *DofData_P0,
                                 struct GeoData     *GeoData_P0)
{
  Message::Info("BroacastVariables is noop without MPI");
  return 0;
}

#else

int Operation_BroadcastFieldsGeneric(struct Resolution  *Resolution_P,
                                     struct Operation   *Operation_P,
                                     struct DofData     *DofData_P0,
                                     struct GeoData     *GeoData_P0)
{
  // Operation_BroadCastFields was originally design to work exclusively within
  // the context of Operation_IterativeLinearSolver. This new version is
  // generic, and uses the new Gmsh API.

  if(Message::GetCommSize() == 1){
    Message::Info("Nothing to broacast: communicator size is 1");
    return 0;
  }

  std::set<int> viewTags;
  for(int i = 0; i < List_Nbr(Operation_P->Case.BroadcastFields.ViewTags); i++){
    double j;
    List_Read(Operation_P->Case.BroadcastFields.ViewTags, i, &j);
    viewTags.insert((int)j);
  }
  if(viewTags.size())
    Message::Info("Will broadcast %d fields", viewTags.size());
  else
    Message::Info("Will broadcast all fields");

  int commsize = Message::GetCommSize();
  int commrank = Message::GetCommRank();
  Message::Info("BroadcastFields: rank %d (size %d)", commrank, commsize);

#if defined(HAVE_GMSH)
  // do the job!
#endif
  return 0;
}

int Operation_BroadcastVariables(struct Resolution  *Resolution_P,
                                 struct Operation   *Operation_P,
                                 struct DofData     *DofData_P0,
                                 struct GeoData     *GeoData_P0)
{
  int commsize = Message::GetCommSize();
  int commrank = Message::GetCommRank();
  Message::Info("BroadcastFields: rank %d (size %d)", commrank, commsize);

  // TODO!
  return 0;
}

#endif
