#define RCSID "$Id: Pos_Print.c,v 1.53 2001-11-29 11:28:55 geuzaine Exp $"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Passive.h"
#include "Data_Numeric.h"
#include "Treatment_Formulation.h"
#include "Get_Geometry.h"
#include "CurrentData.h"
#include "Get_DofOfElement.h"
#include "ExtendedGroup.h"
#include "Cal_Quantity.h"
#include "Pos_Formulation.h"
#include "Pos_Quantity.h"
#include "Pos_Element.h"
#include "Pos_Search.h"
#include "Pos_Print.h"
#include "Pos_Format.h"
#include "Adapt.h"
#include "Tools.h"

extern int  InteractiveInterrupt ;

/*
  Print OnElementsOf
  ------------------
  expl: plot on elements, belonging to the current mesh, where 
        the solution was computed during the processing stage
  args: list of groups of region type
  
  Print OnSection 
  ---------------
  expl: plot an a 'real' cut of the mesh, i.e. computation on the 
        intersections of the mesh with a cutting entity (plane, line)
  args: 2 (not done) or 3 points, specifying the cutting line or the cutting plane
  
  Print OnGrid
  ------------
  expl: reinterpolate the solution on a grid
  args: - a list of groups of region type (belonging to a mesh, where the
	  solution will be reinterpolated)
        - 3 expressions (using $S and $T) and 2 intervals for the parametric 
	  grid definition

  Print OnPoint, OnLine, OnPlane, OnBox
  -------------------------------------
  expl: reinterpolate the solution on a grid (particular cases)
  args: 1, 2, 3 or 4 points (0d, 1d, 2d or 3d grid) and the associated
        number of divisions

  Print OnRegion
  --------------
  expl: print Global Quantities associated with Regions
  args: list of groups of region type

*/

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n E l e m e n t s O f                               */
/* ------------------------------------------------------------------------ */

struct CutEdge {
  int     nbc ;
  double  x[2],y[2],z[2] ;  
  double  xc,yc,zc ;
  double  uc,vc,wc ;
  struct  Value  *Value ;
} ;

struct xyzv{
  double x,y,z;
  struct Value v;
  /*int nbvals; for time domain -> malloc Value *v... */
  int nboccurences;
};

static int fcmp_xyzv(const void * a, const void * b) {
  struct xyzv *p1, *p2;
  double TOL=Current.GeoData->CharacteristicLength * 1.e-8;
  p1 = (struct xyzv*)a;
  p2 = (struct xyzv*)b;
  if(p1->x - p2->x > TOL) return 1;
  if(p1->x - p2->x <-TOL) return -1;
  if(p1->y - p2->y > TOL) return 1;
  if(p1->y - p2->y <-TOL) return -1;
  if(p1->z - p2->z > TOL) return 1;
  if(p1->z - p2->z <-TOL) return -1;
  return 0;
}

static List_T * SkinPostElement_L ;
static int      SkinDepth ;

static void Cut_SkinPostElement(void *a, void *b){
  struct PostElement  * PE ;

  PE = *(struct PostElement**)a ;

  Cut_PostElement(PE, Geo_GetGeoElement(PE->Index), SkinPostElement_L, 
		  PE->Index, SkinDepth, 0, 1) ;
}

static void Decompose_SkinPostElement(void *a, void *b){
  struct PostElement  * PE, * PE2 ;

  PE = *(struct PostElement**)a ;

  if(PE->Type != QUADRANGLE) return;
  /* change the quad to a tri */
  PE->Type = TRIANGLE;
  PE->NbrNodes = 3;
  /* create a second tri */
  PE2 = NodeCopy_PostElement(PE) ;
  PE2->NumNodes[1] = PE->NumNodes[2];
  PE2->u[1] = PE->u[2]; PE2->x[1] = PE->x[2];
  PE2->v[1] = PE->v[2]; PE2->y[1] = PE->y[2];
  PE2->w[1] = PE->w[2]; PE2->z[1] = PE->z[2];
  PE2->NumNodes[2] = PE->NumNodes[3];
  PE2->u[2] = PE->u[3]; PE2->x[2] = PE->x[3];
  PE2->v[2] = PE->v[3]; PE2->y[2] = PE->y[3];
  PE2->w[2] = PE->w[3]; PE2->z[2] = PE->z[3];
  List_Add(SkinPostElement_L, &PE2);
}

