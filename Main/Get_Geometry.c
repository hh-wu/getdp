#define RCSID "$Id: Get_Geometry.c,v 1.35 2006-02-25 15:00:24 geuzaine Exp $"
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
 *
 * Contributor(s):
 *   Patrick Lefevre
 */

#if defined(HAVE_GSL)
#include <gsl/gsl_vector.h>
#include <gsl/gsl_linalg.h>
#else
#define NRANSI
#include "nrutil.h"
#endif

#include "GetDP.h"
#include "Get_Geometry.h"
#include "BF_Function.h"
#include "Numeric.h"
#include "Data_DefineE.h"

/* ------------------------------------------------------------------------ */
/*  G e t _ N o d e s C o o r d i n a t e s O f E l e m e n t               */
/* ------------------------------------------------------------------------ */

void  Get_NodesCoordinatesOfElement(struct Element * Element) {
  
  GetDP_Begin("Get_NodesCoordinatesOfElement");

  if (Element->NumLastElementForNodesCoordinates != Element->Num) {
    Element->NumLastElementForNodesCoordinates = Element->Num ;
    Geo_GetNodesCoordinates
      (Element->GeoElement->NbrNodes, Element->GeoElement->NumNodes,
       Element->x, Element->y, Element->z) ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ G e o E l e m e n t                                             */
/* ------------------------------------------------------------------------ */

void  Get_BFGeoElement(struct Element * Element, double u, double v, double w) {
  int  i ;

  GetDP_Begin("Get_BFGeoElement");

  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    BF_Node    (Element, i+1, u, v, w, &(Element->n[i])) ;
    BF_GradNode(Element, i+1, u, v, w, Element->dndu[i]) ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ J a c o b i a n F u n c t i o n                                 */
/* ------------------------------------------------------------------------ */

void  * Get_JacobianFunction (int Type_Jacobian, int Type_Element,
			      int * Type_Dimension) {

  GetDP_Begin("Get_JacobianFunction");

  switch (Type_Jacobian) {

  case JACOBIAN_VOL :

    switch (Type_Element) {

    case POINT       : 
      *Type_Dimension = _0D ; GetDP_Return((void *)JacobianVol0D) ;

    case LINE        : case LINE_2 : 
      *Type_Dimension = _1D ; GetDP_Return((void *)JacobianVol1D) ;

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVol2D) ;

    case TETRAHEDRON : case TETRAHEDRON_2 : 
    case HEXAHEDRON  : case HEXAHEDRON_2  :
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      *Type_Dimension = _3D ; GetDP_Return((void *)JacobianVol3D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian Vol for Element Type (%s)", 
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_SPH_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolSphShell2D) ;

    case TETRAHEDRON : case TETRAHEDRON_2 :  
    case HEXAHEDRON  : case HEXAHEDRON_2  :  
    case PRISM       : case PRISM_2       : 
    case PYRAMID     : case PYRAMID_2     : 
      *Type_Dimension = _3D ; GetDP_Return((void *)JacobianVolSphShell3D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolSphShell for Element Type (%s)", 
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_RECT_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolRectShell2D) ;

    case TETRAHEDRON : case TETRAHEDRON_2 :  
    case HEXAHEDRON  : case HEXAHEDRON_2  :  
    case PRISM       : case PRISM_2       : 
    case PYRAMID     : case PYRAMID_2     : 
      *Type_Dimension = _3D ; GetDP_Return((void *)JacobianVolRectShell3D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolRectShell for Element Type (%s)", 
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_PLPD_X :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolPlpdX2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolPlpdX for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxi2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxi for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element)); 
    }
    
  case JACOBIAN_VOL_AXI_SPH_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiSphShell2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiSphShell for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_RECT_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiRectShell2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiRectShell for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_PLPD_X :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiPlpdX2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiPlpdX for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }


  case JACOBIAN_VOL_AXI_SQU :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiSqu2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiSqu for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_SQU_SPH_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiSquSphShell2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiSquSphShell for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_SQU_RECT_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiSquRectShell2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiSquRectShell for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR :

    switch (Type_Element) {

    case POINT :
      *Type_Dimension = _1D ; GetDP_Return((void *)JacobianVol0D) ;

    case LINE        : case LINE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianSur2D) ;

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _3D ; GetDP_Return((void *)JacobianSur3D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian Sur for element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR_SPH_SHELL :

    switch (Type_Element) {

    case LINE        : case LINE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianSurSphShell2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian SurSphShell for element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR_AXI :

    switch (Type_Element) {

    case LINE        : case LINE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianSurAxi2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian SurAxi for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_LIN :

    switch (Type_Element) {

    case POINT :
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVol0D) ;

    case LINE        : case LINE_2 :
      *Type_Dimension = _3D ; GetDP_Return((void *)JacobianLin3D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian Lin for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  default :
    Msg(ERROR, "Unknown Jacobian"); GetDP_Return(NULL) ;
  }

}




/* ------------------------------------------------------------------------ */
/*  G e o m e t r i c a l   T r a n s f o r m a t i o n s                   */
/* ------------------------------------------------------------------------ */

double  PlpdX2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, A, B, R, theta, f ;
  double  DetJac ;

  GetDP_Begin("PlpdX2D");

  CoorX = CoorY = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    CoorX += Element->x[i] * Element->n[i] ;
    CoorY += Element->y[i] * Element->n[i] ;
  }

  A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;

  R = CoorX ;

  if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
    Msg(ERROR, "Bad parameters for unidirectional transformation Jacobian: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

  if (B == R) {
    Jac->c11  = 1. ;  Jac->c12  = 0. ;
    Jac->c21  = 0. ;  Jac->c22  = 1. ;
    GetDP_Return(1.) ;
  }

  f  = (A*(B-A)) / (R*(B-R)) ;
  theta = (B-2.*R) / (B-R) ;

  Jac->c11  = f * (1.- theta) ;  Jac->c12  = 0. ;
  Jac->c21  = 0. ;               Jac->c22  = 1. ;

  DetJac = f*( 1.-theta) ;

  GetDP_Return(DetJac) ;
}

double power(double x, double y) {
  if (y == 1.0) return (x);
  else if (y == 2.0) return (x*x);
  else if (y == 0.5) return (sqrt(x));
  else return (pow(x,y));
}

double  Transformation (int Dim, int Type, struct Element * Element, MATRIX3x3 * Jac) {
  int     i, Axis = 0 ;
  double  X = 0., Y = 0., Z = 0. ;
  double  p = 1., L= 0. ;
  double  Cx = 0., Cy = 0., Cz = 0., A = 0., B = 0., R = 0. ;
  double  theta, XR, YR, ZR, f, dRdx = 0., dRdy = 0., dRdz = 0. ;
  double  DetJac ;

  /*
    A          = interior radius
    B          = exterior radius
    Cx, Cy, Cz = coord of centre
    Axis       = direction of the transformation
    p          = exponant
    1/L        = f(B)
  */

  GetDP_Begin("Transformation");

  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    X += Element->x[i] * Element->n[i] ;
    Y += Element->y[i] * Element->n[i] ;
    Z += Element->z[i] * Element->n[i] ;
  }

  if(Element->JacobianCase->NbrParameters >= 2){
    A = Element->JacobianCase->Para[0] ;  
    B = Element->JacobianCase->Para[1] ;
  }
  else
    Msg(ERROR, "Missing interior and/or exterior radius for transformation Jacobian");

  if(Type == JACOBIAN_RECT){
    if(Element->JacobianCase->NbrParameters >= 3)
      Axis = (int)Element->JacobianCase->Para[2] ; 
    if(Element->JacobianCase->NbrParameters >= 6){
      Cx = Element->JacobianCase->Para[3] ;  
      Cy = Element->JacobianCase->Para[4] ; 
      Cz = Element->JacobianCase->Para[5] ;
    }
    if(Element->JacobianCase->NbrParameters >= 7)
      p = Element->JacobianCase->Para[6] ;
    if(Element->JacobianCase->NbrParameters >= 8)
      L = Element->JacobianCase->Para[7] ;
    if(Element->JacobianCase->NbrParameters >= 9){
      Msg(DIRECT, ERROR_STR "Too many parameters for rectangular transformation Jacobian");
      Msg(ERROR, "Valid parameters: Radius1 Radius2 Axis CenterX CenterY CenterZ Power 1/Infinity");
    }
  }
  else if(Type == JACOBIAN_SPH){
    if(Element->JacobianCase->NbrParameters >= 5){
      Cx = Element->JacobianCase->Para[2] ;  
      Cy = Element->JacobianCase->Para[3] ; 
      Cz = Element->JacobianCase->Para[4] ;
    }
    if(Element->JacobianCase->NbrParameters >= 6)
      p = Element->JacobianCase->Para[5] ;
    if(Element->JacobianCase->NbrParameters >= 7)
      L = Element->JacobianCase->Para[6] ;
    if(Element->JacobianCase->NbrParameters >= 8){
      Msg(DIRECT, ERROR_STR "Too many parameters for spherical transformation Jacobian");
      Msg(ERROR, "Valid parameters: Radius1 Radius2 CenterX CenterY CenterZ Power 1/Infinity");
    }
  }
  else
    Msg(ERROR, "Unknown type of transformation Jacobian");

  if(L) B = (B*B-A*A*L)/(B-A*L);

  if(Type == JACOBIAN_SPH){
    R    = sqrt( DSQU(X-Cx) + DSQU(Y-Cy) + DSQU(Z-Cz) ) ;
    dRdx = (X-Cx)/R ; 
    dRdy = (Y-Cy)/R ; 
    dRdz = (Z-Cz)/R ;
  }
  else{
    switch(Axis) {
    case 1: R = (X-Cx) ; dRdx =1.0 ; dRdy =0.0 ; dRdz =0.0 ; break;
    case 2: R = (Y-Cy) ; dRdx =0.0 ; dRdy =1.0 ; dRdz =0.0 ; break;
    case 3: R = (Z-Cz) ; dRdx =0.0 ; dRdy =0.0 ; dRdz =1.0 ; break;
    default: Msg(ERROR, "Bad axis specification: 1 for X, 2 for Y and 3 for Z");
    }
  }

  if ( (fabs(R) > fabs(B) + 1.e-12*fabs(B)) || 
       (fabs(R) < fabs(A) - 1.e-2*fabs(A)) )
    Msg(ERROR, "Bad parameters for transformation Jacobian: %g not in [%g,%g]", R, A, B) ;

  if (B == R) {
    Jac->c11 = 1. ; Jac->c12 = 0. ; Jac->c13 = 0. ;
    Jac->c21 = 0. ; Jac->c22 = 1. ; Jac->c23 = 0. ;
    Jac->c31 = 0. ; Jac->c32 = 0. ; Jac->c33 = 1. ;
    GetDP_Return(1.) ;
  }

  f     = power((A*(B-A))/(R*(B-R)), p) ;
  theta = p * (B-2.*R) / (B-R) ;
  XR    = (X-Cx)/R ;
  YR    = (Y-Cy)/R ;
  ZR    = (Z-Cz)/R ;

  Jac->c11  = f * (1.0 - theta * XR * dRdx) ; 
  Jac->c12  = f * (    - theta * XR * dRdy) ;
  Jac->c13  = f * (    - theta * XR * dRdz) ;
  Jac->c21  = f * (    - theta * YR * dRdx) ;
  Jac->c22  = f * (1.0 - theta * YR * dRdy) ;
  Jac->c23  = f * (    - theta * YR * dRdz) ;
  Jac->c31  = f * (    - theta * ZR * dRdx) ;
  Jac->c32  = f * (    - theta * ZR * dRdy) ;
  Jac->c33  = f * (1.0 - theta * ZR * dRdz) ;

  DetJac = f * f * (1.0 - theta) ;

  GetDP_Return(DetJac) ;

}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n V o l                                                   */
/* ------------------------------------------------------------------------ */

/* 0D */

double  JacobianVol0D (struct Element * Element, MATRIX3x3 * Jac) {
  
  GetDP_Begin("JacobianVol0D");

  Jac->c11 = 1. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 1. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(1.) ;
}

/* 1D */

double  JacobianVol1D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianVol1D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 1. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
  }

  DetJac = Jac->c11 ;

  GetDP_Return(DetJac) ;
}

