/* $Id: Get_Geometry_detjac.c,v 1.2 2000-09-07 18:47:26 geuzaine Exp $ */
#include <stdio.h>
#include <math.h>

#include "Get_Geometry.h"
#include "BF_Function.h"
#include "Data_Numeric.h"
#include "Data_DefineE.h"

#include "Solver.h"
#include "Numeric.h"

static double DetJac_Min=1.e99, DetJac_Max=-1e99 ;
static int DetJac_Num = -1 ;

/* ------------------------------------------------------------------------ */
/*  G e t _ N o d e s C o o r d i n a t e s O f E l e m e n t               */
/* ------------------------------------------------------------------------ */

void  Get_NodesCoordinatesOfElement(struct Element * Element) {

  if (Element->NumLastElementForNodesCoordinates != Element->Num) {
    Element->NumLastElementForNodesCoordinates = Element->Num ;
    Geo_GetNodesCoordinates
      (Element->GeoElement->NbrNodes, Element->GeoElement->NumNodes,
       Element->x, Element->y, Element->z) ;
  }
}


/* ------------------------------------------------------------------------ */
/*  G e t _ G e o E l e m e n t                                             */
/* ------------------------------------------------------------------------ */

void  Get_GeoElement(struct Element * Element, double u, double v, double w) {
  int  i ;

  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    BF_Node    (Element, i+1, u, v, w, &(Element->n[i])) ;
    BF_GradNode(Element, i+1, u, v, w, Element->dndu[i]) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ J a c o b i a n F u n c t i o n                                 */
/* ------------------------------------------------------------------------ */

void  * Get_JacobianFunction (int Type_Jacobian, int Type_Element,
			      int * Type_Dimension) {

  switch (Type_Jacobian) {

  case JACOBIAN_VOL :

    switch (Type_Element) {

    case POINT       : 
      *Type_Dimension = _0D ; return (void *)JacobianVol0D ;

    case LINE        : case LINE_2 : 
      *Type_Dimension = _1D ; return (void *)JacobianVol1D ;      

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVol2D ;

    case TETRAHEDRON : case TETRAHEDRON_2 : 
    case HEXAHEDRON  : case HEXAHEDRON_2  :
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      *Type_Dimension = _3D ; return (void *)JacobianVol3D ;

    default : 
      Msg(ERROR, "Unknown JacobianVol for Element Type (%s)", 
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOLAXI :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVolAxi2D ;

    default : 
      Msg(ERROR, "Unknown JacobianVolAxi for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element)); 
    }
    
  case JACOBIAN_VOLAXISQU :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVolAxiSqu2D ;

    default : 
      Msg(ERROR, "Unknown JacobianVolAxiSqu for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOLSPHSHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVolSphShell2D ;

    case TETRAHEDRON : case TETRAHEDRON_2 :  
    case HEXAHEDRON  : case HEXAHEDRON_2  :  
    case PRISM       : case PRISM_2       : 
    case PYRAMID     : case PYRAMID_2     : 
      *Type_Dimension = _3D ; return (void *)JacobianVolSphShell3D ;

    default : 
      Msg(ERROR, "Unknown JacobianVolSphShell for Element Type (%s)", 
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOLAXISPHSHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVolAxiSphShell2D ;

    default : 
      Msg(ERROR, "Unknown JacobianVolAxiSphShell for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOLAXIPLPDX :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVolAxiPlpdX2D ;

    default : 
      Msg(ERROR, "Unknown JacobianVolAxiPlpdX for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOLAXISQUSPHSHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianVolAxiSquSphShell2D ;

    default : 
      Msg(ERROR, "Unknown JacobianVolAxiSquSphShell for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR :

    switch (Type_Element) {

    case POINT :
      *Type_Dimension = _1D ; return (void *)JacobianVol0D ;

    case LINE        : case LINE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianSur2D ;

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _3D ; return (void *)JacobianSur3D ;

    default : 
      Msg(ERROR, "Unknown JacobianSur for element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SURSPHSHELL :

    switch (Type_Element) {

    case LINE        : case LINE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianSurSphShell2D ;

    default : 
      Msg(ERROR, "Unknown JacobianSurSphShell for element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SURAXI :

    switch (Type_Element) {

    case LINE        : case LINE_2 : 
      *Type_Dimension = _2D ; return (void *)JacobianSurAxi2D ;

    default : 
      Msg(ERROR, "Unknown JacobianSurAxi for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_LIN :

    switch (Type_Element) {

    case POINT :
      *Type_Dimension = _2D ; return (void *)JacobianVol0D ;

    case LINE        : case LINE_2 :
      *Type_Dimension = _3D ; return (void *)JacobianLin3D ;

    default : 
      Msg(ERROR, "Unknown JacobianLin for Element Type (%s)",
	  Get_StringForDefine(Element_Type, Type_Element));
    }

  default :
    Msg(ERROR, "Unknown Jacobian"); return NULL ;
  }

}




/* ------------------------------------------------------------------------ */
/*  G e o m e t r i c a l   T r a n s f o r m a t i o n s                   */
/* ------------------------------------------------------------------------ */

double  SphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, A, B, R, theta, XR, YR, f ;
  double  DetJac ;

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  CoorX = CoorY = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    CoorX += Element->x[i] * Element->n[i] ;
    CoorY += Element->y[i] * Element->n[i] ;
  }

  A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;

  R = HYPOT(CoorX, CoorY) ;

  if ( (R > B) || (R < A) )
    Msg(ERROR, "Bad parameters for JacobianVolSphShell: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

  if (B == R) {
    Jac->c11  = 1. ; Jac->c22  = 1. ; return 1. ;
  }

  f  = (A*(B-A)) / (R*(B-R)) ;
  theta = (B-2.*R) / (B-R) ;
  XR = CoorX/R ; YR = CoorY/R ;

  Jac->c11  = f * (1.- XR*XR * theta) ;  Jac->c12  = - f * XR*YR * theta ;
  Jac->c21  = Jac->c12 ;                 Jac->c22  = f * (1.- YR*YR * theta) ;

  DetJac = f*f*( 1.-theta) ;

  return DetJac ;
}

double  SphShell3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, CoorZ, A, B, R, theta, XR, YR, ZR, f ;
  double  DetJac ;

  CoorX = CoorY = CoorZ = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    CoorX += Element->x[i] * Element->n[i] ;
    CoorY += Element->y[i] * Element->n[i] ;
    CoorZ += Element->z[i] * Element->n[i] ;
  }

  A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;

  R = sqrt( DSQU(CoorX) + DSQU(CoorY) + DSQU(CoorZ) ) ;

  if ( (R > B) || (R < A) )
    Msg(ERROR, "Bad parameters for JacobianVolSphShell"
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

  f  = (A*(B-A)) / (R*(B-R)) ;
  theta = - f * (B-2.*R) / (B-R) ;
  XR = CoorX/R ; YR = CoorY/R ; ZR = CoorZ/R ;

  Jac->c11  = f + DSQU(XR) * theta ;  Jac->c21  = XR*YR * theta ;
  Jac->c31  = XR*ZR * theta ;
  Jac->c12  = Jac->c21             ;  Jac->c22  = f + DSQU(YR) * theta ;
  Jac->c32  = YR*ZR * theta ;
  Jac->c13  = Jac->c31             ;  Jac->c23  = Jac->c32 ;
  Jac->c33  = f + DSQU(ZR) * theta ;

  DetJac = f * f / (B/R -1.) ;

  return DetJac ;
}

double  PlpdX2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, A, B, R, theta, f ;
  double  DetJac ;

  CoorX = CoorY = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    CoorX += Element->x[i] * Element->n[i] ;
    CoorY += Element->y[i] * Element->n[i] ;
  }

  A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;

  R = CoorX ;

  if ( (R > B) || (R < A) )
    Msg(ERROR, "Bad parameters for JacobianVolPlpdX: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

  if (B == R) {
    Jac->c11  = 1. ;  Jac->c12  = 0. ;
    Jac->c21  = 0. ;  Jac->c22  = 1. ;
    return 1. ;
  }

  f  = (A*(B-A)) / (R*(B-R)) ;
  theta = (B-2.*R) / (B-R) ;

  Jac->c11  = f * (1.- theta) ;  Jac->c12  = 0. ;
  Jac->c21  = 0. ;               Jac->c22  = 1. ;

  DetJac = f*( 1.-theta) ;

  return DetJac ;
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n V o l                                                   */
/* ------------------------------------------------------------------------ */

double  JacobianVol0D (struct Element * Element, MATRIX3x3 * Jac) {

  Jac->c11 = 1. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 1. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  return 1. ;
}

double  JacobianVol1D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 1. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
  }

  DetJac = Jac->c11 ;

  return DetJac ;
}

double  JacobianVol2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

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

  return DetJac ;
}

/* L'axe doit etre x=z=0 */

double  JacobianVolAxi2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  DetJac = JacobianVol2D(Element, Jac) ;

  Jac->c33 = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++)
    Jac->c33 += Element->x[i] * Element->n[i] ;

  return DetJac * Jac->c33 ;
}


/* L'axe doit etre x=z=0 */

double  JacobianVolAxiSqu2D (struct Element * Element, MATRIX3x3 * Jac) {
  int    i ;
  double s = 0., r, DetJac ;

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++)
    s += DSQU(Element->x[i]) * Element->n[i] ;


  /* !!!!!!!!! test */
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

  return DetJac ;
}

double  JacobianVolSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianVol2D (Element, &Jac1) ;
  DetJac2 = SphShell2D    (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  return DetJac1 * DetJac2 ;
}

double  JacobianVolAxiSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianVolAxi2D  (Element, &Jac1) ;
  DetJac2 = SphShell2D        (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  return DetJac1 * DetJac2 ;
}

double  JacobianVolAxiSquSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianVolAxiSqu2D(Element, &Jac1) ;
  DetJac2 = SphShell2D         (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  return DetJac1 * DetJac2 ;
}

double  JacobianVolPlpdX2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianVol2D (Element, &Jac1) ;
  DetJac2 = PlpdX2D       (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  return DetJac1 * DetJac2 ;
}

double  JacobianVolAxiPlpdX2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianVolAxi2D (Element, &Jac1) ;
  DetJac2 = PlpdX2D          (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  return DetJac1 * DetJac2 ;
}

double  JacobianVol3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

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

  if (DetJac < DetJac_Min) { DetJac_Min = DetJac ; DetJac_Num = Element->Num ; }
  DetJac_Max = MAX(DetJac, DetJac_Max) ;
  fprintf(stderr, "%.4g %.4g %d\n", DetJac_Min, DetJac_Max, DetJac_Num) ;

  return DetJac ;
}

double  JacobianVolSphShell3D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianVol3D (Element, &Jac1) ;
  DetJac2 = SphShell3D    (Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  return DetJac1 * DetJac2 ;
}


/* ------------------------------------------------------------------------ */
/*  J a c o b i a n S u r                                                   */
/* ------------------------------------------------------------------------ */

double  JacobianSur2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
  }

  DetJac = HYPOT(Jac->c11, Jac->c12) ;

  return DetJac ;
}

double  JacobianSurAxi2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  DetJac = JacobianSur2D(Element, Jac) ;

  Jac->c33 = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++)
    Jac->c33 += Element->x[i] * Element->n[i] ;

  return DetJac * Jac->c33 ;
}

double  JacobianSurSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  DetJac1 = JacobianSur2D (Element, &Jac1) ;
  DetJac2 = SphShell2D    (Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  return DetJac1 * DetJac2 ;
}

double  JacobianSur3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

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

  return DetJac ;
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n L i n                                                   */
/* ------------------------------------------------------------------------ */

double  JacobianLin3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double DetJac ;

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 0. ;

  for ( i = 0 ; i < Element->GeoElement->NbrNodes ; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0] ;
    Jac->c12 += Element->y[i] * Element->dndu[i][0] ;
    Jac->c13 += Element->z[i] * Element->dndu[i][0] ;
  }

  DetJac = sqrt(DSQU(Jac->c11)+DSQU(Jac->c12)+DSQU(Jac->c13)) ;

  return DetJac ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ I n v e r s e M a t r i x                                       */
