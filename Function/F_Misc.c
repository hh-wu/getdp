#define RCSID "$Id: F_Misc.c,v 1.22 2004-03-05 18:18:03 geuzaine Exp $"
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
 *   Tuan Ledinh
 */

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"
#include "Numeric.h"
#include "Tools.h"

#if !defined(HAVE_GSL)
#define NRANSI
#include "nrutil.h"    /* pour Tuan */
#endif

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

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Msg(ERROR, "No element on which to compute 'F_Normal'");

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

  if(!Current.ElementSource || Current.ElementSource->Num == NO_ELEMENT)
    Msg(ERROR, "No element on which to compute 'F_NormalSource'");

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

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Msg(ERROR, "No element on which to compute 'F_Tangent'");

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

  if(!Current.Element || !Current.ElementSource)
    Msg(ERROR, "Uninitialized Element in 'F_CompElementNum'");

  V->Type = SCALAR ;
  V->Val[0] = (Current.Element->Num == Current.ElementSource->Num) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Volume                                                                  */
/* ------------------------------------------------------------------------ */

void F_ElementVol (F_ARG) {
  int k;
  double Vol = 0.;
  MATRIX3x3 Jac;

  /* It would be more efficient to compute the volumes directly from
     the node coordinates, but I'm lazy... */

  Get_NodesCoordinatesOfElement(Current.Element) ;
  Get_BFGeoElement(Current.Element, Current.u, Current.v, Current.w) ;

  /* we use the most general case (3D embedding) */

  switch(Current.Element->Type){
  case LINE:
    Vol = 2. * JacobianLin3D(Current.Element,&Jac);
    break;
  case TRIANGLE:
    Vol = 0.5 * JacobianSur3D(Current.Element,&Jac) ;
    break;
  case QUADRANGLE:
    Vol = 4. * JacobianSur3D(Current.Element,&Jac) ;
    break;
  case TETRAHEDRON:
    Vol = 1./6. * JacobianVol3D(Current.Element,&Jac) ;
    break;
  case HEXAHEDRON:
    Vol = 8. * JacobianVol3D(Current.Element,&Jac) ;
    break;
  case PRISM:
    Vol = JacobianVol3D(Current.Element,&Jac) ;
    break;
  default :
    Msg(ERROR, "F_ElementVol not implemented for %s",
	Get_StringForDefine(Element_Type, Current.Element->Type));
  }

  V->Type = SCALAR ;
  V->Val[0] = fabs(Vol);

  for (k = 2 ; k < Current.NbrHar ; k += 2) 
    V->Val[MAX_DIM* k] = V->Val[0] ;
  
}

/* ------------------------------------------------------------------------ */
/*  SurfaceArea                                                             */
/* ------------------------------------------------------------------------ */

