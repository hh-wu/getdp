/* $Id: Graph.h,v 1.2 2000-09-07 18:47:26 geuzaine Exp $ */
#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "listman.h"

typedef struct {
  List_T  *jptr, *ai, *ptr;
}gGraph;

void InitGraph (int g_NbLines, gGraph *G) ;
void AddEdgeInGraph (gGraph *G, int ic, int il) ;

#endif
