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

static struct Element  * LastElement;
static int GeoDim, ChainDim;

/* ------------------------------------------------------------------------ */
/*  C o m p u t e E l e m e n t B o x                                       */
/* ------------------------------------------------------------------------ */

int ComputeElementBox(struct Element * Element,
		      struct ElementBox * ElementBox) {

  double XPolyConv, YPolyConv, Xmid, Ymid;
  double d, dxy, dxz, dyz;
  int    i;

  ElementBox->Xmin = ElementBox->Xmax = Element->x[0];
  ElementBox->Ymin = ElementBox->Ymax = Element->y[0];
  ElementBox->Zmin = ElementBox->Zmax = Element->z[0];

  switch(Element->Type){
    
  case LINE        : 
  case TRIANGLE    : case QUADRANGLE :
  case TETRAHEDRON : case HEXAHEDRON : 
  case PRISM       : case PYRAMID    :   
    for (i = 1 ; i < Element->GeoElement->NbrNodes ; i++) {
      ElementBox->Xmin = MIN(ElementBox->Xmin, Element->x[i]);
      ElementBox->Xmax = MAX(ElementBox->Xmax, Element->x[i]);
      ElementBox->Ymin = MIN(ElementBox->Ymin, Element->y[i]);
      ElementBox->Ymax = MAX(ElementBox->Ymax, Element->y[i]);
      ElementBox->Zmin = MIN(ElementBox->Zmin, Element->z[i]);
      ElementBox->Zmax = MAX(ElementBox->Zmax, Element->z[i]);
    }

    if( (ChainDim == _1D && Element->Type == LINE) ||
	(ChainDim == _2D && (Element->Type == TRIANGLE || Element->Type == QUADRANGLE)) ){
	
      dxy = (ElementBox->Xmax-ElementBox->Xmin)-(ElementBox->Ymax-ElementBox->Ymin);
      dxz = (ElementBox->Xmax-ElementBox->Xmin)-(ElementBox->Zmax-ElementBox->Zmin);
      dyz = (ElementBox->Ymax-ElementBox->Ymin)-(ElementBox->Zmax-ElementBox->Zmin);

      if(dxy >= 0 && dxz >= 0){
	ElementBox->Ymin -= dxy/2. ; ElementBox->Ymax += dxy/2. ;
	ElementBox->Zmin -= dxz/2. ; ElementBox->Zmax += dxz/2. ;
      }
      else if(dxy <= 0 && dyz >= 0){
	ElementBox->Xmin += dxy/2. ; ElementBox->Xmax -= dxy/2. ;
	ElementBox->Zmin -= dyz/2. ; ElementBox->Zmax += dyz/2. ;
      }
      else if(dxz <= 0 && dyz <= 0){
	ElementBox->Xmin += dxz/2. ; ElementBox->Xmax -= dxz/2. ;
	ElementBox->Ymin += dyz/2. ; ElementBox->Ymax -= dyz/2. ;	
      }
      
      d = ElementBox->Xmax - ElementBox->Xmin ;

      ElementBox->Xmin -= d/10. ; ElementBox->Xmax += d/10.;
      ElementBox->Ymin -= d/10. ; ElementBox->Ymax += d/10.;
      ElementBox->Zmin -= d/10. ; ElementBox->Zmax += d/10.;
    }
    break;

  case LINE_2      :
  case TRIANGLE_2  : case QUADRANGLE_2 :
    for (i = 1 ; i < Element->GeoElement->NbrNodes ; i++) {
      if(Element->z[i] != 0.0)
	Msg(ERROR, "2nd order ComputeElementBox not done for the 3D case");
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
      ElementBox->Xmin = MIN(ElementBox->Xmin, XPolyConv);
      ElementBox->Xmax = MAX(ElementBox->Xmax, XPolyConv);
      ElementBox->Ymin = MIN(ElementBox->Ymin, YPolyConv);
      ElementBox->Ymax = MAX(ElementBox->Ymax, YPolyConv);
    }
    break;

  default :    
    Msg(ERROR, "Unknown Element Type in 'ComputeElementBox'"); 
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  P o i n t I n X X X                                                     */
/* ------------------------------------------------------------------------ */

int PointInElementBox(struct ElementBox ElementBox, double x, double y, double z) {

  if (x > ElementBox.Xmax || x < ElementBox.Xmin ||
      y > ElementBox.Ymax || y < ElementBox.Ymin ||
      z > ElementBox.Zmax || z < ElementBox.Zmin)
    return (0);
  else
    return (1);
}

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

int PointInElement (struct Element * Element,
		    List_T *ExcludeRegion_L,
		    double  x, double  y, double  z, 
		    double *u, double *v, double *w) {

  struct ElementBox ElementBox ;

  if(ExcludeRegion_L)
    if(List_Search(ExcludeRegion_L, &Element->GeoElement->Region, fcmp_int))
      return(0);

  Element->Num = Element->GeoElement->Num ;
  Element->Type = Element->GeoElement->Type ;
  Element->Region = Element->GeoElement->Region ;    

  Get_NodesCoordinatesOfElement(Element) ;
  ComputeElementBox(Element, &ElementBox);

  if (!PointInElementBox(ElementBox, x, y, z)) return(0);

  xyz2uvwInAnElement(Element, x, y, z, u, v, w, NULL, -1);

  if(!PointInRefElement(Element, *u, *v, *w)) return(0);

  return(1);
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ S e a r c h G r i d                                           */
/* ------------------------------------------------------------------------ */

void Init_SearchGrid(struct Grid * Grid) {

  struct Element      Element;
  struct ElementBox   ElementBox;
  struct Geo_Node    *GeoNode;
  struct Brick        Brick, *Brick_P;
  double Xc, Yc, Zc ;
  int    NbrGeoNodes, NbrGeoElements, iElm;
  int    Ix1, Ix2, Iy1, Iy2, Iz1, Iz2;
  int    i, j, k, index;

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

  /* trouver un critere, en fct du nbr d'elements...

     if(Grid->Zmin == Grid->Zmax){	  
       Grid->Nx = Grid->Ny = MIN(250, (int)(sqrt(NbrGeoElements / 3.)+1.));
       Grid->Nz = 1; Grid->Zmin = 0.0; Grid->Zmax = 1.0;
       GeoDim = _2D;
     }
     else{
       Grid->Nx = Grid->Ny = Grid->Nz = MIN(40, (int)(pow(NbrGeoElements / 3., 0.333)+1.));
       GeoDim = _3D;
     }
  */

  if(Grid->Ymin == Grid->Ymax){
    Grid->Nx = 20 ; Grid->Ny = Grid->Nz = 1;
    GeoDim = _1D;
  }
  else if(Grid->Zmin == Grid->Zmax){
    Grid->Nx = Grid->Ny = 20 ; Grid->Nz = 1;
    GeoDim = _2D;
  }
  else{
    Grid->Nx = Grid->Ny = Grid->Nz = 20;
    GeoDim = _3D;
  }

  Xc = Grid->Xmax-Grid->Xmin;
  Yc = Grid->Ymax-Grid->Ymin;
  Zc = Grid->Zmax-Grid->Zmin;
  
  Grid->Xmin = Grid->Xmin - 0.1 * Xc ;
  Grid->Ymin = Grid->Ymin - 0.1 * Yc ;
  Grid->Zmin = Grid->Zmin - 0.1 * Zc ;
  Grid->Xmax = Grid->Xmax + 0.1 * Xc ;
  Grid->Ymax = Grid->Ymax + 0.1 * Yc ;
  Grid->Zmax = Grid->Zmax + 0.1 * Zc ;

  Msg(INFO, "Initializing Grid (%d,%d,%d)", Grid->Nx, Grid->Ny, Grid->Nz);

  Grid->Bricks = List_Create(Grid->Nx * Grid->Ny * Grid->Nz, 10, sizeof(Brick));
  for(i = 0; i < Grid->Nx * Grid->Ny * Grid->Nz ; i++){
    for(j = 0 ; j < 3 ; j++) Brick.p[j] = List_Create(2, 2, sizeof(struct Geo_Element*));
    List_Add(Grid->Bricks, &Brick);
  }

  NbrGeoElements = Geo_GetNbrGeoElements();

  for (iElm=0 ; iElm < NbrGeoElements ; iElm++ ){ 

    Element.GeoElement = Geo_GetGeoElement(iElm) ;
    Element.Num        = Element.GeoElement->Num ;
    Element.Type       = Element.GeoElement->Type ;
    Current.Region = Element.Region = Element.GeoElement->Region ;

    if (Element.Region && Element.Type != POINT) {

      Get_NodesCoordinatesOfElement(&Element) ;
      ComputeElementBox(&Element, &ElementBox);

      Ix1 = (int)((double)Grid->Nx*(ElementBox.Xmin-Grid->Xmin)/(Grid->Xmax-Grid->Xmin)); 
      Ix2 = (int)((double)Grid->Nx*(ElementBox.Xmax-Grid->Xmin)/(Grid->Xmax-Grid->Xmin)); 
      Iy1 = (int)((double)Grid->Ny*(ElementBox.Ymin-Grid->Ymin)/(Grid->Ymax-Grid->Ymin)); 
      Iy2 = (int)((double)Grid->Ny*(ElementBox.Ymax-Grid->Ymin)/(Grid->Ymax-Grid->Ymin)); 
      Iz1 = (int)((double)Grid->Nz*(ElementBox.Zmin-Grid->Zmin)/(Grid->Zmax-Grid->Zmin)); 
      Iz2 = (int)((double)Grid->Nz*(ElementBox.Zmax-Grid->Zmin)/(Grid->Zmax-Grid->Zmin)); 
  
      Ix1 = MAX(Ix1, 0);
      Ix2 = MIN(Ix2, Grid->Nx-1);
      Iy1 = MAX(Iy1, 0);
      Iy2 = MIN(Iy2, Grid->Ny-1);
      Iz1 = MAX(Iz1, 0);
      Iz2 = MIN(Iz2, Grid->Nz-1);

      for(i = Ix1 ; i <= Ix2 ; i++){
	for(j = Iy1 ; j <= Iy2 ; j++){
	  for(k = Iz1 ; k <= Iz2 ; k++){
	    index = i + j * Grid->Nx + k * Grid->Nx * Grid->Ny;
	    Brick_P = (struct Brick*)List_Pointer(Grid->Bricks, index);
	    switch(Element.GeoElement->Type){
	    case LINE : case LINE_2 : 
	      List_Add(Brick_P->p[0], &Element.GeoElement); 
	      break;
	    case TRIANGLE :	case TRIANGLE_2 :
	    case QUADRANGLE : case QUADRANGLE_2 :
	      List_Add(Brick_P->p[1], &Element.GeoElement); 
	      break;
	    case TETRAHEDRON : case TETRAHEDRON_2 : 
	    case HEXAHEDRON : case HEXAHEDRON_2 : 
	    case PRISM : case PRISM_2 :
	    case PYRAMID : case PYRAMID_2 :
	      List_Add(Brick_P->p[2], &Element.GeoElement); 
	      break;
	    }
	  }
	}
      }
    }
  }

  /* debug
  for (i=0 ; i<List_Nbr(Grid->Bricks) ; i++) {
    Brick_P = (struct Brick *)List_Pointer(Grid->Bricks, i) ;
    printf("BRICK %d : ", i) ;
    for (j=0 ; j<List_Nbr(Brick_P->p[2]) ; j++) {
      Element.GeoElement = *(struct Geo_Element **)List_Pointer(Brick_P->p[2], j) ;
      printf("%d ", Element.GeoElement->Num) ;
    }
    printf("\n");
  }
  */

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
/*  I n W h i c h   X X X                                                   */
/* ------------------------------------------------------------------------ */

int InWhichBrick (struct Grid *pGrid, double X, double Y, double Z) {

  int    Ix,Iy,Iz,index;

  if(X > pGrid->Xmax || X < pGrid->Xmin || Y > pGrid->Ymax || 
     Y < pGrid->Ymin || Z > pGrid->Zmax || Z < pGrid->Zmin){
    return(NO_BRICK);
  }

  Ix = (int)((double)pGrid->Nx * (X-pGrid->Xmin) / (pGrid->Xmax-pGrid->Xmin)); 
  Iy = (int)((double)pGrid->Ny * (Y-pGrid->Ymin) / (pGrid->Ymax-pGrid->Ymin)); 
  Iz = (int)((double)pGrid->Nz * (Z-pGrid->Zmin) / (pGrid->Zmax-pGrid->Zmin)); 
  Ix = MIN(Ix,pGrid->Nx-1);
  Iy = MIN(Iy,pGrid->Ny-1);
  Iz = MIN(Iz,pGrid->Nz-1);

  if(Ix<0)Ix=0;
  if(Iy<0)Iy=0;
  if(Iz<0)Iz=0;

  return index = Ix + Iy * pGrid->Nx + Iz * pGrid->Nx * pGrid->Ny;
}

void InWhichElement (struct Grid Grid, List_T *ExcludeRegion_L,
		     struct Element * Element, int Dim,
		     double  x, double  y, double  z, 
		     double *u, double *v, double *w) {
 
  /* Note: Il est garanti en sortie que les fcts de forme geometriques sont 
     initialisees en u,v,w */
 
  List_T              *PointElement_L;
  struct ElementBox    ElementBox;
  struct Brick         Brick, *Brick_P ;
  struct PointElement  PointElement ;
  int                  i, j, dim, lowdim, highdim, Projection;  

  ChainDim   = Dim ;
  Projection = (ChainDim == _1D || (ChainDim == _2D && GeoDim == _3D));
  
  if(!Projection && LastElement){
    if (PointInElement(LastElement, ExcludeRegion_L, x, y, z, u, v, w)) return;
  }

  if ((i = InWhichBrick(&Grid, x, y, z)) == NO_BRICK) {
    Element->Num = NO_ELEMENT ;
    Element->Region = NO_REGION ;
    return;
  }
  
  if (!(Brick_P = (struct Brick *)List_Pointer(Grid.Bricks, i)))
    Msg(ERROR, "Brick %d not found in Grid", i) ;

  switch(ChainDim){
  case _ALL : lowdim = 0 ; highdim = 3 ; break;
  case _1D  : lowdim = 0 ; highdim = 1 ; break;
  case _2D  : lowdim = 1 ; highdim = 2 ; break;
  case _3D  : lowdim = 2 ; highdim = 3 ; break;    
  default   : 
    Msg(ERROR, "Unknown Chain Dimension %d", ChainDim);
    break;
  } 

  if(!Projection){

    for(dim = highdim ; dim > lowdim ; dim--) {
      for (i=0 ; i < List_Nbr(Brick_P->p[dim-1]) ; i++) {
	Element->GeoElement = *(struct Geo_Element**)List_Pointer(Brick_P->p[dim-1], i) ;
	if (PointInElement(Element, ExcludeRegion_L, x, y, z, u, v, w)) {
	  LastElement = Element;
	  return;
	}
      }
    }

  }
  else{
    
    PointElement_L = List_Create(10, 10, sizeof(PointElement));

    for (dim = lowdim ; dim < highdim  ; dim++){

      for (i=0 ; i < List_Nbr(Brick_P->p[dim-1]) ; i++) {
	Element->GeoElement = *(struct Geo_Element**)List_Pointer(Brick_P->p[dim-1], i) ;
	Element->Num = Element->GeoElement->Num ;
	Element->Type = Element->GeoElement->Type ;
	Element->Region = Element->GeoElement->Region ;
	Get_NodesCoordinatesOfElement(Element) ;
	ComputeElementBox(Element, &ElementBox) ;
	if (PointInElementBox(ElementBox, x, y, z)){
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
  
  Element->Num = NO_ELEMENT ;
  Element->Region = NO_REGION ;
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
      Debug();
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
  
