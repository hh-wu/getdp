// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributed by Bertrand Thierry

#include <stdio.h>
#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "SolvingOperations.h"
#include "Message.h"
#include "OS.h"

extern struct CurrentData Current ;

// for performance tests
//#define TIMER

#if defined(HAVE_PETSC) && defined(HAVE_GMSH)

#include "petscksp.h"
#include <gmsh/Gmsh.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>


#if ((PETSC_VERSION_RELEASE == 0) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 7)))
#define PetscViewerSetFormat(A, B) PetscViewerPushFormat(A, B)
#endif

static void _try(int ierr)
{
  CHKERRCONTINUE(ierr);
  if(PetscUnlikely(ierr)){
    const char *text;
    PetscErrorMessage(ierr, &text, 0);
    Message::Error("PETSc error: %s", text);
    Message::SetLastPETScError(ierr);
  }
}

class ILS{
  // A new communicator can be created. If some processes have no work they must
  // be excluded from the communicator to avoir dead-lock
 private:
  // current cpu number and total number of cpus
  static MPI_Comm _comm;
  static int _commRank, _commSize;
 public:
  static int GetCommRank(){ return _commRank; }
  static int GetCommSize(){ return _commSize; }
  static MPI_Comm GetComm(){ return _comm; }
};

MPI_Comm ILS::_comm = MPI_COMM_WORLD;
int ILS::_commRank = 0;
int ILS::_commSize = 1;

class ILSField{
 public:
  // number of Fields in this class
  PetscInt nb_field;
  // total number of elements of all fields in this class
  PetscInt n_elem;
  // GmshTag[j] = tag of field j (in getdp/gmsh, ie : outside IterativeLinearSolver)
  std::vector<PetscInt> GmshTag;
  // ILSTag[j] = local tag of field j in the function IterativeLinearSolver
  // (usefull for MyField).
  std::vector<PetscInt> ILSTag;
  // rank[j] is the mpi_rank of the process that owns field j
  std::vector<PetscInt> rank;
  // size[j] = nb of elements in the field j
  std::vector<PetscInt> size;
  // starting index in the Petsc Vec containing all the fields
  std::vector<PetscInt> iStart;
  // same as iStart but ending (a priori useless)
  std::vector<PetscInt> iEnd;
  // variables for transfering data with neighbors
  static bool areNeighbor;
  // number of field that this process must receive
  int nb_field_to_receive;
  std::vector<std::vector<PetscInt> > myN;
  // sizes of vectors of PView that this process is in charge
  std::vector<std::vector<PetscInt> > mySizeV;
  std::vector<std::vector<PetscInt> > theirN;
  std::vector<std::vector<PetscInt> > theirSizeV;
  // GmshTag of the fields that must be received by the current MPI processe
  // (concatenation of myNeighbor)
  std::vector<PetscInt>               FieldToReceive;
  // RankToSend[j] returns the rank to which the j^th local field must be sent
  std::vector<std::vector<PetscInt> > RankToSend;
  // CPU Time
  std::vector<double> TimeBcast, TimeIt, TimeTreatment;

  // The below function is useful to do a reverse search: Given the GmshTag of a
  // field (GetDP/GMSH) it returns its local tag in IterativeLinearSolver
  // (ILSTag) Indeed, ILS can renumber the field in another way than gmsh/getdp
  int GetILSTagFromGmshTag(int gTag)
  {
    for (int j = 0; j < nb_field ; j++)
      if(GmshTag[j] == gTag) return ILSTag[j];
    return -1; //error
  }
  int GetRankFromGmshTag(int gTag)
  {
    for (int j = 0; j < nb_field ; j++)
      if(GmshTag[j] == gTag) return rank[j];
    return -1; //error
  }
  int GetRankFromILSTag(int ilsTag)
  {
    for (int j = 0; j < nb_field ; j++)
      if(ILSTag[j] == ilsTag) return rank[j];
    return -1; //error
  }
  int GetGmshTagFromRank(int irank)
  {
    for (int j = 0; j < nb_field ; j++)
      if(rank[j] == irank) return GmshTag[j];
    return -1; //error
  }
};

bool ILSField::areNeighbor = false;

// pointers to MyField and AllField, valid while Operation_LinearIterativeSolver
// is running; This is used by Operation_BroadcastFields to explicitely
// braodcast the fields in the middle of an ILSMatVec call.
static ILSField *MyStaticField = 0, *AllStaticField = 0;

// Matrix Free structure (Matrix Shell)
typedef struct{
  char *LinearSystemType;
  ILSField *MyField;
  ILSField *AllField;
  struct Resolution *Resolution_P;
  struct Operation *Operation_P;
  struct DofData *DofData_P0;
  struct GeoData *GeoData_P0;
} ILSMat;

static PView *GetViewByTag(int tag)
{
  PView *view = PView::getViewByTag(tag);
  if(!view) Message::Error("View %d does not exist");
  return view;
}

