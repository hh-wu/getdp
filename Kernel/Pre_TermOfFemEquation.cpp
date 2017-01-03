// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "DofData.h"
#include "Get_DofOfElement.h"
#include "ExtendedGroup.h"
#include "BF.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  P r e _ I n i t T e r m O f F e m F o r m u l a t i o n                 */
/* ------------------------------------------------------------------------ */

void Pre_InitTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
			       struct QuantityStorage  * QuantityStorage_P0)
{
  struct DefineQuantity   * DefineQuantity_P ;

  if (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof >= 0) {
    DefineQuantity_P =
      (QuantityStorage_P0 +
       EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof)->DefineQuantity ;
    Dof_AddFunctionSpaceIndex(DefineQuantity_P->FunctionSpaceIndex) ;
  }

  if (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexNoDof >= 0) {
    DefineQuantity_P =
      (QuantityStorage_P0 +
       EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexNoDof)->DefineQuantity ;
    Dof_AddFunctionSpaceIndex(DefineQuantity_P->FunctionSpaceIndex) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  P r e _ T e r m O f F e m F o r m u l a t i o n                         */
/* ------------------------------------------------------------------------ */

bool IsEquationNonLocal(BasisFunction *bf)
{
  if(!bf) return false;
  if(bf->Function == (void(*)())BF_Region ||
     bf->Function == (void(*)())BF_RegionX ||
     bf->Function == (void(*)())BF_RegionY ||
     bf->Function == (void(*)())BF_RegionZ ||
     bf->Function == (void(*)())BF_Global ||
     bf->Function == (void(*)())BF_dGlobal ||
     bf->Function == (void(*)())BF_Zero ||
     bf->Function == (void(*)())BF_One ||
     bf->Function == (void(*)())BF_GroupOfNodes ||
     bf->Function == (void(*)())BF_GroupOfNodes_2E ||
     bf->Function == (void(*)())BF_GroupOfNodes_2F ||
     bf->Function == (void(*)())BF_GroupOfNodes_2V ||
     bf->Function == (void(*)())BF_GroupOfNodes_3E ||
     bf->Function == (void(*)())BF_GroupOfNodes_3F ||
     bf->Function == (void(*)())BF_GroupOfNodes_3V ||
     bf->Function == (void(*)())BF_GradGroupOfNodes ||
     bf->Function == (void(*)())BF_GradGroupOfNodes_2E ||
     bf->Function == (void(*)())BF_GradGroupOfNodes_2F ||
     bf->Function == (void(*)())BF_GradGroupOfNodes_2V ||
     bf->Function == (void(*)())BF_GradGroupOfNodes_3E ||
     bf->Function == (void(*)())BF_GradGroupOfNodes_3F ||
     bf->Function == (void(*)())BF_GradGroupOfNodes_3V ||
     bf->Function == (void(*)())BF_GroupOfEdges ||
     bf->Function == (void(*)())BF_GroupOfEdges_2E ||
     bf->Function == (void(*)())BF_GroupOfEdges_2F ||
     bf->Function == (void(*)())BF_GroupOfEdges_2V ||
     bf->Function == (void(*)())BF_GroupOfEdges_3E ||
     bf->Function == (void(*)())BF_GroupOfEdges_3F_a ||
     bf->Function == (void(*)())BF_GroupOfEdges_3F_b ||
     bf->Function == (void(*)())BF_GroupOfEdges_3F_c ||
     bf->Function == (void(*)())BF_GroupOfEdges_3V ||
     bf->Function == (void(*)())BF_GroupOfEdges_4E ||
     bf->Function == (void(*)())BF_GroupOfEdges_4F ||
     bf->Function == (void(*)())BF_GroupOfEdges_4V ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_2E ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_2F ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_2V ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_3E ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_3F_a ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_3F_b ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_3F_c ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_3V ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_4E ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_4F ||
     bf->Function == (void(*)())BF_CurlGroupOfEdges_4V ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges_2E ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges_2F ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges_2V ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges_3E ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges_3F ||
     bf->Function == (void(*)())BF_GroupOfPerpendicularEdges_3V ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges_2E ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges_2F ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges_2V ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges_3E ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges_3F ||
     bf->Function == (void(*)())BF_CurlGroupOfPerpendicularEdges_3V ||
     bf->Function == (void(*)())BF_GroupOfNodesX ||
     bf->Function == (void(*)())BF_GroupOfNodesY ||
     bf->Function == (void(*)())BF_GroupOfNodesZ ||
     bf->Function == (void(*)())BF_GroupOfNodesX_D1 ||
     bf->Function == (void(*)())BF_GroupOfNodesY_D1 ||
     bf->Function == (void(*)())BF_GroupOfNodesZ_D1 ||
     bf->Function == (void(*)())BF_GroupOfNodesX_D2 ||
     bf->Function == (void(*)())BF_GroupOfNodesY_D2 ||
     bf->Function == (void(*)())BF_GroupOfNodesZ_D2 ||
     bf->Function == (void(*)())BF_GroupOfNodesX_D12 ||
     bf->Function == (void(*)())BF_GroupOfNodesY_D12 ||
     bf->Function == (void(*)())BF_GroupOfNodesZ_D12)
    return true;
  return false;
}

void Pre_TermOfFemEquation(struct Element          * Element,
			   struct EquationTerm     * EquationTerm_P,
			   struct QuantityStorage  * QuantityStorage_P0)
{
  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  int  i ;
  bool NonLocal=false;

  QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;
  QuantityStorageDof_P =
    (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof >= 0)?
      QuantityStorage_P0 +
	EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof : NULL ;

  if (QuantityStorageEqu_P->NumLastElementForEquDefinition != Element->Num) {
    QuantityStorageEqu_P->NumLastElementForEquDefinition = Element->Num ;

    for (i = 0 ; i < QuantityStorageEqu_P->NbrElementaryBasisFunction ; i++){

      NonLocal = (QuantityStorageEqu_P->TypeQuantity == INTEGRALQUANTITY) ||
	IsEquationNonLocal(QuantityStorageEqu_P->BasisFunction[i].BasisFunction);

      switch(QuantityStorageEqu_P->BasisFunction[i].Constraint){
      case NONE:
	Dof_DefineUnknownDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
           NonLocal) ;
	break;
      case ASSIGN:
	Dof_DefineAssignFixedDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].Value,
	   QuantityStorageEqu_P->BasisFunction[i].TimeFunctionIndex) ;
	break;
      case INIT:
	Dof_DefineInitFixedDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].Value,
	   QuantityStorageEqu_P->BasisFunction[i].Value2,
           NonLocal) ;
	break;
      case ASSIGNFROMRESOLUTION:
	Dof_DefineAssignSolveDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].TimeFunctionIndex) ;
	break;
      case INITFROMRESOLUTION:
	Dof_DefineInitSolveDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar);
	break;
      case CST_LINK:
	Dof_DefineLinkDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].Value,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity_Link) ;
	break;
      case CST_LINKCPLX:
	Dof_DefineLinkCplxDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].Value,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity_Link) ;
	break;
      }
    }
  }

  if (QuantityStorageDof_P &&
      (QuantityStorageDof_P != QuantityStorageEqu_P) &&
      (QuantityStorageDof_P->NumLastElementForDofDefinition != Element->Num)) {
    QuantityStorageDof_P->NumLastElementForDofDefinition = Element->Num ;

    for (i = 0 ; i < QuantityStorageDof_P->NbrElementaryBasisFunction ; i++) {

      NonLocal = (QuantityStorageDof_P->TypeQuantity == INTEGRALQUANTITY) ||
	IsEquationNonLocal(QuantityStorageDof_P->BasisFunction[i].BasisFunction);

      switch(QuantityStorageDof_P->BasisFunction[i].Constraint){
      case ASSIGN:
	Dof_DefineAssignFixedDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].Value,
	   QuantityStorageDof_P->BasisFunction[i].TimeFunctionIndex) ;
	break;
      case INIT:
	Dof_DefineInitFixedDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].Value,
	   QuantityStorageDof_P->BasisFunction[i].Value2,
           NonLocal) ;
        break;
      case ASSIGNFROMRESOLUTION:
	Dof_DefineAssignSolveDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].TimeFunctionIndex) ;
	break;
      case INITFROMRESOLUTION:
	Dof_DefineInitSolveDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar);
	break;
      case CST_LINK:
	Dof_DefineLinkDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].Value,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity_Link) ;
	break;
      case CST_LINKCPLX:
	Dof_DefineLinkCplxDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].Value,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity_Link) ;
	break;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  P r e _ I n i t G l o b a l T e r m O f F e m F o r m u l a t i o n     */
