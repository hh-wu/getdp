/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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

#ifndef _POS_ELEMENT_H_
#define _POS_ELEMENT_H_

#include "Data_Passive.h"

struct PostElement * Create_PostElement(int Index, int Type, int NbrNodes, int Depth);
void                 Destroy_PostElement(struct PostElement * PostElement) ;
struct PostElement * NodeCopy_PostElement(struct PostElement *PostElement);
struct PostElement * PartialCopy_PostElement(struct PostElement *PostElement);

void  Fill_PostElement(struct Geo_Element *GE, List_T *PostElement_L, 
		       int Index, int Depth, int Skin, List_T * EvaluationPoints_L,
		       int DecomposeInSimplex) ;
void Cut_PostElement(struct PostElement * PE, struct Geo_Element * GE,
		     List_T * PE_L, int Index, int Depth, int Skin,
		     int DecomposeInSimplex) ;
void Sort_PostElement_Connectivity(List_T *PostElement_L);

int fcmp_PostElement (const void *a, const void *b);
int fcmp_PostElement_v0(const void *a, const void *b);
int fcmp_PostElement_absu0(const void *a, const void *b);

#endif