/* 2D */

double  JacobianVol2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianVol2D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c21 += Element->x[i] * Element->dndu[i][1] ;
    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
    Jac->c22 += Element->y[i] * Element->dndu[i][1] ;
  }

  DetJac = Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21 ;

  GetDP_Return(DetJac) ;
}

double  JacobianVolSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolSphShell2D");

  DetJac1 = JacobianVol2D (Element, &Jac1) ;
  DetJac2 = Transformation(_2D, JACOBIAN_SPH, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolRectShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolRectShell2D");

  DetJac1 = JacobianVol2D (Element, &Jac1) ;
  DetJac2 = Transformation (_2D, JACOBIAN_RECT, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolPlpdX2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolPlpdX2D");

  DetJac1 = JacobianVol2D (Element, &Jac1) ;
  DetJac2 = PlpdX2D       (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

/* 2D Axi (Attention, l'axe doit etre x=z=0) */

double  JacobianVolAxi2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double s = 0., DetJac ;

  GetDP_Begin("JacobianVolAxi2D");

  DetJac = JacobianVol2D(Element, Jac) ;

  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++)
    s += Element->x[i] * Element->n[i] ;

  /* Warning! For evaluations on the symmetry axis */
  if (s==0.0) {
    for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) 
      s += Element->x[i] ;
    s /= (double)Element->GeoElement->NbrNodes  ;
  }

  Jac->c33 = s ;

  GetDP_Return(DetJac * Jac->c33) ;
}

