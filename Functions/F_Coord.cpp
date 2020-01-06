// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdlib.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "F.h"
#include "Message.h"

#if defined(HAVE_KERNEL)
#include "GeoData.h"
#include "Get_Geometry.h"
#endif

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  Get a Vector containing the current coordinates                         */
/* ------------------------------------------------------------------------ */

void F_CoordXYZ(F_ARG)
{
#if !defined(HAVE_KERNEL)
  Message::Error("F_CoordXYZ requires Kernel");
#else
  int     i, k ;
  double  X, Y, Z ;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT){
     X = Current.x ;
     Y = Current.y ;
     Z = Current.z ;
  }
  else{
    Get_NodesCoordinatesOfElement(Current.Element) ;
    Get_BFGeoElement(Current.Element, Current.u, Current.v, Current.w) ;
    X = Y = Z = 0. ;
    for (i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++) {
      X += Current.Element->x[i] * Current.Element->n[i] ;
      Y += Current.Element->y[i] * Current.Element->n[i] ;
      Z += Current.Element->z[i] * Current.Element->n[i] ;
    }
  }

  if (Current.NbrHar == 1){
    V->Val[0] = X ;
    V->Val[1] = Y ;
    V->Val[2] = Z ;
  }
  else {
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM* k     ] = X ;
      V->Val[MAX_DIM* k   +1] = Y ;
      V->Val[MAX_DIM* k   +2] = Z ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;
#endif
}

void F_CoordXYZS(F_ARG)
{
  int     k ;
  double  X, Y, Z ;

  X = Current.xs ;
  Y = Current.ys ;
  Z = Current.zs ;

  if (Current.NbrHar == 1){
    V->Val[0] = X ;
    V->Val[1] = Y ;
    V->Val[2] = Z ;
  }
  else {
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM* k     ] = X ;
      V->Val[MAX_DIM* k   +1] = Y ;
      V->Val[MAX_DIM* k   +2] = Z ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;
}

/* ------------------------------------------------------------------------ */
/*  Get the X, Y or Z coordinate                                            */
/* ------------------------------------------------------------------------ */

#if defined(HAVE_KERNEL)
#define get_1_coord(name, coord)						\
  int     i, k;									\
  double  tmp;									\
										\
  if(!Current.Element || Current.Element->Num == NO_ELEMENT){			\
     tmp = Current.coord ;							\
  }										\
  else{										\
    Get_NodesCoordinatesOfElement(Current.Element) ;				\
    Get_BFGeoElement(Current.Element, Current.u, Current.v, Current.w) ;	\
    tmp = 0. ;									\
    for (i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++) {		\
      tmp += Current.Element->coord[i] * Current.Element->n[i] ;		\
    }										\
  }										\
  if (Current.NbrHar == 1){							\
    V->Val[0] = tmp ;								\
  }										\
  else {									\
    for (k = 0 ; k < Current.NbrHar ; k+=2) {					\
      V->Val[MAX_DIM* k     ] = tmp ;						\
      V->Val[MAX_DIM*(k+1)  ] = 0. ;						\
    }										\
  }										\
  V->Type = SCALAR ;
#else
#define get_1_coord(name, coord)						\
  Message::Error("%s requires Kernel", name);
#endif

void F_CoordX(F_ARG){ get_1_coord("F_CoordX",x) }
void F_CoordY(F_ARG){ get_1_coord("F_CoordY",y) }
void F_CoordZ(F_ARG){ get_1_coord("F_CoordZ",z) }

#undef get_1_coord

#define get_1_coord_source(name, coord)						\
  int     k;									\
  double  tmp;									\
										\
  tmp = Current.coord ;							        \
  if (Current.NbrHar == 1){							\
    V->Val[0] = tmp ;								\
  }										\
  else {									\
    for (k = 0 ; k < Current.NbrHar ; k+=2) {					\
      V->Val[MAX_DIM* k     ] = tmp ;						\
      V->Val[MAX_DIM*(k+1)  ] = 0. ;						\
    }										\
  }										\
  V->Type = SCALAR ;

void F_CoordXS(F_ARG){ get_1_coord_source("F_CoordXS",xs) }
void F_CoordYS(F_ARG){ get_1_coord_source("F_CoordYS",ys) }
void F_CoordZS(F_ARG){ get_1_coord_source("F_CoordZS",zs) }

#undef get_1_coord_source

/* ------------------------------------------------------------------------ */
/*  a*X + b*Y + c*Z                                                         */
/* ------------------------------------------------------------------------ */

void F_aX_bY_cZ(F_ARG)
{
#if !defined(HAVE_KERNEL)
  Message::Error("F_aX_bY_cZ requires Kernel");
#else
  int     k ;
  double  X, Y, Z, tmp ;

  Geo_GetNodesCoordinates(1, &Current.NumEntity, &X, &Y, &Z) ;

  if (Current.NbrHar == 1){
    V->Val[0] = Fct->Para[0] * X + Fct->Para[1] * Y + Fct->Para[2] * Z ;
  }
  else {
    tmp = Fct->Para[0] * X + Fct->Para[1] * Y + Fct->Para[2] * Z ;
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM* k     ] = tmp ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
    }
  }
  V->Type = SCALAR ;
#endif
}


/* ------------------------------------------------------------------------ */
/*  a*(X2-X1) + b*(Y2-Y1) + c*(Z2-Z1)                                       */
/* ------------------------------------------------------------------------ */

void F_aX21_bY21_cZ21 (F_ARG)
{
#if !defined(HAVE_KERNEL)
  Message::Error("F_aX21_bY21_cZ21 requires Kernel");
#else
  int     k, * NumNodes ;
  double  X1, Y1, Z1, X2, Y2, Z2, tmp ;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Message::Error("No element on which to perform F_aX21_bY21_cZ21");

  NumNodes = Geo_GetNodesOfEdgeInElement (Current.Element->GeoElement,
					  Current.NumEntityInElement) ;
  Get_NodesCoordinatesOfElement(Current.Element) ;
  X1 = Current.Element->x[abs(NumNodes[0])-1] ;
  Y1 = Current.Element->y[abs(NumNodes[0])-1] ;
  Z1 = Current.Element->z[abs(NumNodes[0])-1] ;
  X2 = Current.Element->x[abs(NumNodes[1])-1] ;
  Y2 = Current.Element->y[abs(NumNodes[1])-1] ;
  Z2 = Current.Element->z[abs(NumNodes[1])-1] ;

  tmp = Fct->Para[0] * (X2-X1) + Fct->Para[1] * (Y2-Y1) + Fct->Para[2] * (Z2-Z1) ;

  if (Current.Element->GeoElement->NumEdges[Current.NumEntityInElement] < 0)
    tmp *= -1. ;

  if (Current.NbrHar == 1){
    V->Val[0] = tmp ;
  }
  else {
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM* k     ] = tmp ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
    }
  }
  V->Type = SCALAR ;
#endif
}