/* ------------------------------------------------------------------------ */

void Pre_InitGlobalTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				     struct QuantityStorage  * QuantityStorage_P0)
{
  struct DefineQuantity   * DefineQuantity_P ;

  if (EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof >= 0) {
    DefineQuantity_P =
      (QuantityStorage_P0 +
       EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof)->DefineQuantity ;
    Dof_AddFunctionSpaceIndex(DefineQuantity_P->FunctionSpaceIndex) ;
  }

  if (EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexNoDof >= 0) {
    DefineQuantity_P =
      (QuantityStorage_P0 +
       EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexNoDof)->DefineQuantity ;
    Dof_AddFunctionSpaceIndex(DefineQuantity_P->FunctionSpaceIndex) ;
  }
}


/* ------------------------------------------------------------------------ */
/*  P r e _ G l o b a l T e r m O f F e m F o r m u l a t i o n             */
/* ------------------------------------------------------------------------ */

void Pre_GlobalTermOfFemEquation(int  Num_Region,
				 struct EquationTerm     * EquationTerm_P,
				 struct QuantityStorage  * QuantityStorage_P0)
{
  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;

  //+++ Num_Region, QuantityStorage_P0: not used any more
  /*
  QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexEqu ;
  QuantityStorageDof_P =
    (EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof >= 0)?
      QuantityStorage_P0 +
	EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof : NULL ;
  */
  QuantityStorageEqu_P = EquationTerm_P->Case.GlobalTerm.Active->QuantityStorageEqu_P;
  QuantityStorageDof_P = EquationTerm_P->Case.GlobalTerm.Active->QuantityStorageDof_P;

