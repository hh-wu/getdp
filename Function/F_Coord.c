#define RCSID "$Id: F_Coord.c,v 1.21 2006-06-27 08:51:28 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 */

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"
#include "Numeric.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V

/* ------------------------------------------------------------------------ */
/*  Get a Vector containing the current coordinates                         */
/* ------------------------------------------------------------------------ */

void  F_CoordXYZ (F_ARG) {
  int     i, k ;
  double  X, Y, Z ;

  GetDP_Begin("F_CoordXYZ");

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

  GetDP_End ;
}


void  F_CoordXYZS (F_ARG) {
  int     i, k ;
  double  X, Y, Z ;

  GetDP_Begin("F_CoordXYZS");

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

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Get the X, Y or Z coordinate                                            */
/* ------------------------------------------------------------------------ */

#define get_1_coord(name,coord)							\
  int     i, k;									\
  double  tmp;									\
										\
  GetDP_Begin(name);								\
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
  V->Type = SCALAR ;								\
										\
  GetDP_End ;

void  F_CoordX (F_ARG) { get_1_coord("F_CoordX",x) }
void  F_CoordY (F_ARG) { get_1_coord("F_CoordY",y) }
void  F_CoordZ (F_ARG) { get_1_coord("F_CoordZ",z) }

#undef get_1_coord

#define get_1_coord_source(name,coord)						\
  int     i, k;									\
  double  tmp;									\
										\
  GetDP_Begin(name);								\
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
  V->Type = SCALAR ;								\
										\
  GetDP_End ;

void  F_CoordXS (F_ARG) { get_1_coord_source("F_CoordXS",xs) }
void  F_CoordYS (F_ARG) { get_1_coord_source("F_CoordYS",ys) }
void  F_CoordZS (F_ARG) { get_1_coord_source("F_CoordZS",zs) }

#undef get_1_coord_source

/* ------------------------------------------------------------------------ */
/*  a*X + b*Y + c*Z                                                         */
/* ------------------------------------------------------------------------ */

void  F_aX_bY_cZ (F_ARG) {
  int     k ;
  double  X, Y, Z, tmp ;

  GetDP_Begin("F_aX_bY_cZ");

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

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  a*(X2-X1) + b*(Y2-Y1) + c*(Z2-Z1)                                       */
/* ------------------------------------------------------------------------ */

void  F_aX21_bY21_cZ21 (F_ARG) {
  int     k, * NumNodes ;
  double  X1, Y1, Z1, X2, Y2, Z2, tmp ;

  GetDP_Begin("F_aX21_bY21_cZ21");

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Msg(GERROR, "No element on which to perform F_aX21_bY21_cZ21");

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

  /*
  tmp = (X2+X1) * (Y2-Y1)/2. ;
  */
  /*
  tmp = - (Y2+Y1) * (X2-X1)/2. ;
  */

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

  GetDP_End ;
}

#undef F_ARG
