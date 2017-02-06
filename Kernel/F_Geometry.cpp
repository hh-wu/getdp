// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "ProData.h"
#include "ProDefine.h"
#include "GeoData.h"
#include "DofData.h"
#include "Get_Geometry.h"
#include "F.h"
#include "NumericUtils.h"
#include "MallocUtils.h"
#include "Message.h"

#define SQU(a)     ((a)*(a))

extern struct CurrentData Current ;

void F_Normal(F_ARG)
{
  int  k ;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'F_Normal'");

  Geo_CreateNormal(Current.Element->Type,
		   Current.Element->x,
		   Current.Element->y,
		   Current.Element->z,
		   V->Val);

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;
}

void F_NormalSource(F_ARG)
{
  int  k ;

  if(!Current.ElementSource || Current.ElementSource->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'F_NormalSource'");

  Geo_CreateNormal(Current.ElementSource->Type,
		   Current.ElementSource->x,
		   Current.ElementSource->y,
		   Current.ElementSource->z,
		   V->Val);

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;
}

void F_Tangent(F_ARG)
{
  int  k ;
  double  tx, ty, tz, norm ;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'F_Tangent'");

  switch (Current.Element->Type) {

  case LINE :
    tx = Current.Element->x[1] - Current.Element->x[0] ;
    ty = Current.Element->y[1] - Current.Element->y[0] ;
    tz = Current.Element->z[1] - Current.Element->z[0] ;
    norm = sqrt(SQU(tx)+SQU(ty)+SQU(tz)) ;
    V->Val[0] = tx/norm ;
    V->Val[1] = ty/norm ;
    V->Val[2] = tz/norm ;
    break ;

  default :
    Message::Error("Function 'Tangent' only valid for Line Elements");
  }

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;
}

void F_TangentSource(F_ARG)
{
  int  k ;
  double  tx, ty, tz, norm ;

  if(!Current.ElementSource || Current.ElementSource->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'F_TangentSource'");

  switch (Current.ElementSource->Type) {

  case LINE :
    tx = Current.ElementSource->x[1] - Current.ElementSource->x[0] ;
    ty = Current.ElementSource->y[1] - Current.ElementSource->y[0] ;
    tz = Current.ElementSource->z[1] - Current.ElementSource->z[0] ;
    norm = sqrt(SQU(tx)+SQU(ty)+SQU(tz)) ;
    V->Val[0] = tx/norm ;
    V->Val[1] = ty/norm ;
    V->Val[2] = tz/norm ;
    break ;

  default :
    Message::Error("Function 'TangentSource' only valid for Line Elements");
  }

  if (Current.NbrHar != 1) {
    V->Val[MAX_DIM] = 0. ;
    V->Val[MAX_DIM+1] = 0. ;
    V->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
      V->Val[MAX_DIM* k   ] = V->Val[0] ;
      V->Val[MAX_DIM* k +1] = V->Val[1] ;
      V->Val[MAX_DIM* k +2] = V->Val[2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
  }
  V->Type = VECTOR ;
}

void F_ElementVol(F_ARG)
{
  int k;
  double Vol = 0.;
  MATRIX3x3 Jac;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'F_ElementVol'");

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
  case PYRAMID:
    Vol = 4./3. * JacobianVol3D(Current.Element,&Jac) ;
    break;
  default :
    Message::Error("F_ElementVol not implemented for %s",
                   Get_StringForDefine(Element_Type, Current.Element->Type));
  }

  V->Type = SCALAR ;
  V->Val[0] = fabs(Vol);
  V->Val[MAX_DIM] = 0.;

  for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

void F_SurfaceArea(F_ARG)
{
  struct Element  Element ;
  List_T  * InitialList_L;

  int     Nbr_Element, i_Element ;
  double  Val_Surface ;
  double  c11, c21, c12, c22, c13, c23, DetJac ;
  int     i, k ;

  // FIXME: TODO redo integration when parameters change!
  if (!Fct->Active) {
    Fct->Active = (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

    if (Fct->NbrParameters == 1) {
      int Index_Region = (int)(Fct->Para[0]) ;
      InitialList_L = List_Create(1,1,sizeof(int));
      List_Add(InitialList_L, &Index_Region);
    }
    else if (Fct->NbrParameters > 1) {
      InitialList_L = List_Create(Fct->NbrParameters,1,sizeof(int));
      List_Reset(InitialList_L);
      for (i=0; i<Fct->NbrParameters; i++) {
        int Index_Region = (int)(Fct->Para[i]) ;
        List_Add(InitialList_L, &Index_Region);
      }
    }
    else {
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

	if (Element.Type == TRIANGLE || Element.Type == QUADRANGLE
            || Element.Type == TRIANGLE_2) {

	  Get_NodesCoordinatesOfElement(&Element) ;
	  Get_BFGeoElement(&Element, 0., 0., 0.) ;

	  c11 = c21 = c12 = c22 = c13 = c23 = 0. ;
	  for ( i = 0 ; i < Element.GeoElement->NbrNodes ; i++ ) {
	    c11 += Element.x[i] * Element.dndu[i][0] ;
	    c21 += Element.x[i] * Element.dndu[i][1] ;
	    c12 += Element.y[i] * Element.dndu[i][0] ;
	    c22 += Element.y[i] * Element.dndu[i][1] ;
	    c13 += Element.z[i] * Element.dndu[i][0] ;
	    c23 += Element.z[i] * Element.dndu[i][1] ;
	  }
          DetJac = sqrt( SQU(c11 * c22 - c12 * c21)
                         + SQU(c13 * c21 - c11 * c23)
                         + SQU(c12 * c23 - c13 * c22) );

	  if (Element.Type == TRIANGLE || Element.Type == TRIANGLE_2)
	    Val_Surface += fabs(DetJac) * 0.5 ;
	  else if (Element.Type == QUADRANGLE)
	    Val_Surface += fabs(DetJac) * 4. ;

	}
	else if (Element.Type == LINE || Element.Type == LINE_2) {
	  Get_NodesCoordinatesOfElement(&Element) ;
	  Get_BFGeoElement(&Element, 0., 0., 0.) ;

	  c11 = c12 = c13 = 0. ;
	  for ( i = 0 ; i < Element.GeoElement->NbrNodes ; i++ ) {
	    c11 += Element.x[i] * Element.dndu[i][0] ;
	    c12 += Element.y[i] * Element.dndu[i][0] ;
	    c13 += Element.z[i] * Element.dndu[i][0] ;
	  }
          DetJac = sqrt(SQU(c11)+SQU(c12)+SQU(c13));

          Val_Surface += fabs(DetJac) * 2 ; // SurfaceArea of LINE x 1m
        }
	else {
	  Message::Error("Function 'SurfaceArea' only valid for line, triangle or "
                         "quandrangle elements");
	}
      }
    }
    Fct->Active->Case.SurfaceArea.Value = Val_Surface ;
  }

  V->Type = SCALAR ;
  V->Val[0] = Fct->Active->Case.SurfaceArea.Value ;
  V->Val[MAX_DIM] = 0.;

  for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

void F_GetVolume(F_ARG)
{
  struct Element  Element ;
  List_T  * InitialList_L;

  int     Nbr_Element, i_Element ;
  double  Val_Volume ;
  double  c11, c21, c31, c12, c22, c32, c13, c23, c33 ;
  double  DetJac ;
  int     i, k ;

  if (!Fct->Active) {
    Fct->Active = (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;

    if (Fct->NbrParameters == 1) {
      int Index_Region = (int)(Fct->Para[0]) ;
      InitialList_L = List_Create(1, 1, sizeof(int));
      List_Add(InitialList_L,&Index_Region);
    }
    else {
      InitialList_L = NULL ;
    }

    Val_Volume = 0. ;
    Nbr_Element = Geo_GetNbrGeoElements() ;
    for (i_Element = 0 ; i_Element < Nbr_Element; i_Element++) {
      Element.GeoElement = Geo_GetGeoElement(i_Element) ;
      if ((InitialList_L &&
	   List_Search(InitialList_L, &(Element.GeoElement->Region), fcmp_int)) ||
	  (!InitialList_L && Element.GeoElement->Region == Current.Region)) {
	Element.Num    = Element.GeoElement->Num ;
	Element.Type   = Element.GeoElement->Type ;

	if (Element.Type == TETRAHEDRON ||
            Element.Type == HEXAHEDRON ||
            Element.Type == PRISM) {

	  Get_NodesCoordinatesOfElement(&Element) ;
	  Get_BFGeoElement(&Element, 0., 0., 0.) ;

	  c11 = c21 = c31 = c12 = c22 = c32 = c13 = c23 = c33 = 0;
	  for ( i = 0 ; i < Element.GeoElement->NbrNodes ; i++ ) {
            c11 += Element.x[i] * Element.dndu[i][0] ;
            c21 += Element.x[i] * Element.dndu[i][1] ;
            c31 += Element.x[i] * Element.dndu[i][2] ;

            c12 += Element.y[i] * Element.dndu[i][0] ;
            c22 += Element.y[i] * Element.dndu[i][1] ;
            c32 += Element.y[i] * Element.dndu[i][2] ;

            c13 += Element.z[i] * Element.dndu[i][0] ;
            c23 += Element.z[i] * Element.dndu[i][1] ;
            c33 += Element.z[i] * Element.dndu[i][2] ;
	  }

          DetJac = c11 * c22 * c33 + c13 * c21 * c32
            + c12 * c23 * c31 - c13 * c22 * c31
            - c11 * c23 * c32 - c12 * c21 * c33 ;

          switch(Element.Type){
          case TETRAHEDRON:
            Val_Volume += 1./6. * fabs(DetJac);
            break;
          case HEXAHEDRON:
            Val_Volume += 8. * fabs(DetJac);
            break;
          case PRISM:
            Val_Volume += fabs(DetJac);
            break;
          }
	}
	else {
	  Message::Error("Function 'GetVolume' not valid for %s",
                         Get_StringForDefine(Element_Type, Element.Type));
	}
      }
    }
    Fct->Active->Case.GetVolume.Value = Val_Volume ;
  }

  V->Type = SCALAR ;
  V->Val[0] = Fct->Active->Case.GetVolume.Value ;
  V->Val[MAX_DIM] = 0.;

  for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }

}

void F_GetNumElement(F_ARG)
{
  int k;

  V->Type = SCALAR ;
  V->Val[0] = (double)Current.Element->Num;
  V->Val[MAX_DIM] = 0.;

  for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0 ;
  }
}

void F_GetNumElements(F_ARG)
{
  struct Element  Element ;

  if (!Fct->Active) {
    Fct->Active = (struct FunctionActive *)Malloc(sizeof(struct FunctionActive)) ;
    List_T  * InitialList_L;
    if (Fct->NbrParameters == 1) {
      int Index_Region = (int)(Fct->Para[0]) ;
      InitialList_L = List_Create(1, 1, sizeof(int));
      List_Add(InitialList_L, &Index_Region);
    }
    else if (Fct->NbrParameters > 1) {
      InitialList_L = List_Create(Fct->NbrParameters,1,sizeof(int));
      List_Reset(InitialList_L);
      for (int i=0; i<Fct->NbrParameters; i++) {
        int Index_Region = (int)(Fct->Para[i]) ;
        List_Add(InitialList_L, &Index_Region);
      }
    }
    else {
      InitialList_L = NULL ;
    }

    int Count = 0. ;
    int Nbr_Element = Geo_GetNbrGeoElements() ;
    if(!InitialList_L){
      Count = Nbr_Element ;
    }
    else{
      for (int i_Element = 0 ; i_Element < Nbr_Element; i_Element++) {
        Element.GeoElement = Geo_GetGeoElement(i_Element) ;
        if ((InitialList_L &&
             List_Search(InitialList_L, &(Element.GeoElement->Region), fcmp_int)) ||
            (!InitialList_L && Element.GeoElement->Region == Current.Region)) {
          Count++;
        }
      }
    }
    Fct->Active->Case.GetNumElements.Value = Count ;
  }

  V->Type = SCALAR ;
  V->Val[0] = Fct->Active->Case.GetNumElements.Value ;
  V->Val[MAX_DIM] = 0.;

  for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

void F_GetNumNodes(F_ARG)
{
  // TODO: accept arguments to limit to some regions
  V->Type = SCALAR ;
  V->Val[0] = Geo_GetNbrGeoNodes() ;
  V->Val[MAX_DIM] = 0.;
  for (int k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

void F_CellSize(F_ARG)
{
  double cellSize, Vol;
  MATRIX3x3 Jac;
  double  c11, c21, c12, c22, DetJac;
  int     i, k ;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'CellSize'");

  Get_NodesCoordinatesOfElement(Current.Element) ;
  Get_BFGeoElement(Current.Element, 0., 0., 0.) ;

  switch(Current.Element->Type){
  case LINE:
    cellSize = 2. * JacobianLin3D(Current.Element,&Jac);
    break;
  case TRIANGLE:
    c11 = c21 = c12 = c22 = 0. ;

    for ( i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++ ) {
      c11 += Current.Element->x[i] * Current.Element->dndu[i][0] ;
      c21 += Current.Element->x[i] * Current.Element->dndu[i][1] ;
      c12 += Current.Element->y[i] * Current.Element->dndu[i][0] ;
      c22 += Current.Element->y[i] * Current.Element->dndu[i][1] ;
    }
    DetJac = c11 * c22 - c12 * c21 ;
    cellSize =
      sqrt(SQU(Current.Element->x[1]-Current.Element->x[0])
           +SQU(Current.Element->y[1]-Current.Element->y[0])
           +SQU(Current.Element->z[1]-Current.Element->z[0]))
      *
      sqrt(SQU(Current.Element->x[2]-Current.Element->x[1])
           +SQU(Current.Element->y[2]-Current.Element->y[1])
           +SQU(Current.Element->z[2]-Current.Element->z[1]))
      *
      sqrt(SQU(Current.Element->x[0]-Current.Element->x[2])
           +SQU(Current.Element->y[0]-Current.Element->y[2])
           +SQU(Current.Element->z[0]-Current.Element->z[2]))
      / fabs(DetJac) ;
    break;
  case QUADRANGLE:
    //    Message::Warning("Function CellSize not ready for QUADRANGLE") ;
    Vol = 4. * JacobianSur3D(Current.Element,&Jac) ;
    cellSize = sqrt(Vol);
    break;
  case TETRAHEDRON:
    cellSize = 0.;
    Message::Warning("Function CellSize not ready for TETRAHEDRON") ;
    break;
  case HEXAHEDRON:
    cellSize = 0.;
    Message::Warning("Function CellSize not ready for HEXAHEDRON") ;
    break;
  case PRISM:
    cellSize = 0.;
    Message::Warning("Function CellSize not ready for PRISM") ;
    break;
  default :
    cellSize = 0.;
    Message::Error("Function 'CellSize' not valid for %s",
                   Get_StringForDefine(Element_Type, Current.Element->Type));
  }

  V->Type = SCALAR ;
  V->Val[0] = cellSize ;
  V->Val[MAX_DIM] = 0. ;
  for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

void F_SquNormEdgeValues(F_ARG)
{
  struct Geo_Element  *GeoElement;
  int                  i, *NumNodes;
  double               x [NBR_MAX_NODES_IN_ELEMENT] ;
  double               y [NBR_MAX_NODES_IN_ELEMENT] ;
  double               z [NBR_MAX_NODES_IN_ELEMENT] ;
  double               xe[2], ye[2], ze[2];

  int                  numDofData, Code_BasisFunction, CodeExist = 0;
  struct Dof  * Dof_P = NULL;
  double               Val_Dof, Val_Dof_i, valSum, sizeEdge ;
  int k;

  if(!Current.Element || Current.Element->Num == NO_ELEMENT)
    Message::Error("No element on which to compute 'SquNormEdgeValues'");

  numDofData = (int)Fct->Para[0];
  Code_BasisFunction = (int)Fct->Para[1];

  GeoElement = Current.Element->GeoElement;
  Geo_GetNodesCoordinates
    (GeoElement->NbrNodes, GeoElement->NumNodes, x, y, z) ;

  valSum = 0.;

  if(!GeoElement->NbrEdges) Geo_CreateEdgesOfElement(GeoElement) ;
  for(i=0 ; i<GeoElement->NbrEdges ; i++){
    NumNodes = Geo_GetNodesOfEdgeInElement(GeoElement, i) ;
    xe[0] = x[abs(NumNodes[0])-1]; xe[1] = x[abs(NumNodes[1])-1];
    ye[0] = y[abs(NumNodes[0])-1]; ye[1] = y[abs(NumNodes[1])-1];
    ze[0] = z[abs(NumNodes[0])-1]; ze[1] = z[abs(NumNodes[1])-1];

    CodeExist =
      ((Dof_P =
        Dof_GetDofStruct(Current.DofData_P0+ numDofData,
                         Code_BasisFunction, abs(GeoElement->NumEdges[i]), 0))
       != NULL) ;

    if (CodeExist) {
      sizeEdge = sqrt( SQU(xe[1]-xe[0]) + SQU(ye[1]-ye[0]) + SQU(ze[1]-ze[0]) );

      if(Current.NbrHar==1){
        Dof_GetRealDofValue(Current.DofData_P0+ numDofData, Dof_P, &Val_Dof) ;
        Val_Dof = Val_Dof/sizeEdge;
        valSum += SQU(Val_Dof) * sizeEdge;
      }
      else{
        for (k = 0 ; k < Current.NbrHar ; k+=2) {
          Dof_GetComplexDofValue
            (Current.DofData_P0+ numDofData,
             Dof_P + k/2*gCOMPLEX_INCREMENT,
             &Val_Dof, &Val_Dof_i) ;
          Val_Dof   = Val_Dof  /sizeEdge;
          Val_Dof_i = Val_Dof_i/sizeEdge;
          valSum += (SQU(Val_Dof)+SQU(Val_Dof_i)) * sizeEdge;
        }
      }
    }

  }

  V->Type = SCALAR ;
  V->Val[0] = valSum ;
  V->Val[MAX_DIM] = 0. ;

  for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) {
    V->Val[MAX_DIM* k] = V->Val[0] ;
    V->Val[MAX_DIM* (k+1)] = 0. ;
  }
}

static double POINT_TO_PROJECT[3], ELLIPSE_PARAMETERS[2];

static double dist_ellipse(double t)
{
  double x, y;
  x = ELLIPSE_PARAMETERS[0] * cos(t);
  y = ELLIPSE_PARAMETERS[1] * sin(t);
  return sqrt(SQU(x - POINT_TO_PROJECT[0]) + SQU(y - POINT_TO_PROJECT[1]));
}

void F_ProjectPointOnEllipse(F_ARG)
{
  int k;
  double t1 = 0., t2 = 1.e-6, t3, f1, f2, f3, tol = 1.e-4;
  double t, x, y;

  POINT_TO_PROJECT[0] = A->Val[0];
  POINT_TO_PROJECT[1] = A->Val[1];
  POINT_TO_PROJECT[2] = A->Val[2];

  ELLIPSE_PARAMETERS[0] = Fct->Para[0] ;
  ELLIPSE_PARAMETERS[1] = Fct->Para[1] ;

  mnbrak(&t1, &t2, &t3, &f1, &f2, &f3, dist_ellipse);

  if(t1 > t2){
    t = t1;
    t1 = t3;
    t3 = t;
  }

  brent(t1, t2, t3, dist_ellipse, tol, &t);

  x = ELLIPSE_PARAMETERS[0] * cos(t);
  y = ELLIPSE_PARAMETERS[1] * sin(t);

  /* printf("SL(%g,%g,0,%g,%g,0){1,1};\n", A->Val[0], A->Val[1], x, y); */

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = 0. ;
    V->Val[MAX_DIM*k+1] = 0. ;
    V->Val[MAX_DIM*k+2] = 0. ;
  }
  V->Val[0] = x;
  V->Val[1] = y;
  V->Type = VECTOR ;
}