  if (QuantityStorageEqu_P->NbrElementaryBasisFunction == 1) {

    switch(QuantityStorageEqu_P->BasisFunction[0].Constraint) {
    case NONE:
      Dof_DefineUnknownDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
         true) ;
      break ;
    case ASSIGN:
      Dof_DefineAssignFixedDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].Value,
	 QuantityStorageEqu_P->BasisFunction[0].TimeFunctionIndex) ;
      break ;
    case INIT:
      Dof_DefineInitFixedDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].Value,
	 QuantityStorageEqu_P->BasisFunction[0].Value2,
         true) ;
      break;
    case ASSIGNFROMRESOLUTION:
      Dof_DefineAssignSolveDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].TimeFunctionIndex) ;
      break;
    case INITFROMRESOLUTION:
      Dof_DefineInitSolveDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar);
      break;
    case CST_LINK:
      Dof_DefineLinkDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].Value,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity_Link) ;
      break;
    case CST_LINKCPLX:
      Dof_DefineLinkCplxDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].Value,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity_Link) ;
      break;
    }
  }

  if (QuantityStorageDof_P && (QuantityStorageDof_P != QuantityStorageEqu_P)) {
    if (QuantityStorageDof_P->NbrElementaryBasisFunction == 1) {

      switch(QuantityStorageDof_P->BasisFunction[0].Constraint) {
      case NONE:
	if (!QuantityStorageDof_P->BasisFunction[0].CodeAssociateBasisFunction)
          Dof_DefineUnknownDof
            (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
             QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
             true) ;
        else
	  Dof_DefineAssociateDof
	    (QuantityStorageDof_P->BasisFunction[0].CodeAssociateBasisFunction,
	     QuantityStorageDof_P->BasisFunction[0].CodeEntity,
	     QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	     QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
             0, NULL) ;
	break ;
      case ASSIGN:
	Dof_DefineAssignFixedDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].Value,
	   QuantityStorageDof_P->BasisFunction[0].TimeFunctionIndex) ;
	break ;
      case INIT:
        /* This was used instead of what follows... Why!!!
	  Dof_DefineAssociateDof
	    (QuantityStorageDof_P->BasisFunction[0].CodeAssociateBasisFunction,
	     QuantityStorageDof_P->BasisFunction[0].CodeEntity,
	     QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	     QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
             1, QuantityStorageDof_P->BasisFunction[0].Value) ;
        */
	Dof_DefineInitFixedDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].Value,
	   QuantityStorageDof_P->BasisFunction[0].Value2,
           true);
	break;
      case ASSIGNFROMRESOLUTION:
	Dof_DefineAssignSolveDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].TimeFunctionIndex) ;
	break;
      case INITFROMRESOLUTION:
	Dof_DefineInitSolveDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar);
	break;
      case CST_LINK:
	Dof_DefineLinkDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].Value,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity_Link) ;
	break;
      case CST_LINKCPLX:
	Dof_DefineLinkCplxDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].Value,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity_Link) ;
	break;
      }
    }

  }
}

