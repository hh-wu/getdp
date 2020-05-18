// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef EXTENDED_GROUP_H
#define EXTENDED_GROUP_H

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
void Generate_EdgesConnectedToNodesOf(List_T *InitialList, List_T *NodeList,
                                      List_T ** ExtendedList) ;
void Generate_Elements(List_T * InitialList,
                       int Type_SuppList, List_T * InitialSuppList,
                       int Type_SuppList2, List_T * InitialSuppList2,
                       List_T ** ExtendedList) ;

#endif