/* ------------------------------------------------------------------------ */

void  Get_InverseSingularMatrix(MATRIX3x3 * Mat, MATRIX3x3 * InvMat) {
  double **m, **i;

  m = dmatrix(1,3,1,3);
  i = dmatrix(1,3,1,3);

  m[1][1] = Mat->c11 ; m[1][2] = Mat->c12 ; m[1][3] = Mat->c13 ;
  m[2][1] = Mat->c21 ; m[2][2] = Mat->c22 ; m[2][3] = Mat->c23 ;
  m[3][1] = Mat->c31 ; m[3][2] = Mat->c32 ; m[3][3] = Mat->c33 ;

  invert_singular_matrix(m,3,i);

  InvMat->c11 = i[1][1] ; InvMat->c12 = i[1][2] ; InvMat->c13 = i[1][3] ;
  InvMat->c21 = i[2][1] ; InvMat->c22 = i[2][2] ; InvMat->c23 = i[2][3] ;
  InvMat->c31 = i[3][1] ; InvMat->c32 = i[3][2] ; InvMat->c33 = i[3][3] ;  

  free_dmatrix(m,1,3,1,3);
  free_dmatrix(i,1,3,1,3);

  /*
    Info();
  */
}

void PrintMATRIX3x3(char *name, MATRIX3x3 Mat){
  printf("%s = \n", name);
  printf("[ %.8g %.8g %.8g   \n", Mat.c11, Mat.c12, Mat.c13);
  printf("  %.8g %.8g %.8g   \n", Mat.c21, Mat.c22, Mat.c23);
  printf("  %.8g %.8g %.8g ] \n\n", Mat.c31, Mat.c32, Mat.c33);
}  

