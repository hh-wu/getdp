#define RCSID "$Id: F_Misc.c,v 1.5 2001-03-03 19:21:20 geuzaine Exp $"
#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"
#include "Data_Numeric.h"
#include "Tools.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V


/* ------------------------------------------------------------------------ */
/*  Printf                                                                  */
/* ------------------------------------------------------------------------ */

void  F_Printf (F_ARG) {

  GetDP_Begin("F_Printf");

  V = A ;  /* Attention: ne sert a rien!?! */
  Print_Value(A) ;
  printf("\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Computes the normal to an element                                       */
/* ------------------------------------------------------------------------ */

void  F_Normal(F_ARG) {
  int  k ;

  GetDP_Begin("F_Normal");

  Geo_CreateNormal(Current.Element->Type, 
		   Current.Element->x, 
		   Current.Element->y, 
		   Current.Element->z, 
		   V->Val);

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;

  GetDP_End ;
}

void  F_NormalSource(F_ARG) {
  int  k ;

  GetDP_Begin("F_NormalSource");

  Geo_CreateNormal(Current.ElementSource->Type, 
		   Current.ElementSource->x, 
		   Current.ElementSource->y, 
		   Current.ElementSource->z, 
		   V->Val);

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;

  GetDP_End ;
}


void  F_Tangent(F_ARG) {
  int  k ;
  double  tx, ty, tz, norm ;

  GetDP_Begin("F_Tangent");

  switch (Current.Element->Type) {
   
  case LINE :
    tx = Current.Element->x[1] - Current.Element->x[0] ;
    ty = Current.Element->y[1] - Current.Element->y[0] ;
    tz = Current.Element->z[1] - Current.Element->z[0] ;
    norm = sqrt(DSQU(tx)+DSQU(ty)+DSQU(tz)) ;      
    V->Val[0] = tx/norm ;
    V->Val[1] = ty/norm ;
    V->Val[2] = tz/norm ;
    break ;

  default :
    Msg(ERROR, "Function 'Tangent' only valid for Line Elements");
  }

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Comparison                                                              */
/* ------------------------------------------------------------------------ */

void  F_CompElementNum (F_ARG) {

  GetDP_Begin("F_CompElementNum");

  if(!Current.ElementSource) 
    Msg(ERROR, "Uninitialized source Element in 'F_CompElementNum'");

  V->Type = SCALAR ;
  V->Val[0] = (Current.Element->Num == Current.ElementSource->Num) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  SurfaceArea                                                             */
/* ------------------------------------------------------------------------ */

void  F_SurfaceArea (F_ARG) {

  struct Element  Element ;
  List_T  * InitialList_L ;

  int     Index_Region, Nbr_Element, i_Element ;
  double  Val_Surface ;
  double  c11, c21, c12, c22, DetJac ;
  int     i ;

  GetDP_Begin("F_SurfaceArea");

  if (!Fct->Active) {
    Fct->Active = (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

    if (Fct->NbrParameters == 1) {
      Index_Region = (int)(Fct->Para[0]) ;
      InitialList_L = ((struct Group *)
		       List_Pointer(Problem_S.Group, Index_Region))->InitialList ;
    }
    else {
      Index_Region = -1 ;
      InitialList_L = NULL ;
    }

    Val_Surface = 0. ;
    Nbr_Element = Geo_GetNbrGeoElements() ;
    for (i_Element = 0 ; i_Element < Nbr_Element; i_Element++) {
      Element.GeoElement = Geo_GetGeoElement(i_Element) ;
      if ((InitialList_L && 
	   List_Search(InitialList_L, &(Element.GeoElement->Region), fcmp_int)) ||
	  (!InitialList_L && Element.GeoElement->Region == Current.Region)) {
	Element.Num    = Element.GeoElement->Num ;
	Element.Type   = Element.GeoElement->Type ;

	if (Element.Type == TRIANGLE || Element.Type == QUADRANGLE) {

	  Get_NodesCoordinatesOfElement(&Element) ;
	  Get_GeoElement(&Element, 0., 0., 0.) ;

	  c11 = c21 = c12 = c22 = 0. ;
	  for ( i = 0 ; i < Element.GeoElement->NbrNodes ; i++ ) {
	    c11 += Element.x[i] * Element.dndu[i][0] ;
	    c21 += Element.x[i] * Element.dndu[i][1] ;
	    c12 += Element.y[i] * Element.dndu[i][0] ;
	    c22 += Element.y[i] * Element.dndu[i][1] ;
	  }
	  DetJac = c11 * c22 - c12 * c21 ;

	  if (Element.Type == TRIANGLE)
	    Val_Surface += fabs(DetJac) * 0.5 ;
	  else if (Element.Type == QUADRANGLE)
	    Val_Surface += fabs(DetJac) * 4. ;

	}
	else {
	  Msg(ERROR, "Function 'SurfaceArea' only valid for Triangle or Quandrangle Elements");
	}
      }
    }
    Fct->Active->Case.SurfaceArea.Value = Val_Surface ;
  }

  V->Type = SCALAR ;
  V->Val[0] = Fct->Active->Case.SurfaceArea.Value ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Interpolation                                                           */
/* ------------------------------------------------------------------------ */

void  F_InterpolationLinear (F_ARG) {

  int     N, up, lo ;
  double  xp, yp, *x, *y, a ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_InterpolationLinear");

  if (!Fct->Active)  Fi_InitListXY (Fct, A, V) ;

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = (y[up] - y[lo]) / (x[up] - x[lo]) ;
    yp =  y[up] + ( xp - x[up] ) * a ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationLinear (F_ARG) {

  int     N, up, lo ;
  double  xp, dyp, *x, *y ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_dInterpolationLinear");

  if (!Fct->Active)  Fi_InitListXY (Fct, A, V) ;

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear Interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    dyp = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    dyp = (y[up] - y[lo]) / (x[up] - x[lo]) ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = dyp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationLinear2 (F_ARG) {

  int     N, up, lo ;
  double  xp,yp, *x, *y, a ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_dInterpolationLinear2");

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitListXY2 (Fct, A, V) ;
  }    

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.xc ;  y = D->Case.Interpolation.yc ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = (y[up] - y[lo]) / (x[up] - x[lo]) ;
    yp =  y[up] + ( xp - x[up] ) * a ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}



void  F_InterpolationAkima (F_ARG) {

  int     N, up, lo ;
  double  xp, yp, *x, *y, a, a2, a3 ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_InterpolationAkima");

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitAkima (Fct, A, V) ;
  }

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad Argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    a = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
    yp =  y[N-1] + ( xp - x[N-1] ) * a ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = xp - x[lo] ; a2 = a*a ; a3 = a2*a ;
    yp =  y[lo]
      + D->Case.Interpolation.bi[lo] * a
      + D->Case.Interpolation.ci[lo] * a2
      + D->Case.Interpolation.di[lo] * a3 ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = yp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationAkima (F_ARG) {

  int     N, up, lo ;
  double  xp, dyp, *x, *y, a, a2 ;
  struct FunctionActive  * D ;

  GetDP_Begin("F_dInterpolationAkima");

  if (!Fct->Active) {
    Fi_InitListXY (Fct, A, V) ;
    Fi_InitAkima (Fct, A, V) ;
  }

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;

  xp = A->Val[0] ;

  if (xp < x[0]) {
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
  }
  else if (xp > x[N-1]) {
    dyp = (y[N-1] - y[N-2]) / (x[N-1] - x[N-2]) ;
  }
  else {
    up = 0 ;  while (x[++up] < xp) ;  lo = up - 1 ;
    a = xp - x[lo] ; a2 = a*a ; 
    dyp = D->Case.Interpolation.bi[lo]
      + D->Case.Interpolation.ci[lo] * 2. * a
      + D->Case.Interpolation.di[lo] * 3. * a2 ;
  }

  if (Current.NbrHar == 1)
    V->Val[0] = dyp ;
  else {
    Msg(ERROR,"Function 'Interpolation' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


void  Fi_InitListXY (F_ARG) {

  int     i, N ;
  double  *x, *y ;
  struct FunctionActive  * D ;

  GetDP_Begin("Fi_InitListXY");

  D = Fct->Active =
    (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
  N = D->Case.Interpolation.NbrPoint = Fct->NbrParameters / 2 ;
  x = D->Case.Interpolation.x = (double *)Malloc(sizeof(double)*N) ;
  y = D->Case.Interpolation.y = (double *)Malloc(sizeof(double)*N) ;

  for (i = 0 ; i < N ; i++) {
    x[i] = Fct->Para[i*2  ] ;
    y[i] = Fct->Para[i*2+1] ;
  }

  GetDP_End ;
}


void  Fi_InitListXY2 (F_ARG) {

  int     i, N ;
  double  *x, *y, *xc, *yc ;
  struct FunctionActive  * D ;

  GetDP_Begin("Fi_InitListXY2");

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;
  xc = D->Case.Interpolation.xc = (double *)Malloc(sizeof(double)*N) ;
  yc = D->Case.Interpolation.yc = (double *)Malloc(sizeof(double)*N) ;

  xc[0] = 0. ;
  yc[0] = (x[1]*y[1]-x[0]*y[0]) / (x[1]*x[1]-x[0]*x[0]) ;

  for (i = 1 ; i < N ; i++) {

    xc[i] = 0.5 * (x[i]+x[i-1]) ;
    yc[i] = (x[i]*y[i]-x[i-1]*y[i-1]) / (x[i]*x[i]-x[i-1]*x[i-1]) ;

    /*
    xc[i] = x[i] ;
    yc[i] = (y[i]-y[i-1]) / (x[i]-x[i-1]) ;
    */
  }

  GetDP_End ;
}


void  Fi_InitAkima (F_ARG) {

  int     i, N ;
  double  *x, *y, *mi, *bi, *ci, *di, a ;
  struct FunctionActive  * D ;

  GetDP_Begin("Fi_InitAkima");

  D = Fct->Active ;  N = D->Case.Interpolation.NbrPoint ;
  x = D->Case.Interpolation.x ;  y = D->Case.Interpolation.y ;
  mi = D->Case.Interpolation.mi = (double *)Malloc(sizeof(double)*N+4) ;
  mi += 2 ;
  bi = D->Case.Interpolation.bi = (double *)Malloc(sizeof(double)*N) ;
  ci = D->Case.Interpolation.ci = (double *)Malloc(sizeof(double)*N) ;
  di = D->Case.Interpolation.di = (double *)Malloc(sizeof(double)*N) ;

  for (i = 0 ; i < N-1 ; i++)
    mi[i] = (y[i+1]-y[i]) / (x[i+1]-x[i]) ;
  mi[N-1] = 2.*mi[N-2] - mi[N-3] ;
  mi[N  ] = 2.*mi[N-1] - mi[N-2] ;
  mi[ -1] = 2.*mi[  0] - mi[  1] ;
  mi[ -2] = 2.*mi[ -1] - mi[  0] ;

  for (i = 0 ; i < N ; i++)
    if ( (a = fabs(mi[i+1]-mi[i]) + fabs(mi[i-1]-mi[i-2])) > 1.e-30 )
      bi[i] =
	( fabs(mi[i+1]-mi[i]) * mi[i-1] + fabs(mi[i-1]-mi[i-2]) * mi[i] ) / a ;
    else
      bi[i] = (mi[i] + mi[i-1]) / 2. ;

  for (i = 0 ; i < N-1 ; i++) {
    a = (x[i+1]-x[i]) ;
    ci[i] = ( 3.*mi[i] - 2.*bi[i] - bi[i+1] ) / a ;
    di[i] = ( bi[i] + bi[i+1] - 2.*mi[i] ) / (a*a) ;
  }

  GetDP_End ;
}


#undef F_ARG
