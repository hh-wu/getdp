/* $Id: Pos_Element.h,v 1.1 2000-10-16 12:33:02 geuzaine Exp $ */
#ifndef _POS_ELEMENT_H_
#define _POS_ELEMENT_H_

struct PostElement * Create_PostElement(int Index, int Type, int NbrNodes, int Depth);
void Destroy_PostElement(struct PostElement * PostElement) ;
void  Fill_PostElement(struct Geo_Element *GE, List_T *PostElement_L, 
		       int Index, int Depth, int Skin, int DecomposeInSimplex) ;
void Cut_PostElement(struct PostElement * PE, struct Geo_Element * GE,
		     List_T * PE_L, int Index, int Depth, int Skin,
		     int DecomposeInSimplex) ;
void Sort_PostElement_Connectivity(List_T *PostElement_L);

int fcmp_PostElement (const void *a, const void *b);
int fcmp_PostElement_v0(const void *a, const void *b);
int fcmp_PostElement_absu0(const void *a, const void *b);

#endif