void  Get_InverseMatrix(int Type_Dimension, int Type_Element, double DetMat,
			MATRIX3x3 * Mat, MATRIX3x3 * InvMat) {

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
      if(!DetMat) Msg(ERROR, "Null Determinant in 'Get_InverseMatrix'");
      InvMat->c11 =   Mat->c22 * Mat->c33 / DetMat ;
      InvMat->c21 = - Mat->c21 * Mat->c33 / DetMat ;
      InvMat->c12 = - Mat->c12 * Mat->c33 / DetMat ;
      InvMat->c22 =   Mat->c11 * Mat->c33 / DetMat ;
      InvMat->c13 = InvMat->c23 = InvMat->c31 = InvMat->c32 = 0. ;
      InvMat->c33 =   1. / Mat->c33 ;
      break ;

    case LINE :
      Get_InverseSingularMatrix(Mat, InvMat);

      /*
      double BB, CC, DD, BC;
      MATRIX3x3  tmp ;

      PrintMATRIX3x3("SVD: InvMat",*InvMat);
      Get_ProductMatrix(_3D, Mat, InvMat, &tmp);
      PrintMATRIX3x3("SVD: Mat*InvMat",tmp);
      Get_ProductMatrix(_3D, InvMat, Mat, &tmp);
      PrintMATRIX3x3("SVD: InvMat*Mat",tmp);

      DD = DSQU(DetMat) ;
      InvMat->c11 = Mat->c11 / DD ;
      InvMat->c21 = Mat->c12 / DD ;
      InvMat->c31 = InvMat->c12 = InvMat->c22 = 0. ;
      InvMat->c32 = InvMat->c13 = InvMat->c23 = 0. ;
      InvMat->c33 = 1. / Mat->c33 ;

      PrintMATRIX3x3("FRANCOIS: InvMat",*InvMat);
      Get_ProductMatrix(_3D, Mat, InvMat, &tmp);
      PrintMATRIX3x3("FRANCOIS: Mat*InvMat",tmp);
      Get_ProductMatrix(_3D, InvMat, Mat, &tmp);
      PrintMATRIX3x3("FRANCOIS: InvMat*Mat",tmp);
      */
      break;

    default : 
      Get_InverseSingularMatrix(Mat, InvMat);
      Msg(WARNING, "Anormal Singular Matrix Inversion... Sure?");
      break;

    }
    break;

  case _3D :

    switch(Type_Element){

    case TETRAHEDRON : case TETRAHEDRON_2 : 
    case HEXAHEDRON  : case HEXAHEDRON_2  : 
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      if(!DetMat) Msg(ERROR, "Null Determinant in 'Get_InverseMatrix'");
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

    case TRIANGLE : 

      Get_InverseSingularMatrix(Mat, InvMat);

      /*
      PrintMATRIX3x3("SVD: InvMat",*InvMat);
      Get_ProductMatrix(_3D, Mat, InvMat, &tmp);
      PrintMATRIX3x3("SVD: Mat*InvMat",tmp);
      Get_ProductMatrix(_3D, InvMat, Mat, &tmp);
      PrintMATRIX3x3("SVD: InvMat*Mat",tmp);

      InvMat->c11 = ( -Mat->c12*Mat->c21*Mat->c22 - Mat->c13*Mat->c21*Mat->c23 + 
		       Mat->c11*Mat->c22*Mat->c22 + Mat->c11*Mat->c23*Mat->c23 ) / DSQU(DetMat) ;
      InvMat->c21 = ( -Mat->c22*Mat->c11*Mat->c21 - Mat->c22*Mat->c13*Mat->c23 + 
		       Mat->c12*Mat->c21*Mat->c21 + Mat->c12*Mat->c23*Mat->c23 ) / DSQU(DetMat) ;
      InvMat->c31 = ( -Mat->c23*Mat->c11*Mat->c21 - Mat->c23*Mat->c12*Mat->c22 + 
		       Mat->c13*Mat->c21*Mat->c21 + Mat->c13*Mat->c22*Mat->c22 ) / DSQU(DetMat) ;

      InvMat->c12 = ( Mat->c21*Mat->c12*Mat->c12 + Mat->c21*Mat->c13*Mat->c13 - 
		      Mat->c11*Mat->c12*Mat->c22 - Mat->c11*Mat->c13*Mat->c23 ) / DSQU(DetMat) ;
      InvMat->c22 = ( Mat->c22*Mat->c11*Mat->c11 + Mat->c22*Mat->c13*Mat->c13 - 
		      Mat->c12*Mat->c11*Mat->c21 - Mat->c12*Mat->c13*Mat->c23 ) / DSQU(DetMat) ;
      InvMat->c32 = ( Mat->c23*Mat->c11*Mat->c11 + Mat->c23*Mat->c12*Mat->c12 - 
		      Mat->c13*Mat->c11*Mat->c21 - Mat->c13*Mat->c12*Mat->c22 ) / DSQU(DetMat) ;

      InvMat->c13 = InvMat->c23 = InvMat->c33 = 0.;
      
      PrintMATRIX3x3("FRANCOIS: InvMat",*InvMat);
      Get_ProductMatrix(_3D, Mat, InvMat, &tmp);
      PrintMATRIX3x3("FRANCOIS: Mat*InvMat",tmp);
      Get_ProductMatrix(_3D, InvMat, Mat, &tmp);
      PrintMATRIX3x3("FRANCOIS: InvMat*Mat",tmp);
      */
      break ;

    case LINE :
      Get_InverseSingularMatrix(Mat, InvMat);

      /* 
      DD = DSQU(DetMat) ;
      InvMat->c11 = Mat->c11 / DD ;
      InvMat->c21 = Mat->c12 / DD ;
      InvMat->c31 = Mat->c13 / DD ;
      InvMat->c12 = InvMat->c22 = InvMat->c32 = 0. ;
      InvMat->c13 = InvMat->c23 = InvMat->c33 = 0. ;
      */
      break;

    default :
      Get_InverseSingularMatrix(Mat, InvMat);
      break;

    }
    break;

  }

}


