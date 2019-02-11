// GetDP - Copyright (C) 1997-2019 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "SolvingOperations.h"
#include "Cal_Quantity.h"
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
  // Operation_BroadCastFields was originally designed to work exclusively
  // within the context of Operation_IterativeLinearSolver; that version is
  // quite sophisticated, as it allows to broadcast only to certain processors
  // (usually the neighbors in a domain decomposition method). This new version
  // is generic, and uses the new Gmsh API.

  int commsize = Message::GetCommSize();
  int commrank = Message::GetCommRank();

  if(commsize == 1){
    Message::Info("Nothing to broacast: communicator size is 1");
    return 0;
  }

#if !defined(HAVE_GMSH)
  Message::Error("GetDP must be compiled with Gmsh support for BroadcastFields");
#else

  std::vector<int> tags;
  for(int i = 0; i < List_Nbr(Operation_P->Case.BroadcastFields.ViewTags); i++){
    double j;
    List_Read(Operation_P->Case.BroadcastFields.ViewTags, i, &j);
    tags.push_back((int)j);
  }
  if(tags.empty()) // broadcast all views
    gmsh::view::getTags(tags);

  Message::Info(0, "BroadcastFields: %d fields from rank %d (comm. size %d)",
                tags.size(), commrank, commsize);

  // TODO: this should probably be implemented using MPI_Allgatherv

  for(int rank = 0; rank < commsize; rank++){
    if(rank == commrank){
      int numTags = tags.size();
      MPI_Bcast(&numTags, 1, MPI_INT, rank, MPI_COMM_WORLD);
      for(int t = 0; t < numTags; t++){
        int tag = tags[t];
        MPI_Bcast(&tag, 1, MPI_INT, rank, MPI_COMM_WORLD);
        std::vector<std::vector<double> > data;
        std::vector<std::string> dataTypes;
        std::vector<int> numElements;
        gmsh::view::getListData(tag, dataTypes, numElements, data);
        int numDataTypes = dataTypes.size();
        MPI_Bcast(&numDataTypes, 1, MPI_INT, rank, MPI_COMM_WORLD);
        for(unsigned int i = 0; i < dataTypes.size(); i++){
          char dataType[2] = {dataTypes[i][0], dataTypes[i][1]};
          MPI_Bcast(dataType, 2, MPI_SIGNED_CHAR, rank, MPI_COMM_WORLD);
          MPI_Bcast(&numElements[i], 1, MPI_INT, rank, MPI_COMM_WORLD);
          int numData = data[i].size();
          MPI_Bcast(&numData, 1, MPI_INT, rank, MPI_COMM_WORLD);
          MPI_Bcast(&data[i][0], data[i].size(), MPI_DOUBLE, rank, MPI_COMM_WORLD);
        }
      }
    }
    else{
      int numTags;
      MPI_Bcast(&numTags, 1, MPI_INT, rank, MPI_COMM_WORLD);
      for(int t = 0; t < numTags; t++){
        int tag;
        MPI_Bcast(&tag, 1, MPI_INT, rank, MPI_COMM_WORLD);
        gmsh::view::add("copy from rank " + std::to_string(rank) +
                        " to on rank " + std::to_string(commrank), tag);
        int numDataTypes;
        MPI_Bcast(&numDataTypes, 1, MPI_INT, rank, MPI_COMM_WORLD);
        for(int i = 0; i < numDataTypes; i++){
          char dataType[2];
          MPI_Bcast(dataType, 2, MPI_SIGNED_CHAR, rank, MPI_COMM_WORLD);
          int numElements;
          MPI_Bcast(&numElements, 1, MPI_INT, rank, MPI_COMM_WORLD);
          int numData;
          MPI_Bcast(&numData, 1, MPI_INT, rank, MPI_COMM_WORLD);
          std::vector<double> data(numData);
          MPI_Bcast(&data[0], data.size(), MPI_DOUBLE, rank, MPI_COMM_WORLD);
          gmsh::view::addListData(tag, dataType, numElements, data);
          gmsh::fltk::run();
        }
      }
    }
  }
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
  Message::Info("BroadcastVariables: rank %d (size %d)", commrank, commsize);

  std::map<std::string, struct Value> &values = Get_AllValueSaved();

  std::vector<std::string> names;
  for(int i = 0; i < List_Nbr(Operation_P->Case.BroadcastVariables.Names); i++){
    char *s;
    List_Read(Operation_P->Case.BroadcastVariables.Names, i, &s);
    if(values.find(s) != values.end())
      names.push_back(s);
    else
      Message::Error("Unknown variable %s", s);
  }
  if(names.empty()){
    for(std::map<std::string, struct Value>::iterator it = values.begin();
        it != values.end(); it++)
      names.push_back(it->first);
  }

  // TODO: this should probably be implemented using MPI_Allgatherv

  for(int rank = 0; rank < commsize; rank++){
    if(rank == commrank){
      int numValues = names.size();
      MPI_Bcast(&numValues, 1, MPI_INT, rank, MPI_COMM_WORLD);
      for(unsigned int i = 0; i < names.size(); i++){
        char key[256];
        strncpy(key, names[i].c_str(), sizeof(key));
        MPI_Bcast(key, sizeof(key), MPI_SIGNED_CHAR, rank, MPI_COMM_WORLD);
        struct Value &v = values[key];
        MPI_Bcast(&v.Type, 1, MPI_INT, rank, MPI_COMM_WORLD);
        MPI_Bcast(&v.Val, NBR_MAX_HARMONIC * MAX_DIM, MPI_DOUBLE,
                  rank, MPI_COMM_WORLD);
      }
    }
    else{
      int numValues;
      MPI_Bcast(&numValues, 1, MPI_INT, rank, MPI_COMM_WORLD);
      for(int i = 0; i < numValues; i++){
        char key[256];
        MPI_Bcast(key, sizeof(key), MPI_SIGNED_CHAR, rank, MPI_COMM_WORLD);
        struct Value v;
        MPI_Bcast(&v.Type, 1, MPI_INT, rank, MPI_COMM_WORLD);
        MPI_Bcast(&v.Val, NBR_MAX_HARMONIC * MAX_DIM, MPI_DOUBLE,
                  rank, MPI_COMM_WORLD);
        values[key] = v;
      }
    }
  }

  return 0;
}

#endif