void  F_SurfaceArea (F_ARG) {

  struct Element  Element ;
  List_T  * InitialList_L;

  int     Index_Region, Nbr_Element, i_Element ;
  double  Val_Surface ;
  double  c11, c21, c12, c22, DetJac ;
  int     i, k ;

  GetDP_Begin("F_SurfaceArea");

  if (!Fct->Active) {
    Fct->Active = (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

    if (Fct->NbrParameters == 1) {
      Index_Region = (int)(Fct->Para[0]) ;

      InitialList_L = List_Create(1,1,sizeof(int));
      List_Reset(InitialList_L);
      List_Add(InitialList_L,&Index_Region);


      /*
      InitialList_L = ((struct Group *)
		       List_Pointer(Problem_S.Group, Index_Region))->InitialList ;
      */
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
	  Get_BFGeoElement(&Element, 0., 0., 0.) ;

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
  V->Val[MAX_DIM] = 0;

  for (k = 2 ; k < Current.NbrHar ; k += 2) { 
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0 ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Interpolation                                                           */
/* ------------------------------------------------------------------------ */

void  F_InterpolationLinear (F_ARG) {

  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a ;
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

  V->Val[0] = yp ;
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationLinear (F_ARG) {

  int     N, up, lo ;
  double  xp, dyp = 0., *x, *y ;
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

  V->Val[0] = dyp ;
  V->Type = SCALAR ;

  GetDP_End ;
}


void  F_dInterpolationLinear2 (F_ARG) {

  int     N, up, lo ;
  double  xp, yp = 0., *x, *y, a ;
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
  double  xp, yp = 0., *x, *y, a, a2, a3 ;
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
    Msg(ERROR,"Bad argument for linear interpolation (%g < %g)", xp, x[0]) ;
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
  double  xp, dyp = 0., *x, *y, a, a2 ;
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
  mi = D->Case.Interpolation.mi = (double *)Malloc(sizeof(double)*(N+4)) ;
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

/* ------------------------------------------------------------------------ */
/*  Transformation of a stiffness matrix (6x6) with 3 given angles          */
/* ------------------------------------------------------------------------ */

#if defined(HAVE_GSL)

/* All the following should really be rewritten and generalized... */

void  F_TransformTensor (F_ARG) {
  Msg(ERROR, "Tuan's routines are not available with the GSL");
}

void  F_TransformPerm (F_ARG) {
  Msg(ERROR, "Tuan's routines are not available with the GSL");
}

void  F_TransformPiezo (F_ARG) {
  Msg(ERROR, "Tuan's routines are not available with the GSL");
}

void  F_TransformPiezoT (F_ARG) {
  Msg(ERROR, "Tuan's routines are not available with the GSL");
}

#else

void ludcmp1(double **a, int n, int *indx, double *d);
void lubksb1(double **a, int n, int *indx, double b[]);

/* Calculate the transformation stress tensor taking into account only one rotation 
   alpha/beta/gamma around the axis z/y/x respectively */

void T_Stress(double **T, int n, double alpha, double beta, double gamma)
{
  int i,j,k;
  double **T_z, **T_y, **T_x, **T_zy, sum;
  T_z=dmatrix(0,n-1,0,n-1);
  T_y=dmatrix(0,n-1,0,n-1);
  T_x=dmatrix(0,n-1,0,n-1);
  T_zy=dmatrix(0,n-1,0,n-1);
  for (i=0;i<n;i++) {
    for (j=0;j<n;j++) {
       T_z[i][j] = 0.;
       T_y[i][j] = 0.;
       T_x[i][j] = 0.;
    }    
  }
  T_z[0][0] = SQU(cos(alpha));
  T_z[0][1] = SQU(sin(alpha));
  T_z[0][3] = 2*cos(alpha)*sin(alpha);
  T_z[1][0] = SQU(sin(alpha));    
  T_z[1][1] = SQU(cos(alpha));
  T_z[1][3] =-2*cos(alpha)*sin(alpha);
  T_z[2][2] = 1.0;
  T_z[3][0] =-cos(alpha)*sin(alpha);
  T_z[3][1] = cos(alpha)*sin(alpha);
  T_z[3][3] = SQU(cos(alpha))-SQU(sin(alpha));
  T_z[4][4] = cos(alpha);
  T_z[4][5] =-sin(alpha);
  T_z[5][4] = sin(alpha);
  T_z[5][5] = cos(alpha);

  T_y[0][0] = SQU(cos(beta));
  T_y[0][2] = SQU(sin(beta));
  T_y[0][5] =-2*cos(beta)*sin(beta);
  T_y[1][1] = 1.0; 
  T_y[2][0] = SQU(sin(beta));    
  T_y[2][2] = SQU(cos(beta));
  T_y[2][5] = 2*cos(beta)*sin(beta);
  T_y[3][3] = cos(beta);
  T_y[3][4] =-sin(beta);
  T_y[4][3] = sin(beta);
  T_y[4][4] = cos(beta);
  T_y[5][0] = cos(beta)*sin(beta);
  T_y[5][2] =-cos(beta)*sin(beta);
  T_y[5][5] = SQU(cos(beta))-SQU(sin(beta));

  T_x[0][0] = 1.0;
  T_x[1][1] = SQU(cos(gamma));
  T_x[1][2] = SQU(sin(gamma));
  T_x[1][4] = 2*cos(gamma)*sin(gamma);
  T_x[2][1] = SQU(sin(gamma));    
  T_x[2][2] = SQU(cos(gamma));
  T_x[2][4] =-2*cos(gamma)*sin(gamma);
  T_x[3][3] = cos(gamma);
  T_x[3][5] = sin(gamma);
  T_x[4][1] =-cos(gamma)*sin(gamma);
  T_x[4][2] = cos(gamma)*sin(gamma);
  T_x[4][4] = SQU(cos(gamma))-SQU(sin(gamma));
  T_x[5][3] =-sin(gamma);
  T_x[5][5] = cos(gamma);
 
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      sum=0.0;
      for(k=0;k<n;k++)
	sum=sum+T_z[i][k]*T_y[k][j];
      T_zy[i][j]=sum;
     }
   }
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      sum=0.0;
      for(k=0;k<n;k++)
	sum=sum+T_zy[i][k]*T_x[k][j];
      T[i][j]=sum;
     }
   }

  free_dmatrix(T_z, 0,n-1,0,n-1);
  free_dmatrix(T_y, 0,n-1,0,n-1);
  free_dmatrix(T_x, 0,n-1,0,n-1);
  free_dmatrix(T_zy,0,n-1,0,n-1);
}

/* Calculate the transformation strain tensor taking into account only one rotation 
   alpha/beta/gamma around the axis z/y/x respectively */

void T_Strain(double **T, int n, double alpha, double beta, double gamma)
{
  int i,j,k;
  double **T_z, **T_y, **T_x, **T_zy, sum;
  T_z=dmatrix(0,n-1,0,n-1);
  T_y=dmatrix(0,n-1,0,n-1);
  T_x=dmatrix(0,n-1,0,n-1);
  T_zy=dmatrix(0,n-1,0,n-1);
  for (i=0;i<n;i++) {
    for (j=0;j<n;j++) {
       T_z[i][j] = 0;
       T_y[i][j] = 0;
       T_x[i][j] = 0;
    }    
  }
  T_z[0][0] = SQU(cos(alpha));
  T_z[0][1] = SQU(sin(alpha));
  T_z[0][3] = cos(alpha)*sin(alpha);
  T_z[1][0] = SQU(sin(alpha));    
  T_z[1][1] = SQU(cos(alpha));
  T_z[1][3] =-cos(alpha)*sin(alpha);
  T_z[2][2] = 1.0;
  T_z[3][0] =-2*cos(alpha)*sin(alpha);
  T_z[3][1] = 2*cos(alpha)*sin(alpha);
  T_z[3][3] = SQU(cos(alpha))-SQU(sin(alpha));
  T_z[4][4] = cos(alpha);
  T_z[4][5] =-sin(alpha);
  T_z[5][4] = sin(alpha);
  T_z[5][5] = cos(alpha);

  T_y[0][0] = SQU(cos(beta));
  T_y[0][2] = SQU(sin(beta));
  T_y[0][5] =-cos(beta)*sin(beta);
  T_y[1][1] = 1.0; 
  T_y[2][0] = SQU(sin(beta));    
  T_y[2][2] = SQU(cos(beta));
  T_y[2][5] = cos(beta)*sin(beta);
  T_y[3][3] = cos(beta);
  T_y[3][4] =-sin(beta);
  T_y[4][3] = sin(beta);
  T_y[4][4] = cos(beta);
  T_y[5][0] = 2*cos(beta)*sin(beta);
  T_y[5][2] =-2*cos(beta)*sin(beta);
  T_y[5][5] = SQU(cos(beta))-SQU(sin(beta));

  T_x[0][0] = 1.0;
  T_x[1][1] = SQU(cos(gamma));
  T_x[1][2] = SQU(sin(gamma));
  T_x[1][4] = cos(gamma)*sin(gamma);
  T_x[2][1] = SQU(sin(gamma));    
  T_x[2][2] = SQU(cos(gamma));
  T_x[2][4] =-cos(gamma)*sin(gamma);
  T_x[3][3] = cos(gamma);
  T_x[3][5] = sin(gamma);
  T_x[4][1] =-2*cos(gamma)*sin(gamma);
  T_x[4][2] = 2*cos(gamma)*sin(gamma);
  T_x[4][4] = SQU(cos(gamma))-SQU(sin(gamma));
  T_x[5][3] =-sin(gamma);
  T_x[5][5] = cos(gamma);
 
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      sum=0.0;
      for(k=0;k<n;k++)
	sum=sum+T_z[i][k]*T_y[k][j];
      T_zy[i][j]=sum;
    }
  }
  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      sum=0.0;
      for(k=0;k<n;k++)
	sum=sum+T_zy[i][k]*T_x[k][j];
      T[i][j]=sum;
    }
  }
  free_dmatrix(T_z, 0,n-1,0,n-1);
  free_dmatrix(T_y, 0,n-1,0,n-1);
  free_dmatrix(T_x, 0,n-1,0,n-1);
  free_dmatrix(T_zy,0,n-1,0,n-1);

}

