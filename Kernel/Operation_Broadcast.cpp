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

  int numid = List_Nbr(Operation_P->Case.GatherVariables.id);

  int Allgather=1;
  if (Operation_P->Case.GatherVariables.to<-1 ||
      Operation_P->Case.GatherVariables.to>commsize-1)
    Message::Warning("GatherVariables: impossible to Gather towards " 
                     "rank %d which does not exist => Gather All and distribute to All", 
      Operation_P->Case.GatherVariables.to);
  else if (Operation_P->Case.GatherVariables.to!=-1)
    Allgather=0;

  std::map<std::string, struct Value> &values = Get_AllValueSaved();

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
  std::vector<std::string> names;
  for(unsigned int i = 0; i < List_Nbr(Operation_P->Case.GatherVariables.Names); i++){
    char *s;
    List_Read(Operation_P->Case.GatherVariables.Names, i, &s);
    //if(values.find(s) != values.end())
    //  names.push_back(s);
    //else if (numid && '_'==s[strlen(s)-1])
    {
      for(unsigned int j = 0; j < numid; j++){
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
    Message::Warning("GatherVariables: No variable given to gather");
    return 0;
    for(std::map<std::string, struct Value>::iterator it = values.begin();
        it != values.end(); it++)
      names.push_back(it->first);
  }
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
  int numVar = names.size();
  //Message::Warning("GatherVariables: number of variables= %d", numVar);

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

  ///*
  for(int i = 0; i < numVar; i++){  
    Message::Warning("GatherVariables: %d Check Namequin= %s type=%d, val=%g %g %g", i, &(vnames[i*STRING_SIZE]), vtypes[i], *(vvals+i*NBR_MAX_HARMONIC * MAX_DIM+0), *(vvals+i*NBR_MAX_HARMONIC * MAX_DIM+1),*(vvals+i*NBR_MAX_HARMONIC * MAX_DIM+2));   
  }
  //*/

  int *vnamessize_gathered;

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
    vnamessize_gathered= new int[commsize];

  if (Allgather)
  {
    MPI_Allgather(
        &vnamessize,          // const void *sendbuf
        1,                    // int sendcount
        MPI_INT,              // MPI_Datatype sendtype
        vnamessize_gathered, // void *recvbuf
        1,                    // int recvcount
        MPI_INT,              // MPI_Datatype recvtype
        MPI_COMM_WORLD);      // MPI_Comm comm
  }
  else 
  {
    MPI_Gather(
        &vnamessize,          // const void *sendbuf
        1,                    // int sendcount
        MPI_INT,              // MPI_Datatype sendtype
        vnamessize_gathered, // void *recvbuf
        1,                    // int recvcount
        MPI_INT,              // MPI_Datatype recvtype
        Operation_P->Case.GatherVariables.to,  // int root
        MPI_COMM_WORLD);      // MPI_Comm comm
  }

  
  //for(int i = 0; i < commsize; i++)
  //Message::Warning("GatherVariables: Check after Allgather vnamessize_gathered : %d = %d", i, vnamessize_gathered[i]);

  int *vnumVar_gathered;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
    vnumVar_gathered= new int[commsize];

  if (Allgather)
  {
    MPI_Allgather(
        &numVar,           // const void *sendbuf
        1,                 // int sendcount
        MPI_INT,           // MPI_Datatype sendtype
        vnumVar_gathered, // void *recvbuf
        1,                 // int recvcount
        MPI_INT,           // MPI_Datatype recvtype
        MPI_COMM_WORLD);   // MPI_Comm comm
  }
  else 
  {
    MPI_Gather(
        &numVar,          // const void *sendbuf
        1,                    // int sendcount
        MPI_INT,              // MPI_Datatype sendtype
        vnumVar_gathered, // void *recvbuf
        1,                    // int recvcount
        MPI_INT,              // MPI_Datatype recvtype
        Operation_P->Case.GatherVariables.to,  // int root
        MPI_COMM_WORLD);      // MPI_Comm comm
  } 

  //for(int i = 0; i < commsize; i++)
  //Message::Warning("GatherVariables: Check after Allgather vnumVar_gathered %d = %d", i, vnumVar_gathered[i]);


  int numVartot;

  if (Allgather)
  {
    MPI_Allreduce(
        &numVar,
        &numVartot,
        1,
        MPI_INT,
        MPI_SUM,
        MPI_COMM_WORLD);
  }
  {
    MPI_Reduce(
        &numVar,
        &numVartot,
        1,
        MPI_INT,
        MPI_SUM,
        Operation_P->Case.GatherVariables.to,
        MPI_COMM_WORLD);
  }



  //Message::Warning("GatherVariables: Check idtot= %d", numVartot);
  /*
  int numVartot_bad=0;
  for(int i = 0; i < commsize; i++)
    numVartot_bad+=vnumVar_gathered[i];
  Message::Warning("GatherVariables: numVartot= %d ; numVartot_bad=%d", numVartot, numVartot_bad);
  */

  char *vnames_gathered;

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
    vnames_gathered= new char[numVartot*STRING_SIZE];

  int *vnamesdispls;

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
  {
    vnamesdispls= new int[commsize];
    vnamesdispls[0]=0;
    for(int i = 1; i < commsize; i++)
      vnamesdispls[i]=vnamesdispls[i-1]+vnamessize_gathered[i-1];
  }

  /*
  Message::Warning("GatherVariables: Check vnamessize %d", vnamessize);
  for(int i = 0; i < commsize; i++)
  {

    Message::Warning("GatherVariables: Check vnamessize_gathered %d: %d", i, vnamessize_gathered[i]);
    Message::Warning("GatherVariables: Check vnamesdispls %d: %d", i, vnamesdispls[i]);
  }
  */

  if (Allgather)
  {
    MPI_Allgatherv( 
      vnames,             //void * sendbuff, 
      vnamessize,          //int sendcount, 
      MPI_SIGNED_CHAR,     //MPI_Datatype sendtype, 
      vnames_gathered,    //void * recvbuf, 
      vnamessize_gathered, //int * recvcounts, 
      vnamesdispls,        //int * displs, 
      MPI_SIGNED_CHAR,     //MPI_Datatype recvtype, 
      MPI_COMM_WORLD       //MPI_Comm comm
      );
  }
  else
  {
    MPI_Gatherv( 
      vnames,             //void * sendbuff, 
      vnamessize,          //int sendcount, 
      MPI_SIGNED_CHAR,     //MPI_Datatype sendtype, 
      vnames_gathered,    //void * recvbuf, 
      vnamessize_gathered, //int * recvcounts, 
      vnamesdispls,        //int * displs, 
      MPI_SIGNED_CHAR,     //MPI_Datatype recvtype, 
      Operation_P->Case.GatherVariables.to,  // int root
      MPI_COMM_WORLD       //MPI_Comm comm
      );
  }

  //for(int i = 0; i < numVar; i++)
  //  Message::Warning("GatherVariables: Check loc vnames %d: %s", i, vnames[i]);

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
  {
    for(int i = 0; i < numVartot; i++)
    {
      Message::Warning("GatherVariables: Check after Allgatherv vnames_gathered %d: %s", i, (&vnames_gathered[i*STRING_SIZE]));
    }
  }

  int *vvalssize_gathered;

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
  {
    vvalssize_gathered= new int[commsize];
    for(int i = 0; i < commsize; i++)
      vvalssize_gathered[i]=vnumVar_gathered[i]*NBR_MAX_HARMONIC * MAX_DIM; 
  }



  int *vvaldispls;

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
  {
    vvaldispls= new int[commsize];

    vvaldispls[0]=0;
    for(int i = 1; i < commsize; i++)
      vvaldispls[i]=vvaldispls[i-1]+vvalssize_gathered[i-1];
  }

  double *vvalsall;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)  
    vvalsall= new double[numVartot*NBR_MAX_HARMONIC * MAX_DIM]; 



  if (Allgather)
  {
    MPI_Allgatherv( 
      vvals,                             //void * sendbuff, 
      numVar*NBR_MAX_HARMONIC * MAX_DIM,  //int sendcount, 
      MPI_DOUBLE,                         //MPI_Datatype sendtype, 
      vvalsall,                          //void * recvbuf, 
      vvalssize_gathered,                 //int * recvcounts, 
      vvaldispls,                         //int * displs, 
      MPI_DOUBLE,                         //MPI_Datatype recvtype, 
      MPI_COMM_WORLD                      //MPI_Comm comm
      );
  }
  else
  {
    MPI_Gatherv( 
      vvals,                             //void * sendbuff, 
      numVar*NBR_MAX_HARMONIC * MAX_DIM,  //int sendcount, 
      MPI_DOUBLE,                         //MPI_Datatype sendtype, 
      vvalsall,                          //void * recvbuf, 
      vvalssize_gathered,                 //int * recvcounts, 
      vvaldispls,                         //int * displs, 
      MPI_DOUBLE,                         //MPI_Datatype recvtype, 
      Operation_P->Case.GatherVariables.to,  // int root
      MPI_COMM_WORLD                      //MPI_Comm comm
      );
  }

  int *vtypes_gathered;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
    vtypes_gathered= new int[numVartot];

  int *vtypedispls;
  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
  {
    vtypedispls= new int[commsize];
    vtypedispls[0]=0;
    for(int i = 1; i < commsize; i++)
      vtypedispls[i]=vtypedispls[i-1]+vnumVar_gathered[i-1];
  }

  if (Allgather)
  {
    MPI_Allgatherv( 
      vtypes,          //void * sendbuff, 
      numVar,           //int sendcount, 
      MPI_INT,          //MPI_Datatype sendtype, 
      vtypes_gathered, //void * recvbuf, 
      vnumVar_gathered, //int * recvcounts, 
      vtypedispls,      //int * displs, 
      MPI_INT,          //MPI_Datatype recvtype, 
      MPI_COMM_WORLD    //MPI_Comm comm
      );
  }
  else
  {
    MPI_Gatherv( 
      vtypes,          //void * sendbuff, 
      numVar,           //int sendcount, 
      MPI_INT,          //MPI_Datatype sendtype, 
      vtypes_gathered, //void * recvbuf, 
      vnumVar_gathered, //int * recvcounts, 
      vtypedispls,      //int * displs, 
      MPI_INT,          //MPI_Datatype recvtype,
      Operation_P->Case.GatherVariables.to,  // int root 
      MPI_COMM_WORLD    //MPI_Comm comm
      );
  }

  //for(int i = 0; i < numVartot; i++)
  //  Message::Warning("GatherVariables: Check after Allgatherv vnames_gathered %d : %s",i,vnames_gathered[i]);

  //for(int i = 0; i < numVartot; i++)
  //  Message::Warning("GatherVariables: Check after Allgatherv vnames_gathered %d: %s, type=%d, val=%g %g %g", i, vnames_gathered[i], vtypes_gathered[i], vvalsall[i][0], vvalsall[i][1], vvalsall[i][2]);

  if (Allgather || commrank==Operation_P->Case.GatherVariables.to)
  {
    for(unsigned int i = 0; i < numVartot; i++){
      struct Value v;
      v.Type = vtypes_gathered[i];
      for(unsigned int k = 0; k < NBR_MAX_HARMONIC * MAX_DIM; k++)
        v.Val[k]=vvalsall[i*NBR_MAX_HARMONIC * MAX_DIM+k];
      values[&(vnames_gathered[i*STRING_SIZE])]=v;
    }



    delete[] vnames;
    delete[] vtypes;
    delete[] vvals;

    delete [] vnamessize_gathered;
    delete [] vnumVar_gathered;
    delete [] vnamesdispls;
    delete [] vvalssize_gathered;
    delete [] vvaldispls;
    delete [] vtypes_gathered;
    delete [] vtypedispls;

    delete [] vnames_gathered;
    delete [] vvalsall;

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
