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

#include <iostream>
#include "Cal_Value.h"

#if defined(HAVE_MPI)
#include <mpi.h>
#endif

#if defined(HAVE_GMSH)
#include <gmsh.h>
#endif

#define STRING_SIZE  256

int Operation_CheckVariables(struct Resolution  *Resolution_P,
                                 struct Operation   *Operation_P,
                                 struct DofData     *DofData_P0,
                                 struct GeoData     *GeoData_P0)
{

  int commsize = Message::GetCommSize();
  int commrank = Message::GetCommRank();
  Message::Info("CheckVariables: rank %d (size %d)", commrank, commsize);

  FILE    *fp = stdout;
  std::map<std::string, struct Value> &values = Get_AllValueSaved();

  for(std::map<std::string, struct Value>::iterator it = values.begin();
      it != values.end(); it++){
    //char *cstr = new char[it->first.length() + 1]; strcpy(cstr, it->first.c_str()); Message::Info(0, "CheckVariables: %s\n", cstr);
    std::cout << "rank " << commrank << " " << it->first<<": ";
    Print_Value(&it->second, fp);
  }
  //getchar();
  return 0;
}

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

int Operation_GatherVariables(struct Resolution  *Resolution_P,
                                 struct Operation   *Operation_P,
                                 struct DofData     *DofData_P0,
                                 struct GeoData     *GeoData_P0)
{
  Message::Info("GatherVariables is noop without MPI");
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

int Operation_GatherVariables(struct Resolution  *Resolution_P,
                                 struct Operation   *Operation_P,
                                 struct DofData     *DofData_P0,
                                 struct GeoData     *GeoData_P0)
{

  int commsize = Message::GetCommSize();
  int commrank = Message::GetCommRank();
  Message::Info("GatherVariables: rank %d (size %d)", commrank, commsize);

  int Allgather=1;
  if (Operation_P->Case.GatherVariables.to<-1 ||
      Operation_P->Case.GatherVariables.to>commsize-1){
    Message::Warning("GatherVariables: impossible to Gather towards rank %d which does not exist "
                     "=> GatherVariables is aborted", 
      Operation_P->Case.GatherVariables.to);
    return 0;
  }
  else if (Operation_P->Case.GatherVariables.to!=-1)
    Allgather=0;

  std::map<std::string, struct Value> &values = Get_AllValueSaved();


/////////////////////////////////////////////////////////////////////////////////////
// Identify Valid Variable names to gather ...
/////////////////////////////////////////////////////////////////////////////////////
  std::vector<std::string> names;
  for(unsigned int i = 0; i < List_Nbr(Operation_P->Case.GatherVariables.Names); i++){
    char *s;
    List_Read(Operation_P->Case.GatherVariables.Names, i, &s);
    //if(values.find(s) != values.end())
    //  names.push_back(s);
    //else if (numid && '_'==s[strlen(s)-1])
    {
      for(unsigned int j = 0; j < List_Nbr(Operation_P->Case.GatherVariables.id); j++){
        char sidj[STRING_SIZE];
        strncpy(sidj, s, sizeof(sidj));
        double idj;
        List_Read(Operation_P->Case.GatherVariables.id, j, &idj);
        char cidj[STRING_SIZE];
        snprintf(cidj, sizeof(cidj), "_%g", idj); 
        strcat(sidj, cidj);
        if(values.find(sidj) != values.end())
          names.push_back(sidj);
        else
          Message::Warning("GatherVariables: Unknown variable %s", sidj);
      }
    }
    //else
    //  Message::Warning("GatherVariables: Unknown variable %s", s);  
  }
  if(names.empty()){
    Message::Warning("GatherVariables: No known variable given to gather ",
                     "=> GatherVariables is aborted");
    return 0;
    //for(std::map<std::string, struct Value>::iterator it = values.begin();
    //    it != values.end(); it++)
    //  names.push_back(it->first);
  }
  int numVar = names.size();
  //Message::Warning("GatherVariables: number of variables= %d", numVar);

  /////////////////////////////////////////////////////////////////////////////////////
  // Build vectors: vnames, vtypes, vvals ...
  /////////////////////////////////////////////////////////////////////////////////////
  int vnamessize = numVar*STRING_SIZE;
  char *vnames;
  vnames= new char[vnamessize];
  int *vtypes;
  vtypes = new int[numVar];
  double *vvals;
  vvals= new double[numVar*NBR_MAX_HARMONIC * MAX_DIM];
  for(unsigned int i = 0; i < numVar; i++){
    strncpy(&(vnames[i*STRING_SIZE]), names[i].c_str(), STRING_SIZE);
    struct Value &v = values[&(vnames[i*STRING_SIZE])];
    vtypes[i]= v.Type;
    for(unsigned int k = 0; k < NBR_MAX_HARMONIC * MAX_DIM; k++)
      vvals[i*NBR_MAX_HARMONIC * MAX_DIM + k]=v.Val[k]; 
  }