/* Tensor Transformation */

void  F_TransformTensor (F_ARG) {

  int    ident, i, j, k, ii = 0, jj = 0, *indx, N = 6 ;
  double **T_T, **T_S, **C, **C_trformed, **a, **y, d, *col, alpha, beta, Gamma;

  GetDP_Begin("F_TransformTensor");

  C = dmatrix(0,N-1,0,N-1);
  C_trformed = dmatrix(0,N-1,0,N-1);

  ident = (int)Fct->Para[0];
  alpha = Fct->Para[1];
  beta  = Fct->Para[2];
  Gamma = Fct->Para[3];

  if( ( (A+0)->Type != TENSOR && (A+0)->Type != TENSOR_SYM && (A+0)->Type != TENSOR_DIAG ) ||
      ( (A+1)->Type != TENSOR && (A+1)->Type != TENSOR_SYM && (A+1)->Type != TENSOR_DIAG ) ||
      ( (A+2)->Type != TENSOR && (A+2)->Type != TENSOR_SYM && (A+2)->Type != TENSOR_DIAG ) ||
      ( (A+3)->Type != TENSOR && (A+3)->Type != TENSOR_SYM && (A+3)->Type != TENSOR_DIAG ) )
    Msg(ERROR, "Function 'TransformTensor' requires 4 Tensors on input (NOT %s %s %s %s)",
               Get_StringForDefine(Field_Type,(A+0)->Type),
               Get_StringForDefine(Field_Type,(A+1)->Type),
               Get_StringForDefine(Field_Type,(A+2)->Type),
               Get_StringForDefine(Field_Type,(A+3)->Type) );

  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      C[i][j] = 0.0;   /* Reset C[i][j] to zeros */

  for(i=0;i<4;i++) { 
    switch(i){
    case 0 : ii=0; jj=0; break;
    case 1 : ii=0; jj=3; break;
    case 2 : ii=3; jj=0; break;
    case 3 : ii=3; jj=3; break;
    }      

    switch((A+i)->Type){
    case TENSOR :
      C[ii+0][jj+0] = (A+i)->Val[0]; C[ii+0][jj+1] = (A+i)->Val[1];  C[ii+0][jj+2] = (A+i)->Val[2]; 
      C[ii+1][jj+0] = (A+i)->Val[3]; C[ii+1][jj+1] = (A+i)->Val[4];  C[ii+1][jj+2] = (A+i)->Val[5];  
      C[ii+2][jj+0] = (A+i)->Val[6]; C[ii+2][jj+1] = (A+i)->Val[7];  C[ii+2][jj+2] = (A+i)->Val[8];  
      break;
  
    case TENSOR_DIAG :
      C[ii+0][jj+0]=(A+i)->Val[0];  C[ii+1][jj+1]=(A+i)->Val[1];  C[ii+2][jj+2]=(A+i)->Val[2]; 
      break;
      
    case TENSOR_SYM :
      C[ii+0][jj+0]=(A+i)->Val[0];  C[ii+0][jj+1]=(A+i)->Val[1];  C[ii+0][jj+2]=(A+i)->Val[2]; 
      C[ii+1][jj+0]=C[ii+0][jj+1];  C[ii+1][jj+1]=(A+i)->Val[3];  C[ii+1][jj+2]=(A+i)->Val[4];
      C[ii+2][jj+0]=C[ii+0][jj+2];  C[ii+2][jj+1]=C[ii+1][jj+2];  C[ii+2][jj+2]=(A+i)->Val[5];
      break;
    }
  }

  /* begin of transformation ! */

  T_T=dmatrix(0,N-1,0,N-1);
  T_S=dmatrix(0,N-1,0,N-1);
  a=dmatrix(0,N-1,0,N-1);
  y=dmatrix(0,N-1,0,N-1);    
  indx=ivector(0,N-1);
  col=dvector(0,N-1);
  
  T_Stress(T_T, N, alpha, beta, Gamma);     /* Create the T_sigma */
  T_Strain(T_S, N, alpha, beta, Gamma);   /* Create the T_epsilon */

  ludcmp1(T_T,N,indx,&d);                  /* LU decomposition of T_sigma */     
  for(j=0;j<N;j++) {
    for(i=0;i<N;i++) col[i]=0.0;
    col[j]=1.0;
    lubksb1(T_T,N,indx,col);               /* Forward and back substitution */
    for(i=0;i<N;i++) y[i][j]= col[i];        /* inverse( T_sigma ) = y */
  }
  for (i=0;i<N;i++){
    for (j=0;j<N;j++){
      a[i][j]=0.0;
      for(k=0;k<N;k++) a[i][j]=a[i][j]+y[i][k]*C[k][j];   /* inverse(T_sigma)*C[i][j] */
    }
  }
  for (i=0;i<N;i++){
    for (j=0;j<N;j++){
      C_trformed[i][j]=0.0;
      for(k=0;k<N;k++) C_trformed[i][j]=C_trformed[i][j]+a[i][k]*T_S[k][j]; 
      /* C[i][j]' = inverse(T_sigma)*C[i][j]*T_epsilon */
    }
  }

  switch (ident) {   
  case 11 : 
  (V+0)->Val[0] = C_trformed[0][0]; (V+0)->Val[1] = C_trformed[0][1]; (V+0)->Val[2] = C_trformed[0][2]; 
  (V+0)->Val[3] = C_trformed[1][0]; (V+0)->Val[4] = C_trformed[1][1]; (V+0)->Val[5] = C_trformed[1][2]; 
  (V+0)->Val[6] = C_trformed[2][0]; (V+0)->Val[7] = C_trformed[2][1]; (V+0)->Val[8] = C_trformed[2][2]; 
/* 
  fprintf(stderr,"(C11 0) %.16g %.16g %.16g\n", C_trformed[0][0], C_trformed[0][1], C_trformed[0][2]);
  fprintf(stderr,"(C11 1) %.16g %.16g %.16g\n", C_trformed[1][0], C_trformed[1][1], C_trformed[1][2]);
  fprintf(stderr,"(C11 2) %.16g %.16g %.16g\n", C_trformed[2][0], C_trformed[2][1], C_trformed[2][2]); 
*/
  break ;

  case 12 :
  (V+0)->Val[0] = C_trformed[0][3]; (V+0)->Val[1] = C_trformed[0][4]; (V+0)->Val[2] = C_trformed[0][5]; 
  (V+0)->Val[3] = C_trformed[1][3]; (V+0)->Val[4] = C_trformed[1][4]; (V+0)->Val[5] = C_trformed[1][5]; 
  (V+0)->Val[6] = C_trformed[2][3]; (V+0)->Val[7] = C_trformed[2][4]; (V+0)->Val[8] = C_trformed[2][5]; 
/*
  fprintf(stderr,"(C12 0) %.16g %.16g %.16g\n", C_trformed[0][3], C_trformed[0][4], C_trformed[0][5]);
  fprintf(stderr,"(C12 1) %.16g %.16g %.16g\n", C_trformed[1][3], C_trformed[1][4], C_trformed[1][5]);
  fprintf(stderr,"(C12 2) %.16g %.16g %.16g\n", C_trformed[2][3], C_trformed[2][4], C_trformed[2][5]); 
*/
  break ;

  case 21 :
  (V+0)->Val[0] = C_trformed[3][0]; (V+0)->Val[1] = C_trformed[3][1]; (V+0)->Val[2] = C_trformed[3][2]; 
  (V+0)->Val[3] = C_trformed[4][0]; (V+0)->Val[4] = C_trformed[4][1]; (V+0)->Val[5] = C_trformed[4][2]; 
  (V+0)->Val[6] = C_trformed[5][0]; (V+0)->Val[7] = C_trformed[5][1]; (V+0)->Val[8] = C_trformed[5][2]; 
/*
  fprintf(stderr,"(C21 0) %.16g %.16g %.16g\n", C_trformed[3][0], C_trformed[3][1], C_trformed[3][2]);
  fprintf(stderr,"(C21 1) %.16g %.16g %.16g\n", C_trformed[4][0], C_trformed[4][1], C_trformed[4][2]);
  fprintf(stderr,"(C21 2) %.16g %.16g %.16g\n", C_trformed[5][0], C_trformed[5][1], C_trformed[5][2]); 
*/
  break ;

  case 22 :
  (V+0)->Val[0] = C_trformed[3][3]; (V+0)->Val[1] = C_trformed[3][4]; (V+0)->Val[2] = C_trformed[3][5]; 
  (V+0)->Val[3] = C_trformed[4][3]; (V+0)->Val[4] = C_trformed[4][4]; (V+0)->Val[5] = C_trformed[4][5]; 
  (V+0)->Val[6] = C_trformed[5][3]; (V+0)->Val[7] = C_trformed[5][4]; (V+0)->Val[8] = C_trformed[5][5]; 
/*
  fprintf(stderr,"(C22 0) %.16g %.16g %.16g\n", C_trformed[3][3], C_trformed[3][4], C_trformed[3][5]);
  fprintf(stderr,"(C22 1) %.16g %.16g %.16g\n", C_trformed[4][3], C_trformed[4][4], C_trformed[4][5]);
  fprintf(stderr,"(C22 2) %.16g %.16g %.16g\n", C_trformed[5][3], C_trformed[5][4], C_trformed[5][5]);
*/
  break ;
  }   
  
  free_dmatrix(C, 0,N-1,0,N-1);
  free_dmatrix(C_trformed, 0,N-1,0,N-1);
  free_dmatrix(T_T, 0,N-1,0,N-1);
  free_dmatrix(T_S, 0,N-1,0,N-1);
  free_dmatrix(a, 0,N-1,0,N-1);
  free_dmatrix(y, 0,N-1,0,N-1);
  free_ivector(indx, 0,N-1);
  free_dvector(col, 0,N-1);

  V->Type = TENSOR; /* We do not know exactly the type of tensor, 
		       so TENSOR is a most general choice */

/* end of transformation */
  GetDP_End ;
}


