#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Data_Active.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"

#include "CurrentData.h"
#include "outil.h"
#include "Data_Numeric.h"

static struct ElementBox    ElementBox;
static struct Element     * LastElement;
static int                  GeoDim, ChainDim;

/* ------------------------------------------------------------------------ */
/*  I n i t _ S e a r c h G r i d                                           */
/* ------------------------------------------------------------------------ */

void Init_SearchGrid(struct Grid * Grid) {

  struct Element   Element;
  struct Geo_Node *GeoNode;

  struct NumxList  InvMap;
  List_T          *InvListAll, *InvList1D, *InvList2D,*InvList3D;
  
  double           NbrBricks;
  int              NbrGeoNodes, NbrGeoElements;
  int              i;

  LastElement = NULL;

  if(Grid->Init) return;

  NbrGeoNodes = Geo_GetNbrGeoNodes();
  GeoNode = Geo_GetGeoNode(0);
  Grid->Xmin = Grid->Xmax = GeoNode->x;
  Grid->Ymin = Grid->Ymax = GeoNode->y;
  Grid->Zmin = Grid->Zmax = GeoNode->z; 

  for (i = 1 ; i < NbrGeoNodes ; i++) {
    GeoNode = Geo_GetGeoNode(i);
    Grid->Xmin = MIN(Grid->Xmin, GeoNode->x);
    Grid->Xmax = MAX(Grid->Xmax, GeoNode->x);
    Grid->Ymin = MIN(Grid->Ymin, GeoNode->y);
    Grid->Ymax = MAX(Grid->Ymax, GeoNode->y);
    Grid->Zmin = MIN(Grid->Zmin, GeoNode->z); 
    Grid->Zmax = MAX(Grid->Zmax, GeoNode->z); 
  }

  NbrGeoElements = Geo_GetNbrGeoElements();
  NbrBricks      = (double)NbrGeoElements / 3.;

  if(Grid->Zmin == Grid->Zmax){	  
    Grid->Nx = Grid->Ny = MIN(250, (int)(sqrt(NbrBricks)+1.));
    Grid->Nz = 1; Grid->Zmin = 0.0; Grid->Zmax = 1.0;
    GeoDim = _2D;
  }
  else{
    Grid->Nx = Grid->Ny = Grid->Nz = MIN(40, (int)(pow(NbrBricks, 0.333)+1.));
    GeoDim = _3D;
  }

  Msg(INFO, "Initializing Grid (%d,%d,%d)", Grid->Nx, Grid->Ny, Grid->Nz);

  Grid->ListAll = List_Create(Grid->Nx*Grid->Ny*Grid->Nz, 1, sizeof(struct NumxList));
  Grid->List1D  = List_Create(Grid->Nx*Grid->Ny*Grid->Nz, 1, sizeof(struct NumxList));
  Grid->List2D  = List_Create(Grid->Nx*Grid->Ny*Grid->Nz, 1, sizeof(struct NumxList));
  Grid->List3D  = List_Create(Grid->Nx*Grid->Ny*Grid->Nz, 1, sizeof(struct NumxList));

  InvListAll = List_Create(NbrGeoElements, 1, sizeof(struct NumxList));
  InvList1D  = List_Create(NbrGeoElements, 1, sizeof(struct NumxList));
  InvList2D  = List_Create(NbrGeoElements, 1, sizeof(struct NumxList));
  InvList3D  = List_Create(NbrGeoElements, 1, sizeof(struct NumxList));

  InvMap.Num  = NO_ELEMENT ;
  InvMap.List = AllBricks(*Grid); 

  List_Add(InvListAll, &InvMap);
  List_Add(InvList1D, &InvMap);
  List_Add(InvList2D, &InvMap);
  List_Add(InvList3D, &InvMap);

  for (i=0 ; i < NbrGeoElements ; i++ ){ 

    Element.GeoElement = Geo_GetGeoElement(i) ;
    Element.Num        = Element.GeoElement->Num ;
    Element.Type       = Element.GeoElement->Type ;
    Current.Region = Element.Region = Element.GeoElement->Region ;

    if (Element.Region && Element.Type != POINT) {

      Get_NodesCoordinatesOfElement(&Element) ;
      InvMap.Num = Element.Num;
      PointInElementBox(&Element, 0., 0., 0.);

      InvMap.List = AllBricksForAnElementBox(*Grid); 

      List_Add(InvListAll, &InvMap);

      switch(Element.Type){
      case LINE        : case LINE_2        : 
	List_Add(InvList1D, &InvMap); 
	break;
      case TRIANGLE    : case TRIANGLE_2    : 
      case QUADRANGLE  : case QUADRANGLE_2  : 
	List_Add(InvList2D, &InvMap); 
	break;
      case TETRAHEDRON : case TETRAHEDRON_2 :
      case HEXAHEDRON  : case HEXAHEDRON_2  :
      case PRISM       : case PRISM_2       :
      case PYRAMID     : case PYRAMID_2     :
	List_Add(InvList3D, &InvMap); 
	break;
      }
    }
  }

  Invert_MappingLists(InvListAll, Grid->ListAll);
  Invert_MappingLists(InvList1D, Grid->List1D);
  Invert_MappingLists(InvList2D, Grid->List2D);
  Invert_MappingLists(InvList3D, Grid->List3D);

  List_Delete(InvListAll);
  List_Delete(InvList1D);
  List_Delete(InvList2D);
  List_Delete(InvList3D);

  Grid->Init = 1;    
}