static PetscErrorCode InitData(ILSField *MyField, ILSField *AllField,
                               struct Operation *Operation_P,
                               std::vector<std::vector<std::vector<double> > > *B_std)
{
  int mpi_comm_size = Message::GetCommSize();
  int mpi_comm_rank = Message::GetCommRank();
  std::vector<PetscInt> tab_nb_field_loc;
  std::vector<PetscInt> displs(mpi_comm_size);
  int counter = 0;

  // number of fields owned by me and the other tasks
  MyField->nb_field = List_Nbr(Operation_P->Case.IterativeLinearSolver.MyFieldTag);
  tab_nb_field_loc.resize(mpi_comm_size);
  MPI_Allgather(&MyField->nb_field, 1, MPI_INT, &tab_nb_field_loc[0],
                1, MPI_INT, PETSC_COMM_WORLD);

  AllField->nb_field = 0;
  for (int irank = 0 ; irank < mpi_comm_size ; irank ++)
    AllField->nb_field += tab_nb_field_loc[irank];

  // displacement vector (for MPI_AllGatherV)
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
  // ...and by the other tasks
  AllField->GmshTag.resize(AllField->nb_field);
  AllField->rank.resize(AllField->nb_field);
  AllField->ILSTag.resize(AllField->nb_field);
  for (int iField = 0; iField < AllField->nb_field ; iField ++)
    AllField->ILSTag[iField] = iField;
  MPI_Allgatherv(&MyField->GmshTag[0], MyField->nb_field, MPI_INT,
                 &AllField->GmshTag[0], &tab_nb_field_loc[0], &displs[0], MPI_INT,
                 PETSC_COMM_WORLD);
  MPI_Allgatherv(&MyField->rank[0], MyField->nb_field, MPI_INT,
                 &AllField->rank[0], &tab_nb_field_loc[0], &displs[0], MPI_INT,
                 PETSC_COMM_WORLD);

  // Now the (local) fields in RAM must be read
  (*B_std).resize(MyField->nb_field);
  MyField->n_elem = 0;
  MyField->size.resize(MyField->nb_field);
  for(int iField = 0; iField < MyField->nb_field; iField ++) {
    (*B_std)[iField].resize(2);
    int d;
    PView *view = GetViewByTag(MyField->GmshTag[iField]);
    view->getData()->toVector((*B_std)[iField]);
    d = (*B_std)[iField][0].size();
    MyField->size[iField] = d;
    MyField->n_elem += d;
  }

  // Share information on the size of the local fields with other tasks
  MPI_Allreduce(&MyField->n_elem, &AllField->n_elem, 1, MPI_INT,
                MPI_SUM, PETSC_COMM_WORLD);
  AllField->size.resize(AllField->nb_field);
  MPI_Allgatherv(&MyField->size[0], MyField->nb_field, MPI_INT,
                 &AllField->size[0], &tab_nb_field_loc[0], &displs[0], MPI_INT,
                 PETSC_COMM_WORLD);

  // Compute the starting/ending index in the futur Petsc Vec containing all the Gmsh fields
  AllField->iStart.resize(AllField->nb_field);
  AllField->iEnd.resize(AllField->nb_field);
  MyField->iStart.resize(MyField->nb_field);
  MyField->iEnd.resize(MyField->nb_field);
  AllField->iStart[0] = 0;
  counter = 0;
  for(int j = 0; j < AllField->nb_field; j++){
    if(j > 0)
      AllField->iStart[j] = AllField->iEnd[j-1] + 1;
    AllField->iEnd[j] = AllField->iStart[j] + AllField->size[j] - 1;
    // Store in MyField if I am in charge of the Field
    if(AllField->rank[j] == mpi_comm_rank){
      MyField->iStart[counter] = AllField->iStart[j];
      MyField->iEnd[counter] = AllField->iEnd[j];
      counter++;
    }
  }

  // Who are my Neighbors for the Broadcast ? At the time of writing, GetDP does
  // not manage 2D Lists. Thus, to act as-if, the list of neighbors is composed
  // as follows:
  //   NeighborFieldTag = {n_0, ... n_0 GmshTag ... , n_1,  ... n_1 GmshTag, ...}
  // For example, if
  //   MyFieldTag = {0, 3}
  //   NeighborFieldTag = {2, 5, 1, 3, 2, 4, 6}
  // This mean that current process is in charge of Field with GmshTag 0 and 7.
  // Field of GmshTag 0 has 2 neighbors : fields of GmshTag 5 and 1
  // Field of GmshTag 7 has 3 neighbors : fields of GmshTag 2, 4 and 6
  // (if GetDP changes and accepts lists of lists, then this trick should be useless
  // and changed !)
  int nNeighbor_aux = 0;
  nNeighbor_aux = List_Nbr(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag);

  // make every process agreed on whether there is neighbor or not
  if(mpi_comm_size < 2){
    ILSField::areNeighbor = false;
  }
  else{
    //suppose it's true
    ILSField::areNeighbor = true;
    //share info on neighbor
    int bool_neigh = (nNeighbor_aux > 0);
    std::vector<int> tab_bool_neigh(mpi_comm_size);
    MPI_Allgather(&bool_neigh, 1, MPI_INT, &tab_bool_neigh[0], 1,
                  MPI_INT, MPI_COMM_WORLD);
    for(int irank = 0; irank < mpi_comm_size ; irank ++)
      if(tab_bool_neigh[irank] == 0 && AllField->GetGmshTagFromRank(irank) >= 0)
        // if one process has no neighbord AND is charge of some fields (=is a worker)
        ILSField::areNeighbor = false;
  }

  if(ILSField::areNeighbor){
    int cpt_neigh = 0; // counter in list IterativeLinearSolver.NeighborFieldTag
    // for every field, RankToSend contain the rank of the process in need of
    // the field
    MyField->RankToSend.resize(MyField->nb_field);
    int cpt_send = 0;
    // over-sizing FieldToReceive, which contains the field that are needed by
    // this mpi process
    MyField->FieldToReceive.resize(AllField->nb_field - MyField->nb_field);
    int cpt_recv = 0;
    // read through every neighbors
    for(int ifield = 0 ; ifield < MyField->nb_field ; ifield++){
      double d;
      List_Read(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag,
                cpt_neigh, &d);
      int n_neigh = (int)d;
      cpt_send = 0;
      //at maximum n_neigh process to send this view
      MyField->RankToSend[ifield].resize(n_neigh);
      for(int j = 0; j < n_neigh ; j++){
        //counter in list NeighborFieldTag
        cpt_neigh ++;
        List_Read(Operation_P->Case.IterativeLinearSolver.NeighborFieldTag,
                  cpt_neigh, &d);
        int GmshTag_newneigh = (int)d;
        // Check if not already stored (either because this process is in charge
        // of the field or due to a doublon)
        bool isStored = false;
        for(int i = 0; i < MyField->nb_field ; i++){
          if(GmshTag_newneigh == MyField->GmshTag[i]){
            isStored = true;
            break;
          }
        }
        for(int i = 0; i < cpt_recv ; i++){
          if(GmshTag_newneigh == MyField->FieldToReceive[i]){
            isStored = true;
            break;
          }
        }
        // in case it's not already store
        if(!isStored){
          MyField->FieldToReceive[cpt_recv] = GmshTag_newneigh;
          cpt_recv++;
        }
        // check if stored in the table of Mpi processes which will receive this field
        isStored = false;
        int rank_new_neigh =
          AllField->rank[AllField->GetILSTagFromGmshTag(GmshTag_newneigh)];
        MyField->RankToSend[ifield].resize(n_neigh);
        // Maybe this process is in charge of this field..
        if(rank_new_neigh == mpi_comm_rank)
          isStored = true;
        else{ //...or maybe it is already stored ...
          for(int i = 0; i < cpt_send ; i++){
            if(rank_new_neigh == MyField->RankToSend[ifield][i]){
              isStored = true;
              break; }
          }
        }
        if(!isStored){ // not already stored
          MyField->RankToSend[ifield][cpt_send] = rank_new_neigh;
          cpt_send++;
        }
      }
      // resize
      MyField->RankToSend[ifield].resize(cpt_send);
      cpt_neigh++;
    }
    // resize
    MyField->FieldToReceive.resize(cpt_recv);
    MyField->nb_field_to_receive = cpt_recv;

    // Check and exchange information on the size of the PView
    // Exchange information on the size of the PView (Field) with the neighbors
    MyField->myN.resize(MyField->nb_field);
    MyField->mySizeV.resize(MyField->nb_field);
    std::vector< MPI_Request > tab_request(0);
    for (int mfield = 0 ; mfield < MyField->nb_field ; mfield ++){
      // Measure the size of the vectors of Field of local number mfield
      std::vector< std::vector<double>* > V(24);
      MyField->myN[mfield].resize(24);
      MyField->mySizeV[mfield].resize(24);
      int GmshTag = MyField->GmshTag[mfield];
      PView *view = GetViewByTag(GmshTag);
      view->getData()->getListPointers(&(MyField->myN[mfield][0]), &V[0]);
      for(int j = 0 ; j < 24 ; j++)
        MyField->mySizeV[mfield][j] = (*(V[j])).size();
      // Exchange information about the sizes (mySizeV and myN)
      int n_proc_to_send = MyField->RankToSend[mfield].size();
      for(int j = 0 ; j < n_proc_to_send ; j++){
        MPI_Request sendN, sendSizeV;
        int tagN = 10*GmshTag + 1;
        int tagSizeV = 10*GmshTag + 2;
        // send vector myN and mysizeV
        MPI_Isend(&(MyField->myN[mfield][0]), 24, MPI_INT,
                  MyField->RankToSend[mfield][j], tagN, MPI_COMM_WORLD, &sendN);
        MPI_Isend(&(MyField->mySizeV[mfield][0]), 24, MPI_INT,
                  MyField->RankToSend[mfield][j], tagSizeV, MPI_COMM_WORLD, &sendSizeV);
        tab_request.push_back(sendN);
        tab_request.push_back(sendSizeV);
      }
    }
    // Receive information from the other process
    MyField->theirN.resize(MyField->nb_field_to_receive);
    MyField->theirSizeV.resize(MyField->nb_field_to_receive);
    for (int ifield = 0 ; ifield < MyField->nb_field_to_receive ; ifield ++){
      MPI_Request recvN, recvSizeV;
      // receive information on vectors N and sizeV from the other
      int fieldGmshTag = MyField->FieldToReceive[ifield];
      int fieldILSTag = AllField->GetILSTagFromGmshTag(fieldGmshTag);
      int rank_emiter = AllField->rank[fieldILSTag];
      int tagN = 10*fieldGmshTag + 1;
      int tagSizeV = 10*fieldGmshTag + 2;
      // resize before receiving
      MyField->theirN[ifield].resize(24);
      MyField->theirSizeV[ifield].resize(24);
      // Receive
      MPI_Irecv(&(MyField->theirN[ifield][0]), 24, MPI_INT, rank_emiter, tagN,
                MPI_COMM_WORLD, &recvN);
      MPI_Irecv(&(MyField->theirSizeV[ifield][0]), 24, MPI_INT, rank_emiter, tagSizeV,
                MPI_COMM_WORLD, &recvSizeV);
      tab_request.push_back(recvN);
      tab_request.push_back(recvSizeV);
    }

    // check if reception is ok
    std::vector< MPI_Status > tab_status;
    MPI_Waitall(tab_request.size(), &tab_request[0], &tab_status[0]);
  }

  // keep track of fields for external use
  MyStaticField = MyField;
  AllStaticField = AllField;

  PetscFunctionReturn(0);
}

