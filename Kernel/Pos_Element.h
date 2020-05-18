// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef POS_ELEMENT_H
#define POS_ELEMENT_H

#include "ProData.h"
#include "ListUtils.h"

/* ------------------------------------------------------------------------ */
/*  P o s t E l e m e n t                                                   */
/* ------------------------------------------------------------------------ */

struct PostElement {
  int              Index, Type, Depth;
  int              NbrNodes, * NumNodes;
  double           * u, * v, * w, * x, * y, * z;
  struct Value     * Value;
} ;

struct PostElement * Create_PostElement(int Index, int Type, int NbrNodes, int Depth);
void                 Destroy_PostElement(struct PostElement * PostElement) ;
struct PostElement * NodeCopy_PostElement(struct PostElement *PostElement);
struct PostElement * PartialCopy_PostElement(struct PostElement *PostElement);

void  Fill_PostElement(struct Geo_Element *GE, List_T *PostElement_L,
		       int Index, int Depth, int Skin,
		       int DecomposeInSimplex, int HighOrder, int Gauss) ;
void Cut_PostElement(struct PostElement * PE, struct Geo_Element * GE,
		     List_T * PE_L, int Index, int Depth, int Skin,
		     int DecomposeInSimplex) ;
void Sort_PostElement_Connectivity(List_T *PostElement_L);

int fcmp_PostElement (const void *a, const void *b);
int fcmp_PostElement_v0(const void *a, const void *b);
int fcmp_PostElement_absu0(const void *a, const void *b);

#endif