void  Pos_PrintOnElementsOf(struct PostQuantity     *NCPQ_P,
			    struct PostQuantity     *CPQ_P,
			    int                      Order,
			    struct DefineQuantity   *DefineQuantity_P0,
			    struct QuantityStorage  *QuantityStorage_P0,
			    struct PostSubOperation *PostSubOperation_P) {

  Tree_T  * PostElement_T ;
  List_T  * PostElement_L, * Region_L ;

  struct Element        Element ;
  struct PostElement  * PE ;
  struct Value        * CumulativeValues ;
  struct xyzv           xyzv, *xyzv_P ;
  Tree_T              * xyzv_T ;
  double  * Error=NULL, Dummy[5], d, x1, x2 ;
  int       jj, NbrGeo, iGeo, incGeo, NbrPost=0, iPost ;
  int       NbrTimeStep, iTime, iNode ;
  int       Store = 0, DecomposeInSimplex = 0, Depth ;

  GetDP_Begin("Pos_PrintOnElementsOf");

  /* Select the TimeSteps */
  
  if( !(NbrTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbrTimeStep = List_Nbr(Current.DofData->Solutions);
    for(iTime = 0 ; iTime < NbrTimeStep ; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }

  /* Print the header */

  NbrGeo = Geo_GetNbrGeoElements() ;

  Format_PostHeader(PostSubOperation_P->Format, 
		    PostSubOperation_P->Iso, NbrTimeStep,
		    PostSubOperation_P->HarmonicToTime, 
		    PostSubOperation_P->CombinationType, Order,
		    NCPQ_P?NCPQ_P->Name:NULL,
		    CPQ_P?CPQ_P->Name:NULL);
  
  /* Get the region */
  
  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group, 
			   PostSubOperation_P->Case.OnRegion.RegionIndex))->InitialList ;
  Get_InitDofOfElement(&Element) ;

  /* Compute the Cumulative quantity, if any */

  if(CPQ_P){
    Cal_PostCumulativeQuantity(Region_L,
			       PostSubOperation_P->PostQuantitySupport[Order],
			       PostSubOperation_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  /* Init a search grid if we plot a NonCumulative quantity with OnGrid */

  if(NCPQ_P && PostSubOperation_P->SubType == PRINT_ONGRID)
    Init_SearchGrid(&Current.GeoData->Grid) ;

  /* If we compute a skin, apply smoothing, sort the results, or
     perform adaption, we'll need to store all the PostElements */

  if(PostSubOperation_P->Smoothing || PostSubOperation_P->Skin ||
     PostSubOperation_P->Adapt || PostSubOperation_P->Sort)
    Store = 1 ;

  /* Check if everything is OK for Adaption */

  if(PostSubOperation_P->Adapt){
    if(PostSubOperation_P->Dimension == _ALL)
      Msg(ERROR, "You have to specify a Dimension for the adaptation (2 or 3)");
    if(PostSubOperation_P->Target < 0.)
      Msg(ERROR, "You have to specify a Target for the adaptation (e.g. 0.01)");
    if(NbrTimeStep > 1)
      Msg(ERROR, "Adaption not ready with more than one time step"); 
  }

  /* Check if we should decompose all PostElements to simplices */

  if(!PostSubOperation_P->Skin && 
     (PostSubOperation_P->Format == FORMAT_GMSH || 
      PostSubOperation_P->Format == FORMAT_GMSH_PARSED))
    DecomposeInSimplex = 1 ;

  /* Check for de-refinement */
  
  if(PostSubOperation_P->Depth < 0)
    incGeo = - PostSubOperation_P->Depth ;
  else
    incGeo = 1 ;
  
  /* Create the list of PostElements */

  PostElement_L = List_Create(Store ? NbrGeo/10 : 10, Store ? NbrGeo/10 : 10,
			      sizeof(struct PostElement *)) ;

  if(Store){
    
    /* If we have a Skin, we will divide after the skin extraction */

    if(PostSubOperation_P->Skin && PostSubOperation_P->Depth > 1)
      Depth = 1;
    else
      Depth = PostSubOperation_P->Depth;
    
    /* Generate all PostElements */

    for(iGeo = 0 ; iGeo < NbrGeo ; iGeo += incGeo) {
      if(InteractiveInterrupt) break;
      Progress(iGeo, NbrGeo, "Generate: ") ;
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      if(List_Search(Region_L, &Element.GeoElement->Region, fcmp_int)){
	Fill_PostElement(Element.GeoElement, PostElement_L, iGeo,
			 Depth, PostSubOperation_P->Skin,
			 DecomposeInSimplex) ;
      }
    }

    /* Compute the skin */

    if(PostSubOperation_P->Skin){

      if(PostSubOperation_P->Format == FORMAT_GMSH || 
	 PostSubOperation_P->Format == FORMAT_GMSH_PARSED)
	PostElement_T = Tree_Create(sizeof(struct PostElement *), fcmp_PostElement_heterog);
      else
	PostElement_T = Tree_Create(sizeof(struct PostElement *), fcmp_PostElement);
      
      for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){
	if(InteractiveInterrupt) break;
	Progress(iPost, List_Nbr(PostElement_L), "Skin: ") ;
	PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost) ;
	if(Tree_PQuery(PostElement_T, &PE)){
	  Tree_Suppress(PostElement_T, &PE);
	  Destroy_PostElement(PE) ;
	}
	else
	  Tree_Add(PostElement_T, &PE);
      }

      /* only decompose in simplices (triangles!) now */
      if(PostSubOperation_P->Format == FORMAT_GMSH || 
	 PostSubOperation_P->Format == FORMAT_GMSH_PARSED){
	List_Reset(PostElement_L);
	SkinPostElement_L = PostElement_L ;
	Tree_Action(PostElement_T, Decompose_SkinPostElement);
	for(iPost = 0 ; iPost < List_Nbr(SkinPostElement_L) ; iPost++)
	  Tree_Add(PostElement_T, (struct PostElement**)List_Pointer(SkinPostElement_L, iPost)) ;
      }

      if(PostSubOperation_P->Depth > 1){
	List_Reset(PostElement_L);
	SkinPostElement_L = PostElement_L ;
	SkinDepth = PostSubOperation_P->Depth ;
	Tree_Action(PostElement_T, Cut_SkinPostElement) ;
	Tree_Delete(PostElement_T);
      }
      else{
	List_Delete(PostElement_L);
	PostElement_L = Tree2List(PostElement_T);
	Tree_Delete(PostElement_T);
      }
      
    }

  } /* if Store */
  
  /* Loop on GeoElements */
  
  for(iGeo = 0 ; iGeo < NbrGeo ; iGeo += incGeo) {
    
    if(InteractiveInterrupt) break;
    
    if(Store){
      if(iGeo) break ;
    }
    else{
      Progress(iGeo, NbrGeo, "Compute: ") ;
      List_Reset(PostElement_L) ;
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      if(List_Search(Region_L, &Element.GeoElement->Region, fcmp_int)){
	Fill_PostElement(Element.GeoElement, PostElement_L, iGeo,
			 PostSubOperation_P->Depth, PostSubOperation_P->Skin,
			 DecomposeInSimplex) ;
      }
    }

    NbrPost = List_Nbr(PostElement_L) ;  

    /* Loop on PostElements */
    
    for(iPost = 0 ; iPost < NbrPost ; iPost++) {

      if(InteractiveInterrupt) break;
      
      if(Store)
	Progress(iPost, NbrPost, "Compute: ") ;

      PE = *(struct PostElement **)List_Pointer(PostElement_L, iPost) ;

      if(!NCPQ_P){ /* Only one Cumulative */
	for (iTime = 0 ; iTime < NbrTimeStep ; iTime++){
	  for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
	    Cal_CopyValue(&CumulativeValues[iTime], &PE->Value[iNode]);
	  if(!Store)
	    Format_PostElement(PostSubOperation_P->Format, PostSubOperation_P->Iso, 0,
			       Current.Time, iTime, NbrTimeStep, 
			       Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			       NULL, PE, 
			       PostSubOperation_P->ChangeOfCoordinates,
			       PostSubOperation_P->ChangeOfValues);
	}
      }
      else{ /* There is one non-cumulative */

	if(PostSubOperation_P->SubType == PRINT_ONGRID){ /* We re-interpolate */
	  for (iTime = 0 ; iTime < NbrTimeStep ; iTime++) {
	    Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, iTime) ;
	    for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){
	      InWhichElement(Current.GeoData->Grid, Region_L, &Element, 
			     PostSubOperation_P->Dimension, 
			     PE->x[iNode], PE->y[iNode], PE->z[iNode],
			     &PE->u[iNode], &PE->v[iNode], &PE->w[iNode]) ;
	      Current.Region = Element.Region ;
	      Current.x = PE->x[iNode] ; 
	      Current.y = PE->y[iNode] ;
	      Current.z = PE->z[iNode] ;
	      Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,
			       NULL, &Element,
			       PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);
	      if(CPQ_P)
		Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				     &PE->Value[iNode], &CumulativeValues[iNode]) ;
	    }
	    if(!Store)
	      Format_PostElement(PostSubOperation_P->Format, PostSubOperation_P->Iso, 0,
				 Current.Time, iTime, NbrTimeStep, 
				 Current.NbrHar, PostSubOperation_P->HarmonicToTime,
				 NULL, PE, 
				 PostSubOperation_P->ChangeOfCoordinates,
				 PostSubOperation_P->ChangeOfValues);
	  }
	}
	else{ /* PRINT_ONREGION: We work on the real mesh */
	  Element.GeoElement = Geo_GetGeoElement(PE->Index) ;
	  Element.Num = Element.GeoElement->Num ;
	  Element.Type = Element.GeoElement->Type ;
	  Current.Region = Element.Region = Element.GeoElement->Region ;
	  Get_NodesCoordinatesOfElement(&Element) ;
	  
	  for (iTime = 0 ; iTime < NbrTimeStep ; iTime++) {
	    Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, iTime) ;
	    for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){
	      Current.x = PE->x[iNode] ;
	      Current.y = PE->y[iNode] ;
	      Current.z = PE->z[iNode] ;
	      Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,
			       NULL, &Element,
			       PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);
	    if(CPQ_P)
	      Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				   &PE->Value[iNode], &CumulativeValues[iTime]) ;
	    }      
	    if(!Store)
	      Format_PostElement(PostSubOperation_P->Format, PostSubOperation_P->Iso, 0,
				 Current.Time, iTime, NbrTimeStep,
				 Current.NbrHar, PostSubOperation_P->HarmonicToTime,
				 NULL, PE, 
				 PostSubOperation_P->ChangeOfCoordinates,
				 PostSubOperation_P->ChangeOfValues);
	  }
	}
      }
      
      if(!Store) Destroy_PostElement(PE) ;

    }
  } /* for iGeo */

  /* Perform Smoothing */
  
  if(PostSubOperation_P->Smoothing && !InteractiveInterrupt){

    Msg(INFO, "Smoothing (phase 1)");

    xyzv_T = Tree_Create(sizeof(struct xyzv), fcmp_xyzv);
    
    for (iPost = 0 ; iPost < NbrPost ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost) ;
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++) {
	xyzv.x = PE->x[iNode];
	xyzv.y = PE->y[iNode];
	xyzv.z = PE->z[iNode];
	if((xyzv_P = (struct xyzv*)Tree_PQuery(xyzv_T, &xyzv))){
	  x1 = (double)(xyzv_P->nboccurences)/ (double)(xyzv_P->nboccurences + 1.);
	  x2 = 1./(double)(xyzv_P->nboccurences + 1);
	  Cal_AddMultValue2(&xyzv_P->v, x1, &PE->Value[iNode], x2);
	  xyzv_P->nboccurences++;
	}
	else{
	  Cal_CopyValue(&PE->Value[iNode],&xyzv.v);
	  xyzv.nboccurences = 1;
	  Tree_Add(xyzv_T, &xyzv);
	}
      }
    }

    Msg(INFO, "Smoothing (phase 2)");

    for(iPost = 0 ; iPost < NbrPost ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost) ;
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++) {
	xyzv.x = PE->x[iNode];
	xyzv.y = PE->y[iNode];
	xyzv.z = PE->z[iNode];
	if((xyzv_P = (struct xyzv*)Tree_PQuery(xyzv_T, &xyzv))){
	  Cal_CopyValue(&xyzv_P->v, &PE->Value[iNode]);
	}
	else
	  Msg(WARNING, "Node (%g,%g,%g) not found", xyzv.x, xyzv.y, xyzv.z);
      }
    }
    
    Tree_Delete(xyzv_T);

  } /* if Smoothing */

  /* Perform Adaption */

  if(PostSubOperation_P->Adapt && !InteractiveInterrupt){

    if(!Current.GeoData->H)
      Current.GeoData->H = (double*)Malloc((NbrGeo+2)*sizeof(double)) ;

    if(!Current.GeoData->P)
      Current.GeoData->P = (double*)Malloc((NbrGeo+2)*sizeof(double)) ;
    
    Error = (double*)Malloc((NbrGeo+1)*sizeof(double)) ;

    /* All elements are perfect... */
    for(iGeo = 0 ; iGeo < NbrGeo ; iGeo++){
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      Element.Num = Element.GeoElement->Num ;
      Element.Type = Element.GeoElement->Type ;
      Element.Region = Element.GeoElement->Region ;
      Get_NodesCoordinatesOfElement(&Element) ;
    
      Current.GeoData->H[iGeo+1] = Cal_MaxEdgeLength(&Element) ;
      Current.GeoData->P[iGeo+1] = 1. ;
      Error[iGeo+1] = PostSubOperation_P->Target ;
    }

    /* ...except those we want to optimize */
    for(iPost = 0 ; iPost < NbrPost ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      Error[PE->Index+1] = 0. ;
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
	Error[PE->Index+1] += PE->Value[iNode].Val[0] ;
      Error[PE->Index+1] /= (double)PE->NbrNodes ;
    }

    Adapt (NbrGeo, PostSubOperation_P->Adapt, 
	   PostSubOperation_P->Dimension, Error,
	   Current.GeoData->H, Current.GeoData->P, 
	   PostSubOperation_P->Target);

    /* Clean up the interpolation orders to fit to what's available */
    if(List_Nbr(PostSubOperation_P->Value_L)){
      for(iGeo = 0 ; iGeo < NbrGeo ; iGeo++){
	for(jj = List_Nbr(PostSubOperation_P->Value_L)-1 ; jj >= 0  ; jj--){
	  d = *(double*)List_Pointer(PostSubOperation_P->Value_L, jj);
	  if(Current.GeoData->P[iGeo+1] > d || jj == 0){
	    Current.GeoData->P[iGeo+1] = d ;
	    break ;
	  }
	}
      }
    }
  } /* if Adapt */

  /* Print everything if we are in Store mode */

  if(Store && !InteractiveInterrupt){

    /* Sort the elements */
    
    switch(PostSubOperation_P->Sort){
    case SORT_BY_POSITION : List_Sort(PostElement_L, fcmp_PostElement) ; break ;
    case SORT_BY_CONNECTIVITY : Sort_PostElement_Connectivity(PostElement_L) ; break ;
    }

    Dummy[0] = Dummy[1] = Dummy[2] = Dummy[3] = Dummy[4] = 0. ;

    for(iPost = 0 ; iPost < NbrPost ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);

      /* Get the values from adaption */
      if(PostSubOperation_P->Adapt){
	Element.GeoElement = Geo_GetGeoElement(PE->Index) ;

	Dummy[0] = Element.GeoElement->Num ;
	Dummy[1] = Error[PE->Index+1] ;
	Dummy[2] = Current.GeoData->H[PE->Index+1] ;
	Dummy[3] = Current.GeoData->P[PE->Index+1] ;
	Dummy[4] = iPost ? 0 : NbrPost ;
	
	for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){
	  PE->Value[iNode].Type = SCALAR ;
	  if(PostSubOperation_P->Adapt == H1 ||
	     PostSubOperation_P->Adapt == H2)
	    PE->Value[iNode].Val[0] = Dummy[2] ;
	  else
	    PE->Value[iNode].Val[0] = Dummy[3] ;
	}
      }

      /* Compute curvilinear coord if connection sort */
      if(PostSubOperation_P->Sort == SORT_BY_CONNECTIVITY){
	Dummy[0] = Dummy[1] ;
	Dummy[1] = Dummy[0] + sqrt(DSQU(PE->x[1]-PE->x[0])+
				   DSQU(PE->y[1]-PE->y[0])+
				   DSQU(PE->z[1]-PE->z[0])) ;
	Dummy[2] = PE->v[0] ;
	Dummy[3] = -1. ;
      }

      Format_PostElement(PostSubOperation_P->Format, PostSubOperation_P->Iso, 1,
			 Current.Time, 0, 1, 
			 Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			 Dummy, PE, 
			 PostSubOperation_P->ChangeOfCoordinates,
			 PostSubOperation_P->ChangeOfValues);
    }
  }

  Format_PostFooter(PostSubOperation_P, Store);

  if(Store)
    for(iPost = 0 ; iPost < NbrPost ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      Destroy_PostElement(PE) ;
    }

  List_Delete(PostElement_L);

  if(CPQ_P) Free(CumulativeValues);
  if(PostSubOperation_P->Adapt) Free(Error) ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n S e c t i o n                                     */