/* ------------------------------------------------------------------------ */
/*  P o i n t E l e m e n t D i s t a n c e                                 */
/* ------------------------------------------------------------------------ */

void CrossProd (double a[3], double b[3], double c[3]){
  c[2] = a[0] * b[1] - a[1] * b[0];
  c[1] = - a[0] * b[2] + a[2] * b[0];
  c[0] = a[1] * b[2] - a[2] * b[1];
}

void DotProd (double a[3], double b[3], double *c){
  *c = a[0]*b[0] + a[1]*b[1] + a[2]*b[2]; 
}

double Length (double a[3]){
  return(sqrt(a[0]*a[0]+a[1]*a[1]+a[2]*a[2]));
}

void PointElementDistance(struct Element *Element, double x, double y, double z, 
			  struct PointElement *PointElement){

  double  p0p1[3], a[3], a1[3], a2[3], p0p1xa[3];
  double  A, A1, A2, p0p1a, p0p1a1, p0p1a2;

  p0p1[0] = x - Element->x[0] ;
  p0p1[1] = y - Element->y[0] ;
  p0p1[2] = z - Element->z[0] ;

  switch(Element->Type){

  case LINE :    
    a[0] = Element->x[1] - Element->x[0];
    a[1] = Element->y[1] - Element->y[0];
    a[2] = Element->z[1] - Element->z[0];
    A = Length(a);

    CrossProd(p0p1,a,p0p1xa);
    PointElement->d = Length(p0p1xa) / A;
    
    a[0] /= A; a[1] /= A; a[2] /= A;

    DotProd(p0p1,a,&p0p1a);
    PointElement->xp = Element->x[0] + a[0] * p0p1a;
    PointElement->yp = Element->y[0] + a[1] * p0p1a;
    PointElement->zp = Element->z[0] + a[2] * p0p1a;
    break;

  case TRIANGLE :
  case QUADRANGLE :
    a1[0] = Element->x[1] - Element->x[0];
    a1[1] = Element->y[1] - Element->y[0];
    a1[2] = Element->z[1] - Element->z[0];
    a2[0] = Element->x[2] - Element->x[0];
    a2[1] = Element->y[2] - Element->y[0];
    a2[2] = Element->z[2] - Element->z[0];
    A1 = Length(a1);
    A2 = Length(a2);

    CrossProd(a1, a2, a);
    A = Length(a);

    DotProd(p0p1,a,&p0p1a);
    PointElement->d = p0p1a / A;

    a1[0] /= A1; a1[1] /= A1; a1[2] /= A1;
    a2[0] /= A2; a2[1] /= A2; a2[2] /= A2;

    DotProd(p0p1,a1,&p0p1a1);
    DotProd(p0p1,a2,&p0p1a2);
    PointElement->xp = Element->x[0] + a1[0] * p0p1a1 + a2[0] * p0p1a2;
    PointElement->yp = Element->y[0] + a1[1] * p0p1a1 + a2[1] * p0p1a2;
    PointElement->zp = Element->z[0] + a1[2] * p0p1a1 + a2[2] * p0p1a2;
    break;

  default :
    Msg(ERROR, "Unknown Element Type %d in PointElementDistance", Element->Type);
    break;
  }  

}