// Communicate PViews
static PetscErrorCode PViewBCast(ILSField MyField, ILSField AllField,
                                 const std::set<int> &fieldsToSkip=std::set<int>())
{
  if(Message::GetCommSize() == 1) // serial: all views are available to everyone
    PetscFunctionReturn(0);

  if(!(ILSField::areNeighbor)){
    // broadcast all views
    for (int iField = 0 ; iField < AllField.nb_field ; iField++){
      int GmshTag = AllField.GmshTag[iField];
      int fieldRank = AllField.rank[iField];
      std::vector< std::vector<double>* > V(24);
      std::vector<int> sizeV(24);
      std::vector<int> N(24);
      int masterRank = fieldRank;
      MPI_Comm fieldcomm = MPI_COMM_WORLD;
      int mpi_fieldcomm_rank = Message::GetCommRank();
      if(mpi_fieldcomm_rank == fieldRank){
        PView *view = GetViewByTag(GmshTag);
        view->getData()->getListPointers(&N[0], &V[0]);
        for(int j = 0 ; j < 24 ; j++)
          sizeV[j] = (*(V[j])).size();
      }
      // Transfer PView
      MPI_Bcast(&N[0], 24, MPI_INT, masterRank, fieldcomm);
      MPI_Bcast(&sizeV[0], 24, MPI_INT, masterRank, fieldcomm);
      for(int j = 0; j < 24 ; j ++){
        if(mpi_fieldcomm_rank != masterRank){
          V[j] = new std::vector<double>;
          (*(V[j])).resize(sizeV[j]);
        }
        if(sizeV[j] > 0) //avoid useless BCast
          MPI_Bcast(&(*(V[j]))[0], sizeV[j], MPI_DOUBLE, masterRank, fieldcomm);
      }
      // All other tasks of the communicator create/update the views
      if(mpi_fieldcomm_rank != masterRank){
        PView *view = new PView(GmshTag);
        view->getData()->importLists(&N[0], &V[0]);
        for(int j = 0 ; j < 24 ; j++)
          delete V[j] ;
      }
    }
  }
  else{
    // With a specification on the neighbors, asynchronous Send/Recv (only with
    // the neighbors)
    std::vector< MPI_Request > tab_request(0);
    // send my PView to my neighbors
    for (int ifield = 0 ; ifield < MyField.nb_field ; ifield ++){
      int GmshTag = MyField.GmshTag[ifield];
      // don't send field if explicitely asked to skip it
      if(fieldsToSkip.find(GmshTag) != fieldsToSkip.end()) continue;
      PView *view = GetViewByTag(GmshTag);
      std::vector< std::vector<double>* > V_send(24);
      std::vector<int> N(24);
      view->getData()->getListPointers(&N[0], &V_send[0]);
      for (int j = 0 ; j < 24 ; j ++){
        int tag = 100 * GmshTag + j;
        int n_data = MyField.mySizeV[ifield][j];
        if(n_data > 0){
          //Loop on the receiver
          for (unsigned int ineigh = 0 ; ineigh < MyField.RankToSend[ifield].size() ;
               ineigh ++){
            MPI_Request sendV;
            int receiver = MyField.RankToSend[ifield][ineigh];
            MPI_Isend(&(*(V_send[j]))[0], n_data, MPI_DOUBLE, receiver, tag,
                      MPI_COMM_WORLD, &sendV);
            tab_request.push_back(sendV);
            Message::Debug("Rank %d has sent %d", Message::GetCommRank(), GmshTag);
          }
        }
      }
    }
    //receive all the PView I need
    std::vector< std::vector< std::vector<double>* > > V_recv(MyField.nb_field_to_receive);
    for (int ifield = 0 ; ifield < MyField.nb_field_to_receive ; ifield ++){
      int GmshTag = MyField.FieldToReceive[ifield];
      // don't receive field if explicitely asked to skip it
      if(fieldsToSkip.find(GmshTag) != fieldsToSkip.end()) continue;
      int sender = AllField.GetRankFromGmshTag(GmshTag);
      V_recv[ifield].resize(24);
      std::vector<int> N(24);
      // allocate memory
      for (int j = 0 ; j < 24 ; j ++){
        V_recv[ifield][j] = new std::vector<double>;
        (*(V_recv[ifield][j])).resize(MyField.theirSizeV[ifield][j]);
      }
      for (int j = 0 ; j < 24 ; j ++){
        int n_data = MyField.theirSizeV[ifield][j];
        if(n_data > 0){
          MPI_Request recvV;
          int tag = 100*GmshTag + j;
          MPI_Irecv(&(*(V_recv[ifield][j]))[0], n_data, MPI_DOUBLE, sender, tag,
                    MPI_COMM_WORLD, &recvV);
          tab_request.push_back(recvV);
          Message::Debug("Rank %d has received %d", Message::GetCommRank(), GmshTag);
        }
      }
    }
    // check if reception is ok
    std::vector< MPI_Status > tab_status(tab_request.size());
    MPI_Waitall(tab_request.size(), &tab_request[0], &tab_status[0]);
    for (int ifield = 0 ; ifield < MyField.nb_field_to_receive ; ifield ++){
      int GmshTag = MyField.FieldToReceive[ifield];
      if(fieldsToSkip.find(GmshTag) != fieldsToSkip.end()) continue;
      PView *view = new PView(GmshTag);
      view->getData()->importLists(&MyField.theirN[ifield][0], &V_recv[ifield][0]);
      for (int j = 0 ; j < 24 ; j ++){
	delete V_recv[ifield][j];
      }
    }
  }
  PetscFunctionReturn(0);
}

