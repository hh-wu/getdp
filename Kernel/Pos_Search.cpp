// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Jean-Francois Remacle
//

#include "ProData.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"
#include "Get_DofOfElement.h"
#include "Message.h"

#define SQU(a)     ((a)*(a))

extern struct CurrentData Current ;

static struct Geo_Element  * LastGeoElement;

/* ------------------------------------------------------------------------ */
/*  C o m p u t e E l e m e n t B o x                                       */
/* ------------------------------------------------------------------------ */

static void ComputeElementBox(struct Element * Element,
                              struct ElementBox * ElementBox)
{
  int i;

  ElementBox->Xmin = ElementBox->Xmax = Element->x[0];
  ElementBox->Ymin = ElementBox->Ymax = Element->y[0];
  ElementBox->Zmin = ElementBox->Zmax = Element->z[0];
  for (i = 1 ; i < Element->GeoElement->NbrNodes ; i++) {
    ElementBox->Xmin = std::min(ElementBox->Xmin, Element->x[i]);
    ElementBox->Xmax = std::max(ElementBox->Xmax, Element->x[i]);
    ElementBox->Ymin = std::min(ElementBox->Ymin, Element->y[i]);
    ElementBox->Ymax = std::max(ElementBox->Ymax, Element->y[i]);
    ElementBox->Zmin = std::min(ElementBox->Zmin, Element->z[i]);
    ElementBox->Zmax = std::max(ElementBox->Zmax, Element->z[i]);
  }
}


/* ------------------------------------------------------------------------ */
/*  P o i n t I n X X X                                                     */
/* ------------------------------------------------------------------------ */

static int PointInElementBox(struct ElementBox ElementBox, double x, double y, double z,
                             double tol)
{
  if (x > ElementBox.Xmax + tol || x < ElementBox.Xmin - tol ||
      y > ElementBox.Ymax + tol || y < ElementBox.Ymin - tol ||
      z > ElementBox.Zmax + tol || z < ElementBox.Zmin - tol){
    return(0);
  }
  else{
    return(1);
  }
}

static int PointInRefElement (struct Element * Element, double u, double v, double w)
{
  double ONE = 1. + 1.e-12;
  double ZERO = 1.e-12;

  switch(Element->Type) {
  case LINE : case LINE_2 :
    if (u<-ONE || u>ONE){
      return(0);
    }
    return(1);
  case TRIANGLE : case TRIANGLE_2 :
    if (u<-ZERO || v<-ZERO || u>(ONE-v)){
      return(0);
    }
    return(1);
  case QUADRANGLE : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
    if (u<-ONE  || v<-ONE || u>ONE || v>ONE){
      return (0);
    }
    return(1);
  case TETRAHEDRON : case TETRAHEDRON_2 :
    if (u<-ZERO || v<-ZERO || w<-ZERO || u>(ONE-v-w)){
      return(0);
    }
    return(1);
  case HEXAHEDRON : case HEXAHEDRON_2 :
    if (u<-ONE || v<-ONE || w<-ONE || u>ONE || v>ONE || w>ONE){
      return(0);
    }
    return(1);
  case PRISM : case PRISM_2 :
    if (w>ONE || w<-ONE || u<-ZERO || v<-ZERO || u>(ONE-v)){
      return(0);
    }
    return(1);
  case PYRAMID : case PYRAMID_2 :
    if (u<(w-ONE) || u>(ONE-w) || v<(w-ONE) || v>(ONE-w) || w<-ZERO || w>ONE){
      return(0);
    }
    return(1);
  default :
    return(0);
  }
}

