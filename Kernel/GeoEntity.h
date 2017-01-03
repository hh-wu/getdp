// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GEO_ENTITY_H_
#define _GEO_ENTITY_H_

/* Incidence Matrices : Den (EdgesXNodes), Dfe (FacetsXEdges) */
/* Xp stands for 'expanded' (used in discrete operators)      */

/* ------------------------------------------------------------------------
   POINT

        v
        |
        |
   -----1-----u
        |
        |

   ------------------------------------------------------------------------ */

static int  NbrNodes_Point  = 1 ;
static int  NbrEdges_Point  = 0 ;
static int  NbrFacets_Point = 0 ;

static double  Nodes_Point [][3]
  = { {0., 0., 0.} } ;

/* ------------------------------------------------------------------------
   LINE           edge 1: nodes 1 -> 2

        v
        |
        |
   --1-----2--u
        |
        |

   ------------------------------------------------------------------------ */

static int  NbrNodes_Line  = 2 ;
static int  NbrEdges_Line  = 1 ;
static int  NbrFacets_Line = 0 ;

static double  Nodes_Line [][3]
  = { {-1., 0., 0.} , {1., 0., 0.,} } ;

static int  Den_Line    [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0} } ;

static int  Den_Line_Xp []
  = { -1, 1 } ;


/* ------------------------------------------------------------------------
   LINE_2         edge 1: nodes 1 -> 2

        v
        |
        |
   --1--3--2--u
        |
        |

   ------------------------------------------------------------------------ */

static int  NbrNodes_Line_2  = 3 ;
static int  NbrEdges_Line_2  = 1 ;
static int  NbrFacets_Line_2 = 0 ;

static double  Nodes_Line_2 [][3]
  = { {-1., 0., 0.} , {1., 0., 0.,} , {0., 0., 0.,} } ;

static int  Den_Line_2    [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0} } ;

static int  Den_Line_2_Xp []
  = { -1, 1 } ;

/* ------------------------------------------------------------------------
   TRIANGLE      edge 1: nodes 1 -> 2
   v                  2:       1 -> 3
   |                  3:       2 -> 3
   |
   3             facet 1: edges 1 -2 3   nodes 1 2 3
   |\
   | \
   |__\___u
   1   2
   ------------------------------------------------------------------------ */

static int  NbrNodes_Triangle  = 3 ;
static int  NbrEdges_Triangle  = 3 ;
static int  NbrFacets_Triangle = 1 ;

static double  Nodes_Triangle [][3]
  = { {0., 0., 0.} , {1., 0., 0.} , {0., 1., 0.} } ;

static int  Den_Triangle [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -3, 0}, { 2, -3, 0} } ;

static int  Den_Triangle_Xp []
  = { -1, 1, 0,
      -1, 0, 1,
       0,-1, 1 } ;

static int  Dfe_Triangle [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 3, -2, 0} } ;

static int  Dfe_Triangle_Xp []
  = { 1,-1, 1 } ;


static int  Dfn_Triangle [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 3, 0} } ;

/* ------------------------------------------------------------------------
   TRIANGLE_2    edge 1: nodes 1 -> 2
   v                  2:       1 -> 3
   |                  3:       2 -> 3
   |
   3             facet 1: edges 1 -2 3   nodes 1 2 3
   |\
   6 5
   |__\___u
   1 4 2
   ------------------------------------------------------------------------ */

static int  NbrNodes_Triangle_2  = 6 ;
static int  NbrEdges_Triangle_2  = 3 ;
static int  NbrFacets_Triangle_2 = 1 ;

static double  Nodes_Triangle_2 [][3]
  = { {0., 0., 0.} , {1., 0., 0.} , {0., 1., 0.} ,
      {0.5, 0., 0.} , {0.5, 0.5, 0.} , {0., 0.5, 0.} } ;

static int  Den_Triangle_2 [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -3, 0}, { 2, -3, 0} } ;

static int  Den_Triangle_2_Xp []
  = { -1, 1, 0,
      -1, 0, 1,
       0,-1, 1 } ;