/* Calculate the transformation permitivity tensor taking into account only one rotation 
   alpha/beta/gamma around the axis z/y/x respectively */

void T_Epsilon(double **T, double alpha, double beta, double gamma)
{
  T[0][0] = cos(alpha)* cos(beta);
  T[0][1] = sin(alpha)*cos(gamma)+cos(alpha)*sin(beta)*sin(gamma);
  T[0][2] = sin(alpha)*sin(gamma)-cos(alpha)*sin(beta)*cos(gamma);
  T[1][0] =-sin(alpha)*cos(beta);
  T[1][1] = cos(alpha)*cos(gamma)-sin(alpha)*sin(beta)*sin(gamma);
  T[1][2] = cos(alpha)*sin(gamma)+sin(alpha)*sin(beta)*cos(gamma);
  T[2][0] = sin(beta);
  T[2][1] =-cos(beta)*sin(gamma);
  T[2][2] = cos(beta)*cos(gamma);
}

void  F_TransformPerm (F_ARG) {
  
  int    i, j, k, N=3 ;
  double **T_eps,**EPSr,**EPSr_trformed,**a,**y,alpha,beta,Gamma;
  
  GetDP_Begin("F_TransformPerm");
  
  EPSr = dmatrix(0,N-1,0,N-1);
  EPSr_trformed = dmatrix(0,N-1,0,N-1);
  
  alpha = Fct->Para[0];
  beta  = Fct->Para[1];
  Gamma = Fct->Para[2];
  
  if ( A->Type != TENSOR && A->Type != TENSOR_SYM && A->Type != TENSOR_DIAG )
    Msg(ERROR, "Wrong type of argument for function 'TransformTensor2' (NOT %s) ",
	Get_StringForDefine(Field_Type,A->Type));
  
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      EPSr[i][j] = 0.0;   /* Reset EPSr[i][j] to zeros */
  
  switch(A->Type){
  case TENSOR :
    EPSr[0][0] = A->Val[0]; EPSr[0][1] = A->Val[1];  EPSr[0][2] = A->Val[2]; 
    EPSr[1][0] = A->Val[3]; EPSr[1][1] = A->Val[4];  EPSr[1][2] = A->Val[5]; 
    EPSr[2][0] = A->Val[6]; EPSr[2][1] = A->Val[7];  EPSr[2][2] = A->Val[8]; 
    break;
    
  case TENSOR_DIAG :
    EPSr[0][0] = A->Val[0];  EPSr[1][1] = A->Val[1];  EPSr[2][2]=A->Val[2]; 
    break;
    
  case TENSOR_SYM :
    EPSr[0][0] = A->Val[0];   EPSr[0][1] = A->Val[1];   EPSr[0][2]=A->Val[2];
    EPSr[1][0] = EPSr[0][1];  EPSr[1][1] = A->Val[3];   EPSr[1][2]=A->Val[4];
    EPSr[2][0] = EPSr[0][2];  EPSr[2][1] = EPSr[1][2];  EPSr[2][2]=A->Val[5];
    break;
  }
  
  /* begin of transformation ! */
  
  T_eps=dmatrix(0,N-1,0,N-1);
  a=dmatrix(0,N-1,0,N-1);
  y=dmatrix(0,N-1,0,N-1);    
  
  T_Epsilon(T_eps, alpha, beta, Gamma);  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if (i!=j)  y[i][j]=T_eps[j][i];
      else       y[i][j]=T_eps[i][j];
    }
  }
  for(i=0;i<N;i++){
    for (j=0;j<N;j++){
      a[i][j]=0.0;
      for(k=0;k<N;k++) 
	a[i][j]=a[i][j]+y[i][k]*EPSr[k][j];  
    }
  }  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      EPSr_trformed[i][j]=0.0;
      for(k=0;k<N;k++) 
	EPSr_trformed[i][j]=EPSr_trformed[i][j]+a[i][k]*T_eps[k][j];
    }
  }
  
  V->Val[0] = EPSr_trformed[0][0]; V->Val[1] = EPSr_trformed[0][1]; V->Val[2] = EPSr_trformed[0][2]; 
  V->Val[3] = EPSr_trformed[1][0]; V->Val[4] = EPSr_trformed[1][1]; V->Val[5] = EPSr_trformed[1][2]; 
  V->Val[6] = EPSr_trformed[2][0]; V->Val[7] = EPSr_trformed[2][1]; V->Val[8] = EPSr_trformed[2][2]; 