int fcmp_PointElement(const void * a, const void * b) {
  double cmp;

  cmp = ((struct PointElement *)a)->d - ((struct PointElement *)b)->d;
  if(cmp < 0) return -1;
  else if(cmp > 0) return 1;
  else return 0;
}


/* ------------------------------------------------------------------------ */
/*  I n W i c h E l e m e n t                                               */
/* ------------------------------------------------------------------------ */

int fcmp_NumxList(const void * a, const void * b) {
  return  ((struct NumxList *)a)->Num - ((struct NumxList *)b)->Num ;
}

void InWhichElement (struct Grid Grid, List_T *ExcludeRegion_L,
		     struct Element * Element, int Dim,
		     double  x, double  y, double  z, 
		     double *u, double *v, double *w) {
 
  /* Note: Il est garanti en sortie que les fcts de forme geometriques sont 
     initialisees en u,v,w */
 
  List_T              *Brick_L, *PointElement_L;
  struct NumxList      Brick, *Brick_P ;
  struct PointElement  PointElement ;
  int                  BoxNum, Projection, i ;  

  ChainDim   = Dim ;
  Projection = (ChainDim == _1D || (ChainDim == _2D && GeoDim == _3D));
  
  if(!Projection && LastElement){
    if (PointInElement(LastElement, -1, ExcludeRegion_L, x, y, z, u, v, w)) return;
  }

  if ((Brick.Num = InWhichBrick(Grid, x, y, z)) == NO_BRICK) {
    Element->Num = NO_ELEMENT ;
    Element->Region = NO_REGION ;
    return;
  }

  switch(ChainDim){
  case _ALL : Brick_L = Grid.ListAll; break;
  case _1D  : Brick_L = Grid.List1D;  break;
  case _2D  : Brick_L = Grid.List2D;  break;
  case _3D  : Brick_L = Grid.List3D;  break;    
  default   : 
    Msg(ERROR, "Unknown Chain Dimension %d", ChainDim);
    break;
  } 
  
  if (!(Brick_P = (struct NumxList *)List_PQuery(Brick_L, &Brick, fcmp_NumxList)))
    Msg(ERROR, "Brick %d not found in Grid", Brick.Num) ;

  if(Projection){

    PointElement_L = List_Create(10, 10, sizeof(PointElement));

    for (i=0 ; i < List_Nbr(Brick_P->List) ; i++) {
      if ((BoxNum = *(int *)List_Pointer(Brick_P->List, i)) != NO_ELEMENT){
	Element->GeoElement = Geo_GetGeoElementOfNum(BoxNum) ;
	Element->Num = Element->GeoElement->Num ;
	Element->Type = Element->GeoElement->Type ;
	Element->Region = Element->GeoElement->Region ;
	Get_NodesCoordinatesOfElement(Element) ;

	if (PointInElementBox(Element, x, y, z)){	  
	  PointElementDistance(Element, x, y, z, &PointElement);

	  printf("elm %d : dist = %f (project = %f %f %f )\n", 
		 Element->Num, PointElement.d, PointElement.xp, 
		 PointElement.yp, PointElement.zp);

	  PointElement.Element = *Element;
	  List_Add(PointElement_L, &PointElement);
	}	
      }
    }

    List_Tri(PointElement_L, fcmp_PointElement);
    
    for(i=0 ; i<List_Nbr(PointElement_L) ; i++){
      List_Read(PointElement_L, i, &PointElement);
      xyz2uvwInAnElement(&PointElement.Element, PointElement.xp, PointElement.yp, 
			 PointElement.zp, u, v, w, NULL, -1);
      if(PointInRefElement(&PointElement.Element, *u, *v, *w)) {
	Element = LastElement = &PointElement.Element;

	printf("elm chosen : %d (u=%f v=%f w=%f)\n", Element->Num,*u,*v,*w);

	return;      
      }
    }
    
  }
    
  else{

    for (i=0 ; i < List_Nbr(Brick_P->List) ; i++) {
      if ((BoxNum = *(int *)List_Pointer(Brick_P->List, i)) != NO_ELEMENT){
	if (PointInElement(Element, BoxNum, ExcludeRegion_L, x, y, z, u, v, w)) {
	  LastElement = Element;
	  return;
	}
      }
    }

  }
  
  Element->Num = NO_ELEMENT ;
  Element->Region = NO_REGION ;
}

