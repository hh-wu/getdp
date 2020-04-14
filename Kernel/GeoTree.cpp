// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "GeoData.h"
#include "ProData.h"
#include "TreeUtils.h"
#include "Get_Geometry.h"
#include <math.h>
#include <stdlib.h>

static int Tree_IndexToChange, Tree_NewIndex;

static void Geo_ChangeTreeIndex(void *a, void *b)
{
  if(((struct EntityInTree *)a)->Index == Tree_IndexToChange)
    ((struct EntityInTree *)a)->Index = Tree_NewIndex;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e n e r a t e E d g e s O f T r e e                           */
/* ------------------------------------------------------------------------ */

static bool testEdgeAlignedWith(double *x, double *y, double *z, int *Entity_P,
                                int SuppListType2)
{
  bool aligned = false;
  double tol = 1e-7;

  switch(SuppListType2) {
  case -1: // aligned with Cartesian X direction
    aligned = fabs(x[abs(Entity_P[0]) - 1] - x[abs(Entity_P[1]) - 1]) < tol;
    break;
  case -2: // aligned with Cartesian Y direction
    aligned = fabs(y[abs(Entity_P[0]) - 1] - y[abs(Entity_P[1]) - 1]) < tol;
    break;
  case -3: // aligned with Cartesian Z direction
    aligned = fabs(z[abs(Entity_P[0]) - 1] - z[abs(Entity_P[1]) - 1]) < tol;
    break;
  default: printf("Unknown 'AlignedWith parameter' %d\n", SuppListType2);
  }
  return aligned;
}

static void Geo_GenerateTreeOnSlidingSurface(List_T *InitialList,
                                             List_T *ExtendedList,
                                             Tree_T *EntitiesInTree_T,
                                             int SuppListType2)
{
  int Nbr_Element, Nbr_Edges, i_Element, i_Edge, Num_Edge;
  struct Geo_Element *Geo_Element;
  int *D_Element, *Entity_P;
  struct EntityInTree EntityInTree_S;
  double x[NBR_MAX_NODES_IN_ELEMENT];
  double y[NBR_MAX_NODES_IN_ELEMENT];
  double z[NBR_MAX_NODES_IN_ELEMENT];

  Tree_T *EdgesInTree_T;
  EdgesInTree_T = Tree_Create(sizeof(int), fcmp_int);

  Nbr_Element = Geo_GetNbrGeoElements();
  for(i_Element = 0; i_Element < Nbr_Element; i_Element++) {
    Geo_Element = Geo_GetGeoElement(i_Element);

    if(List_Search(InitialList, &Geo_Element->Region, fcmp_int)) {
      Geo_GetNodesCoordinates(Geo_Element->NbrNodes, Geo_Element->NumNodes, x,
                              y, z);

      if(Geo_Element->NbrEdges == 0) Geo_CreateEdgesOfElement(Geo_Element);
      D_Element = Geo_GetIM_Den(Geo_Element->Type, &Nbr_Edges);

      for(i_Edge = 0; i_Edge < Geo_Element->NbrEdges; i_Edge++) {
        Entity_P = D_Element + i_Edge * NBR_MAX_SUBENTITIES_IN_ELEMENT;

        if(testEdgeAlignedWith(x, y, z, Entity_P, SuppListType2)) {
          EntityInTree_S.Index = Geo_Element->Region;
          EntityInTree_S.Num = abs(Geo_Element->NumNodes[abs(Entity_P[0]) - 1]);
          Tree_Add(EntitiesInTree_T, &EntityInTree_S);
          EntityInTree_S.Num = abs(Geo_Element->NumNodes[abs(Entity_P[1]) - 1]);
          Tree_Add(EntitiesInTree_T, &EntityInTree_S);

          Num_Edge = abs(Geo_Element->NumEdges[i_Edge]);
          Tree_Insert(EdgesInTree_T, &Num_Edge);
        }
      }
    }
  }

  List_Copy(Tree2List(EdgesInTree_T), ExtendedList);
}

static void Geo_GenerateEdgesOfTreeByDimension(int dim, List_T *List,
                                               bool isElementList, 
                                               List_T *ExtendedList,
                                               Tree_T *EntitiesInTree_T)
{
  int Nbr_Element, Num_Element, i_Element, Nbr_Entities2, i, Num_Entity1, Dim_Element;
  struct Geo_Element *Geo_Element;
  int i_Entity2, Num_Entity2, *D_Element, *Entity_P, Entity, Flag_Change;
  struct EntityInTree *EntitiesInTree_P[NBR_MAX_ENTITIES_IN_ELEMENT];
  struct EntityInTree EntityInTree_S;


  Nbr_Element = isElementList ? List_Nbr(List) : Geo_GetNbrGeoElements();

  for(i_Element = 0; i_Element < Nbr_Element; i_Element++) {
    if( isElementList ){
      List_Read(List,i_Element, &Num_Element);
      Geo_Element = Geo_GetGeoElementOfNum(Num_Element);
    }
    else{
      Geo_Element = Geo_GetGeoElement(i_Element);
      if(!List_Search(List, &Geo_Element->Region, fcmp_int)) 
        continue;
    }

    Get_JacobianFunction(JACOBIAN_VOL, Geo_Element->Type, &Dim_Element);
    if(dim < 0 || Dim_Element == dim) {
      if(Geo_Element->NbrEdges == 0) Geo_CreateEdgesOfElement(Geo_Element);
      D_Element = Geo_GetIM_Den(Geo_Element->Type, &Nbr_Entities2);

      for(i = 0; i < Geo_Element->NbrNodes; i++) {
        Num_Entity1 = abs(Geo_Element->NumNodes[i]);
        EntitiesInTree_P[i] =
          (struct EntityInTree *)Tree_PQuery(EntitiesInTree_T, &Num_Entity1);
      }

      for(i_Entity2 = 0; i_Entity2 < Geo_Element->NbrEdges; i_Entity2++) {
        Entity_P = D_Element + i_Entity2 * NBR_MAX_SUBENTITIES_IN_ELEMENT;

        i = 0;
        EntityInTree_S.Index = -1;
        while((Entity = abs(Entity_P[i++])) && (EntityInTree_S.Index < 0))
          if(EntitiesInTree_P[Entity - 1] != NULL)
            EntityInTree_S.Index = EntitiesInTree_P[Entity - 1]->Index;
        if(EntityInTree_S.Index < 0) EntityInTree_S.Index = Geo_Element->Num;

        Flag_Change = 0;

        while((Entity = abs(*(Entity_P++)))) {
          if(EntitiesInTree_P[--Entity] != NULL) {
            if(EntitiesInTree_P[Entity]->Index != EntityInTree_S.Index) {
              Tree_IndexToChange = EntitiesInTree_P[Entity]->Index;
              Tree_NewIndex = EntityInTree_S.Index;
              Tree_Action(EntitiesInTree_T, Geo_ChangeTreeIndex);
              Flag_Change = 1;
            }
          }
          else {
            EntityInTree_S.Num = abs(Geo_Element->NumNodes[Entity]);
            EntitiesInTree_P[Entity] = 
              (struct EntityInTree *)Tree_Add(EntitiesInTree_T, &EntityInTree_S);
            Flag_Change = 1;
          }
        }

        if(Flag_Change) {
          Num_Entity2 = abs(Geo_Element->NumEdges[i_Entity2]);
          List_Add(ExtendedList, &Num_Entity2);
        }
      } /* for i_Entity2 ... */
    } /* if (Dim) */
  } /* for i_Element ... */
}

void Geo_GenerateEdgesOfTree(List_T * InitialList, bool isInitialListEL,
                             List_T * InitialSuppList, bool isInitialSuppListEL,
                             List_T * InitialSuppList2, bool isInitialSuppList2EL,
                             int SuppListType2, List_T ** ExtendedList)
{
  Tree_T *EntitiesInTree_T;

  *ExtendedList = List_Create(2000, 2000, sizeof(int));

  EntitiesInTree_T = Tree_Create(2 * sizeof(int), fcmp_int);

  if(InitialSuppList2 != NULL) // SubRegion2
    Geo_GenerateTreeOnSlidingSurface(InitialSuppList2, *ExtendedList,
                                     EntitiesInTree_T, SuppListType2);
  if(InitialSuppList != NULL) { // SubRegion
    Geo_GenerateEdgesOfTreeByDimension(1, InitialSuppList, isInitialSuppListEL,
                                       *ExtendedList, EntitiesInTree_T);
    Geo_GenerateEdgesOfTreeByDimension(2, InitialSuppList, isInitialSuppListEL,
                                       *ExtendedList, EntitiesInTree_T);
  }
  if(InitialList != NULL) { // Region
    Geo_GenerateEdgesOfTreeByDimension(-1, InitialList, isInitialListEL,
                                       *ExtendedList, EntitiesInTree_T);
  }

  Tree_Delete(EntitiesInTree_T);
  List_Sort(*ExtendedList, fcmp_int);
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e n e r a t e F a c e t s O f T r e e                         */
/* ------------------------------------------------------------------------ */

static void Geo_GenerateFacetsOfSubTree(List_T *InitialList,
                                        List_T *ExtendedList,
                                        Tree_T *EntitiesInTree_T)
{
  int Nbr_Element, i_Element, Nbr_Entities2, i, Num_Entity1;
  struct Geo_Element *Geo_Element;
  int i_Entity2, Num_Entity2, *D_Element, *Entity_P, Entity, Flag_Change;
  struct EntityInTree *EntitiesInTree_P[NBR_MAX_ENTITIES_IN_ELEMENT];
  struct EntityInTree EntityInTree_S;

  Nbr_Element = Geo_GetNbrGeoElements();
  for(i_Element = 0; i_Element < Nbr_Element; i_Element++) {
    Geo_Element = Geo_GetGeoElement(i_Element);

    if(List_Search(InitialList, &Geo_Element->Region, fcmp_int)) {
      if(Geo_Element->NbrEdges == 0) Geo_CreateEdgesOfElement(Geo_Element);
      if(Geo_Element->NbrFacets == 0) Geo_CreateFacetsOfElement(Geo_Element);
      D_Element = Geo_GetIM_Dfe(Geo_Element->Type, &Nbr_Entities2);

      for(i = 0; i < Geo_Element->NbrEdges; i++) {
        Num_Entity1 = abs(Geo_Element->NumEdges[i]);
        EntitiesInTree_P[i] =
          (struct EntityInTree *)Tree_PQuery(EntitiesInTree_T, &Num_Entity1);
      }

      for(i_Entity2 = 0; i_Entity2 < Geo_Element->NbrFacets; i_Entity2++) {
        Entity_P = D_Element + i_Entity2 * NBR_MAX_SUBENTITIES_IN_ELEMENT;

        i = 0;
        EntityInTree_S.Index = -1;
        while((Entity = abs(Entity_P[i++])) && (EntityInTree_S.Index < 0))
          if(EntitiesInTree_P[Entity - 1] != NULL)
            EntityInTree_S.Index = EntitiesInTree_P[Entity - 1]->Index;
        if(EntityInTree_S.Index < 0) EntityInTree_S.Index = Geo_Element->Num;

        Flag_Change = 0;

        while((Entity = abs(*(Entity_P++)))) {
          if(EntitiesInTree_P[--Entity] != NULL) {
            if(EntitiesInTree_P[Entity]->Index != EntityInTree_S.Index) {
              Tree_IndexToChange = EntitiesInTree_P[Entity]->Index;
              Tree_NewIndex = EntityInTree_S.Index;
              Tree_Action(EntitiesInTree_T, Geo_ChangeTreeIndex);
              Flag_Change = 1;
            }
            else if(Geo_Element->NbrFacets == 1)
              Flag_Change = 1;
          }
          else {
            EntityInTree_S.Num = abs(Geo_Element->NumEdges[Entity]);
            EntitiesInTree_P[Entity] = (struct EntityInTree *)Tree_Add(
              EntitiesInTree_T, &EntityInTree_S);
            Flag_Change = 1;
          }
        }

        if(Flag_Change) {
          Num_Entity2 = abs(Geo_Element->NumFacets[i_Entity2]);
          List_Add(ExtendedList, &Num_Entity2);
        }

      } /* for i_Entity2 ... */
    } /* if Region ... */

  } /* for i_Element ... */
}

void Geo_GenerateFacetsOfTree(List_T *InitialList, List_T *InitialSuppList,
                              List_T *InitialSuppList2, List_T **ExtendedList)
{
  Tree_T *EntitiesInTree_T;

  *ExtendedList = List_Create(2000, 2000, sizeof(int));

  EntitiesInTree_T = Tree_Create(2 * sizeof(int), fcmp_int);

  if(InitialSuppList2 != NULL)
    Geo_GenerateFacetsOfSubTree(InitialSuppList2, *ExtendedList,
                                EntitiesInTree_T);
  if(InitialSuppList != NULL)
    Geo_GenerateFacetsOfSubTree(InitialSuppList, *ExtendedList,
                                EntitiesInTree_T);
  if(InitialList != NULL)
    Geo_GenerateFacetsOfSubTree(InitialList, *ExtendedList, EntitiesInTree_T);

  Tree_Delete(EntitiesInTree_T);

  List_Sort(*ExtendedList, fcmp_int);
}