static int  Dfe_Triangle_2 [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 3, -2, 0} } ;

static int  Dfe_Triangle_2_Xp []
  = { 1,-1, 1 } ;


static int  Dfn_Triangle_2 [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 3, 0} } ;

/* ------------------------------------------------------------------------
   QUADRANGLE     edge 1: nodes 1 -> 2
        v              2:       1 -> 4
        |              3:       2 -> 3
     4--|--3           4:       3 -> 4
     |  |  |
   -----------u   facet 1: edges 1 -2 3 4   nodes 1 2 3 4
     |  |  |
     1--|--2
        |
   ------------------------------------------------------------------------ */

static int  NbrNodes_Quadrangle  = 4 ;
static int  NbrEdges_Quadrangle  = 4 ;
static int  NbrFacets_Quadrangle = 1 ;

static double  Nodes_Quadrangle [][3]
  = { {-1., -1., 0.} , {1., -1., 0.} ,
      { 1.,  1., 0.} , {-1., 1., 0.} } ;

static int  Den_Quadrangle [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -4, 0}, { 2, -3, 0}, { 3, -4, 0} } ;

static int  Den_Quadrangle_Xp []
  = { -1, 1, 0, 0,
      -1, 0, 0, 1,
       0,-1, 1, 0,
       0, 0,-1, 1 } ;

static int  Dfe_Quadrangle [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 3, 4, -2, 0} } ;

static int  Dfe_Quadrangle_Xp []
  = { 1,-1, 1, 1 } ;


static int  Dfn_Quadrangle [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 3, 4, 0} } ;

/* ------------------------------------------------------------------------
   QUADRANGLE_2   edge 1: nodes 1 -> 2
        v              2:       1 -> 4
        |              3:       2 -> 3
     4--7--3           4:       3 -> 4
     |  |  |
   --8--9--6--u   facet 1: edges 1 -2 3 4   nodes 1 2 3 4
     |  |  |
     1--5--2
        |
   ------------------------------------------------------------------------ */

static int  NbrNodes_Quadrangle_2  = 9 ;
static int  NbrEdges_Quadrangle_2  = 4 ;
static int  NbrFacets_Quadrangle_2 = 1 ;

static double  Nodes_Quadrangle_2 [][3]
  = { {-1., -1., 0.} , { 1.,-1., 0.} ,
      { 1.,  1., 0.} , {-1., 1., 0.} ,
      { 0., -1., 0.} , { 1., 0., 0.} ,
      { 0.,  1., 0.} , {-1., 0., 0.} ,
      { 0.,  0., 0.}
  } ;

static int  Den_Quadrangle_2 [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -4, 0}, { 2, -3, 0}, { 3, -4, 0} } ;

static int  Den_Quadrangle_2_Xp []
  = { -1, 1, 0, 0,
      -1, 0, 0, 1,
       0,-1, 1, 0,
       0, 0,-1, 1 } ;

static int  Dfe_Quadrangle_2 [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 3, 4, -2, 0} } ;

static int  Dfe_Quadrangle_2_Xp []
  = { 1,-1, 1, 1 } ;


static int  Dfn_Quadrangle_2 [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 3, 4, 0} } ;

/* ------------------------------------------------------------------------
   QUADRANGLE_2_8N   edge 1: nodes 1 -> 3
        v                     2:       1 -> 7
        |                     3:       3 -> 5
     7--6--5                  4:       5 -> 7
     |  |  |
   --8-----4--u          facet 1: edges 1 -3 5 7   nodes 1 3 5 7
     |  |  |
     1--2--3
        |
   ------------------------------------------------------------------------ */

static int  NbrNodes_Quadrangle_2_8N  = 8 ;
static int  NbrEdges_Quadrangle_2_8N  = 4 ;
static int  NbrFacets_Quadrangle_2_8N = 1 ;


static double  Nodes_Quadrangle_2_8N [][3]
  = { {-1., -1., 0.} , { 1.,-1., 0.} ,
      { 1.,  1., 0.} , {-1., 1., 0.} ,
      { 0., -1., 0.} , { 1., 0., 0.} ,
      { 0.,  1., 0.} , {-1., 0., 0.} ,
  } ;