/* ------------------------------------------------------------------------ */
/*  C s t _ G l o b a l T e r m O f F e m F o r m u l a t i o n             */
/* ------------------------------------------------------------------------ */

void  Cst_GlobalTermOfFemEquation(int  Num_Region,
				  struct EquationTerm     * EquationTerm_P,
				  struct QuantityStorage  * QuantityStorage_P0)
{
  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;

  //+++ Num_Region, QuantityStorage_P0: not used any more
  /*
  QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexEqu ;
  QuantityStorageDof_P =
    (EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof >= 0)?
      QuantityStorage_P0 +
	EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof : NULL ;
  */
  QuantityStorageEqu_P = EquationTerm_P->Case.GlobalTerm.Active->QuantityStorageEqu_P;
  QuantityStorageDof_P = EquationTerm_P->Case.GlobalTerm.Active->QuantityStorageDof_P;

  if (QuantityStorageEqu_P->NbrElementaryBasisFunction == 1) {

    switch(QuantityStorageEqu_P->BasisFunction[0].Constraint) {
    case ASSIGN:
      Dof_UpdateAssignFixedDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
         QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].Value,
         QuantityStorageEqu_P->BasisFunction[0].Value2) ;
      break ;
    case CST_LINK:
    case CST_LINKCPLX:
      Dof_UpdateLinkDof
	(QuantityStorageEqu_P->BasisFunction[0].CodeBasisFunction,
         QuantityStorageEqu_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuantityStorageEqu_P->BasisFunction[0].Value,
	 QuantityStorageEqu_P->BasisFunction[0].CodeEntity_Link) ;
      break;
    }
  }

  if (QuantityStorageDof_P && (QuantityStorageDof_P != QuantityStorageEqu_P)) {
    if (QuantityStorageDof_P->NbrElementaryBasisFunction == 1) {

      switch(QuantityStorageDof_P->BasisFunction[0].Constraint) {
      case ASSIGN:
	Dof_UpdateAssignFixedDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
           QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].Value,
           QuantityStorageDof_P->BasisFunction[0].Value2) ;
	break ;
      case CST_LINK:
      case CST_LINKCPLX:
	Dof_UpdateLinkDof
	  (QuantityStorageDof_P->BasisFunction[0].CodeBasisFunction,
           QuantityStorageDof_P->BasisFunction[0].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[0].Value,
	   QuantityStorageDof_P->BasisFunction[0].CodeEntity_Link) ;
	break;
      }
    }

  }
}

/* ------------------------------------------------------------------------ */
/*  P r e _ F e m G l o b a l E q u a t i o n                               */
/* ------------------------------------------------------------------------ */

void  Pre_FemGlobalEquation2(int Index_DefineQuantity, int Num_Region,
			     struct DefineQuantity  * DefineQuantity_P0,
			     struct QuantityStorage * QuantityStorage_P0)
{
  struct DefineQuantity   * DefineQuantity_P ;
  struct QuantityStorage  * QuantityStorage_P ;
  struct GlobalQuantity   * GlobalQuantity_P ;
  struct QuantityStorage  QuaSto_S ;

  DefineQuantity_P  = DefineQuantity_P0  + Index_DefineQuantity ;
  QuantityStorage_P = QuantityStorage_P0 + Index_DefineQuantity ;
  GlobalQuantity_P = (struct GlobalQuantity*)
    List_Pointer(QuantityStorage_P->FunctionSpace->GlobalQuantity,
		 *(int *)List_Pointer(DefineQuantity_P->IndexInFunctionSpace, 0)) ;
  Get_DofOfRegion(Num_Region, GlobalQuantity_P,
		  QuantityStorage_P->FunctionSpace, &QuaSto_S) ;

  if (QuaSto_S.NbrElementaryBasisFunction == 1) {

    switch(QuaSto_S.BasisFunction[0].Constraint) {
    case NONE:
      Dof_DefineUnknownDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar, true) ;
      break ;
    case ASSIGN:
      Dof_DefineAssignFixedDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuaSto_S.BasisFunction[0].Value,
	 QuaSto_S.BasisFunction[0].TimeFunctionIndex) ;
      break ;
    case INIT:
      Dof_DefineInitFixedDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuaSto_S.BasisFunction[0].Value,
	 QuaSto_S.BasisFunction[0].Value2,
         true);
      break;
    case ASSIGNFROMRESOLUTION:
      Dof_DefineAssignSolveDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuaSto_S.BasisFunction[0].TimeFunctionIndex) ;
      break;
    case INITFROMRESOLUTION:
      Dof_DefineInitSolveDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar);
      break;
    case CST_LINK:
      Dof_DefineLinkDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuaSto_S.BasisFunction[0].Value,
	 QuaSto_S.BasisFunction[0].CodeEntity_Link) ;
      break;
    case CST_LINKCPLX:
      Dof_DefineLinkCplxDof
	(QuaSto_S.BasisFunction[0].CodeBasisFunction,
	 QuaSto_S.BasisFunction[0].CodeEntity, Current.NbrHar,
	 QuaSto_S.BasisFunction[0].Value,
	 QuaSto_S.BasisFunction[0].CodeEntity_Link) ;
      break;
    }
  }
}

