#define RCSID "$Id: Get_ConstraintOfElement.c,v 1.7 2000-11-13 09:37:08 dular Exp $"
#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "GetDP.h"
#include "Get_DofOfElement.h"
#include "ExtendedGroup.h"
#include "Cal_Quantity.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Tools.h"

extern int  Nbr_ElementaryBF ;


/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ C o n s t r a i n t F o r E l e m e n t             */
/* ------------------------------------------------------------------------ */

void  Treatment_ConstraintForElement(struct FunctionSpace    * FunctionSpace_P,
				     struct QuantityStorage  * QuantityStorage_P,
				     int Num_Entity[], int i_Entity,
				     int i_BFunction, int TypeConstraint) {

  int                    Nbr_Constraint, i_Constraint ;
  List_T                      * Constraint_L ;
  struct ConstraintInFS       * Constraint_P ;
  struct ConstraintPerRegion  * ConstraintPerRegion_P ;
  struct GlobalQuantity       * GlobalQuantity_P ;
  struct Group                * GroupEntity_Pr ;

  GetDP_Begin("Treatment_ConstraintForElement");

  QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint = NONE ;

  Constraint_L = FunctionSpace_P->Constraint ;
  Nbr_Constraint = List_Nbr(Constraint_L) ;
  
  for (i_Constraint = 0 ;
       i_Constraint < Nbr_Constraint &&
	 ! QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint ;
       i_Constraint++) {
    
    Constraint_P =
      (struct ConstraintInFS*)List_Pointer(Constraint_L, i_Constraint) ;
    ConstraintPerRegion_P = Constraint_P->ConstraintPerRegion ;

    switch(ConstraintPerRegion_P->Type) {
	
    case ASSIGN :                case INIT :
    case ASSIGNFROMRESOLUTION :  case INITFROMRESOLUTION :
    case CST_LINK :
	
      switch(Constraint_P->QuantityType) {

      case LOCALQUANTITY :

	if(Constraint_P->ReferenceIndex == i_BFunction) {
	  GroupEntity_Pr = (struct Group*)
	    List_Pointer(Problem_S.Group, Constraint_P->EntityIndex) ;
	  if(Check_IsEntityInExtendedGroup(GroupEntity_Pr,
					   abs(Num_Entity[i_Entity]), 1)) {
	    QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint =
	      ConstraintPerRegion_P->Type ;

	    if (ConstraintPerRegion_P->Type == ASSIGN ||
		ConstraintPerRegion_P->Type == INIT) {

	      switch (TypeConstraint) {
	      case NODESOF :  
	      case GROUPSOFEDGESONNODESOF :
		Current.NumEntity = abs(Num_Entity[i_Entity]) ;
		Geo_GetNodesCoordinates( 1, &Current.NumEntity,
					 &Current.x, &Current.y, &Current.z) ;
		/* Il faudrait mettre un message pour les gens qui 
		   voudraient utiliser CompXYZ en prepro. Ils risquent d'avoir des 
		   resultats surprenants : u=v=w=0 tjs et pas les coord du noeud  */
		break ;
	      case EDGESOF :
		Current.NumEntityInElement = i_Entity ;  
		break ;
	      }

	      Get_ValueForConstraint
		(Constraint_P,
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 TimeFunctionIndex) ;
	    }
	    else if (ConstraintPerRegion_P->Type == CST_LINK) {
	      Get_LinkForConstraint
		(Constraint_P,
		 abs(Num_Entity[i_Entity]),
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 CodeEntity_Link,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Coef) ;
	      if (abs(Num_Entity[i_Entity]) ==
		  QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		  CodeEntity_Link)
		QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint =
		  NONE ;
	    }
	    else {
	      Get_PreResolutionForConstraint
		(Constraint_P,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 TimeFunctionIndex) ;
	    }

	  }
	}
	break ; /* LOCALQUANTITY */
	
      case GLOBALQUANTITY :
	
	GlobalQuantity_P = (struct GlobalQuantity*)
	  List_Pointer(FunctionSpace_P->GlobalQuantity,
		       Constraint_P->ReferenceIndex) ;
	if ((GlobalQuantity_P->Type == ALIASOF) &&
	    (GlobalQuantity_P->ReferenceIndex == i_BFunction)) {
    
	  GroupEntity_Pr = (struct Group*)
	    List_Pointer(Problem_S.Group, Constraint_P->EntityIndex) ;
	  
	  if (List_Search(GroupEntity_Pr->InitialList,
			  &Num_Entity[i_Entity], fcmp_int)) {
	    
	    QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint =
	      ConstraintPerRegion_P->Type ;

	    if (ConstraintPerRegion_P->Type == ASSIGN ||
		ConstraintPerRegion_P->Type == INIT) {
	      Get_ValueForConstraint
		(Constraint_P,
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 TimeFunctionIndex) ;
	    }
	    else if (ConstraintPerRegion_P->Type == CST_LINK) {
	      Msg(ERROR, "CST_LINK for GlobalQuantity not done yet\n") ;
	    }
	    else {
	      Get_PreResolutionForConstraint
		(Constraint_P,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 TimeFunctionIndex) ;
	    }
	  }
	}		
	break ; /* GLOBALQUANTITY */

      default :
	Msg(ERROR, "Unknown Type of Quantity in Constraint of type Fixed");
	break;

      }
      
      break ;  /* ASSIGN || INIT || ASSIGNFROMRESOLUTION || INITFROMRESOLUTION */

    default :
      Msg(ERROR, "Unknown Type of Constraint");
      break;

    }
    
  }  /* for i_Constraint ... */

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e F o r C o n s t r a i n t                             */
/* ------------------------------------------------------------------------ */

void  Get_ValueForConstraint(struct ConstraintInFS * Constraint_P, double Value[],
			     int * Index_TimeFunction) {

  int  k ;
  struct Value  Val_Modulus, Val_TimeFunction ;

  GetDP_Begin("Get_ValueForConstraint");

  /* Attention: u,v,w et x,y,z == 0 ! */
  /* Il faudra changer ca. Pour le moment, on repose sur Current.x|y|z  */

  Get_ValueOfExpression
    ((struct Expression *)
     List_Pointer(Problem_S.Expression,
		  Constraint_P->ConstraintPerRegion->Case.Fixed.ExpressionIndex),
     NULL, 0., 0., 0., &Val_Modulus) ;

  *Index_TimeFunction = Constraint_P->ConstraintPerRegion->TimeFunctionIndex ;

  if (Current.NbrHar > 1) {
    if (*Index_TimeFunction >= 0) {
      Get_ValueOfExpression
	((struct Expression *)
	 List_Pointer(Problem_S.Expression,
		      Constraint_P->ConstraintPerRegion->TimeFunctionIndex),	 
	 NULL, 0., 0., 0., &Val_TimeFunction) ;

      Cal_ProductValue(&Val_Modulus, &Val_TimeFunction,  &Val_Modulus) ;
    }
    for (k = 0 ; k < Current.NbrHar ; k++)
      Value[k] = Val_Modulus.Val[MAX_DIM*k] ;
  }
  else{
    Value[0] = Val_Modulus.Val[0] ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ C o n s t r a i n t F o r R e g i o n               */
/* ------------------------------------------------------------------------ */

void  Treatment_ConstraintForRegion(struct GlobalQuantity   * GlobalQuantity_P,
				    struct FunctionSpace    * FunctionSpace_P,
				    struct QuantityStorage  * QuantityStorage_P) {

  int                     Nbr_Constraint, i_Constraint ;
  List_T                      * Constraint_L ;
  struct ConstraintInFS       * Constraint_P ;
  struct ConstraintPerRegion  * ConstraintPerRegion_P ;
  struct Group                * GroupEntity_Pr ;
  struct GlobalQuantity       * GlobalQuantity_Pr ;

  GetDP_Begin("Treatment_ConstraintForRegion");

  QuantityStorage_P->BasisFunction[0].Constraint = NONE ;

  Constraint_L = FunctionSpace_P->Constraint ;
  Nbr_Constraint = List_Nbr(Constraint_L) ;
  
  for (i_Constraint = 0 ;
       i_Constraint < Nbr_Constraint &&
	 ! QuantityStorage_P->BasisFunction[0].Constraint ; i_Constraint++) {
    
    Constraint_P =
      (struct ConstraintInFS*)List_Pointer(Constraint_L, i_Constraint) ;
    ConstraintPerRegion_P = Constraint_P->ConstraintPerRegion ;
    
    if ((ConstraintPerRegion_P->Type == ASSIGN ||
	 ConstraintPerRegion_P->Type == INIT ||
	 ConstraintPerRegion_P->Type == ASSIGNFROMRESOLUTION ||
	 ConstraintPerRegion_P->Type == INITFROMRESOLUTION) &&
	(Constraint_P->QuantityType == GLOBALQUANTITY)) {

      GlobalQuantity_Pr = (struct GlobalQuantity*)
	List_Pointer(FunctionSpace_P->GlobalQuantity,
		     Constraint_P->ReferenceIndex) ;
	
      if (GlobalQuantity_Pr == GlobalQuantity_P) {
	  
	GroupEntity_Pr = (struct Group*)
	  List_Pointer(Problem_S.Group, Constraint_P->EntityIndex) ;
	  
	if (/*(GroupEntity_Pr->FunctionType == 
	      ((struct Group *)List_Pointer(Problem_S.Group, 
	      BasisFunction_P->EntityIndex))
	      ->FunctionType)  && */
	    List_Search
	    (GroupEntity_Pr->InitialList,
	     &QuantityStorage_P->BasisFunction[0].CodeEntity, fcmp_int) ) {

	  QuantityStorage_P->BasisFunction[0].Constraint =
	    ConstraintPerRegion_P->Type ;

	  if (ConstraintPerRegion_P->Type == ASSIGN ||
	      ConstraintPerRegion_P->Type == INIT)
	    Get_ValueForConstraint
	      (Constraint_P, QuantityStorage_P->BasisFunction[0].Value,
	       &QuantityStorage_P->BasisFunction[0].TimeFunctionIndex) ;
	  else
	    Get_PreResolutionForConstraint
	      (Constraint_P,
	       &QuantityStorage_P->BasisFunction[0].TimeFunctionIndex) ;
	}
      }
    }  /* if (ASSIGN || INIT || ASSIGNFROMRESOLUTION || INITFROMRESOLUTION) && 
	      GLOBALQUANTITY ... */

  }  /* for i_Constraint ... */

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ P r e R e s o l u t i o n F o r C o n s t r a i n t             */
/* ------------------------------------------------------------------------ */

void  Get_PreResolutionForConstraint(struct ConstraintInFS * Constraint_P,
				     int * Index_TimeFunction) {

  struct PreResolutionInfo  PreResolutionInfo_S ;

  int  fcmp_Resolution_Name(const void * a, const void * b) ;

  GetDP_Begin("Get_PreResolutionForConstraint");

  *Index_TimeFunction = Constraint_P->ConstraintPerRegion->TimeFunctionIndex ;

  if (Constraint_P->Active.ResolutionIndex < 0)
    if ((Constraint_P->Active.ResolutionIndex = 
	 List_ISearchSeq(Problem_S.Resolution,
			 Constraint_P->ConstraintPerRegion->
			 Case.Solve.ResolutionName, fcmp_Resolution_Name)) < 0) {
      Msg(ERROR, "Unknown ResolutionName '%s' in Constraint",
	  Constraint_P->ConstraintPerRegion->Case.Solve.ResolutionName) ;
    }
  if(List_ISearchSeq(PreResolutionIndex_L, &Constraint_P->Active.ResolutionIndex, 
		     fcmp_int) < 0) {
    PreResolutionInfo_S.Index = Constraint_P->Active.ResolutionIndex ;
    PreResolutionInfo_S.Type  = PR_CONSTRAINT ;
    List_Add(PreResolutionIndex_L, &PreResolutionInfo_S) ;
    Msg(INFO, "  Adding Resolution '%s' for Pre-Resolution (Constraint)",
	Constraint_P->ConstraintPerRegion->Case.Solve.ResolutionName) ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  G e t _ L i n k F o r C o n s t r a i n t   &   C o                     */
/* ------------------------------------------------------------------------ */

struct TwoIntOneDouble { int  Int1, Int2 ; double Double ; } ;


void  Get_LinkForConstraint(struct ConstraintInFS * Constraint_P,
			    int Num_Entity,
			    int * CodeEntity_Link, double * Coef) {

  struct TwoIntOneDouble  * TwoIntOneDouble_P ;

  struct ConstraintActive * Generate_Link(struct ConstraintInFS * Constraint_P) ;

  GetDP_Begin("Get_LinkForConstraint");

  if (!Constraint_P->Active.Active)
    Constraint_P->Active.Active = Generate_Link(Constraint_P) ;

  TwoIntOneDouble_P = (struct TwoIntOneDouble *)
    List_PQuery(Constraint_P->Active.Active->Case.Link.Couples,
		&Num_Entity, fcmp_absint) ;
  if (!TwoIntOneDouble_P)  Msg(ERROR, "Constraint Link: Bad definition") ;

  *CodeEntity_Link = abs(TwoIntOneDouble_P->Int2) ;
  *Coef = TwoIntOneDouble_P->Double ;
  if (TwoIntOneDouble_P->Int1 < 0)  *Coef *= -1. ;

  GetDP_End ;
}


/* Data... */

struct NodeXYZ { int NumNode ; double x, y, z ; } ;
struct EdgeNN { int NumEdge ; int Node1, Node2 ; double Coef ; } ;
void  Generate_LinkNodes(struct ConstraintInFS * Constraint_P,
			 List_T * ExtendedList_L, List_T * ExtendedSuppList_L,
			 struct Group * RegionRef_P, struct Group * SubRegionRef_P,
			 int Index_Filter, int Index_Function, int Index_Coef,
			 List_T * Couples_L) ;
void  Generate_LinkEdges(struct ConstraintInFS * Constraint_P,
			 struct Group * Group_P,
			 struct Group * RegionRef_P, struct Group * SubRegionRef_P,
			 List_T * Couples_L) ;
int fcmp_XYZ(const void * a, const void * b) ;
int fcmp_NN(const void * a, const void * b) ;
void  Generate_ElementaryEntities_EdgeNN
  (List_T * InitialList, List_T ** ExtendedList, int Type_Entity) ;

/* ----- */


struct ConstraintActive * Generate_Link(struct ConstraintInFS * Constraint_P) {

  struct ConstraintActive * Active ;
  struct Group  * Group_P, * RegionRef_P, * SubRegionRef_P ;
  int  Nbr_Entity ;

  GetDP_Begin("Generate_Link");

  Msg(BIGINFO, "\nC o n s t r a i n t   ( L i n k )") ;

  Active = (struct ConstraintActive *)Malloc(sizeof(struct ConstraintActive)) ;

  Group_P = (struct Group*)
    List_Pointer(Problem_S.Group, Constraint_P->EntityIndex) ;
  RegionRef_P = (struct Group*)
    List_Pointer(Problem_S.Group,
		 Constraint_P->ConstraintPerRegion->Case.Link.RegionRefIndex) ;
  SubRegionRef_P =
    (Constraint_P->ConstraintPerRegion->Case.Link.SubRegionRefIndex >= 0)?
    (struct Group*)
    List_Pointer(Problem_S.Group,
		 Constraint_P->ConstraintPerRegion->Case.Link.SubRegionRefIndex) :
    NULL ;

  if ((Nbr_Entity = List_Nbr(Group_P->ExtendedList)))
    Active->Case.Link.Couples =
      List_Create(Nbr_Entity, 1, sizeof(struct TwoIntOneDouble)) ;
  else {
    Active->Case.Link.Couples = NULL ;
    GetDP_Return(Active) ;
  }

  switch (Group_P->FunctionType) {
  case NODESOF :
    Generate_LinkNodes(Constraint_P,
		       Group_P->ExtendedList, Group_P->ExtendedSuppList,
		       RegionRef_P, SubRegionRef_P,
		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex,
		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex,
		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex,
		       Active->Case.Link.Couples) ;
    break ;
  case EDGESOF :
    Generate_LinkEdges(Constraint_P, Group_P,
		       RegionRef_P, SubRegionRef_P,
		       Active->Case.Link.Couples) ;
    break ;
  case FACETSOF :
    Msg(ERROR, "Link not yet implemented for FACETSOF") ;
    break ;
  default :
    Msg(ERROR, "Bad function type for Constraint Link: %d", Group_P->FunctionType) ;
    break ;
  }

  GetDP_Return(Active) ;
}


/*  G e n e r a t e _ L i n k N o d e s  */

void  Generate_LinkNodes(struct ConstraintInFS * Constraint_P,
			 List_T * ExtendedList_L, List_T * ExtendedSuppList_L,
			 struct Group * RegionRef_P, struct Group * SubRegionRef_P,
			 int Index_Filter, int Index_Function, int Index_Coef,
			 List_T * Couples_L) {

  int  Nbr_Entity, i, Nbr_EntityRef, Flag_Filter ;

  struct TwoIntOneDouble  TwoIntOneDouble ;
  struct NodeXYZ  NodeXYZ, NodeXYZRef ;
  List_T  * NodeXYZ_L, * NodeXYZRef_L ;
  List_T  * ExtendedListRef_L, * ExtendedSuppListRef_L ;
  struct Value  Value ;

  GetDP_Begin("Generate_LinkNodes");

  /* Nodes with Constraint */

  Nbr_Entity = List_Nbr(ExtendedList_L) ;
  NodeXYZ_L = List_Create(Nbr_Entity, 1, sizeof(struct NodeXYZ)) ;
  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(ExtendedList_L, i, &NodeXYZ.NumNode) ;
    if (!(ExtendedSuppList_L &&
	  List_Search(ExtendedSuppList_L, &NodeXYZ.NumNode, fcmp_int))) {
      Geo_GetNodesCoordinates( 1, &NodeXYZ.NumNode,
			       &Current.x, &Current.y, &Current.z) ;
      if (Index_Filter < 0)  Flag_Filter = 1 ;
      else {
	Get_ValueOfExpressionByIndex(Index_Filter, NULL, 0., 0., 0., &Value) ;
	Flag_Filter = (int)Value.Val[0] ;
      }

      if (Flag_Filter) {
	NodeXYZ.x = Current.x ; NodeXYZ.y = Current.y ; NodeXYZ.z = Current.z ;
	List_Add(NodeXYZ_L, &NodeXYZ) ;
      }
    }
  }
  Nbr_Entity = List_Nbr(NodeXYZ_L) ;

  /* Nodes of reference (Link) */

  Generate_ElementaryEntities
    (RegionRef_P->InitialList, &ExtendedListRef_L, NODESOF) ;
  if (SubRegionRef_P)
    Generate_ElementaryEntities
      (SubRegionRef_P->InitialList, &ExtendedSuppListRef_L, NODESOF) ;
  else
    ExtendedSuppListRef_L = NULL ;

  Nbr_EntityRef = List_Nbr(ExtendedListRef_L) ;
  NodeXYZRef_L = List_Create(Nbr_EntityRef, 1, sizeof(struct NodeXYZ)) ;
  for (i = 0 ; i < Nbr_EntityRef ; i++) {
    List_Read(ExtendedListRef_L, i, &NodeXYZRef.NumNode) ;
    if (!(ExtendedSuppListRef_L &&
	  List_Search(ExtendedSuppListRef_L, &NodeXYZRef.NumNode, fcmp_int))) {
      Geo_GetNodesCoordinates( 1, &NodeXYZRef.NumNode,
			       &Current.x, &Current.y, &Current.z) ;
      Get_ValueOfExpressionByIndex(Index_Function, NULL, 0., 0., 0., &Value) ;

      Current.x = Value.Val[0] ; Current.y = Value.Val[1] ;
      Current.z = Value.Val[2] ;
      if (Index_Filter < 0)  Flag_Filter = 1 ;
      else {
	Get_ValueOfExpressionByIndex(Index_Filter, NULL, 0., 0., 0., &Value) ;
	Flag_Filter = (int)Value.Val[0] ;
      }

      if (Flag_Filter) {
	NodeXYZRef.x = Current.x ; NodeXYZRef.y = Current.y ;
	NodeXYZRef.z = Current.z ;
	List_Add(NodeXYZRef_L, &NodeXYZRef) ;
      }
    }
  }
  Nbr_EntityRef = List_Nbr(NodeXYZRef_L) ;

  if (Nbr_EntityRef != Nbr_Entity)
    Msg(ERROR, "Constraint Link: bad correspondance of number of Nodes (%d, %d)",
	Nbr_Entity, Nbr_EntityRef) ;

  /*
  Msg(BIGINFO, "Before sorting") ;
  Msg(BIGINFO, "- Other") ;
  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(NodeXYZ_L, i, &NodeXYZ) ;
    Msg(BIGINFO, "%d -> %d: %e %e :: %e",
	    i, NodeXYZ.NumNode, NodeXYZ.x, NodeXYZ.y,
	    atan2(NodeXYZ.y,NodeXYZ.x)/3.1415926535897*180.) ;
  }
  Msg(BIGINFO, "\n- Reference (after rotation)") ;
  for (i = 0 ; i < Nbr_EntityRef ; i++) {
    List_Read(NodeXYZRef_L, i, &NodeXYZ) ;
    Msg(BIGINFO, "%d -> %d: %e %e :: %e",
	    i, NodeXYZ.NumNode, NodeXYZ.x, NodeXYZ.y,
	    atan2(NodeXYZ.y,NodeXYZ.x)/3.1415926535897*180.) ;
  }
  Msg(BIGINFO, "") ;
  */

  List_Sort(NodeXYZ_L   , fcmp_XYZ) ;
  List_Sort(NodeXYZRef_L, fcmp_XYZ) ;

  Msg(BIGINFO, "After sorting") ;
  Msg(BIGINFO, "- Other") ;
  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(NodeXYZ_L, i, &NodeXYZ) ;
    Msg(BIGINFO, "%d -> %d: %e %e :: %e",
	    i, NodeXYZ.NumNode, NodeXYZ.x, NodeXYZ.y,
	    atan2(NodeXYZ.y,NodeXYZ.x)/3.1415926535897*180.) ;
  }
  Msg(BIGINFO, "\n- Reference (after rotation)") ;
  for (i = 0 ; i < Nbr_EntityRef ; i++) {
    List_Read(NodeXYZRef_L, i, &NodeXYZ) ;
    Msg(BIGINFO, "%d -> %d: %e %e :: %e",
	    i, NodeXYZ.NumNode, NodeXYZ.x, NodeXYZ.y,
	    atan2(NodeXYZ.y,NodeXYZ.x)/3.1415926535897*180.) ;
  }
  Msg(BIGINFO, "\n==> List of link for nodes") ;

  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(NodeXYZ_L, i, &NodeXYZ) ;
    List_Read(NodeXYZRef_L, i, &NodeXYZRef) ;

    /* Attention: tolerance !!! */
    if ((fabs(NodeXYZ.x-NodeXYZRef.x) > 1.e-12) ||
	(fabs(NodeXYZ.y-NodeXYZRef.y) > 1.e-12) ||
	(fabs(NodeXYZ.z-NodeXYZRef.z) > 1.e-12))
      Msg(ERROR, "Constraint Link: bad correspondance of Nodes (%d, %d)"
	  " (%e %e %e)",
	  NodeXYZ.NumNode, NodeXYZRef.NumNode,
	  fabs(NodeXYZ.x-NodeXYZRef.x), fabs(NodeXYZ.y-NodeXYZRef.y),
	  fabs(NodeXYZ.z-NodeXYZRef.z)) ;

    TwoIntOneDouble.Int1 = NodeXYZ.NumNode ;
    TwoIntOneDouble.Int2 = NodeXYZRef.NumNode ;

    Current.x = NodeXYZ.x ; Current.y = NodeXYZ.y ; Current.z = NodeXYZ.z ;
    Get_ValueOfExpressionByIndex(Index_Coef, NULL, 0., 0., 0., &Value) ;
    TwoIntOneDouble.Double = Value.Val[0] ;

    List_Add(Couples_L, &TwoIntOneDouble) ;

    Msg(BIGINFO, "%d %d", NodeXYZ.NumNode, NodeXYZRef.NumNode) ;
  }

  List_Delete(NodeXYZ_L) ;  List_Delete(NodeXYZRef_L) ;

  GetDP_End ;
}

#define TOL 1.e-12   /* Attention: tolerance !!! */

int fcmp_XYZ(const void * a, const void * b) {
  double Result ;

  if (fabs(Result = ((struct NodeXYZ *)a)->x - ((struct NodeXYZ *)b)->x) > TOL)
    return (Result > 0.)? 1 : -1 ;
  if (fabs(Result = ((struct NodeXYZ *)a)->y - ((struct NodeXYZ *)b)->y) > TOL)
    return (Result > 0.)? 1 : -1 ;
  if (fabs(Result = ((struct NodeXYZ *)a)->z - ((struct NodeXYZ *)b)->z) > TOL)
    return (Result > 0.)? 1 : -1 ;
  return 0 ;
}

#undef TOL

/*  G e n e r a t e _ L i n k E d g e s  */

void  Generate_LinkEdges(struct ConstraintInFS * Constraint_P,
			 struct Group * Group_P,
			 struct Group * RegionRef_P, struct Group * SubRegionRef_P,
			 List_T * Couples_L) {

  int  Nbr_Entity, Nbr_EntityRef ;

  List_T  * ExtendedListNodes_L ;
  List_T  * CouplesOfNodes_L, * CouplesOfNodes2_L ;

  struct EdgeNN  EdgeNN, EdgeNNRef ;
  List_T  * EdgeNN_L, * EdgeNNRef_L ;
  List_T  * ExtendedListRef_L, * ExtendedSuppListRef_L ;

  int  i ;
  struct TwoIntOneDouble *TwoIntOneDouble_P, *TwoIntOneDouble2_P, TwoIntOneDouble ;

  List_T  * ExtendedList_L ;
  int  Save_Num, Flag_Filter ;

  GetDP_Begin("Generate_LinkEdges");

  /* Couples of nodes */

  Generate_ElementaryEntities
    (Group_P->InitialList, &ExtendedListNodes_L, NODESOF) ;

  if ((Nbr_Entity = List_Nbr(ExtendedListNodes_L)))
    CouplesOfNodes_L = List_Create(Nbr_Entity, 1, sizeof(struct TwoIntOneDouble)) ;
  else {
    GetDP_End ;  /* situation impossible... */
  }

  if (Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex2 < 0) {
    Flag_Filter = 0 ;
    CouplesOfNodes2_L = NULL ;
    Generate_LinkNodes(Constraint_P, ExtendedListNodes_L, NULL, RegionRef_P, NULL,
		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex,
		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex,
		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex,
		       CouplesOfNodes_L) ;
  }
  else {
    Flag_Filter = 1 ;
    CouplesOfNodes2_L = List_Create(Nbr_Entity, 1, sizeof(struct TwoIntOneDouble)) ;

    Generate_LinkNodes(Constraint_P, ExtendedListNodes_L, NULL, RegionRef_P, NULL,
		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex,
		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex,
		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex,
		       CouplesOfNodes_L) ;
    Generate_LinkNodes(Constraint_P, ExtendedListNodes_L, NULL, RegionRef_P, NULL,
		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex2,
		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex2,
		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex2,
		       CouplesOfNodes2_L) ;
  }


  /* Couples of edges */

  Msg(INFO, "== Couples of edges ==") ;

  /* Edges with Constraint */

  Nbr_Entity = List_Nbr(Group_P->ExtendedList) ;

  Generate_ElementaryEntities_EdgeNN
    (Group_P->InitialList, &ExtendedList_L, EDGESOF) ;
  if (Group_P->InitialSuppList)
    Generate_ElementaryEntities_EdgeNN
      (Group_P->InitialSuppList, &ExtendedSuppListRef_L, EDGESOF) ;
  else
    ExtendedSuppListRef_L = NULL ;

  /*  EdgeNN_L = ExtendedList_L ; */
  EdgeNN_L = List_Create(Nbr_Entity, 1, sizeof(struct EdgeNN)) ;

  /*  if (Nbr_Entity != List_Nbr(EdgeNN_L))  Msg(ERROR, "Constraint Link: strange...") ; */
  if (Nbr_Entity != List_Nbr(ExtendedList_L))  Msg(ERROR, "Constraint Link: strange...") ;

  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(ExtendedList_L, i, &EdgeNN) ;
    if (!(ExtendedSuppListRef_L &&
	  List_Search(ExtendedSuppListRef_L, &EdgeNN.NumEdge, fcmp_int))) {

      if (EdgeNN.Node2 < EdgeNN.Node1) {
	Save_Num = EdgeNN.Node2 ;
	EdgeNN.Node2 = EdgeNN.Node1 ;  EdgeNN.Node1 = Save_Num ;
	/*	List_Write(EdgeNN_L, i, &EdgeNN) ; */
      }
      List_Add(EdgeNN_L, &EdgeNN) ;

    /* -- */
      Msg(BIGINFO, "Other %d: a%d, n%d - n%d",
	  i, EdgeNN.NumEdge, EdgeNN.Node1, EdgeNN.Node2) ;

      TwoIntOneDouble_P = (struct TwoIntOneDouble *)
	List_PQuery(CouplesOfNodes_L, &EdgeNN.Node1, fcmp_int) ;
      TwoIntOneDouble2_P = (struct TwoIntOneDouble *)
	List_PQuery(CouplesOfNodes_L, &EdgeNN.Node2, fcmp_int) ;

      if (!(TwoIntOneDouble_P && TwoIntOneDouble2_P)) {
	if (Flag_Filter) {
	  TwoIntOneDouble_P = (struct TwoIntOneDouble *)
	    List_PQuery(CouplesOfNodes2_L, &EdgeNN.Node1, fcmp_int) ;
	  TwoIntOneDouble2_P = (struct TwoIntOneDouble *)
	    List_PQuery(CouplesOfNodes2_L, &EdgeNN.Node2, fcmp_int) ;
	}
	else  Msg(ERROR, "Constraint Link: bad correspondance for edges") ;
      }

      EdgeNN.Node1 = TwoIntOneDouble_P->Int2 ;
      EdgeNN.Node2 = TwoIntOneDouble2_P->Int2 ;

      if (fabs(TwoIntOneDouble_P->Double - TwoIntOneDouble2_P->Double) > 1.e-18)
	Msg(ERROR, "Constraint Link: Bad Coefficient for Edges") ;

      EdgeNN.Coef = TwoIntOneDouble_P->Double ;

      if (EdgeNN.Node2 < EdgeNN.Node1) {
	Save_Num = EdgeNN.Node2 ;
	EdgeNN.Node2 = EdgeNN.Node1 ;  EdgeNN.Node1 = Save_Num ;
	EdgeNN.NumEdge *= -1 ;
      }
      /*      List_Write(EdgeNN_L, i, &EdgeNN) ; */
      List_Write(EdgeNN_L, List_Nbr(EdgeNN_L)-1, &EdgeNN) ;
      /* -- */
      Msg(BIGINFO, "                         -->  a%d, n%d - n%d",
	  EdgeNN.NumEdge, EdgeNN.Node1, EdgeNN.Node2) ;

    }
  }
  Nbr_Entity = List_Nbr(EdgeNN_L) ;

  /* Edges of reference (Link) */

  Generate_ElementaryEntities_EdgeNN
    (RegionRef_P->InitialList, &ExtendedListRef_L, EDGESOF) ;
  if (SubRegionRef_P)
    Generate_ElementaryEntities_EdgeNN
      (SubRegionRef_P->InitialList, &ExtendedSuppListRef_L, EDGESOF) ;
  else
    ExtendedSuppListRef_L = NULL ;

  Nbr_EntityRef = List_Nbr(ExtendedListRef_L) ;

  /*  EdgeNNRef_L = ExtendedListRef_L ; */
  EdgeNNRef_L = List_Create(Nbr_EntityRef, 1, sizeof(struct EdgeNN)) ;

  for (i = 0 ; i < Nbr_EntityRef ; i++) {
    List_Read(ExtendedListRef_L, i, &EdgeNNRef.NumEdge) ;
    if (!(ExtendedSuppListRef_L &&
	  List_Search(ExtendedSuppListRef_L, &EdgeNNRef.NumEdge, fcmp_int))) {
      if (EdgeNNRef.Node2 < EdgeNNRef.Node1) {
	Save_Num = EdgeNNRef.Node2 ;
	EdgeNNRef.Node2 = EdgeNNRef.Node1 ;  EdgeNNRef.Node1 = Save_Num ;
	/*	List_Write(EdgeNNRef_L, i, &EdgeNNRef) ; */
      }
      List_Add(EdgeNNRef_L, &EdgeNNRef) ;

      /* -- */
      Msg(BIGINFO, "Ref   %d: a%d, n%d - n%d",
	  i, EdgeNNRef.NumEdge, EdgeNNRef.Node1, EdgeNNRef.Node2) ;
    }
  }
  Nbr_EntityRef = List_Nbr(EdgeNNRef_L) ;

  if (Nbr_EntityRef != Nbr_Entity)
    Msg(ERROR, "Constraint Link: bad correspondance of number of Edges (%d, %d)",
	Nbr_Entity, Nbr_EntityRef) ;

  List_Sort(EdgeNN_L   , fcmp_NN) ;
  List_Sort(EdgeNNRef_L, fcmp_NN) ;

  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(EdgeNN_L, i, &EdgeNN) ;
    List_Read(EdgeNNRef_L, i, &EdgeNNRef) ;

    Msg(BIGINFO, "%d: a%d, n%d - n%d (%.16g) / a%d, n%d - n%d",
	i, 
	EdgeNN.NumEdge, EdgeNN.Node1, EdgeNN.Node2, EdgeNN.Coef,
	EdgeNNRef.NumEdge, EdgeNNRef.Node1, EdgeNNRef.Node2) ;


    if (EdgeNN.Node1 != EdgeNNRef.Node1 ||
	EdgeNN.Node2 != EdgeNNRef.Node2)
      Msg(ERROR, "Constraint Link: bad correspondance of Edges (%d, %d)",
	  EdgeNN.NumEdge, EdgeNNRef.NumEdge) ;

    TwoIntOneDouble.Int1 = EdgeNN.NumEdge ;
    TwoIntOneDouble.Int2 = EdgeNNRef.NumEdge ;
    TwoIntOneDouble.Double = EdgeNN.Coef ;

    List_Add(Couples_L, &TwoIntOneDouble) ;
  }

  List_Delete(EdgeNN_L) ;  List_Delete(EdgeNNRef_L) ;

  Msg(BIGINFO, "====> End Link Edge") ;

  GetDP_End ;
}


int fcmp_NN(const void * a, const void * b) {
  int Result ;

  if ((Result = ((struct EdgeNN *)a)->Node1 - ((struct EdgeNN *)b)->Node1) != 0)
    return Result ;
  return        ((struct EdgeNN *)a)->Node2 - ((struct EdgeNN *)b)->Node2 ;
}


void  Generate_ElementaryEntities_EdgeNN
  (List_T * InitialList, List_T ** ExtendedList, int Type_Entity) {

  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element ;
  int     Nbr_Entity, i_Entity, * Num_Entities ;

  struct EdgeNN  EdgeNN ;
  int  * Num_Nodes ;

  GetDP_Begin("Generate_ElementaryEntities_EdgeNN");

  if (InitialList != NULL) {

    Entity_Tr = Tree_Create(sizeof (struct EdgeNN), fcmp_int) ;

    Nbr_Element = Geo_GetNbrGeoElements() ;
    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;

      if (List_Search(InitialList, &GeoElement->Region, fcmp_int) ) {
	switch (Type_Entity) {
	case EDGESOF :
	  if (GeoElement->NbrEdges == 0)  Geo_CreateEdgesOfElement(GeoElement) ;
	  Nbr_Entity = GeoElement->NbrEdges  ; Num_Entities = GeoElement->NumEdges ;
	  break ;
	}
	for (i_Entity = 0; i_Entity < Nbr_Entity ; i_Entity++) {
	  EdgeNN.NumEdge = abs(Num_Entities[i_Entity]) ;
	  Num_Nodes = Geo_GetNodesOfEdgeInElement(GeoElement, i_Entity) ;
	  EdgeNN.Node1 = GeoElement->NumNodes[abs(Num_Nodes[0])-1] ;
	  EdgeNN.Node2 = GeoElement->NumNodes[abs(Num_Nodes[1])-1] ;
	  if ( ! Tree_Search(Entity_Tr, &EdgeNN) )
	    Tree_Add(Entity_Tr, &EdgeNN) ;
	}
      }
    }

    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
  }
  else  *ExtendedList = NULL ;

  GetDP_End ;
}