/* ------------------------------------------------------------------------ */

double Plane(double a, double b, double c, double d, 
	     double x, double y, double z){

  GetDP_Begin("Plane");

  GetDP_Return(a*x+b*y+c*z+d);
}

static double DIRX[3], DIRY[3], DIRZ[3], XCP, YCP ;

int fcmp_Angle (const void *a, const void *b){
  struct CutEdge *q , *w;
  double x1,y1,x2,y2,ang1,ang2;

  q = (struct CutEdge*)a;
  w = (struct CutEdge*)b;
  
  x1 = q->xc*DIRX[0] + q->yc*DIRX[1] + q->zc*DIRX[2];
  y1 = q->xc*DIRY[0] + q->yc*DIRY[1] + q->zc*DIRY[2];
  x2 = w->xc*DIRX[0] + w->yc*DIRX[1] + w->zc*DIRX[2];
  y2 = w->xc*DIRY[0] + w->yc*DIRY[1] + w->zc*DIRY[2];
  
  ang1 = atan2(y1-YCP,x1-XCP);
  ang2 = atan2(y2-YCP,x2-XCP);

  if(ang1>ang2)return 1;
  return -1;
}

void prodvec (double *a , double *b , double *c){

  GetDP_Begin("prodvec");

  c[0] = a[1]*b[2]-a[2]*b[1];
  c[1] = a[2]*b[0]-a[0]*b[2];
  c[2] = a[0]*b[1]-a[1]*b[0];

  GetDP_End ;
}

void normvec(double *a){
  double mod;

  GetDP_Begin("normvec");

  mod = sqrt(SQU(a[0])+SQU(a[1])+SQU(a[2]));
  a[0]/=mod;
  a[1]/=mod;
  a[2]/=mod;

  GetDP_End ;
}

#define NBR_MAX_CUT 10

