/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to "getdp@geuz.org".
 */

#ifndef _DATA_ELEMENT_H_
#define _DATA_ELEMENT_H_

#include "GeoData.h"

#define NBR_MAX_NODES_IN_ELEMENT       60

#define NBR_MAX_ENTITIES_IN_ELEMENT    60
#define NBR_MAX_GROUPS_IN_ELEMENT      60
#define NBR_MAX_SUBENTITIES_IN_ELEMENT  5

#define NBR_MAX_BASISFUNCTIONS         60

#define MAX_STACK_SIZE                 40

/* ------------------------------------------------------------------------ */
/*  E l e m e n t                                                           */
/* ------------------------------------------------------------------------ */

struct TwoInt { int  Int1, Int2 ; } ;
struct IntxList { int Int ; List_T * List ; } ;

struct Matrix3x3 {
  double  c11, c12, c13 ;
  double  c21, c22, c23 ;
  double  c31, c32, c33 ;
} ;
typedef struct Matrix3x3  MATRIX3x3 ;

struct Element {
  struct Geo_Element  * GeoElement ;

  int       Num, Type, Region, FMMGroup ;

  struct Element  * ElementSource, * ElementTrace ;

  int       NumLastElementForNodesCoordinates ;
  double    x [NBR_MAX_NODES_IN_ELEMENT] ;
  double    y [NBR_MAX_NODES_IN_ELEMENT] ;
  double    z [NBR_MAX_NODES_IN_ELEMENT] ;

  int       NumLastElementForSolidAngle ;
  double    angle [NBR_MAX_NODES_IN_ELEMENT] ;

  int       NumLastElementForSortedNodesByFacet ;
  struct TwoInt  SortedNodesByFacet [6][NBR_MAX_SUBENTITIES_IN_ELEMENT] ;

  double    n    [NBR_MAX_NODES_IN_ELEMENT] ;
  double    dndu [NBR_MAX_NODES_IN_ELEMENT] [3] ;

  struct JacobianCase  * JacobianCase ;
  MATRIX3x3            Jac ;
  double               DetJac ;
  MATRIX3x3            InvJac ;

  int       NumLastElementForGroupsOfEntities ;
  int       NbrGroupsOfEntities ;
  int       NumGroupsOfEntities  [NBR_MAX_GROUPS_IN_ELEMENT] ;
  int       NbrEntitiesInGroups  [NBR_MAX_GROUPS_IN_ELEMENT] ;
  int       NumEntitiesInGroups  [NBR_MAX_GROUPS_IN_ELEMENT]
                                 [NBR_MAX_ENTITIES_IN_ELEMENT] ;
  int       NumSubFunction       [2][NBR_MAX_GROUPS_IN_ELEMENT] ;

  struct GlobalBasisFunction  * GlobalBasisFunction [NBR_MAX_GROUPS_IN_ELEMENT] ;
} ;

/* Element.Type */
#define POINT            (1<<0)
#define LINE             (1<<1)
#define TRIANGLE         (1<<2)
#define QUADRANGLE       (1<<3)
#define TETRAHEDRON      (1<<4)
#define HEXAHEDRON       (1<<5)
#define PRISM            (1<<6)
#define PYRAMID          (1<<7)
#define LINE_2           (1<<8)
#define TRIANGLE_2       (1<<9)
#define QUADRANGLE_2     (1<<10)
#define TETRAHEDRON_2    (1<<11)
#define HEXAHEDRON_2     (1<<12)
#define PRISM_2          (1<<13)
#define PYRAMID_2        (1<<14)

#endif