/* ------------------------------------------------------------------------ */
/*  I n W i c h B r i c k                                                   */
/* ------------------------------------------------------------------------ */

int InWhichBrick (struct Grid Grid, double x, double y, double z) {

  int Ix, Iy, Iz;
  
  if (x > Grid.Xmax || x < Grid.Xmin || 
      y > Grid.Ymax || y < Grid.Ymin || 
      z > Grid.Zmax || z < Grid.Zmin) 
    return(NO_BRICK);
  
  Ix = (int) ((double)Grid.Nx * (x - Grid.Xmin) / (Grid.Xmax - Grid.Xmin)); 
  Iy = (int) ((double)Grid.Ny * (y - Grid.Ymin) / (Grid.Ymax - Grid.Ymin)); 
  Iz = (int) ((double)Grid.Nz * (z - Grid.Zmin) / (Grid.Zmax - Grid.Zmin)); 

  Ix = (Ix < Grid.Nx) ? Ix : Grid.Nx-1;
  Iy = (Iy < Grid.Ny) ? Iy : Grid.Ny-1;
  Iz = (Iz < Grid.Nz) ? Iz : Grid.Nz-1;

  return(1 + Ix + Iy*Grid.Nx + Iz*Grid.Nx*Grid.Ny);
}

/* ------------------------------------------------------------------------ */
/*  P o i n t I n E l e m e n t                                             */
/* ------------------------------------------------------------------------ */

int PointInElement (struct Element * Element, int iElement, 
		    List_T *ExcludeRegion_L,
		    double  x, double  y, double  z, 
		    double *u, double *v, double *w) {
  
  if(iElement != -1){
    Element->GeoElement = Geo_GetGeoElementOfNum(iElement) ;
    if(ExcludeRegion_L)
      if(List_Search(ExcludeRegion_L, &Element->GeoElement->Region, fcmp_int))
	return(0);
    Element->Num = Element->GeoElement->Num ;
    Element->Type = Element->GeoElement->Type ;
    Element->Region = Element->GeoElement->Region ;    
    Get_NodesCoordinatesOfElement(Element) ;
  }

  if (!PointInElementBox(Element, x, y, z)) return(0);

  xyz2uvwInAnElement(Element, x, y, z, u, v, w, NULL, -1);

  if(!PointInRefElement(Element, *u, *v, *w)) return(0);

  return(1);
 
}

/* ------------------------------------------------------------------------ */
/*  P o i n t I n E l e m e n t B o x                                       */
/* ------------------------------------------------------------------------ */

