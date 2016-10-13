// GetDP - Copyright (C) 1997-2013 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "Get_DofOfElement.h"
#include "Get_ElementSource.h"
#include "Pre_TermOfFemEquation.h"
#include "Cal_GalerkinTermOfFemEquation.h"
#include "Cal_SmallFemTermOfFemEquation.h"
#include "Cal_GlobalTermOfFemEquation.h"
#include "Cal_AssembleTerm.h"
#include "Generate_Network.h"
#include "ExtendedGroup.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int     TreatmentStatus ;

extern List_T  * GeoData_L ;

/* ------------------------------------------------------------------------ */
/*  C a l _ F e m G l o b a l E q u a t i o n                               */
/* ------------------------------------------------------------------------ */

struct Dof * Cal_FemGlobalEquation2(int Index_DefineQuantity, int Num_Region,
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

  if (QuaSto_S.NbrElementaryBasisFunction == 1){
    return QuaSto_S.BasisFunction[0].Dof ;
  }
  else {
    Message::Error( "Not 1 Dof associated with GlobalQuantity (Region #%d)", Num_Region) ;
    return NULL ;
  }
}

void  Cal_FemGlobalEquation(struct EquationTerm    * EquationTerm_P,
			    struct DefineQuantity  * DefineQuantity_P0,
			    struct QuantityStorage * QuantityStorage_P0)
{
  int  Nbr_GlobalEquationTerm, i_GlobalEquationTerm ;

  struct Constraint           * Constraint_P ;
  struct GlobalEquationTerm   * GlobalEquationTerm_P ;

  int     Nbr_EquAndDof ;

  List_T  * InitialListInIndex_L, * RegionIndex_L ;
  int     Nbr_Region, i_Region, Num_Region, k ;


  int Nbr_MCPR, i_MCPR, Nbr_CPR, i_CPR,  i_Node, i_Loop, j_Branch, Num_Equ ;
  struct MultiConstraintPerRegion * MCPR_P ;
  struct ConstraintPerRegion      * CPR_P ;
  struct Group                    * Group_P ;
  double  Val[NBR_MAX_HARMONIC] ;