static int PointInElement (struct Element * Element,
                           List_T *ExcludeRegion_L,
                           double  x, double  y, double  z,
                           double *u, double *v, double *w,
                           double tol)
{
  struct ElementBox ElementBox ;

  if(ExcludeRegion_L)
    if(List_Search(ExcludeRegion_L, &Element->GeoElement->Region, fcmp_int)){
      return(0);
    }

  Element->Num = Element->GeoElement->Num ;
  Element->Type = Element->GeoElement->Type ;
  Element->Region = Element->GeoElement->Region ;

  Get_NodesCoordinatesOfElement(Element) ;
  ComputeElementBox(Element, &ElementBox);

  if (!PointInElementBox(ElementBox, x, y, z, tol)){
    return(0);
  }

  xyz2uvwInAnElement(Element, x, y, z, u, v, w);

  if(!PointInRefElement(Element, *u, *v, *w)){
    /* Message::Info("Point was in box, but not in actual element"); */
    return(0);
  }

  return(1);
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ S e a r c h G r i d                                           */
/* ------------------------------------------------------------------------ */

static void Init_SearchGrid(struct Grid * Grid)
{
  struct Element      Element;
  struct ElementBox   ElementBox;
  struct Brick        Brick, *Brick_P;
  double Xc, Yc, Zc ;
  int    NbrGeoElements, iElm;
  int    Ix1, Ix2, Iy1, Iy2, Iz1, Iz2;
  int    i, j, k, index;

  LastGeoElement = NULL;

  if(Grid->Init){
    return;
  }

  Grid->Xmin = Current.GeoData->Xmin;
  Grid->Xmax = Current.GeoData->Xmax;
  Grid->Ymin = Current.GeoData->Ymin;
  Grid->Ymax = Current.GeoData->Ymax;
  Grid->Zmin = Current.GeoData->Zmin;
  Grid->Zmax = Current.GeoData->Zmax;

#define NBB  20
#define FACT 0.1

  if(Grid->Xmin != Grid->Xmax && Grid->Ymin != Grid->Ymax && Grid->Zmin != Grid->Zmax){
    Grid->Nx = Grid->Ny = Grid->Nz = NBB;

    Xc = Grid->Xmax-Grid->Xmin; Yc = Grid->Ymax-Grid->Ymin; Zc = Grid->Zmax-Grid->Zmin;

    Grid->Xmin -= FACT * Xc ; Grid->Ymin -= FACT * Yc ; Grid->Zmin -= FACT * Zc ;
    Grid->Xmax += FACT * Xc ; Grid->Ymax += FACT * Yc ; Grid->Zmax += FACT * Zc ;
  }

  else if(Grid->Xmin != Grid->Xmax && Grid->Ymin != Grid->Ymax){
    Grid->Nx = Grid->Ny = NBB ; Grid->Nz = 1 ;

    Xc = Grid->Xmax-Grid->Xmin; Yc = Grid->Ymax-Grid->Ymin;

    Grid->Xmin -= FACT * Xc ; Grid->Ymin -= FACT * Xc ; Grid->Zmin -= 1. ;
    Grid->Xmax += FACT * Xc ; Grid->Ymax += FACT * Xc ; Grid->Zmax += 1. ;
  }
  else if(Grid->Xmin != Grid->Xmax && Grid->Zmin != Grid->Zmax){
    Grid->Nx = Grid->Nz = NBB ; Grid->Ny = 1 ;

    Xc = Grid->Xmax-Grid->Xmin; Zc = Grid->Zmax-Grid->Zmin;

    Grid->Xmin -= FACT * Xc ; Grid->Ymin -= 1. ; Grid->Zmin -= FACT * Zc ;
    Grid->Xmax += FACT * Xc ; Grid->Ymax += 1. ; Grid->Zmax += FACT * Zc ;
  }
  else if(Grid->Ymin != Grid->Ymax && Grid->Zmin != Grid->Zmax){
    Grid->Nx = 1 ; Grid->Ny = Grid->Nz = NBB ;

    Yc = Grid->Ymax-Grid->Ymin; Zc = Grid->Zmax-Grid->Zmin;

    Grid->Xmin -= 1. ; Grid->Ymin -= FACT * Yc ; Grid->Zmin -= FACT * Zc ;
    Grid->Xmax += 1. ; Grid->Ymax += FACT * Yc ; Grid->Zmax += FACT * Zc ;
  }

  else if(Grid->Xmin != Grid->Xmax){
    Grid->Nx = NBB ; Grid->Ny = Grid->Nz = 1 ;

    Xc = Grid->Xmax-Grid->Xmin;

    Grid->Xmin -= FACT * Xc ; Grid->Ymin -= 1. ; Grid->Zmin -= 1. ;
    Grid->Xmax += FACT * Xc ; Grid->Ymax += 1. ; Grid->Zmax += 1. ;
  }
  else if(Grid->Ymin != Grid->Ymax){
    Grid->Nx = Grid->Nz = 1 ; Grid->Ny = NBB ;

    Yc = Grid->Ymax-Grid->Ymin;

    Grid->Xmin -= 1. ; Grid->Ymin -= FACT * Yc ; Grid->Zmin -= 1. ;
    Grid->Xmax += 1. ; Grid->Ymax += FACT * Yc ; Grid->Zmax += 1. ;
  }
  else if(Grid->Zmin != Grid->Zmax){
    Grid->Nx = Grid->Ny = 1 ; Grid->Nz = NBB ;

    Zc = Grid->Zmax-Grid->Zmin;

    Grid->Xmin -= 1. ; Grid->Ymin -= 1. ; Grid->Zmin -= FACT * Zc ;
    Grid->Xmax += 1. ; Grid->Ymax += 1. ; Grid->Zmax += FACT * Zc ;
  }

  else{
    Grid->Nx = Grid->Ny = Grid->Nz = 1;

    Grid->Xmin -= 1. ; Grid->Ymin -= 1. ; Grid->Zmin -= 1. ;
    Grid->Xmax += 1. ; Grid->Ymax += 1. ; Grid->Zmax += 1. ;
  }

  Message::Info("Initializing rapid search grid...");

  Grid->Bricks = List_Create(Grid->Nx * Grid->Ny * Grid->Nz, 10, sizeof(Brick));
  for(i = 0; i < Grid->Nx * Grid->Ny * Grid->Nz ; i++){
    for(j = 0 ; j < 3 ; j++) Brick.p[j] = List_Create(2, 2, sizeof(struct Geo_Element*));
    List_Add(Grid->Bricks, &Brick);
  }

  NbrGeoElements = Geo_GetNbrGeoElements();
  Get_InitDofOfElement(&Element) ;

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

      Ix1 = std::max(Ix1, 0);
      Ix2 = std::min(Ix2, Grid->Nx-1);
      Iy1 = std::max(Iy1, 0);
      Iy2 = std::min(Iy2, Grid->Ny-1);
      Iz1 = std::max(Iz1, 0);
      Iz2 = std::min(Iz2, Grid->Nz-1);

      for(i = Ix1 ; i <= Ix2 ; i++){
	for(j = Iy1 ; j <= Iy2 ; j++){
	  for(k = Iz1 ; k <= Iz2 ; k++){
	    index = i + j * Grid->Nx + k * Grid->Nx * Grid->Ny;
	    Brick_P = (struct Brick*)List_Pointer(Grid->Bricks, index);
	    switch(Element.GeoElement->Type){
	    case LINE :        case LINE_2 :
	      List_Add(Brick_P->p[0], &Element.GeoElement);
	      break;
	    case TRIANGLE :    case TRIANGLE_2 :
	    case QUADRANGLE :  case QUADRANGLE_2 : case QUADRANGLE_2_8N :
	      List_Add(Brick_P->p[1], &Element.GeoElement);
	      break;
	    case TETRAHEDRON : case TETRAHEDRON_2 :
	    case HEXAHEDRON :  case HEXAHEDRON_2 :
	    case PRISM :       case PRISM_2 :
	    case PYRAMID :     case PYRAMID_2 :
	      List_Add(Brick_P->p[2], &Element.GeoElement);
	      break;
	    }
	  }
	}
      }
    }
  }

  Grid->Init = 1;

