#define RCSID "$Id: Treatment_Formulation.c,v 1.5 2000-10-30 01:29:48 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Get_DofOfElement.h"
#include "ExtendedGroup.h"
#include "GeoData.h"
#include "DofData.h"
#include "CurrentData.h"
#include "Tools.h"

extern List_T  * GeoData_L ;

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ F o r m u l a t i o n                               */
/* ------------------------------------------------------------------------ */

void  Treatment_Formulation(struct Formulation * Formulation_P) {

  GetDP_Begin("Treatment_Formulation");

  switch (Formulation_P->Type) {

  case FEMEQUATION :
    Treatment_FemFormulation(Formulation_P) ;
    break ;

  case GLOBALEQUATION :
    Treatment_GlobalFormulation(Formulation_P) ;
    break ;

  default :
    Msg(ERROR, "Unknown Type for Formulation '%s'", Formulation_P->Name) ;
    break ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ F e m F o r m u l a t i o n                         */
/* ------------------------------------------------------------------------ */

void  Treatment_FemFormulation(struct Formulation * Formulation_P) {

  struct Element           Element ;

  struct QuantityStorage   * QuantityStorage_P0, * QuantityStorage_P ;
  struct QuantityStorage   QuantityStorage_S ;
  struct Dof               DofForNoDof_P [NBR_MAX_HARMONIC] ;
  struct EquationTerm      * EquationTerm_P0   , * EquationTerm_P ;
  struct GlobalQuantity    * GlobalQuantity_P ;

  int                      Nbr_DefineQuantity ;
  struct DefineQuantity    * DefineQuantity_P0 , * DefineQuantity_P ;

  List_T                   * FemLocalTermActive_L ;
  struct FemLocalTermActive* FemLocalTermActive_S ;
  List_T                   * QuantityStorage_L ;

  int    i, Nbr_Element, i_Element, Nbr_EquationTerm, i_EquTerm ;
  int    Index_DefineQuantity, 	TraceGroupIndex_DefineQuantity ;
  int    Nbr_UnusedEquation ;

  List_T  * InitialListInIndex_L ;
  int     Nbr_Region, i_Region, Num_Region ;

  GetDP_Begin("Treatment_FemFormulation");

  /* --------------------------------------------------------------- */
  /* 0.  Initialization of an active zone (QuantityStorage) for each */
  /*     DefineQuantity                                              */
  /* --------------------------------------------------------------- */

  if (!(Nbr_EquationTerm = List_Nbr(Formulation_P->Equation)))
    Msg(ERROR, "No Equation in Formulation '%s'", Formulation_P->Name);
  
  if (!(Nbr_DefineQuantity = List_Nbr(Formulation_P->DefineQuantity)))
    Msg(ERROR, "No DefineQuantity for Formulation '%s'", Formulation_P->Name);

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

    case DERHAM :
      EquationTerm_P->Case.LocalTerm.Active = (struct FemLocalTermActive*)
	List_Pointer(FemLocalTermActive_L, i_EquTerm) ;
      switch (TreatmentStatus) {
      case _PRE :
	Pre_InitTermOfFemEquation(EquationTerm_P, QuantityStorage_P0) ;
	break ;
      case _CAL :
	Cal_InitdeRhamTermOfFemEquation(EquationTerm_P, QuantityStorage_P0,
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
      Msg(ERROR, "Unknown Type of Equation Term") ;
      break ;
    }

  }  


  /* ---------------------------------------------------------- */
  /* 2.  Loop on geometrical elements :                         */
  /*     Treatment of eventual GALERKIN / DERAHM terms          */
  /*  --------------------------------------------------------- */
  
  Nbr_Element = Geo_GetNbrGeoElements() ;

  for (i_Element = 0 ; i_Element < Nbr_Element; i_Element++) {

    Progress(i_Element, Nbr_Element, "") ;

    Element.GeoElement = Geo_GetGeoElement(i_Element) ;
    Element.Num    = Element.GeoElement->Num ;
    Element.Type   = Element.GeoElement->Type ;
    Current.Region = Element.Region = Element.GeoElement->Region ;

    /* ---------------------------- */
    /* 2.1.  Loop on equation terms */
    /* ---------------------------- */

    for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {

      EquationTerm_P = EquationTerm_P0 + i_EquTerm ;

      if (EquationTerm_P->Type == GALERKIN ||
	  EquationTerm_P->Type == DERHAM) {

	/* if the element is in the support of integration of the term */
	/* ----------------------------------------------------------- */

	if (List_Search(((struct Group *)
			 List_Pointer(Problem_S.Group,
				      EquationTerm_P->Case.
				      LocalTerm.InIndex))->InitialList, 
			&Element.Region, fcmp_int ) ) {

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
	     * dont on prend la trace n'intrvient qu'une seule fois dans le terme.
	     * du a - manque de generalite du code au niveau de la gestion des 
	     *        espaces fonctionnels des fcts tests  pour 'Trace de Dof'
	     *      - et Christophe fatigué 
	     */

	    if (QuantityStorage_P->NumLastElementForFunctionSpace != Element.Num ||
		TraceGroupIndex_DefineQuantity >= 0) {
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
		Msg(ERROR, "Bad kind of Quantity in Formulation '%s'",
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
	  case _PAR :
	    Par_TermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
	    break ;
	  case _CAL :
	    Nbr_UnusedEquation = 0;
	    QuantityStorage_P = QuantityStorage_P0 + 
	      EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexEqu ;

	    if(Current.NbrCpu > 1){
	      for(i = 0 ; i < QuantityStorage_P->NbrElementaryBasisFunction ; i++){
		if(QuantityStorage_P->BasisFunction[i].Dof->Type == DOF_SYMMETRICAL){
		  if(QuantityStorage_P->BasisFunction[i].Dof->Case.Symmetrical.NumDof >= 
		     QuantityStorage_P->FunctionSpace->DofData->Part[Current.RankCpu] &&
		     QuantityStorage_P->BasisFunction[i].Dof->Case.Symmetrical.NumDof < 
		     QuantityStorage_P->FunctionSpace->DofData->Part[Current.RankCpu+1])
		    break;
		  else
		    Nbr_UnusedEquation += 1; 
		}
	      }
	    }

	    if(Nbr_UnusedEquation != QuantityStorage_P->NbrElementaryBasisFunction){
	      if(EquationTerm_P->Type == GALERKIN)
		Cal_GalerkinTermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
	      else
		Cal_deRhamTermOfFemEquation(&Element, EquationTerm_P, QuantityStorage_P0) ;
	    }
	    break ;
	  }

	}  /* if Support ... */

      }  /* if GALERKIN ... */

    }  /* for i_EquTerm ... */

  }  /* for i_Element ... */



  /* ------------------------------------------------------ */
  /* 3.  Loop on equation terms :                           */
  /*     Treatment of eventual GLOBAL terms                 */
  /* ------------------------------------------------------ */

  for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {

    EquationTerm_P = EquationTerm_P0 + i_EquTerm ;

    if (EquationTerm_P->Type == GLOBALTERM) {

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
	  
	  if (QuantityStorage_P->NumLastElementForFunctionSpace != Num_Region) {
	    QuantityStorage_P->NumLastElementForFunctionSpace = Num_Region ;
	    
	    switch (DefineQuantity_P->Type) {
	    case GLOBALQUANTITY :
	      Get_DofOfRegion
		(Num_Region, GlobalQuantity_P,
		 QuantityStorage_P->FunctionSpace, QuantityStorage_P) ;
	      break ;
	    default :
	      Msg(ERROR, "Bad kind of Quantity in Formulation '%s'",
		  Formulation_P->Name);
	      break;
	    }
	  }
	}  /* for i = 0, 1 ... */
	
	/* ------------------------------ */
	/* 3.1.2.  Treatment of the term  */
	/* ------------------------------ */

	switch (TreatmentStatus) {
	case _PRE :
	  Pre_GlobalTermOfFemEquation(Num_Region, EquationTerm_P,
				      QuantityStorage_P0) ;
	  break ;
	case _PAR :
	  Msg(ERROR, "Partitionning not done for Global Terms");
	  break;
	case _CAL :
	  Cal_GlobalTermOfFemEquation(Num_Region, EquationTerm_P,
				      QuantityStorage_P0,
				      &QuantityStorage_S, DofForNoDof_P) ;
	  break ;
	}
	
      }
      
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
	  case _PAR :
	    Msg(ERROR, "Partitionning not done for Global Equations");
	    break;
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

  GetDP_End ;
}




/* ------------------------------------------------------------------------ */
/*  C a l _ F e m G l o b a l E q u a t i o n                               */
/* ------------------------------------------------------------------------ */

void  Cal_FemGlobalEquation(struct EquationTerm    * EquationTerm_P,
			    struct DefineQuantity  * DefineQuantity_P0,
			    struct QuantityStorage * QuantityStorage_P0) {

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

  struct Dof * Cal_FemGlobalEquation2(int Index_DefineQuantity, int Num_Region,
				      struct DefineQuantity  * DefineQuantity_P0,
				      struct QuantityStorage * QuantityStorage_P0) ;

  GetDP_Begin("Cal_FemGlobalEquation");

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
	Msg(ERROR, "2 occurences of Elementary Region #%d in Contraint '%s'",
	    Num_Region, Constraint_P->Name);
      }
    }
  }
  Nbr_EquAndDof = List_Nbr(RegionIndex_L) ;
  if (!Nbr_EquAndDof){
    GetDP_End ;
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
    Msg(ERROR, "Incompatible number of equations with Contraint '%s'.\n",
	       "(%d equations obtained while %d branches are defined)",
	Constraint_P->Name, List_Nbr(DofGlobal_Equ_L), Nbr_EquAndDof);
  }


  DofGlobal_Equ     = (struct DofGlobal*)List_Pointer(DofGlobal_Equ_L    , 0) ;
  DofGlobal_DofNode = (struct DofGlobal*)List_Pointer(DofGlobal_DofNode_L, 0) ;
  DofGlobal_DofLoop = (struct DofGlobal*)List_Pointer(DofGlobal_DofLoop_L, 0) ;

  for (k = 0 ; k < List_Nbr(DofGlobal_Equ_L) ; k++) {
    if (DofGlobal_Equ[k].Dof->Type == DOF_FIXED) {
      if (DofGlobal_DofNode[k].Dof == DofGlobal_Equ[k].Dof)
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
      MCPR_P->Active = Generate_Network(MCPR_P->ConstraintPerRegion) ;
    
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
	    for (k = 2 ; k < Current.NbrHar ; k += 2) {
	      Val[k] = Val[0] ;  Val[k+1] = 0. ;
	    }
	  }
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
	    for (k = 2 ; k < Current.NbrHar ; k += 2) {
	      Val[k] = Val[0] ;  Val[k+1] = 0. ;
	    }
	  }
	  Cal_AssembleTerm_NeverDt(DofGlobal_Equ[Num_Equ].Dof, DofGlobal_P->Dof, Val) ;

	}
      }

      Num_Equ++ ;
    }  /* for i_Loop ... */
    
  }  /* for i_MCPR ... */

  List_Delete(DofGlobal_Equ_L) ;
  List_Delete(DofGlobal_DofNode_L) ;  List_Delete(DofGlobal_DofLoop_L) ;
  List_Delete(RegionIndex_L) ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */

struct Dof * Cal_FemGlobalEquation2(int Index_DefineQuantity, int Num_Region,
				    struct DefineQuantity  * DefineQuantity_P0,
				    struct QuantityStorage * QuantityStorage_P0) {

  struct DefineQuantity   * DefineQuantity_P ;
  struct QuantityStorage  * QuantityStorage_P ;
  struct GlobalQuantity   * GlobalQuantity_P ;
  struct QuantityStorage  QuaSto_S ;

  GetDP_Begin("Cal_FemGlobalEquation2");

  DefineQuantity_P  = DefineQuantity_P0  + Index_DefineQuantity ;
  QuantityStorage_P = QuantityStorage_P0 + Index_DefineQuantity ;
  GlobalQuantity_P = (struct GlobalQuantity*)
    List_Pointer(QuantityStorage_P->FunctionSpace->GlobalQuantity,
		 *(int *)List_Pointer(DefineQuantity_P->IndexInFunctionSpace, 0)) ;
  Get_DofOfRegion(Num_Region, GlobalQuantity_P,
		  QuantityStorage_P->FunctionSpace, &QuaSto_S) ;

  if (QuaSto_S.NbrElementaryBasisFunction == 1){
    GetDP_Return(QuaSto_S.BasisFunction[0].Dof) ;
  }
  else {
    Msg(ERROR, "Not 1 Dof associated with GlobalQuantity (Region #%d)",	Num_Region) ;
    GetDP_Return(NULL) ;
  }

}



/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ G l o b a l F o r m u l a t i o n                   */
/* ------------------------------------------------------------------------ */

void  Treatment_GlobalFormulation(struct Formulation * Formulation_P) {

  GetDP_Begin("Treatment_GlobalFormulation");

  Msg(ERROR, "You should not be here!") ;

  GetDP_End ;
}