static int  Den_Quadrangle_2_8N [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -4, 0}, { 2, -3, 0}, { 3, -4, 0} } ;

static int  Den_Quadrangle_2_8N_Xp []
  = { -1, 1, 0, 0,
      -1, 0, 0, 1,
       0,-1, 1, 0,
       0, 0,-1, 1 } ;

static int  Dfe_Quadrangle_2_8N [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 3, 4, -2, 0} } ;

static int  Dfe_Quadrangle_2_8N_Xp []
  = { 1,-1, 1, 1 } ;


static int  Dfn_Quadrangle_2_8N [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 3, 4, 0} } ;

/* ------------------------------------------------------------------------
   TETRAHEDRON    edge 1: nodes 1 -> 2
   v                   2:       1 -> 3
   |                   3:       1 -> 4
   |                   4:       2 -> 3
   |                   5:       2 -> 4
   3                   6:       3 -> 4
   |\
   | \            facet 1: edges  1 -3  5  nodes 1 2 4
   |__\2_____u          2:       -1  2 -4        1 3 2
   1\ /                 3:       -2  3 -6        1 4 3
     \4                 4:        4 -5  6        2 3 4
      \
       w
   ------------------------------------------------------------------------ */

static int  NbrNodes_Tetrahedron  = 4 ;
static int  NbrEdges_Tetrahedron  = 6 ;
static int  NbrFacets_Tetrahedron = 4 ;

static double  Nodes_Tetrahedron [][3]
  = { {0., 0., 0.} , {1., 0., 0.},
      {0., 1., 0.} , {0., 0., 1.} } ;

static int  Den_Tetrahedron [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -3, 0}, { 1, -4, 0},
      { 2, -3, 0}, { 2, -4, 0}, { 3, -4, 0} } ;

static int  Den_Tetrahedron_Xp []
  = { -1, 1, 0, 0,
      -1, 0, 1, 0,
      -1, 0, 0, 1,
       0,-1, 1, 0,
       0,-1, 0, 1,
       0, 0,-1, 1 } ;

static int  Dfe_Tetrahedron [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { {  1, -3,  5, 0}, { -1,  2, -4, 0},
      { -2,  3, -6, 0}, {  4, -5,  6, 0} } ;

static int  Dfe_Tetrahedron_Xp []
  = { 1, 0,-1, 0, 1, 0,
     -1, 1, 0,-1, 0, 0,
      0,-1, 1, 0, 0,-1,
      0, 0, 0, 1,-1, 1 } ;


static int  Dfn_Tetrahedron [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 4, 0}, { 1, 3, 2, 0},
      { 1, 4, 3, 0}, { 2, 3, 4, 0} } ;

/* ------------------------------------------------------------------------
   HEXAHEDRON         edge 1: nodes 1 -> 2
        v                  2:       1 -> 4
        |                  3:       1 -> 5
        |                  4:       2 -> 3
   4----|--3               5:       2 -> 6
   |\   |  |\              6:       3 -> 4
   | 8-------7             7:       3 -> 7
   | |   ----|---u         8:       4 -> 8
   1-|---\-2 |             9:       5 -> 6
    \|    \ \|            10:       5 -> 8
     5-----\-6            11:       6 -> 7
            \             12:       7 -> 8
             w
                       facet 1: edges  1 -3  5 -9    nodes 1 2 6 5
		             2:       -1  2 -4 -6          1 4 3 2
			     3:       -2  3 -8  10         1 5 8 4
			     4:        4 -5  7 -11         2 3 7 6
			     5:        6 -7  8 -12         3 4 8 7
                             6:        9 -10 11 12         5 6 7 8

   ------------------------------------------------------------------------ */

static int  NbrNodes_Hexahedron  = 8 ;
static int  NbrEdges_Hexahedron  = 12 ;
static int  NbrFacets_Hexahedron = 6 ;

