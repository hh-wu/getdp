#define RCSID "$Id: GeoTree.c,v 1.9 2006-02-25 15:00:24 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

#include "GetDP.h"
#include "GeoData.h"
#include "Data_Passive.h"
#include "Tools.h"

int  Tree_IndexToChange, Tree_NewIndex ;

/* ------------------------------------------------------------------------ */
/*  G e o _ G e n e r a t e E d g e s O f T r e e                           */
/* ------------------------------------------------------------------------ */

void  Geo_GenerateEdgesOfTree(List_T * InitialList, List_T * InitialSuppList,
			      List_T ** ExtendedList) {
  Tree_T  * EntitiesInTree_T ;

  GetDP_Begin("Geo_GenerateEdgesOfTree");

  *ExtendedList = List_Create( 2000, 2000, sizeof(int)) ;

  EntitiesInTree_T = Tree_Create(2*sizeof(int), fcmp_int) ;

  if (InitialSuppList != NULL)
    Geo_GenerateEdgesOfSubTree(InitialSuppList, *ExtendedList, EntitiesInTree_T) ;
  if (InitialList != NULL)
    Geo_GenerateEdgesOfSubTree(InitialList,     *ExtendedList, EntitiesInTree_T) ;

  Tree_Delete(EntitiesInTree_T) ;

  List_Sort(*ExtendedList, fcmp_int) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e n e r a t e F a c e t s O f T r e e                         */
/* ------------------------------------------------------------------------ */

void  Geo_GenerateFacetsOfTree(List_T * InitialList, List_T * InitialSuppList,
			       List_T ** ExtendedList) {
  Tree_T  * EntitiesInTree_T ;

  GetDP_Begin("Geo_GenerateFacetsOfTree");

  *ExtendedList = List_Create( 2000, 2000, sizeof(int)) ;

  EntitiesInTree_T = Tree_Create(2*sizeof(int), fcmp_int) ;

  if (InitialSuppList != NULL)
    Geo_GenerateFacetsOfSubTree(InitialSuppList, *ExtendedList, EntitiesInTree_T) ;
  if (InitialList != NULL)
    Geo_GenerateFacetsOfSubTree(InitialList,     *ExtendedList, EntitiesInTree_T) ;

  Tree_Delete(EntitiesInTree_T) ;

  List_Sort(*ExtendedList, fcmp_int) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e n e r a t e E d g e s O f S u b T r e e                     */
/* ------------------------------------------------------------------------ */

void  Geo_GenerateEdgesOfSubTree(List_T * InitialList, List_T * ExtendedList,
				 Tree_T * EntitiesInTree_T) {

  int  Nbr_Element, i_Element, Nbr_Entities2, i, Num_Entity1 ;
  struct Geo_Element  * Geo_Element ;
  int  i_Entity2, Num_Entity2, * D_Element, * Entity_P, Entity, Flag_Change ;
  struct EntityInTree  * EntitiesInTree_P[NBR_MAX_ENTITIES_IN_ELEMENT] ;
  struct EntityInTree  EntityInTree_S ;

  GetDP_Begin("Geo_GenerateEdgesOfSubTree");

  Nbr_Element = Geo_GetNbrGeoElements() ;
  for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
    Geo_Element = Geo_GetGeoElement(i_Element) ;

    if (List_Search(InitialList, &Geo_Element->Region, fcmp_int) ) {

      if (Geo_Element->NbrEdges == 0)  Geo_CreateEdgesOfElement(Geo_Element) ;
      D_Element = Geo_GetIM_Den(Geo_Element->Type, &Nbr_Entities2) ;

      for (i = 0 ; i < Geo_Element->NbrNodes ; i++) {
	Num_Entity1 = abs(Geo_Element->NumNodes[i]) ;
	EntitiesInTree_P[i] = (struct EntityInTree*)
	  Tree_PQuery(EntitiesInTree_T, &Num_Entity1) ;
      }

      for (i_Entity2 = 0 ; i_Entity2 < Geo_Element->NbrEdges ; i_Entity2++) {

	Entity_P = D_Element + i_Entity2 * NBR_MAX_SUBENTITIES_IN_ELEMENT ;

	i = 0 ; EntityInTree_S.Index = -1 ;
	while ((Entity = abs(Entity_P[i++])) && (EntityInTree_S.Index < 0))
	  if (EntitiesInTree_P[Entity-1] != NULL)
	    EntityInTree_S.Index = EntitiesInTree_P[Entity-1]->Index ;
	if (EntityInTree_S.Index < 0)  EntityInTree_S.Index = Geo_Element->Num ;

	Flag_Change = 0 ;

	while ((Entity = abs(*(Entity_P++)))) {
	  if (EntitiesInTree_P[--Entity] != NULL) {
	    if (EntitiesInTree_P[Entity]->Index != EntityInTree_S.Index) {
	      Tree_IndexToChange = EntitiesInTree_P[Entity]->Index ;
	      Tree_NewIndex      = EntityInTree_S.Index ;
	      Tree_Action(EntitiesInTree_T, Geo_ChangeTreeIndex) ;
	      Flag_Change = 1 ;
	    }
	  }
	  else {
	    EntityInTree_S.Num = abs(Geo_Element->NumNodes[Entity]) ;
	    EntitiesInTree_P[Entity] = (struct EntityInTree*)
	      Tree_AddP(EntitiesInTree_T, &EntityInTree_S) ;
	    Flag_Change = 1 ;
	  }
	}

	if (Flag_Change) {
	  Num_Entity2 = abs(Geo_Element->NumEdges[i_Entity2]) ;
	  List_Add(ExtendedList, &Num_Entity2) ;
	}

      }   /* for i_Entity2 ... */
    }   /* if Region ... */

  }   /* for i_Element ... */

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e n e r a t e F a c e t s O f S u b T r e e                   */
/* ------------------------------------------------------------------------ */

void  Geo_GenerateFacetsOfSubTree(List_T * InitialList, List_T * ExtendedList,
				  Tree_T * EntitiesInTree_T) {

  int  Nbr_Element, i_Element, Nbr_Entities2, i, Num_Entity1 ;
  struct Geo_Element  * Geo_Element ;
  int  i_Entity2, Num_Entity2, * D_Element, * Entity_P, Entity, Flag_Change ;
  struct EntityInTree  * EntitiesInTree_P[NBR_MAX_ENTITIES_IN_ELEMENT] ;
  struct EntityInTree  EntityInTree_S ;

  GetDP_Begin("Geo_GenerateFacetsOfSubTree");
  
  Nbr_Element = Geo_GetNbrGeoElements() ;
  for (i_Element = 0 ; i_Element < Nbr_Element ; i_Element++) {
    Geo_Element = Geo_GetGeoElement(i_Element) ;

    if (List_Search(InitialList, &Geo_Element->Region, fcmp_int) ) {

      if (Geo_Element->NbrEdges  == 0)  Geo_CreateEdgesOfElement(Geo_Element) ;
      if (Geo_Element->NbrFacets == 0)  Geo_CreateFacetsOfElement(Geo_Element) ;
      D_Element = Geo_GetIM_Dfe(Geo_Element->Type, &Nbr_Entities2) ;

      for (i = 0 ; i < Geo_Element->NbrEdges ; i++) {
	Num_Entity1 = abs(Geo_Element->NumEdges[i]) ;
	EntitiesInTree_P[i] = (struct EntityInTree*)
	  Tree_PQuery(EntitiesInTree_T, &Num_Entity1) ;
      }

      for (i_Entity2 = 0 ; i_Entity2 < Geo_Element->NbrFacets ; i_Entity2++) {

	Entity_P = D_Element + i_Entity2 * NBR_MAX_SUBENTITIES_IN_ELEMENT ;

	i = 0 ; EntityInTree_S.Index = -1 ;
	while ((Entity = abs(Entity_P[i++])) && (EntityInTree_S.Index < 0))
	  if (EntitiesInTree_P[Entity-1] != NULL)
	    EntityInTree_S.Index = EntitiesInTree_P[Entity-1]->Index ;
	if (EntityInTree_S.Index < 0)  EntityInTree_S.Index = Geo_Element->Num ;

	Flag_Change = 0 ;

	while ((Entity = abs(*(Entity_P++)))) {
	  if (EntitiesInTree_P[--Entity] != NULL) {
	    if (EntitiesInTree_P[Entity]->Index != EntityInTree_S.Index) {
	      Tree_IndexToChange = EntitiesInTree_P[Entity]->Index ;
	      Tree_NewIndex      = EntityInTree_S.Index ;
	      Tree_Action(EntitiesInTree_T, Geo_ChangeTreeIndex) ;
	      Flag_Change = 1 ;
	    }
	    else if (Geo_Element->NbrFacets == 1)
	      Flag_Change = 1 ;
	  }
	  else {
	    EntityInTree_S.Num = abs(Geo_Element->NumEdges[Entity]) ;
	    EntitiesInTree_P[Entity] = (struct EntityInTree*)
	      Tree_AddP(EntitiesInTree_T, &EntityInTree_S) ;
	    Flag_Change = 1 ;
	  }
	}

	if (Flag_Change) {
	  Num_Entity2 = abs(Geo_Element->NumFacets[i_Entity2]) ;
	  List_Add(ExtendedList, &Num_Entity2) ;
	}

      }   /* for i_Entity2 ... */
    }   /* if Region ... */

  }   /* for i_Element ... */

  GetDP_End ;
}


void  Geo_ChangeTreeIndex(void * a, void * b) {

  GetDP_Begin("Geo_ChangeTreeIndex");

  if (((struct EntityInTree *)a)->Index == Tree_IndexToChange)
    ((struct EntityInTree *)a)->Index = Tree_NewIndex ;

  GetDP_End ;
}

