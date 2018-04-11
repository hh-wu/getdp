// GetDP - Copyright (C) 1997-2018 P. Dular and C. Geuzaine, University of Liege
// 
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <iostream> 

#include <math.h>
#include "ProData.h"
#include "GeoData.h"
#include "Get_DofOfElement.h"
#include "Get_ConstraintOfElement.h"
#include "ExtendedGroup.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "MallocUtils.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern List_T  *PreResolutionIndex_L ;

extern int  Nbr_ElementaryBF ;

static double TOL ;

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ C o n s t r a i n t F o r E l e m e n t             */
/* ------------------------------------------------------------------------ */

void  Treatment_ConstraintForElement(struct FunctionSpace    * FunctionSpace_P,
				     struct QuantityStorage  * QuantityStorage_P,
				     int Num_Entity[], int i_Entity,
				     int i_BFunction, int TypeConstraint)
{
  int                    Nbr_Constraint, i_Constraint, k, Index_GeoElement ;
  List_T                      * Constraint_L ;
  struct ConstraintInFS       * Constraint_P ;
  struct ConstraintPerRegion  * ConstraintPerRegion_P ;
  struct GlobalQuantity       * GlobalQuantity_P ;
  struct Group                * GroupEntity_Pr ;

  QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint = NONE ;
  QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint_Index = -1;

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

    case ASSIGN :                
    case INIT :
    case ASSIGNFROMRESOLUTION :  
    case INITFROMRESOLUTION :
    case CST_LINK : 
    case CST_LINKCPLX :

      switch(Constraint_P->QuantityType) {

      case LOCALQUANTITY :

	if(Constraint_P->ReferenceIndex == i_BFunction) {
	  GroupEntity_Pr = (struct Group*)
	    List_Pointer(Problem_S.Group, Constraint_P->EntityIndex) ;
	  if(Check_IsEntityInExtendedGroup(GroupEntity_Pr,
					   abs(Num_Entity[i_Entity]), 1)) {
	    QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint =
	      ConstraintPerRegion_P->Type ;
            QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint_Index =
              i_Constraint;

	    if (ConstraintPerRegion_P->Type == ASSIGN ||
		ConstraintPerRegion_P->Type == INIT) {
              bool KeepCurrentElement = false;
	      switch (TypeConstraint) {
	      case NODESOF :
	      case GROUPSOFEDGESONNODESOF :
		Current.NumEntity = abs(Num_Entity[i_Entity]) ;
                // Note: Current.Element will be set to 0 in Get_ValueForConstraint
                // so that Current.{x,y,z} will be used in CoordXYZ[] functions
		Geo_GetNodesCoordinates(1, &Current.NumEntity,
                                        &Current.x, &Current.y, &Current.z) ;
		break ;
	      case VOLUMESOF :
		Current.NumEntity = abs(Num_Entity[i_Entity]) ;
                KeepCurrentElement = true;
                break;
	      case EDGESOF :
		Current.NumEntity = abs(Num_Entity[i_Entity]) ;
		Current.NumEntityInElement = i_Entity ;
		break ;
	      }
	      Get_ValueForConstraint
		(Constraint_P,
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value,
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value2,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 TimeFunctionIndex, KeepCurrentElement) ;
	    }
	    else if (ConstraintPerRegion_P->Type == CST_LINK ||
		     ConstraintPerRegion_P->Type == CST_LINKCPLX) {
	      Get_LinkForConstraint( Constraint_P, abs(Num_Entity[i_Entity]),
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].CodeEntity_Link,
                 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].BasisFunction->Orient,
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value) ;
	      if (abs(Num_Entity[i_Entity]) ==
		  QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].CodeEntity_Link)
		QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint =
		  NONE ; // Code linked with itself not allowed
	    }
	    else {
	      Get_PreResolutionForConstraint( Constraint_P,
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
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value2,
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 TimeFunctionIndex) ;
	    }
	    else if (ConstraintPerRegion_P->Type == CST_LINK ||
		     ConstraintPerRegion_P->Type == CST_LINKCPLX) {
	      // Message::Error("CST_LINK for GlobalQuantity not done yet") ;
	      // FIXME: to be validated
	      Get_LinkForConstraint
		(Constraint_P,
		 abs(Num_Entity[i_Entity]),
		 &QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].
		 CodeEntity_Link,
                 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].BasisFunction->Orient,
		 QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value) ;
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
	break ; /* GLOBALQUANTITY */

      default :
	Message::Error("Unknown type of Quantity in Constraint of type Fixed");
	break;

      }

      break ;  /* ASSIGN || INIT || ASSIGNFROMRESOLUTION || INITFROMRESOLUTION */

    default :
      Message::Error("Unknown type of Constraint");
      break;

    }

  }  /* for i_Constraint ... */

  /* Constraints due to P-refinement */
  if(Current.GeoData->P) {
    Index_GeoElement = Geo_GetGeoElementIndex(Current.Element->GeoElement) ;
    if (Current.GeoData->P[Index_GeoElement+1] >= 0 &&
	Current.GeoData->P[Index_GeoElement+1] <
	QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].BasisFunction->Order){
      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Constraint = ASSIGN ;
      for (k = 0 ; k < Current.NbrHar ; k++)
	QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].Value[k] = 0. ;
      QuantityStorage_P->BasisFunction[Nbr_ElementaryBF].TimeFunctionIndex = -1 ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e F o r C o n s t r a i n t                             */
/* ------------------------------------------------------------------------ */

void  Get_ValueForConstraint(struct ConstraintInFS * Constraint_P, double Value[],
                             double Value2[], int * Index_TimeFunction,
                             bool KeepCurrentElement)
{
  int  k ;
  struct Value  Val_Modulus, Val_Modulus2, Val_TimeFunction ;

  // Note: Current.{u,v,w} is not defined, so we cannot interpolate expressions
  // in the reference element. We thus set Current.Element=0 and rely on
  // Current.{x,y,z}.
  struct Element *old = Current.Element;

  if(!KeepCurrentElement) Current.Element = 0;

  Get_ValueOfExpression ((struct Expression *)
	List_Pointer( Problem_S.Expression,
		      Constraint_P->ConstraintPerRegion->Case.Fixed.ExpressionIndex),
        NULL, 0., 0., 0., &Val_Modulus) ;

  int idx2 = Constraint_P->ConstraintPerRegion->Case.Fixed.ExpressionIndex2;
  if(idx2 >= 0){
    Get_ValueOfExpression ((struct Expression *)
       List_Pointer( Problem_S.Expression, idx2), NULL, 0., 0., 0., &Val_Modulus2) ;
  }
  else{
    Cal_ZeroValue(&Val_Modulus2);
  }

  *Index_TimeFunction = Constraint_P->ConstraintPerRegion->TimeFunctionIndex ;

  if (Current.NbrHar > 1) {
    if (*Index_TimeFunction >= 0) {
      Get_ValueOfExpression ((struct Expression *)
	 List_Pointer( Problem_S.Expression,
		       Constraint_P->ConstraintPerRegion->TimeFunctionIndex),
	 NULL, 0., 0., 0., &Val_TimeFunction) ;
      Cal_ProductValue(&Val_Modulus, &Val_TimeFunction, &Val_Modulus) ;
    }
    for (k = 0 ; k < Current.NbrHar ; k++){
      Value[k] = Val_Modulus.Val[MAX_DIM*k] ;
      Value2[k] = Val_Modulus2.Val[MAX_DIM*k] ;
    }
  }
  else{
    Value[0] = Val_Modulus.Val[0] ;
    Value2[0] = Val_Modulus2.Val[0] ;
    // Set this to zero to avoid having an uninitialized imaginary part if you
    // use a complex arithmetic solver (on a real matrix) --
    // cf. LinAlg_SetScalar() calls in DofData.cpp
    Value[1] = 0. ;
    Value2[1] = 0. ;
  }

  Current.Element = old;
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ C o n s t r a i n t F o r R e g i o n               */
/* ------------------------------------------------------------------------ */

void  Treatment_ConstraintForRegion(struct GlobalQuantity   * GlobalQuantity_P,
				    struct FunctionSpace    * FunctionSpace_P,
				    struct QuantityStorage  * QuantityStorage_P)
{
  int                     Nbr_Constraint, i_Constraint ;
  List_T                      * Constraint_L ;
  struct ConstraintInFS       * Constraint_P ;
  struct ConstraintPerRegion  * ConstraintPerRegion_P ;
  struct Group                * GroupEntity_Pr ;
  struct GlobalQuantity       * GlobalQuantity_Pr ;

  QuantityStorage_P->BasisFunction[0].Constraint = NONE ;

  Constraint_L = FunctionSpace_P->Constraint ;
  Nbr_Constraint = List_Nbr(Constraint_L) ;

  for (i_Constraint = 0 ;
       i_Constraint < Nbr_Constraint &&
	 ! QuantityStorage_P->BasisFunction[0].Constraint ; i_Constraint++) {

    Constraint_P =
      (struct ConstraintInFS*)List_Pointer(Constraint_L, i_Constraint) ;
    ConstraintPerRegion_P = Constraint_P->ConstraintPerRegion ;

    if (Constraint_P->QuantityType == GLOBALQUANTITY) {

      switch(ConstraintPerRegion_P->Type) {

      case ASSIGN :                
      case INIT :
      case ASSIGNFROMRESOLUTION : 
      case INITFROMRESOLUTION :
      case CST_LINK : 
      case CST_LINKCPLX :

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
		ConstraintPerRegion_P->Type == INIT) {
	      Get_ValueForConstraint
		(Constraint_P,
                 QuantityStorage_P->BasisFunction[0].Value,
                 QuantityStorage_P->BasisFunction[0].Value2,
		 &QuantityStorage_P->BasisFunction[0].TimeFunctionIndex) ;
            }
	    else if (ConstraintPerRegion_P->Type == CST_LINK ||
		     ConstraintPerRegion_P->Type == CST_LINKCPLX) {
	      Get_LinkForConstraint
		(Constraint_P,
		 QuantityStorage_P->BasisFunction[0].CodeEntity,
		 &QuantityStorage_P->BasisFunction[0].CodeEntity_Link,
                 QuantityStorage_P->BasisFunction[0].BasisFunction->Orient,
		 QuantityStorage_P->BasisFunction[0].Value) ;
	      if (QuantityStorage_P->BasisFunction[0].CodeEntity ==
		  QuantityStorage_P->BasisFunction[0].CodeEntity_Link)
		  QuantityStorage_P->BasisFunction[0].Constraint = NONE ;
		/* Code linked with itself not allowed */
	    }
	    else
	      Get_PreResolutionForConstraint
		(Constraint_P,
		 &QuantityStorage_P->BasisFunction[0].TimeFunctionIndex) ;
	  }
	}
	break ;  /* ASSIGN || INIT || ASSIGNFROMRESOLUTION || INITFROMRESOLUTION */

      default :
	Message::Error("Unknown type of Constraint");
	break;
      }
    }  /* if (GLOBALQUANTITY) ... */

  }  /* for i_Constraint ... */
}

