/* $Id: Data_GeoData.h,v 1.7 2000-10-20 07:42:06 dular Exp $ */
#ifndef _DATA_GEODATA_H_
#define _DATA_GEODATA_H_

#include "listman.h"
#include "treeman.h"

struct Grid{
  int     Init;
  List_T  * Bricks;
  double  Xmin, Xmax, Ymin, Ymax, Zmin, Zmax;
  int     Nx, Ny, Nz;
};

struct GeoData {
  int     Num ;
  char    * Name ;
  List_T  * Nodes, * Elements ;
  int     NbrElementsWithEdges, NbrElementsWithFacets ;
  int     NumCurrentEdge,  NumCurrentFacet ;
  Tree_T  * EdgesXNodes ,  * FacetsXEdges ;

  Tree_T  * NodesXElements ;
  Tree_T  * Normals ;

  List_T  * GroupForPRE ;

  struct Grid Grid;

  double  * H, * P ;
} ;

struct Geo_Node {
  int     Num ;
  double  x, y, z ;
} ;

struct Geo_Element {
  int  Num ;
  int  Type, Region ;
  int  NbrNodes , * NumNodes ;
  int  NbrEdges , * NumEdges ;
  int  NbrFacets, * NumFacets ;
} ;

struct Entity2XEntity1 {
  int  Num ;
  int  NbrEntities, * NumEntities ;
} ;

struct EntityXVector {
  int     Num;
  double  Vector[3];
} ; 

struct EntityInTree {
  int  Num, Index ;
} ;

#endif