  struct DofGlobal { int NumRegion ;  struct Dof  * Dof ; } ;
  List_T  * DofGlobal_Equ_L, * DofGlobal_DofNode_L, * DofGlobal_DofLoop_L ;
  struct DofGlobal  * DofGlobal_Equ, * DofGlobal_DofNode, * DofGlobal_DofLoop ;
  struct DofGlobal  DofGlobal_S, * DofGlobal_P ;

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
      Group_P = (struct Group *)
	List_Pointer(Problem_S.Group, CPR_P->RegionIndex) ;
      List_Read(Group_P->InitialList, 0, &Num_Region) ;
      if (!List_Search(RegionIndex_L, &Num_Region, fcmp_int))
	List_Add(RegionIndex_L, &Num_Region) ;
      else {
	Message::Error("2 occurences of Elementary Region #%d in Contraint '%s'",
                       Num_Region, Constraint_P->Name);
        return;
      }
    }
  }
  Nbr_EquAndDof = List_Nbr(RegionIndex_L) ;
  if (!Nbr_EquAndDof){
    return ;
  }

  DofGlobal_Equ_L     = List_Create(Nbr_EquAndDof, 1, sizeof(struct DofGlobal)) ;
  DofGlobal_DofNode_L = List_Create(Nbr_EquAndDof, 1, sizeof(struct DofGlobal)) ;
  DofGlobal_DofLoop_L = List_Create(Nbr_EquAndDof, 1, sizeof(struct DofGlobal)) ;

  /* Construction des listes de Dof globaux pour Equ, DofNode, DofLoop */

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
	DofGlobal_S.NumRegion = Num_Region ;
	DofGlobal_S.Dof = Cal_FemGlobalEquation2
	  (GlobalEquationTerm_P->DefineQuantityIndexEqu, Num_Region,
	   DefineQuantity_P0, QuantityStorage_P0) ;
	List_Add(DofGlobal_Equ_L, &DofGlobal_S) ;
	DofGlobal_S.Dof = Cal_FemGlobalEquation2
	  (GlobalEquationTerm_P->DefineQuantityIndexNode, Num_Region,
	   DefineQuantity_P0, QuantityStorage_P0) ;
	List_Add(DofGlobal_DofNode_L, &DofGlobal_S) ;
	DofGlobal_S.Dof = Cal_FemGlobalEquation2
	  (GlobalEquationTerm_P->DefineQuantityIndexLoop, Num_Region,
	   DefineQuantity_P0, QuantityStorage_P0) ;
	List_Add(DofGlobal_DofLoop_L, &DofGlobal_S) ;
      }
    }
  }
  if (List_Nbr(DofGlobal_Equ_L) != Nbr_EquAndDof) {
    Message::Error("Incompatible number of equations with Contraint '%s' "
                   "(%d equations obtained while %d branches are defined)",
                   Constraint_P->Name, List_Nbr(DofGlobal_Equ_L), Nbr_EquAndDof);
    return;
  }

  DofGlobal_Equ     = (struct DofGlobal*)List_Pointer(DofGlobal_Equ_L    , 0) ;
  DofGlobal_DofNode = (struct DofGlobal*)List_Pointer(DofGlobal_DofNode_L, 0) ;
  DofGlobal_DofLoop = (struct DofGlobal*)List_Pointer(DofGlobal_DofLoop_L, 0) ;

  for (k = 0 ; k < List_Nbr(DofGlobal_Equ_L) ; k++) {
    if (DofGlobal_Equ[k].Dof->Type == DOF_FIXED ||
	DofGlobal_Equ[k].Dof->Type == DOF_LINK) {
      if (DofGlobal_Equ[k].Dof == DofGlobal_DofNode[k].Dof)
	DofGlobal_Equ[k].Dof = DofGlobal_DofLoop[k].Dof ;
      else
	DofGlobal_Equ[k].Dof = DofGlobal_DofNode[k].Dof ;
    }
  }

  /* Construction des equations (assemblage) */

  Num_Equ = 0 ;

  Nbr_MCPR = List_Nbr(Constraint_P->MultiConstraintPerRegion) ;
  for (i_MCPR = 0 ; i_MCPR < Nbr_MCPR ; i_MCPR++) {
    MCPR_P = (struct MultiConstraintPerRegion*)
      List_Pointer(Constraint_P->MultiConstraintPerRegion, i_MCPR) ;

    if (!MCPR_P->Active)
      MCPR_P->Active = Generate_Network(MCPR_P->Name, MCPR_P->ConstraintPerRegion) ;

    for (i_Node = 0 ; i_Node < MCPR_P->Active->Case.Network.NbrNode ; i_Node++) {
      for (j_Branch = 0 ;
	   j_Branch < MCPR_P->Active->Case.Network.NbrBranch ; j_Branch++) {

	if (MCPR_P->Active->Case.Network.MatNode[i_Node][j_Branch]) {

	  Group_P = (struct Group *)
	    List_Pointer
	      (Problem_S.Group,
	       ((struct ConstraintPerRegion *)
		List_Pointer(MCPR_P->ConstraintPerRegion, j_Branch))->RegionIndex) ;
	  List_Read(Group_P->InitialList, 0, &Num_Region) ;

	  DofGlobal_P = (struct DofGlobal*)
	    List_PQuery(DofGlobal_DofNode_L, &Num_Region, fcmp_int) ;

	  Val[0] =
	    (double)(MCPR_P->Active->Case.Network.MatNode[i_Node][j_Branch]) ;
	  if (Current.NbrHar > 1) {
	    Val[1] = 0. ;
            for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
	      Val[k] = Val[0] ;  Val[k+1] = 0. ;
	    }
	  }
	  /*
	  Message::Info("Node: eq.(%d) [%d, %d], dof [%d, %d] : %.16g\n",
  	      Num_Equ,
	      DofGlobal_Equ[Num_Equ].Dof->NumType, DofGlobal_Equ[Num_Equ].Dof->Entity,
	      DofGlobal_P->Dof->NumType, DofGlobal_P->Dof->Entity,
	      Val[0]
	      ) ;
	  */
	  Cal_AssembleTerm_NeverDt(DofGlobal_Equ[Num_Equ].Dof, DofGlobal_P->Dof, Val) ;
	}
      }

      Num_Equ++ ;
    }  /* for i_Node ... */

    for (i_Loop = 0 ; i_Loop < MCPR_P->Active->Case.Network.NbrLoop ; i_Loop++) {
      for (j_Branch = 0 ;
	   j_Branch < MCPR_P->Active->Case.Network.NbrBranch ; j_Branch++) {

	if (MCPR_P->Active->Case.Network.MatLoop[i_Loop][j_Branch]) {

	  Group_P = (struct Group *)
	    List_Pointer
	      (Problem_S.Group,
	       ((struct ConstraintPerRegion *)
		List_Pointer(MCPR_P->ConstraintPerRegion, j_Branch))->RegionIndex) ;
	  List_Read(Group_P->InitialList, 0, &Num_Region) ;

	  DofGlobal_P = (struct DofGlobal*)
	    List_PQuery(DofGlobal_DofLoop_L, &Num_Region, fcmp_int) ;

	  Val[0] =
	    (double)(MCPR_P->Active->Case.Network.MatLoop[i_Loop][j_Branch]) ;
	  if (Current.NbrHar > 1) {
	    Val[1] = 0. ;
            for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
	      Val[k] = Val[0] ;  Val[k+1] = 0. ;
	    }
	  }
	  /*
	  Message::Info("Loop: eq.(%d) [%d, %d], dof [%d, %d] : %.16g\n",
	      Num_Equ,
	      DofGlobal_Equ[Num_Equ].Dof->NumType, DofGlobal_Equ[Num_Equ].Dof->Entity,
	      DofGlobal_P->Dof->NumType, DofGlobal_P->Dof->Entity,
	      Val[0]
	      ) ;
	  */
	  Cal_AssembleTerm_NeverDt(DofGlobal_Equ[Num_Equ].Dof, DofGlobal_P->Dof, Val) ;

	}
      }

      Num_Equ++ ;
    }  /* for i_Loop ... */

  }  /* for i_MCPR ... */

  List_Delete(DofGlobal_Equ_L) ;
  List_Delete(DofGlobal_DofNode_L) ;  List_Delete(DofGlobal_DofLoop_L) ;
  List_Delete(RegionIndex_L) ;
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ F e m F o r m u l a t i o n                         */
/* ------------------------------------------------------------------------ */