  /////////////////////////////////////////////////////////////////////////////////////
  // Prepare Gather ...
  /////////////////////////////////////////////////////////////////////////////////////
  int numVartot, *vnumVar_gathered;
  //int *vnamessizes; //(v1) //vnamessizes could be gathered (v1) or deduced from vnumVar_gathered and STRING_SIZE (v2)

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to) {
    vnumVar_gathered    = new int[commsize];
    //vnamessizes = new int[commsize]; // (v1)
  }

  if (Allgather) {
    MPI_Allreduce(&numVar, &numVartot,1, MPI_INT, MPI_SUM, MPI_COMM_WORLD);  
    MPI_Allgather(&numVar, 1, MPI_INT, vnumVar_gathered,1,MPI_INT,MPI_COMM_WORLD); 
    //MPI_Allgather(&vnamessize,1, MPI_INT, vnamessizes, 1, MPI_INT, MPI_COMM_WORLD); // (v1)
  }
  else {
    MPI_Reduce(&numVar,&numVartot,1,MPI_INT, MPI_SUM, Operation_P->Case.GatherVariables.to, MPI_COMM_WORLD);
    MPI_Gather( &numVar,1,MPI_INT, vnumVar_gathered, 1, MPI_INT, Operation_P->Case.GatherVariables.to, MPI_COMM_WORLD);  
    //MPI_Gather(&vnamessize,1,MPI_INT,vnamessizes,1,MPI_INT,Operation_P->Case.GatherVariables.to,MPI_COMM_WORLD); // (v1)
  }

