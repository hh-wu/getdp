#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "Get_DofOfElement.h"
#include "ExtendedGroup.h"
#include "Cal_Quantity.h"
#include "GeoData.h"

#include "CurrentData.h"
#include "outil.h"

struct BasisFunction    * BasisFunction_P ;
int                     Nbr_ElementaryBF ;
struct Group            * GroupSupport_P, * GroupEntity_P ;

/* ------------------------------------------------------------------------ */
/*  G e t _ I n i t D o f O f E l e m e n t                                 */
/* ------------------------------------------------------------------------ */

void  Get_InitDofOfElement(struct Element * Element) {
  Element->ElementTrace = NULL ;
  Element->NumLastElementForNodesCoordinates      = -1 ;
  Element->NumLastElementForGroupsOfEntities      = -1 ;
  Element->NumLastElementForSolidAngle            = -1 ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ D o f O f E l e m e n t                                         */
/* ------------------------------------------------------------------------ */

void  Get_DofOfElement(struct Element          * Element,
		       struct FunctionSpace    * FunctionSpace_P,
		       struct QuantityStorage  * QuantityStorage_P,
		       List_T                  * BasisFunctionIndex_L) {

  struct BasisFunction  * BasisFunction_P0 ;
  int  Nbr_BasisFunction, Nbr_BasisFunctionAll, i_BFunction, StartingIndex, i ;
  int  * BasisFunctionIndex_P0 ;

  Current.Element = Element ;
  Nbr_ElementaryBF = 0 ;

  /* 0.1  S u b S p a c e s  */

  Nbr_BasisFunctionAll = List_Nbr(FunctionSpace_P->BasisFunction) ;
  BasisFunction_P0 = (Nbr_BasisFunctionAll) ? 
    (struct BasisFunction*)List_Pointer(FunctionSpace_P->BasisFunction, 0) : NULL ;

  if (!BasisFunctionIndex_L)
    Nbr_BasisFunction = Nbr_BasisFunctionAll ;
  else {
    Nbr_BasisFunction = List_Nbr(BasisFunctionIndex_L) ;
    BasisFunctionIndex_P0 = (Nbr_BasisFunction) ? 
      (int*)List_Pointer(BasisFunctionIndex_L, 0) : NULL ;
  }

  /*  0.2  E x p l i c i t   D o f D a t a   S p e c i f i c a t i o n */
  
  switch (TreatmentStatus) {
  case _CAL :  case _POS :
    if(QuantityStorage_P->DefineQuantity->DofData)
      FunctionSpace_P->DofData = QuantityStorage_P->DefineQuantity->DofData ;
    else
      FunctionSpace_P->DofData = FunctionSpace_P->MainDofData ;
    break;
  }

  /*  1.  F o r   e a c h   s u b s e t   o f   B a s i s   F u n c t i o n s */
  for (i = 0 ; i < Nbr_BasisFunction ; i++) {

    i_BFunction = (!BasisFunctionIndex_L)? i : BasisFunctionIndex_P0[i] ;

    BasisFunction_P = BasisFunction_P0 + i_BFunction ;
    GroupSupport_P = (struct Group*)
      List_Pointer(Problem_S.Group, BasisFunction_P->SupportIndex) ;

    /*  2.  I f   t h e   e l e m e n t   i s   i n   t h e   s u p p o r t   o f   
	    t h e   B a s i s F u n c t i o n : */
    if ((GroupSupport_P->Type == REGIONLIST  &&
	 List_Search(GroupSupport_P->InitialList, &Element->Region, fcmp_int))
	||
	(GroupSupport_P->Type == ELEMENTLIST  &&
	 Check_IsEntityInExtendedGroup(GroupSupport_P, Element->Num, 0)) )  {

      GroupEntity_P = (struct Group*)
	List_Pointer(Problem_S.Group, BasisFunction_P->EntityIndex) ;

      switch (GroupEntity_P->FunctionType) {

      case NODESOF :
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->GeoElement->NbrNodes, Element->GeoElement->NumNodes,
	   0,  i_BFunction, NODESOF) ;
	break ;

      case EDGESOF :  case EDGESOFTREEIN :
	if (Element->GeoElement->NbrEdges == 0)
	  Geo_CreateEdgesOfElement(Element->GeoElement) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->GeoElement->NbrEdges, Element->GeoElement->NumEdges,
	   0,  i_BFunction, EDGESOF) ;
	break ;

      case FACETSOF :  case FACETSOFTREEIN :
	if (Element->GeoElement->NbrEdges == 0)
	  Geo_CreateEdgesOfElement(Element->GeoElement) ;
	if (Element->GeoElement->NbrFacets == 0)
	  Geo_CreateFacetsOfElement(Element->GeoElement) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->GeoElement->NbrFacets, Element->GeoElement->NumFacets,
	   0,  i_BFunction, FACETSOF) ;
	break ;

      case VOLUMESOF :
	Get_CodesOfElement(FunctionSpace_P, QuantityStorage_P,
			   1, &Element->GeoElement->Num,
			   0,  i_BFunction, VOLUMESOF) ;
	break ;

      case GROUPSOFNODESOF :
	Get_GroupsOfElementaryEntitiesOfElement
	  (Element, &StartingIndex,
	   Element->GeoElement->NbrNodes, Element->GeoElement->NumNodes) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->NbrGroupsOfEntities, Element->NumGroupsOfEntities,
	   StartingIndex,  i_BFunction, GROUPSOFNODESOF) ;
	break ;

      case GROUPSOFEDGESONNODESOF :
	if (Element->GeoElement->NbrEdges == 0)
	  Geo_CreateEdgesOfElement(Element->GeoElement) ;
	Get_GroupsOfEdgesOnNodesOfElement(Element, &StartingIndex) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->NbrGroupsOfEntities, Element->NumGroupsOfEntities,
	   StartingIndex,  i_BFunction, GROUPSOFEDGESONNODESOF) ;
	break ;

      case GROUPSOFEDGESOF :
	if (Element->GeoElement->NbrEdges == 0)
	  Geo_CreateEdgesOfElement(Element->GeoElement) ;
	Get_GroupsOfElementaryEntitiesOfElement
	  (Element, &StartingIndex,
	   Element->GeoElement->NbrEdges, Element->GeoElement->NumEdges) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->NbrGroupsOfEntities, Element->NumGroupsOfEntities,
	   StartingIndex,  i_BFunction, GROUPSOFEDGESOF) ;
	break ;

      case REGION :
	Get_RegionForElement(Element, &StartingIndex) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->NbrGroupsOfEntities, Element->NumGroupsOfEntities,
	   StartingIndex,  i_BFunction, REGION) ;
	break ;

      case GLOBAL :
	Get_GlobalForElement(Element, &StartingIndex, BasisFunction_P) ;
	Get_CodesOfElement
	  (FunctionSpace_P, QuantityStorage_P,
	   Element->NbrGroupsOfEntities, Element->NumGroupsOfEntities,
	   StartingIndex,  i_BFunction, GLOBAL) ;
	break ;
      }

    }  /* if Region ... */

  }  /* for i ... */

  QuantityStorage_P->NbrElementaryBasisFunction = Nbr_ElementaryBF ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ G r o u p s O f E l e m e n t a r y E n t i t i e s             */