#if 0
  for (i=0 ; i<List_Nbr(Grid->Bricks) ; i++) {
    Brick_P = (struct Brick *)List_Pointer(Grid->Bricks, i) ;
    printf("BRICK %d : ", i) ;
    for (j=0 ; j<List_Nbr(Brick_P->p[2]) ; j++) {
      Element.GeoElement = *(struct Geo_Element **)List_Pointer(Brick_P->p[2], j) ;
      printf("%d ", Element.GeoElement->Num) ;
    }
    printf("\n");
  }
#endif

  Message::Info("...done: %dx%dx%d", Grid->Nx, Grid->Ny, Grid->Nz);
}

void Free_SearchGrid(struct Grid * Grid)
{
  if(!Grid->Init) return;
  for(int i = 0; i < List_Nbr(Grid->Bricks); i++){
    Brick *Brick_P = (struct Brick *)List_Pointer(Grid->Bricks, i) ;
    for(int j = 0 ; j < 3 ; j++) List_Delete(Brick_P->p[j]);
  }
  List_Delete(Grid->Bricks);
  Grid->Init = 0;
}

/* ------------------------------------------------------------------------ */
/*  I n W h i c h   X X X                                                   */
/* ------------------------------------------------------------------------ */

static int InWhichBrick (struct Grid *pGrid, double X, double Y, double Z)
{
  int    Ix, Iy, Iz;

  if(X > pGrid->Xmax || X < pGrid->Xmin || Y > pGrid->Ymax ||
     Y < pGrid->Ymin || Z > pGrid->Zmax || Z < pGrid->Zmin){
    return(NO_BRICK);
  }

  Ix = (int)((double)pGrid->Nx * (X-pGrid->Xmin) / (pGrid->Xmax-pGrid->Xmin));
  Iy = (int)((double)pGrid->Ny * (Y-pGrid->Ymin) / (pGrid->Ymax-pGrid->Ymin));
  Iz = (int)((double)pGrid->Nz * (Z-pGrid->Zmin) / (pGrid->Zmax-pGrid->Zmin));
  Ix = std::min(Ix,pGrid->Nx-1);
  Iy = std::min(Iy,pGrid->Ny-1);
  Iz = std::min(Iz,pGrid->Nz-1);

  if(Ix < 0) Ix = 0;
  if(Iy < 0) Iy = 0;
  if(Iz < 0) Iz = 0;

  return(Ix + Iy * pGrid->Nx + Iz * pGrid->Nx * pGrid->Ny) ;
}