void  Treatment_FemFormulation(struct Formulation * Formulation_P)
{
  struct Element           Element ;

  struct QuantityStorage   * QuantityStorage_P0, * QuantityStorage_P ;
  struct QuantityStorage   QuantityStorage_S, QuantityStorage_GlobalEqu_S ;
  struct Dof               DofForNoDof_P [NBR_MAX_HARMONIC] ;
  struct EquationTerm      * EquationTerm_P0   , * EquationTerm_P ;
  struct GlobalQuantity    * GlobalQuantity_P ;

  int                      Nbr_DefineQuantity ;
  struct DefineQuantity    * DefineQuantity_P0 , * DefineQuantity_P ;

  List_T                   * FemLocalTermActive_L ;
  struct FemLocalTermActive  FemLocalTermActive_S ;
  List_T                   * QuantityStorage_L ;

  struct FemGlobalTermActive FemGlobalTermActive_S;

  struct Group * GroupIn_P ;

  int    i, j, Nbr_Element, i_Element, Nbr_EquationTerm, i_EquTerm ;
  int    Index_DefineQuantity, 	TraceGroupIndex_DefineQuantity ;

  List_T  * InitialListInIndex_L ;
  int Nbr_Region, i_Region, Num_Region ;
  int i_Region_Dof, Num_Region_Dof, i_Region_Dof_ini, i_Region_Dof_end, i_Region_Dof_skip;

  extern struct Group * Generate_Group ;
  extern double ** MH_Moving_Matrix ;

  gMatrix  A = Current.DofData->A ;
  gVector  b = Current.DofData->b ;

  int Flag_Only ;

  /* --------------------------------------------------------------- */
  /* 0.  Initialization of an active zone (QuantityStorage) for each */
  /*     DefineQuantity                                              */
  /* --------------------------------------------------------------- */

  if (!(Nbr_EquationTerm = List_Nbr(Formulation_P->Equation))){
    Message::Error("No equation in Formulation '%s'", Formulation_P->Name);
    return;
  }

  if (!(Nbr_DefineQuantity = List_Nbr(Formulation_P->DefineQuantity))){
    Message::Error("No Quantity in Formulation '%s'", Formulation_P->Name);
    return;
  }

  DefineQuantity_P0 = (struct DefineQuantity*)
    List_Pointer(Formulation_P->DefineQuantity, 0) ;

  QuantityStorage_L = List_Create(Nbr_DefineQuantity,  1,
				  sizeof (struct QuantityStorage) ) ;

  QuantityStorage_S.NumLastElementForFunctionSpace =
    QuantityStorage_S.NumLastElementForDofDefinition =
      QuantityStorage_S.NumLastElementForEquDefinition = 0 ;

  for (i = 0 ; i < Nbr_DefineQuantity ; i++) {
    QuantityStorage_S.DefineQuantity = DefineQuantity_P0 + i ;

    if(QuantityStorage_S.DefineQuantity->Type == INTEGRALQUANTITY &&
       QuantityStorage_S.DefineQuantity->IntegralQuantity.DefineQuantityIndexDof < 0){
      QuantityStorage_S.FunctionSpace = NULL ;
      QuantityStorage_S.TypeQuantity = VECTOR ; /* to change */
    }
    else{
      QuantityStorage_S.FunctionSpace = (struct FunctionSpace*)
	List_Pointer(Problem_S.FunctionSpace,
		     QuantityStorage_S.DefineQuantity->FunctionSpaceIndex) ;
      QuantityStorage_S.TypeQuantity = QuantityStorage_S.FunctionSpace->Type ;
    }

    List_Add(QuantityStorage_L, &QuantityStorage_S) ;
  }

  QuantityStorage_P0 = (struct QuantityStorage*)List_Pointer(QuantityStorage_L, 0) ;

  Get_InitDofOfElement(&Element) ;


  /* --------------------------------------------------------------- */
  /* 1.  Initialization of equation terms                            */
  /* --------------------------------------------------------------- */

  EquationTerm_P0 = (struct EquationTerm*)List_Pointer(Formulation_P->Equation, 0) ;
  FemLocalTermActive_L = List_Create(Nbr_EquationTerm,  1,
				     sizeof (struct FemLocalTermActive) ) ;

  for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {
    List_Add(FemLocalTermActive_L, &FemLocalTermActive_S) ;
    EquationTerm_P = EquationTerm_P0 + i_EquTerm ;

    switch(EquationTerm_P->Type){

    case GALERKIN :
      EquationTerm_P->Case.LocalTerm.Active = (struct FemLocalTermActive*)
	List_Pointer(FemLocalTermActive_L, i_EquTerm) ;
      switch (TreatmentStatus) {
      case _PRE :
	Pre_InitTermOfFemEquation(EquationTerm_P, QuantityStorage_P0) ;
	break ;
      case _CAL :
	Cal_InitGalerkinTermOfFemEquation(EquationTerm_P, QuantityStorage_P0,
					  &QuantityStorage_S, DofForNoDof_P) ;
	break ;
      }
      break;

    case GLOBALTERM :
      switch (TreatmentStatus) {
      case _PRE :
	Pre_InitGlobalTermOfFemEquation(EquationTerm_P, QuantityStorage_P0) ;
	break ;
      }
      break;

    case GLOBALEQUATION :
      break ;

    default :
      Message::Error("Unknown type of equation term") ;
      break ;
    }

  }

  /* ---------------------------------------------------------- */
  /* 2.  Loop on geometrical elements :                         */
  /*     Treatment of eventual GALERKIN terms                   */
  /*  --------------------------------------------------------- */

  Nbr_Element = Geo_GetNbrGeoElements() ;

  Message::ResetProgressMeter();

  for (i_Element = 0 ; i_Element < Nbr_Element; i_Element++) {

    if (Generate_Group) {
      Element.Region = Geo_GetGeoElement(i_Element)->Region ;
      while (i_Element < Nbr_Element &&
	     !List_Search(Generate_Group->InitialList,
			  &Element.Region, fcmp_int) ) {
	i_Element++ ;
	if (i_Element < Nbr_Element) Element.Region = Geo_GetGeoElement(i_Element)->Region ;
      }
      if (i_Element == Nbr_Element) break ;
    }

    Element.GeoElement = Geo_GetGeoElement(i_Element) ;
    Element.Num    = Element.GeoElement->Num ;
    Element.Type   = Element.GeoElement->Type ;
    Current.Region = Element.Region = Element.GeoElement->Region ;

    /* ---------------------------- */
    /* 2.1.  Loop on equation terms */
    /* ---------------------------- */

    for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {
      EquationTerm_P = EquationTerm_P0 + i_EquTerm ;

      if (EquationTerm_P->Type == GALERKIN) {

	/* if the element is in the support of integration of the term */
	/* ----------------------------------------------------------- */

	GroupIn_P = (struct Group *)
	  List_Pointer(Problem_S.Group,
		       EquationTerm_P->Case.LocalTerm.InIndex);


	if ((GroupIn_P->Type != ELEMENTLIST  &&
	     List_Search(GroupIn_P->InitialList, &Element.Region, fcmp_int))
	    ||
	    (GroupIn_P->Type == ELEMENTLIST  &&
	     Check_IsEntityInExtendedGroup(GroupIn_P, Element.Num, 0))
	    ) {

	/*
	if (List_Search(((struct Group *)
			 List_Pointer(Problem_S.Group,
				      EquationTerm_P->Case.
				      LocalTerm.InIndex))->InitialList,
			&Element.Region, fcmp_int ) ) {
	*/

	  if(Message::GetVerbosity() == 10)
	    printf("==> Element #%d, EquationTerm #%d/%d\n",
		   Element.Num, i_EquTerm+1, Nbr_EquationTerm) ;

	  Current.IntegrationSupportIndex = EquationTerm_P->Case.LocalTerm.InIndex ;

	  /* ---------------------------------------------------------- */
	  /* 2.1.1.  Loop on quantities (test fcts and shape functions) */
	  /* ---------------------------------------------------------- */

	  for (i = 0 ; i < EquationTerm_P->Case.LocalTerm.Term.NbrQuantityIndex ; i++) {

	    Index_DefineQuantity =
	      EquationTerm_P->Case.LocalTerm.Term.QuantityIndexTable[i] ;
	    DefineQuantity_P  = DefineQuantity_P0  + Index_DefineQuantity ;
	    QuantityStorage_P = QuantityStorage_P0 + Index_DefineQuantity ;

	    TraceGroupIndex_DefineQuantity =
	      EquationTerm_P->Case.LocalTerm.Term.QuantityTraceGroupIndexTable[i] ;

	    /* Only one analysis for each function space */

	    /*
	     * Attention : l'operateur de trace ne fonctionne que si le champ
	     * dont on prend la trace n'intervient qu'une seule fois dans le terme.
	     * du a - manque de generalite du code au niveau de la gestion des
	     *        espaces fonctionnels des fcts tests  pour 'Trace de Dof'
	     *      - et Christophe fatigue
	     */

	    if (QuantityStorage_P->NumLastElementForFunctionSpace != Element.Num ||
		TraceGroupIndex_DefineQuantity >= 0 ) {

	      QuantityStorage_P->NumLastElementForFunctionSpace = Element.Num ;

	      switch (DefineQuantity_P->Type) {
	      case LOCALQUANTITY :
		if(TraceGroupIndex_DefineQuantity >= 0){
		  Get_ElementTrace(&Element, TraceGroupIndex_DefineQuantity) ;
		  QuantityStorage_P->NumLastElementForFunctionSpace = Element.ElementTrace->Num ;
		  Get_DofOfElement
		    (Element.ElementTrace, QuantityStorage_P->FunctionSpace, QuantityStorage_P,
		     DefineQuantity_P->IndexInFunctionSpace) ;
		}
                else{
		  Get_DofOfElement
		    (&Element, QuantityStorage_P->FunctionSpace, QuantityStorage_P,
		     DefineQuantity_P->IndexInFunctionSpace) ;
		}
		break ;
	      case INTEGRALQUANTITY :
		QuantityStorage_P->NbrElementaryBasisFunction = 0 ;
		break ;
	      default :
		Message::Error("Bad kind of Quantity in Formulation '%s'",
                               Formulation_P->Name);
		break;
	      }
	    }
	  }  /* for i = 0, 1 ... */

	  /* -------------------------------------- */
	  /* 2.1.2.  Treatment of the equation term */
	  /* -------------------------------------- */

	  switch (TreatmentStatus) {
	  case _PRE :
	    Pre_TermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
	    break ;
	  case _CAL :
	    Flag_Only = 0 ;

	    if (Current.DofData->Flag_Only){
	      A = Current.DofData->A ;
	      b = Current.DofData->b ;

	      if (EquationTerm_P->Case.LocalTerm.MatrixIndex == -1)
		EquationTerm_P->Case.LocalTerm.MatrixIndex = 0 ;

	      j = List_ISearch(Current.DofData->OnlyTheseMatrices,
			       &EquationTerm_P->Case.LocalTerm.MatrixIndex, fcmp_int) ;
	      if(j!=-1){
		Flag_Only = 1 ;
		switch(EquationTerm_P->Case.LocalTerm.MatrixIndex){
		case 1 :
		  Current.DofData->A = Current.DofData->A1 ;
		  Current.DofData->b = Current.DofData->b1 ;
		  break;
		case 2 :
		  Current.DofData->A = Current.DofData->A2 ;
		  Current.DofData->b = Current.DofData->b2 ;
		  break;
		case 3 :
		  Current.DofData->A = Current.DofData->A3 ;
		  Current.DofData->b = Current.DofData->b3 ;
		  break;
		}
	      }
	    }/* Only the matrices that vary are recalculated */

	    if (!Current.DofData->Flag_Only || (Current.DofData->Flag_Only && Flag_Only) ){
	      QuantityStorage_P = QuantityStorage_P0 +
		EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;

	      if(EquationTerm_P->Type == GALERKIN){
#if defined(HAVE_SMALLFEM)
                Cal_SmallFemTermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
#else
                Cal_GalerkinTermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
#endif
              }
	      if (Current.DofData->Flag_Only && Flag_Only){
		Current.DofData->A = A ;
		Current.DofData->b = b ;
	      }

	    }/* Flag_Only */
	    break ;

          case _CST :
            Cst_TermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
            break ;

	  }

	}/* if Support ... */

      } /* if GALERKIN ... */

    }  /* for i_EquTerm ... */

    Message::ProgressMeter(i_Element + 1, Nbr_Element, (TreatmentStatus == _PRE) ?
                           "Pre-processing" : "Processing (Generate)");
    if(Message::GetErrorCount()) break;
  }  /* for i_Element ... */


  if (MH_Moving_Matrix) {
    List_Delete(FemLocalTermActive_L) ;  List_Delete(QuantityStorage_L) ;
    return;
  }

  /* ------------------------------------------------------ */
  /* 3.  Loop on equation terms :                           */
  /*     Treatment of eventual GLOBAL terms                 */
  /* ------------------------------------------------------ */

  for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {

    EquationTerm_P = EquationTerm_P0 + i_EquTerm ;

    if (EquationTerm_P->Type == GLOBALTERM) {

      EquationTerm_P->Case.GlobalTerm.Active = &FemGlobalTermActive_S;

      InitialListInIndex_L =
	((struct Group *)List_Pointer(Problem_S.Group,
				      EquationTerm_P->Case.GlobalTerm.InIndex))
	->InitialList ;
      List_Sort(InitialListInIndex_L, fcmp_int) ;
      Nbr_Region = List_Nbr(InitialListInIndex_L) ;

      /* ---------------------------------------------- */
      /* 3.1.  Loop on Regions belonging to the support */
      /* ---------------------------------------------- */

      for (i_Region = 0 ; i_Region < Nbr_Region ; i_Region++) {
	List_Read(InitialListInIndex_L, i_Region, &Num_Region) ;
	Current.Region = Num_Region ;

        switch (EquationTerm_P->Case.GlobalTerm.SubType) {
        case EQ_ST_SELF:
          i_Region_Dof_ini = i_Region; i_Region_Dof_end = i_Region+1;
          i_Region_Dof_skip = -1;
          break;
        case EQ_ST_MUTUAL:
          i_Region_Dof_ini = 0; i_Region_Dof_end = Nbr_Region;
          i_Region_Dof_skip = i_Region;
          break;
        case EQ_ST_SELFANDMUTUAL:
          i_Region_Dof_ini = 0; i_Region_Dof_end = Nbr_Region;
          i_Region_Dof_skip = -1;
          break;
        }

        // Possible mutual terms (need of double-piece-wise Function fct[r1,r2])
        for (i_Region_Dof = i_Region_Dof_ini; i_Region_Dof < i_Region_Dof_end;
             i_Region_Dof++) {

          if (i_Region_Dof != i_Region_Dof_skip) {

            List_Read(InitialListInIndex_L, i_Region_Dof, &Num_Region_Dof) ;
            Current.SubRegion = Num_Region_Dof; // used in double-piece-wise Function

            /* ---------------------------------------------------------------- */
            /* 3.1.1.   Loop on Quantities (test functions and shape functions) */
            /* ---------------------------------------------------------------- */

            for (i = 0 ; i < EquationTerm_P->Case.GlobalTerm.Term.NbrQuantityIndex ; i++) {

              Index_DefineQuantity =
                EquationTerm_P->Case.GlobalTerm.Term.QuantityIndexTable[i] ;
              DefineQuantity_P  = DefineQuantity_P0  + Index_DefineQuantity ;
              QuantityStorage_P = QuantityStorage_P0 + Index_DefineQuantity ;
              GlobalQuantity_P = (struct GlobalQuantity*)
                List_Pointer(QuantityStorage_P->FunctionSpace->GlobalQuantity,
                             *(int*)List_Pointer(DefineQuantity_P->IndexInFunctionSpace, 0)) ;

              /* Only one Function space analysis */
              /* -------------------------------- */
              if (QuantityStorage_P->NumLastElementForFunctionSpace != Num_Region_Dof) {
                QuantityStorage_P->NumLastElementForFunctionSpace = Num_Region_Dof ;

                switch (DefineQuantity_P->Type) {
                case GLOBALQUANTITY :
                  Get_DofOfRegion
                    (Num_Region_Dof, GlobalQuantity_P,
                     QuantityStorage_P->FunctionSpace, QuantityStorage_P) ;
                  break ;
                default :
                  Message::Error("Bad kind of Quantity in Formulation '%s'",
                                 Formulation_P->Name);
                  break;
                }
              }

              // Particular QuantityStorage for Equ
              if (Num_Region != Num_Region_Dof &&
                  Index_DefineQuantity ==
                  EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexEqu) {
                switch (DefineQuantity_P->Type) {
                case GLOBALQUANTITY :
                  Get_DofOfRegion
                    (Num_Region, GlobalQuantity_P,
                     QuantityStorage_P->FunctionSpace, &QuantityStorage_GlobalEqu_S) ;
                  break ;
                default :
                  Message::Error("Bad kind of Quantity in Formulation '%s'",
                                 Formulation_P->Name);
                  break;
                }
              }

            }  /* for i = 0, 1 ... */

            // QuantityStorage for Equ and Dof (can differ for SubType Mutual)
            EquationTerm_P->Case.GlobalTerm.Active->QuantityStorageEqu_P =
              (Num_Region == Num_Region_Dof)?
              QuantityStorage_P0 +
              EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexEqu
              :
              &QuantityStorage_GlobalEqu_S
              ;

            EquationTerm_P->Case.GlobalTerm.Active->flag_Dof =
              (EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof >= 0);

            EquationTerm_P->Case.GlobalTerm.Active->QuantityStorageDof_P =
              (EquationTerm_P->Case.GlobalTerm.Active->flag_Dof)?
              QuantityStorage_P0 +
              EquationTerm_P->Case.GlobalTerm.Term.DefineQuantityIndexDof
              : NULL;

            /* ------------------------------ */
            /* 3.1.2.  Treatment of the term  */
            /* ------------------------------ */

            switch (TreatmentStatus) {
            case _PRE :
              Pre_GlobalTermOfFemEquation(Num_Region, EquationTerm_P,
                                          QuantityStorage_P0) ;
              break ;
            case _CAL :
              Cal_GlobalTermOfFemEquation(Num_Region, EquationTerm_P,
                                          QuantityStorage_P0,
                                          &QuantityStorage_S, DofForNoDof_P) ;
              break ;
            case _CST :
              Cst_GlobalTermOfFemEquation(Num_Region, EquationTerm_P,
                                          QuantityStorage_P0) ;
              break ;
            }

          }
        } // for i_Region_Dof
      } // for i_Region

    }  /* if GLOBALTERM ... */
  }  /* for i_EquTerm ... */


  /* --------------------------------------------------------- */
  /* 4.  Loop on equation terms :                              */
  /*     Treatment of eventual GLOBAL EQUATION terms           */
  /* --------------------------------------------------------- */

  for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {
    EquationTerm_P = EquationTerm_P0 + i_EquTerm ;

    if (EquationTerm_P->Type == GLOBALEQUATION) {

      if (EquationTerm_P->Case.GlobalEquation.ConstraintIndex >= 0)

	  switch (TreatmentStatus) {
	  case _PRE :
	    Pre_FemGlobalEquation(EquationTerm_P,
				  DefineQuantity_P0, QuantityStorage_P0) ;
	    break ;
	  case _CAL :
	    Cal_FemGlobalEquation(EquationTerm_P,
				  DefineQuantity_P0, QuantityStorage_P0) ;
	    break ;
	  }

    }  /* if GLOBALEQUATION ... */
  }  /* for i_EquTerm ... */


  /* -------------------------- */
  /* 5.   End of FEM treatment  */
  /* -------------------------- */

  List_Delete(FemLocalTermActive_L) ;  List_Delete(QuantityStorage_L) ;
  Cal_EndGalerkinTermOfFemEquation();
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ G l o b a l F o r m u l a t i o n                   */
/* ------------------------------------------------------------------------ */

void  Treatment_GlobalFormulation(struct Formulation * Formulation_P)
{
  Message::Error("You should not be here!") ;
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ F o r m u l a t i o n                               */
/* ------------------------------------------------------------------------ */

void  Treatment_Formulation(struct Formulation * Formulation_P)
{
  switch (Formulation_P->Type) {

  case FEMEQUATION :
    Treatment_FemFormulation(Formulation_P) ;
    break ;

  case GLOBALEQUATION :
    Treatment_GlobalFormulation(Formulation_P) ;
    break ;

  default :
    Message::Error("Unknown type for Formulation '%s'", Formulation_P->Name) ;
    break ;
  }
}
