/* $Id: Data_Element.h,v 1.4 2000-09-07 18:47:25 geuzaine Exp $ */
#ifndef _DATA_ELEMENT_H_
#define _DATA_ELEMENT_H_

#include "GeoData.h"

#define NBR_MAX_NODES_IN_ELEMENT       60

#define NBR_MAX_ENTITIES_IN_ELEMENT    60
#define NBR_MAX_GROUPS_IN_ELEMENT      60
#define NBR_MAX_SUBENTITIES_IN_ELEMENT  5

#define NBR_MAX_BASISFUNCTIONS         60

#define MAX_STACK_SIZE                 30

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

  int       Num, Type, Region ;

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

  struct GlobalBasisFunction  * GlobalBasisFunction [NBR_MAX_GROUPS_IN_ELEMENT] ;
} ;

/* Element.Type */
#define POINT                1
#define LINE                 2
#define TRIANGLE             4
#define QUADRANGLE           8
#define TETRAHEDRON         16
#define HEXAHEDRON          32
#define PRISM               64
#define PYRAMID            128
#define LINE_2             256
#define TRIANGLE_2         512
#define QUADRANGLE_2      1024
#define TETRAHEDRON_2     2048
#define HEXAHEDRON_2      4096
#define PRISM_2           8192
#define PYRAMID_2        16384

#endif