void Pre_FemGlobalEquation(struct EquationTerm    * EquationTerm_P,
			   struct DefineQuantity  * DefineQuantity_P0,
			   struct QuantityStorage * QuantityStorage_P0)
{
  int  Nbr_GlobalEquationTerm, i_GlobalEquationTerm ;

  struct Constraint           * Constraint_P ;
  struct GlobalEquationTerm   * GlobalEquationTerm_P ;

  int     Nbr_EquAndDof ;

  List_T  * InitialListInIndex_L, * RegionIndex_L ;
  int     Nbr_Region, i_Region, Num_Region ;

  int Nbr_MCPR, i_MCPR, Nbr_CPR, i_CPR, Nbr_GlobalEqu ;
  struct MultiConstraintPerRegion  * MCPR_P ;
  struct ConstraintPerRegion       * CPR_P ;
  struct Group                     * Group_P ;

  struct DofGlobal { int NumRegion ;  struct Dof  * Dof ; } ;

  /* Liste des Regions auxquelles on associe des Equations de Type 'Network' */

  RegionIndex_L = List_Create(50,50, sizeof(int)) ;

  Constraint_P = (struct Constraint*)
    List_Pointer(Problem_S.Constraint,
		 EquationTerm_P->Case.GlobalEquation.ConstraintIndex) ;
  Nbr_MCPR = List_Nbr(Constraint_P->MultiConstraintPerRegion) ;
  for (i_MCPR = 0 ; i_MCPR < Nbr_MCPR ; i_MCPR++) {
    MCPR_P = (struct MultiConstraintPerRegion*)
      List_Pointer(Constraint_P->MultiConstraintPerRegion, i_MCPR) ;
    Nbr_CPR = List_Nbr(MCPR_P->ConstraintPerRegion) ;
    for (i_CPR = 0 ; i_CPR < Nbr_CPR ; i_CPR++) {
      CPR_P = (struct ConstraintPerRegion*)
	List_Pointer(MCPR_P->ConstraintPerRegion, i_CPR) ;
      Group_P = (struct Group *)List_Pointer(Problem_S.Group, CPR_P->RegionIndex) ;
      if (List_Nbr(Group_P->InitialList) == 1) {
	List_Read(Group_P->InitialList, 0, &Num_Region) ;
	if (!List_Search(RegionIndex_L, &Num_Region, fcmp_int))
	  List_Add(RegionIndex_L, &Num_Region) ;
	else
	  Message::Error("2 occurences of Elementary Region #%d in Contraint '%s'",
                         Num_Region, Constraint_P->Name);
      }
      else
	Message::Error("Not 1 Elementary Region in Group '%s'", Group_P->Name);
    }
  }
  Nbr_EquAndDof = List_Nbr(RegionIndex_L) ;
  if (!Nbr_EquAndDof){
    return ;
  }

  /* Codes des Dof globaux pour Equ, DofNode, DofLoop */