double  JacobianVolAxiSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiSphShell2D");

  DetJac1 = JacobianVolAxi2D  (Element, &Jac1) ;
  DetJac2 = Transformation    (_2D, JACOBIAN_SPH, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolAxiRectShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiRectShell2D");

  DetJac1 = JacobianVolAxi2D  (Element, &Jac1) ;
  DetJac2 = Transformation    (_2D, JACOBIAN_RECT, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolAxiPlpdX2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiPlpdX2D");

  DetJac1 = JacobianVolAxi2D (Element, &Jac1) ;
  DetJac2 = PlpdX2D          (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

/* 2D Axi avec transformation quadratique (Attention, l'axe doit etre x=z=0) */

double  JacobianVolAxiSqu2D (struct Element * Element, MATRIX3x3 * Jac) {
  int    i ;
  double s = 0., r, DetJac ;

  GetDP_Begin("JacobianVolAxiSqu2D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++)
    s += DSQU(Element->x[i]) * Element->n[i] ;


  /* Warning! For evaluations on the symmetry axis */
  if (s==0.0) {
    for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) 
      s += Element->x[i] * Element->x[i] ;
    s /= (double)Element->GeoElement->NbrNodes  ;
  }

  r = sqrt(s);

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += 0.5/r * DSQU(Element->x[i]) * Element->dndu[i][0] ;
    Jac->c21 += 0.5/r * DSQU(Element->x[i]) * Element->dndu[i][1] ;
    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
    Jac->c22 += Element->y[i] * Element->dndu[i][1] ;
  }
  Jac->c33 = r ;

  DetJac = (Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21) * Jac->c33 ;

  GetDP_Return(DetJac) ;
}

double  JacobianVolAxiSquSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiSquSphShell2D");

  DetJac1 = JacobianVolAxiSqu2D(Element, &Jac1) ;
  DetJac2 = Transformation     (_2D, JACOBIAN_SPH, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolAxiSquRectShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiSquRectShell2D");

  DetJac1 = JacobianVolAxiSqu2D(Element, &Jac1) ;
  DetJac2 = Transformation     (_2D, JACOBIAN_RECT, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

/* 3D */

double  JacobianVol3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianVol3D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 0. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c21 += Element->x[i] * Element->dndu[i][1] ;
    Jac->c31 += Element->x[i] * Element->dndu[i][2] ;

    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
    Jac->c22 += Element->y[i] * Element->dndu[i][1] ;
    Jac->c32 += Element->y[i] * Element->dndu[i][2] ;

    Jac->c13 += Element->z[i] * Element->dndu[i][0] ;
    Jac->c23 += Element->z[i] * Element->dndu[i][1] ;
    Jac->c33 += Element->z[i] * Element->dndu[i][2] ;
  }

  DetJac = Jac->c11 * Jac->c22 * Jac->c33 + Jac->c13 * Jac->c21 * Jac->c32
         + Jac->c12 * Jac->c23 * Jac->c31 - Jac->c13 * Jac->c22 * Jac->c31
         - Jac->c11 * Jac->c23 * Jac->c32 - Jac->c12 * Jac->c21 * Jac->c33 ;

  GetDP_Return(DetJac) ;
}

double  JacobianVolSphShell3D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolShell3D");

  DetJac1 = JacobianVol3D (Element, &Jac1) ;
  DetJac2 = Transformation(_3D, JACOBIAN_SPH, Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolRectShell3D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolRectShell3D");

  DetJac1 = JacobianVol3D (Element, &Jac1) ;
  DetJac2 = Transformation (_3D, JACOBIAN_RECT, Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n S u r                                                   */
/* ------------------------------------------------------------------------ */

double  JacobianSur2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianSur2D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
  }

  DetJac = HYPOT(Jac->c11, Jac->c12) ;

  GetDP_Return(DetJac) ;
}

double  JacobianSurSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianSurSphShell2D");

  DetJac1 = JacobianSur2D (Element, &Jac1) ;
  DetJac2 = Transformation(_2D, JACOBIAN_SPH, Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianSurRectShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianSurRectShell2D");

  DetJac1 = JacobianSur2D (Element, &Jac1) ;
  DetJac2 = Transformation(_2D, JACOBIAN_RECT, Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianSurAxi2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianSurAxi2D");

  DetJac = JacobianSur2D(Element, Jac) ;

  Jac->c33 = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++)
    Jac->c33 += Element->x[i] * Element->n[i] ;

  GetDP_Return(DetJac * Jac->c33) ;
}

double  JacobianSur3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianSur3D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 0. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c21 += Element->x[i] * Element->dndu[i][1] ;

    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
    Jac->c22 += Element->y[i] * Element->dndu[i][1] ;

    Jac->c13 += Element->z[i] * Element->dndu[i][0] ;
    Jac->c23 += Element->z[i] * Element->dndu[i][1] ;
  }

  DetJac = sqrt( DSQU(Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21)
		 + DSQU(Jac->c13 * Jac->c21 - Jac->c11 * Jac->c23)
		 + DSQU(Jac->c12 * Jac->c23 - Jac->c13 * Jac->c22) ) ;

  GetDP_Return(DetJac) ;
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n L i n                                                   */
/* ------------------------------------------------------------------------ */

double  JacobianLin3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  GetDP_Begin("JacobianLin3D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 0. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
    Jac->c13 += Element->z[i] * Element->dndu[i][0] ;
  }

  DetJac = sqrt(DSQU(Jac->c11)+DSQU(Jac->c12)+DSQU(Jac->c13)) ;

  GetDP_Return(DetJac) ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ I n v e r s e M a t r i x                                       */
/* ------------------------------------------------------------------------ */

void  Get_InverseSingularMatrix(MATRIX3x3 * Mat, MATRIX3x3 * InvMat) {
  double T[3][3] = {{0.,0.,0.},{0.,0.,0.},{0.,0.,0.}};
  int i, j, k;
#if defined(HAVE_GSL)
  gsl_matrix *M, *V;
  gsl_vector *W, *TMPVEC;
  double ww;
#else
  double **M, **V, *W;
#endif

  GetDP_Begin("Get_InverseSingularMatrix");

  InvMat->c11 = InvMat->c12 = InvMat->c13 = 0.0;
  InvMat->c21 = InvMat->c22 = InvMat->c23 = 0.0;
  InvMat->c31 = InvMat->c32 = InvMat->c33 = 0.0;

#if defined(HAVE_GSL)
  M = gsl_matrix_alloc(3, 3);
  V = gsl_matrix_alloc(3, 3);
  W = gsl_vector_alloc(3);
  TMPVEC = gsl_vector_alloc(3);

  gsl_matrix_set(M, 0, 0, Mat->c11);
  gsl_matrix_set(M, 0, 1, Mat->c12);
  gsl_matrix_set(M, 0, 2, Mat->c13);
  gsl_matrix_set(M, 1, 0, Mat->c21);
  gsl_matrix_set(M, 1, 1, Mat->c22);
  gsl_matrix_set(M, 1, 2, Mat->c23);
  gsl_matrix_set(M, 2, 0, Mat->c31);
  gsl_matrix_set(M, 2, 1, Mat->c32);
  gsl_matrix_set(M, 2, 2, Mat->c33);

  gsl_linalg_SV_decomp(M, V, W, TMPVEC);
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      ww = gsl_vector_get(W, i);
      if(fabs(ww) > 1.e-16) {   /* singular value precision */
        T[i][j] += gsl_matrix_get(M, j, i) / ww;
      }
    }
  }
  for(k=0 ; k<3 ; k++){
    InvMat->c11 += gsl_matrix_get(V, 0, k) * T[k][0] ;
    InvMat->c12 += gsl_matrix_get(V, 0, k) * T[k][1] ;
    InvMat->c13 += gsl_matrix_get(V, 0, k) * T[k][2] ;
    InvMat->c21 += gsl_matrix_get(V, 1, k) * T[k][0] ;
    InvMat->c22 += gsl_matrix_get(V, 1, k) * T[k][1] ;
    InvMat->c23 += gsl_matrix_get(V, 1, k) * T[k][2] ;
    InvMat->c31 += gsl_matrix_get(V, 2, k) * T[k][0] ;
    InvMat->c32 += gsl_matrix_get(V, 2, k) * T[k][1] ;
    InvMat->c33 += gsl_matrix_get(V, 2, k) * T[k][2] ;
  }
  gsl_matrix_free(M);
  gsl_matrix_free(V);
  gsl_vector_free(W);
  gsl_vector_free(TMPVEC);
