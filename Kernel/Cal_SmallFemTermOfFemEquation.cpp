// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Nicolas Marsic
//

#include "DofData.h"
#include "Message.h"
#include "Cal_SmallFemTermOfFemEquation.h"

#if defined(HAVE_SMALLFEM)
#include "SmallFem.h"
#include "Mesh.h"
#include "FunctionSpace0Form.h"
#include "System.h"
#include "SystemHelper.h"
#include "FormulationPoisson.h"

extern struct CurrentData Current;

// SmallFEM: helping functions //
double fDirichlet0(fullVector<double>& xyz){
  return -1;
}

double fDirichlet1(fullVector<double>& xyz){
  return +1;
}

double fSource(fullVector<double>& xyz){
  return 0;
}

void fMaterial(fullVector<double>& xyz, fullMatrix<double>& tensor){
  tensor.scale(0);

  if(xyz(0) > 0){
    tensor(0, 0) = 1;
    tensor(1, 1) = 1;
    tensor(2, 2) = 1;
  }
  if(xyz(0) <= 0){
    tensor(0, 0) = 1;
    tensor(1, 1) = 1;
    tensor(2, 2) = 1;
  }
}

int getGoeIdFromGetDPId(GroupOfElement& goe, int getdpId){
  std::vector<const MElement*> element = goe.getAll();

  for(size_t i = 0; i < element.size(); i++)
    if(element[i]->getNum() == getdpId)
      return i;

  throw Exception("Element not found!");
}

struct Dof getGetDPDofFromSmallFEM(const sf::Dof& dofSF,
                                   const     DofManager<double>& dofM){
  size_t     globalId = dofM.getGlobalId(dofSF);
  struct Dof dofDP;
  dofDP.NumType  = 1;
  dofDP.Entity   = dofSF.getEntity() + 1;
  dofDP.Harmonic = 0;

  if(globalId == DofManager<double>::isFixedId()){
    dofDP.Type                                  = 2;
    dofDP.Case.FixedAssociate.TimeFunctionIndex = 0;
    dofDP.Val.s                                 = dofM.getValue(dofSF);
  }
  else{
    dofDP.Type                  = 1;
    dofDP.Case.Unknown.NumDof   = globalId + 1;
    dofDP.Case.Unknown.NonLocal = 0;
  }

  return dofDP;
}

void printDof(struct Dof* dof){
  std::cout << dof->NumType  << ", "
            << dof->Entity   << ", "
            << dof->Harmonic << ", "
            << dof->Type     << "; ";

  switch(dof->Type){
  case 1: std::cout << dof->Case.Unknown.NumDof   << ", "
                    << dof->Case.Unknown.NonLocal; break;

  case 2: std::cout << dof->Case.FixedAssociate.NumDof            << ", "
                    << dof->Case.FixedAssociate.TimeFunctionIndex << ", "
                    << dof->Val.s;                 break;

  default: throw(Exception("Unknown GetDP Dof Type: %d", dof->Type));
  }
}

void Cal_SmallFemTermOfFemEquation(struct Element*         Element,
                                   struct EquationTerm*    EquationTerm_P,
                                   struct QuantityStorage* QuantityStorage_P0){
  extern                int  Flag_RHS;
  struct FemLocalTermActive* FI = EquationTerm_P->Case.LocalTerm.Active;
  Current.flagAssDiag = 0; /*+++prov*/

  /* treatment of MHJacNL-term in separate routine */
  if(FI->MHJacNL){
    /* if only the RHS of the system is to be calculated
       (in case of adaptive relaxation of the Newton-Raphson scheme)
       the (expensive and redundant) calculation of this term can be skipped */
    if(!Flag_RHS)
      Message::Error("MHJacNL not in SmallFEM");
    return;
  }

  // Init SmallFEM (only once) //
  static int once = 0;
  static Mesh* msh;
  static GroupOfElement*    volume;
  static GroupOfElement* boundary0;
  static GroupOfElement* boundary1;

  static sf::FunctionSpace0Form*      fs;
  static FormulationPoisson*     poisson;
  static System<double>*      sysPoisson;
  static const DofManager<double>*  dofM;

  static const std::vector<std::vector<sf::Dof> >* allDofField;
  static const std::vector<std::vector<sf::Dof> >* allDofTest;

  if(!once){
    // Say it loudly and proudly! //
    Message::Direct("U s i n g  S m a l l F E M . . .");

    // Create a SmallFEM Formulation for Poisson //
    // Get Domains //
    msh       = new Mesh("mesh.msh");
    volume    = new GroupOfElement(msh->getFromPhysical(7));
    boundary0 = new GroupOfElement(msh->getFromPhysical(6));
    boundary1 = new GroupOfElement(msh->getFromPhysical(5));

    // Full Domain //
    std::vector<const GroupOfElement*> domain(3);
    domain[0] = volume;
    domain[1] = boundary0;
    domain[2] = boundary1;

    // Get Order //
    int order = 1;

    // Function Space //
    fs = new sf::FunctionSpace0Form(domain, order);

    // Compute //
    poisson = new FormulationPoisson(*volume, *fs, fSource, fMaterial);

    sysPoisson = new System<double>;
    sysPoisson->addFormulation(*poisson);

    SystemHelper<double>::dirichlet(*sysPoisson, *fs, *boundary0, fDirichlet0);
    SystemHelper<double>::dirichlet(*sysPoisson, *fs, *boundary1, fDirichlet1);

    sysPoisson->assemble();
    dofM = &sysPoisson->getDofManager();

    allDofField = &(poisson->field().getKeys(poisson->domain()));
    allDofTest  = &( poisson->test().getKeys(poisson->domain()));

    once = 1;
  }

  // Get GetDP Number of Dofs
  //struct QuantityStorage* QuantityStorageEqu_P = FI->QuantityStorageEqu_P;
  //struct QuantityStorage* QuantityStorageDof_P = FI->QuantityStorageDof_P;
  //int Nbr_Dof =
  //  FI->SymmetricalMatrix ? QuantityStorageEqu_P->NbrElementaryBasisFunction :
  //  QuantityStorageDof_P->NbrElementaryBasisFunction;
  //int Nbr_Equ =
  //  QuantityStorageEqu_P->NbrElementaryBasisFunction;

  // SF Dofs
  int elementIdSF = getGoeIdFromGetDPId(*volume, Element->Num);
  std::vector<sf::Dof> dofField = (*allDofField)[elementIdSF];
  std::vector<sf::Dof> dofTest  =  (*allDofTest)[elementIdSF];

  // Assemble
  int nDofField = dofField.size();
  int nDofTest  = dofTest.size();

  for (int i = 0; i < nDofField; i++){
    struct Dof dofI = getGetDPDofFromSmallFEM(dofField[i], *dofM);

    for (int j = 0; j < nDofTest; j++){
      struct Dof dofJ = getGetDPDofFromSmallFEM(dofTest[j], *dofM);
      double   termIJ = poisson->weak(i, j, elementIdSF);

      ((void (*)(struct Dof*, struct Dof*, double*))
       FI->Function_AssembleTerm)(&dofI, &dofJ, &termIJ);
    }
  }

  // Done
  return;
}

#else
void Cal_SmallFemTermOfFemEquation(struct Element*         Element,
                                   struct EquationTerm*    EquationTerm_P,
                                   struct QuantityStorage* QuantityStorage_P0){
  Message::Error("SmallFEM not activated");
}
#endif