  /////////////////////////////////////////////////////////////////////////////////////
  // Gather vnames vectors in vnames_gathered ...
  /////////////////////////////////////////////////////////////////////////////////////
  char *vnames_gathered;
  int *vnamessizes, // (v2)
      *vnamesdispls;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to){
    vnames_gathered = new char[numVartot*STRING_SIZE];
    vnamessizes     = new int[commsize]; // (v2)
    vnamesdispls    = new int[commsize];

    for(int i = 0; i < commsize; i++) // (v2)
      vnamessizes[i]=vnumVar_gathered[i]*STRING_SIZE; // (v2)

    vnamesdispls[0]=0;
    for(int i = 1; i < commsize; i++)
      vnamesdispls[i]=vnamesdispls[i-1]+vnamessizes[i-1];
  }

  if (Allgather)
    MPI_Allgatherv(vnames,vnamessize,MPI_SIGNED_CHAR,vnames_gathered, vnamessizes, vnamesdispls,MPI_SIGNED_CHAR,MPI_COMM_WORLD); // Build vnames_gathered (needs vnames (ok), vnamessizes, vnamesdispls) !!!
  else
    MPI_Gatherv(vnames,vnamessize,MPI_SIGNED_CHAR,vnames_gathered, vnamessizes, vnamesdispls,MPI_SIGNED_CHAR,Operation_P->Case.GatherVariables.to,MPI_COMM_WORLD);

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to) {
    delete [] vnames;
    delete [] vnamessizes;
    delete [] vnamesdispls;
  }

  /////////////////////////////////////////////////////////////////////////////////////
  // Gather vvals vectors in vvals_gathered ...
  /////////////////////////////////////////////////////////////////////////////////////
  double *vvals_gathered;
  int *vvalssizes,
      *vvaldispls;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to) {
    vvals_gathered = new double[numVartot*NBR_MAX_HARMONIC * MAX_DIM]; 
    vvalssizes     = new int[commsize];
    vvaldispls     = new int[commsize];

    for(int i = 0; i < commsize; i++)
      vvalssizes[i]=vnumVar_gathered[i]*NBR_MAX_HARMONIC * MAX_DIM; 

    vvaldispls[0]=0;
    for(int i = 1; i < commsize; i++)
      vvaldispls[i]=vvaldispls[i-1]+vvalssizes[i-1];
  }

  if (Allgather)
    MPI_Allgatherv(vvals,numVar*NBR_MAX_HARMONIC * MAX_DIM, MPI_DOUBLE, vvals_gathered, vvalssizes, vvaldispls, MPI_DOUBLE, MPI_COMM_WORLD);
  else
    MPI_Gatherv(vvals,numVar*NBR_MAX_HARMONIC * MAX_DIM, MPI_DOUBLE, vvals_gathered, vvalssizes, vvaldispls, MPI_DOUBLE, Operation_P->Case.GatherVariables.to, MPI_COMM_WORLD);

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to){
    delete [] vvals;
    delete [] vvalssizes;
    delete [] vvaldispls;
  }

  /////////////////////////////////////////////////////////////////////////////////////
  // Gather vtypes vectors in vtypes_gathered ...
  /////////////////////////////////////////////////////////////////////////////////////
  int *vtypes_gathered,
      *vtypedispls;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to){
    vtypes_gathered = new int[numVartot];
    //vtypessizes = vnumVar_gathered which is already known at this stage
    vtypedispls     = new int[commsize];

    vtypedispls[0]=0;
    for(int i = 1; i < commsize; i++)
      vtypedispls[i]=vtypedispls[i-1]+vnumVar_gathered[i-1];
  }

  if (Allgather)
    MPI_Allgatherv(vtypes,numVar,MPI_INT, vtypes_gathered, vnumVar_gathered, vtypedispls, MPI_INT, MPI_COMM_WORLD);
  else
    MPI_Gatherv(vtypes,numVar,MPI_INT, vtypes_gathered, vnumVar_gathered, vtypedispls, MPI_INT, Operation_P->Case.GatherVariables.to,MPI_COMM_WORLD);

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to){
    delete [] vtypes;
    delete [] vnumVar_gathered;
    delete [] vtypedispls;
  }

  /////////////////////////////////////////////////////////////////////////////////////
  // Update Variables from gathered vectors
  /////////////////////////////////////////////////////////////////////////////////////
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to){
    for(unsigned int i = 0; i < numVartot; i++){
      struct Value v;
      v.Type = vtypes_gathered[i];
      for(unsigned int k = 0; k < NBR_MAX_HARMONIC * MAX_DIM; k++)
        v.Val[k]=vvals_gathered[i*NBR_MAX_HARMONIC * MAX_DIM+k];
      values[&(vnames_gathered[i*STRING_SIZE])]=v;
    }

    delete [] vtypes_gathered; 
    delete [] vnames_gathered; 
    delete [] vvals_gathered; 
  }

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

  if (Operation_P->Case.BroadcastVariables.from<-1 ||
      Operation_P->Case.BroadcastVariables.from>commsize-1)
    Message::Warning("BroadcastVariables: impossible to Broadcast from rank %d which does not exist", 
      Operation_P->Case.BroadcastVariables.from);

  std::map<std::string, struct Value> &values = Get_AllValueSaved();

  std::vector<std::string> names;
  for(unsigned int i = 0; i < List_Nbr(Operation_P->Case.BroadcastVariables.Names); i++){
    char *s;
    List_Read(Operation_P->Case.BroadcastVariables.Names, i, &s);
    if(values.find(s) != values.end())
      names.push_back(s);
    else
      Message::Warning("BroadcastVariables: Unknown variable %s", s);
  }
  if(names.empty()){
    for(std::map<std::string, struct Value>::iterator it = values.begin();
        it != values.end(); it++)
      names.push_back(it->first);
  }

  // TODO: this should probably be implemented using MPI_Allgatherv
  //http://mpitutorial.com/tutorials/mpi-scatter-gather-and-allgather/
  //http://mpitutorial.com/tutorials/mpi-broadcast-and-collective-communication/


  for(int rank = 0; rank < commsize; rank++){
    if (Operation_P->Case.BroadcastVariables.from==-1 ||
        rank==Operation_P->Case.BroadcastVariables.from ){
      if(rank == commrank){
        int numValues = names.size();
        MPI_Bcast(&numValues, 1, MPI_INT, rank, MPI_COMM_WORLD);
        for(unsigned int i = 0; i < names.size(); i++){
          char key[STRING_SIZE];
          strncpy(key, names[i].c_str(), sizeof(key));
          //Message::Warning("I am %d Sending %s from %d", commrank, key, rank);
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
        for(unsigned int i = 0; i < numValues; i++){
          char key[STRING_SIZE];
          MPI_Bcast(key, sizeof(key), MPI_SIGNED_CHAR, rank, MPI_COMM_WORLD);
          //Message::Warning("I am %d Receving %s from %d", commrank, key, rank);
          struct Value v;
          MPI_Bcast(&v.Type, 1, MPI_INT, rank, MPI_COMM_WORLD);
          MPI_Bcast(&v.Val, NBR_MAX_HARMONIC * MAX_DIM, MPI_DOUBLE,
                    rank, MPI_COMM_WORLD);
          values[key] = v;
        }
      }
    }
    else
    {
       //Message::Warning("I am %d and I do nothing from rank=%d", commrank, rank);
    }
  }

  /*
  if (0) {
  for(int rank = 0; rank < commsize; rank++){
    if (Operation_P->Case.BroadcastVariables.from==-1 ||
        rank==Operation_P->Case.BroadcastVariables.from ){

      int numValues;
      if(rank == commrank)
        numValues = names.size();   
      MPI_Bcast(&numValues, 1, MPI_INT, rank, MPI_COMM_WORLD);

      for(unsigned int i = 0; i < names.size(); i++){
        char key[STRING_SIZE];
        struct Value v;
        if(rank == commrank){
          strncpy(key, names[i].c_str(), sizeof(key));
          v = values[key];
        }
        MPI_Bcast(key, sizeof(key), MPI_SIGNED_CHAR, rank, MPI_COMM_WORLD);
        MPI_Bcast(&v.Type, 1, MPI_INT, rank, MPI_COMM_WORLD);
        MPI_Bcast(&v.Val, NBR_MAX_HARMONIC * MAX_DIM, MPI_DOUBLE,
                  rank, MPI_COMM_WORLD);
        if(rank != commrank)
          values[key] = v;
      }
    }
  }
  } //endif(0)
  */

  return 0;
}

#endif
