#define RCSID "$Id: Get_Geometry.c,v 1.13 2001-03-13 13:04:44 lefevre Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Get_Geometry.h"
#include "BF_Function.h"
#include "Data_Numeric.h"
#include "Data_DefineE.h"

#include "Solver.h"
#include "Numeric.h"

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

void  Get_GeoElement(struct Element * Element, double u, double v, double w) {
  int  i ;

  GetDP_Begin("Get_GeoElement");

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

  case JACOBIAN_VOL_AXI :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxi2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxi for Element Type (%s)",
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

  case JACOBIAN_VOL_SPH_FINITE_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolSphFiniteShell2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolSphShell for Element Type (%s)", 
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

  case JACOBIAN_VOL_AXI_PLPD_X :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :  
    case QUADRANGLE  : case QUADRANGLE_2 : 
      *Type_Dimension = _2D ; GetDP_Return((void *)JacobianVolAxiPlpdX2D) ;

    default : 
      Msg(ERROR, "Unknown Jacobian VolAxiPlpdX for Element Type (%s)",
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

double  SphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, A, B, R, theta, XR, YR, f ;
  double  DetJac ;

  GetDP_Begin("SphShell2D");

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

  if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
    Msg(ERROR, "Bad parameters for Jacobian VolSphShell: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

  if (B == R) {
    Jac->c11  = 1. ; Jac->c22  = 1. ; GetDP_Return(1.) ;
  }

  f  = (A*(B-A)) / (R*(B-R)) ;
  theta = (B-2.*R) / (B-R) ;
  XR = CoorX/R ; YR = CoorY/R ;

  Jac->c11  = f * (1.- XR*XR * theta) ;  Jac->c12  = - f * XR*YR * theta ;
  Jac->c21  = Jac->c12 ;                 Jac->c22  = f * (1.- YR*YR * theta) ;

  DetJac = f*f*( 1.-theta) ;

  GetDP_Return(DetJac) ;
}

double  SphFiniteShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, A, B, C, R, thetax,thetay,thetaxy, f;
  double  fac, fac1, fac2, term1, term2;
  double  DetJac ;

  GetDP_Begin("SphFiniteShell2D");

  Jac->c11 = 0. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 0. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  CoorX = CoorY = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    CoorX += Element->x[i] * Element->n[i] ;
    CoorY += Element->y[i] * Element->n[i] ;
  }

  A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;
  C = Element->JacobianCase->Para[2] ;

  R = HYPOT(CoorX, CoorY) ;

  if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
    Msg(ERROR, "Bad parameters for Jacobian VolSphShell: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

  if (B == R) {
    Jac->c11  = 1. ; Jac->c22  = 1. ; GetDP_Return(1.) ;
  }

  fac     = A*(A - B);
  fac1    = fac*C;
  term1   = fac*R;
  term2   = R*(CoorX*CoorX - CoorY*CoorY);
  fac2    = - A*A + A*B + (C-1)*(B - R)*R;
  f       = 1./(R*fac2*fac2);

  thetax  = fac1*(term1 - (C-1)*(B*CoorY*CoorY + term2));
  thetay  = fac1*(term1 - (C-1)*(B*CoorX*CoorX - term2));
  thetaxy = fac1*(C-1)*(B - 2*R)*CoorX*CoorY;
  
  Jac->c11  = f * thetax  ;    Jac->c12  = f * thetaxy  ;
  Jac->c21  = Jac->c12 ;       Jac->c22  = f * thetay  ;

 /* DetJac = (pow(A,2)*pow(A - B,2)* pow(C,2)* (pow(A,2) - A*B - 
           (-1 + C)*pow(R,2))*(pow(A,2)*R - A*B*R + 
           (-1 + C)*(pow(R,3) - B*(pow(CoorX,2) + pow(CoorY,2)))))*R*f*f;
 */
  DetJac = (thetax * thetay - thetaxy * thetaxy) * f * f;

  GetDP_Return(DetJac) ;
}


double  SphShell3D (struct Element * Element, MATRIX3x3 * Jac) {
  int  i ;
  double  CoorX, CoorY, CoorZ, A, B, R, theta, XR, YR, ZR, f ;
  double  DetJac ;

  GetDP_Begin("SphShell3D");

  CoorX = CoorY = CoorZ = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    CoorX += Element->x[i] * Element->n[i] ;
    CoorY += Element->y[i] * Element->n[i] ;
    CoorZ += Element->z[i] * Element->n[i] ;
  }

  A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;

  R = sqrt( DSQU(CoorX) + DSQU(CoorY) + DSQU(CoorZ) ) ;

  if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
    Msg(ERROR, "Bad parameters for Jacobian VolSphShell: "
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

  GetDP_Return(DetJac) ;
}

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
    Msg(ERROR, "Bad parameters for Jacobian VolPlpdX: "
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

/* La transformation en coque : essai de programmation generale  3d */
/*pour les transfo spherique et parallelipedique                    */
/*  Transformation                                                  */

double puissance(double x, double y) {
  if ( y == 2.0 ) return (x*x);
  if ( y == 1.0 ) return (x);
  if ( y == 0.5 ) return (sqrt(x));
  return (pow(x,y));
}

double  Transformation (int Dim, int Type, struct Element * Element, MATRIX3x3 * Jac) {
  int     i,Linearite,direc ;
  double  X,Y,Z;
  double  p=1.0,L=0.0;
  double  Cx=0.0,Cy=0.0,Cz=0.0, A, B, R, theta, XR, YR, ZR, f, dRdx, dRdy, dRdz ;
  double  DetJac ;

/*
A    = rayon interieur
B    = rayon exterieur  
Cx   = Coord x du centre
Cy   = Coord y du centre
Cz   = Coord z du centre
direc= direction of the transformation
p    = exposant
1/L  = f(B)
*/
  GetDP_Begin("Transformation");

  X = Y = Z = 0. ;
  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
    X += Element->x[i] * Element->n[i] ;
    Y += Element->y[i] * Element->n[i] ;
    Z += Element->z[i] * Element->n[i] ;
  }

      A = Element->JacobianCase->Para[0] ;  B = Element->JacobianCase->Para[1] ;
  direc = Element->JacobianCase->Para[2] ; Cx = Element->JacobianCase->Para[3] ;  
     Cy = Element->JacobianCase->Para[4] ; Cz = Element->JacobianCase->Para[5] ;
/*      p = Element->JacobianCase->Para[5] ;  L = Element->JacobianCase->Para[7] ;*/
     Linearite = 3.0 ;     

  switch(Linearite) {
  case 1:
    R = sqrt( DSQU(X-Cx) + DSQU(Y-Cy) + DSQU(Z-Cz) ) ;

    if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
      Msg(ERROR, "Bad parameters for Jacobian VolSphShell: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

    dRdx = (X-Cx)/R ; dRdy = (Y-Cy)/R ; dRdz = (Z-Cz)/R ;
    f  = (A*(B-A)) / (R*(B-R)) ;
    p  = 1.0 ;
    break ;

  case 2:
    R = sqrt( DSQU(X-Cx) + DSQU(Y-Cy) + DSQU(Z-Cz) ) ;
    B = (B*B-A*A*L)/(B-A*L);

    if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
      Msg(ERROR, "Bad parameters for Jacobian VolSphShell: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;

    dRdx = (X-Cx)/R ; dRdy = (Y-Cy)/R ; dRdz = (Z-Cz)/R ;
    f  = puissance ( (A*(B-A)) / (R*(B-R)),p) ;
    break ; 

  case 3:
    switch(direc) {
    case 1:
      R = X-Cx ; dRdx =1.0 ; dRdy =0.0 ;  dRdz =0.0 ;
      break;

    case 2:
      R = Y-Cy ; dRdx =0.0 ; dRdy =1.0 ;  dRdz =0.0 ;
      break;

    case 3:
      R = Z-Cz ; dRdx =0.0 ; dRdy =0.0 ;  dRdz =1.0 ; 
      break;
    }
    if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
      Msg(ERROR, "Bad parameters for Jacobian VolSphShell: "
	       "Rint=%g, Rext=%g, R=%g", A, B, R) ;
    
    f  = (A*(B-A)) / (R*(B-R)) ;
    p  = 1.0 ;
    break ; 

  case 4:
    switch(direc) {
    case 1:
      R = X-Cx ; dRdx =1.0 ; dRdy =0.0 ;  dRdz =0.0 ;
      break;

    case 2:
      R = Y-Cy ; dRdx =0.0 ; dRdy =1.0 ;  dRdz =0.0 ;
      break;

    case 3:
      R = Z-Cz ; dRdx =0.0 ; dRdy =0.0 ;  dRdz =1.0 ; 
      break;
    }    
    B = (B*B-A*A*L)/(B-A*L);
    R = fabs(R);

    
    f  = puissance ( (A*(B-A)) / (R*(B-R)),p) ;
    break ; 

  default:
    Msg(ERROR, "Bad parallelipedic transformation ") ;

  }

  theta = p * (B-2.*R) / (B-R) ;
  XR = (X-Cx)/R ; YR = (Y-Cy)/R ; ZR = (Z-Cz)/R ;

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

double  JacobianVol0D (struct Element * Element, MATRIX3x3 * Jac) {
  
  GetDP_Begin("JacobianVol0D");

  Jac->c11 = 1. ;  Jac->c12 = 0. ;  Jac->c13 = 0. ;
  Jac->c21 = 0. ;  Jac->c22 = 1. ;  Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(1.) ;
}

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

/* L'axe doit etre x=z=0 */

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


/* L'axe doit etre x=z=0 */

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

double  JacobianVolSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolSphShell2D");

  DetJac1 = JacobianVol2D (Element, &Jac1) ;
  DetJac2 = SphShell2D    (Element, &Jac2) ;

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
  DetJac2 = Transformation (_2D, 0, Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolSphFiniteShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolSphFiniteShell2D");

  DetJac1 = JacobianVol2D    (Element, &Jac1) ;
  DetJac2 = SphFiniteShell2D (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = 1. ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolAxiSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiSphShell2D");

  DetJac1 = JacobianVolAxi2D  (Element, &Jac1) ;
  DetJac2 = SphShell2D        (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolAxiSquSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolAxiSquSphShell2D");

  DetJac1 = JacobianVolAxiSqu2D(Element, &Jac1) ;
  DetJac2 = SphShell2D         (Element, &Jac2) ;

  Get_ProductMatrix( _2D, &Jac1, &Jac2, Jac) ;

                                    Jac->c13 = 0. ;
                                    Jac->c23 = 0. ;
  Jac->c31 = 0. ;  Jac->c32 = 0. ;  Jac->c33 = Jac1.c33 ;

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
  DetJac2 = SphShell3D    (Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  GetDP_Return(DetJac1 * DetJac2) ;
}

double  JacobianVolRectShell3D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianVolRectShell3D");

  DetJac1 = JacobianVol3D (Element, &Jac1) ;
  DetJac2 = Transformation (_3D, 0, Element, &Jac2) ;

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

double  JacobianSurSphShell2D (struct Element * Element, MATRIX3x3 * Jac) {
  MATRIX3x3  Jac1, Jac2 ;
  double     DetJac1, DetJac2 ;

  GetDP_Begin("JacobianSurSphShell2D");

  DetJac1 = JacobianSur2D (Element, &Jac1) ;
  DetJac2 = SphShell2D    (Element, &Jac2) ;

  Get_ProductMatrix( _3D, &Jac1, &Jac2, Jac) ;

  GetDP_Return(DetJac1 * DetJac2) ;
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
  double **M, **V, *W;
  double T[4][4] = {{0.,0.,0.,0.},{0.,0.,0.,0.},{0.,0.,0.,0.},{0.,0.,0.,0.}};
  int    i, j, k; 

  GetDP_Begin("Get_InverseSingularMatrix");

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
	T[i][j] += M[j][i] / W[i] ;
  
  InvMat->c11 = InvMat->c12 = InvMat->c13 = 
    InvMat->c21 = InvMat->c22 = InvMat->c23 = 
    InvMat->c31 = InvMat->c32 = InvMat->c33 = 0.0 ;  

  for(k=1 ; k<=3 ; k++){
    InvMat->c11 += V[1][k] * T[k][1] ;
    InvMat->c12 += V[1][k] * T[k][2] ;
    InvMat->c13 += V[1][k] * T[k][3] ;
    InvMat->c21 += V[2][k] * T[k][1] ;
    InvMat->c22 += V[2][k] * T[k][2] ;
    InvMat->c23 += V[2][k] * T[k][3] ;
    InvMat->c31 += V[3][k] * T[k][1] ;
    InvMat->c32 += V[3][k] * T[k][2] ;
    InvMat->c33 += V[3][k] * T[k][3] ;
  }

  free_dmatrix(M,1,3,1,3);
  free_dmatrix(V,1,3,1,3);
  free_dvector(W,1,3);

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

