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
 *
 * Contributor(s):
 *   Marc Ume
 */

#ifndef _DATA_GEODATA_H_
#define _DATA_GEODATA_H_

#include "List.h"
#include "Tree.h"

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

  double  Xmin, Xmax, Ymin, Ymax, Zmin, Zmax ;
  double  Dimension, CharacteristicLength ;

  struct Grid Grid;

  double  * H, * P ;
} ;

struct Geo_Node {
  int     Num ;
  double  x, y, z ;
} ;

struct Geo_Element {
  int  Num ;
  int  Type, Region, FMMGroup ; 
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

