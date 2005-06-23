/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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

#ifndef _EXTENDED_GROUP_H_
#define _EXTENDED_GROUP_H_

#include "Data_Active.h"


/* ExtendedGroup */
/* ------------- */

int  Check_IsEntityInExtendedGroup(struct Group * Group_P, int Entity, int Flag) ;
void Generate_ExtendedGroup(struct Group * Group_P) ;
void Generate_ElementaryEntities(List_T * InitialList, List_T ** ExtendedList, 
				 int Type_Entity) ;
void Generate_GroupsOfNodes(List_T * InitialList, List_T ** ExtendedList) ;
void Generate_GroupsOfEdges(List_T * InitialList, int Type_SuppList,
			    List_T * InitialSuppList, List_T ** ExtendedList) ;
void Generate_Elements(List_T * InitialList, int Type_SuppList, 
		       List_T * InitialSuppList, List_T ** ExtendedList) ;

#endif