int PointInElementBox(struct Element * Element, double x, double y, double z) {

  double XPolyConv, YPolyConv, Xmid, Ymid;
  double d, dxy, dxz, dyz;
  int    i;

  switch(Element->Type){
    
  case LINE        : 
  case TRIANGLE    : case QUADRANGLE :
  case TETRAHEDRON : case HEXAHEDRON : 
  case PRISM       : case PYRAMID    :   

    ElementBox.Xmin = ElementBox.Xmax = Element->x[0];
    ElementBox.Ymin = ElementBox.Ymax = Element->y[0];
    ElementBox.Zmin = ElementBox.Zmax = Element->z[0];
    for (i = 1 ; i < Element->GeoElement->NbrNodes ; i++) {
      ElementBox.Xmin = MIN(ElementBox.Xmin, Element->x[i]);
      ElementBox.Xmax = MAX(ElementBox.Xmax, Element->x[i]);
      ElementBox.Ymin = MIN(ElementBox.Ymin, Element->y[i]);
      ElementBox.Ymax = MAX(ElementBox.Ymax, Element->y[i]);
      ElementBox.Zmin = MIN(ElementBox.Zmin, Element->z[i]);
      ElementBox.Zmax = MAX(ElementBox.Zmax, Element->z[i]);
    }

    if( (ChainDim == _1D && Element->Type == LINE) ||
	(ChainDim == _2D && (Element->Type == TRIANGLE || Element->Type == QUADRANGLE)) ){
	
      dxy = (ElementBox.Xmax-ElementBox.Xmin)-(ElementBox.Ymax-ElementBox.Ymin);
      dxz = (ElementBox.Xmax-ElementBox.Xmin)-(ElementBox.Zmax-ElementBox.Zmin);
      dyz = (ElementBox.Ymax-ElementBox.Ymin)-(ElementBox.Zmax-ElementBox.Zmin);

      if(dxy >= 0 && dxz >= 0){
	ElementBox.Ymin -= dxy/2. ; ElementBox.Ymax += dxy/2. ;
	ElementBox.Zmin -= dxz/2. ; ElementBox.Zmax += dxz/2. ;
      }
      else if(dxy <= 0 && dyz >= 0){
	ElementBox.Xmin += dxy/2. ; ElementBox.Xmax -= dxy/2. ;
	ElementBox.Zmin -= dyz/2. ; ElementBox.Zmax += dyz/2. ;
      }
      else if(dxz <= 0 && dyz <= 0){
	ElementBox.Xmin += dxz/2. ; ElementBox.Xmax -= dxz/2. ;
	ElementBox.Ymin += dyz/2. ; ElementBox.Ymax -= dyz/2. ;	
      }
      
      d = ElementBox.Xmax - ElementBox.Xmin ;

      ElementBox.Xmin -= d/10. ; ElementBox.Xmax += d/10.;
      ElementBox.Ymin -= d/10. ; ElementBox.Ymax += d/10.;
      ElementBox.Zmin -= d/10. ; ElementBox.Zmax += d/10.;
    }

    if (x > ElementBox.Xmax || x < ElementBox.Xmin ||
	y > ElementBox.Ymax || y < ElementBox.Ymin ||
	z > ElementBox.Zmax || z < ElementBox.Zmin)
      return (0);
    else
      return (1);

  case LINE_2      :
  case TRIANGLE_2  : case QUADRANGLE_2 :

    ElementBox.Xmin = ElementBox.Xmax = Element->x[0];
    ElementBox.Ymin = ElementBox.Ymax = Element->y[0];
    ElementBox.Zmin = 0.0;
    ElementBox.Zmax = 0.0;
    
    for (i = 1 ; i < Element->GeoElement->NbrNodes ; i++) {
      
      if(Element->z[i] != 0.0)
	Msg(ERROR, "2nd order PointInElementBox not done for the 3D case");

      if (i % 2 == 0) {
	XPolyConv = Element->x[i];
	YPolyConv = Element->y[i];
      } 
      else {
	if ((Element->GeoElement->NbrNodes == 6) && (i == 5)) {
	  Xmid = 0.5 * (Element->x[0] + Element->x[4]);
	  Ymid = 0.5 * (Element->y[0] + Element->y[4]);
	} 
	else if ((Element->GeoElement->NbrNodes == 9) && (i == 7)) {
	  Xmid = 0.5 * (Element->x[0] + Element->x[6]);
	  Ymid = 0.5 * (Element->y[0] + Element->y[6]);
	} 
	else if ((Element->GeoElement->NbrNodes == 9) && (i == 8)) {
	  Xmid = Element->x[i];
	  Ymid = Element->y[i];
	} 
	else {
	  Xmid = 0.5 * (Element->x[i-1] + Element->x[i+1]);
	  Ymid = 0.5 * (Element->y[i-1] + Element->y[i+1]);
	}
	XPolyConv = Xmid + 2.* (Element->x[i] - Xmid);
	YPolyConv = Ymid + 2.* (Element->y[i] - Ymid);
      }
      ElementBox.Xmin = MIN(ElementBox.Xmin, XPolyConv);
      ElementBox.Xmax = MAX(ElementBox.Xmax, XPolyConv);
      ElementBox.Ymin = MIN(ElementBox.Ymin, YPolyConv);
      ElementBox.Ymax = MAX(ElementBox.Ymax, YPolyConv);
    }
    if (x > ElementBox.Xmax || x < ElementBox.Xmin ||
	y > ElementBox.Ymax || y < ElementBox.Ymin) 
      return (0);
    else
      return (1);

  case TETRAHEDRON_2 : case HEXAHEDRON_2 :
  case PRISM_2       : case PYRAMID_2    :
    Msg(ERROR, "PointInElementBox not done for the 3D case");
    return (-1) ;

  case POINT :
    return (0) ;

  default :    
    Msg(ERROR, "Unknown Element Type in 'PointInElementBox'"); 
    return (-1) ;
  }
}