#else
  M = dmatrix(1,3,1,3);
  V = dmatrix(1,3,1,3);
  W = dvector(1,3);

  M[1][1] = Mat->c11 ; M[1][2] = Mat->c12 ; M[1][3] = Mat->c13 ;
  M[2][1] = Mat->c21 ; M[2][2] = Mat->c22 ; M[2][3] = Mat->c23 ;
  M[3][1] = Mat->c31 ; M[3][2] = Mat->c32 ; M[3][3] = Mat->c33 ;

  dsvdcmp(M, 3, 3, W, V);

  /* cf. Numerical Recipes in C, p. 62 */

  for(i=1 ; i<=3 ; i++)
    for(j=1 ; j<=3 ; j++)
      if(fabs(W[i]) > 1.e-16) /* precision */
	T[i-1][j-1] += M[j][i] / W[i] ;
  
  for(k=1 ; k<=3 ; k++){
    InvMat->c11 += V[1][k] * T[k-1][0] ;
    InvMat->c12 += V[1][k] * T[k-1][1] ;
    InvMat->c13 += V[1][k] * T[k-1][2] ;
    InvMat->c21 += V[2][k] * T[k-1][0] ;
    InvMat->c22 += V[2][k] * T[k-1][1] ;
    InvMat->c23 += V[2][k] * T[k-1][2] ;
    InvMat->c31 += V[3][k] * T[k-1][0] ;
    InvMat->c32 += V[3][k] * T[k-1][1] ;
    InvMat->c33 += V[3][k] * T[k-1][2] ;
  }

  free_dmatrix(M,1,3,1,3);
  free_dmatrix(V,1,3,1,3);
  free_dvector(W,1,3);