#define LETS_PRINT_THE_RESULT							\
  List_Reset(PE_L);								\
  if(PostSubOperation_P->Depth < 2)						\
    List_Add(PE_L, &PE) ;							\
  else										\
    Cut_PostElement(PE, Element.GeoElement, PE_L, PE->Index,			\
		    PostSubOperation_P->Depth, 0, 1) ;				\
  for(iPost = 0 ; iPost < List_Nbr(PE_L) ; iPost++){				\
    PE = *(struct PostElement **)List_Pointer(PE_L, iPost) ;			\
    for(iTime = 0 ; iTime < NbTimeStep ; iTime++){				\
      Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, iTime) ;     	\
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){				\
	if(NCPQ_P){								\
	  Current.x = PE->x[iNode] ;						\
	  Current.y = PE->y[iNode] ;						\
	  Current.z = PE->z[iNode] ;						\
	  Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,	\
		      NULL, &Element, PE->u[iNode], PE->v[iNode], PE->w[iNode],	\
		      &PE->Value[iNode]);					\
	  if(CPQ_P)								\
             Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,	\
				  &PE->Value[iNode], &CumulativeValues[iTime]) ;\
	}									\
	else									\
	  Cal_CopyValue(&CumulativeValues[iTime],&PE->Value[iNode]);		\
      }										\
      Format_PostElement(PostSubOperation_P->Format, PostSubOperation_P->Iso,0, \
			 Current.Time, iTime, NbTimeStep,			\
			 Current.NbrHar, PostSubOperation_P->HarmonicToTime,	\
			 NULL, PE,                                              \
			 PostSubOperation_P->ChangeOfCoordinates,               \
			 PostSubOperation_P->ChangeOfValues);	                \
    }										\
  }										\
  for(iPost = 0 ; iPost < List_Nbr(PE_L) ; iPost++)				\
     Destroy_PostElement(*(struct PostElement **)List_Pointer(PE_L, iPost));
  