/* ------------------------------------------------------------------------ */
/*  P o i n t I n R e f E l e m e n t                                       */
/* ------------------------------------------------------------------------ */

int PointInRefElement (struct Element * Element, double u, double v, double w){
  
  switch(Element->Type) {
  case LINE : case LINE_2 :
    if (u<-1. || u>1.) return(0); 
    return(1);
  case TRIANGLE : case TRIANGLE_2 :
    if (u<0. || v<0. || u>(1.-v)) return(0); 
    return(1);
  case QUADRANGLE : case QUADRANGLE_2 :
    if (u<-1.  || v<-1. || u>1. || v>1.) return (0); 
    return(1);
  case TETRAHEDRON : case TETRAHEDRON_2 :
    if (u<0. || v<0. || w<0. || u>(1.-v-w)) return(0); 
    return(1);
  case HEXAHEDRON : case HEXAHEDRON_2 :
    if (u<-1. || v<-1. || w<-1. || u>1. || v>1. || w>1.) return(0); 
    return(1);
  case PRISM : case PRISM_2 :
    if (w>1. || w<-1. || u<0. || v<0. || u>(1.-v)) return(0); 
    return(1);
  case PYRAMID : case PYRAMID_2 :
    if (u<(w-1.) || u>(1.-w) || v<(w-1.) || v>(1.-w) || w<0. || w>1.) return(0); 
    return(1);
  default :
    return(0);
  }

}

/* ------------------------------------------------------------------------ */
/*  A l l B r i c k s                                                       */
/* ------------------------------------------------------------------------ */

List_T * AllBricks (struct Grid Grid) {
  List_T  * List;
  int       i, NbrBricks;

  NbrBricks = Grid.Nx * Grid.Ny * Grid.Nz ;

  List = List_Create(NbrBricks, 1, sizeof(int));
  for (i=1 ; i<=NbrBricks ; i++){
    List_Add(List, &i);
  }
  return(List);

}

/* ------------------------------------------------------------------------ */
/*  A l l B r i c k s F o r A n E l e m e n t B o x                         */
/* ------------------------------------------------------------------------ */