#endif

  GetDP_End ;
}

void  Get_InverseMatrix(int Type_Dimension, int Type_Element, double DetMat,
			MATRIX3x3 * Mat, MATRIX3x3 * InvMat) {

  GetDP_Begin("Get_InverseMatrix");

  switch (Type_Dimension) {

  case _0D :
    InvMat->c11 = InvMat->c22 = InvMat->c33 = 1. ;
    InvMat->c12 = InvMat->c21 = 0. ;
    InvMat->c13 = InvMat->c31 = 0. ;
    InvMat->c23 = InvMat->c32 = 0. ;
    break ;

  case _1D :
    InvMat->c11 = 1. / Mat->c11 ;
    InvMat->c22 = 1. / Mat->c22 ;
    InvMat->c33 = 1. / Mat->c33 ;
    InvMat->c12 = InvMat->c21 = 0. ;
    InvMat->c13 = InvMat->c31 = 0. ;
    InvMat->c23 = InvMat->c32 = 0. ;
    break ;

  case _2D :
    
    switch(Type_Element){

    case TRIANGLE   : case TRIANGLE_2   : 
    case QUADRANGLE : case QUADRANGLE_2 :
      if(!DetMat) Msg(ERROR, "Null determinant in 'Get_InverseMatrix'");
      InvMat->c11 =   Mat->c22 * Mat->c33 / DetMat ;
      InvMat->c21 = - Mat->c21 * Mat->c33 / DetMat ;
      InvMat->c12 = - Mat->c12 * Mat->c33 / DetMat ;
      InvMat->c22 =   Mat->c11 * Mat->c33 / DetMat ;
      InvMat->c13 = InvMat->c23 = InvMat->c31 = InvMat->c32 = 0. ;
      InvMat->c33 =   1. / Mat->c33 ;
      break ;

    default : 
      Get_InverseSingularMatrix(Mat, InvMat);
      break;

    }
    break;

  case _3D :

    switch(Type_Element){

    case TETRAHEDRON : case TETRAHEDRON_2 : 
    case HEXAHEDRON  : case HEXAHEDRON_2  : 
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      if(!DetMat) Msg(ERROR, "Null determinant in 'Get_InverseMatrix'");
      InvMat->c11 =  ( Mat->c22 * Mat->c33 - Mat->c23 * Mat->c32 ) / DetMat ;
      InvMat->c21 = -( Mat->c21 * Mat->c33 - Mat->c23 * Mat->c31 ) / DetMat ;
      InvMat->c31 =  ( Mat->c21 * Mat->c32 - Mat->c22 * Mat->c31 ) / DetMat ;
      InvMat->c12 = -( Mat->c12 * Mat->c33 - Mat->c13 * Mat->c32 ) / DetMat ;
      InvMat->c22 =  ( Mat->c11 * Mat->c33 - Mat->c13 * Mat->c31 ) / DetMat ;
      InvMat->c32 = -( Mat->c11 * Mat->c32 - Mat->c12 * Mat->c31 ) / DetMat ;
      InvMat->c13 =  ( Mat->c12 * Mat->c23 - Mat->c13 * Mat->c22 ) / DetMat ;
      InvMat->c23 = -( Mat->c11 * Mat->c23 - Mat->c13 * Mat->c21 ) / DetMat ;
      InvMat->c33 =  ( Mat->c11 * Mat->c22 - Mat->c12 * Mat->c21 ) / DetMat ;
      break;

    default :
      Get_InverseSingularMatrix(Mat, InvMat);
      break;

    }
    break;

  default :
    Msg(ERROR, "Wrong dimension in 'Get_InverseMatrix'");
    break ;

  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ P r o d u c t M a t r i x                                       */
/* ------------------------------------------------------------------------ */

void  Get_ProductMatrix(int Type_Dimension,
			MATRIX3x3 * A, MATRIX3x3 * B, MATRIX3x3 * AB) {

  GetDP_Begin("Get_ProductMatrix");

  switch (Type_Dimension) {

  case _2D :
    AB->c11 = A->c11 * B->c11 + A->c12 * B->c21 ;
    AB->c12 = A->c11 * B->c12 + A->c12 * B->c22 ;
    AB->c21 = A->c21 * B->c11 + A->c22 * B->c21 ;
    AB->c22 = A->c21 * B->c12 + A->c22 * B->c22 ;
    break ;

  case _3D :
    AB->c11 = A->c11 * B->c11 + A->c12 * B->c21 + A->c13 * B->c31 ;
    AB->c12 = A->c11 * B->c12 + A->c12 * B->c22 + A->c13 * B->c32 ;
    AB->c13 = A->c11 * B->c13 + A->c12 * B->c23 + A->c13 * B->c33 ;
    AB->c21 = A->c21 * B->c11 + A->c22 * B->c21 + A->c23 * B->c31 ;
    AB->c22 = A->c21 * B->c12 + A->c22 * B->c22 + A->c23 * B->c32 ;
    AB->c23 = A->c21 * B->c13 + A->c22 * B->c23 + A->c23 * B->c33 ;
    AB->c31 = A->c31 * B->c11 + A->c32 * B->c21 + A->c33 * B->c31 ;
    AB->c32 = A->c31 * B->c12 + A->c32 * B->c22 + A->c33 * B->c32 ;
    AB->c33 = A->c31 * B->c13 + A->c32 * B->c23 + A->c33 * B->c33 ;
    break ;

  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*   G e t _ C h a n g e O f C o o r d i n a t e s                          */
/* ------------------------------------------------------------------------ */


void *Get_ChangeOfCoordinates(int Flag_ChangeCoord, int Type_Form) {

  GetDP_Begin("Get_ChangeOfCoordinates");

  switch (Type_Form) {
    
  case SCALAR :
  case FORM0  :  
    GetDP_Return((void *)ChangeOfCoord_No1) ;

  case FORM1 :
    GetDP_Return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form1  :
		 (void *)ChangeOfCoord_No123) ;

  case FORM2 :
    GetDP_Return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form2 :
		 (void *)ChangeOfCoord_No123) ;
    
  case FORM3 :  case FORM3P :
    GetDP_Return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form3 :
		 (void *)ChangeOfCoord_No1) ;
    
  case FORM1P :
    GetDP_Return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form1P :
		 (void *)ChangeOfCoord_No123) ;

  case FORM2P :
    GetDP_Return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form2P :
		 (void *)ChangeOfCoord_No123) ;
    
  case VECTOR :
    GetDP_Return((void *)ChangeOfCoord_No123) ;

  case FORM1S :
    GetDP_Return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form1S :
		 (void *)ChangeOfCoord_No123) ;

  default :
    Msg(ERROR, "Unknown type of field (%s)",
	Get_StringForDefine(Field_Type, Type_Form)) ; 
    GetDP_Return(NULL) ;
  }
}