  Nbr_GlobalEqu = 0 ;
  Nbr_GlobalEquationTerm =
    List_Nbr(EquationTerm_P->Case.GlobalEquation.GlobalEquationTerm) ;
  for (i_GlobalEquationTerm = 0 ;
       i_GlobalEquationTerm < Nbr_GlobalEquationTerm ; i_GlobalEquationTerm++) {
    GlobalEquationTerm_P = (struct GlobalEquationTerm*)
      List_Pointer(EquationTerm_P->Case.GlobalEquation.GlobalEquationTerm,
		   i_GlobalEquationTerm) ;
    InitialListInIndex_L =
      ((struct Group *)List_Pointer(Problem_S.Group,
				    GlobalEquationTerm_P->InIndex))->InitialList ;
    Nbr_Region = List_Nbr(InitialListInIndex_L) ;
    List_Sort(InitialListInIndex_L, fcmp_int) ;

    for (i_Region = 0 ; i_Region < Nbr_Region ; i_Region++) {
      List_Read(InitialListInIndex_L, i_Region, &Num_Region) ;
      if (List_Search(RegionIndex_L, &Num_Region, fcmp_int)) {
	Pre_FemGlobalEquation2
	  (GlobalEquationTerm_P->DefineQuantityIndexEqu, Num_Region,
	   DefineQuantity_P0, QuantityStorage_P0) ;
	Pre_FemGlobalEquation2
	  (GlobalEquationTerm_P->DefineQuantityIndexNode, Num_Region,
	   DefineQuantity_P0, QuantityStorage_P0) ;
	Pre_FemGlobalEquation2
	  (GlobalEquationTerm_P->DefineQuantityIndexLoop, Num_Region,
	   DefineQuantity_P0, QuantityStorage_P0) ;
	Nbr_GlobalEqu++ ;
      }
    }
  }
  if (Nbr_GlobalEqu != Nbr_EquAndDof){
    Message::Error("Incompatible number of equations with Contraint '%s'",
                   Constraint_P->Name);
    Message::Error("(%d equations obtained while %d branches are defined)",
                   Nbr_GlobalEqu, Nbr_EquAndDof);
  }

  List_Delete(RegionIndex_L) ;
}

/* ------------------------------------------------------------------------ */
/*  C s t _ T e r m O f F e m F o r m u l a t i o n                         */
/* ------------------------------------------------------------------------ */

void Cst_TermOfFemEquation(struct Element          * Element,
			   struct EquationTerm     * EquationTerm_P,
			   struct QuantityStorage  * QuantityStorage_P0)
{
  struct QuantityStorage  * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  int  i ;

  QuantityStorageEqu_P = QuantityStorage_P0 +
    EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;
  QuantityStorageDof_P =
    (EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof >= 0)?
      QuantityStorage_P0 +
	EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof : NULL ;

  if (QuantityStorageEqu_P->NumLastElementForEquDefinition != Element->Num) {
    QuantityStorageEqu_P->NumLastElementForEquDefinition = Element->Num ;

    for (i = 0 ; i < QuantityStorageEqu_P->NbrElementaryBasisFunction ; i++)
      switch(QuantityStorageEqu_P->BasisFunction[i].Constraint){
	/*
      case NONE:
	Dof_DefineUnknownDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar) ;
	break;
	*/
      case ASSIGN:
      case INIT:
	Dof_UpdateAssignFixedDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].Value,
           QuantityStorageEqu_P->BasisFunction[i].Value2) ;
	break;
	/*
      case ASSIGNFROMRESOLUTION:
	Dof_DefineAssignSolveDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].TimeFunctionIndex) ;
	break;
      case INITFROMRESOLUTION:
	Dof_DefineInitSolveDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar);
	break;
	*/
      case CST_LINK:
      case CST_LINKCPLX:
	Dof_UpdateLinkDof
	  (QuantityStorageEqu_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageEqu_P->BasisFunction[i].Value,
	   QuantityStorageEqu_P->BasisFunction[i].CodeEntity_Link) ;
	break;
      }
  }

  if (QuantityStorageDof_P &&
      (QuantityStorageDof_P != QuantityStorageEqu_P) &&
      (QuantityStorageDof_P->NumLastElementForDofDefinition != Element->Num)) {
    QuantityStorageDof_P->NumLastElementForDofDefinition = Element->Num ;

    for (i = 0 ; i < QuantityStorageDof_P->NbrElementaryBasisFunction ; i++)

      switch(QuantityStorageDof_P->BasisFunction[i].Constraint){
      case ASSIGN:
      case INIT:
	Dof_UpdateAssignFixedDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].Value,
           QuantityStorageDof_P->BasisFunction[i].Value2) ;
	break;
	/*
      case ASSIGNFROMRESOLUTION:
	Dof_DefineAssignSolveDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].TimeFunctionIndex) ;
	break;
      case INITFROMRESOLUTION:
	Dof_DefineInitSolveDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar);
	break;
	*/
      case CST_LINK:
      case CST_LINKCPLX:
	Dof_UpdateLinkDof
	  (QuantityStorageDof_P->BasisFunction[i].CodeBasisFunction,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity, Current.NbrHar,
	   QuantityStorageDof_P->BasisFunction[i].Value,
	   QuantityStorageDof_P->BasisFunction[i].CodeEntity_Link) ;
	break;
      }
  }
}