// Copy a STD Vector (std_vec) to a PETSc VEc (petsc_vec)
// In fact, copy the local part only of the PETSc Vec
static PetscErrorCode STD_vector_to_PETSc_Vec
  (std::vector<std::vector<std::vector<double> > > std_vec,
   Vec petsc_vec, ILSField *Local)
{
  PetscInt nb_view = Local->nb_field;

  for (int cpt_view = 0; cpt_view < nb_view; cpt_view++){
    int nb_element = Local->size[cpt_view];
    std::vector<PetscScalar> val;
    std::vector<PetscInt> ix;
    if(Current.NbrHar == 2){
#if defined(PETSC_USE_COMPLEX)
      val.resize(nb_element);
      ix.resize(nb_element);
#else
      val.resize(2*nb_element);
      ix.resize(2*nb_element);
#endif
    }
    else{
      val.resize(nb_element);
      ix.resize(nb_element);
    }
    for (int i = 0 ; i < nb_element ; i++){
      if(Current.NbrHar == 2){
#if defined(PETSC_USE_COMPLEX)
        ix[i] = Local->iStart[cpt_view] + i;
        val[i] = std_vec[cpt_view][0][i] + PETSC_i*std_vec[cpt_view][1][i];
#else
        ix[2*i] = 2*Local->iStart[cpt_view] + 2*i;
        ix[2*i+1] = 2*Local->iStart[cpt_view] + 2*i+1;
        val[2*i] = std_vec[cpt_view][0][i];
        val[2*i+1] = std_vec[cpt_view][1][i];
#endif
      }
      else{
        ix[i] = Local->iStart[cpt_view] + i;
        val[i] = std_vec[cpt_view][0][i];
      }
    }
    if(Current.NbrHar == 2){
#if defined(PETSC_USE_COMPLEX)
      _try(VecSetValues(petsc_vec, nb_element, &ix[0], &val[0], INSERT_VALUES));
#else
      _try(VecSetValues(petsc_vec, 2*nb_element, &ix[0], &val[0], INSERT_VALUES));
#endif
    }
    else{
      _try(VecSetValues(petsc_vec, nb_element, &ix[0], &val[0], INSERT_VALUES));
    }
  }
  _try(VecAssemblyBegin(petsc_vec));
  _try(VecAssemblyEnd(petsc_vec));
  PetscBarrier((PetscObject)petsc_vec);
  PetscFunctionReturn(0);
}

// Copy Petsc Vec to a std::vector
// Send ONLY THE LOCAL Part of the PETSC VEC !
static PetscErrorCode PETSc_Vec_to_STD_Vec
  (Vec petsc_vec, ILSField *Local,
   std::vector<std::vector<std::vector<double> > > *std_vec)
{
  PetscScalar val;
  int nb_view = Local->nb_field;

  // initializing std_vec
  (*std_vec).resize(Local->nb_field);
  for (int cpt_view = 0 ; cpt_view < nb_view ; cpt_view++){
    int nb_elem = Local->size[cpt_view];
    if(Current.NbrHar == 2){
      (*std_vec)[cpt_view].resize(2);
      (*std_vec)[cpt_view][0].resize(nb_elem);
      (*std_vec)[cpt_view][1].resize(nb_elem);
    }
    else{
      (*std_vec)[cpt_view].resize(1);
      (*std_vec)[cpt_view][0].resize(nb_elem);
    }
  }

  for (int cpt_view = 0 ; cpt_view < nb_view ; cpt_view++){
    int nb_element = Local->size[cpt_view];
    int iStart = Local->iStart[cpt_view];
    for (int j = 0 ; j < nb_element ; j++) {
      int cpt = iStart + j;
      if(Current.NbrHar == 2){
#if defined(PETSC_USE_COMPLEX)
        _try(VecGetValues(petsc_vec, 1, &cpt, &val));
        (*std_vec)[cpt_view][0][j] = (double)PetscRealPart(val);
        (*std_vec)[cpt_view][1][j] = (double)PetscImaginaryPart(val);
#else
        int cpt2 = 2*iStart + 2*j;
        _try(VecGetValues(petsc_vec, 1, &cpt2, &val));
        (*std_vec)[cpt_view][0][j] = (double)(val);
        int cpt3 = 2*iStart + 2*j+1;
        _try(VecGetValues(petsc_vec, 1, &cpt3, &val));
        (*std_vec)[cpt_view][1][j] = (double)(val);
#endif
      }
      else{
        _try(VecGetValues(petsc_vec, 1, &cpt, &val));
        (*std_vec)[cpt_view][0][j] = (double)PetscRealPart(val);
      }
    }
  }
  PetscFunctionReturn(0);
}