void InWhichElement (struct Grid * Grid, List_T *ExcludeRegion_L,
		     struct Element * Element, int Dim,
		     double  x, double  y, double  z,
		     double *u, double *v, double *w)
{
  /* Note: Il est garanti en sortie que les fcts de forme geometriques sont
     initialisees en u,v,w */

  struct Brick        * Brick_P ;
  int                   i, dim, lowdim = 0, highdim = 0;
  double                tol;

  if(!Grid->Init) Init_SearchGrid(Grid);

  /* Allow for some extra matches by increasing the size of the
     bounding box, and even more if we search for elements of
     dimension smaller than the current dimension. This way we can for
     example also find 1D elements with points not exactly on them. */
  if ((Dim == _1D && Current.GeoData->Dimension == _3D) ||
      (Dim == _1D && Current.GeoData->Dimension == _2D) ||
      (Dim == _2D && Current.GeoData->Dimension == _3D))
    tol = Current.GeoData->CharacteristicLength * 1.e-4; /* instead of 5.e-3 */
  else
    tol = Current.GeoData->CharacteristicLength * 1.e-8;
  if(LastGeoElement){
    Element->GeoElement = LastGeoElement ;
    if (PointInElement(Element, ExcludeRegion_L, x, y, z, u, v, w, tol)){
      return;
    }
  }

  if ((i = InWhichBrick(Grid, x, y, z)) == NO_BRICK) {
    Element->Num = NO_ELEMENT ;
    Element->Region = NO_REGION ;
    return;
  }

  if (!(Brick_P = (struct Brick *)List_Pointer(Grid->Bricks, i))){
    Message::Error("Brick %d not found in Grid", i) ;
    Element->Num = NO_ELEMENT ;
    Element->Region = NO_REGION ;
    return;
  }

  switch(Dim){
  case _1D  : lowdim = 0 ; highdim = 0 ; break;
  case _2D  : lowdim = 1 ; highdim = 1 ; break;
  case _3D  : lowdim = 2 ; highdim = 2 ; break;
  case _ALL :
  default   : lowdim = 0 ; highdim = 2 ; break;
  }

  for(dim = highdim ; dim >= lowdim ; dim--) {
    for (i=0 ; i < List_Nbr(Brick_P->p[dim]) ; i++) {
      Element->GeoElement = *(struct Geo_Element**)List_Pointer(Brick_P->p[dim], i) ;
      if (PointInElement(Element, ExcludeRegion_L, x, y, z, u, v, w, tol)) {
	/*
	Message::Info("xyz(%g,%g,%g) -> Selected Element %d uvw(%g,%g,%g) (%g,%g,%g)->(%g,%g,%g)",
	    x, y, z, Element->Num, *u, *v, *w,
	    Element->x[0], Element->y[0], Element->z[0],
	    Element->x[1], Element->y[1], Element->z[1]);
	*/
	LastGeoElement = Element->GeoElement;
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
			 double *u, double *v, double *w)
{
  double   x_est, y_est, z_est;
  double   u_new, v_new, w_new;
  double   Error = 1.0 ;
  int      i, iter = 1 ;
  int      ChainDim = _3D, Type_Dimension, Type_Jacobian ;
  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;

  *u = *v = *w = 0.0;

  if(Element->Type & (TETRAHEDRON|HEXAHEDRON|PRISM|PYRAMID))
    ChainDim = _3D;
  else if(Element->Type & (TRIANGLE|QUADRANGLE|TRIANGLE_2|QUADRANGLE_2))
    ChainDim = _2D;
  else if(Element->Type & (LINE|LINE_2))
    ChainDim = _1D;
  else if(Element->Type & POINT)
    ChainDim = _0D;
  else{
    Message::Error("Unknown type of element in xyz2uvwInAnElement");
    return;
  }

  if (ChainDim == _1D && Current.GeoData->Dimension == _3D)
    Type_Jacobian = JACOBIAN_LIN;
  else if((ChainDim == _1D && Current.GeoData->Dimension == _2D) ||
	  (ChainDim == _2D && Current.GeoData->Dimension == _3D))
    Type_Jacobian = JACOBIAN_SUR;
  else
    Type_Jacobian = JACOBIAN_VOL;

  while (Error > NR_PRECISION && iter < NR_MAX_ITER){

    iter++ ;

    Get_BFGeoElement(Element, *u, *v, *w) ;
    Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
      Get_JacobianFunction(Type_Jacobian, Element->Type, &Type_Dimension) ;

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

      Error = SQU(u_new - *u) + SQU(v_new - *v) + SQU(w_new - *w);

      *u = u_new;
      *v = v_new;
      *w = w_new;
    }
    else{
      Message::Warning("Zero determinant in 'xyz2uvwInAnElement'") ;
      break;
    }
  }

  if(iter == NR_MAX_ITER)
    Message::Warning("Maximum number of iterations exceeded in xyz2uvwInAnElement") ;

#if 0
  Message::Info("%d iterations in xyz2uvw", iter);
#endif

}