/* ------------------------------------------------------------------------ */
/*  G e t _ P r o d u c t M a t r i x                                       */
/* ------------------------------------------------------------------------ */

void  Get_ProductMatrix(int Type_Dimension,
			MATRIX3x3 * A, MATRIX3x3 * B, MATRIX3x3 * AB) {

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

}



/* ------------------------------------------------------------------------ */
/*   G e t _ C h a n g e O f C o o r d i n a t e s                          */
/* ------------------------------------------------------------------------ */


void *Get_ChangeOfCoordinates(int Flag_ChangeCoord, int Type_Form) {

  switch (Type_Form) {
    
  case SCALAR :
  case FORM0  :  
    return (void *)ChangeOfCoord_No1 ;

  case FORM1 :
    return (Flag_ChangeCoord)? (void *)ChangeOfCoord_Form1  : (void *)ChangeOfCoord_No123 ;

  case FORM2 :
    return (Flag_ChangeCoord)? (void *)ChangeOfCoord_Form2  : (void *)ChangeOfCoord_No123 ;
    
  case FORM3 :  case FORM3P :
    return (Flag_ChangeCoord)? (void *)ChangeOfCoord_Form3  : (void *)ChangeOfCoord_No1 ;
    
  case FORM1P :
    return (Flag_ChangeCoord)? (void *)ChangeOfCoord_Form1P : (void *)ChangeOfCoord_No123 ;

  case FORM2P :
    return (Flag_ChangeCoord)? (void *)ChangeOfCoord_Form2P : (void *)ChangeOfCoord_No123 ;
    
  case VECTOR :
    return (void *)ChangeOfCoord_No123 ;

  case FORM1S :
    return (Flag_ChangeCoord)? (void *)ChangeOfCoord_Form1S : (void *)ChangeOfCoord_No123 ;

  default :
    Msg(ERROR, "Unknown Type of Field (%s)",
	Get_StringForDefine(Field_Type, Type_Form)) ; return NULL ;
  }
}