/* ------------------------------------------------------------------------ */
/*   C h a n g e O f C o o r d _ X X X                                      */
/* ------------------------------------------------------------------------ */

void  ChangeOfCoord_No1(struct Element * Element,
			double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_No1");

  vBFx[0] = vBFu[0] ;

  GetDP_End ;
}

void  ChangeOfCoord_No123(struct Element * Element,
			  double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_No123");

  vBFx[0] = vBFu[0] ; vBFx[1] = vBFu[1] ; vBFx[2] = vBFu[2] ;

  GetDP_End ;
}

void  ChangeOfCoord_Form1(struct Element * Element,
			  double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_Form1");

  vBFx[0] = vBFu[0] * Element->InvJac.c11 + vBFu[1] * Element->InvJac.c12
          + vBFu[2] * Element->InvJac.c13 ;
  vBFx[1] = vBFu[0] * Element->InvJac.c21 + vBFu[1] * Element->InvJac.c22
          + vBFu[2] * Element->InvJac.c23 ;
  vBFx[2] = vBFu[0] * Element->InvJac.c31 + vBFu[1] * Element->InvJac.c32
          + vBFu[2] * Element->InvJac.c33 ;

  GetDP_End ;
}

void  ChangeOfCoord_Form2(struct Element * Element,
			  double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_Form2");

  if(!Element->DetJac) Msg(ERROR, "Null determinant in 'ChangeOfCoord_Form2'");

  vBFx[0] = (vBFu[0] * Element->Jac.c11 + vBFu[1] * Element->Jac.c21
	     + vBFu[2] * Element->Jac.c31) / Element->DetJac ;
  vBFx[1] = (vBFu[0] * Element->Jac.c12 + vBFu[1] * Element->Jac.c22
	     + vBFu[2] * Element->Jac.c32) / Element->DetJac ;
  vBFx[2] = (vBFu[0] * Element->Jac.c13 + vBFu[1] * Element->Jac.c23
	     + vBFu[2] * Element->Jac.c33) / Element->DetJac ;

  GetDP_End ;
}