// Initialize the MatShell Matrix
// Preallocate the memory
static PetscErrorCode CreateILSMat(ILSMat **shell)
{
  ILSMat *newctx;
  std::vector<PetscInt> vec_indice, vec_size;

  newctx = (ILSMat*)malloc(sizeof(ILSMat));
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

// Set data to the shell matrix contex
static PetscErrorCode SetILSMat(ILSMat **shell, char *LinearSystemType,
                                ILSField *MyField, ILSField *AllField,
                                struct Resolution *Resolution_P,
                                struct Operation *Operation_P,
                                struct DofData *DofData_P0,
                                struct GeoData *GeoData_P0)
{
  (*shell)->LinearSystemType = LinearSystemType;
  (*shell)->MyField = MyField;
  (*shell)->AllField = AllField;
  (*shell)->Resolution_P = Resolution_P;
  (*shell)->Operation_P = Operation_P;
  (*shell)->DofData_P0 = DofData_P0;
  (*shell)->GeoData_P0 = GeoData_P0;
  PetscFunctionReturn(0);
}

// User Matrix-vector product
static PetscErrorCode MatMultILSMat(Mat A, Vec X, Vec Y)
{
  std::vector<std::vector<std::vector<double> > > std_vec;
  ILSField MyField, AllField;
  ILSMat *ctx;
  char *LinearSystemType;

#ifdef TIMER
  double tBcast_start, tBcast_end;
  double tTreatment_start, tTreatment_end;
  double t_start = MPI_Wtime(), t_end;
#endif

  _try(MatShellGetContext(A, (void**)&ctx));
  LinearSystemType = ctx->LinearSystemType;

  // convert X to a std vector
  _try(PETSc_Vec_to_STD_Vec(X, ctx->MyField, &std_vec));

  // Update PViews
  for (int cpt_view = 0; cpt_view < ctx->MyField->nb_field; cpt_view++){
    PView *view = GetViewByTag(ctx->MyField->GmshTag[cpt_view]);
    view->getData()->fromVector(std_vec[cpt_view]);
  }

  // PVIEW BCAST
#ifdef TIMER
  tBcast_start = MPI_Wtime();
#endif
  PViewBCast(*(ctx->MyField), *(ctx->AllField));
#ifdef TIMER
  tBcast_end = MPI_Wtime();
#endif

  // Getdp resolution (contained in the matrix context)
  // Barrier to ensure that every process have the good data in RAM
#ifdef TIMER
  tTreatment_start = MPI_Wtime();
#endif
  Treatment_Operation(ctx->Resolution_P,
                      ctx->Operation_P->Case.IterativeLinearSolver.Operations_Ax,
                      ctx->DofData_P0,
                      ctx->GeoData_P0,
                      NULL, NULL);
#ifdef TIMER
  tTreatment_end = MPI_Wtime();
#endif

  // Extract the (std) vector from the (new) .pos files
  // This assumes that every process reads every .pos files
  for(int cpt_view = 0; cpt_view < ctx->MyField->nb_field; cpt_view++) {
    PView *view = GetViewByTag(ctx->MyField->GmshTag[cpt_view]);
    view->getData()->toVector(std_vec[cpt_view]);
  }

  // Convert the obtained vector to a Petsc Vec
  _try(STD_vector_to_PETSc_Vec(std_vec, Y, ctx->MyField));

  // Set Y = X - Y
  if(!strcmp(LinearSystemType,"I-A"))
    _try(VecAYPX(Y, -1.,X));
  else if(!strcmp(LinearSystemType,"I+A"))
    _try(VecAYPX(Y, 1.,X));

#ifdef TIMER
  // time computation
  t_end = MPI_Wtime();
  double t_MatMult, t_Bcast, t_Treatment;
  t_MatMult = t_end - t_start;
  t_Bcast = tBcast_end - tBcast_start;
  t_Treatment = tTreatment_end - tTreatment_start;
  ctx->MyField->TimeTreatment.push_back(t_Treatment);
  ctx->MyField->TimeBcast.push_back(t_Bcast);
  ctx->MyField->TimeIt.push_back(t_MatMult);
  Message::Info(3, "Processus %d ended iteration in %g seconds with %g for communication",
                Message::GetCommRank(), t_MatMult, t_Bcast);
#endif
  _try(PetscBarrier((PetscObject)PETSC_NULL));
  PetscFunctionReturn(0);
}

// Build the iteration matrix of the Matrix-free vector-product.
// Used to, e.g., study eigenvalues of the operators
static PetscErrorCode BuildIterationMatrix(Mat A, Mat *IterationMatrix)
{
  const PetscScalar one = 1., zero = 0.;
  PetscInt n_proc, m,n, m_loc, n_loc;
  PetscInt m_start, m_end, vec_m_start, vec_m_end;

  _try(MPI_Comm_size(PETSC_COMM_WORLD, &n_proc));
  _try(MatGetSize(A, &m, &n));
  _try(MatCreate(PETSC_COMM_WORLD, IterationMatrix));
  _try(MatSetSizes((*IterationMatrix), PETSC_DECIDE, PETSC_DECIDE, m, n));
  _try(MatSetType((*IterationMatrix), MATMPIAIJ));
  _try(MatSetFromOptions((*IterationMatrix)));
  _try(MatSetUp((*IterationMatrix)));
  _try(MatGetOwnershipRange((*IterationMatrix), &m_start, &m_end));
  _try(MatGetLocalSize((*IterationMatrix), &m_loc, &n_loc));
  _try(MatMPIAIJSetPreallocation((*IterationMatrix), m_loc, PETSC_NULL,
                                 n-m_loc, PETSC_NULL));
  std::vector<PetscInt> ix(m);
  for(PetscInt i = 0; i<m; i++)
    ix[i] = m_start + i;

  Vec ej, Aej;
  _try(VecCreateSeq(PETSC_COMM_SELF, m, &ej));
  _try(VecDuplicate(ej, &Aej));
  _try(VecGetOwnershipRange(ej, &vec_m_start, &vec_m_end));

  for(int cpt=0;cpt<n;cpt++){
    Message::Info(3, "Column number %d over %d", cpt, n-1);
    std::vector<PetscScalar> vec_temp(n);
    _try(VecSet(ej, zero));
    if(cpt >= vec_m_start && cpt<vec_m_end)
      _try(VecSetValues(ej, 1., &cpt, &one, INSERT_VALUES));
    _try(VecAssemblyBegin(ej));
    _try(VecAssemblyEnd(ej));
    _try(MatMultILSMat(A, ej, Aej));
    // storing it in a Matrix
    _try(VecGetValues(Aej, m_loc, &ix[0], &vec_temp[0]));
    _try(MatSetValues((*IterationMatrix), m_loc, &ix[0], 1, &cpt, &vec_temp[0],
                      INSERT_VALUES));
    if(cpt%100 == 0){ // flushing
      _try(MatAssemblyBegin((*IterationMatrix), MAT_FLUSH_ASSEMBLY));
      _try(MatAssemblyEnd((*IterationMatrix), MAT_FLUSH_ASSEMBLY));
    }
  }
  _try(MatAssemblyBegin((*IterationMatrix), MAT_FINAL_ASSEMBLY));
  _try(MatAssemblyEnd((*IterationMatrix), MAT_FINAL_ASSEMBLY));
  PetscFunctionReturn(0);
}

// Print Iteration Matrix into file_IterationMatrix.m (matlab reading)
static PetscErrorCode PrintMatrix(Mat A, const char* filename, const char* varname)
{
  // This function is copy/paste of function LinAlg_PrintMatrix function located
  // in Kernel/LinAlg_PETSC.cpp

  std::string tmp(filename);
  PetscInt m,n, m_max = 600;

  _try(PetscObjectSetName((PetscObject)A, varname));
  // ASCII (if the matrix is not too large)
  _try(MatGetSize(A, &m, &n));
  if(m < m_max){
    PetscViewer viewer;
    _try(PetscViewerASCIIOpen(PETSC_COMM_WORLD, filename, &viewer));
    _try(PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB));
    _try(MatView(A, viewer));
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    _try(PetscViewerDestroy(&viewer));
#else
    _try(PetscViewerDestroy(viewer));
#endif
  }
  else{
    Message::Warning("Matrix is too large, no ASCII Output (m=%d>%d)", m, m_max);
  }
  // BINARY
  // Add the petscfolder/bin/matlab path to your matlab paths and
  // type the following command in matlab, for real arithmetic :
  // A = PetscBinaryRead(filename) ;
  // and for complex arithmetic :
  // A = PetscBinaryRead(filename , 'complex', true) ;
  PetscViewer viewer_bin;
  _try(PetscViewerBinaryOpen(PETSC_COMM_WORLD, (tmp + ".bin").c_str(),
                             FILE_MODE_WRITE, &viewer_bin));
  _try(PetscViewerSetFormat(viewer_bin, PETSC_VIEWER_DEFAULT));
  _try(MatView(A, viewer_bin));
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(PetscViewerDestroy(&viewer_bin));
#else
  _try(PetscViewerDestroy(viewer_bin));
#endif

  PetscFunctionReturn(0);
}

