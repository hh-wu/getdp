/* $Id: Graph.h,v 1.3 2000-10-30 01:05:45 geuzaine Exp $ */
#ifndef _GRAPH_H_
#define _GRAPH_H_

#include "List.h"

typedef struct {
  List_T  *jptr, *ai, *ptr;
}gGraph;

void InitGraph (int g_NbLines, gGraph *G) ;
void AddEdgeInGraph (gGraph *G, int ic, int il) ;

#endif