/*                                                       O f E l e m e n t  */
/* ------------------------------------------------------------------------ */

void  Get_GroupsOfElementaryEntitiesOfElement
  (struct Element * Element,
   int * StartingIndex, int Nbr_ElementaryEntities, int Num_ElementaryEntities[]) {

/* external input/output :  GroupEntity_P     : In  */

  int            i, j, Num_Entity ;
  struct TwoInt  * Key_P ;

  if (Element->NumLastElementForGroupsOfEntities != Element->Num) {
    Element->NumLastElementForGroupsOfEntities = Element->Num ;
    Element->NbrGroupsOfEntities = 0 ;
  }

  *StartingIndex = Element->NbrGroupsOfEntities ;

  if (GroupEntity_P->ExtendedList == NULL) Generate_ExtendedGroup(GroupEntity_P) ;

  for (i = 0 ; i < Nbr_ElementaryEntities ; i++) {
    Num_Entity = abs(Num_ElementaryEntities[i]) ;
    if ((Key_P = (struct TwoInt*)List_PQuery(GroupEntity_P->ExtendedList, 
					     &Num_Entity, fcmp_absint ))) {
      j = *StartingIndex ;
      while ((j < Element->NbrGroupsOfEntities) &&
	     (Element->NumGroupsOfEntities[j] != Key_P->Int2))  j++ ;

      if (j == Element->NbrGroupsOfEntities) {
	Element->NumGroupsOfEntities[Element->NbrGroupsOfEntities++] = Key_P->Int2 ;
	Element->NbrEntitiesInGroups[j] = 0 ;
      }

      Element->NumEntitiesInGroups[j][Element->NbrEntitiesInGroups[j]++] =
	(Key_P->Int1 > 0)?  (i+1) : -(i+1) ;
    }
  }
  return ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ G r o u p s O f E d g e s O n N o d e s O f E l e m e n t       */
/* ------------------------------------------------------------------------ */

void  Get_GroupsOfEdgesOnNodesOfElement(struct Element * Element,
					int * StartingIndex) {
/* external input/output :  GroupEntity_P     : In  */

  int  i, j, Num_Edge, * Num_Nodes, Num_Node ;

  if (Element->NumLastElementForGroupsOfEntities != Element->Num) {
    Element->NumLastElementForGroupsOfEntities = Element->Num ;
    Element->NbrGroupsOfEntities = 0 ;
  }

  *StartingIndex = Element->NbrGroupsOfEntities ;

  if (GroupEntity_P->ExtendedList == NULL) Generate_ExtendedGroup(GroupEntity_P) ;

  for (i = 0 ; i < Element->GeoElement->NbrEdges ; i++) {
    Num_Edge = abs(Element->GeoElement->NumEdges[i]) ;
    if (List_Search(GroupEntity_P->ExtendedList, &Num_Edge, fcmp_int )) {

      Num_Nodes = Geo_GetNodesOfEdgeInElement(Element->GeoElement, i) ;

      Num_Node = Element->GeoElement->NumNodes[abs(Num_Nodes[0])-1] ;
      j = *StartingIndex ;
      while ((j < Element->NbrGroupsOfEntities) &&
	     (Element->NumGroupsOfEntities[j] != Num_Node))  j++ ;
      if (j == Element->NbrGroupsOfEntities) {
	Element->NumGroupsOfEntities[Element->NbrGroupsOfEntities++] = Num_Node ;
	Element->NbrEntitiesInGroups[j] = 0 ;
      }
      Element->NumEntitiesInGroups[j] [Element->NbrEntitiesInGroups[j]++] =
	(Element->GeoElement->NumEdges[i] > 0)? -(i+1) : (i+1) ;
      /*-        edge
	node 1 o--->---o node 2   =>   (Phi2 - Phi1) s12 ...
	-> minus sign associated with node 1 for positive edge from node 1 to node 2
      */

      Num_Node = Element->GeoElement->NumNodes[abs(Num_Nodes[1])-1] ;
      j = *StartingIndex ;
      while ((j < Element->NbrGroupsOfEntities) &&
	     (Element->NumGroupsOfEntities[j] != Num_Node))  j++ ;
      if (j == Element->NbrGroupsOfEntities) {
	Element->NumGroupsOfEntities[Element->NbrGroupsOfEntities++] = Num_Node ;
	Element->NbrEntitiesInGroups[j] = 0 ;
      }
      Element->NumEntitiesInGroups[j] [Element->NbrEntitiesInGroups[j]++] =
	(Element->GeoElement->NumEdges[i] > 0)? (i+1) : -(i+1) ;
    }
  }
  return ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ R e g i o n F o r E l e m e n t                                 */
/* ------------------------------------------------------------------------ */

void  Get_RegionForElement(struct Element * Element, int * StartingIndex) {

  if (Element->NumLastElementForGroupsOfEntities != Element->Num) {
    Element->NumLastElementForGroupsOfEntities = Element->Num ;
    Element->NbrGroupsOfEntities = 0 ;
  }

  *StartingIndex = Element->NbrGroupsOfEntities ;
  /*
  if (List_Nbr(GroupEntity_P->InitialList) == 1) { 
    / Attention : bricolage devant disparaitre !! provisoire pour Patrick /
    Element->NumGroupsOfEntities[Element->NbrGroupsOfEntities++] =
      *((int *)List_Pointer(GroupEntity_P->InitialList, 0)) ;
  }
  else
  */
  Element->NumGroupsOfEntities[Element->NbrGroupsOfEntities++] = Element->Region ;

  return ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ G l o b a l F o r E l e m e n t                                 */
/* ------------------------------------------------------------------------ */

void  Get_GlobalForElement(struct Element * Element, int * StartingIndex,
			   struct BasisFunction * BasisFunction_P) {

  int Nbr_Global, i, * Num_Global ;

  if (Element->NumLastElementForGroupsOfEntities != Element->Num) {
    Element->NumLastElementForGroupsOfEntities = Element->Num ;
    Element->NbrGroupsOfEntities = 0 ;
  }

  *StartingIndex = Element->NbrGroupsOfEntities ;

  Nbr_Global = List_Nbr(GroupEntity_P->InitialList) ;
  Num_Global = (Nbr_Global)? (int*)List_Pointer(GroupEntity_P->InitialList, 0) : NULL ;

  for (i = 0 ; i < Nbr_Global ; i++) {
    Element->GlobalBasisFunction[Element->NbrGroupsOfEntities  ] =
      (struct GlobalBasisFunction *)
      List_Pointer(BasisFunction_P->GlobalBasisFunction, i) ;
    /* Attention: correspondance i-i si liste triee ! fait dans yacc */
    Element->NumGroupsOfEntities[Element->NbrGroupsOfEntities++] = Num_Global[i] ;
  }

  if (TreatmentStatus == _PRE)
    Get_PreResolutionForGlobalBasisFunction(Nbr_Global, *StartingIndex, Element) ;

  return ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ C o d e s O f E l e m e n t                                     */
/* ------------------------------------------------------------------------ */

void  Get_CodesOfElement(struct FunctionSpace    * FunctionSpace_P,
			 struct QuantityStorage  * QuantityStorage_P,
			 int Nbr_Entity, int Num_Entity[],
			 int StartingIndex,
			 int i_BFunction, int TypeConstraint) {

/* external input/output :
     GroupSupport_P    : In
     GroupEntity_P     : In  */

  int         i_Entity, CodeExist ;
  struct Dof  * Dof_P ;

  /*  1.  F o r   e a c h   e n t i t y   t o   w h i c h   a   b a s i s
          f u n c t i o n   c o u l d   b e   a s s o c i a t e d : 
          (Node, Edge, Facet, Volume, GroupOfNodes, Region, ...)  */

  for (i_Entity = StartingIndex ; i_Entity < Nbr_Entity ; i_Entity++) {

    switch (TreatmentStatus) {
    case _PAR :  
    case _CAL :  
    case _POS :
      if(!FunctionSpace_P->DofData)
	Msg(ERROR, "Null DofData in FunctionSpace '%s'. No Unknowns?",
	    FunctionSpace_P->Name);

      CodeExist =
	((Dof_P =
	  Dof_GetDofStruct(FunctionSpace_P->DofData,
			   BasisFunction_P->Num, abs(Num_Entity[i_Entity]), 0))
	 != NULL) ;
      break ;

    case _PRE :
      CodeExist =
	Check_IsEntityInExtendedGroup(GroupEntity_P, abs(Num_Entity[i_Entity]), 0) ;
      break ;

    default : 
      Msg(ERROR, "Unknown TreatmentStatus (%d)", TreatmentStatus);
    }

    /*  2.  O n e   a s s o c i a t e s   a   b a s i s   f u n c t i o n :  */

    if (CodeExist) {

      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Dof 
	= Dof_P ;
      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].NumEntityInElement
	= i_Entity ;
      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].CodeBasisFunction
	= BasisFunction_P->Num ;
      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].CodeEntity
	= abs(Num_Entity[i_Entity]) ;
      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].BasisFunction
	= BasisFunction_P ;

      if (TreatmentStatus == _PRE)  /* Contrainte associee ? */
	Treatment_ConstraintForElement(FunctionSpace_P, QuantityStorage_P,
				       Num_Entity, i_Entity,
				       i_BFunction, TypeConstraint) ;
      Nbr_ElementaryBF++ ;
      
    }  /* if CodeExist ... */
    
  }  /* for i_Entity ... */

}



