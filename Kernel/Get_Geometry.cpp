// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Patrick Lefevre
//

#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "Get_Geometry.h"
#include "GeoData.h"
#include "BF.h"
#include "Gauss.h"
#include "Message.h"

#define THESIGN(a) ((a)>=0 ? 1 : -1)
#define SQU(a)     ((a)*(a))
#define HYPOT(a,b) (sqrt((a)*(a)+(b)*(b)))

/* ------------------------------------------------------------------------ */
/*  G e t _ N o d e s C o o r d i n a t e s O f E l e m e n t               */
/* ------------------------------------------------------------------------ */

void Get_NodesCoordinatesOfElement(struct Element * Element)
{
  if (Element->NumLastElementForNodesCoordinates != Element->Num) {
    Element->NumLastElementForNodesCoordinates = Element->Num;
    Geo_GetNodesCoordinates
      (Element->GeoElement->NbrNodes, Element->GeoElement->NumNodes,
       Element->x, Element->y, Element->z);
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ B F G e o E l e m e n t                                             */
/* ------------------------------------------------------------------------ */

void Get_BFGeoElement(struct Element * Element, double u, double v, double w)
{
  int  i;

  for (i = 0; i < Element->GeoElement->NbrNodes; i++) {
    BF_Node(Element, i+1, u, v, w, &(Element->n[i]));
    BF_GradNode(Element, i+1, u, v, w, Element->dndu[i]);
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ J a c o b i a n F u n c t i o n                                 */
/* ------------------------------------------------------------------------ */

void  * Get_JacobianFunction(int Type_Jacobian, int Type_Element,
                             int * Type_Dimension)
{
  switch (Type_Jacobian) {

  case JACOBIAN_VOL :

    switch (Type_Element) {

    case POINT       :
      *Type_Dimension = _0D; return((void *)JacobianVol0D);

    case LINE        : case LINE_2 :
      *Type_Dimension = _1D; return((void *)JacobianVol1D);

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVol2D);

    case TETRAHEDRON : case TETRAHEDRON_2 :
    case HEXAHEDRON  : case HEXAHEDRON_2  :
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      *Type_Dimension = _3D; return((void *)JacobianVol3D);

    default :
      Message::Error("Unknown Jacobian Vol for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_SPH_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolSphShell2D);

    case TETRAHEDRON : case TETRAHEDRON_2 :
    case HEXAHEDRON  : case HEXAHEDRON_2  :
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      *Type_Dimension = _3D; return((void *)JacobianVolSphShell3D);

    default :
      Message::Error("Unknown Jacobian VolSphShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_CYL_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolSphShell2D);

    case TETRAHEDRON : case TETRAHEDRON_2 :
    case HEXAHEDRON  : case HEXAHEDRON_2  :
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      *Type_Dimension = _3D; return((void *)JacobianVolCylShell3D);

    default :
      Message::Error("Unknown Jacobian VolCylShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_RECT_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolRectShell2D);

    case TETRAHEDRON : case TETRAHEDRON_2 :
    case HEXAHEDRON  : case HEXAHEDRON_2  :
    case PRISM       : case PRISM_2       :
    case PYRAMID     : case PYRAMID_2     :
      *Type_Dimension = _3D; return((void *)JacobianVolRectShell3D);

    default :
      Message::Error("Unknown Jacobian VolRectShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_PLPD_X :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolPlpdX2D);

    default :
      Message::Error("Unknown Jacobian VolPlpdX for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI :

    switch (Type_Element) {

    case LINE        : case LINE_2 :
      *Type_Dimension = _1D; return((void *)JacobianVolAxi1D);

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxi2D);

    default :
      Message::Error("Unknown Jacobian VolAxi for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_SPH_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxiSphShell2D);

    default :
      Message::Error("Unknown Jacobian VolAxiSphShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_RECT_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxiRectShell2D);

    default :
      Message::Error("Unknown Jacobian VolAxiRectShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_PLPD_X :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxiPlpdX2D);

    default :
      Message::Error("Unknown Jacobian VolAxiPlpdX for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }


  case JACOBIAN_VOL_AXI_SQU :

    switch (Type_Element) {

    case LINE        : case LINE_2 :
      *Type_Dimension = _1D; return((void *)JacobianVolAxiSqu1D);

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxiSqu2D);

    default :
      Message::Error("Unknown Jacobian VolAxiSqu for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_SQU_SPH_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxiSquSphShell2D);

    default :
      Message::Error("Unknown Jacobian VolAxiSquSphShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_VOL_AXI_SQU_RECT_SHELL :

    switch (Type_Element) {

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVolAxiSquRectShell2D);

    default :
      Message::Error("Unknown Jacobian VolAxiSquRectShell for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR :

    switch (Type_Element) {

    case POINT :
      *Type_Dimension = _1D; return((void *)JacobianVol0D);

    case LINE        : case LINE_2 :
      *Type_Dimension = _2D; return((void *)JacobianSur2D);

    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _3D; return((void *)JacobianSur3D);

    default :
      Message::Error("Unknown Jacobian Sur for element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR_SPH_SHELL :

    switch (Type_Element) {

    case LINE        : case LINE_2 :
      *Type_Dimension = _2D; return((void *)JacobianSurSphShell2D);

    default :
      Message::Error("Unknown Jacobian SurSphShell for element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_SUR_AXI :

    switch (Type_Element) {

    case LINE        : case LINE_2 :
      *Type_Dimension = _2D; return((void *)JacobianSurAxi2D);

      // for integrals on surfaces in the study plane in axisymm. problems
      // e.g. the computation of the area of a region
    case TRIANGLE    : case TRIANGLE_2   :
    case QUADRANGLE  : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
      *Type_Dimension = _2D; return((void *)JacobianVol2D);

    default :
      Message::Error("Unknown Jacobian SurAxi for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  case JACOBIAN_LIN :

    switch (Type_Element) {

    case POINT :
      *Type_Dimension = _2D; return((void *)JacobianVol0D);

    case LINE        : case LINE_2 :
      *Type_Dimension = _3D; return((void *)JacobianLin3D);

    default :
      Message::Error("Unknown Jacobian Lin for Element Type (%s)",
                     Get_StringForDefine(Element_Type, Type_Element));
    }

  default :
    Message::Error("Unknown Jacobian"); return(NULL);
  }

}

/* ------------------------------------------------------------------------ */
/*  G e t _ J a c o b i a n F u n c t i o n A u t o                         */
/* ------------------------------------------------------------------------ */

void  * Get_JacobianFunctionAuto (int Type_Element, int Dimension)
{
  switch(Type_Element){
  case POINT :
    return((void *)JacobianVol0D);
  case LINE : case LINE_2 :
    switch(Dimension){
    case _3D : return((void *)JacobianLin3D);
    case _2D : return((void *)JacobianSur2D);
    default : return((void *)JacobianVol1D);
    }
  case TRIANGLE : case TRIANGLE_2 :
  case QUADRANGLE : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
    switch(Dimension){
    case _3D : return((void *)JacobianSur3D);
    default :  return((void *)JacobianVol2D);
    }
  case TETRAHEDRON : case TETRAHEDRON_2 :
  case HEXAHEDRON  : case HEXAHEDRON_2  :
  case PRISM       : case PRISM_2       :
  case PYRAMID     : case PYRAMID_2     :
  default:
    return((void *)JacobianVol3D);
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ I n t e g r a t i o n F u n c t i o n A u t o                   */
/* ------------------------------------------------------------------------ */

void  * Get_IntegrationFunctionAuto (int Type_Element, int Order, int *NumPoints)
{
  // TODO : compute correct number of points

  switch(Type_Element){
  case POINT :
    *NumPoints = 1;
    return ((void *)Gauss_Point);
  case LINE : case LINE_2 :
    *NumPoints = 3;
    return ((void *)Gauss_Line);
  case TRIANGLE : case TRIANGLE_2 :
    *NumPoints = 6;
    return ((void*)Gauss_Triangle);
  case QUADRANGLE : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
    *NumPoints = 7;
    return ((void*)Gauss_Quadrangle);
  case TETRAHEDRON : case TETRAHEDRON_2 :
    *NumPoints = 15;
    return ((void*)Gauss_Tetrahedron);
  case HEXAHEDRON  : case HEXAHEDRON_2  :
    *NumPoints = 34;
    return ((void*)Gauss_Hexahedron);
  case PRISM       : case PRISM_2       :
    *NumPoints = 21;
    return ((void*)Gauss_Prism);
  case PYRAMID     : case PYRAMID_2     :
    *NumPoints = 8;
    return ((void*)Gauss_Pyramid);
  default:
    Message::Error("Unknown type of element for integration function");
    return 0;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e o m e t r i c a l   T r a n s f o r m a t i o n s                   */
/* ------------------------------------------------------------------------ */

double  PlpdX2D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double  CoorX, CoorY, A, B, R, theta, f;
  double  DetJac;

  CoorX = CoorY = 0.;
  for (i = 0; i < Element->GeoElement->NbrNodes; i++) {
    CoorX += Element->x[i] * Element->n[i];
    CoorY += Element->y[i] * Element->n[i];
  }

  A = Element->JacobianCase->Para[0]; B = Element->JacobianCase->Para[1];

  R = CoorX;

  if ( (R > B+1.e-12*B) || (R < A-1.e-12*A) )
    Message::Error("Bad parameters for unidirectional transformation Jacobian: "
                   "Rint=%g, Rext=%g, R=%g", A, B, R);

  if (B == R) {
    Jac->c11  = 1.; Jac->c12  = 0.;
    Jac->c21  = 0.; Jac->c22  = 1.;
    return(1.);
  }

  f  = (A*(B-A)) / (R*(B-R));
  theta = (B-2.*R) / (B-R);

  Jac->c11  = f * (1.- theta); Jac->c12  = 0.;
  Jac->c21  = 0.;              Jac->c22  = 1.;

  DetJac = f*( 1.-theta);

  return(DetJac);
}

double power(double x, double y)
{
  if (y == 1.0) return (x);
  else if (y == 2.0) return (x*x);
  else if (y == 0.5) return (sqrt(x));
  else return (pow(x,y));
}

double Transformation(int Dim, int Type, struct Element * Element, MATRIX3x3 * Jac)
{
  int     i, Axis = 0;
  double  X = 0., Y = 0., Z = 0.;
  double  p = 1., L= 0.;
  double  Cx = 0., Cy = 0., Cz = 0., A = 0., B = 0., R = 0.;
  double  theta, XR, YR, ZR, f, dRdx = 0., dRdy = 0., dRdz = 0.;
  double  DetJac;

  /*
    A          = interior radius
    B          = exterior radius
    Cx, Cy, Cz = coord of centre
    Axis       = direction of the transformation
    p          = exponant
    1/L        = f(B)
  */

  for (i = 0; i < Element->GeoElement->NbrNodes; i++) {
    X += Element->x[i] * Element->n[i];
    Y += Element->y[i] * Element->n[i];
    Z += Element->z[i] * Element->n[i];
  }

  if(Element->JacobianCase->NbrParameters >= 2){
    A = Element->JacobianCase->Para[0];
    B = Element->JacobianCase->Para[1];
  }
  else
    Message::Error("Missing interior and/or exterior radius for transformation Jacobian");

  if(Type == JACOBIAN_RECT){
    if(Element->JacobianCase->NbrParameters >= 3)
      Axis = (int)Element->JacobianCase->Para[2];
    if(Element->JacobianCase->NbrParameters >= 4)
      Cx = Element->JacobianCase->Para[3];
    if(Element->JacobianCase->NbrParameters >= 5)
      Cy = Element->JacobianCase->Para[4];
    if(Element->JacobianCase->NbrParameters >= 6)
      Cz = Element->JacobianCase->Para[5];
    if(Element->JacobianCase->NbrParameters >= 7)
      p = Element->JacobianCase->Para[6];
    if(Element->JacobianCase->NbrParameters >= 8)
      L = Element->JacobianCase->Para[7];
    if(Element->JacobianCase->NbrParameters >= 9){
      Message::Error("Too many parameters for rectangular transformation Jacobian. "
                     "Valid parameters: Dist1 Dist2 Axis CenterX CenterY CenterZ Power 1/Infinity");
    }
  }
  else if(Type == JACOBIAN_SPH){
    if(Element->JacobianCase->NbrParameters >= 3)
      Cx = Element->JacobianCase->Para[2];
    if(Element->JacobianCase->NbrParameters >= 4)
      Cy = Element->JacobianCase->Para[3];
    if(Element->JacobianCase->NbrParameters >= 5)
      Cz = Element->JacobianCase->Para[4];
    if(Element->JacobianCase->NbrParameters >= 6)
      p = Element->JacobianCase->Para[5];
    if(Element->JacobianCase->NbrParameters >= 7)
      L = Element->JacobianCase->Para[6];
    if(Element->JacobianCase->NbrParameters >= 8){
      Message::Error("Too many parameters for spherical transformation Jacobian. "
                     "Valid parameters: Radius1 Radius2 CenterX CenterY CenterZ Power 1/Infinity");
    }
  }
  else
    Message::Error("Unknown type of transformation Jacobian");

  if(L) B = (B*B-A*A*L)/(B-A*L);

  if(Type == JACOBIAN_SPH){
    if(Dim == _2D){
      R    = sqrt( SQU(X-Cx) + SQU(Y-Cy) );
      dRdx = (X-Cx)/R;
      dRdy = (Y-Cy)/R;
    }
    else{
      R    = sqrt( SQU(X-Cx) + SQU(Y-Cy) + SQU(Z-Cz) );
      dRdx = (X-Cx)/R;
      dRdy = (Y-Cy)/R;
      dRdz = (Z-Cz)/R;
    }
  }
  else{
    switch(Axis) {
    case 1: R = fabs(X-Cx); dRdx = THESIGN(X-Cx); dRdy = 0.0;           dRdz = 0.0;           break;
    case 2: R = fabs(Y-Cy); dRdx = 0.0;           dRdy = THESIGN(Y-Cy); dRdz = 0.0;           break;
    case 3: R = fabs(Z-Cz); dRdx = 0.0;           dRdy = 0.0;           dRdz = THESIGN(Z-Cz); break;
    default: Message::Error("Bad axis specification: 1 for X, 2 for Y and 3 for Z");
    }
  }

  if ( (fabs(R) > fabs(B) + 1.e-2*fabs(B)) ||
       (fabs(R) < fabs(A) - 1.e-2*fabs(A)) ){
    Message::Error("Bad parameters for transformation Jacobian: %g not in [%g,%g]", R, A, B);
  }

  if (B == R) {
    Jac->c11 = 1.; Jac->c12 = 0.; Jac->c13 = 0.;
    Jac->c21 = 0.; Jac->c22 = 1.; Jac->c23 = 0.;
    Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;
    return(1.);
  }

  f     = power((A*(B-A))/(R*(B-R)), p);
  theta = p * (B-2.*R) / (B-R);
  XR    = (X-Cx)/R;
  YR    = (Y-Cy)/R;
  ZR    = (Z-Cz)/R;

  Jac->c11 = f * (1.0 - theta * XR * dRdx);
  Jac->c12 = f * (    - theta * XR * dRdy);
  Jac->c13 = f * (    - theta * XR * dRdz);
  Jac->c21 = f * (    - theta * YR * dRdx);
  Jac->c22 = f * (1.0 - theta * YR * dRdy);
  Jac->c23 = f * (    - theta * YR * dRdz);
  Jac->c31 = f * (    - theta * ZR * dRdx);
  Jac->c32 = f * (    - theta * ZR * dRdy);
  Jac->c33 = f * (1.0 - theta * ZR * dRdz);

  switch (Dim) {
  case _2D :
    Jac->c33  = 1.;
    DetJac = f * f * (1.0 - theta);
    /*
      DetJac =  Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21;
    */
    break;
  case _AXI :
    DetJac = f * f * f * (1.0 - theta);
    break;
  default :
    DetJac = f * f * f * (1.0 - theta);
    /*
    DetJac =  Jac->c11 * (Jac->c22 * Jac->c33 - Jac->c23*Jac->c32)
            - Jac->c12 * (Jac->c21 * Jac->c33 - Jac->c23*Jac->c31)
            + Jac->c13 * (Jac->c21 * Jac->c32 - Jac->c22*Jac->c31);
    */
    break;
  }

  return(DetJac);
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n V o l                                                   */
/* ------------------------------------------------------------------------ */

/* 0D */

double  JacobianVol0D (struct Element * Element, MATRIX3x3 * Jac)
{
  Jac->c11 = 1.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 1.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  return(1.);
}

/* 1D */

double  JacobianVol1D (struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 1.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0];
  }

  DetJac = Jac->c11;

  return(DetJac);
}

/* 2D */

double  JacobianVol2D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 0.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0];
    Jac->c21 += Element->x[i] * Element->dndu[i][1];
    Jac->c12 += Element->y[i] * Element->dndu[i][0];
    Jac->c22 += Element->y[i] * Element->dndu[i][1];
  }

  DetJac = Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21;

  return(DetJac);
}

double  JacobianVolSphShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVol2D(Element, &Jac1);
  DetJac2 = Transformation(_2D, JACOBIAN_SPH, Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  return(DetJac1 * DetJac2);
}

double  JacobianVolRectShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVol2D(Element, &Jac1);
  DetJac2 = Transformation(_2D, JACOBIAN_RECT, Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  return(DetJac1 * DetJac2);
}

double  JacobianVolPlpdX2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVol2D(Element, &Jac1);
  DetJac2 = PlpdX2D(Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  return(DetJac1 * DetJac2);
}

/* 1D & 2D Axi (Attention, l'axe doit etre x=z=0) */

double  JacobianVolAxi1D (struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double s = 0., DetJac;

  DetJac = JacobianVol1D(Element, Jac);

  for (i = 0; i < Element->GeoElement->NbrNodes; i++)
    s += Element->x[i] * Element->n[i];

  /* Warning! For evaluations on the symmetry axis */
  if (s==0.0) {
    for (i = 0; i < Element->GeoElement->NbrNodes; i++)
      s += Element->x[i];
    s /= (double)Element->GeoElement->NbrNodes;
  }

  Jac->c33 = s;

  return(DetJac * Jac->c33);
}

double  JacobianVolAxi2D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double s = 0., DetJac;

  DetJac = JacobianVol2D(Element, Jac);

  for (i = 0; i < Element->GeoElement->NbrNodes; i++)
    s += Element->x[i] * Element->n[i];

  /* Warning! For evaluations on the symmetry axis */
  if (s==0.0) {
    for (i = 0; i < Element->GeoElement->NbrNodes; i++)
      s += Element->x[i];
    s /= (double)Element->GeoElement->NbrNodes;
  }

  Jac->c33 = s;

  return(DetJac * Jac->c33);
}

double  JacobianVolAxiSphShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVolAxi2D(Element, &Jac1);
  DetJac2 = Transformation(_AXI, JACOBIAN_SPH, Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = Jac1.c33 * Jac2.c33;

  return(DetJac1 * DetJac2);
}

double  JacobianVolAxiRectShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVolAxi2D(Element, &Jac1);
  DetJac2 = Transformation(_AXI, JACOBIAN_RECT, Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = Jac1.c33 * Jac2.c33;

  return(DetJac1 * DetJac2);
}

double  JacobianVolAxiPlpdX2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVolAxi2D(Element, &Jac1);
  DetJac2 = PlpdX2D(Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = Jac1.c33;

  return(DetJac1 * DetJac2);
}

/* 1D & 2D Axi avec transformation quadratique (Attention, l'axe doit etre x=z=0) */
double  JacobianVolAxiSqu1D (struct Element * Element, MATRIX3x3 * Jac)
{
  int    i;
  double s = 0., r, DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 1.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  for (i = 0; i < Element->GeoElement->NbrNodes; i++)
    s += SQU(Element->x[i]) * Element->n[i];

  /* Warning! For evaluations on the symmetry axis */
  if (s==0.0) {
    for (i = 0; i < Element->GeoElement->NbrNodes; i++)
      s += Element->x[i] * Element->x[i];
    s /= (double)Element->GeoElement->NbrNodes;
  }

  r = sqrt(s);

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += 0.5/r * SQU(Element->x[i]) * Element->dndu[i][0];
  }
  Jac->c33 = r;

  DetJac = Jac->c11 * Jac->c33;

  return(DetJac);
}

double  JacobianVolAxiSqu2D(struct Element * Element, MATRIX3x3 * Jac)
{
  int    i;
  double s = 0., r, DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 0.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  for (i = 0; i < Element->GeoElement->NbrNodes; i++)
    s += SQU(Element->x[i]) * Element->n[i];

  /* Warning! For evaluations on the symmetry axis */
  if (s==0.0) {
    for (i = 0; i < Element->GeoElement->NbrNodes; i++)
      s += Element->x[i] * Element->x[i];
    s /= (double)Element->GeoElement->NbrNodes;
  }

  r = sqrt(s);

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += 0.5/r * SQU(Element->x[i]) * Element->dndu[i][0];
    Jac->c21 += 0.5/r * SQU(Element->x[i]) * Element->dndu[i][1];
    Jac->c12 += Element->y[i] * Element->dndu[i][0];
    Jac->c22 += Element->y[i] * Element->dndu[i][1];
  }
  Jac->c33 = r;

  DetJac = (Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21) * Jac->c33;

  return(DetJac);
}

double  JacobianVolAxiSquSphShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVolAxiSqu2D(Element, &Jac1);
  DetJac2 = Transformation     (_AXI, JACOBIAN_SPH, Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = Jac1.c33 * Jac2.c33;

  return(DetJac1 * DetJac2);
}

double  JacobianVolAxiSquRectShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVolAxiSqu2D(Element, &Jac1);
  DetJac2 = Transformation     (_AXI, JACOBIAN_RECT, Element, &Jac2);

  Get_ProductMatrix(_2D, &Jac1, &Jac2, Jac);

                                Jac->c13 = 0.;
                                Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = Jac1.c33 * Jac2.c33;

  return(DetJac1 * DetJac2);
}

/* 3D */

double  JacobianVol3D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 0.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 0.;

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0];
    Jac->c21 += Element->x[i] * Element->dndu[i][1];
    Jac->c31 += Element->x[i] * Element->dndu[i][2];

    Jac->c12 += Element->y[i] * Element->dndu[i][0];
    Jac->c22 += Element->y[i] * Element->dndu[i][1];
    Jac->c32 += Element->y[i] * Element->dndu[i][2];

    Jac->c13 += Element->z[i] * Element->dndu[i][0];
    Jac->c23 += Element->z[i] * Element->dndu[i][1];
    Jac->c33 += Element->z[i] * Element->dndu[i][2];
  }

  DetJac = Jac->c11 * Jac->c22 * Jac->c33 + Jac->c13 * Jac->c21 * Jac->c32
         + Jac->c12 * Jac->c23 * Jac->c31 - Jac->c13 * Jac->c22 * Jac->c31
         - Jac->c11 * Jac->c23 * Jac->c32 - Jac->c12 * Jac->c21 * Jac->c33;

  return(DetJac);
}

double  JacobianVolSphShell3D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVol3D(Element, &Jac1);
  DetJac2 = Transformation(_3D, JACOBIAN_SPH, Element, &Jac2);

  Get_ProductMatrix(_3D, &Jac1, &Jac2, Jac);

  return(DetJac1 * DetJac2);
}

double  JacobianVolCylShell3D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVol3D(Element, &Jac1);
  DetJac2 = Transformation(_2D, JACOBIAN_SPH, Element, &Jac2);

                                Jac2.c13 = 0.;
                                Jac2.c23 = 0.;
  Jac2.c31 = 0.; Jac2.c32 = 0.; Jac2.c33 = 1.;

  Get_ProductMatrix(_3D, &Jac1, &Jac2, Jac);

  return(DetJac1 * DetJac2);
}

double  JacobianVolRectShell3D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianVol3D(Element, &Jac1);
  DetJac2 = Transformation(_3D, JACOBIAN_RECT, Element, &Jac2);

  Get_ProductMatrix(_3D, &Jac1, &Jac2, Jac);

  return(DetJac1 * DetJac2);
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n S u r                                                   */
/* ------------------------------------------------------------------------ */

void prodve(double a[3], double b[3], double c[3])
{
  c[2] = a[0] * b[1] - a[1] * b[0];
  c[1] = -a[0] * b[2] + a[2] * b[0];
  c[0] = a[1] * b[2] - a[2] * b[1];
}
void prosca(double a[3], double b[3], double *c)
{
  *c = a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}
double norm3(double a[3])
{
  return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}
double norme(double a[3])
{
  const double mod = norm3(a);
  if(mod != 0.0){
    const double one_over_mod = 1./mod;
    a[0] *= one_over_mod;
    a[1] *= one_over_mod;
    a[2] *= one_over_mod;
  }
  return mod;
}

double  JacobianSur2D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 0.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 1.;

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0];
    Jac->c12 += Element->y[i] * Element->dndu[i][0];
  }

  DetJac = HYPOT(Jac->c11, Jac->c12);

  // regularize matrix
  double b[3] = {Jac->c12, -Jac->c11, 0.};
  norme(b);
  Jac->c21 = b[0]; Jac->c22 = b[1];

  // make sure DetJac > 0: this is not necessary in theory, but it is
  // required here because we use DetJac when we invert the matrix
  double realDetJac = Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21;
  if(realDetJac < 0.){
    Jac->c21 = - Jac->c21; Jac->c22 = - Jac->c22;
  }

  return(DetJac);
}

double  JacobianSurSphShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianSur2D(Element, &Jac1);
  DetJac2 = Transformation(_2D, JACOBIAN_SPH, Element, &Jac2);

  Get_ProductMatrix(_3D, &Jac1, &Jac2, Jac);

  return(DetJac1 * DetJac2);
}

double  JacobianSurRectShell2D(struct Element * Element, MATRIX3x3 * Jac)
{
  MATRIX3x3  Jac1, Jac2;
  double     DetJac1, DetJac2;

  DetJac1 = JacobianSur2D(Element, &Jac1);
  DetJac2 = Transformation(_2D, JACOBIAN_RECT, Element, &Jac2);

  Get_ProductMatrix(_3D, &Jac1, &Jac2, Jac);

  return(DetJac1 * DetJac2);
}

double  JacobianSurAxi2D (struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  DetJac = JacobianSur2D(Element, Jac);

  Jac->c33 = 0.;
  for (i = 0; i < Element->GeoElement->NbrNodes; i++)
    Jac->c33 += Element->x[i] * Element->n[i];
  return(DetJac * Jac->c33);
}

double  JacobianSur3D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 0.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 0.;

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0];
    Jac->c21 += Element->x[i] * Element->dndu[i][1];

    Jac->c12 += Element->y[i] * Element->dndu[i][0];
    Jac->c22 += Element->y[i] * Element->dndu[i][1];

    Jac->c13 += Element->z[i] * Element->dndu[i][0];
    Jac->c23 += Element->z[i] * Element->dndu[i][1];
  }

  DetJac = sqrt( SQU(Jac->c11 * Jac->c22 - Jac->c12 * Jac->c21)
		 + SQU(Jac->c13 * Jac->c21 - Jac->c11 * Jac->c23)
		 + SQU(Jac->c12 * Jac->c23 - Jac->c13 * Jac->c22) );

  // regularize matrix
  double a[3] = {Jac->c11, Jac->c12, Jac->c13};
  double b[3] = {Jac->c21, Jac->c22, Jac->c23};
  double c[3];
  prodve(a, b, c);
  norme(c);
  Jac->c31 = c[0]; Jac->c32 = c[1]; Jac->c33 = c[2];

  // make sure DetJac > 0: this is not necessary in theory, but it is
  // required here because we use DetJac when we invert the matrix
  double realDetJac =
    Jac->c11 * Jac->c22 * Jac->c33 + Jac->c13 * Jac->c21 * Jac->c32 +
    Jac->c12 * Jac->c23 * Jac->c31 - Jac->c13 * Jac->c22 * Jac->c31 -
    Jac->c11 * Jac->c23 * Jac->c32 - Jac->c12 * Jac->c21 * Jac->c33;
  if(realDetJac < 0.){
    Jac->c31 = - Jac->c31; Jac->c32 = - Jac->c32; Jac->c33 = - Jac->c33;
  }

  return(DetJac);
}

/* ------------------------------------------------------------------------ */
/*  J a c o b i a n L i n                                                   */
/* ------------------------------------------------------------------------ */

double  JacobianLin3D(struct Element * Element, MATRIX3x3 * Jac)
{
  int  i;
  double DetJac;

  Jac->c11 = 0.; Jac->c12 = 0.; Jac->c13 = 0.;
  Jac->c21 = 0.; Jac->c22 = 0.; Jac->c23 = 0.;
  Jac->c31 = 0.; Jac->c32 = 0.; Jac->c33 = 0.;

  for ( i = 0; i < Element->GeoElement->NbrNodes; i++ ) {
    Jac->c11 += Element->x[i] * Element->dndu[i][0];
    Jac->c12 += Element->y[i] * Element->dndu[i][0];
    Jac->c13 += Element->z[i] * Element->dndu[i][0];
  }

  DetJac = sqrt(SQU(Jac->c11)+SQU(Jac->c12)+SQU(Jac->c13));

  // regularize matrix
  double a[3] = {Jac->c11, Jac->c12, Jac->c13};
  double b[3];
  if((fabs(a[0]) >= fabs(a[1]) && fabs(a[0]) >= fabs(a[2])) ||
     (fabs(a[1]) >= fabs(a[0]) && fabs(a[1]) >= fabs(a[2]))) {
    b[0] = a[1]; b[1] = -a[0]; b[2] = 0.;
  }
  else {
    b[0] = 0.; b[1] = a[2]; b[2] = -a[1];
  }
  norme(b);
  double c[3];
  prodve(a, b, c);
  norme(c);
  Jac->c21 = b[0]; Jac->c22 = b[1]; Jac->c23 = b[2];
  Jac->c31 = c[0]; Jac->c32 = c[1]; Jac->c33 = c[2];

  // make sure DetJac > 0: this is not necessary in theory, but it is
  // required here because we use DetJac when we invert the matrix
  double realDetJac =
    Jac->c11 * Jac->c22 * Jac->c33 + Jac->c13 * Jac->c21 * Jac->c32 +
    Jac->c12 * Jac->c23 * Jac->c31 - Jac->c13 * Jac->c22 * Jac->c31 -
    Jac->c11 * Jac->c23 * Jac->c32 - Jac->c12 * Jac->c21 * Jac->c33;
  if(realDetJac < 0.){
    Jac->c31 = - Jac->c31; Jac->c32 = - Jac->c32; Jac->c33 = - Jac->c33;
  }

  return(DetJac);
}

/* ------------------------------------------------------------------------ */
/*  G e t _ I n v e r s e M a t r i x                                       */
/* ------------------------------------------------------------------------ */

void  Get_InverseMatrix(int Type_Dimension, int Type_Element, double DetMat,
			MATRIX3x3 * Mat, MATRIX3x3 * InvMat)
{
  switch (Type_Dimension) {

  case _0D :
    InvMat->c11 = InvMat->c22 = InvMat->c33 = 1.;
    InvMat->c12 = InvMat->c21 = 0.;
    InvMat->c13 = InvMat->c31 = 0.;
    InvMat->c23 = InvMat->c32 = 0.;
    break;

  case _1D :
    InvMat->c11 = 1. / Mat->c11;
    InvMat->c22 = 1. / Mat->c22;
    InvMat->c33 = 1. / Mat->c33;
    InvMat->c12 = InvMat->c21 = 0.;
    InvMat->c13 = InvMat->c31 = 0.;
    InvMat->c23 = InvMat->c32 = 0.;
    break;

  case _2D :
    if(!DetMat) Message::Error("Null determinant in 'Get_InverseMatrix' (%d)",
                               Type_Dimension);
    InvMat->c11 =   Mat->c22 * Mat->c33 / DetMat;
    InvMat->c21 = - Mat->c21 * Mat->c33 / DetMat;
    InvMat->c12 = - Mat->c12 * Mat->c33 / DetMat;
    InvMat->c22 =   Mat->c11 * Mat->c33 / DetMat;
    InvMat->c13 = InvMat->c23 = InvMat->c31 = InvMat->c32 = 0.;
    InvMat->c33 =   1. / Mat->c33;
    break;

  case _3D :
    if(!DetMat) Message::Error("Null determinant in 'Get_InverseMatrix' (%d)",
                               Type_Dimension);
    InvMat->c11 =  ( Mat->c22 * Mat->c33 - Mat->c23 * Mat->c32 ) / DetMat;
    InvMat->c21 = -( Mat->c21 * Mat->c33 - Mat->c23 * Mat->c31 ) / DetMat;
    InvMat->c31 =  ( Mat->c21 * Mat->c32 - Mat->c22 * Mat->c31 ) / DetMat;
    InvMat->c12 = -( Mat->c12 * Mat->c33 - Mat->c13 * Mat->c32 ) / DetMat;
    InvMat->c22 =  ( Mat->c11 * Mat->c33 - Mat->c13 * Mat->c31 ) / DetMat;
    InvMat->c32 = -( Mat->c11 * Mat->c32 - Mat->c12 * Mat->c31 ) / DetMat;
    InvMat->c13 =  ( Mat->c12 * Mat->c23 - Mat->c13 * Mat->c22 ) / DetMat;
    InvMat->c23 = -( Mat->c11 * Mat->c23 - Mat->c13 * Mat->c21 ) / DetMat;
    InvMat->c33 =  ( Mat->c11 * Mat->c22 - Mat->c12 * Mat->c21 ) / DetMat;
    break;

  default :
    Message::Error("Wrong dimension in 'Get_InverseMatrix'");
    break;

  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ P r o d u c t M a t r i x                                       */
/* ------------------------------------------------------------------------ */

void  Get_ProductMatrix(int Type_Dimension,
			MATRIX3x3 * A, MATRIX3x3 * B, MATRIX3x3 * AB)
{
  switch (Type_Dimension) {

  case _2D :
    AB->c11 = A->c11 * B->c11 + A->c12 * B->c21;
    AB->c12 = A->c11 * B->c12 + A->c12 * B->c22;
    AB->c21 = A->c21 * B->c11 + A->c22 * B->c21;
    AB->c22 = A->c21 * B->c12 + A->c22 * B->c22;
    break;

  case _3D :
    AB->c11 = A->c11 * B->c11 + A->c12 * B->c21 + A->c13 * B->c31;
    AB->c12 = A->c11 * B->c12 + A->c12 * B->c22 + A->c13 * B->c32;
    AB->c13 = A->c11 * B->c13 + A->c12 * B->c23 + A->c13 * B->c33;
    AB->c21 = A->c21 * B->c11 + A->c22 * B->c21 + A->c23 * B->c31;
    AB->c22 = A->c21 * B->c12 + A->c22 * B->c22 + A->c23 * B->c32;
    AB->c23 = A->c21 * B->c13 + A->c22 * B->c23 + A->c23 * B->c33;
    AB->c31 = A->c31 * B->c11 + A->c32 * B->c21 + A->c33 * B->c31;
    AB->c32 = A->c31 * B->c12 + A->c32 * B->c22 + A->c33 * B->c32;
    AB->c33 = A->c31 * B->c13 + A->c32 * B->c23 + A->c33 * B->c33;
    break;

  }
}

/* ------------------------------------------------------------------------ */
/*   G e t _ C h a n g e O f C o o r d i n a t e s                          */
/* ------------------------------------------------------------------------ */

void *Get_ChangeOfCoordinates(int Flag_ChangeCoord, int Type_Form)
{
  switch (Type_Form) {

  case SCALAR :
  case FORM0  :
    return((void *)ChangeOfCoord_No1);

  case FORM1 :
    return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form1  :
		 (void *)ChangeOfCoord_No123);

  case FORM2 :
    return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form2 :
		 (void *)ChangeOfCoord_No123);

  case FORM3 :  case FORM3P :
    return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form3 :
		 (void *)ChangeOfCoord_No1);

  case FORM1P :
    return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form1P :
		 (void *)ChangeOfCoord_No123);

  case FORM2P :
    return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form2P :
		 (void *)ChangeOfCoord_No123);

  case VECTOR :
    return((void *)ChangeOfCoord_No123);

  case FORM1S :
    return((Flag_ChangeCoord) ? (void *)ChangeOfCoord_Form1S :
		 (void *)ChangeOfCoord_No123);

  default :
    Message::Error("Unknown type of field (%s)",
                   Get_StringForDefine(Field_Type, Type_Form));
    return(NULL);
  }
}

/* ------------------------------------------------------------------------ */
/*   C h a n g e O f C o o r d _ X X X                                      */
/* ------------------------------------------------------------------------ */

void  ChangeOfCoord_No1(struct Element * Element,
			double vBFu[], double vBFx[])
{
  vBFx[0] = vBFu[0];
}

void  ChangeOfCoord_No123(struct Element * Element,
			  double vBFu[], double vBFx[])
{
  vBFx[0] = vBFu[0]; vBFx[1] = vBFu[1]; vBFx[2] = vBFu[2];
}

void  ChangeOfCoord_Form1(struct Element * Element,
			  double vBFu[], double vBFx[])
{
  vBFx[0] = vBFu[0] * Element->InvJac.c11 + vBFu[1] * Element->InvJac.c12
          + vBFu[2] * Element->InvJac.c13;
  vBFx[1] = vBFu[0] * Element->InvJac.c21 + vBFu[1] * Element->InvJac.c22
          + vBFu[2] * Element->InvJac.c23;
  vBFx[2] = vBFu[0] * Element->InvJac.c31 + vBFu[1] * Element->InvJac.c32
          + vBFu[2] * Element->InvJac.c33;
}

void  ChangeOfCoord_Form2(struct Element * Element,
			  double vBFu[], double vBFx[])
{
  if(!Element->DetJac) Message::Error("Null determinant in 'ChangeOfCoord_Form2'");

  vBFx[0] = (vBFu[0] * Element->Jac.c11 + vBFu[1] * Element->Jac.c21
	     + vBFu[2] * Element->Jac.c31) / Element->DetJac;
  vBFx[1] = (vBFu[0] * Element->Jac.c12 + vBFu[1] * Element->Jac.c22
	     + vBFu[2] * Element->Jac.c32) / Element->DetJac;
  vBFx[2] = (vBFu[0] * Element->Jac.c13 + vBFu[1] * Element->Jac.c23
	     + vBFu[2] * Element->Jac.c33) / Element->DetJac;
}

void  ChangeOfCoord_Form3(struct Element * Element,
			  double vBFu[], double vBFx[])
{
  if(!Element->DetJac) Message::Error("Null determinant in 'ChangeOfCoord_Form3'");

  vBFx[0] = vBFu[0] / Element->DetJac;
}

/* Form1P, 2P, 1S : valid in 2D only ! */

void  ChangeOfCoord_Form1P(struct Element * Element,
			   double vBFu[], double vBFx[])
{
  vBFx[0] = 0.;
  vBFx[1] = 0.;
  vBFx[2] = vBFu[2] / Element->Jac.c33; /* ... * Element->InvJac.c33 */
}

void  ChangeOfCoord_Form2P(struct Element * Element,
			   double vBFu[], double vBFx[])
{
  if(!Element->DetJac)
    Message::Error("Null determinant in 'ChangeOfCoord_Form2P' %d %d %d",
                   Element->Num, Element->Type, Element->Region);

  vBFx[0] = (vBFu[0] * Element->Jac.c11 + vBFu[1] * Element->Jac.c21)
    / Element->DetJac;
  vBFx[1] = (vBFu[0] * Element->Jac.c12 + vBFu[1] * Element->Jac.c22)
    / Element->DetJac;
  vBFx[2] = 0.;
}

void  ChangeOfCoord_Form1S(struct Element * Element,
			   double vBFu[], double vBFx[])
{
  if(!Element->DetJac) Message::Error("Null determinant in 'ChangeOfCoord_Form1S'");

  vBFx[0] = 0.;
  vBFx[1] = 0.;
  vBFx[2] = vBFu[0] / Element->DetJac;
}

/* ------------------------------------------------------------------------ */
/*   C a l _ P r o d u c t X X X                                            */
/* ------------------------------------------------------------------------ */

double  Cal_Product123(double v1[], double v2[])
{
  return v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2];
}

double  Cal_Product12(double v1[], double v2[])
{
  return v1[0]*v2[0] + v1[1]*v2[1];
}

double  Cal_Product3(double v1[], double v2[])
{
  return v1[2]*v2[2];
}

double  Cal_Product1(double v1[], double v2[])
{
  return v1[0]*v2[0];
}