List_T * AllBricksForAnElementBox (struct Grid Grid){  
  List_T  * List;
  int       Ix1, Ix2, Iy1, Iy2, Iz1, Iz2;
  int       i, j, k, Num;

  Ix1 = (int) ((double)Grid.Nx * (ElementBox.Xmin - Grid.Xmin) / 
	       (Grid.Xmax - Grid.Xmin)); 
  Ix2 = (int) ((double)Grid.Nx * (ElementBox.Xmax - Grid.Xmin) / 
	       (Grid.Xmax - Grid.Xmin)); 
  Iy1 = (int) ((double)Grid.Ny * (ElementBox.Ymin - Grid.Ymin) / 
	       (Grid.Ymax - Grid.Ymin)); 
  Iy2 = (int) ((double)Grid.Ny * (ElementBox.Ymax - Grid.Ymin) / 
	       (Grid.Ymax - Grid.Ymin)); 
  Iz1 = (int) ((double)Grid.Nz * (ElementBox.Zmin - Grid.Zmin) / 
	       (Grid.Zmax - Grid.Zmin)); 
  Iz2 = (int) ((double)Grid.Nz * (ElementBox.Zmax - Grid.Zmin) / 
	       (Grid.Zmax - Grid.Zmin));

  Ix1 = (Ix1 < Grid.Nx) ? Ix1 : Grid.Nx-1;
  Ix2 = (Ix2 < Grid.Nx) ? Ix2 : Grid.Nx-1;
  Iy1 = (Iy1 < Grid.Ny) ? Iy1 : Grid.Ny-1;
  Iy2 = (Iy2 < Grid.Ny) ? Iy2 : Grid.Ny-1;
  Iz1 = (Iz1 < Grid.Nz) ? Iz1 : Grid.Nz-1;
  Iz2 = (Iz2 < Grid.Nz) ? Iz2 : Grid.Nz-1;

  List = List_Create((Ix2-Ix1+1)*(Iy2-Iy1+1)*(Iz2-Iz1+1), 1, sizeof(int));
  for (i=Ix1 ; i<=Ix2 ; i++){
    for (j=Iy1 ; j<=Iy2 ; j++){
      for (k=Iz1 ; k<=Iz2 ; k++){
	Num = 1 + i + j*Grid.Nx + k*Grid.Nx*Grid.Ny ;
	List_Add(List, &Num);
      }
    }
  }
  return(List);

}


/* ------------------------------------------------------------------------ */
/*  x y z 2 u v w I n A n E l e m e n t                                     */
/* ------------------------------------------------------------------------ */

#define NR_PRECISION   1.e-6  /* a comparer a l'intervalle de variation de uvw */
#define NR_MAX_ITER    50

void xyz2uvwInAnElement (struct Element *Element, 
			 double  x, double  y, double  z, 
			 double *u, double *v, double *w,
			 double   (*Get_Jacobian) (struct Element * Element, MATRIX3x3 * Jac),
			 int      Dimension){

  double   x_est, y_est, z_est;
  double   u_new, v_new, w_new;
  double   Error = 1.0 ;
  int      i, iter = 1 ;
  int      Type_Dimension, Type_Jacobian;

  *u = *v = *w = 0.0;

  if(!Get_Jacobian){
    if (ChainDim == _1D && GeoDim == _3D) 
      Type_Jacobian = JACOBIAN_LIN;
    else if((ChainDim == _1D && GeoDim == _2D) ||
	    (ChainDim == _2D && GeoDim == _3D)) 
      Type_Jacobian = JACOBIAN_SUR;
    else 
      Type_Jacobian = JACOBIAN_VOL;
  }
  else{
    Type_Dimension = Dimension;
  }

  while (Error > NR_PRECISION && iter < NR_MAX_ITER){

    iter++ ;

    Get_GeoElement(Element, *u, *v, *w) ;
    
    if(!Get_Jacobian){
      Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
	Get_JacobianFunction(Type_Jacobian, Element->Type, &Type_Dimension) ;
    }

    Element->DetJac = Get_Jacobian(Element, &Element->Jac) ;

    if (Element->DetJac != 0) {

      Get_InverseMatrix(Type_Dimension, Element->Type, Element->DetJac, 
			&Element->Jac, &Element->InvJac) ;

      x_est = y_est = z_est = 0. ;
      for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
	x_est += Element->x[i] * Element->n[i] ;
	y_est += Element->y[i] * Element->n[i] ;
	z_est += Element->z[i] * Element->n[i] ;
      }

      u_new = *u + Element->InvJac.c11 * (x-x_est) + 
	           Element->InvJac.c21 * (y-y_est) +
	           Element->InvJac.c31 * (z-z_est) ;
      v_new = *v + Element->InvJac.c12 * (x-x_est) + 
	           Element->InvJac.c22 * (y-y_est) +
	           Element->InvJac.c32 * (z-z_est) ;
      w_new = *w + Element->InvJac.c13 * (x-x_est) + 
                   Element->InvJac.c23 * (y-y_est) +
	           Element->InvJac.c33 * (z-z_est) ;

      Error = DSQU(u_new - *u) + DSQU(v_new - *v) + DSQU(w_new - *w);      

      *u = u_new;
      *v = v_new;
      *w = w_new;
    }
    else{
      Msg(WARNING, "Zero Determinant in xyz2uvwInAnElement") ;
      break;
    }
  }

  if(iter == NR_MAX_ITER) 
    Msg(WARNING, "Maximum Number of Iterations Exceeded in xyz2uvwInAnElement") ;

  /* Msg(INFO, "%d iterations in xyz2uvw", iter); */

}