/* ------------------------------------------------------------------------ */
/*   C h a n g e O f C o o r d _ X X X                                      */
/* ------------------------------------------------------------------------ */

void  ChangeOfCoord_No1(struct Element * Element,
			double vBFu[], double vBFx[]) {
  vBFx[0] = vBFu[0] ;
}

void  ChangeOfCoord_No123(struct Element * Element,
			  double vBFu[], double vBFx[]) {
  vBFx[0] = vBFu[0] ; vBFx[1] = vBFu[1] ; vBFx[2] = vBFu[2] ;
}

void  ChangeOfCoord_Form1(struct Element * Element,
			  double vBFu[], double vBFx[]) {
  vBFx[0] = vBFu[0] * Element->InvJac.c11 + vBFu[1] * Element->InvJac.c12
          + vBFu[2] * Element->InvJac.c13 ;
  vBFx[1] = vBFu[0] * Element->InvJac.c21 + vBFu[1] * Element->InvJac.c22
          + vBFu[2] * Element->InvJac.c23 ;
  vBFx[2] = vBFu[0] * Element->InvJac.c31 + vBFu[1] * Element->InvJac.c32
          + vBFu[2] * Element->InvJac.c33 ;
}

void  ChangeOfCoord_Form2(struct Element * Element,
			  double vBFu[], double vBFx[]) {

  if(!Element->DetJac) Msg(ERROR, "Null Determinant in 'ChangeOfCoord_Form2'");

  vBFx[0] = (vBFu[0] * Element->Jac.c11 + vBFu[1] * Element->Jac.c21
	     + vBFu[2] * Element->Jac.c31) / Element->DetJac ;
  vBFx[1] = (vBFu[0] * Element->Jac.c12 + vBFu[1] * Element->Jac.c22
	     + vBFu[2] * Element->Jac.c32) / Element->DetJac ;
  vBFx[2] = (vBFu[0] * Element->Jac.c13 + vBFu[1] * Element->Jac.c23
	     + vBFu[2] * Element->Jac.c33) / Element->DetJac ;
}

