// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _EXTENDED_GROUP_H_
#define _EXTENDED_GROUP_H_

#include "ProData.h"
#include "ListUtils.h"

int  Check_IsEntityInExtendedGroup(struct Group * Group_P, int Entity, int Flag) ;
void Generate_ExtendedGroup(struct Group * Group_P) ;
void Generate_ElementaryEntities(List_T * InitialList, List_T ** ExtendedList,
				 int Type_Entity) ;
void Generate_GroupsOfNodes(List_T * InitialList, List_T ** ExtendedList) ;
void Generate_GroupsOfEdges(List_T * InitialList, int Type_SuppList,
			    List_T * InitialSuppList, List_T ** ExtendedList) ;
void Generate_GroupsOfFacets(List_T * InitialList, List_T ** ExtendedList) ;
void Generate_Elements(List_T * InitialList, int Type_SuppList,
		       List_T * InitialSuppList, List_T ** ExtendedList) ;

#endif