// Print a SEQUENTIAL Petsc Vec into a Matlab File
static PetscErrorCode PrintVecSeq(Vec b, const char* filename, const char* varname)
{
  std::string tmp(filename);
  PetscViewer viewer, viewer_bin;

  _try(PetscObjectSetName((PetscObject)b, varname));
  _try(PetscViewerASCIIOpen(PETSC_COMM_SELF, filename, &viewer));
  _try(PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB));
  // see PrintMat function for the how-to use it
  _try(PetscViewerBinaryOpen(PETSC_COMM_SELF, (tmp + ".bin").c_str(),
                             FILE_MODE_WRITE, &viewer_bin));
  _try(PetscViewerSetFormat(viewer_bin, PETSC_VIEWER_DEFAULT));
  VecView(b, viewer);
  VecView(b, viewer_bin);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(PetscViewerDestroy(&viewer));
  _try(PetscViewerDestroy(&viewer_bin));
#else
  _try(PetscViewerDestroy(viewer));
  _try(PetscViewerDestroy(viewer_bin));
#endif

  PetscFunctionReturn(0);
}

// Print a Petsc Vec into a Matlab File - FIXME: to be changed!
static PetscErrorCode PrintVec(Vec b, const char* filename, const char* varname)
{
  // This function is copy/paste of function LinAlg_PrintMatrix function
  // located in Kernel/LinAlg_PETSC.cpp

#if (PETSC_VERSION_MAJOR == 0) || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 4))
  const char *type = "";
#else
  const VecType type;
#endif
  _try(VecGetType(b, &type));
  if(!strcmp(type, "seq")){ // AND NUM_PROC > 1 !
    _try(PrintVecSeq(b, filename, varname));
    PetscFunctionReturn(0);
  }

  PetscViewer viewer, viewer_bin;
  std::string tmp(filename);
  _try(PetscObjectSetName((PetscObject)b, varname));
  // ASCII
  _try(PetscViewerASCIIOpen(PETSC_COMM_WORLD, filename, &viewer));
  _try(PetscViewerSetFormat(viewer, PETSC_VIEWER_ASCII_MATLAB));
  // see PrintMat function for the how-to use it
  _try(PetscViewerBinaryOpen(PETSC_COMM_WORLD, (tmp + ".bin").c_str(),
                             FILE_MODE_WRITE, &viewer_bin));
  _try(PetscViewerSetFormat(viewer_bin, PETSC_VIEWER_DEFAULT));
  VecView(b, viewer);
  VecView(b, viewer_bin);
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(PetscViewerDestroy(&viewer));
  _try(PetscViewerDestroy(&viewer_bin));
#else
  _try(PetscViewerDestroy(viewer));
  _try(PetscViewerDestroy(viewer_bin));
#endif
  PetscFunctionReturn(0);
}

static PetscErrorCode Jacobi_Solver(Mat A, Vec X, Vec B, double Tol, int MaxIter)
{
  Vec X_old, W;
  double residu;

  _try(VecSet(X, 0.));
  _try(VecDuplicate(X, &X_old));
  _try(VecDuplicate(X, &W));
  _try(VecCopy(X, W));

  for (int j=1; j < MaxIter; j++){
    _try(VecCopy(X, X_old));
    _try(MatMultILSMat(A, X_old, X));
    _try(VecAYPX(X, 1.,B)); // X = X + B
    //convergence test
    _try(VecWAXPY(W, -1.,X_old, X)); //W = X-X_old
    _try(VecNorm(W, NORM_2, &residu));
    Message::Info(3, "Jacobi iteration %d residual %g", j, residu);
    if(residu < Tol) break;
  }
  PetscFunctionReturn(0);
}

