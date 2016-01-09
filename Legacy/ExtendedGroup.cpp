// GetDP - Copyright (C) 1997-2016 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdlib.h>
#include <set>
#include <map>
#include <forward_list>
#include "ProData.h"
#include "ProDefine.h"
#include "ExtendedGroup.h"
#include "GeoData.h"
#include "Get_Geometry.h"
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

  switch (Group_P->FunctionType) {
  case GROUPSOFNODESOF :
  case GROUPSOFEDGESOF :
  case GROUPSOFFACETSOF :
    // create multimap for fast searches in the extended group, even when
    // multi-valued
    for(int i = 0; i < List_Nbr(Group_P->ExtendedList); i++){
      TwoInt k;
      List_Read(Group_P->ExtendedList, i, &k);
      Group_P->ExtendedListForSearch.insert(std::make_pair(abs(k.Int1), k));
    }
    break;
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

// Classes for ElementsOf[., OnPositiveSideOf]

class Bubble {
public:
  Bubble() {}
  Bubble(int num) : _num(num), _new_bubble_P(NULL) {}
  ~Bubble() {}

  int get_numBubble()
  {
    return (_new_bubble_P)? _new_bubble_P->get_numBubble() : _num;
  }

  void set_newBubble(class Bubble * new_bubble_P)
  {
    if (_new_bubble_P && _new_bubble_P != new_bubble_P)
      _new_bubble_P->set_newBubble(new_bubble_P);
    _new_bubble_P = new_bubble_P;
  }

public:
  int _num;
  class Bubble * _new_bubble_P;
};

class EntityInBubble {
public:
  EntityInBubble() {}
  EntityInBubble(class Bubble * bubble_P_)
    : bubble_P(bubble_P_)
  {}
  ~EntityInBubble() {}
public:
  class Bubble * bubble_P;
};

typedef std::pair<int, EntityInBubble> K_EntityInBubble;

class ElementInBubble : public EntityInBubble {
public:
  ElementInBubble() {}
  ElementInBubble(class Bubble * bubble_P_, struct Geo_Element * geoElement_)
    : EntityInBubble(bubble_P_), geoElement(geoElement_)
  {}
  ~ElementInBubble() {}
public:
  struct Geo_Element * geoElement;
};

typedef std::pair<int, ElementInBubble> K_ElementInBubble;


class EntityOnSur {
public:
  EntityOnSur() {}
  ~EntityOnSur() {}
public:
  double X[3], X_normal[3];
};

class DEntityOnSur {
public:
  DEntityOnSur() {}
  ~DEntityOnSur() {}
public:
  int onBorder, i_Entity;
  struct Geo_Element * geoElement;
};


template <class K, class T>
class Map {
public:
  Map() {}
  ~Map() {}

  T * Find(int num) {
    typename std::map<K, T>::iterator t_it;
    if ( (t_it = _ts.find(num)) != _ts.end() ) return &t_it->second;
    else return NULL;
  }

  inline T & operator[] (K i) { return _ts[i]; }
  inline std::map<K, T> & get() { return _ts; }

public:
  std::map<K, T> _ts;
};


class GenEle {
public:
  GenEle() {}
  ~GenEle() {}
public:
  List_T * _elements_L;
};

class GenEle_OnPositiveSideOf : public GenEle {
public:
  GenEle_OnPositiveSideOf(int flag_exclBorder)
    : _type_Dimension_First(-1), _flag_exclBorder(flag_exclBorder), _nb_bubble(0)
  {
    _bubble_perNum_P[0] = add_bubble(); // bubble #1
    _bubble_perNum_P[1] = add_bubble(); // bubble #2
  }
  ~GenEle_OnPositiveSideOf() {}

  List_T* gen_ExtendedList
  (List_T * InitialList, int Type_SuppList, List_T * InitialSuppList);

private:
  class Bubble * add_bubble()
  {
    _bubbles.push_front(Bubble(++_nb_bubble));
    return &(*_bubbles.begin());
  }

  void get_Entities
  (struct Geo_Element * geoElement,
   int level_operator_d, int * nbr_Entity, int ** num_Entities);

  void add_FacetsOnSur(struct Geo_Element * geoElement);

  void def_EntitiesOnSurBorder();

  void add_Facets
  (struct Geo_Element * geoElement, int nb_nodesOnSur,
   K_ElementInBubble * k_elementInBubble_exist_P);

  void treat_ElementsOnBorder();

  List_T * select_ElementsInBubbleNum();


private:
  int _type_Dimension_First, _flag_exclBorder;
  class Map<int, EntityOnSur> _facetsOnSur;
  class Map<int, DEntityOnSur> _edgesOnSur;
  std::set<int> _entitiesOnSurBorder[2];

  std::forward_list<Bubble> _bubbles;

  std::forward_list<K_ElementInBubble> _elementsInBubbles;
  class Map<int, EntityInBubble> _facetsInBubbles;

  int _nb_bubble;
  class Bubble * _bubble_perNum_P[2];
};


List_T* GenEle_OnPositiveSideOf::gen_ExtendedList
(List_T * InitialList, int Type_SuppList, List_T * InitialSuppList)
{
  int nb_Element, i_Element, nb_Node, i_Node;
  struct Geo_Element * geoElement;

  nb_Element = Geo_GetNbrGeoElements();

  if (List_Nbr(InitialSuppList)) {

    // Create Facets (Edges/Nodes; depending of dimension) of InitialSuppList

    int type_Dimension;

    for (i_Element = 0 ; i_Element < nb_Element ; i_Element++) {
      geoElement = Geo_GetGeoElement(i_Element) ;
      if (List_Search(InitialSuppList, &geoElement->Region, fcmp_int) ) {

        // Get dimension of element
        Get_JacobianFunction (JACOBIAN_VOL, geoElement->Type, &type_Dimension);

        if (type_Dimension > _2D)
          Message::Error("Bad dimension (%d>2) for 'OnPositiveSideOf'", type_Dimension);

        if (_type_Dimension_First == -1)
          _type_Dimension_First = type_Dimension;
        else if (_type_Dimension_First != type_Dimension)
          Message::Error
            ("Mix of dimensions (%d and %d) not allowed for 'OnPositiveSideOf'",
             _type_Dimension_First, type_Dimension);

        add_FacetsOnSur(geoElement);
      }
    }

    def_EntitiesOnSurBorder();

    //
    // Search for Elements in contact with Nodes of InitialSuppList and place
    // them with their Facets (Edges/Nodes; depending of dimension) in a Bubble

    List_T * ExtendedSuppList ;
    Generate_GroupsOfNodes(InitialSuppList, &ExtendedSuppList) ;

    int nb_nodesOnSur;

    for (i_Element = 0 ; i_Element < nb_Element ; i_Element++) {
      geoElement = Geo_GetGeoElement(i_Element);

      if (List_Search(InitialList, &geoElement->Region, fcmp_int)) {
        nb_Node = geoElement->NbrNodes;
        nb_nodesOnSur = 0;
        for (i_Node = 0; i_Node < nb_Node; i_Node++)
          if (List_Search(ExtendedSuppList,
                          &(geoElement->NumNodes[i_Node]), fcmp_int)) {
            // At least one node of element is on surface Supp => element selected
            //   Put the selected element in a sub-bubble
            //   (at the end, 2 sub-bubbles will exist, one on each side)
            //   Mark element with new bubble._num
            //     for each face (edge) of element: mark with new bubble._num
            //     if facet (edge) already in list, change num of bubble via bubble._new_bubble_P
            if (++nb_nodesOnSur > 1) break;
          }

        if (nb_nodesOnSur) add_Facets(geoElement, nb_nodesOnSur, NULL);
      }
    }

    if (!_flag_exclBorder) treat_ElementsOnBorder();

    List_Delete(ExtendedSuppList);

    // Keep selected elements from a given bubble (OnPositiveSideOf)
    return select_ElementsInBubbleNum();
  }
  else {
    return List_Create(1, 1, sizeof(int));
  }

}


void GenEle_OnPositiveSideOf::get_Entities
(struct Geo_Element * geoElement,
 int level_operator_d, int * nbr_Entity, int ** num_Entities)
{
  if (_type_Dimension_First - level_operator_d == _0D) {
    *nbr_Entity = geoElement->NbrNodes; *num_Entities = geoElement->NumNodes;
  }
  else {
    if (geoElement->NbrEdges == 0)  Geo_CreateEdgesOfElement(geoElement) ;
    if (_type_Dimension_First - level_operator_d == _1D) {
      *nbr_Entity = geoElement->NbrEdges; *num_Entities = geoElement->NumEdges;
    }
    else if (_type_Dimension_First - level_operator_d == _2D) {
      if (geoElement->NbrFacets == 0)  Geo_CreateFacetsOfElement(geoElement) ;
      *nbr_Entity = geoElement->NbrFacets; *num_Entities = geoElement->NumFacets;
    }
    else {
      *nbr_Entity = 0;
    }
  }
}


void GenEle_OnPositiveSideOf::add_FacetsOnSur(struct Geo_Element * geoElement)
{
  int nbr_Entity[3], * num_Entities[3], i_Entity[3], num_Entity[3];
  int i;

  class EntityOnSur entityOnSur;
  class DEntityOnSur dEntityOnSur, * dEntityOnSur_P;
  double x [NBR_MAX_NODES_IN_ELEMENT];
  double y [NBR_MAX_NODES_IN_ELEMENT];
  double z [NBR_MAX_NODES_IN_ELEMENT];
  double X, Y, Z;

  get_Entities(geoElement, 0, &nbr_Entity[0], &num_Entities[0]);
  get_Entities(geoElement, 1, &nbr_Entity[1], &num_Entities[1]);

  // Facet (or Edge/Node) on reference surface (in general: nbr_Entity[0] = 1)

  for (i_Entity[0] = 0; i_Entity[0] < nbr_Entity[0]; i_Entity[0]++) {
    num_Entity[0] = abs(num_Entities[0][i_Entity[0]]) ;
    if (!_facetsOnSur.Find(num_Entity[0])) {
      Geo_GetNodesCoordinates(geoElement->NbrNodes, geoElement->NumNodes, x, y, z);
      X = 0.; Y = 0.; Z = 0.;
      for (i = 0 ; i < geoElement->NbrNodes ; i++) {
        X += x[i]; Y += y[i]; Z += z[i];
      }
      X /= geoElement->NbrNodes; Y /= geoElement->NbrNodes; Z /= geoElement->NbrNodes;

      //      entityOnSur.num = num_Entity[0];
      entityOnSur.X[0] = X; entityOnSur.X[1] = Y; entityOnSur.X[2] = Z;
      Geo_CreateNormal(geoElement->Type, x, y, z, entityOnSur.X_normal);
      _facetsOnSur[num_Entity[0]] = entityOnSur;

      dEntityOnSur.onBorder = 1;
      dEntityOnSur.geoElement = geoElement;
      for (i_Entity[1] = 0; i_Entity[1] < nbr_Entity[1]; i_Entity[1]++) {
        num_Entity[1] = abs(num_Entities[1][i_Entity[1]]) ;
        if (!(dEntityOnSur_P = _edgesOnSur.Find(num_Entity[1]))) {
          dEntityOnSur.i_Entity = i_Entity[1];
          _edgesOnSur[num_Entity[1]] = dEntityOnSur;
        }
        else {
          dEntityOnSur_P->onBorder = 0; // Edge/Node appears twice => not on border
        }
      }

    }
  }
}


void GenEle_OnPositiveSideOf::def_EntitiesOnSurBorder() {
  for (std::map<int, DEntityOnSur>::iterator it = _edgesOnSur.get().begin();
       it != _edgesOnSur.get().end(); ++it) {
    if (it->second.onBorder) {
      _entitiesOnSurBorder[0].insert(it->first);
      if (_type_Dimension_First == _2D) {
        int * num_Nodes = Geo_GetNodesOfEdgeInElement(it->second.geoElement,
                                                      it->second.i_Entity) ;
        _entitiesOnSurBorder[1].insert
          (it->second.geoElement->NumNodes[abs(num_Nodes[0])-1]);
        _entitiesOnSurBorder[1].insert
          (it->second.geoElement->NumNodes[abs(num_Nodes[1])-1]);
      }
    }
  }
}


void GenEle_OnPositiveSideOf::add_Facets
(struct Geo_Element * geoElement, int nb_nodesOnSur,
 K_ElementInBubble * k_elementInBubble_exist_P)
{
  int nbr_Entity[3], * num_Entities[3], i_Entity[3], num_Entity[3];
  int sideOfSur_perEntity[NBR_MAX_ENTITIES_IN_ELEMENT];

  class Bubble * bubble_P;
  K_ElementInBubble * k_elementInBubble_P;

  get_Entities(geoElement, 0, &nbr_Entity[0], &num_Entities[0]);

  if (!k_elementInBubble_exist_P) {
    // New element
    bubble_P = add_bubble();

    _elementsInBubbles.push_front
      (K_ElementInBubble(geoElement->Num, ElementInBubble(bubble_P, geoElement)));
    k_elementInBubble_P = &(*_elementsInBubbles.begin());

    get_Entities(geoElement, 1, &nbr_Entity[1], &num_Entities[1]);
    get_Entities(geoElement, 2, &nbr_Entity[2], &num_Entities[2]);
  }
  else {
    // The element already exists (in its initial bubble)
    bubble_P = (k_elementInBubble_P = k_elementInBubble_exist_P)->second.bubble_P;
  }

  int flag_onSur = 0, flag_OnBorder = 0, i;

  if (!k_elementInBubble_exist_P) {

    class EntityOnSur * entityOnSur_P;
    int flag_X_vol = 0;
    double x [NBR_MAX_NODES_IN_ELEMENT];
    double y [NBR_MAX_NODES_IN_ELEMENT];
    double z [NBR_MAX_NODES_IN_ELEMENT];
    double X, Y, Z, val_XYZxNormal;

    // For all facets of selected element
    for (i_Entity[0] = 0; i_Entity[0] < nbr_Entity[0]; i_Entity[0]++) {
      num_Entity[0] = abs(num_Entities[0][i_Entity[0]]) ;

      if ((entityOnSur_P = _facetsOnSur.Find(num_Entity[0]))) {
        flag_onSur = 1; // Facet on reference surface
        if (!flag_X_vol) {
          flag_X_vol = 1; // Calculate only once
          Geo_GetNodesCoordinates(geoElement->NbrNodes, geoElement->NumNodes, x, y, z);
          X = 0.; Y = 0.; Z = 0.;
          for (i = 0 ; i < geoElement->NbrNodes ; i++) {
            X += x[i]; Y += y[i]; Z += z[i];
          }
          X /= geoElement->NbrNodes; Y /= geoElement->NbrNodes; Z /= geoElement->NbrNodes;
        }

        val_XYZxNormal = (X-entityOnSur_P->X[0]) * entityOnSur_P->X_normal[0]
                       + (Y-entityOnSur_P->X[1]) * entityOnSur_P->X_normal[1]
                       + (Z-entityOnSur_P->X[2]) * entityOnSur_P->X_normal[2];
        sideOfSur_perEntity[i_Entity[0]] = (val_XYZxNormal > 0.)? 1 : 2;
      }
      else {
        sideOfSur_perEntity[i_Entity[0]] = 0;
      }
    }

    if (!flag_onSur) {
      // An Edge/Node of current element could be on Sur border
      for (i_Entity[1] = 0; i_Entity[1] < nbr_Entity[1]; i_Entity[1]++) {
        num_Entity[1] = abs(num_Entities[1][i_Entity[1]]) ;
        if (_entitiesOnSurBorder[0].find(num_Entity[1]) !=
            _entitiesOnSurBorder[0].end()) {
          flag_OnBorder = 1;
          break;
        }
      }
      // ... or else only one node could be on Sur border
      if (!flag_OnBorder && nb_nodesOnSur == 1
          && _type_Dimension_First == _2D) {
        for (i_Entity[2] = 0; i_Entity[2] < nbr_Entity[2]; i_Entity[2]++) {
          num_Entity[2] = abs(num_Entities[2][i_Entity[2]]) ;
          if (_entitiesOnSurBorder[1].find(num_Entity[2]) !=
              _entitiesOnSurBorder[1].end()) {
            flag_OnBorder = 1;
          }
        }
      }
    }

    if (flag_OnBorder) {
      k_elementInBubble_P->first *= -1; // element will be treated later
      return;
    }
  }

  int sideOfSur = 0;
  std::pair<int, EntityInBubble> bubble_exist[NBR_MAX_ENTITIES_IN_ELEMENT];
  class EntityInBubble entityInBubble, * entityInBubble_P;
  class Bubble * bubble_min_P;
  int num_, num_bubble_min, nb_bubble_exist = 0;

  bubble_min_P = bubble_P; num_bubble_min = bubble_P->_num;

  entityInBubble.bubble_P = bubble_P;

  for (i_Entity[0] = 0; i_Entity[0] < nbr_Entity[0]; i_Entity[0]++) {
    num_Entity[0] = abs(num_Entities[0][i_Entity[0]]) ;

    if (!k_elementInBubble_exist_P && sideOfSur_perEntity[i_Entity[0]]) {
      // Facet on reference surface
      num_bubble_min = sideOfSur_perEntity[i_Entity[0]];
      if (!sideOfSur) {
        sideOfSur = num_bubble_min;
      }
      else if (sideOfSur != num_bubble_min) {
        Message::Warning("OnPositiveSideOf: non-unique orientation of surface or ambiguous orientation for multiple surfaces");
      }
      bubble_min_P = _bubble_perNum_P[num_bubble_min-1];
    }

    else if (!(entityInBubble_P = _facetsInBubbles.Find(num_Entity[0]))) {
      _facetsInBubbles[num_Entity[0]] = entityInBubble; // New Facet
    }

    else {
      // Existing Facet -> already in a Bubble
      num_ = entityInBubble_P->bubble_P->get_numBubble();

      bubble_exist[nb_bubble_exist++] =
        K_EntityInBubble(num_, EntityInBubble(entityInBubble_P->bubble_P));

      if (!flag_onSur) {
        if (num_ != num_bubble_min &&
            ((num_ <= 2 || num_ < num_bubble_min) && num_bubble_min != 2)) {
          num_bubble_min = num_;
          bubble_min_P = entityInBubble_P->bubble_P;
        }
      }
    }
  }

  if (bubble_min_P != bubble_P) {
    //Message::Info("===== Ele %d : -/%d : old %d -> new %d", geoElement->Num, nb_bubble_exist, bubble_P->get_numBubble(), num_bubble_min);
    bubble_P->set_newBubble(bubble_min_P);
  }

  //if (!nb_bubble_exist) Message::Info("===== Ele %d NEW (%d)", geoElement->Num, bubble_P->num);

  for (i = 0; i < nb_bubble_exist; i++) {
    if (bubble_exist[i].first != num_bubble_min
        && !(bubble_exist[i].first == 1 && num_bubble_min == 2)
        && !(bubble_exist[i].first == 2 && num_bubble_min == 1)
        ) {
      //Message::Info("===== Ele %d : %d/%d : old %d -> new %d", geoElement->Num, i+1, nb_bubble_exist, bubble_exist[i].num, num_bubble_min);
      bubble_exist[i].second.bubble_P->set_newBubble(bubble_min_P);
    }
  }

}


List_T * GenEle_OnPositiveSideOf::select_ElementsInBubbleNum() {
  int num_bubble, nbrElementsInBubbleNum[2], nb_elements = 0;
  nbrElementsInBubbleNum[0] = nbrElementsInBubbleNum[1] = 0;
  for (std::forward_list<K_ElementInBubble>::iterator it = _elementsInBubbles.begin();
       it != _elementsInBubbles.end(); ++it) {
    nb_elements++;
    num_bubble = it->second.bubble_P->get_numBubble();
    if (num_bubble >= 1 && num_bubble <= 2)
      nbrElementsInBubbleNum[num_bubble-1]++;
    else if (!_flag_exclBorder)
      Message::Warning
        ("OnPositiveSideOf: unexpected bubble (%d) for element %d (not 1 nor 2)",
         num_bubble, it->first);
  }

  // For possible (later) compatibility with OnOneSideOf
  // num_bubble = (_nbrElementsInBubbleNum[1] == nb_elements)? 2 : 1;
  num_bubble = 1; // bubble #1 selected
  int Nb = nbrElementsInBubbleNum[num_bubble-1];
  if (!Nb) Nb = 1;

  _elements_L = List_Create(Nb, 1, sizeof(int));
  int num_element;

  for (std::forward_list<K_ElementInBubble>::iterator it = _elementsInBubbles.begin();
       it != _elementsInBubbles.end(); ++it) {
    /*
    Message::Info("=== Ele %d, Bubble %d (%d) [%ld, %ld]",
                  it->first,
                  it->second.bubble_P->get_numBubble(), it->second.bubble_P->_num,
                  it->second.bubble_P, it->second.bubble_P->_new_bubble_P);
    */
    if (it->second.bubble_P->get_numBubble() == num_bubble) {
      num_element = abs(it->first);
      List_Add(_elements_L, &num_element);
    }
  }

  return _elements_L;
}


void GenEle_OnPositiveSideOf::treat_ElementsOnBorder() {
  for (std::forward_list<K_ElementInBubble>::iterator it = _elementsInBubbles.begin();
       it != _elementsInBubbles.end(); ++it)
    if (it->first < 0) add_Facets(it->second.geoElement, 0, &(*it));
}



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

  int flag_exclBorder = 0;

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
	      break ;  // at least one node of element is on surface Supp
	    }
	}
      }
      /* + ne conserver que certains des elements qui viennent d'etre groupes ... ! */
      // Now: rather done with SUPPLIST_ONPOSITIVESIDEOF (to be unified later)
      List_Delete(ExtendedSuppList) ;
    }

    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
    break ;

  case SUPPLIST_ONPOSITIVESIDEEXCLBORDEROF :
    flag_exclBorder = 1;
  case SUPPLIST_ONPOSITIVESIDEOF :
    {
      class GenEle_OnPositiveSideOf genEle(flag_exclBorder);
      *ExtendedList =
        genEle.gen_ExtendedList(InitialList, Type_SuppList, InitialSuppList);
      break ;
    }

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
	    Pair.Int1 = GeoElement2->Num ; /* Number of the element on the boundary */
	    Pair.Int2 = i_Element ; /* Index of the element connected to all the nodes of
				       the element on the boundary */
	    Tree_Add(Entity_Tr, &Pair);
	  }
	}
      }
    }

    List_Delete(ExtendedSuppList) ;

    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
    break ;

  case SUPPLIST_NONE :
  default :
    Entity_Tr = Tree_Create(sizeof(int), fcmp_int) ;
    for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
      GeoElement = Geo_GetGeoElement(i_Element) ;
      if (List_Search(InitialList, &GeoElement->Region, fcmp_int))
	Tree_Add(Entity_Tr, &GeoElement->Num) ;
    }
    *ExtendedList = Tree2List(Entity_Tr) ;
    Tree_Delete(Entity_Tr) ;
    break ;

  }

}
