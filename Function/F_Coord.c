#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 

#include "CurrentData.h"
#include "Data_Numeric.h"

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

  Get_NodesCoordinatesOfElement(Current.Element) ;
  Get_GeoElement(Current.Element, Current.u, Current.v, Current.w) ;

  X = Y = Z = 0. ;
  for (i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++) {
    X += Current.Element->x[i] * Current.Element->n[i] ;
    Y += Current.Element->y[i] * Current.Element->n[i] ;
    Z += Current.Element->z[i] * Current.Element->n[i] ;
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
}


/* ------------------------------------------------------------------------ */
/*  Get the X, Y or Z coordinate                                            */
/* ------------------------------------------------------------------------ */

#define get_1_coord(coord)						\
  int     i, k;								\
  double  tmp;								\
									\
  Get_NodesCoordinatesOfElement(Current.Element) ;			\
  Get_GeoElement(Current.Element, Current.u, Current.v, Current.w) ;	\
									\
  tmp = 0. ;								\
  for (i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++) {	\
    tmp += Current.Element->coord[i] * Current.Element->n[i] ;		\
  }									\
  if (Current.NbrHar == 1){ 						\
    V->Val[0] = tmp ;							\
  }									\
  else {								\
    for (k = 0 ; k < Current.NbrHar ; k+=2) {				\
      V->Val[MAX_DIM* k     ] = tmp ; 					\
      V->Val[MAX_DIM*(k+1)  ] = 0. ; 					\
    }									\
  }									\
  V->Type = SCALAR ;

void  F_CoordX (F_ARG) { get_1_coord(x) }
void  F_CoordY (F_ARG) { get_1_coord(y) }
void  F_CoordZ (F_ARG) { get_1_coord(z) }

#undef get_1_coord



/* ------------------------------------------------------------------------ */
/*  a*X + b*Y + c*Z                                                         */
/* ------------------------------------------------------------------------ */

void  F_aX_bY_cZ (F_ARG) {
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
}


/* ------------------------------------------------------------------------ */
/*  a*(X2-X1) + b*(Y2-Y1) + c*(Z2-Z1)                                       */
/* ------------------------------------------------------------------------ */

void  F_aX21_bY21_cZ21 (F_ARG) {
  int     k, * NumNodes ;
  double  X1, Y1, Z1, X2, Y2, Z2, tmp ;

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
}



#undef F_ARG