void  ChangeOfCoord_Form3(struct Element * Element,
			  double vBFu[], double vBFx[]) {

  if(!Element->DetJac) Msg(ERROR, "Null Determinant in 'ChangeOfCoord_Form3'");

  vBFx[0] = vBFu[0] / Element->DetJac ;
}


/* Form1P, 2P, 1S : valid in 2D only ! */

void  ChangeOfCoord_Form1P(struct Element * Element,
			   double vBFu[], double vBFx[]) {
  vBFx[0] = 0. ;  
  vBFx[1] = 0. ;
  vBFx[2] = vBFu[2] / Element->Jac.c33 ;  /* ... * Element->InvJac.c33 */
}

void  ChangeOfCoord_Form2P(struct Element * Element,
			   double vBFu[], double vBFx[]) {

  if(!Element->DetJac) Msg(ERROR, "Null Determinant in 'ChangeOfCoord_Form2P'");

  vBFx[0] = (vBFu[0] * Element->Jac.c11 + vBFu[1] * Element->Jac.c21)
    / Element->DetJac ;
  vBFx[1] = (vBFu[0] * Element->Jac.c12 + vBFu[1] * Element->Jac.c22)
    / Element->DetJac ;
  vBFx[2] = 0. ;
}


void  ChangeOfCoord_Form1S(struct Element * Element,
			   double vBFu[], double vBFx[]) {

  if(!Element->DetJac) Msg(ERROR, "Null Determinant in 'ChangeOfCoord_Form1S'");

  vBFx[0] = 0. ;  
  vBFx[1] = 0. ;
  vBFx[2] = vBFu[0] / Element->DetJac ;

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