/* ------------------------------------------------------------------------ */
/*  G e t _ P r e R e s o l u t i o n F o r C o n s t r a i n t             */
/* ------------------------------------------------------------------------ */

void  Get_PreResolutionForConstraint(struct ConstraintInFS * Constraint_P,
				     int * Index_TimeFunction)
{
  struct PreResolutionInfo  PreResolutionInfo_S ;

  int  fcmp_Resolution_Name(const void * a, const void * b) ;

  *Index_TimeFunction = Constraint_P->ConstraintPerRegion->TimeFunctionIndex ;

  if (Constraint_P->Active.ResolutionIndex < 0)
    if ((Constraint_P->Active.ResolutionIndex =
	 List_ISearchSeq(Problem_S.Resolution,
		Constraint_P->ConstraintPerRegion->
		Case.Solve.ResolutionName, fcmp_Resolution_Name)) < 0) 
      {
         Message::Error("Unknown ResolutionName '%s' in Constraint",
               Constraint_P->ConstraintPerRegion->Case.Solve.ResolutionName);
      }
  if(List_ISearchSeq(PreResolutionIndex_L,
		     &Constraint_P->Active.ResolutionIndex,
		     fcmp_int) < 0) 
    {
      PreResolutionInfo_S.Index = Constraint_P->Active.ResolutionIndex ;
      PreResolutionInfo_S.Type  = PR_CONSTRAINT ;
      List_Add(PreResolutionIndex_L, &PreResolutionInfo_S) ;
      Message::Info("  Adding Resolution '%s' for Pre-Resolution (Constraint)",
		Constraint_P->ConstraintPerRegion->Case.Solve.ResolutionName) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ L i n k F o r C o n s t r a i n t   &   C o                     */
/* ------------------------------------------------------------------------ */

struct TwoIntOneDouble { int  Int1, Int2 ; double Double, Double2 ; } ;

void  Get_LinkForConstraint(struct ConstraintInFS * Constraint_P,
			    int Num_Entity,
			    int * CodeEntity_Link, int Orient, double Value[])
{
  // Note: Current.{u,v,w} is not defined, so we cannot interpolate expressions
  // in the reference element. We thus set Current.Element=0 and rely on
  // Current.{x,y,z}.
  struct Element *old = Current.Element;
  Current.Element = 0;

  struct TwoIntOneDouble  * TwoIntOneDouble_P ;
  List_T * Couples_L ;

  void  Generate_Link(struct ConstraintInFS * Constraint_P, int Flag_New) ;

  if (!Constraint_P->Active.Active)
    Generate_Link(Constraint_P, 1) ;
  else if (Constraint_P->Active.Active->TimeStep != (int)Current.TimeStep)
    Generate_Link(Constraint_P, 0) ;
  else if (Constraint_P->Active.Active->SubTimeStep != Current.SubTimeStep)
    Generate_Link(Constraint_P, 0) ; 

  TwoIntOneDouble_P = (struct TwoIntOneDouble *)
    ((Couples_L = Constraint_P->Active.Active->Case.Link.Couples) ?
     List_PQuery(Couples_L, &Num_Entity, fcmp_absint) : NULL) ;

  if (TwoIntOneDouble_P) {
    *CodeEntity_Link = abs(TwoIntOneDouble_P->Int2) ;
    Value[0] = TwoIntOneDouble_P->Double ;
    Value[1] = TwoIntOneDouble_P->Double2 ;
    if (Orient && TwoIntOneDouble_P->Int1 < 0){
      Value[0] *= -1. ;
      Value[1] *= -1. ;
      std::cout << "Swapped coef for " << TwoIntOneDouble_P->Int1  << std::endl;
    }
  }

  Current.Element = old;
}

struct NodeXYZ { int NumNode ; double x, y, z ; } ;
struct nodeLoc { int Num ; bool Mst, Sub ; double x, y, z; } ;
struct nodePair { int  Master, Slave ; bool subMaster, subSlave ; double coefR, coefI ; double x,y,z ; } ;

struct EdgeNN { int NumEdge ; int Node1, Node2 ; double Coef, Coef2 ; } ;
struct FacetNNN { int NumFacet ; int Node1, Node2, Node3 ; double Coef, Coef2 ; } ;

int fcmp_XYZ(const void * a, const void * b) ;
int fcmp_NNN(const void * a, const void * b) ;

int fcmp_NN(const void * a, const void * b)
{
  int Result ;
  if ((Result = ((struct EdgeNN *)a)->Node1 - ((struct EdgeNN *)b)->Node1) != 0)
    return Result ;
  return ((struct EdgeNN *)a)->Node2 - ((struct EdgeNN *)b)->Node2 ;
}

int fcmp_nodeLoc(const void * a, const void * b)
{
  double Result;
  if ( fabs(Result = ((struct nodeLoc *)a)->x - ((struct nodeLoc *)b)->x) > TOL )
    return (Result > 0.)? 1 : -1 ;
  if ( fabs(Result = ((struct nodeLoc *)a)->y - ((struct nodeLoc *)b)->y) > TOL )
    return (Result > 0.)? 1 : -1 ;
  if ( fabs(Result = ((struct nodeLoc *)a)->z - ((struct nodeLoc *)b)->z) > TOL )
    return (Result > 0.)? 1 : -1 ;
  int iResult;
  if( (iResult = (int)(((struct nodeLoc *)a)->Sub) - (int)(((struct nodeLoc *)b)->Sub)) )
    return (iResult > 0)? 1 : -1 ;
  return ( (int)(((struct nodeLoc *)a)->Mst) - (int)(((struct nodeLoc *)b)->Mst) ) ;
}

int fcmp_nodePair(const void * a, const void * b)
{
  int iResult ;
  if ((iResult = ((struct nodePair *)a)->Master - ((struct nodePair *)b)->Master) != 0)
    return iResult ;
  return ((struct nodePair *)a)->subSlave - ((struct nodePair *)b)->subSlave ;
}


int fcmp_NNN(const void * a, const void * b)
{
  int Result ;

  if ((Result = ((struct FacetNNN *)a)->Node1 - ((struct FacetNNN *)b)->Node1) != 0)
    return Result ;
  if ((Result = ((struct FacetNNN *)a)->Node2 - ((struct FacetNNN *)b)->Node2) != 0)
    return Result ;
  return        ((struct FacetNNN *)a)->Node3 - ((struct FacetNNN *)b)->Node3 ;
}


int fcmp_XYZ(const void * a, const void * b)
{
  double Result; // TOL=Current.GeoData->CharacteristicLength * 1.e-8 ;

  if (fabs(Result = ((struct NodeXYZ *)a)->x - ((struct NodeXYZ *)b)->x) > TOL)
    return (Result > 0.)? 1 : -1 ;
  if (fabs(Result = ((struct NodeXYZ *)a)->y - ((struct NodeXYZ *)b)->y) > TOL)
    return (Result > 0.)? 1 : -1 ;
  if (fabs(Result = ((struct NodeXYZ *)a)->z - ((struct NodeXYZ *)b)->z) > TOL)
    return (Result > 0.)? 1 : -1 ; 
  return 0 ;
}

struct nodePair makeNodePair(const nodeLoc &master,  const nodeLoc &slave, 
			     const double coefR, const double coefI) {
  struct nodePair np;
  np.Master = master.Num;
  np.Slave  = slave.Num;
  np.subMaster = master.Mst & master.Sub;
  np.subSlave  = (!slave.Mst) & slave.Sub;
  np.coefR = coefR ;
  np.coefI = coefI ;
  np.x = master.x ;
  np.y = master.y ;
  np.z = master.z ;
  if(fabs(slave.x-np.x)>TOL) printf("Fuck off\n"); 
  if(fabs(slave.y-np.y)>TOL) printf("Fuck off\n"); 
  if(fabs(slave.z-np.z)>TOL) printf("Fuck off\n"); 
  return np;
}

void  Generate_ElementaryEntities_EdgeNN
  (List_T * InitialList, List_T ** ExtendedList, int Type_Entity)
{
  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element ;
  int     Nbr_Entity = 0, i_Entity, * Num_Entities = NULL;

  struct EdgeNN  EdgeNN ;
  int  * Num_Nodes ;

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
}

void  Generate_ElementaryEntities_FacetNNN
  (List_T * InitialList, List_T ** ExtendedList, int Type_Entity)
{
  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element ;
  int     Nbr_Entity = 0, i_Entity, * Num_Entities = NULL;

  struct FacetNNN FacetNNN ;
  int * Num_Nodes ;

  if (InitialList != NULL) {

    Entity_Tr = Tree_Create(sizeof (struct FacetNNN), fcmp_int) ;

    Nbr_Element = Geo_GetNbrGeoElements() ;
    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;

      if (List_Search(InitialList, &GeoElement->Region, fcmp_int) ) {
	switch (Type_Entity) {
	case FACETSOF :
	  if (GeoElement->NbrFacets == 0)  Geo_CreateFacetsOfElement(GeoElement) ;
	  Nbr_Entity = GeoElement->NbrFacets  ; Num_Entities = GeoElement->NumFacets ;
	  break ;
	}
	for (i_Entity = 0; i_Entity < Nbr_Entity ; i_Entity++) {
	  FacetNNN.NumFacet = abs(Num_Entities[i_Entity]) ;
	  Num_Nodes = Geo_GetNodesOfFacetInElement(GeoElement, i_Entity) ;
	  FacetNNN.Node1 = GeoElement->NumNodes[abs(Num_Nodes[0])-1] ;
	  FacetNNN.Node2 = GeoElement->NumNodes[abs(Num_Nodes[1])-1] ;
	  FacetNNN.Node3 = GeoElement->NumNodes[abs(Num_Nodes[2])-1] ;
	  if ( ! Tree_Search(Entity_Tr, &FacetNNN) )
	    Tree_Add(Entity_Tr, &FacetNNN) ;
	}
      }
    }

    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
  }
  else  *ExtendedList = NULL ;
}



struct CoincidentNodes { int  Master, Slave ; bool subMaster, subSlave ; } ;
void  Generate_GeoLinkNodes(struct ConstraintInFS * Constraint_P,
			    List_T * ExtendedList_L,
			    List_T * ExtendedSuppList_L,
			    List_T * ExtendedListRef_L,
			    List_T * ExtendedSuppListRef_L,
			    List_T * nodePairs_L);
void  NowGenerate_LinkNodes(struct ConstraintInFS * Constraint_P,
			    List_T * nodePairs_L,
			    List_T * Couples_L) ;
void  NowGenerate_LinkEdges(struct ConstraintInFS * Constraint_P,
			    List_T * ExtendedList_L,
			    List_T * ExtendedSuppList_L,
			    List_T * ExtendedListRef_L,
			    List_T * ExtendedSuppListRef_L,
			    List_T * nodePairs_L,
			    List_T * Couples_L) ;

void  NowGenerate_LinkFacets(struct ConstraintInFS * Constraint_P,
			     List_T * ExtendedList_L,
			     List_T * ExtendedSuppList_L,
			     List_T * ExtendedListRef_L,
			     List_T * ExtendedSuppListRef_L,
			     List_T * nodePairs_L,
			     List_T * Couples_L) ;

// void  Generate_LinkFacets(struct ConstraintInFS * Constraint_P,
// 			  struct Group * Group_P,
// 			  struct Group * RegionRef_P, 
// 			  struct Group * SubRegionRef_P,
// 			  List_T * Couples_L) ;

void  Generate_LinkRegions(struct ConstraintInFS * Constraint_P,
			   List_T * Region_L, List_T * RegionRef_L,
			   int Index_Coef, List_T * Couples_L) ;
// void  Generate_ElementaryEntities_EdgeNN
//   (List_T * InitialList, List_T ** ExtendedList, int Type_Entity) ;
// void  Generate_ElementaryEntities_FacetNNN
//   (List_T * InitialList, List_T ** ExtendedList, int Type_Entity) ;

void  Generate_Link(struct ConstraintInFS * Constraint_P, int Flag_New)
{
  struct ConstraintActive * Active ;
  struct Group  * Group_P, * RegionRef_P, * SubRegionRef_P ;
  int  Nbr_Entity ;

  Message::Info("Generate Link") ;

  if (Flag_New)
    Constraint_P->Active.Active =
      (struct ConstraintActive *)Malloc(sizeof(struct ConstraintActive)) ;

  Active = Constraint_P->Active.Active ;
  Active->TimeStep = (int)Current.TimeStep ;
  Active->SubTimeStep = Current.SubTimeStep ;

  Group_P = (struct Group*)
    List_Pointer(Problem_S.Group, Constraint_P->EntityIndex) ;
  RegionRef_P = (struct Group*)
    List_Pointer(Problem_S.Group,
		 Constraint_P->ConstraintPerRegion->Case.Link.RegionRefIndex);
  SubRegionRef_P =
    (Constraint_P->ConstraintPerRegion->Case.Link.SubRegionRefIndex >= 0) ?
    (struct Group*) List_Pointer(Problem_S.Group,
				 Constraint_P->ConstraintPerRegion->Case.Link.SubRegionRefIndex)
    : NULL ;

  if (Group_P->FunctionType == REGION){
    Nbr_Entity = List_Nbr(Group_P->InitialList) ;
  }
  else{
    Nbr_Entity = List_Nbr(Group_P->ExtendedList) ;
  }

  if (Nbr_Entity) {
    if (Flag_New)
      Active->Case.Link.Couples =
	List_Create(Nbr_Entity, 1, sizeof(struct TwoIntOneDouble)) ;
    else
      List_Reset(Active->Case.Link.Couples) ;
  }
  else {
    Active->Case.Link.Couples = NULL ;
    return ;
  }

  List_T  * nodePairs_L;
  List_T  * ListNodes_L=NULL, * SuppListNodes_L=NULL ;
  List_T  * ListNodesRef_L=NULL, * SuppListNodesRef_L=NULL ;
  List_T  * ExtendedListRef_L=NULL, * ExtendedSuppListRef_L=NULL ;
  List_T  * ExtendedList_L=NULL, * ExtendedSuppList_L=NULL ;
  int NumNodePairs=0;

  switch (Group_P->FunctionType) {

  case NODESOF :
    NumNodePairs = List_Nbr(Group_P->ExtendedList) + List_Nbr(Group_P->ExtendedSuppList);
    nodePairs_L = List_Create(NumNodePairs, 1, sizeof(struct nodePair)) ;

    // Generate lists of nodes in Master region and subregion
    Generate_ElementaryEntities
      (RegionRef_P->InitialList, &ExtendedListRef_L, NODESOF) ;
    if (SubRegionRef_P)
      Generate_ElementaryEntities
	(SubRegionRef_P->InitialList, &ExtendedSuppListRef_L, NODESOF) ;

    Generate_GeoLinkNodes(Constraint_P,
			  Group_P->ExtendedList, 
			  Group_P->ExtendedSuppList,
			  ExtendedListRef_L, 
			  ExtendedSuppListRef_L,
			  nodePairs_L) ;
    NowGenerate_LinkNodes(Constraint_P,
			  nodePairs_L,
			  Active->Case.Link.Couples) ;
    break ;

  case EDGESOF :
    NumNodePairs = List_Nbr(Group_P->ExtendedList) + List_Nbr(Group_P->ExtendedSuppList);
    nodePairs_L = List_Create(NumNodePairs, 1, sizeof(struct nodePair)) ;

    // Generate lists of nodes in Slave region and subregion
    Generate_ElementaryEntities
      (Group_P->InitialList, &ListNodes_L, NODESOF) ;
    if( Group_P->InitialSuppList )
      Generate_ElementaryEntities
	(Group_P->InitialSuppList, &SuppListNodes_L, NODESOF) ;
    // Generate lists of nodes in Master region and subregion
    Generate_ElementaryEntities
      (RegionRef_P->InitialList, &ListNodesRef_L, NODESOF) ;
    if (SubRegionRef_P)
      Generate_ElementaryEntities
	(SubRegionRef_P->InitialList, &SuppListNodesRef_L, NODESOF) ;

    Generate_GeoLinkNodes(Constraint_P,
			  ListNodes_L, 
			  SuppListNodes_L,
			  ListNodesRef_L, 
			  SuppListNodesRef_L,
			  nodePairs_L) ;
 
    // Generate lists of edges in Slave region and subregion
    Generate_ElementaryEntities_EdgeNN
      (Group_P->InitialList, &ExtendedList_L, EDGESOF) ;
    if (Group_P->InitialSuppList)
      Generate_ElementaryEntities_EdgeNN
	(Group_P->InitialSuppList, &ExtendedSuppList_L, EDGESOF) ;
    // Generate lists of edges in Master region and subregion
    Generate_ElementaryEntities_EdgeNN
      (RegionRef_P->InitialList, &ExtendedListRef_L, EDGESOF) ;
    if (SubRegionRef_P)
      Generate_ElementaryEntities_EdgeNN
	(SubRegionRef_P->InitialList, &ExtendedSuppListRef_L, EDGESOF) ;

    NowGenerate_LinkEdges(Constraint_P,
			  ExtendedList_L, 
			  ExtendedSuppList_L,    
			  ExtendedListRef_L, 
			  ExtendedSuppListRef_L,
			  nodePairs_L,
			  Active->Case.Link.Couples) ;
    break ;

  case FACETSOF :
    Message::Error("LinkFacets: Under construction");

    NumNodePairs = List_Nbr(Group_P->ExtendedList) + List_Nbr(Group_P->ExtendedSuppList);
    nodePairs_L = List_Create(NumNodePairs, 1, sizeof(struct nodePair)) ;

    // Generate lists of nodes in Slave region and subregion
    Generate_ElementaryEntities
      (Group_P->InitialList, &ListNodes_L, NODESOF) ;
    if( Group_P->InitialSuppList )
      Generate_ElementaryEntities
	(Group_P->InitialSuppList, &SuppListNodes_L, NODESOF) ;
    // Generate lists of nodes in Master region and subregion
    Generate_ElementaryEntities
      (RegionRef_P->InitialList, &ListNodesRef_L, NODESOF) ;
    if (SubRegionRef_P)
      Generate_ElementaryEntities
	(SubRegionRef_P->InitialList, &SuppListNodesRef_L, NODESOF) ;

    Generate_GeoLinkNodes(Constraint_P,
			  ListNodes_L, 
			  SuppListNodes_L,
			  ListNodesRef_L, 
			  SuppListNodesRef_L,
			  nodePairs_L) ;
 
    // Generate lists of edges in Slave region and subregion
    Generate_ElementaryEntities_FacetNNN
      (Group_P->InitialList, &ExtendedList_L, FACETSOF) ;
    if (Group_P->InitialSuppList)
      Generate_ElementaryEntities_FacetNNN
	(Group_P->InitialSuppList, &ExtendedSuppList_L, FACETSOF) ;
    // Generate lists of edges in Master region and subregion
    Generate_ElementaryEntities_FacetNNN
      (RegionRef_P->InitialList, &ExtendedListRef_L, FACETSOF) ;
    if (SubRegionRef_P)
      Generate_ElementaryEntities_FacetNNN
	(SubRegionRef_P->InitialList, &ExtendedSuppListRef_L, FACETSOF) ;

    NowGenerate_LinkFacets(Constraint_P,
			  ExtendedList_L, 
			  ExtendedSuppList_L,    
			  ExtendedListRef_L, 
			  ExtendedSuppListRef_L,
			  nodePairs_L,
			  Active->Case.Link.Couples) ;

    break ;
  case REGION :
    Generate_LinkRegions(Constraint_P,
	    Group_P->InitialList, RegionRef_P->InitialList,
	    Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex,
	    Active->Case.Link.Couples) ;
    break ;
  default :
    Message::Error("Bad function type for Constraint Link: %d",
		   Group_P->FunctionType) ;
    break ;
  }
}

/* Type "Link" Constraints

   "Generate_GeoLinkNodes" establishes the geometrical 1-1 pairing 
   between Master and Slave nodes at the time of the UpdateLink,
   which is afterwards used 
   to create links between various kinds of degrees of freedom
   of the finite element problem (node-, edge-, or facet-based).

   Different kinds of boundary conditions require such Dof links:
   - periodicity
   - sliding surface technique to account for movement
   The node pairing is determined by a geometrical mapping.

   Data structures: 

   "nodeLoc" associates a node number to a location {x,y,z} in space 
   at the time of the UpdateLink 
   keeping track of whether the node belongs to the Master or Slave (sub)region. 
   Up to 4 nodes can be coincident but, with the two additional booleans (Mst and Sub),
   "nodeLoc's" are unique and sorted unambiguously with the "fcmpNodeLoc" comparison fonction. 

   "nodePair" is a coincident Master-Slave node pair 
   along with a (complex) coefficient,
   and keeping track of whether the paired nodes belong 
   to the Master/Slave subregion or not.
   "nodePair's" are also unique, and sorted unambiguously 
   by the "fcmpNodePair" comparison fonction which, 
   for algorithmic reasons, sorts pairs on the Master node number,
   and than on the "subSlave" boolean. This is no mistake. 

   The 1-1 pairing between Master and Slave nodes
   is a list of "nodePair's" generated by "Generate_GeoLinkNodes".

*/

   /* A typical situation for reference :
       Master = [M0 ... MN[  
       subMaster = {MN}
       Slave = [S0 ... SN[ 
       subSlave = {SN}

       M0    coef2   S3 
       M1    coef2   .
       M2    coef2   .
       .     coef2   SN-1
       Mk    coef1   S0 and SN
       .     coef1   S1
       MN-1  coef1   S2
       MN   (coef2)  S3
    */
void  Generate_GeoLinkNodes(struct ConstraintInFS * Constraint_P,
			 List_T * ExtendedList_L,
			 List_T * ExtendedSuppList_L,
			 List_T * ExtendedListRef_L,
			 List_T * ExtendedSuppListRef_L,
			 List_T * nodePairs_L)
{
  int i,j;
  int vCount[4] = {0,0,0,0}; 
  int Index_Function = Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex ;
  int Index_FunctionRef = Constraint_P->ConstraintPerRegion->Case.Link.FunctionRefIndex ;
  bool SlidingSurface = (Index_FunctionRef > 0); 
  Message::Info("GeoLinkNodes: Link constraint of type < %s >", 
 		SlidingSurface ? "Sliding Surface" : "Periodicity");
  double ToleranceFactor = Constraint_P->ConstraintPerRegion->Case.Link.ToleranceFactor ;
  TOL = Current.GeoData->CharacteristicLength * ToleranceFactor ;
  Message::Info("GeoLinkNodes: Tolerance for coincidence check is %12.9e",TOL);
  // by default, ToleranceFactor is 1.e-8 
  // (to be defined with ToleranceFactor value; in the Link constraint.
  // It is stored in a static variable (scope = routines defined in this file). 

  struct Value  Value ;
  List_T  * nodeLoc_L;
  nodeLoc_L = List_Create(2*List_Nbr(ExtendedList_L), 1, sizeof(struct nodeLoc)) ;
  struct nodeLoc nodeLoc;
  nodeLoc.Mst = false;
  for (i = 0 ; i < List_Nbr(ExtendedList_L) ; i++) {
    List_Read(ExtendedList_L, i, &nodeLoc.Num) ;
    nodeLoc.Sub = (ExtendedSuppList_L &&
		   List_Search(ExtendedSuppList_L, &nodeLoc.Num, fcmp_int));
    Geo_GetNodesCoordinates(1, &nodeLoc.Num,
			    &Current.x, &Current.y, &Current.z) ;
    Get_ValueOfExpressionByIndex(Index_Function, NULL, 0., 0., 0., &Value) ;
    nodeLoc.x = Value.Val[0] ;
    nodeLoc.y = Value.Val[1] ; 
    nodeLoc.z = Value.Val[2] ;
    List_Add(nodeLoc_L, &nodeLoc) ;
  }

  if( List_Nbr( ExtendedList_L) != List_Nbr( ExtendedListRef_L) )
    Message::Error("#nodes on Master and Slave regions do not match: %d != %d",
		   List_Nbr( ExtendedList_L), List_Nbr( ExtendedListRef_L));
  if( List_Nbr( ExtendedSuppList_L) != List_Nbr( ExtendedSuppListRef_L) )
    Message::Error("#nodes on Master and Slave subregions do not match",
		   List_Nbr( ExtendedSuppList_L), List_Nbr( ExtendedSuppListRef_L)); 
  Message::Info("GeoLinkNodes: found %d nodes on Master and Slave regions", 
	   List_Nbr( ExtendedList_L));
  if( SlidingSurface )
    Message::Info("GeoLinkNodes: found %d nodes on Master and Slave subregions", 
		  List_Nbr( ExtendedSuppList_L));

  nodeLoc.Mst = true;
  for (i = 0 ; i < List_Nbr(ExtendedListRef_L) ; i++) {
    List_Read(ExtendedListRef_L, i, &nodeLoc.Num) ;
    nodeLoc.Sub = (ExtendedSuppListRef_L &&
		   List_Search(ExtendedSuppListRef_L, &nodeLoc.Num, fcmp_int));
    Geo_GetNodesCoordinates( 1, &nodeLoc.Num,
			     &Current.x, &Current.y, &Current.z) ;
    if (Index_FunctionRef > 0){ 
      Get_ValueOfExpressionByIndex(Index_Function, NULL, 0., 0., 0., &Value) ;
      Current.x = Value.Val[0] ; 
      Current.y = Value.Val[1] ;
      Current.z = Value.Val[2] ;
      Get_ValueOfExpressionByIndex(Index_FunctionRef, NULL, 0., 0., 0., &Value) ;
      Current.x += Value.Val[0] ; 
      Current.y += Value.Val[1] ;
      Current.z += Value.Val[2] ;
    }
    nodeLoc.x = Current.x ; 
    nodeLoc.y = Current.y ;
    nodeLoc.z = Current.z ;
    List_Add(nodeLoc_L, &nodeLoc) ;
  }

  List_Sort(nodeLoc_L, fcmp_nodeLoc) ;

  int iCountSubMaster=0, iCountSubSlave=0; 
  for (i = 0 ; i < List_Nbr(nodeLoc_L) ; i++) {
    List_Read(nodeLoc_L, i, &nodeLoc) ;
    if(nodeLoc.Mst && nodeLoc.Sub) iCountSubMaster++;
    if(!nodeLoc.Mst && nodeLoc.Sub) iCountSubSlave++;
    if(Message::GetVerbosity() == 101)
      printf("%d %d %5d %12.9f %12.9f %12.9f\n", nodeLoc.Mst, nodeLoc.Sub, 
	     nodeLoc.Num, nodeLoc.x, nodeLoc.y, nodeLoc.z);
  }
  Message::Info("GeoLinkNodes: %d nodeLocs with (%d,%d) nodes on subMaster/subSlave",
		List_Nbr(nodeLoc_L), iCountSubMaster, iCountSubSlave);

  struct nodeLoc coincident[5];
  struct nodePair nodePair ;  
  bool test, aligned=false;
  i=0;
  do{
    j=0;
    do {
      if( j>4 ) 
	Message::Error("GeoLinkNodes: Found %d>4 nodes at same location\n", j); 
      List_Read(nodeLoc_L, i, &coincident[j]) ;
      test = ( j==0 ? true : !fcmp_XYZ(&coincident[0], &coincident[j]) );
      if(test) {i++; j++;}
    } while(i<List_Nbr(nodeLoc_L) && test);

    double coefR, coefI; 
    Current.x = coincident[0].x ;
    Current.y = coincident[0].y ;
    Current.z = coincident[0].z ;
    int Index_Coef = Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex ;
    Get_ValueOfExpressionByIndex(Index_Coef, NULL, 0., 0., 0., &Value) ;
    coefR = Value.Val[0] ;
    coefI = (Current.NbrHar == 1) ? 0. : Value.Val[MAX_DIM] ;

    if( j==2 ) {
      nodePair = makeNodePair(coincident[1], coincident[0], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
    }
    else if( j==3 ){
      // The first 2 are a non-sub masternode and a non-sub slavenode.
      // The third one is either a subslave or a submaster node. 
      nodePair = makeNodePair(coincident[1], coincident[0], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
      if(coincident[2].Mst)
	nodePair = makeNodePair(coincident[2], coincident[0], coefR, coefI) ;
      else
	nodePair = makeNodePair(coincident[1], coincident[2], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
    }
    else if( j==4 ){
      aligned=true; // Slave is aligned with one of the symmetric copies of Master
      nodePair = makeNodePair(coincident[1], coincident[0], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
      nodePair = makeNodePair(coincident[3], coincident[2], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
      nodePair = makeNodePair(coincident[1], coincident[2], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
      nodePair = makeNodePair(coincident[3], coincident[0], coefR, coefI) ;
      List_Add(nodePairs_L, &nodePair);
    }
    else{
      Message::Error("GeoLinkNodes: Found unpaired node %d at %f %f %f (j=%d)\n",
		     coincident[0].Num, coincident[0].x, coincident[0].y, coincident[0].z, j) ;
    }
    vCount[j-1]++;
  } while( i<List_Nbr(nodeLoc_L) ) ;

  Message::Info("GeoLinkNodes: vCount[j==2,3,4]= %d, %d, %d", 
		vCount[1], vCount[2], vCount[3]);
  if( !SlidingSurface && j>2 )
    Message::Error("Periodicity surfaces should be unambiguous");

  int ExpectedNumNodePairs =  List_Nbr( ExtendedListRef_L) + List_Nbr( ExtendedSuppListRef_L) ;
  if( aligned ) ExpectedNumNodePairs += List_Nbr( ExtendedSuppListRef_L) ;

  int NumSelfImageNodes=0, iCountSubSub=0 ;
  iCountSubMaster=0, iCountSubSlave=0; 
  for (i = 0 ; i < List_Nbr(nodePairs_L) ; i++) {
    List_Read(nodePairs_L, i, &nodePair) ;
    if( nodePair.Master == nodePair.Slave ) NumSelfImageNodes++;
    if( SlidingSurface ){
      if( nodePair.subMaster) iCountSubMaster++;
      if( nodePair.subSlave) iCountSubSlave++;
      if( nodePair.subMaster && nodePair.subSlave) iCountSubSub++;
    }
    if(Message::GetVerbosity() == 101) {
      printf("%7d %d %7d %d %5.2f %5.2f\n", nodePair.Master, nodePair.subMaster, 
	     nodePair.Slave, nodePair.subSlave, nodePair.coefR, nodePair.coefI);
    }
  }
  Message::Info("GeoLinkNodes: made %d node pairs, expected %d, self-images %d", 
		List_Nbr( nodePairs_L), ExpectedNumNodePairs, NumSelfImageNodes) ;
  if( SlidingSurface )
    Message::Info("GeoLinkNodes: %d in subMaster, %d in subSlave, %d in both", 
		  iCountSubMaster, iCountSubSlave, iCountSubSub) ;


  List_Delete(nodeLoc_L) ;  
  return;
}

void  NowGenerate_LinkNodes(struct ConstraintInFS * Constraint_P,
			    List_T * nodePairs_L,
			    List_T * Couples_L)
{
  struct TwoIntOneDouble  TwoIntOneDouble ;  
  struct nodePair nodePair;

  for (int i = 0 ; i < List_Nbr(nodePairs_L) ; i++) {
    List_Read(nodePairs_L, i, &nodePair) ;

    if( nodePair.subMaster || nodePair.subSlave)
      continue ; // no link for a node in subMaster or in subSlave
    if( nodePair.Master == nodePair.Slave)
      continue ; // no link for self-imaged nodes
    
    TwoIntOneDouble.Int1 = nodePair.Slave;
    TwoIntOneDouble.Int2 = nodePair.Master ;
    TwoIntOneDouble.Double = nodePair.coefR ;
    TwoIntOneDouble.Double2 = nodePair.coefI ;
    List_Add(Couples_L, &TwoIntOneDouble) ;
  }

  if(Message::GetVerbosity() == 101) {
    for (int i = 0 ; i < List_Nbr(Couples_L) ; i++) {
      List_Read(Couples_L, i, &TwoIntOneDouble) ;
      printf("%8d %8d %10.7f %10.7f\n", TwoIntOneDouble.Int1, TwoIntOneDouble.Int2, 
	     TwoIntOneDouble.Double, TwoIntOneDouble.Double2);
    }
  }
  Message::Info("LinkNodes: wrote %d links ", List_Nbr( Couples_L) ) ;
}

bool swapEdge(EdgeNN &a){
  if( a.NumEdge==0 ) printf("What !!!\n");
  if( a.Node2 == a.Node1 ) printf("What !!!\n");
  if( a.Node2 < a.Node1) {
    int Save_Num = a.Node2 ;
    a.Node2 = a.Node1 ;  
    a.Node1 = Save_Num ;
    a.NumEdge *= -1;
    return true;
  }
  return false;
}

int isgn(int v) {
  return (v > 0) - (v < 0);
}

struct LinkEdge {
  EdgeNN masterEdge;
  nodePair *nodePair1_P, *nodePair2_P;
  EdgeNN *slaveEdge_P;
} ;

double frad(nodePair *np){
  return hypot(np->y, np->x);
}

void  NowGenerate_LinkEdges(struct ConstraintInFS * Constraint_P,
			    List_T * ExtendedList_L,
			    List_T * ExtendedSuppList_L,
			    List_T * ExtendedListRef_L,
			    List_T * ExtendedSuppListRef_L,
			    List_T * nodePairs_L,
			    List_T * Couples_L)
{
  int  i, iCount, isw;
  nodePair *nodePairs_P[4];
  int vCount[4] = {0,0,0,0}; 
  bool SlidingSurface = (Constraint_P->ConstraintPerRegion->Case.Link.FunctionRefIndex > 0); 

  if ( List_Nbr(ExtendedList_L) != List_Nbr(ExtendedListRef_L))
    Message::Error("LinkEdges: number of edges of Master/Slave regions do not match (%d!=%d)",
		   List_Nbr(ExtendedList_L), List_Nbr(ExtendedListRef_L)) ;
  if ( List_Nbr(ExtendedSuppList_L) != List_Nbr(ExtendedSuppListRef_L))
    Message::Error("LinkEdges: number of edges of Master/Slave subregions do not match (%d!=%d)",
		   List_Nbr(ExtendedSuppList_L), List_Nbr(ExtendedSuppListRef_L)) ;
  Message::Info("LinkEdges: found  %d edges on Master and Slave regions", 
	   List_Nbr( ExtendedListRef_L));
  if( SlidingSurface)
    Message::Info("LinkEdges: found  %d edges on Master and Slave subregions", 
		  List_Nbr( ExtendedList_L), List_Nbr( ExtendedSuppList_L) );

  int NumEdge =  List_Nbr(ExtendedList_L) ;

  struct EdgeNN  masterEdge, slaveEdge, *slaveEdge_P ;
  List_T  * slaveEdges_L, * masterEdges_L ;
  slaveEdges_L = List_Create(NumEdge, 1, sizeof(struct EdgeNN)) ;
  masterEdges_L = List_Create(NumEdge, 1, sizeof(struct EdgeNN)) ;

  for( i=0 ; i < NumEdge ; i++) {
    List_Read(ExtendedListRef_L, i, &masterEdge) ;
    List_Add(masterEdges_L, &masterEdge) ;
    if( masterEdge.NumEdge <= 0 ) printf("Arghhh\n");
  }

  iCount=0;
  for( i=0 ; i < NumEdge ; i++) {
    List_Read(ExtendedList_L, i, &slaveEdge) ;
    if( swapEdge(slaveEdge) ) iCount++;
    List_Add(slaveEdges_L, &slaveEdge) ;
  }

  List_Sort(slaveEdges_L, fcmp_NN) ;
  List_Sort(nodePairs_L, fcmp_nodePair);
  //List_Sort(masterEdges_L, fcmp_NN) ; // unnecessary, we do not search in masterEdges_L

  struct nodePair nodePair;
  struct LinkEdge LE;

  for (i = 0 ; i < NumEdge ; i++) {
    List_Read(masterEdges_L, i, &LE.masterEdge) ;
    int j = 0;

    nodePair.Master = LE.masterEdge.Node1;
    nodePair.subSlave = false;
    if( (nodePairs_P[j] =  (struct nodePair *)
	 List_PQuery(nodePairs_L, &nodePair, fcmp_nodePair)) ) 
      j++ ;
    else 
      Message::Error("LinkEdges: masterEdge node %d has no image on Slave",
		     nodePair.Master);

    nodePair.Master = LE.masterEdge.Node2;
    nodePair.subSlave = false;
    if( (nodePairs_P[j] =  (struct nodePair *)
	 List_PQuery(nodePairs_L, &nodePair, fcmp_nodePair)) ) 
     j++ ;
    else 
      Message::Error("LinkEdges: Master node %d has no image on Slave",
		     nodePair.Master);
  
    // j is 2
    // Check whether masterEdge nodes are also connected with SN 
    nodePair.Master = LE.masterEdge.Node1;
    nodePair.subSlave = true;
    if( (nodePairs_P[j] = (struct nodePair *)
	 List_PQuery(nodePairs_L, &nodePair, fcmp_nodePair)) ) j++ ;

    nodePair.Master = LE.masterEdge.Node2;
    nodePair.subSlave = true;
    if( (nodePairs_P[j] =  (struct nodePair *)
	 List_PQuery(nodePairs_L, &nodePair, fcmp_nodePair)) ) j++ ;

    // now j is 2, 3 or 4
    // So we have up to 4 nodePairs connected to the 2 nodes of MasterEdge.

    vCount[j-1]++;

    if( j == 2 ) {
      // slaveEdge has no node in subSlave  
      slaveEdge.Node1 = nodePairs_P[0]->Slave;
      slaveEdge.Node2 = nodePairs_P[1]->Slave;
      isw = swapEdge(slaveEdge) ;
      if( (LE.slaveEdge_P =  (struct EdgeNN *)
	   List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	LE.nodePair1_P = nodePairs_P[0];
	LE.nodePair2_P = nodePairs_P[1];
	LE.slaveEdge_P->NumEdge *=  (isw?-1:1) ;
      }
      else  
	Message::Error("LinkEdges: Not found slave edge %5d %5d", 
		       slaveEdge.Node1, slaveEdge.Node2);
    }
    else if( j == 3 ) {
      if( nodePairs_P[0]->Master == nodePairs_P[2]->Master ) { 
	// if MA == MC
	// first possible slave edge is SA - SB = S0 - S1
	slaveEdge.Node1 = nodePairs_P[0]->Slave;
	slaveEdge.Node2 = nodePairs_P[1]->Slave;
	isw = swapEdge(slaveEdge) ;
	if( (LE.slaveEdge_P = (struct EdgeNN *)
	     List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	  LE.nodePair1_P = nodePairs_P[0];
	  LE.nodePair2_P = nodePairs_P[1];
	  LE.slaveEdge_P->NumEdge *= (isw?-1:1) ;
	}
	else{ 
	  // second possible slave edge is SB - SC = SN-1 - SN
	  slaveEdge.Node1 = nodePairs_P[2]->Slave;
	  slaveEdge.Node2 = nodePairs_P[1]->Slave;
	  isw = swapEdge(slaveEdge) ;
	  if( (LE.slaveEdge_P =  (struct EdgeNN *)
	       List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	    LE.nodePair1_P = nodePairs_P[2];
	    LE.nodePair2_P = nodePairs_P[1];
	    LE.slaveEdge_P->NumEdge *= (isw?-1:1) ;
	  }
	  else
	    Message::Error("LinkEdges: Not found slave edge %5d %5d\n", 
			   slaveEdge.Node1, slaveEdge.Node2);
	}
      }
      else if( nodePairs_P[1]->Master == nodePairs_P[2]->Master ) { 
	// if MB == MC
	// first possible slave edge is SB - SA = S0 - S1
	slaveEdge.Node1 = nodePairs_P[0]->Slave;
	slaveEdge.Node2 = nodePairs_P[1]->Slave;
	isw = swapEdge(slaveEdge) ;
	if( (LE.slaveEdge_P =  (struct EdgeNN *)
	     List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	  LE.nodePair1_P = nodePairs_P[0];
	  LE.nodePair2_P = nodePairs_P[1];
	  LE.slaveEdge_P->NumEdge *= (isw?-1:1) ;
	}
	else{ 
	  // second possible slave edge is SA - SC = SN-1 - SN
	  slaveEdge.Node1 = nodePairs_P[0]->Slave;
	  slaveEdge.Node2 = nodePairs_P[2]->Slave;
	  isw = swapEdge(slaveEdge) ;
	  if( (LE.slaveEdge_P =  (struct EdgeNN *)
	       List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	    LE.nodePair1_P = nodePairs_P[0];
	    LE.nodePair2_P = nodePairs_P[2];
	    LE.slaveEdge_P->NumEdge *= (isw?-1:1) ;
	  }
	  else
	    Message::Error("LinkEdges: Not found slave edge %5d %5d\n", 
			   slaveEdge.Node1, slaveEdge.Node2);
	}
      }
      else 
	std::cout << "Should not happen" << std::endl;
    }
    else if( j == 4 ) {
      // masterEdge has 2 paired slave edges. One in Slave, and one in subSlave. 
      // Since nodePairs are also sorted on subSlave (see fcmp_nodePairs())
      // the paired slave nodes in Slave (nodePairs_P[2]->subSlave == false)
      // are the first two nodePairs.

      if( nodePairs_P[0]->subMaster ){
	if (!nodePairs_P[1]->subMaster)
	  std::cout << "Hum hum 2" << std::endl;
	// the masterEdge is in subMaster
	slaveEdge.Node1 = nodePairs_P[2]->Slave;
	slaveEdge.Node2 = nodePairs_P[3]->Slave;
	isw = swapEdge(slaveEdge) ;
	if( (LE.slaveEdge_P =  (struct EdgeNN *)
	     List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	  LE.nodePair1_P = nodePairs_P[2];
	  LE.nodePair2_P = nodePairs_P[3];
	  LE.slaveEdge_P->NumEdge *= (isw?-1:1) ;
	}
	else
	  Message::Error("LinkEdges: Not found slave edge %5d %5d\n", 
			 slaveEdge.Node1, slaveEdge.Node2);
      }
      else{
	if( nodePairs_P[1]->subMaster )
	  std::cout << "Hum hum 2" << std::endl;
	// the masterEdge has no node in subMaster
	slaveEdge.Node1 = nodePairs_P[0]->Slave;
	slaveEdge.Node2 = nodePairs_P[1]->Slave;
	isw = swapEdge(slaveEdge) ;
	if( (slaveEdge_P =  (struct EdgeNN *)
	   List_PQuery(slaveEdges_L, &slaveEdge, fcmp_NN)) ) {
	  LE.nodePair1_P = nodePairs_P[0];
	  LE.nodePair2_P = nodePairs_P[1];
	  LE.slaveEdge_P = slaveEdge_P;
	  LE.slaveEdge_P->NumEdge *= (isw?-1:1) ;
	}
	else
	  Message::Error("LinkEdges: Not found slave edge %5d %5d\n", 
			 slaveEdge.Node1, slaveEdge.Node2);
      }
    }
    else
      Message::Error("Link Edge failed j=%d", j) ;

    struct TwoIntOneDouble TwoIntOneDouble ;
    TwoIntOneDouble.Int1 = LE.slaveEdge_P->NumEdge ;
    TwoIntOneDouble.Int2 = LE.masterEdge.NumEdge ;
    if( !LE.nodePair1_P->subMaster && !LE.nodePair1_P->subSlave) {
      TwoIntOneDouble.Double  = LE.nodePair1_P->coefR ;
      TwoIntOneDouble.Double2 = LE.nodePair1_P->coefI ;
      List_Add(Couples_L, &TwoIntOneDouble) ;
    }
    else if( !LE.nodePair2_P->subMaster && !LE.nodePair2_P->subSlave) {
      TwoIntOneDouble.Double  = LE.nodePair2_P->coefR ;
      TwoIntOneDouble.Double2 = LE.nodePair2_P->coefI ;
      List_Add(Couples_L, &TwoIntOneDouble) ;
    }
    else{
      // Do nothing
      // This edge has both nodes in subMaster or both in subSlave  
    }

    // Debug tool
    //    printf("%5d %5d %5d %5d %8.5f %8.5f %7d %7d %9.5f\n", 
    // 	     LE.slaveEdge_P->Node1, LE.slaveEdge_P->Node2,
    // 	     LE.masterEdge.Node1, LE.masterEdge.Node2, 
    // 	     frad(LE.nodePair1_P), frad(LE.nodePair2_P), 
    // 	     TwoIntOneDouble.Int1, TwoIntOneDouble.Int2, TwoIntOneDouble.Double);
  }

  iCount=0;
  struct TwoIntOneDouble *TwoIntOneDouble_P ;
  for (int i = 0 ; i < List_Nbr(Couples_L) ; i++) {
    TwoIntOneDouble_P = ( struct TwoIntOneDouble *) List_Pointer(Couples_L, i) ;
    if (TwoIntOneDouble_P->Double == -1) iCount++;
    //TwoIntOneDouble_P->Double  *= -isgn(TwoIntOneDouble_P->Int1) * isgn(TwoIntOneDouble_P->Int2) ;
    //TwoIntOneDouble_P->Double2 *= -isgn(TwoIntOneDouble_P->Int1) * isgn(TwoIntOneDouble_P->Int2) ;
    TwoIntOneDouble_P->Int1 = abs(TwoIntOneDouble_P->Int1) ;
    TwoIntOneDouble_P->Int2 = abs(TwoIntOneDouble_P->Int2) ;
    if(Message::GetVerbosity() == 101) {
      printf("LinkEdges: %8d %8d %10.7f %10.7f\n", TwoIntOneDouble_P->Int1, TwoIntOneDouble_P->Int2, 
	     TwoIntOneDouble_P->Double, TwoIntOneDouble_P->Double2);
    }
  }
 
  Message::Info("LinkEdges: wrote %d links, expected %d-%d ", 
		List_Nbr( Couples_L), NumEdge, List_Nbr( ExtendedSuppListRef_L) ) ;
  Message::Info("Linkedges: %d links with coefficient -1", iCount);
  Message::Info("Linkedges: vCount[j==2,3,4]= %d, %d, %d", 
		vCount[1], vCount[2], vCount[3]);

  //List_Delete(??) ;
}

void  NowGenerate_LinkFacets(struct ConstraintInFS * Constraint_P,
			    List_T * ExtendedList_L,
			    List_T * ExtendedSuppList_L,
			    List_T * ExtendedListRef_L,
			    List_T * ExtendedSuppListRef_L,
			    List_T * nodePairs_L,
			    List_T * Couples_L)
{
  int  Nbr_Entity, Nbr_EntityRef ;

  //List_T  * ExtendedListNodes_L ;
  List_T  * CouplesOfNodes_L=NULL, * CouplesOfNodes2_L=NULL ;
  struct FacetNNN  FacetNNN, FacetNNNRef ;
  List_T  * FacetNNN_L, * FacetNNNRef_L ;

  int  i ;
  struct TwoIntOneDouble *TwoIntOneDouble_P, *TwoIntOneDouble2_P;
  struct TwoIntOneDouble *TwoIntOneDouble3_P, TwoIntOneDouble ;

  int Flag_Filter=0 ;

  /* Couples of nodes */

  // Generate_ElementaryEntities
  //   (Group_P->InitialList, &ExtendedListNodes_L, NODESOF) ;

  // if ((Nbr_Entity = List_Nbr(ExtendedListNodes_L)))
  //   CouplesOfNodes_L = List_Create(Nbr_Entity, 1, sizeof(struct TwoIntOneDouble)) ;
  // else {
  //   return ;  /* situation impossible... */
  // }

  // if (Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex2 < 0) {
  //   Flag_Filter = 0 ;
  //   CouplesOfNodes2_L = NULL ;
  //   Generate_LinkNodes(Constraint_P, ExtendedListNodes_L, NULL, RegionRef_P, NULL,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex,
  //                      Constraint_P->ConstraintPerRegion->Case.Link.ToleranceFactor,
  // 		       CouplesOfNodes_L) ;
  // }
  // else {
  //   Flag_Filter = 1 ;
  //   CouplesOfNodes2_L = List_Create(Nbr_Entity, 1, sizeof(struct TwoIntOneDouble)) ;

  //   Generate_LinkNodes(Constraint_P, ExtendedListNodes_L, NULL, RegionRef_P, NULL,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex,
  //                      Constraint_P->ConstraintPerRegion->Case.Link.ToleranceFactor,
  // 		       CouplesOfNodes_L) ;
  //   Generate_LinkNodes(Constraint_P, ExtendedListNodes_L, NULL, RegionRef_P, NULL,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.FilterIndex2,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.FunctionIndex2,
  // 		       Constraint_P->ConstraintPerRegion->Case.Link.CoefIndex2,
  //                      Constraint_P->ConstraintPerRegion->Case.Link.ToleranceFactor,
  // 		       CouplesOfNodes2_L) ;
  // }

  /* Couples of facets */

  Message::Info("== Couples of facets ==") ;

  /* Facets with Constraint */

  Nbr_Entity = List_Nbr(ExtendedList_L) ;

  // Generate_ElementaryEntities_FacetNNN
  //   (Group_P->InitialList, &ExtendedList_L, FACETSOF) ;
  // if (Group_P->InitialSuppList)
  //   Generate_ElementaryEntities_FacetNNN
  //     (Group_P->InitialSuppList, &ExtendedSuppListRef_L, FACETSOF) ;
  // else
  //   ExtendedSuppListRef_L = NULL ;

  FacetNNN_L = List_Create(Nbr_Entity, 1, sizeof(struct FacetNNN)) ;

  if (Nbr_Entity != List_Nbr(ExtendedList_L)){
    Message::Error("Constraint Link: strange...") ;
    return;
  }

  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(ExtendedList_L, i, &FacetNNN) ;
    if (!(ExtendedSuppListRef_L &&
	  List_Search(ExtendedSuppListRef_L, &FacetNNN.NumFacet, fcmp_int))) {

      // FIXME TODO
      /*if (FacetNNN.Node3 < FacetNNN.Node2) {
         Save_Num1 = FacetNNN.Node3 ;
	 FacetNNN.Node3 = FacetNNN.Node2 ;  FacetNNN.Node2 = Save_Num1 ;
      }
      if (FacetNNN.Node3 < FacetNNN.Node1) {
         Save_Num3 = FacetNNN.Node3 ;
	 FacetNNN.Node3 = FacetNNN.Node1 ;  FacetNNN.Node1 = Save_Num2 ;
      }
      if (FacetNNN.Node2 < FacetNNN.Node1) {
         Save_Num3 = FacetNNN.Node2 ;
	 FacetNNN.Node2 = FacetNNN.Node1 ;  FacetNNN.Node1 = Save_Num3 ;
      }*/

      Message::Debug("Image %d: f%d, n%d - n%d - n%d",
                     i, FacetNNN.NumFacet, FacetNNN.Node1, FacetNNN.Node2, FacetNNN.Node3) ;

      TwoIntOneDouble_P = (struct TwoIntOneDouble *)
	List_PQuery(CouplesOfNodes_L, &FacetNNN.Node1, fcmp_int) ;
      TwoIntOneDouble2_P = (struct TwoIntOneDouble *)
	List_PQuery(CouplesOfNodes_L, &FacetNNN.Node2, fcmp_int) ;
      TwoIntOneDouble3_P = (struct TwoIntOneDouble *)
	List_PQuery(CouplesOfNodes_L, &FacetNNN.Node3, fcmp_int) ;

      if (!(TwoIntOneDouble_P && TwoIntOneDouble2_P && TwoIntOneDouble3_P)) {
	if (Flag_Filter) {
	  TwoIntOneDouble_P = (struct TwoIntOneDouble *)
	    List_PQuery(CouplesOfNodes2_L, &FacetNNN.Node1, fcmp_int) ;
	  TwoIntOneDouble2_P = (struct TwoIntOneDouble *)
	    List_PQuery(CouplesOfNodes2_L, &FacetNNN.Node2, fcmp_int) ;
	  TwoIntOneDouble3_P = (struct TwoIntOneDouble *)
	    List_PQuery(CouplesOfNodes2_L, &FacetNNN.Node3, fcmp_int) ;
	  if (!TwoIntOneDouble_P)
	    Message::Error("1-Constraint Link: unknown node (%d)", FacetNNN.Node1) ;
	  if (!TwoIntOneDouble2_P)
	    Message::Error("2-Constraint Link: unknown node (%d)", FacetNNN.Node2) ;
	  if (!TwoIntOneDouble3_P)
	    Message::Error("3-Constraint Link: unknown node (%d)", FacetNNN.Node3) ;
	}
	else  Message::Error("4-Constraint Link: bad correspondance for facets") ;
      }

      FacetNNN.Node1 = TwoIntOneDouble_P->Int2 ;
      FacetNNN.Node2 = TwoIntOneDouble2_P->Int2 ;
      FacetNNN.Node3 = TwoIntOneDouble3_P->Int2 ;

      if ( (fabs(TwoIntOneDouble_P->Double  - TwoIntOneDouble2_P->Double) > 1.e-18) ||
	   (fabs(TwoIntOneDouble2_P->Double - TwoIntOneDouble3_P->Double) > 1.e-18) ||
           (fabs(TwoIntOneDouble3_P->Double - TwoIntOneDouble_P->Double ) > 1.e-18)  )
	Message::Error("5-Constraint Link: Bad Coefficient for Facets") ;

      FacetNNN.Coef  = TwoIntOneDouble_P->Double ;
      FacetNNN.Coef2 = TwoIntOneDouble_P->Double2 ; /* LinkCplx */

      // FIXME TODO
      /*if (FacetNNN.Node3 < FacetNNN.Node2) {
         Save_Num1 = FacetNNN.Node3 ;
	 FacetNNN.Node3 = FacetNNN.Node2 ;  FacetNNN.Node2 = Save_Num1 ;
	 FacetNNN.NumFacet *= -1 ;
      }
      if (FacetNNN.Node3 < FacetNNN.Node1) {
         Save_Num2 = FacetNNN.Node3 ;
	 FacetNNN.Node3 = FacetNNN.Node1 ;  FacetNNN.Node1 = Save_Num2 ;
	 FacetNNN.NumFacet *= -1 ;
      }
      if (FacetNNN.Node2 < FacetNNN.Node1) {
         Save_Num3 = FacetNNN.Node2 ;
	 FacetNNN.Node2 = FacetNNN.Node1 ;  FacetNNN.Node1 = Save_Num3 ;
	 FacetNNN.NumFacet *= -1 ;
      } */

      List_Add(FacetNNN_L, &FacetNNN) ;

      Message::Debug("                         --- (whose source is) --->  f%d, n%d - n%d - n%d",
                     FacetNNN.NumFacet, FacetNNN.Node1, FacetNNN.Node2, FacetNNN.Node3) ;

    }
  }
  Nbr_Entity = List_Nbr(FacetNNN_L) ;

  /* Facets of reference (Link) */

  // Generate_ElementaryEntities_FacetNNN
  //   (RegionRef_P->InitialList, &ExtendedListRef_L, FACETSOF) ;
  // if (SubRegionRef_P)
  //   Generate_ElementaryEntities_FacetNNN
  //     (SubRegionRef_P->InitialList, &ExtendedSuppListRef_L, FACETSOF) ;
  // else
  //   ExtendedSuppListRef_L = NULL ;

  Nbr_EntityRef = List_Nbr(ExtendedListRef_L) ;

  FacetNNNRef_L = List_Create(Nbr_EntityRef, 1, sizeof(struct FacetNNN)) ;

  for (i = 0 ; i < Nbr_EntityRef ; i++) {
    List_Read(ExtendedListRef_L, i, &FacetNNNRef.NumFacet) ;
    if (!(ExtendedSuppListRef_L &&
	  List_Search(ExtendedSuppListRef_L, &FacetNNNRef.NumFacet, fcmp_int))) {
      // FIXME TODO
      /*if (FacetNNNRef.Node3 < FacetNNNRef.Node2) {
         Save_Num1 = FacetNNNRef.Node3 ;
	 FacetNNNRef.Node3 = FacetNNNRef.Node2 ;  FacetNNNRef.Node2 = Save_Num1 ;
      }
      if (FacetNNNRef.Node3 < FacetNNNRef.Node1) {
         Save_Num2 = FacetNNNRef.Node3 ;
	 FacetNNNRef.Node3 = FacetNNNRef.Node1 ;  FacetNNNRef.Node1 = Save_Num2 ;
      }
      if (FacetNNNRef.Node2 < FacetNNNRef.Node1) {
         Save_Num3 = FacetNNNRef.Node2 ;
	 FacetNNNRef.Node2 = FacetNNNRef.Node1 ;  FacetNNNRef.Node1 = Save_Num3 ;
      } */
      List_Add(FacetNNNRef_L, &FacetNNNRef) ;

      /* -- */
      Message::Debug("Ref   %d: f%d, n%d - n%d  - n%d ",
                     i, FacetNNNRef.NumFacet, FacetNNNRef.Node1, FacetNNNRef.Node2,
                     FacetNNNRef.Node3) ;
    }
  }
  Nbr_EntityRef = List_Nbr(FacetNNNRef_L) ;

  if (Nbr_EntityRef != Nbr_Entity){
    Message::Error("6-Constraint Link: bad correspondance of number of facets (%d, %d)",
                   Nbr_Entity, Nbr_EntityRef) ;
    return;
  }

  List_Sort(FacetNNN_L   , fcmp_NNN) ;
  List_Sort(FacetNNNRef_L, fcmp_NNN) ;

  for (i = 0 ; i < Nbr_Entity ; i++) {
    List_Read(FacetNNN_L, i, &FacetNNN) ;
    List_Read(FacetNNNRef_L, i, &FacetNNNRef) ;

    Message::Debug("Final : %d: a%d, n%d - n%d - n%d (%.16g + %.16g i) / a%d, n%d - n%d - n%d",
                   i,
                   FacetNNN.NumFacet, FacetNNN.Node1, FacetNNN.Node2, FacetNNN.Node3,
                   FacetNNN.Coef, FacetNNN.Coef2, FacetNNNRef.NumFacet,
                   FacetNNNRef.Node1, FacetNNNRef.Node2, FacetNNNRef.Node3) ;

    if (FacetNNN.Node1 != FacetNNNRef.Node1 ||
	FacetNNN.Node2 != FacetNNNRef.Node2 ||
	FacetNNN.Node3 != FacetNNNRef.Node3 ){
      Message::Error("7-Constraint Link: bad correspondance of facets (%d, %d)",
                     FacetNNN.NumFacet, FacetNNNRef.NumFacet) ;
      return;
    }

    TwoIntOneDouble.Int1 = FacetNNN.NumFacet ;
    TwoIntOneDouble.Int2 = FacetNNNRef.NumFacet ;
    TwoIntOneDouble.Double = FacetNNN.Coef ;
    TwoIntOneDouble.Double2 = FacetNNN.Coef2 ; /* LinkCplx */

    List_Add(Couples_L, &TwoIntOneDouble) ;
  }

  List_Delete(FacetNNN_L) ;  List_Delete(FacetNNNRef_L) ;
  List_Delete(CouplesOfNodes_L) ;  List_Delete(CouplesOfNodes2_L) ;

  Message::Info("====> End Link Facet") ;
}


/*  G e n e r a t e _ L i n k R e g i o n s  */

void  Generate_LinkRegions(struct ConstraintInFS * Constraint_P,
			   List_T * Region_L, List_T * RegionRef_L,
			   int Index_Coef, List_T * Couples_L)
{
  struct TwoIntOneDouble  TwoIntOneDouble ;
  struct Value  Value ;

  if (List_Nbr(Region_L) > 1 || List_Nbr(RegionRef_L) > 1){
    Message::Error("More than one region for link type constraint") ;
    return;
  }

  List_Read(Region_L, 0, &TwoIntOneDouble.Int1) ;
  List_Read(RegionRef_L, 0, &TwoIntOneDouble.Int2) ;

  Get_ValueOfExpressionByIndex(Index_Coef, NULL, 0., 0., 0., &Value) ;
  TwoIntOneDouble.Double = Value.Val[0] ;
  if (Current.NbrHar == 1)
    TwoIntOneDouble.Double2 = 0. ;
  else
    TwoIntOneDouble.Double2 = Value.Val[MAX_DIM] ; /* LinkCplx */

  List_Add(Couples_L, &TwoIntOneDouble) ;
}
