/* $Id: outil.h,v 1.2 2000-09-07 18:47:22 geuzaine Exp $ */
#ifndef _OUTIL_H_
#define _OUTIL_H_

#include "listman.h"
#include "treeman.h"

int fcmp_int(const void *a, const void *b);
int fcmp_absint(const void *a, const void *b);
int fcmp_double(const void *a, const void *b);

List_T *Tree2List(Tree_T *pTree) ;

Tree_T *Tree_Duplique(Tree_T *pTree) ;
Tree_T *Tree_Union       (Tree_T *pTreeA, Tree_T *pTreeB) ;
Tree_T *Tree_Soustraction(Tree_T *pTreeA, Tree_T *pTreeB) ;
Tree_T *Tree_Intersection(Tree_T *pTreeA, Tree_T *pTreeB) ;

void Tree_Unit      (Tree_T *pTreeA, Tree_T *pTreeB) ;
void Tree_Soustrait (Tree_T *pTreeA, Tree_T *pTreeB) ;
void Tree_Intersecte(Tree_T *pTreeA, Tree_T *pTreeB) ;

#endif