void  Pos_PrintOnSection(struct PostQuantity     *NCPQ_P,
			 struct PostQuantity     *CPQ_P,
			 int                      Order,
			 struct DefineQuantity   *DefineQuantity_P0,
			 struct QuantityStorage  *QuantityStorage_P0,
			 struct PostSubOperation *PostSubOperation_P) {

  struct CutEdge       e[NBR_MAX_CUT];
  struct Element       Element ;
  struct PostElement * PE ;
  struct Value       * CumulativeValues ;
  List_T             * PE_L ;

  int     NbGeoElement, NbTimeStep, NbCut, * NumNodes ;
  int     iPost, iNode, iGeo, iTime, iCut, iEdge ;
  double  A, B, C, D, d1, d2, u, xcg, ycg, zcg ;
  double  x[3], y[3], z[3] ;

  GetDP_Begin("Pos_PrintOnSection");

  if( !(NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(iTime = 0 ; iTime < NbTimeStep ; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }

  PE_L = List_Create(10, 10, sizeof(struct PostElement *)) ;

  for(iCut = 0 ; iCut < NBR_MAX_CUT ; iCut++)
    e[iCut].Value = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    
  Format_PostHeader(PostSubOperation_P->Format, 
		    PostSubOperation_P->Iso, NbTimeStep, 
		    PostSubOperation_P->HarmonicToTime,
		    PostSubOperation_P->CombinationType, Order,
		    NCPQ_P?NCPQ_P->Name:NULL,
		    CPQ_P?CPQ_P->Name:NULL);

  if(CPQ_P){
    Cal_PostCumulativeQuantity(NULL,
			       PostSubOperation_P->PostQuantitySupport[Order],
			       PostSubOperation_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  switch(PostSubOperation_P->SubType) {

  case PRINT_ONSECTION_1D :
    Msg(ERROR, "Print on 1D cuts not done (use Print OnLine instead)");
    break;

  case PRINT_ONSECTION_2D :
    
    /* Ax+By+Cz+D=0  from  (x0,y0,z0),(x1,y1,z1),(x2,y2,z2) */
    
    x[0] = PostSubOperation_P->Case.OnSection.x[0] ;
    y[0] = PostSubOperation_P->Case.OnSection.y[0] ;
    z[0] = PostSubOperation_P->Case.OnSection.z[0] ;
    x[1] = PostSubOperation_P->Case.OnSection.x[1] ;
    y[1] = PostSubOperation_P->Case.OnSection.y[1] ;
    z[1] = PostSubOperation_P->Case.OnSection.z[1] ;
    x[2] = PostSubOperation_P->Case.OnSection.x[2] ;
    y[2] = PostSubOperation_P->Case.OnSection.y[2] ;
    z[2] = PostSubOperation_P->Case.OnSection.z[2] ;
    A =  (y[1]-y[0])*(z[2]-z[0]) - (z[1]-z[0])*(y[2]-y[0]) ;
    B = -(x[1]-x[0])*(z[2]-z[0]) + (z[1]-z[0])*(x[2]-x[0]) ;
    C =  (x[1]-x[0])*(y[2]-y[0]) - (y[1]-y[0])*(x[2]-x[0]) ;
    D = -A*x[0]-B*y[0]-C*z[0] ;

    /* Cut each element */
    
    NbGeoElement = Geo_GetNbrGeoElements() ;

    for(iGeo = 0 ; iGeo < NbGeoElement ; iGeo++) {
      if(InteractiveInterrupt) break;   
      Progress(iGeo, NbGeoElement, "Cut: ") ;
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      Element.Num        = Element.GeoElement->Num ;
      Element.Type       = Element.GeoElement->Type ;
      Current.Region = Element.Region = Element.GeoElement->Region ;

      if((PostSubOperation_P->Dimension == _ALL && 
	  (Element.GeoElement->Type != POINT)) ||
	 (PostSubOperation_P->Dimension == _3D && 
	  (Element.GeoElement->Type & (TETRAHEDRON|HEXAHEDRON|PRISM|PYRAMID))) ||
	 (PostSubOperation_P->Dimension == _2D && 
	  (Element.GeoElement->Type & (TRIANGLE|QUADRANGLE))) ||
	 (PostSubOperation_P->Dimension == _1D && 
	  (Element.GeoElement->Type & LINE))){

	Get_NodesCoordinatesOfElement(&Element) ;

	if(Element.GeoElement->NbrEdges == 0)
	  Geo_CreateEdgesOfElement(Element.GeoElement) ;

	NbCut = 0;
	
	for(iEdge = 0 ; iEdge < Element.GeoElement->NbrEdges ; iEdge++){
	  NumNodes = Geo_GetNodesOfEdgeInElement(Element.GeoElement, iEdge) ;
	  e[NbCut].x[0] = Element.x[abs(NumNodes[0])-1] ;
	  e[NbCut].y[0] = Element.y[abs(NumNodes[0])-1] ;
	  e[NbCut].z[0] = Element.z[abs(NumNodes[0])-1] ;
	  e[NbCut].x[1] = Element.x[abs(NumNodes[1])-1] ;
	  e[NbCut].y[1] = Element.y[abs(NumNodes[1])-1] ;
	  e[NbCut].z[1] = Element.z[abs(NumNodes[1])-1] ;
	  d1 = Plane(A,B,C,D,e[NbCut].x[0],e[NbCut].y[0],e[NbCut].z[0]);
	  d2 = Plane(A,B,C,D,e[NbCut].x[1],e[NbCut].y[1],e[NbCut].z[1]);
	  
	  if(d1*d2 <= 0) {
	    if(d1*d2 < 0.) u = -d2/(d1-d2) ;	    
	    else if(d1 == 0.) u = 1. ;
	    else u = 0. ;
	    e[NbCut].xc = u*e[NbCut].x[0] + (1.-u)*e[NbCut].x[1];
	    e[NbCut].yc = u*e[NbCut].y[0] + (1.-u)*e[NbCut].y[1];
	    e[NbCut].zc = u*e[NbCut].z[0] + (1.-u)*e[NbCut].z[1];	  

	    if(NCPQ_P)
	      xyz2uvwInAnElementSimple(&Element, e[NbCut].xc, e[NbCut].yc, e[NbCut].zc, 
				       &e[NbCut].uc, &e[NbCut].vc, &e[NbCut].wc);	  
	    NbCut++;
	  }
	}
	
	if(NbCut > 3){
	  xcg = ycg = zcg = 0.;
	  for(iCut = 0 ; iCut < NbCut ; iCut++){
	    xcg += e[iCut].xc; ycg += e[iCut].yc; zcg += e[iCut].zc;
	  }
	  xcg /= (double)NbCut; ycg /= (double)NbCut; zcg /= (double)NbCut;
	  DIRZ[0] = A; DIRY[0] = xcg-e[0].xc; 
	  DIRZ[1] = B; DIRY[1] = ycg-e[0].yc; 
	  DIRZ[2] = C; DIRY[2] = zcg-e[0].zc;
	  normvec(DIRZ); normvec(DIRY); prodvec(DIRY,DIRZ,DIRX); normvec(DIRX);
	  XCP = xcg*DIRX[0] + ycg*DIRX[1] + zcg*DIRX[2];
	  YCP = xcg*DIRY[0] + ycg*DIRY[1] + zcg*DIRY[2];	
	  qsort(e,NbCut,sizeof(struct CutEdge), fcmp_Angle);
	}
	
	if(NbCut > 2){
	  iCut = 2;
	  while(iCut < NbCut){
	    if(PostSubOperation_P->Depth > 0){
	      PE = Create_PostElement(iGeo, TRIANGLE, 3, 1) ;
	      PE->x[0] = e[0].xc; PE->x[1] = e[iCut-1].xc; PE->x[2] = e[iCut].xc;
	      PE->y[0] = e[0].yc; PE->y[1] = e[iCut-1].yc; PE->y[2] = e[iCut].yc;
	      PE->z[0] = e[0].zc; PE->z[1] = e[iCut-1].zc; PE->z[2] = e[iCut].zc;
	      PE->u[0] = e[0].uc; PE->u[1] = e[iCut-1].uc; PE->u[2] = e[iCut].uc;
	      PE->v[0] = e[0].vc; PE->v[1] = e[iCut-1].vc; PE->v[2] = e[iCut].vc;
	      PE->w[0] = e[0].wc; PE->w[1] = e[iCut-1].wc; PE->w[2] = e[iCut].wc;
	      LETS_PRINT_THE_RESULT ;
	    }
	    else{
	      PE = Create_PostElement(iGeo, POINT, 1, 0) ;
	      PE->x[0] = (e[0].xc + e[iCut-1].xc + e[iCut].xc) / 3. ;
	      PE->y[0] = (e[0].yc + e[iCut-1].yc + e[iCut].yc) / 3. ;
	      PE->z[0] = (e[0].zc + e[iCut-1].zc + e[iCut].zc) / 3. ;
	      PE->u[0] = (e[0].uc + e[iCut-1].uc + e[iCut].uc) / 3. ;
	      PE->v[0] = (e[0].vc + e[iCut-1].vc + e[iCut].vc) / 3. ;
	      PE->w[0] = (e[0].wc + e[iCut-1].wc + e[iCut].wc) / 3. ;
	      LETS_PRINT_THE_RESULT ;
	    }
	    iCut++;
	  }
	}
	
	if(NbCut == 2){
	  if(PostSubOperation_P->Depth > 0){
	    PE = Create_PostElement(iGeo, LINE, 2, 1) ;
	    PE->x[0] = e[0].xc; PE->x[1] = e[1].xc; 
	    PE->y[0] = e[0].yc; PE->y[1] = e[1].yc; 
	    PE->z[0] = e[0].zc; PE->z[1] = e[1].zc; 
	    PE->u[0] = e[0].uc; PE->u[1] = e[1].uc;
	    PE->v[0] = e[0].vc; PE->v[1] = e[1].vc;
	    PE->w[0] = e[0].wc; PE->w[1] = e[1].wc;
	    LETS_PRINT_THE_RESULT ;
	  }
	  else{
	    PE = Create_PostElement(iGeo, POINT, 1, 0) ;
	    PE->x[0] = (e[0].xc + e[1].xc) / 2. ; 
	    PE->y[0] = (e[0].yc + e[1].yc) / 2. ; 
	    PE->z[0] = (e[0].zc + e[1].zc) / 2. ; 
	    PE->u[0] = (e[0].uc + e[1].uc) / 2. ;
	    PE->v[0] = (e[0].vc + e[1].vc) / 2. ;
	    PE->w[0] = (e[0].wc + e[1].wc) / 2. ;
	    LETS_PRINT_THE_RESULT ;
	  }
	}

      }

    }
    Format_PostFooter(PostSubOperation_P, 0);
    break;
    
  default :
    Msg(ERROR, "Unknown operation in Print OnSection");
    break;
  }

  List_Delete(PE_L) ;
  if(CPQ_P) Free(CumulativeValues);
  for(iCut = 0 ; iCut < NBR_MAX_CUT ; iCut++) Free(e[iCut].Value) ;

  GetDP_End ;
}

#undef NBR_MAX_CUT
#undef LETS_PRINT_THE_RESULT

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n G r i d                                           */
/* ------------------------------------------------------------------------ */


#define LETS_PRINT_THE_RESULT							\
 PE->x[0] = Current.xp = Current.x ;						\
 PE->y[0] = Current.yp = Current.y ;						\
 PE->z[0] = Current.zp = Current.z ;						\
 if(!NCPQ_P){									\
   for (ts = 0 ; ts < NbTimeStep ; ts++){					\
     PE->Value[0] = CumulativeValues[ts] ;					\
     Format_PostElement(PSO_P->Format, PSO_P->Iso, 0,				\
		        Current.Time, ts, NbTimeStep,				\
                        Current.NbrHar, PSO_P->HarmonicToTime,                  \
			Normal, PE,                                             \
			PSO_P->ChangeOfCoordinates,                             \
			PSO_P->ChangeOfValues);                                 \
   }										\
 }										\
 else{										\
   InWhichElement(Current.GeoData->Grid, NULL, &Element, PSO_P->Dimension,	\
                  Current.x, Current.y, Current.z, &u, &v, &w) ;		\
   Current.Region = Element.Region ;						\
   if(Element.Num != NO_ELEMENT)						\
     PE->Index = Geo_GetGeoElementIndex(Element.GeoElement) ;			\
   else										\
     PE->Index = NO_ELEMENT ;							\
   for (ts = 0 ; ts < NbTimeStep ; ts++) {					\
     Pos_InitAllSolutions(PSO_P->TimeStep_L, ts) ;				\
     Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,		\
                 NULL, &Element, u, v, w, &PE->Value[0]);			\
     if(CPQ_P)									\
       Combine_PostQuantity(PSO_P->CombinationType, Order,			\
                            &PE->Value[0], &CumulativeValues[ts]) ;		\
     Format_PostElement(PSO_P->Format, PSO_P->Iso, 0,				\
                        Current.Time, ts, NbTimeStep,				\
                        Current.NbrHar, PSO_P->HarmonicToTime,                  \
			Normal, PE,                                      	\
			PSO_P->ChangeOfCoordinates,                             \
			PSO_P->ChangeOfValues);                                 \
   }										\
 }

#define ARRAY(i,j,k,t)						\
  Array[ (t) * Current.NbrHar * ((int)N[0]+1) * ((int)N[1]+1) +	\
         (k) * ((int)N[0]+1) * ((int)N[1]+1) + 			\
         (j) * ((int)N[0]+1) +					\
         (i) ]

#define LETS_STORE_THE_RESULT								\
 if(!NCPQ_P){										\
   if(CumulativeValues[0].Type != SCALAR)						\
     Msg(ERROR, "Print OnPlane is not designed for non scalar values with Depth > 1");	\
   else											\
     for (ts = 0 ; ts < NbTimeStep ; ts++)						\
       for(k = 0 ; k < Current.NbrHar ; k++)						\
         ARRAY(i1,i2,k,ts) = (float)CumulativeValues[ts].Val[MAX_DIM*k] ;		\
 }											\
 else{											\
   InWhichElement(Current.GeoData->Grid, NULL, &Element, PSO_P->Dimension,		\
                  Current.x, Current.y, Current.z, &u, &v, &w) ;			\
   Current.Region = Element.Region ;							\
   for (ts = 0 ; ts < NbTimeStep ; ts++) {						\
     Pos_InitAllSolutions(PSO_P->TimeStep_L, ts) ;					\
     Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,			\
                      NULL, &Element, u, v, w, &PE->Value[0]);				\
     if(PE->Value[0].Type != SCALAR)							\
       Msg(ERROR, "Print OnPlane is not designed for non scalar values with Depth > 1");\
     if(CPQ_P)										\
       Combine_PostQuantity(PSO_P->CombinationType, Order,				\
                            &PE->Value[0], &CumulativeValues[ts]) ;			\
     for(k = 0 ; k < Current.NbrHar ; k++)						\
       ARRAY(i1,i2,k,ts) = (float)PE->Value[0].Val[MAX_DIM*k] ;				\
   }											\
 }

void  Pos_PrintOnGrid(struct PostQuantity     *NCPQ_P,
		      struct PostQuantity     *CPQ_P,
		      int                      Order,
		      struct DefineQuantity   *DefineQuantity_P0,
		      struct QuantityStorage  *QuantityStorage_P0,
		      struct PostSubOperation *PSO_P) {

  struct Element       Element ;
  struct Value       * CumulativeValues, Value ;
  struct PostElement * PE , * PE2 ;

  int     i1, i2, i3, j, k, NbTimeStep, ts ;
  float  *Array=NULL ;
  double  u, v, w, Length, Normal[4] = {0., 0., 0., 0.} ;
  double  X[4], Y[4], Z[4], S[4], N[4];

  GetDP_Begin("Pos_PrintOnGrid");

  Get_InitDofOfElement(&Element) ;

  if( !(NbTimeStep = List_Nbr(PSO_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(j = 0 ; j < NbTimeStep ; j++) List_Add(PSO_P->TimeStep_L, &j);
  }

  if(CPQ_P){
    Cal_PostCumulativeQuantity(NULL, PSO_P->PostQuantitySupport[Order],
			       PSO_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  Init_SearchGrid(&Current.GeoData->Grid) ;

  Format_PostHeader(PSO_P->Format, PSO_P->Iso, 
		    NbTimeStep, PSO_P->HarmonicToTime,
		    PSO_P->CombinationType, Order,
		    NCPQ_P?NCPQ_P->Name:NULL,
		    CPQ_P?CPQ_P->Name:NULL);

  PE = Create_PostElement(0, POINT, 1, 0) ;

  switch(PSO_P->SubType) {

  case PRINT_ONGRID_0D :
    Current.x = PSO_P->Case.OnGrid.x[0] ;
    Current.y = PSO_P->Case.OnGrid.y[0] ;
    Current.z = PSO_P->Case.OnGrid.z[0] ;
    Normal[0] = Normal[1] = Normal[2] = 0.0 ;
    LETS_PRINT_THE_RESULT ;
    break;

  case PRINT_ONGRID_1D :
    X[0] = PSO_P->Case.OnGrid.x[0] ; X[1] = PSO_P->Case.OnGrid.x[1] ;
    Y[0] = PSO_P->Case.OnGrid.y[0] ; Y[1] = PSO_P->Case.OnGrid.y[1] ; 
    Z[0] = PSO_P->Case.OnGrid.z[0] ; Z[1] = PSO_P->Case.OnGrid.z[1] ;
    N[0] = PSO_P->Case.OnGrid.n[0] ;
    Normal[1] = Normal[2] = 0.0 ;
    Length = sqrt(DSQU(X[1]-X[0]) + DSQU(Y[1]-Y[0]) + DSQU(Z[1]-Z[0])) ;
    for (i1 = 0 ; i1 <= N[0] ; i1++) {
      S[0] = (double)i1 / (double)(N[0] ? N[0] : 1) ;
      Normal[0] = Length * S[0] ;
      Current.x = X[0] + (X[1] - X[0]) * S[0] ;
      Current.y = Y[0] + (Y[1] - Y[0]) * S[0] ;
      Current.z = Z[0] + (Z[1] - Z[0]) * S[0] ;
      LETS_PRINT_THE_RESULT ;
    }
    break;

  case PRINT_ONGRID_2D :
    X[0] = PSO_P->Case.OnGrid.x[0] ; X[1] = PSO_P->Case.OnGrid.x[1] ;
    Y[0] = PSO_P->Case.OnGrid.y[0] ; Y[1] = PSO_P->Case.OnGrid.y[1] ;
    Z[0] = PSO_P->Case.OnGrid.z[0] ; Z[1] = PSO_P->Case.OnGrid.z[1] ;
    X[2] = PSO_P->Case.OnGrid.x[2] ; 
    Y[2] = PSO_P->Case.OnGrid.y[2] ; 
    Z[2] = PSO_P->Case.OnGrid.z[2] ; 

    S[0] = X[1]-X[0]; S[1] = Y[1]-Y[0]; S[2] = Z[1]-Z[0];
    N[0] = X[2]-X[0]; N[1] = Y[2]-Y[0]; N[2] = Z[2]-Z[0];
    prodvec(S,N,Normal);
    Length = sqrt(DSQU(Normal[0])+DSQU(Normal[1])+DSQU(Normal[2]));
    if(!Length){
      Msg(WARNING, "Bad plane (null normal)"); 
      GetDP_End ;
    }
    Normal[0]/=Length ; Normal[1]/=Length ; Normal[2]/=Length ;

    N[0] = PSO_P->Case.OnGrid.n[0] ; N[1] = PSO_P->Case.OnGrid.n[1] ;

    if(PSO_P->Depth > 1)
      Array = (float*)
	Malloc(NbTimeStep*Current.NbrHar*(int)((N[0]+1)*(N[1]+1))*sizeof(float)) ;
    
    for (i1 = 0 ; i1 <= N[0] ; i1++) {
      S[0] = (double)i1 / (double)(N[0] ? N[0] : 1) ;
      for (i2 = 0 ; i2 <= N[1] ; i2++) {
	S[1] = (double)i2 / (double)(N[1] ? N[1] : 1) ;
	Current.x = X[0] + (X[1] - X[0]) * S[0] + (X[2] - X[0]) * S[1] ;
	Current.y = Y[0] + (Y[1] - Y[0]) * S[0] + (Y[2] - Y[0]) * S[1] ;
	Current.z = Z[0] + (Z[1] - Z[0]) * S[0] + (Z[2] - Z[0]) * S[1] ;	  
	if(PSO_P->Depth > 1){
	  LETS_STORE_THE_RESULT ;
	}
	else{
	  LETS_PRINT_THE_RESULT ;
	}
      }
      if(PSO_P->Depth < 2 && !Flag_BIN) fprintf(PostStream, "\n");
    }

    if(PSO_P->Depth > 1){
      PE2 = Create_PostElement(0, TRIANGLE, 3, 0);
      PE2->Value[0].Type = PE2->Value[1].Type = PE2->Value[2].Type = SCALAR ;
      for (i1 = 0 ; i1 < N[0] ; i1++) {
	S[0] = (double)i1 / (double)(N[0] ? N[0] : 1) ;
	S[2] = (double)(i1+1) / (double)(N[0] ? N[0] : 1) ;
	for (i2 = 0 ; i2 < N[1] ; i2++) {
	  S[1] = (double)i2 / (double)(N[1] ? N[1] : 1) ;
	  S[3] = (double)(i2+1) / (double)(N[1] ? N[1] : 1) ;
	  for (ts = 0 ; ts < NbTimeStep ; ts++){
	    PE2->x[0] = X[0] + (X[1] - X[0]) * S[0] + (X[2] - X[0]) * S[1] ;
	    PE2->y[0] = Y[0] + (Y[1] - Y[0]) * S[0] + (Y[2] - Y[0]) * S[1] ;
	    PE2->z[0] = Z[0] + (Z[1] - Z[0]) * S[0] + (Z[2] - Z[0]) * S[1] ;	  
	    for(k = 0 ; k < Current.NbrHar ; k++)
	      PE2->Value[0].Val[MAX_DIM*k] = ARRAY(i1,i2,k,ts) ;
	    PE2->x[1] = X[0] + (X[1] - X[0]) * S[2] + (X[2] - X[0]) * S[1] ;
	    PE2->y[1] = Y[0] + (Y[1] - Y[0]) * S[2] + (Y[2] - Y[0]) * S[1] ;
	    PE2->z[1] = Z[0] + (Z[1] - Z[0]) * S[2] + (Z[2] - Z[0]) * S[1] ;	  
	    for(k = 0 ; k < Current.NbrHar ; k++)
	      PE2->Value[1].Val[MAX_DIM*k] = ARRAY(i1+1,i2,k,ts) ;
	    PE2->x[2] = X[0] + (X[1] - X[0]) * S[0] + (X[2] - X[0]) * S[3] ;
	    PE2->y[2] = Y[0] + (Y[1] - Y[0]) * S[0] + (Y[2] - Y[0]) * S[3] ;
	    PE2->z[2] = Z[0] + (Z[1] - Z[0]) * S[0] + (Z[2] - Z[0]) * S[3] ;	  
	    for(k = 0 ; k < Current.NbrHar ; k++)
	      PE2->Value[2].Val[MAX_DIM*k] = ARRAY(i1,i2+1,k,ts) ;
	    Format_PostElement(PSO_P->Format, PSO_P->Iso, 0,
			       Current.Time, ts, NbTimeStep,
			       Current.NbrHar, PSO_P->HarmonicToTime, 
			       Normal, PE2,
			       PSO_P->ChangeOfCoordinates,
			       PSO_P->ChangeOfValues);
	  }
	  PE2->x[0] = X[0] + (X[1] - X[0]) * S[2] + (X[2] - X[0]) * S[3] ;
	  PE2->y[0] = Y[0] + (Y[1] - Y[0]) * S[2] + (Y[2] - Y[0]) * S[3] ;
	  PE2->z[0] = Z[0] + (Z[1] - Z[0]) * S[2] + (Z[2] - Z[0]) * S[3] ;	  
	  for (ts = 0 ; ts < NbTimeStep ; ts++){
	    for(k = 0 ; k < Current.NbrHar ; k++)
	      PE2->Value[0].Val[MAX_DIM*k] = ARRAY(i1+1,i2+1,k,ts) ;
	    Format_PostElement(PSO_P->Format, PSO_P->Iso, 0,
			       Current.Time, ts, NbTimeStep,
			       Current.NbrHar, PSO_P->HarmonicToTime, 
			       Normal, PE2, 
			       PSO_P->ChangeOfCoordinates,
			       PSO_P->ChangeOfValues);
	  }
	}
      }
      Destroy_PostElement(PE2) ;
      Free(Array) ;
    }
    break;

  case PRINT_ONGRID_3D :
    X[0] = PSO_P->Case.OnGrid.x[0] ; X[1] = PSO_P->Case.OnGrid.x[1] ; 
    Y[0] = PSO_P->Case.OnGrid.y[0] ; Y[1] = PSO_P->Case.OnGrid.y[1] ;
    Z[0] = PSO_P->Case.OnGrid.z[0] ; Z[1] = PSO_P->Case.OnGrid.z[1] ;
    X[2] = PSO_P->Case.OnGrid.x[2] ; X[3] = PSO_P->Case.OnGrid.x[3] ;
    Y[2] = PSO_P->Case.OnGrid.y[2] ; Y[3] = PSO_P->Case.OnGrid.y[3] ;
    Z[2] = PSO_P->Case.OnGrid.z[2] ; Z[3] = PSO_P->Case.OnGrid.z[3] ;
    N[0] = PSO_P->Case.OnGrid.n[0] ; 
    N[1] = PSO_P->Case.OnGrid.n[1] ;
    N[2] = PSO_P->Case.OnGrid.n[2] ;
    Normal[0] = Normal[1] = Normal[2] = 0.0 ;
    for (i1 = 0 ; i1 <= N[0] ; i1++) {
      S[0] = (double)i1 / (double)(N[0] ? N[0] : 1) ;
      for (i2 = 0 ; i2 <= N[1] ; i2++) {
	S[1] = (double)i2 / (double)(N[1] ? N[1] : 1) ;
	for (i3 = 0 ; i3 <= N[2] ; i3++) {
	  S[2] = (double)i3 / (double)(N[2] ? N[2] : 1) ;
	  Current.x = X[0] + (X[1]-X[0])*S[0] + (X[2]-X[0])*S[1] + (X[3]-X[0])*S[2] ;
	  Current.y = Y[0] + (Y[1]-Y[0])*S[0] + (Y[2]-Y[0])*S[1] + (Y[3]-Y[0])*S[2] ;
	  Current.z = Z[0] + (Z[1]-Z[0])*S[0] + (Z[2]-Z[0])*S[1] + (Z[3]-Z[0])*S[2] ;
	  LETS_PRINT_THE_RESULT ;
	}
	if(!Flag_BIN) fprintf(PostStream, "\n");
      }
      if(!Flag_BIN) fprintf(PostStream, "\n");
    }
    break;

  case PRINT_ONGRID_PARAM :
    Normal[0] = Normal[1] = Normal[2] = 0.0 ;
    for (i1 = 0 ; i1 < List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[0]) ; i1++) {
      List_Read(PSO_P->Case.OnParamGrid.ParameterValue[0], i1, &Current.a) ;
      for (i2 = 0 ; i2 < List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[1]) ; i2++) {
	List_Read(PSO_P->Case.OnParamGrid.ParameterValue[1], i2, &Current.b) ;
	for (i3 = 0 ; i3 < List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[2]) ; i3++) {
	  List_Read(PSO_P->Case.OnParamGrid.ParameterValue[2], i3, &Current.c) ;
	  Get_ValueOfExpressionByIndex(PSO_P->Case.OnParamGrid.ExpressionIndex[0],
				       NULL, 0., 0., 0., &Value) ; 
	  Current.x = Value.Val[0];
	  Get_ValueOfExpressionByIndex(PSO_P->Case.OnParamGrid.ExpressionIndex[1],
				       NULL, 0., 0., 0., &Value) ; 
	  Current.y = Value.Val[0];
	  Get_ValueOfExpressionByIndex(PSO_P->Case.OnParamGrid.ExpressionIndex[2],
				       NULL, 0., 0., 0., &Value) ; 
	  Current.z = Value.Val[0];
	  Normal[0] = Current.a ;
	  Normal[1] = Current.b ;
	  Normal[2] = Current.c ;
	  LETS_PRINT_THE_RESULT ;
	}
	if(List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[2])>1 && !Flag_BIN) 
	  fprintf(PostStream, "\n");
      }
      if(List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[1])>1 && !Flag_BIN) 
	fprintf(PostStream, "\n");
    }
    break;
  }

  Destroy_PostElement(PE) ;

  Format_PostFooter(PSO_P, 0);

  if(CPQ_P) Free(CumulativeValues);

  GetDP_End ;
}

#undef LETS_PRINT_THE_RESULT
#undef LETS_STORE_THE_RESULT
#undef ARRAY


/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n R e g i o n                                       */
/* ------------------------------------------------------------------------ */

void  Pos_PrintOnRegion(struct PostQuantity      *NCPQ_P,
			struct PostQuantity      *CPQ_P,
			int                       Order,
			struct DefineQuantity    *DefineQuantity_P0,
			struct QuantityStorage   *QuantityStorage_P0,
			struct PostSubOperation  *PostSubOperation_P) {

  struct Element   Element ;
  /*  struct Value   * CumulativeValues ; */
  struct Value     Value ;
  struct PostQuantity  *PQ_P ;

  List_T  *Region_L, *Support_L ;
  int      i, iTime, NbrTimeStep ;
  int      Nbr_Region, Num_Region ;

  GetDP_Begin("Pos_PrintOnRegion");

  if( !(NbrTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbrTimeStep = List_Nbr(Current.DofData->Solutions);
    for(iTime = 0 ; iTime < NbrTimeStep ; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }

  if (CPQ_P && NCPQ_P)
    Msg(ERROR, "Only one PostProcessing Quantity allowed in PostOperation") ;

  if (CPQ_P) {
    PQ_P = CPQ_P ;
    Support_L = /* for e.g. PQ[ Support ] ... */
      ((struct Group *)
       List_Pointer(Problem_S.Group, 
		    PostSubOperation_P->PostQuantitySupport[Order]))->InitialList ;
  }
  else {
    PQ_P = NCPQ_P ;  Support_L = NULL ;
  }

  /*
  if(CPQ_P){
    Cal_PostCumulativeQuantity(NULL, PostSubOperation_P->PostQuantitySupport[Order],
			       PostSubOperation_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  if (!NCPQ_P) { Only one Cumulative
    for (j = 0 ; j < NbrTimeStep ; j++) {
      Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, j) ;
      fprintf(PostStream, "%.8g", Current.Time) ;
      Format_PostValue(PostSubOperation_P->Format, &CumulativeValues[j],
		       Current.NbrHar, Current.Time, 0, 1) ;
    }
    fprintf(PostStream, "\n"); 
  }
  else {  There is one non-cumulative
  */
  /* Il vaut mieux supprimer cela ... ou plutot l'entendre comme cela : */
  if (!Support_L &&
      List_Nbr(NCPQ_P->PostQuantityTerm) &&
      (
       ((struct PostQuantityTerm *)List_Pointer(NCPQ_P->PostQuantityTerm, 0))
       ->Type == LOCALQUANTITY &&
       ((struct PostQuantityTerm *)List_Pointer(NCPQ_P->PostQuantityTerm, 0))
       ->EvaluationType == LOCAL)
      )
    Msg(ERROR, "Print OnRegion not valid for PostProcessing Quantity '%s'", NCPQ_P->Name);

  Region_L =  (PostSubOperation_P->Case.OnRegion.RegionIndex < 0)?  NULL :
    ((struct Group *)
     List_Pointer(Problem_S.Group, 
		  PostSubOperation_P->Case.OnRegion.RegionIndex))->InitialList ;
  if (Region_L) {
    List_Sort(Region_L, fcmp_int) ;
    Nbr_Region = List_Nbr(Region_L) ;

    if (PostSubOperation_P->Format != FORMAT_SPACE_TABLE) {
      fprintf(PostStream, "# %s on", PQ_P->Name) ;
      for(i = 0 ; i < Nbr_Region ; i++) {
	List_Read(Region_L, i, &Num_Region) ;
	fprintf(PostStream, " %d", Num_Region) ;
      }
      fprintf(PostStream, "\n") ;
    }
  }
  else
    Nbr_Region = 1 ;

  for (iTime = 0 ; iTime < NbrTimeStep ; iTime++) {

    Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, iTime) ;

    for(i = 0 ; i < Nbr_Region ; i++) {

      if (Region_L) {
	List_Read(Region_L, i, &Num_Region) ;
	Current.SubRegion = Num_Region ; /* Region being a GlobalQuantity Entity no */
      }
      else
	Num_Region = NO_REGION ;

      Element.GeoElement = NULL ;
      Element.Num = NO_ELEMENT ;
      Element.Type = -1 ;
      Current.Region = Element.Region = Num_Region ;
      Current.x = Current.y = Current.z = 0. ;
      Cal_PostQuantity(PQ_P, DefineQuantity_P0, QuantityStorage_P0, 
		       Support_L, &Element, 0., 0., 0., &Value) ;

      Format_PostValue(PostSubOperation_P->Format,
		       Current.Time, i, Nbr_Region,
		       Current.NbrHar, PostSubOperation_P->HarmonicToTime,
		       PostSubOperation_P->NoNewLine,
		       &Value) ;
    }

  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t W i t h A r g u m e n t                               */
/* ------------------------------------------------------------------------ */

void  Pos_PrintWithArgument(struct PostQuantity      *NCPQ_P,
			    struct PostQuantity      *CPQ_P,
			    int                       Order,
			    struct DefineQuantity    *DefineQuantity_P0,
			    struct QuantityStorage   *QuantityStorage_P0,
			    struct PostSubOperation  *PostSubOperation_P) {

  struct Element           Element ;
  struct Value             Value ;

  struct Expression        * Expression_P ;
  List_T  *Region_L ;
  int      i, N, Num_Region ;
  double   X[2], S, x ;

  GetDP_Begin("Pos_PrintWithArgument");

  if(CPQ_P)
    Msg(ERROR, "Cumulative PostProcessing Quantity in PrintWithArgument not done") ;

  X[0] = PostSubOperation_P->Case.WithArgument.x[0] ;
  X[1] = PostSubOperation_P->Case.WithArgument.x[1] ;
  N = PostSubOperation_P->Case.WithArgument.n ;

  Expression_P = (struct Expression *)
    List_Pointer(Problem_S.Expression,
		 PostSubOperation_P->Case.WithArgument.ArgumentIndex) ;

  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group,
			   PostSubOperation_P->Case.WithArgument.RegionIndex))
    ->InitialList ;

  if (List_Nbr(Region_L))
    List_Read(Region_L, 0, &Num_Region) ;
  else
    Num_Region = NO_REGION ;

  for (i = 0 ; i <= N ; i++) {

      S = (double)i / (double)(N ? N : 1) ;
      x = X[0] + (X[1] - X[0]) * S ;
      Expression_P->Case.Constant = x ;

      Element.GeoElement = NULL ;
      Element.Num = NO_ELEMENT ;
      Element.Type = -1 ;
      Current.Region = Element.Region = Num_Region ;
      Current.x = Current.y = Current.z = 0. ;

      Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, 
		       NULL, &Element, 0., 0., 0., &Value) ;

      Format_PostValue(PostSubOperation_P->Format,
		       x, 0, 1,
		       Current.NbrHar, PostSubOperation_P->HarmonicToTime,
		       PostSubOperation_P->NoNewLine,
		       &Value) ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t G r o u p                                             */
/* ------------------------------------------------------------------------ */

void  Pos_PrintGroup(struct PostSubOperation *PostSubOperation_P) {

  struct Group        *Group_P;
  struct Geo_Element  *GeoElement;
  struct PostElement  *SL;
  List_T              *Region_L;
  int                  i, NbrGeo, iGeo, *NumNodes;
  double               x [NBR_MAX_NODES_IN_ELEMENT] ;
  double               y [NBR_MAX_NODES_IN_ELEMENT] ;
  double               z [NBR_MAX_NODES_IN_ELEMENT] ;

  GetDP_Begin("Pos_PrintGroup");

  NbrGeo = Geo_GetNbrGeoElements() ;

  Format_PostHeader(PostSubOperation_P->Format, 
		    PostSubOperation_P->Iso, 1,
		    PostSubOperation_P->HarmonicToTime, 
		    PostSubOperation_P->CombinationType, 0,
		    NULL, NULL);
  
  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group, 
			   PostSubOperation_P->Case.Group.GroupIndex))->InitialList ;
  Group_P = (struct Group *)
    List_Pointer(Problem_S.Group, 
		 PostSubOperation_P->Case.Group.ExtendedGroupIndex);

  SL = Create_PostElement(0, LINE, 2, 1) ;

  if(!Group_P->ExtendedList) Generate_ExtendedGroup(Group_P) ;

  for(iGeo = 0 ; iGeo < NbrGeo ; iGeo++) {
    
    if(InteractiveInterrupt) break;
    
    Progress(iGeo, NbrGeo, "Compute: ") ;

    GeoElement = Geo_GetGeoElement(iGeo) ;
    if(List_Search(Region_L, &GeoElement->Region, fcmp_int)){

      Geo_GetNodesCoordinates
	(GeoElement->NbrNodes, GeoElement->NumNodes, x, y, z) ;

      switch (Group_P->FunctionType) {

      case EDGESOFTREEIN :
	if(!GeoElement->NbrEdges) Geo_CreateEdgesOfElement(GeoElement) ;
	for(i=0 ; i<GeoElement->NbrEdges ; i++){
	  if(List_Search(Group_P->ExtendedList, &GeoElement->NumEdges[i], fcmp_absint)){
	    NumNodes = Geo_GetNodesOfEdgeInElement(GeoElement, i) ;
	    SL->Index = iGeo;
	    SL->x[0] = x[abs(NumNodes[0])-1]; SL->x[1] = x[abs(NumNodes[1])-1];
	    SL->y[0] = y[abs(NumNodes[0])-1]; SL->y[1] = y[abs(NumNodes[1])-1];
	    SL->z[0] = z[abs(NumNodes[0])-1]; SL->z[1] = z[abs(NumNodes[1])-1];
	    SL->Value[0].Type = SL->Value[1].Type = SCALAR ;
	    SL->Value[0].Val[0] = SL->Value[1].Val[0] = GeoElement->NumEdges[i];
	    Format_PostElement(PostSubOperation_P->Format, PostSubOperation_P->Iso, 0,
			       0, 0, 1, 1, 1, 
			       NULL, SL, 
			       PostSubOperation_P->ChangeOfCoordinates,
			       PostSubOperation_P->ChangeOfValues);
	  }
	}
	break ;

      default :
	Msg(ERROR, "Print function not implemented for this kind of Group");
	break ;

      }

    }

  }

  Destroy_PostElement(SL) ;

  Format_PostFooter(PostSubOperation_P, 0);

  GetDP_End ;
}