// matrix-free preconditionning
// Matrix-vector product for the preconditioning. Quite a copy/past of MatMultILSMat
static PetscErrorCode MatMultPC(PC pc, Vec X, Vec Y)
{
  std::vector<std::vector<std::vector<double> > > std_vec;
  ILSField MyField, AllField;
  ILSMat *ctx;

  _try(PCShellGetContext(pc, (void**)&ctx));

  //convert X to a std vector
  _try(PETSc_Vec_to_STD_Vec(X, ctx->MyField, &std_vec));

  // Update PViews
  for (int cpt_view = 0; cpt_view < ctx->MyField->nb_field; cpt_view++){
    PView *view = GetViewByTag(ctx->MyField->GmshTag[cpt_view]);
    view->getData()->fromVector(std_vec[cpt_view]);
  }

  // PVIEW BCAST !
  PViewBCast(*(ctx->MyField), *(ctx->AllField));
  // Getdp resolution (contained in the matrix context)
  Treatment_Operation(ctx->Resolution_P,
                      ctx->Operation_P->Case.IterativeLinearSolver.Operations_Mx,
                      ctx->DofData_P0,
                      ctx->GeoData_P0,
                      NULL, NULL);
  // Extract the (std) vector from the (new) .pos files
  // This assumes that every process reads every .pos files
  for(int cpt_view = 0; cpt_view < ctx->MyField->nb_field; cpt_view++) {
    PView *view = GetViewByTag(ctx->MyField->GmshTag[cpt_view]);
    view->getData()->toVector(std_vec[cpt_view]);
  }

  //Convert the obtained vector to a Petsc Vec
  _try(STD_vector_to_PETSc_Vec(std_vec, Y, ctx->MyField));

  _try(PetscBarrier((PetscObject)PETSC_NULL));
  PetscFunctionReturn(0);
}

static int KspMonitor(KSP ksp, PetscInt it, PetscReal rnorm, void *mctx)
{
  Message::Cpu(3, false, true, true, true, false, "%3ld KSP Residual norm %14.12e",
               (long)it, rnorm);
  return 0;
}

int Operation_IterativeLinearSolver(struct Resolution  *Resolution_P,
                                    struct Operation   *Operation_P,
                                    struct DofData     *DofData_P0,
                                    struct GeoData     *GeoData_P0)
{
  int mpi_comm_size = Message::GetCommSize();
  int mpi_comm_rank = Message::GetCommRank();
  ILSMat *ctx, *ctx_pc; // Matrix Shell context and PC context
  Mat A;
  KSP ksp;
  std::string Solver;
  int MaxIter, Restart;
  double Tol;
  std::vector<std::vector<std::vector<double> > > B_std; // rhs (std version)
  Vec B, X; // rhs and Solution
  PC pc;
  MPI_Comm ILSComm = PETSC_COMM_WORLD; // by default, KSP is launched in parallel
  char *LinearSystemType;
  ILSField MyField, AllField;
#if defined(TIMER)
  double time_total = 0.;
  double time_start = MPI_Wtime();
#endif

  // Initializing

  MPI_Barrier(PETSC_COMM_WORLD);
  Message::Info("Initializing Iterative Linear Solver");
  InitData(&MyField, &AllField, Operation_P, &B_std);

  // Print Information
  Tol = Operation_P->Case.IterativeLinearSolver.Tolerance;
  MaxIter = Operation_P->Case.IterativeLinearSolver.MaxIter;
  Restart = Operation_P->Case.IterativeLinearSolver.Restart;
  Solver = Operation_P->Case.IterativeLinearSolver.Type;
  LinearSystemType = Operation_P->Case.IterativeLinearSolver.OpMatMult;
  if(strcmp(LinearSystemType, "I-A") &&
     strcmp(LinearSystemType, "I+A") &&
     strcmp(LinearSystemType, "A")){
    Message::Error("Linear system type \"%s\" unknown. Try \"A\", \"I-A\" or \"I+A\".",
                   LinearSystemType);
  }
  Message::Info(3, "Linear system type: (%s)X = B", LinearSystemType);
  Message::Info(3, "Number of Processes: %d", mpi_comm_size);
  Message::Info(3, "Iterative solver: %s", Solver.c_str());
  Message::Info(3, "Tolerance: %g", Tol);
  Message::Info(3, "Max. numb. of iterations: %i", MaxIter);
  Message::Info(3, "Restart: %i", Restart);

  // if jacobi then MatMult(A,X) = A*X for linear system (I-A)*X=B
  if(Solver == "jacobi"){
    if(strcmp(LinearSystemType, "I-A"))
      Message::Error("Jacobi method implemented only for linear system of type \"I-A\"");
    LinearSystemType = (char *)"A";
  }

  Message::Info(3, "Number of Fields: %d", AllField.nb_field);
  if(ILSField::areNeighbor)
    Message::Info(3, "Neighbors are specified: Fast exchange between process");
  for(int iField = 0; iField < AllField.nb_field; iField++)
    Message::Info(3, "Size of Field %d: %d (on CPU %d)", AllField.GmshTag[iField],
                  AllField.size[iField], AllField.rank[iField]);
  Message::Info(3, "Total system size: %d", AllField.n_elem);

#if !defined(PETSC_USE_COMPLEX)
  if(Current.NbrHar == 2){
    AllField.n_elem *= 2;
    MyField.n_elem *= 2;
    Message::Info(3, "PETSc REAL arithmetic: system size is doubled: n=%d",
                  AllField.n_elem);
  }
#endif

  // Creating the vector/matrix

  // Petsc Vec of unknown
  _try(VecCreate(ILSComm, &X));
  _try(VecSetSizes(X, MyField.n_elem, AllField.n_elem));
  _try(VecSetFromOptions(X));
  // Petsc Vec Right Hand Side
  _try(VecDuplicate(X, &B));
  STD_vector_to_PETSc_Vec(B_std, B, &MyField);

  // context of the shell matrix
  _try(CreateILSMat(&ctx));
  _try(SetILSMat(&ctx, LinearSystemType, &MyField, &AllField, Resolution_P,
                 Operation_P, DofData_P0, GeoData_P0));
  // Shell matrix containg the indices of the unknown field (on which the
  // iterative solver works)
  _try(MatCreateShell(ILSComm, MyField.n_elem, MyField.n_elem, AllField.n_elem,
                      AllField.n_elem, ctx, &A));
  _try(MatShellSetContext(A, ctx));
  _try(MatShellSetOperation(A, MATOP_MULT, (void(*)(void))MatMultILSMat));
  _try(PetscBarrier((PetscObject)PETSC_NULL));

  // Creation of the iterative solver + solving

  if(Solver == "print"){
    // Print the iteration matrix
    Message::Info(3, "Launching Print mode (no resolution):");
    Message::Info(3, "Building Iteration Matrix...");
    Mat IterationMatrix;
    _try(BuildIterationMatrix(A, &IterationMatrix));
    Message::Info(3, "Printing Iteration Matrix...");
    _try(PrintMatrix(IterationMatrix, "file_mat_itmat.m", "IterationMatrix"));
    Message::Info(3, "Printing Right Hand Side...");
    _try(PrintVec(B, "file_vec_rhs.m", "RightHandSide"));
    Message::Info(3, "done");
#if (PETSC_VERSION_RELEASE == 0  || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    _try(VecDestroy(&X));
    _try(VecDestroy(&B));
    _try(MatDestroy(&A));
#else
    _try(VecDestroy(X));
    _try(VecDestroy(B));
    _try(MatDestroy(A));
#endif
    PetscFunctionReturn(0);
  }
  else if(Solver == "jacobi"){
    _try(Jacobi_Solver(A, X, B, Tol, MaxIter));
  }
  else{
    // Krylov subspace solver
    _try(KSPCreate(ILSComm,&ksp));
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 5)))
    _try(KSPSetOperators(ksp, A, A));
