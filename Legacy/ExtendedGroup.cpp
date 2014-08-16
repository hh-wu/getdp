// GetDP - Copyright (C) 1997-2014 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <set>
#include <stdlib.h>
#include "ProData.h"
#include "ProDefine.h"
#include "ExtendedGroup.h"
#include "GeoData.h"
#include "Message.h"

extern struct Problem Problem_S ;

int  fcmp_int2(const void * a, const void * b)
{
  static int result ;
  if ( ( result = ((struct TwoInt *)a)->Int1
                - ((struct TwoInt *)b)->Int1 ) != 0 )  return result ;
  return  ((struct TwoInt *)a)->Int2 - ((struct TwoInt *)b)->Int2 ;
}

int  fcmp_absint2(const void * a, const void * b)
{
  static int result ;
  if ( ( result = abs(((struct TwoInt *)a)->Int1)
		- abs(((struct TwoInt *)b)->Int1) ) != 0 )  return result ;
  return  abs(((struct TwoInt *)a)->Int2) - abs(((struct TwoInt *)b)->Int2) ;
}

/* ------------------------------------------------------------------------ */
/*  C h e c k _ I s E n t i t y I n E x t e n d e d G r o u p               */
/* ------------------------------------------------------------------------ */

int Check_IsEntityInExtendedGroup(struct Group * Group_P, int Entity, int Flag)
{
  switch (Group_P->FunctionType) {

  case NODESOF :  case EDGESOF :  case FACETSOF :  case VOLUMESOF :
    if ((Group_P->InitialList && !Group_P->ExtendedList)  ||
	(Group_P->InitialSuppList && !Group_P->ExtendedSuppList))
      Generate_ExtendedGroup(Group_P) ;
    return((!Group_P->InitialList ||
	    (List_Search(Group_P->ExtendedList, &Entity, fcmp_int))) &&
	   (!Group_P->InitialSuppList ||
	    (! List_Search(Group_P->ExtendedSuppList, &Entity, fcmp_int)))) ;

  case ELEMENTSOF :  case EDGESOFTREEIN :  case FACETSOFTREEIN :
    if (!Group_P->ExtendedList) Generate_ExtendedGroup(Group_P) ;
    return( List_Search(Group_P->ExtendedList, &Entity, fcmp_int) ) ;

  case GROUPSOFNODESOF :  case GROUPSOFEDGESOF : case GROUPSOFFACETSOF :
  case REGION :  case GROUPOFREGIONSOF :  case GLOBAL :
    return( (Flag)? List_Search(Group_P->InitialList, &Entity, fcmp_int) : 1 ) ;

  case GROUPSOFEDGESONNODESOF :
    if (!Group_P->InitialSuppList){
      return(1) ;
    }
    return(! List_Search(Group_P->ExtendedSuppList, &Entity, fcmp_int)) ;

  default :
    Message::Error("Unknown function type for Group '%s'", Group_P->Name);
    return(-1) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ E x t e n d e d G r o u p                             */
/* ------------------------------------------------------------------------ */

void Generate_ExtendedGroup(struct Group * Group_P)
{

  Message::Info("  Generate ExtendedGroup '%s' (%s)", Group_P->Name,
            Get_StringForDefine(FunctionForGroup_Type, Group_P->FunctionType)) ;

  switch (Group_P->FunctionType) {

  case NODESOF :  case EDGESOF :  case FACETSOF :  case VOLUMESOF :
  case GROUPOFREGIONSOF :
    Generate_ElementaryEntities(Group_P->InitialList,
				&Group_P->ExtendedList, Group_P->FunctionType) ;
    Generate_ElementaryEntities(Group_P->InitialSuppList,
				&Group_P->ExtendedSuppList, Group_P->FunctionType) ;
    break ;

  case GROUPSOFEDGESONNODESOF :
    Generate_ElementaryEntities(Group_P->InitialList,
				&Group_P->ExtendedList, EDGESOF) ;
    Generate_ElementaryEntities(Group_P->InitialSuppList,
				&Group_P->ExtendedSuppList, NODESOF) ;
    break ;

  case GROUPSOFNODESOF :
    Generate_GroupsOfNodes(Group_P->InitialList, &Group_P->ExtendedList) ;
    break ;

  case ELEMENTSOF :
    Generate_Elements(Group_P->InitialList,
		      Group_P->SuppListType, Group_P->InitialSuppList,
		      &Group_P->ExtendedList) ;
    break ;

  case GROUPSOFEDGESOF :
    Generate_GroupsOfEdges(Group_P->InitialList,
			   Group_P->SuppListType, Group_P->InitialSuppList,
			   &Group_P->ExtendedList) ;
    break ;

  case GROUPSOFFACETSOF :
    Generate_GroupsOfFacets(Group_P->InitialList, &Group_P->ExtendedList) ;
    break ;

  case EDGESOFTREEIN :
    Geo_GenerateEdgesOfTree(Group_P->InitialList, Group_P->InitialSuppList,
			    &Group_P->ExtendedList) ;
    Geo_AddGroupForPRE(Group_P->Num) ;
    break ;

  case FACETSOFTREEIN :
    Geo_GenerateFacetsOfTree(Group_P->InitialList, Group_P->InitialSuppList,
			     &Group_P->ExtendedList) ;
    Geo_AddGroupForPRE(Group_P->Num) ;
    break ;

  default :
    Message::Error("Unknown function type for Group '%s'", Group_P->Name) ;
    break;
  }

  // create multimap for fast searches in the extended group, even when
  // multi-valued
  for(int i = 0; i < List_Nbr(Group_P->ExtendedList); i++){
    TwoInt k;
    List_Read(Group_P->ExtendedList, i, &k);
    Group_P->ExtendedListForSearch.insert(std::make_pair(abs(k.Int1), k));
  }
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ E l e m e n t a r y E n t i t i e s                   */
/* ------------------------------------------------------------------------ */

void  Generate_ElementaryEntities(List_T * InitialList, List_T ** ExtendedList,
				  int Type_Entity)
{
  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element, Num_Entity ;
  int     Nbr_Entity = 0, i_Entity, * Num_Entities = NULL;

  if (InitialList != NULL) {

    Entity_Tr = Tree_Create(sizeof (int), fcmp_int) ;

    Nbr_Element = Geo_GetNbrGeoElements() ;
    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;

      if (List_Search(InitialList, &GeoElement->Region, fcmp_int) ) {
	switch (Type_Entity) {
	case NODESOF :
	  Nbr_Entity = GeoElement->NbrNodes  ; Num_Entities = GeoElement->NumNodes ;
	  break ;
	case EDGESOF :
	  if (GeoElement->NbrEdges == 0)  Geo_CreateEdgesOfElement(GeoElement) ;
	  Nbr_Entity = GeoElement->NbrEdges  ; Num_Entities = GeoElement->NumEdges ;
	  break ;
	case FACETSOF :
	  if (GeoElement->NbrEdges == 0)  Geo_CreateEdgesOfElement(GeoElement) ;
	  if (GeoElement->NbrFacets == 0) Geo_CreateFacetsOfElement(GeoElement) ;
	  Nbr_Entity = GeoElement->NbrFacets ; Num_Entities = GeoElement->NumFacets ;
	  break ;
	case VOLUMESOF :
	case GROUPOFREGIONSOF :
	  Nbr_Entity = 1                     ; Num_Entities = &GeoElement->Num ;
	  break ;
	}
	for (i_Entity = 0; i_Entity < Nbr_Entity ; i_Entity++) {
	  Num_Entity = abs(Num_Entities[i_Entity]) ;
	  if ( ! Tree_Search(Entity_Tr, &Num_Entity) )
	    Tree_Add(Entity_Tr, &Num_Entity) ;
	}
      }
    }

    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ G r o u p s O f N o d e s                             */
/* ------------------------------------------------------------------------ */

void Generate_GroupsOfNodes(List_T * InitialList, List_T ** ExtendedList)
{
  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element,  i_Entity ;
  struct TwoInt  Num_GroupOfNodes ;

  Entity_Tr = Tree_Create(sizeof (struct TwoInt), fcmp_int2) ;

  Nbr_Element = Geo_GetNbrGeoElements() ;
  // Message::Info("  Add Node :");
  for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
    GeoElement = Geo_GetGeoElement(i_Element) ;

    if (List_Search(InitialList, &GeoElement->Region, fcmp_int) ) {

      Num_GroupOfNodes.Int2 = GeoElement->Region ;

      for (i_Entity = 0 ; i_Entity < GeoElement->NbrNodes ; i_Entity++) {

	Num_GroupOfNodes.Int1 = GeoElement->NumNodes[i_Entity] ;

	if ( ! Tree_Search(Entity_Tr, &Num_GroupOfNodes) ) {
	  Tree_Add(Entity_Tr, &Num_GroupOfNodes) ;
          // Message::Info(" (%d, %d)", Num_GroupOfNodes.Int1, Num_GroupOfNodes.Int2);
	}
      }
    }
  }

  *ExtendedList = Tree2List(Entity_Tr) ;
  Tree_Delete(Entity_Tr) ;
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ G r o u p s O f E d g e s                             */
/* ------------------------------------------------------------------------ */

void Generate_GroupsOfEdges(List_T * InitialList,
			    int Type_SuppList, List_T * InitialSuppList,
			    List_T ** ExtendedList)
{
  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element,  i_Entity, Num_Element ;
  int     * Num_Nodes, Num_Node ;
  struct TwoInt  Num_GroupOfEdges, * Key1_P, * Key2_P ;
  List_T  * ExtendedAuxList ;
  struct Group  * GroupForSupport_P ;
  int MultiValuedGroup = 0;

  switch (Type_SuppList) {

  case SUPPLIST_INSUPPORT :
    Entity_Tr = Tree_Create(sizeof (struct TwoInt), fcmp_absint2) ;
    if (List_Nbr(InitialList)) {
      Generate_GroupsOfNodes(InitialList, &ExtendedAuxList) ;

      /* Attention : ici, le Support est une liste d'elements ! */

      GroupForSupport_P = (struct Group*)
	List_Pointer(Problem_S.Group, *((int *)List_Pointer(InitialSuppList, 0))) ;
      if (!GroupForSupport_P->ExtendedList)
	Generate_ExtendedGroup(GroupForSupport_P) ;
      Nbr_Element = List_Nbr(GroupForSupport_P->ExtendedList) ;

      for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
	List_Read(GroupForSupport_P->ExtendedList, i_Element, &Num_Element) ;
	GeoElement = Geo_GetGeoElementOfNum(Num_Element) ;

	if (GeoElement->NbrEdges == 0)  Geo_CreateEdgesOfElement(GeoElement) ;

	for (i_Entity = 0 ; i_Entity < GeoElement->NbrEdges ; i_Entity++) {

	  Num_Nodes = Geo_GetNodesOfEdgeInElement(GeoElement, i_Entity) ;
	  Num_Node = GeoElement->NumNodes[abs(Num_Nodes[0])-1] ;
	  Key1_P = (struct TwoInt*)List_PQuery(ExtendedAuxList, &Num_Node, fcmp_int) ;
	  Num_Node = GeoElement->NumNodes[abs(Num_Nodes[1])-1] ;
	  Key2_P = (struct TwoInt*)List_PQuery(ExtendedAuxList, &Num_Node, fcmp_int) ;

	  if (Key1_P && (!Key2_P || (Key2_P->Int2 != Key1_P->Int2))) {
	    Num_GroupOfEdges.Int1 = - GeoElement->NumEdges[i_Entity] ;
	    Num_GroupOfEdges.Int2 = Key1_P->Int2 ;
	    if ( ! Tree_Search(Entity_Tr, &Num_GroupOfEdges) )
	      Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
	  }
	  if (Key2_P && (!Key1_P || (Key1_P->Int2 != Key2_P->Int2))) {
	    Num_GroupOfEdges.Int1 = GeoElement->NumEdges[i_Entity] ;
	    Num_GroupOfEdges.Int2 = Key2_P->Int2 ;
	    if ( ! Tree_Search(Entity_Tr, &Num_GroupOfEdges) )
	      Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
	  }

	  /*
	  if (Key1_P && !Key2_P) {
	    Num_GroupOfEdges.Int1 = - GeoElement->NumEdges[i_Entity] ;
	    Num_GroupOfEdges.Int2 = Key1_P->Int2 ;
	    if ( ! Tree_Search(Entity_Tr, &Num_GroupOfEdges) )
	      Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
	  }
	  else if (Key2_P && !Key1_P) {
	    Num_GroupOfEdges.Int1 = GeoElement->NumEdges[i_Entity] ;
	    Num_GroupOfEdges.Int2 = Key2_P->Int2 ;
	    if ( ! Tree_Search(Entity_Tr, &Num_GroupOfEdges) )
	      Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
	  }
	  else {
	    if (Key1_P && Key2_P && Key1_P->Int2 != Key2_P->Int2) {
	      Num_GroupOfEdges.Int1 = - GeoElement->NumEdges[i_Entity] ;
	      Num_GroupOfEdges.Int2 = Key1_P->Int2 ;
	      if ( ! Tree_Search(Entity_Tr, &Num_GroupOfEdges) ){
		Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
		fprintf(stderr, "ADD 1 <========= %d %d %d\n",
                        GeoElement->NumNodes[abs(Num_Nodes[0])-1],
                        Num_GroupOfEdges.Int1, Num_GroupOfEdges.Int2);
              }
	      Num_GroupOfEdges.Int1 = GeoElement->NumEdges[i_Entity] ;
	      Num_GroupOfEdges.Int2 = Key2_P->Int2 ;
	      if ( ! Tree_Search(Entity_Tr, &Num_GroupOfEdges) ){
		Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
		fprintf(stderr, "ADD 2 <========= %d %d %d \n",
                        GeoElement->NumNodes[abs(Num_Nodes[1])-1],
                        Num_GroupOfEdges.Int1, Num_GroupOfEdges.Int2);
              }
	    }
	  }
	  */
	}
      }

      List_Delete(ExtendedAuxList) ;
    }
    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
    break ;

  case SUPPLIST_NONE :
  default :
    MultiValuedGroup = 1;
    *ExtendedList = List_Create(10,10,sizeof (struct TwoInt)) ;
    if (List_Nbr(InitialList)) {
      Generate_GroupsOfNodes(InitialList, &ExtendedAuxList) ;
      Nbr_Element = Geo_GetNbrGeoElements() ;
      for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
        GeoElement = Geo_GetGeoElement(i_Element) ;
        if (List_Search(InitialList, &GeoElement->Region, fcmp_int) ) {
          // when generating edges of line elements, we assume that we want to
          // keep any multiple copy that might arise, with its sign; this is
          // required by the cohomology solver
          if(GeoElement->Type != LINE && GeoElement->Type != LINE_2)
            MultiValuedGroup = 0;
          if (GeoElement->NbrEdges == 0) Geo_CreateEdgesOfElement(GeoElement) ;
          for (i_Entity = 0 ; i_Entity < GeoElement->NbrEdges ; i_Entity++) {
            Num_Nodes = Geo_GetNodesOfEdgeInElement(GeoElement, i_Entity) ;
            Num_Node = GeoElement->NumNodes[abs(Num_Nodes[0])-1] ;
            Key1_P = (struct TwoInt*)List_PQuery(ExtendedAuxList, &Num_Node, fcmp_int) ;
            Num_Node = GeoElement->NumNodes[abs(Num_Nodes[1])-1] ;
            Key2_P = (struct TwoInt*)List_PQuery(ExtendedAuxList, &Num_Node, fcmp_int) ;
            if (Key1_P && Key2_P) {
              Num_GroupOfEdges.Int1 = GeoElement->NumEdges[i_Entity] ;
              Num_GroupOfEdges.Int2 = GeoElement->Region ;
              List_Add(*ExtendedList, &Num_GroupOfEdges);
            }
          }
        }
      }
      List_Delete(ExtendedAuxList) ;
    }
    // prune list if we are not in the "forced" multivalued case
    if(!MultiValuedGroup) {
      Entity_Tr = Tree_Create(sizeof (struct TwoInt), fcmp_absint2) ;
      for (i_Entity = 0; i_Entity < List_Nbr(*ExtendedList); i_Entity++) {
        List_Read(*ExtendedList, i_Entity, &Num_GroupOfEdges) ;
        if (!Tree_Search(Entity_Tr, &Num_GroupOfEdges))
          Tree_Add(Entity_Tr, &Num_GroupOfEdges) ;
      }
      List_Delete(*ExtendedList) ;
      *ExtendedList = Tree2List(Entity_Tr);
      Tree_Delete(Entity_Tr) ;
    }
    break;

  }

  /*
  for (i_Entity = 0 ; i_Entity < List_Nbr(*ExtendedList) ; i_Entity++) {
    List_Read(*ExtendedList, i_Entity, &Num_GroupOfEdges) ;
    Message::Info(" (%d, %d)", Num_GroupOfEdges.Int1, Num_GroupOfEdges.Int2) ;
  }
  */
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ G r o u p s O f F a c e s                             */
/* ------------------------------------------------------------------------ */

void Generate_GroupsOfFacets(List_T * InitialList,
                             List_T ** ExtendedList)
{
  Tree_T  * Entity_Tr ;
  struct Geo_Element  * GeoElement ;
  int     Nbr_Element, i_Element,  i_Entity ;
  int     * Num_Nodes, Num_Node ;
  struct TwoInt  Num_GroupOfFacets ;
  List_T  * ExtendedAuxList ;

  int MultiValuedGroup = 1;

  *ExtendedList = List_Create(10,10,sizeof (struct TwoInt)) ;

  if (List_Nbr(InitialList)) {
    Generate_GroupsOfNodes(InitialList, &ExtendedAuxList) ;
    Nbr_Element = Geo_GetNbrGeoElements() ;
    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;
      if (List_Search(InitialList, &GeoElement->Region, fcmp_int) ) {
        // when generating facets of surface elements, we assume that we want to
        // keep any multiple copy that might arise, with its sign; this is
        // required by the cohomology solver
        if(GeoElement->Type != TRIANGLE &&
           GeoElement->Type != TRIANGLE_2 &&
           GeoElement->Type != QUADRANGLE &&
           GeoElement->Type != QUADRANGLE_2 &&
           GeoElement->Type != QUADRANGLE_2_8N)
          MultiValuedGroup = 0;
        if (GeoElement->NbrEdges == 0)  Geo_CreateEdgesOfElement(GeoElement) ;
        if (GeoElement->NbrFacets == 0) Geo_CreateFacetsOfElement(GeoElement) ;
        for (i_Entity = 0 ; i_Entity < GeoElement->NbrFacets ; i_Entity++) {
          Num_Nodes = Geo_GetNodesOfFacetInElement(GeoElement, i_Entity) ;
          bool found = true;
          int i = 0;
          while(Num_Nodes[i]){
            Num_Node = GeoElement->NumNodes[abs(Num_Nodes[i])-1] ;
            if(!List_PQuery(ExtendedAuxList, &Num_Node, fcmp_int)){
              found = false;
              break;
            }
            i++;
          }
          if(found){
            Num_GroupOfFacets.Int1 = GeoElement->NumFacets[i_Entity] ;
            Num_GroupOfFacets.Int2 = GeoElement->Region ;
            List_Add(*ExtendedList, &Num_GroupOfFacets);
          }
        }
      }
    }
    List_Delete(ExtendedAuxList) ;
  }

  // prune list if we are not in the "forced" multivalued case
  if(!MultiValuedGroup) {
    Entity_Tr = Tree_Create(sizeof (struct TwoInt), fcmp_absint2) ;
    for(i_Entity = 0; i_Entity < List_Nbr(*ExtendedList); i_Entity++) {
      List_Read(*ExtendedList, i_Entity, &Num_GroupOfFacets) ;
      if(!Tree_Search(Entity_Tr, &Num_GroupOfFacets))
        Tree_Add(Entity_Tr, &Num_GroupOfFacets) ;
    }
    List_Delete(*ExtendedList) ;
    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
  }

  /*
  for (i_Entity = 0 ; i_Entity < List_Nbr(*ExtendedList) ; i_Entity++) {
    List_Read(*ExtendedList, i_Entity, &Num_GroupOfFacets) ;
    Message::Info(" (%d, %d)", Num_GroupOfFacets.Int1, Num_GroupOfFacets.Int2) ;
  }
  */
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ E l e m e n t s                                       */
/* ------------------------------------------------------------------------ */

void  Generate_Elements(List_T * InitialList,
			int Type_SuppList, List_T * InitialSuppList,
			List_T ** ExtendedList)
{
  Tree_T  * Entity_Tr ;
  struct  Geo_Element  * GeoElement, * GeoElement2 ;
  struct  TwoInt Pair ;
  int     k ;
  int     Nbr_Element, i_Element, i_Element2, Nbr_Node, i_Node, i_Node2 ;
  List_T  * ExtendedSuppList ;

  Nbr_Element = Geo_GetNbrGeoElements() ;

  switch (Type_SuppList) {

  case SUPPLIST_ONONESIDEOF :
    Entity_Tr = Tree_Create(sizeof(int), fcmp_int) ;
    if (List_Nbr(InitialSuppList)) {
      Generate_GroupsOfNodes(InitialSuppList, &ExtendedSuppList) ;

      for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
	GeoElement = Geo_GetGeoElement(i_Element) ;
	if (List_Search(InitialList, &GeoElement->Region, fcmp_int)) {
	  Nbr_Node = GeoElement->NbrNodes ;
	  for (i_Node = 0 ; i_Node < Nbr_Node ; i_Node++)
	    if (List_Search(ExtendedSuppList,
			    &(GeoElement->NumNodes[i_Node]), fcmp_int)) {
	      Tree_Add(Entity_Tr, &GeoElement->Num) ;
	      break ;  /* at least one node of element is on surface Supp */
	    }
	}
      }

      /* + ne conserver que certains des elements qui viennent d'etre groupes ... ! */

      List_Delete(ExtendedSuppList) ;
    }
    break ;

  case SUPPLIST_CONNECTEDTO :
    Entity_Tr = Tree_Create(sizeof(struct TwoInt), fcmp_int2) ;
    ExtendedSuppList = List_Create(100,100,sizeof(int));

    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;
      if (List_Search(InitialSuppList, &GeoElement->Region, fcmp_int))
	List_Add(ExtendedSuppList, &i_Element);
    }

    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;

      if (List_Search(InitialList, &GeoElement->Region, fcmp_int)){
	for(i_Element2 = 0 ; i_Element2 < List_Nbr(ExtendedSuppList) ; i_Element2++){
	  GeoElement2 = Geo_GetGeoElement(*(int*)List_Pointer(ExtendedSuppList, i_Element2)) ;

	  k = 0 ;
	  for(i_Node2 = 0 ; i_Node2 < GeoElement2->NbrNodes ; i_Node2++){
	    for(i_Node = 0 ; i_Node < GeoElement->NbrNodes ; i_Node++){
	      if(GeoElement2->NumNodes[i_Node2] == GeoElement->NumNodes[i_Node]) k++;
	    }
	  }
	  if(k == GeoElement2->NbrNodes){
	    Pair.Int1 = GeoElement2->Num ; /* Number of the the element on the boundary */
	    Pair.Int2 = i_Element ; /* Index of the element connected to all the nodes of
				       the element on the boundary */
	    Tree_Add(Entity_Tr, &Pair);
	  }
	}
      }
    }

    List_Delete(ExtendedSuppList) ;
    break ;

  case SUPPLIST_NONE :
  default :
    Entity_Tr = Tree_Create(sizeof(int), fcmp_int) ;
    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;
      if (List_Search(InitialList, &GeoElement->Region, fcmp_int))
	Tree_Add(Entity_Tr, &GeoElement->Num) ;
    }
    break ;

  }

  *ExtendedList = Tree2List(Entity_Tr) ;
  Tree_Delete(Entity_Tr) ;
}