/*
  fprintf(stderr,"(epsr 0) %.16g %.16g %.16g\n", EPSr_trformed[0][0], EPSr_trformed[0][1], EPSr_trformed[0][2]);
  fprintf(stderr,"(epsr 1) %.16g %.16g %.16g\n", EPSr_trformed[1][0], EPSr_trformed[1][1], EPSr_trformed[1][2]);
  fprintf(stderr,"(epsr 2) %.16g %.16g %.16g\n", EPSr_trformed[2][0], EPSr_trformed[2][1], EPSr_trformed[2][2]);
*/  
  free_dmatrix(EPSr, 0,N-1,0,N-1);
  free_dmatrix(EPSr_trformed, 0,N-1,0,N-1);
  free_dmatrix(T_eps, 0,N-1,0,N-1);
  free_dmatrix(a, 0,N-1,0,N-1);
  free_dmatrix(y, 0,N-1,0,N-1);
  
  V->Type = TENSOR; 
  
  /* end of transformation */
  GetDP_End ;
}


void  F_TransformPiezo (F_ARG) {

  int    ident, i, j, k, ii = 0, jj = 0, N = 6 ;
  double **T_eps, **T_S, **e, **e_trformed, **a, **y, alpha, beta, Gamma;

  GetDP_Begin("F_TransformPiezo");

  e = dmatrix(0,N/2-1,0,N-1);
  e_trformed = dmatrix(0,N/2-1,0,N-1);

  ident = (int)Fct->Para[0];
  alpha = Fct->Para[1];
  beta  = Fct->Para[2];
  Gamma = Fct->Para[3];

  if( ( (A+0)->Type != TENSOR && (A+0)->Type != TENSOR_SYM && (A+0)->Type != TENSOR_DIAG ) ||
      ( (A+1)->Type != TENSOR && (A+1)->Type != TENSOR_SYM && (A+1)->Type != TENSOR_DIAG ) )
    Msg(ERROR, "Function 'TransformTensor' requires 2 Tensors on input (NOT %s %s )",
               Get_StringForDefine(Field_Type,(A+0)->Type),
               Get_StringForDefine(Field_Type,(A+1)->Type) );

  for(i=0;i<N/2;i++)
    for(j=0;j<N;j++)
      e[i][j] = 0.0;   /* Reset e[i][j] to zeros */

  for(i=0;i<2;i++) { 
    switch(i){
    case 0 : ii=0; jj=0; break;
    case 1 : ii=0; jj=3; break;
    }      

    switch((A+i)->Type){
    case TENSOR :
      e[ii+0][jj+0] = (A+i)->Val[0]; e[ii+0][jj+1] = (A+i)->Val[1];  e[ii+0][jj+2] = (A+i)->Val[2]; 
      e[ii+1][jj+0] = (A+i)->Val[3]; e[ii+1][jj+1] = (A+i)->Val[4];  e[ii+1][jj+2] = (A+i)->Val[5];  
      e[ii+2][jj+0] = (A+i)->Val[6]; e[ii+2][jj+1] = (A+i)->Val[7];  e[ii+2][jj+2] = (A+i)->Val[8];  
      break;
  
    case TENSOR_DIAG :
      e[ii+0][jj+0]=(A+i)->Val[0];  e[ii+1][jj+1]=(A+i)->Val[1];  e[ii+2][jj+2]=(A+i)->Val[2]; 
      break;
      
    case TENSOR_SYM :
      e[ii+0][jj+0]=(A+i)->Val[0];  e[ii+0][jj+1]=(A+i)->Val[1];  e[ii+0][jj+2]=(A+i)->Val[2]; 
      e[ii+1][jj+0]=e[ii+0][jj+1];  e[ii+1][jj+1]=(A+i)->Val[3];  e[ii+1][jj+2]=(A+i)->Val[4];
      e[ii+2][jj+0]=e[ii+0][jj+2];  e[ii+2][jj+1]=e[ii+1][jj+2];  e[ii+2][jj+2]=(A+i)->Val[5];
      break;
    }
  }

  /* begin of transformation ! */

  T_S=dmatrix(0,N-1,0,N-1);
  T_eps=dmatrix(0,N/2-1,0,N/2-1);
  a=dmatrix(0,N/2-1,0,N-1);
  y=dmatrix(0,N/2-1,0,N/2-1);    
  
  T_Strain(T_S, N, alpha, beta, Gamma);   
  T_Epsilon(T_eps, alpha, beta, Gamma);  
  for(i=0;i<N/2;i++){
    for(j=0;j<N/2;j++){
      if (i!=j)  y[i][j]=T_eps[j][i];
      else    y[i][j]=T_eps[i][j];
    }
  }
  for(i=0;i<N/2;i++){
    for (j=0;j<N;j++){
      a[i][j]=0.0;
      for(k=0;k<N/2;k++) 
	a[i][j]=a[i][j]+y[i][k]*e[k][j];  
    }
  }  
  for(i=0;i<N/2;i++){
    for(j=0;j<N;j++){
      e_trformed[i][j]=0.0;
      for(k=0;k<N;k++) 
	e_trformed[i][j]=e_trformed[i][j]+a[i][k]*T_S[k][j];
    }
  }

  switch (ident) {   
  case 1 : 
  V->Val[0] = e_trformed[0][0]; V->Val[1] = e_trformed[0][1]; V->Val[2] = e_trformed[0][2]; 
  V->Val[3] = e_trformed[1][0]; V->Val[4] = e_trformed[1][1]; V->Val[5] = e_trformed[1][2]; 
  V->Val[6] = e_trformed[2][0]; V->Val[7] = e_trformed[2][1]; V->Val[8] = e_trformed[2][2]; 
/*
  fprintf(stderr,"(e 11 0) %.16g %.16g %.16g\n", e_trformed[0][0], e_trformed[0][1], e_trformed[0][2]);
  fprintf(stderr,"(e 11 1) %.16g %.16g %.16g\n", e_trformed[1][0], e_trformed[1][1], e_trformed[1][2]);
  fprintf(stderr,"(e 11 2) %.16g %.16g %.16g\n", e_trformed[2][0], e_trformed[2][1], e_trformed[2][2]); 
*/
  break ;

  case 2 :
  V->Val[0] = e_trformed[0][3]; V->Val[1] = e_trformed[0][4]; V->Val[2] = e_trformed[0][5]; 
  V->Val[3] = e_trformed[1][3]; V->Val[4] = e_trformed[1][4]; V->Val[5] = e_trformed[1][5]; 
  V->Val[6] = e_trformed[2][3]; V->Val[7] = e_trformed[2][4]; V->Val[8] = e_trformed[2][5]; 
/*
  fprintf(stderr,"(e 12 0) %.16g %.16g %.16g\n", e_trformed[0][3], e_trformed[0][4], e_trformed[0][5]);
  fprintf(stderr,"(e 12 1) %.16g %.16g %.16g\n", e_trformed[1][3], e_trformed[1][4], e_trformed[1][5]);
  fprintf(stderr,"(e 12 2) %.16g %.16g %.16g\n", e_trformed[2][3], e_trformed[2][4], e_trformed[2][5]); 
*/
  break ;
  }   
  
  free_dmatrix(e, 0,N/2-1,0,N-1);
  free_dmatrix(e_trformed, 0,N/2-1,0,N-1);
  free_dmatrix(T_S, 0,N-1,0,N-1);
  free_dmatrix(T_eps, 0,N/2-1,0,N/2-1);
  free_dmatrix(a, 0,N/2-1,0,N-1);
  free_dmatrix(y, 0,N/2-1,0,N/2-1);

  V->Type = TENSOR; 

/* end of transformation */
  GetDP_End ;
}