#else
    _try(KSPSetOperators(ksp, A, A, DIFFERENT_NONZERO_PATTERN));
#endif
    _try(KSPSetTolerances(ksp, Tol, PETSC_DEFAULT, PETSC_DEFAULT, MaxIter));
    _try(KSPMonitorSet(ksp, KspMonitor, PETSC_NULL, PETSC_NULL));
    //Preconditioning
    bool pcright = true;
    std::string match = "_pcleft";
    int pos = (int)Solver.find(match.c_str());
    if(pos != (int)std::string::npos){
      Solver.replace(pos, match.size(), "");
      pcright = false;
    }
    _try(KSPGetPC(ksp, &pc));
    // check if a preconditioner is specified
    int nb_pc = List_Nbr(Operation_P->Case.IterativeLinearSolver.Operations_Mx);
    if(nb_pc == 0) {
      _try(PCSetType(pc, PCNONE));
    }
    else{
      Message::Info(3, "%s preconditioner detected", pcright ? "Right" : "Left");
      // context of the shell PC
      _try(CreateILSMat(&ctx_pc));
      _try(SetILSMat(&ctx_pc, LinearSystemType, &MyField, &AllField, Resolution_P,
                     Operation_P, DofData_P0, GeoData_P0));
      // Shell PC
      _try(PCSetType(pc,PCSHELL));
      _try(PCShellSetContext(pc, ctx_pc));
      _try(PCShellSetApply(pc, MatMultPC));
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
      _try(KSPSetPCSide(ksp, pcright ? PC_RIGHT : PC_LEFT));
#else
      _try(KSPSetPreconditionerSide(ksp, pcright ? PC_RIGHT : PC_LEFT));
#endif
    }
    _try(KSPSetType(ksp, Solver.c_str()));
    if(Restart > 0 && Solver.find("gmres") != std::string::npos)
      _try(KSPGMRESSetRestart(ksp, Restart));
    // set ksp
    _try(KSPSetFromOptions(ksp));
    // Solve
    _try(KSPSolve(ksp, B, X));
    _try(KSPView(ksp, PETSC_VIEWER_STDOUT_WORLD));

    PetscInt its;
    _try(KSPGetIterationNumber(ksp, &its));
    Current.KSPIts = its;

#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
    _try(KSPDestroy(&ksp));
#else
    _try(KSPDestroy(ksp));
#endif
  }

  // computing solution
  // we reuse B_std to avoid the creation of a new std::vector ...
  _try(PETSc_Vec_to_STD_Vec(X, &MyField, &B_std));
  // update views
  for (int cpt_view = 0 ; cpt_view < MyField.nb_field; cpt_view++){
    PView *view = GetViewByTag(MyField.GmshTag[cpt_view]);
    view->getData()->fromVector(B_std[cpt_view]);
  }
  // Transfer PView
#ifdef TIMER
  double tbcast_start = MPI_Wtime();
#endif
  PViewBCast(MyField, AllField);
#ifdef TIMER
  double tbcast_end = MPI_Wtime();
  double t_bcast = tbcast_end - tbcast_start;
  Message::Info(3, "Process %d: tbcast = %g", mpi_comm_rank, t_bcast);
#endif

  // cleaning
#if (PETSC_VERSION_RELEASE == 0 || ((PETSC_VERSION_MAJOR == 3) && (PETSC_VERSION_MINOR >= 2)))
  _try(VecDestroy(&X));
  _try(VecDestroy(&B));
  _try(MatDestroy(&A));
#else
  _try(VecDestroy(X));
  _try(VecDestroy(B));
  _try(MatDestroy(A));
#endif
#ifdef TIMER
  time_total = MPI_Wtime() - time_start;
#endif
  if(MyField.TimeBcast.size()){
    // CPU Times
    double aver_it = 0, aver_com = 0;
    char filename[50];
    FILE *fid;
    sprintf(filename, "log_cpu_%d", mpi_comm_rank);
    fid = FOpen(filename, "w");
    fprintf(fid, "Process rank %d\n", mpi_comm_rank);
    fprintf(fid, "it.  CPU Total \t ... Treatment \t ... Communication\n");
    for (unsigned int i = 0; i < MyField.TimeBcast.size() ; i ++){
      fprintf(fid, "%d \t%g\t %g\t %g\t (%g%%)\n", i+1,  MyField.TimeIt[i],
              MyField.TimeTreatment[i], MyField.TimeBcast[i],
              MyField.TimeBcast[i]/MyField.TimeIt[i]*100);
      aver_com += MyField.TimeBcast[i]/MyField.TimeBcast.size();
      aver_it += MyField.TimeIt[i]/MyField.TimeIt.size();
    }
    fprintf(fid, "Average: %g %g\n", aver_it, aver_com);
    fprintf(fid, "Percent of communication in average: %g%%\n", aver_com/aver_it*100);
    fclose(fid);
#ifdef TIMER
    Message::Info(3, "Processus %d: ended in %g", mpi_comm_rank, time_total);
    Message::Info(3, "Processus %d: Average iteration time %g with %g for communication (%g%%)",
                  mpi_comm_rank, aver_it, aver_com, aver_com/aver_it*100);
#endif
  }

  // reset pointers to static fields
  MyStaticField = AllStaticField = 0;

  _try(PetscBarrier((PetscObject)PETSC_NULL));
  PetscFunctionReturn(0);
}

int Operation_BroadcastFields(struct Resolution  *Resolution_P,
                              struct Operation   *Operation_P,
                              struct DofData     *DofData_P0,
                              struct GeoData     *GeoData_P0)
{
  std::set<int> fieldsToSkip;
  for(int i = 0; i < List_Nbr(Operation_P->Case.BroadcastFields.FieldsToSkip); i++){
    double j;
    List_Read(Operation_P->Case.BroadcastFields.FieldsToSkip, i, &j);
    fieldsToSkip.insert((int) j);
  }

  PViewBCast(*MyStaticField, *AllStaticField, fieldsToSkip);
  return 0;
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

int Operation_BroadcastFields(struct Resolution  *Resolution_P,
                              struct Operation   *Operation_P,
                              struct DofData     *DofData_P0,
                              struct GeoData     *GeoData_P0)
{
  Message::Error("BroadcastFields requires PETSc and Gmsh");
  return 0;
}

#endif