#undef NR_PRECISION
#undef NR_MAX_ITER
  

/* ------------------------------------------------------------------------ */
/*  I n v e r t _ M a p p i n g L i s t s                                   */
/* ------------------------------------------------------------------------ */

void Invert_MappingLists (List_T * List1, List_T * List2) {
  
  struct NumxList   TmpMap1, TmpMap2 ;
  struct NumxList * TmpMap;
  List_T          * TmpList;

  int i, j, Entity, CurrentEntity;

  TmpList = List_Create(10*List_Nbr(List1), 100, sizeof(int));

  for(i=0 ; i<List_Nbr(List1) ; i++){
    List_Read(List1, i, &TmpMap1);
    for(j=0 ; j<List_Nbr(TmpMap1.List) ; j++){
      List_Read(TmpMap1.List, j, &Entity);
      List_Add(TmpList, &Entity);
    }
  }
    
  List_Tri(TmpList, fcmp_int);

  List_Read(TmpList, 0, &CurrentEntity);
  TmpMap1.Num = CurrentEntity;
  TmpMap1.List = List_Create(10, 10, sizeof(int));
  List_Add(List2, &TmpMap1);
  for(i=1 ; i<List_Nbr(TmpList) ; i++){
    List_Read(TmpList, i, &Entity);
    if (Entity != CurrentEntity) {
      CurrentEntity = Entity;
      TmpMap1.Num = CurrentEntity;
      TmpMap1.List = List_Create(10, 10, sizeof(int));
      List_Add(List2, &TmpMap1);
    }
  }
  
  for(i=0 ; i<List_Nbr(List1) ; i++){
    List_Read(List1, i, &TmpMap1);
    for(j=0 ; j<List_Nbr(TmpMap1.List) ; j++){
      List_Read(TmpMap1.List, j, &Entity);
      TmpMap2.Num = Entity;
      if ((TmpMap = (struct NumxList*)List_PQuery(List2, &TmpMap2, fcmp_NumxList)) != NULL) {	
	List_Add(TmpMap->List, &TmpMap1.Num);
      }
    }
  }

  List_Delete(TmpList);

}

/* ------------------------------------------------------------------------ */
/*  P r i n t _ M a p p i n g L i s t                                       */
/* ------------------------------------------------------------------------ */

void Print_MappingList (List_T * List) {
  int i,j;
  
  for(i=0;i<List_Nbr(List);i++){
    printf("%d --> ", ((struct NumxList *)List_Pointer(List,i))->Num);
    for(j=0;j<List_Nbr(((struct NumxList *)List_Pointer(List,i))->List);j++){
      printf("%d ", (*(int *)List_Pointer( ((struct NumxList *)List_Pointer(List,i))->List ,j) ));
    }
    printf("\n");
  }
}