void  F_TransformPiezoT (F_ARG) {

  int    ident, i, j, k,*indx, ii = 0, jj = 0, N=6 ;
  double **T_eps, **T_T, **e, **eT, **eT_trformed, d, *col, **a, **y, alpha, beta, Gamma;

  GetDP_Begin("F_TransformCij");

  e = dmatrix(0,N/2-1,0,N-1);
  eT = dmatrix(0,N-1,0,N/2-1);
  eT_trformed = dmatrix(0,N-1,0,N/2-1);

  ident = (int)Fct->Para[0];
  alpha = Fct->Para[1];
  beta  = Fct->Para[2];
  Gamma = Fct->Para[3];

  if( ( (A+0)->Type != TENSOR && (A+0)->Type != TENSOR_SYM && (A+0)->Type != TENSOR_DIAG ) ||
      ( (A+1)->Type != TENSOR && (A+3)->Type != TENSOR_SYM && (A+3)->Type != TENSOR_DIAG ) )
    Msg(ERROR, "Function 'TransformTensor' requires 2 Tensors on input (NOT %s %s )",
               Get_StringForDefine(Field_Type,(A+0)->Type),
               Get_StringForDefine(Field_Type,(A+1)->Type) );

  for(i=0;i<N/2;i++)
    for(j=0;j<N;j++)
      e[i][j] = 0.0;   /* Reset e[i][j] to zeros */

  for(i=0;i<2;i++) { 
    switch(i){
    case 0 : ii=0; jj=0; break;
    case 1 : ii=0; jj=3; break;
    }      

    switch((A+i)->Type){
    case TENSOR :
      e[ii+0][jj+0] = (A+i)->Val[0]; e[ii+0][jj+1] = (A+i)->Val[1];  e[ii+0][jj+2] = (A+i)->Val[2]; 
      e[ii+1][jj+0] = (A+i)->Val[3]; e[ii+1][jj+1] = (A+i)->Val[4];  e[ii+1][jj+2] = (A+i)->Val[5];  
      e[ii+2][jj+0] = (A+i)->Val[6]; e[ii+2][jj+1] = (A+i)->Val[7];  e[ii+2][jj+2] = (A+i)->Val[8];  
      break;
  
    case TENSOR_DIAG :
      e[ii+0][jj+0]=(A+i)->Val[0];  e[ii+1][jj+1]=(A+i)->Val[1];  e[ii+2][jj+2]=(A+i)->Val[2]; 
      break;
      
    case TENSOR_SYM :
      e[ii+0][jj+0]=(A+i)->Val[0];  e[ii+0][jj+1]=(A+i)->Val[1];  e[ii+0][jj+2]=(A+i)->Val[2]; 
      e[ii+1][jj+0]=e[ii+0][jj+1];  e[ii+1][jj+1]=(A+i)->Val[3];  e[ii+1][jj+2]=(A+i)->Val[4];
      e[ii+2][jj+0]=e[ii+0][jj+2];  e[ii+2][jj+1]=e[ii+1][jj+2];  e[ii+2][jj+2]=(A+i)->Val[5];
      break;
    }
  }

  /* begin of transformation ! */

  T_T=dmatrix(0,N-1,0,N-1);
  T_eps=dmatrix(0,N/2-1,0,N/2-1);
  a=dmatrix(0,N-1,0,N/2-1);
  y=dmatrix(0,N-1,0,N-1);    
  indx=ivector(0,N-1);
  col=dvector(0,N-1);
  
  T_Stress(T_T, N, alpha, beta, Gamma);     
  T_Epsilon(T_eps, alpha, beta, Gamma);  
  ludcmp1(T_T,N,indx,&d);                  /* LU decomposition of T_sigma */     
  for(j=0;j<N;j++) {
    for(i=0;i<N;i++) col[i]=0.0;
    col[j]=1.0;
    lubksb1(T_T,N,indx,col);               /* Forward and back substitution */
    for(i=0;i<N;i++) y[i][j]= col[i];        /* inverse( T_sigma ) = y */
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<N/2;j++){
      if (i!=j)  eT[i][j]=e[j][i];
      else    eT[i][j]=e[i][j];
    }
  }

  for (i=0;i<N;i++){
    for (j=0;j<N/2;j++){
      a[i][j]=0.0;
      for(k=0;k<N;k++) a[i][j]=a[i][j]+y[i][k]*eT[k][j];  
    }
  }
  for (i=0;i<N;i++){
    for (j=0;j<N/2;j++){
      eT_trformed[i][j]=0.0;
      for(k=0;k<N/2;k++) eT_trformed[i][j]=eT_trformed[i][j]+a[i][k]*T_eps[k][j]; 
    }
  }

  switch (ident) {   
  case 1: 
  V->Val[0] = eT_trformed[0][0]; V->Val[1] = eT_trformed[0][1]; V->Val[2] = eT_trformed[0][2]; 
  V->Val[3] = eT_trformed[1][0]; V->Val[4] = eT_trformed[1][1]; V->Val[5] = eT_trformed[1][2]; 
  V->Val[6] = eT_trformed[2][0]; V->Val[7] = eT_trformed[2][1]; V->Val[8] = eT_trformed[2][2]; 
/*
  fprintf(stderr,"(eT 11 0) %.16g %.16g %.16g\n", eT_trformed[0][0], eT_trformed[0][1], eT_trformed[0][2]);
  fprintf(stderr,"(eT 11 1) %.16g %.16g %.16g\n", eT_trformed[1][0], eT_trformed[1][1], eT_trformed[1][2]);
  fprintf(stderr,"(eT 11 2) %.16g %.16g %.16g\n", eT_trformed[2][0], eT_trformed[2][1], eT_trformed[2][2]); 
*/
  break ;

  case 2 :
  V->Val[0] = eT_trformed[3][0]; V->Val[1] = eT_trformed[3][1]; V->Val[2] = eT_trformed[3][2]; 
  V->Val[3] = eT_trformed[4][0]; V->Val[4] = eT_trformed[4][1]; V->Val[5] = eT_trformed[4][2]; 
  V->Val[6] = eT_trformed[5][0]; V->Val[7] = eT_trformed[5][1]; V->Val[8] = eT_trformed[5][2]; 
/*
  fprintf(stderr,"(eT 21 0) %.16g %.16g %.16g\n", eT_trformed[3][0], eT_trformed[3][1], eT_trformed[3][2]);
  fprintf(stderr,"(eT 21 1) %.16g %.16g %.16g\n", eT_trformed[4][0], eT_trformed[4][1], eT_trformed[4][2]);
  fprintf(stderr,"(eT 21 2) %.16g %.16g %.16g\n", eT_trformed[5][0], eT_trformed[5][1], eT_trformed[5][2]); 
*/
  break ;

  }   
  
  free_dmatrix(e, 0,N/2-1,0,N-1);
  free_dmatrix(eT, 0,N/2,0,N/2-1);
  free_dmatrix(eT_trformed, 0,N-1,0,N/2-1);
  free_dmatrix(T_T, 0,N-1,0,N-1);
  free_dmatrix(T_eps, 0,N/2-1,0,N/2-1);
  free_dmatrix(a, 0,N-1,0,N/2-1);
  free_dmatrix(y, 0,N-1,0,N-1);
  free_ivector(indx, 0,N-1);
  free_dvector(col, 0,N-1);

  V->Type = TENSOR; 

/* end of transformation */
  GetDP_End ;
}

#endif /* #if !defined(HAVE_GSL) */

#undef F_ARG