/* ------------------------------------------------------------------------ */
/*  G e t _ D o f O f R e g i o n                                           */
/* ------------------------------------------------------------------------ */

void  Get_DofOfRegion(int  Num_Region,
		      struct GlobalQuantity   * GlobalQuantity_P,
		      struct FunctionSpace    * FunctionSpace_P,
		      struct QuantityStorage  * QuantityStorage_P) {

  int  CodeExist, Num_BasisFunction, Num_AssociateBasisFunction ;
  struct Dof  * Dof_P ;


  Nbr_ElementaryBF = 0 ;

  BasisFunction_P = (struct BasisFunction*)
    List_Pointer(FunctionSpace_P->BasisFunction,
		 GlobalQuantity_P->ReferenceIndex) ;
  GroupEntity_P =  (struct Group*)
    List_Pointer(Problem_S.Group, BasisFunction_P->EntityIndex) ;

  if (GroupEntity_P->Type == REGIONLIST  &&
      List_Search(GroupEntity_P->InitialList, &Num_Region, fcmp_int)) {

    if (GlobalQuantity_P->Type == ALIASOF) {
      Num_BasisFunction = BasisFunction_P->Num ;
      Num_AssociateBasisFunction = 0 ;
    }
    else {
      Num_BasisFunction = GlobalQuantity_P->Num ;
      Num_AssociateBasisFunction = BasisFunction_P->Num ;
    }

    switch (TreatmentStatus) {
    case _CAL :  case _POS :
      CodeExist =
	((Dof_P = Dof_GetDofStruct(FunctionSpace_P->DofData,
				   Num_BasisFunction, Num_Region, 0)) != NULL) ;
      break ;
    case _PRE :
      CodeExist = 1 ;
      break ;
    default : break ;
    }

    if (CodeExist) {
      QuantityStorage_P->BasisFunction[0].Dof = Dof_P ;

      QuantityStorage_P->BasisFunction[0].CodeBasisFunction = Num_BasisFunction ;
      QuantityStorage_P->BasisFunction[0].CodeEntity        = Num_Region ;

      QuantityStorage_P->BasisFunction[0].CodeAssociateBasisFunction =
	Num_AssociateBasisFunction ;

      if (TreatmentStatus == _PRE)  /* Contrainte associee ? */
	Treatment_ConstraintForRegion(GlobalQuantity_P,
				      FunctionSpace_P, QuantityStorage_P) ;
      Nbr_ElementaryBF = 1 ;

    }  /* if CodeExist ... */

  }  /* if REGIONLIST ... */

  QuantityStorage_P->NbrElementaryBasisFunction = Nbr_ElementaryBF ;
  return ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ P r e R e s o l u t i o n F o r GlobalBasisFunction             */
/* ------------------------------------------------------------------------ */

void  Get_PreResolutionForGlobalBasisFunction(int Nbr_Global, int StartingIndex,
					      struct Element * Element) {

  int i ;
  struct PreResolutionInfo  PreResolutionInfo_S ;

  for (i = 0 ; i < Nbr_Global ; i++)
    if(List_ISearchSeq(PreResolutionIndex_L,
		       &(Element->GlobalBasisFunction[StartingIndex + i]->
			 ResolutionIndex), fcmp_int) < 0) {
      PreResolutionInfo_S.Index =
	Element->GlobalBasisFunction[StartingIndex + i]->ResolutionIndex ;
      PreResolutionInfo_S.Type  = PR_GLOBALBASISFUNCTION ;
      List_Add(PreResolutionIndex_L, &PreResolutionInfo_S) ;
      Msg(INFO, "  Adding Resolution '%s' for Pre-Resolution (Global BF)", 
	  ((struct Resolution*)List_Pointer(Problem_S.Resolution,
					    PreResolutionInfo_S.Index))->Name) ;
    }
}