static double  Nodes_Hexahedron [][3]
  = { {-1., -1., -1.} , {1., -1., -1.} ,
      { 1.,  1., -1.} , {-1., 1., -1.} ,
      {-1., -1.,  1.} , {1., -1.,  1.} ,
      { 1.,  1.,  1.} , {-1., 1.,  1.} } ;

static int  Den_Hexahedron [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -4, 0}, { 1, -5, 0},
      { 2, -3, 0}, { 2, -6, 0}, { 3, -4, 0},
      { 3, -7, 0}, { 4, -8, 0}, { 5, -6, 0},
      { 5, -8, 0}, { 6, -7, 0}, { 7, -8, 0} } ;

static int  Den_Hexahedron_Xp []
  = { -1, 1, 0, 0, 0, 0, 0, 0,
      -1, 0, 0, 1, 0, 0, 0, 0,
      -1, 0, 0, 0, 1, 0, 0, 0,
       0,-1, 1, 0, 0, 0, 0, 0,
       0,-1, 0, 0, 0, 1, 0, 0,
       0, 0,-1, 1, 0, 0, 0, 0,
       0, 0,-1, 0, 0, 0, 1, 0,
       0, 0, 0,-1, 0, 0, 0, 1,
       0, 0, 0, 0,-1, 1, 0, 0,
       0, 0, 0, 0,-1, 0, 0, 1,
       0, 0, 0, 0, 0,-1, 1, 0,
       0, 0, 0, 0, 0, 0,-1, 1 };

static int  Dfe_Hexahedron [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -3, 5, -9, 0}, {-1, 2, -4, -6, 0}, {-2, 3, -8, 10, 0},
      { 4, -5, 7, -11, 0}, { 6, -7, 8, -12, 0}, { 9, -10, 11, 12, 0} } ;

static int  Dfe_Hexahedron_Xp []
  = {  1, 0,-1, 0, 1, 0, 0, 0,-1, 0, 0, 0,
      -1, 1, 0,-1, 0,-1, 0, 0, 0, 0, 0, 0,
       0,-1, 1, 0, 0, 0, 0,-1, 0, 1, 0, 0,
       0, 0, 0, 1,-1, 0, 1, 0, 0, 0,-1, 0,
       0, 0, 0, 0, 0, 1,-1, 1, 0, 0, 0,-1,
       0, 0, 0, 0, 0, 0, 0, 0, 1,-1, 1, 1 };


static int  Dfn_Hexahedron [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 6, 5, 0}, { 1, 4, 3, 2, 0}, { 1, 5, 8, 4, 0},
      { 2, 3, 7, 6, 0}, { 3, 4, 8, 7, 0}, { 5, 6, 7, 8, 0} } ;

/* ------------------------------------------------------------------------
   PRISM          edge 1: nodes 1 -> 2
      v                2:       1 -> 3
    3 |                3:       1 -> 4
    |\|                4:       2 -> 3
    | |                5:       2 -> 5
    1_|2               6:       3 -> 6
     \| 6              7:       4 -> 5
      |_|_\___u        8:       4 -> 6
       \|  \           9:       5 -> 6
        4 __5
         \        facet 1: edges  1 -3  5 -7     nodes 1 2 5 4
          \             2:       -1  2 -4              1 3 2
           w            3:       -2  3 -6  8           1 4 6 3
	                4:        4 -5  6 -9           2 3 6 5
			5:        7 -8  9              4 5 6

   ------------------------------------------------------------------------ */

static int  NbrNodes_Prism  = 6 ;
static int  NbrEdges_Prism  = 9 ;
static int  NbrFacets_Prism = 5 ;

static double  Nodes_Prism [][3]
  = { {0., 0., -1.} , {1., 0., -1.} , {0., 1., -1.} ,
      {0., 0.,  1.} , {1., 0.,  1.} , {0., 1.,  1.} } ;

static int  Den_Prism [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -3, 0}, { 1, -4, 0},
      { 2, -3, 0}, { 2, -5, 0}, { 3, -6, 0},
      { 4, -5, 0}, { 4, -6, 0}, { 5, -6, 0} } ;