void  ChangeOfCoord_Form3(struct Element * Element,
			  double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_Form3");

  if(!Element->DetJac) Msg(ERROR, "Null determinant in 'ChangeOfCoord_Form3'");

  vBFx[0] = vBFu[0] / Element->DetJac ;

  GetDP_End ;
}


/* Form1P, 2P, 1S : valid in 2D only ! */

void  ChangeOfCoord_Form1P(struct Element * Element,
			   double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_Form1P");

  vBFx[0] = 0. ;  
  vBFx[1] = 0. ;
  vBFx[2] = vBFu[2] / Element->Jac.c33 ;  /* ... * Element->InvJac.c33 */

  GetDP_End ;
}

void  ChangeOfCoord_Form2P(struct Element * Element,
			   double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_Form2P");

  if(!Element->DetJac) Msg(ERROR, "Null determinant in 'ChangeOfCoord_Form2P'");

  vBFx[0] = (vBFu[0] * Element->Jac.c11 + vBFu[1] * Element->Jac.c21)
    / Element->DetJac ;
  vBFx[1] = (vBFu[0] * Element->Jac.c12 + vBFu[1] * Element->Jac.c22)
    / Element->DetJac ;
  vBFx[2] = 0. ;

  GetDP_End ;
}


void  ChangeOfCoord_Form1S(struct Element * Element,
			   double vBFu[], double vBFx[]) {

  GetDP_Begin("ChangeOfCoord_Form1S");

  if(!Element->DetJac) Msg(ERROR, "Null determinant in 'ChangeOfCoord_Form1S'");

  vBFx[0] = 0. ;  
  vBFx[1] = 0. ;
  vBFx[2] = vBFu[0] / Element->DetJac ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*   C a l _ P r o d u c t X X X                                            */
/* ------------------------------------------------------------------------ */

double  Cal_Product123(double v1[], double v2[]) {
  return  v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2] ;
}

double  Cal_Product12 (double v1[], double v2[]) {
  return  v1[0]*v2[0] + v1[1]*v2[1] ;
}

double  Cal_Product3  (double v1[], double v2[]) {
  return  v1[2]*v2[2] ;
}

double  Cal_Product1  (double v1[], double v2[]) {
  return  v1[0]*v2[0] ;
}