static int  Den_Prism_Xp []
  = { -1, 1, 0, 0, 0, 0,
      -1, 0, 1, 0, 0, 0,
      -1, 0, 0, 1, 0, 0,
       0,-1, 1, 0, 0, 0,
       0,-1, 0, 0, 1, 0,
       0, 0,-1, 0, 0, 1,
       0, 0, 0,-1, 1, 0,
       0, 0, 0,-1, 0, 1,
       0, 0, 0, 0,-1, 1 };

static int  Dfe_Prism [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -3, 5, -7, 0}, { -1, 2, -4, 0}, { -2, 3, -6, 8, 0},
      { 4, -5, 6, -9, 0}, { 7, -8, 9, 0} } ;

static int  Dfe_Prism_Xp []
  = {  1, 0,-1, 0, 1, 0,-1, 0, 0,
      -1, 1, 0,-1, 0, 0, 0, 0, 0,
       0,-1, 1, 0, 0,-1, 0, 1, 0,
       0, 0, 0, 1,-1, 1, 0, 0,-1,
       0, 0, 0, 0, 0, 0, 1,-1, 1 };


static int  Dfn_Prism [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 5, 4, 0}, { 1, 3, 2, 0}, { 1, 4, 6, 3, 0},
      { 2, 3, 6, 5, 0}, { 4, 5, 6, 0} } ;

/* ------------------------------------------------------------------------
   PYRAMID        edge 1: nodes 1 -> 2
        v              2:       1 -> 4
        |              3:       1 -> 5
        |              4:       2 -> 3
    4---|---3          5:       2 -> 5
    | \ |  /|          6:       3 -> 4
    |  \ -/-|---u      7:       3 -> 5
    |  / 5\ |          8:       4 -> 5
    1/----\-2
           \      facet 1: edges  1  5 -3       nodes 1 2 5
            \           2:        2 -6 -4 -1          1 4 3 2
             w          3:        3 -8 -2             1 5 4
                        4:        4  7 -5             2 3 5
                        5:        6  8 -7             3 4 5

   ------------------------------------------------------------------------ */

static int  NbrNodes_Pyramid  = 5 ;
static int  NbrEdges_Pyramid  = 8 ;
static int  NbrFacets_Pyramid = 5 ;

static double  Nodes_Pyramid [][3]
  = { {-1., -1., 0.} , { 1., -1., 0.} ,
      { 1.,  1., 0.} , {-1.,  1., 0.} ,
      { 0.,  0., 1.}  } ;

static int  Den_Pyramid [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, -2, 0}, { 1, -4, 0}, { 1, -5, 0}, { 2, -3, 0},
      { 2, -5, 0}, { 3, -4, 0}, { 3, -5, 0}, { 4, -5, 0} } ;

static int  Den_Pyramid_Xp []
  = { -1, 1, 0, 0, 0,
      -1, 0, 0, 1, 0,
      -1, 0, 0, 0, 1,
       0,-1, 1, 0, 0,
       0,-1, 0, 0, 1,
       0, 0,-1, 1, 0,
       0, 0,-1, 0, 1,
       0, 0, 0,-1, 1 };

static int  Dfe_Pyramid [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 5, -3, 0}, { 2, -6, -4, -1, 0}, { 3, -8, -2, 0},
      { 4, 7, -5, 0}, { 6, 8, -7, 0} } ;

static int  Dfe_Pyramid_Xp []
  = {  1, 0,-1, 0, 1, 0, 0, 0,
      -1, 1, 0,-1, 0,-1, 0, 0,
       0,-1, 1, 0, 0, 0, 0,-1,
       0, 0, 0, 1,-1, 0, 1, 0,
       0, 0, 0, 0, 0, 1,-1, 1 };

static int  Dfn_Pyramid [] [NBR_MAX_SUBENTITIES_IN_ELEMENT]
  = { { 1, 2, 5, 0}, { 1, 4, 3, 2, 0}, { 1, 5, 4, 0},
      { 2, 3, 5, 0}, { 3, 4, 5, 0} } ;


#endif
