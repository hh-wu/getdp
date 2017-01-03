// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <sstream>
#include <string.h>
#include <math.h>
#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "Cal_PostQuantity.h"
#include "Get_Geometry.h"
#include "Get_DofOfElement.h"
#include "Get_FunctionValue.h"
#include "ExtendedGroup.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "Pos_Formulation.h"
#include "Pos_Element.h"
#include "Pos_Search.h"
#include "Pos_Print.h"
#include "Pos_Format.h"
#include "Adapt.h"
#include "MallocUtils.h"
#include "Message.h"

#define SQU(a)     ((a)*(a))

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int    Flag_BIN ;

extern FILE   *PostStream ;

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

struct xyzv {
  double x,y,z;
  struct Value v;
  /*int nbvals; for time domain -> malloc Value *v... */
  int nboccurences;
};

struct ValMinMax {
  struct Value Val, ValX, ValY, ValZ;
};

int CompareValue(const Value * valA_P, const Value * valB_P)
{
  double cmp=0, VecLengthSquA, VecLengthSquB;

  //if (Current.NbrHar != 1)
  //  Message::Error("Cannot compare multi-harmonic values");
  // -> we compare the real part in this case

  switch (valA_P->Type) {
  case SCALAR:
    cmp = valA_P->Val[0] - valB_P->Val[0];
    break;
  case VECTOR:
    VecLengthSquA = valA_P->Val[0] * valA_P->Val[0] +
                    valA_P->Val[1] * valA_P->Val[1] +
                    valA_P->Val[2] * valA_P->Val[2];
    VecLengthSquB = valB_P->Val[0] * valB_P->Val[0] +
                    valB_P->Val[1] * valB_P->Val[1] +
                    valB_P->Val[2] * valB_P->Val[2];
    cmp = VecLengthSquA - VecLengthSquB;
    break;
  default:
    Message::Error("Cannot compare values other than SCALAR and VECTOR");
  }
  if(cmp > 1.e-16)
    return 1;
  else if(cmp < -1.e-16)
    return -1;
  else
    return 0;
}

void SetValMinMax(struct PostElement *PE_P,
                  int    iNode,
                  struct ValMinMax   *ValueMinMax_P)
{
  Cal_CopyValue(&PE_P->Value[iNode], &ValueMinMax_P->Val);
  ValueMinMax_P->ValX.Val[0] = PE_P->x[iNode];
  ValueMinMax_P->ValY.Val[0] = PE_P->y[iNode];
  ValueMinMax_P->ValZ.Val[0] = PE_P->z[iNode];
}

void InitValMinMax(struct ValMinMax   *ValueMinMax_P,
                   struct PostElement *PE_P)
{
  // Init ValueMin and ValueMax
  ValueMinMax_P->ValX.Type = SCALAR;
  ValueMinMax_P->ValY.Type = SCALAR;
  ValueMinMax_P->ValZ.Type = SCALAR;
  Cal_ZeroValue(&ValueMinMax_P->ValX);
  Cal_ZeroValue(&ValueMinMax_P->ValY);
  Cal_ZeroValue(&ValueMinMax_P->ValZ);
  SetValMinMax(PE_P, 0, ValueMinMax_P);
}

void EvalMinMax(struct PostElement *PE_P,
                struct ValMinMax   *ValueMin_P,
                struct ValMinMax   *ValueMax_P)
{
  for(int iNode = 0 ; iNode < PE_P->NbrNodes ; iNode++) {
    if (CompareValue(&PE_P->Value[iNode], &ValueMin_P->Val) < 0)
      SetValMinMax(PE_P, iNode, ValueMin_P);
    if (CompareValue(&PE_P->Value[iNode], &ValueMax_P->Val) > 0)
      SetValMinMax(PE_P, iNode, ValueMax_P);
  }
}

static int fcmp_xyzv(const void * a, const void * b)
{
  struct xyzv *p1, *p2;
  double TOL = Current.GeoData->CharacteristicLength * 1.e-8;
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

static void Cut_SkinPostElement(void *a, void *b)
{
  struct PostElement  * PE ;

  PE = *(struct PostElement**)a ;

  Cut_PostElement(PE, Geo_GetGeoElement(PE->Index), SkinPostElement_L,
		  PE->Index, SkinDepth, 0, 1) ;
}

static void Decompose_SkinPostElement(void *a, void *b)
{
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
			    struct PostSubOperation *PSO_P)
{
  Tree_T  * PostElement_T ;
  List_T  * PostElement_L, * Region_L ;
  struct Group * Group_P ;

  struct Element        Element ;
  struct PostElement  * PE ;
  struct Value        * CumulativeValues ;
  struct xyzv           xyzv, *xyzv_P ;
  struct ValMinMax      ValueMin, ValueMax ;
  Tree_T              * xyzv_T ;
  double  * Error=NULL, Dummy[5], d, x1, x2 ;
  int       jj, NbrGeo, iGeo, incGeo, NbrPost=0, iPost ;
  int       NbrTimeStep, iTime, iNode ;
  int       Store = 0, DecomposeInSimplex = 0, Depth ;
  bool      StoreMinMax, ValueMinMaxInitialized;

  /* Do we have to store min. and max. values? */
  if (PSO_P->StoreMinInRegister  >= 0 || PSO_P->StoreMaxInRegister >= 0 ||
      PSO_P->StoreMinXinRegister >= 0 || PSO_P->StoreMaxXinRegister >= 0 ||
      PSO_P->StoreMinYinRegister >= 0 || PSO_P->StoreMaxYinRegister >= 0 ||
      PSO_P->StoreMinZinRegister >= 0 || PSO_P->StoreMaxZinRegister >= 0) {
    StoreMinMax = true;
  }
  else
    StoreMinMax = false;

  /* Select the TimeSteps */

  NbrTimeStep = Pos_InitTimeSteps(PSO_P);

  /* Print the header */

  NbrGeo = Geo_GetNbrGeoElements() ;

  Format_PostHeader(PSO_P, NbrTimeStep, Order,
                    PSO_P->Label ? PSO_P->Label :
		    (NCPQ_P ? NCPQ_P->Name : NULL),
                    PSO_P->Label ? NULL :
                    (CPQ_P ? CPQ_P->Name : NULL));

  /* Get the region */

  Group_P = (struct Group *)List_Pointer(Problem_S.Group,
                                         PSO_P->Case.OnRegion.RegionIndex);
  Region_L = Group_P->InitialList ;
  Get_InitDofOfElement(&Element) ;

  /* Compute the Cumulative quantity, if any */

  if(CPQ_P){
    Cal_PostCumulativeQuantity(Region_L,
			       PSO_P->PostQuantitySupport[Order],
			       PSO_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  /* If we compute a skin, apply smoothing, sort the results, or
     perform adaption, we'll need to store all the PostElements */

  if(PSO_P->Smoothing || PSO_P->Skin ||
     PSO_P->Adapt || PSO_P->Sort)
    Store = 1 ;

  /* Check if everything is OK for Adaption */

  if(PSO_P->Adapt){
    if(PSO_P->Dimension == _ALL){
      Message::Error("You have to specify a Dimension for the adaptation (2 or 3)");
      return;
    }
    if(PSO_P->Target < 0.){
      Message::Error("You have to specify a Target for the adaptation (e.g. 0.01)");
      return;
    }
    if(NbrTimeStep > 1){
      Message::Error("Adaption not ready with more than one time step");
      return;
    }
  }

  /* Check if we should decompose all PostElements to simplices */

  if(!PSO_P->Skin && PSO_P->DecomposeInSimplex)
    DecomposeInSimplex = 1 ;

  /* Check for de-refinement */

  if(PSO_P->Depth < 0)
    incGeo = - PSO_P->Depth ;
  else
    incGeo = 1 ;

  /* Create the list of PostElements */

  PostElement_L = List_Create(Store ? NbrGeo/10 : 10, Store ? NbrGeo/10 : 10,
			      sizeof(struct PostElement *)) ;

  if(Store){

    /* If we have a Skin, we will divide after the skin extraction */

    if(PSO_P->Skin && PSO_P->Depth > 1)
      Depth = 1;
    else
      Depth = PSO_P->Depth;

    /* Generate all PostElements */

    Message::ResetProgressMeter();
    for(iGeo = 0 ; iGeo < NbrGeo ; iGeo += incGeo) {
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      if ((Group_P->Type != ELEMENTLIST  &&
           List_Search(Region_L, &Element.GeoElement->Region, fcmp_int))
          ||
          (Group_P->Type == ELEMENTLIST  &&
           Check_IsEntityInExtendedGroup(Group_P, Element.GeoElement->Num, 0))
          ) {
	Fill_PostElement(Element.GeoElement, PostElement_L, iGeo,
			 Depth, PSO_P->Skin,
			 PSO_P->EvaluationPoints,
			 DecomposeInSimplex) ;
      }
      Message::ProgressMeter(iGeo + 1, NbrGeo, "Post-processing (Generate)");
      if(Message::GetErrorCount()) break;
    }

    /* Compute the skin */

    if(PSO_P->Skin){
      PostElement_T = Tree_Create(sizeof(struct PostElement *), fcmp_PostElement);

      Message::ResetProgressMeter();
      for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){
	PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost) ;
	if(Tree_PQuery(PostElement_T, &PE)){
	  Tree_Suppress(PostElement_T, &PE);
	  Destroy_PostElement(PE) ;
	}
	else
	  Tree_Add(PostElement_T, &PE);
	Message::ProgressMeter(iPost + 1, List_Nbr(PostElement_L), "Post-processing (Skin)");
        if(Message::GetErrorCount()) break;
      }

      /* only decompose in simplices (triangles!) now */
      if(PSO_P->DecomposeInSimplex){
	List_Reset(PostElement_L);
	SkinPostElement_L = PostElement_L ;
	Tree_Action(PostElement_T, Decompose_SkinPostElement);
	for(iPost = 0 ; iPost < List_Nbr(SkinPostElement_L) ; iPost++)
	  Tree_Add(PostElement_T,
                   (struct PostElement**)List_Pointer(SkinPostElement_L, iPost)) ;
      }

      if(PSO_P->Depth > 1){
	List_Reset(PostElement_L);
	SkinPostElement_L = PostElement_L ;
	SkinDepth = PSO_P->Depth ;
	Tree_Action(PostElement_T, Cut_SkinPostElement) ;
      }
      else{
	List_Delete(PostElement_L);
	PostElement_L = Tree2List(PostElement_T);
      }

      Tree_Delete(PostElement_T);
    }

  } /* if Store */

  /* Loop on GeoElements */

  Message::ResetProgressMeter();
  ValueMinMaxInitialized = false;
  for(iGeo = 0 ; iGeo < NbrGeo ; iGeo += incGeo) {

    if(Store){
      if(iGeo) break ;
    }
    else{
      List_Reset(PostElement_L) ;
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      if ((Group_P->Type != ELEMENTLIST  &&
           List_Search(Region_L, &Element.GeoElement->Region, fcmp_int))
          ||
          (Group_P->Type == ELEMENTLIST  &&
           Check_IsEntityInExtendedGroup(Group_P, Element.GeoElement->Num, 0))
          ) {
	Fill_PostElement(Element.GeoElement, PostElement_L, iGeo,
			 PSO_P->Depth, PSO_P->Skin,
			 PSO_P->EvaluationPoints,
			 DecomposeInSimplex) ;
      }
    }

    NbrPost = List_Nbr(PostElement_L) ;

    /* Loop on PostElements */

    for(iPost = 0 ; iPost < NbrPost ; iPost++) {

      PE = *(struct PostElement **)List_Pointer(PostElement_L, iPost) ;

      if(!NCPQ_P){ /* Only one Cumulative */
	for (iTime = 0 ; iTime < NbrTimeStep ; iTime++){
	  for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
	    Cal_CopyValue(&CumulativeValues[iTime], &PE->Value[iNode]);
	  if(!Store)
	    Format_PostElement(PSO_P, PSO_P->Iso, 0,
			       Current.Time, iTime, NbrTimeStep,
			       Current.NbrHar, PSO_P->HarmonicToTime,
			       NULL, PE);
	}
      }
      else{ /* There is one non-cumulative */

	if(PSO_P->SubType == PRINT_ONGRID){ /* We re-interpolate */
	  for (iTime = 0 ; iTime < NbrTimeStep ; iTime++) {
	    Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime) ;
	    for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){
	      InWhichElement(&Current.GeoData->Grid, Region_L, &Element,
			     PSO_P->Dimension,
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
		Combine_PostQuantity(PSO_P->CombinationType, Order,
				     &PE->Value[iNode], &CumulativeValues[iNode]) ;
	    }
	    if (StoreMinMax) {
	      if (!ValueMinMaxInitialized){
	        // Init ValueMin and ValueMax
                InitValMinMax(&ValueMin, PE);
                InitValMinMax(&ValueMax, PE);
                ValueMinMaxInitialized = true;
	      }
	      EvalMinMax(PE, &ValueMin, &ValueMax);
	    }

	    if(!Store)
	      Format_PostElement(PSO_P, PSO_P->Iso, 0,
				 Current.Time, iTime, NbrTimeStep,
				 Current.NbrHar, PSO_P->HarmonicToTime,
				 NULL, PE);
	  }
	}
	else{ /* PRINT_ONREGION: We work on the real mesh */
	  Element.GeoElement = Geo_GetGeoElement(PE->Index) ;
	  Element.Num = Element.GeoElement->Num ;
	  Element.Type = Element.GeoElement->Type ;
	  Current.Region = Element.Region = Element.GeoElement->Region ;
	  Get_NodesCoordinatesOfElement(&Element) ;

	  for (iTime = 0 ; iTime < NbrTimeStep ; iTime++) {

	    Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime) ;

	    for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){
	      Current.x = PE->x[iNode] ;
	      Current.y = PE->y[iNode] ;
	      Current.z = PE->z[iNode] ;
	      Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,
			       NULL, &Element,
			       PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);
              if(CPQ_P)
                Combine_PostQuantity(PSO_P->CombinationType, Order,
                                     &PE->Value[iNode], &CumulativeValues[iTime]) ;
	    }
	    if (StoreMinMax) {
              if (!ValueMinMaxInitialized){
                // Init ValueMin and ValueMax
                InitValMinMax(&ValueMin, PE);
                InitValMinMax(&ValueMax, PE);
                ValueMinMaxInitialized = true;
              }
              EvalMinMax(PE, &ValueMin, &ValueMax);
            }

	    if(!Store)
	      Format_PostElement(PSO_P, PSO_P->Iso, 0,
				 Current.Time, iTime, NbrTimeStep,
				 Current.NbrHar, PSO_P->HarmonicToTime,
				 NULL, PE);
	  }
	}
      }

      if(!Store) Destroy_PostElement(PE) ;

    }
    Message::ProgressMeter(iGeo + 1, NbrGeo, "Post-processing (Compute)");
    if(Message::GetErrorCount()) break;
  } /* for iGeo */

  /* Store minimum or maximum value in register */
  if (StoreMinMax) {
    if (PSO_P->StoreMinInRegister >= 0)
      Cal_StoreInRegister(&ValueMin.Val,  PSO_P->StoreMinInRegister) ;
    if (PSO_P->StoreMinXinRegister >= 0)
      Cal_StoreInRegister(&ValueMin.ValX, PSO_P->StoreMinXinRegister) ;
    if (PSO_P->StoreMinYinRegister >= 0)
      Cal_StoreInRegister(&ValueMin.ValY, PSO_P->StoreMinYinRegister) ;
    if (PSO_P->StoreMinZinRegister >= 0)
      Cal_StoreInRegister(&ValueMin.ValZ, PSO_P->StoreMinZinRegister) ;
    if (PSO_P->StoreMaxInRegister >= 0)
      Cal_StoreInRegister(&ValueMax.Val, PSO_P->StoreMaxInRegister) ;
    if (PSO_P->StoreMaxXinRegister >= 0)
      Cal_StoreInRegister(&ValueMax.Val, PSO_P->StoreMaxXinRegister) ;
    if (PSO_P->StoreMaxYinRegister >= 0)
      Cal_StoreInRegister(&ValueMax.Val, PSO_P->StoreMaxYinRegister) ;
    if (PSO_P->StoreMaxZinRegister >= 0)
      Cal_StoreInRegister(&ValueMax.Val, PSO_P->StoreMaxZinRegister) ;
  }

  /* Perform Smoothing */

  if(PSO_P->Smoothing){

    Message::Info("Smoothing (phase 1)");

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

    Message::Info("Smoothing (phase 2)");

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
	  Message::Warning("Node (%g,%g,%g) not found", xyzv.x, xyzv.y, xyzv.z);
      }
    }

    Tree_Delete(xyzv_T);

  } /* if Smoothing */

  /* Perform Adaption */

  if(PSO_P->Adapt){

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
      Error[iGeo+1] = PSO_P->Target ;
    }

    /* ...except those we want to optimize */
    for(iPost = 0 ; iPost < NbrPost ; iPost++){
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      Error[PE->Index+1] = 0. ;
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
	Error[PE->Index+1] += PE->Value[iNode].Val[0] ;
      Error[PE->Index+1] /= (double)PE->NbrNodes ;
    }

    Adapt (NbrGeo, PSO_P->Adapt,
	   PSO_P->Dimension, Error,
	   Current.GeoData->H, Current.GeoData->P,
	   PSO_P->Target);

    /* Clean up the interpolation orders to fit to what's available */
    if(List_Nbr(PSO_P->Value_L)){
      for(iGeo = 0 ; iGeo < NbrGeo ; iGeo++){
	for(jj = List_Nbr(PSO_P->Value_L)-1 ; jj >= 0  ; jj--){
	  d = *(double*)List_Pointer(PSO_P->Value_L, jj);
	  if(Current.GeoData->P[iGeo+1] > d || jj == 0){
	    Current.GeoData->P[iGeo+1] = d ;
	    break ;
	  }
	}
      }
    }
  } /* if Adapt */

  /* Print everything if we are in Store mode */

  if(Store){

    /* Sort the elements */

    switch(PSO_P->Sort){
    case SORT_BY_POSITION : List_Sort(PostElement_L, fcmp_PostElement) ; break ;
    case SORT_BY_CONNECTIVITY : Sort_PostElement_Connectivity(PostElement_L) ; break ;
    }

    Dummy[0] = Dummy[1] = Dummy[2] = Dummy[3] = Dummy[4] = 0. ;

    for(iPost = 0 ; iPost < NbrPost ; iPost++){
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);

      /* Get the values from adaption */
      if(PSO_P->Adapt){
	Element.GeoElement = Geo_GetGeoElement(PE->Index) ;

	Dummy[0] = Element.GeoElement->Num ;
	Dummy[1] = Error[PE->Index+1] ;
	Dummy[2] = Current.GeoData->H[PE->Index+1] ;
	Dummy[3] = Current.GeoData->P[PE->Index+1] ;
	Dummy[4] = iPost ? 0 : NbrPost ;

	for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){
	  PE->Value[iNode].Type = SCALAR ;
	  if(PSO_P->Adapt == H1 ||
	     PSO_P->Adapt == H2)
	    PE->Value[iNode].Val[0] = Dummy[2] ;
	  else
	    PE->Value[iNode].Val[0] = Dummy[3] ;
	}
      }

      /* Compute curvilinear coord if connection sort */
      if(PSO_P->Sort == SORT_BY_CONNECTIVITY){
	Dummy[0] = Dummy[1] ;
	Dummy[1] = Dummy[0] + sqrt(SQU(PE->x[1]-PE->x[0])+
				   SQU(PE->y[1]-PE->y[0])+
				   SQU(PE->z[1]-PE->z[0])) ;
	Dummy[2] = PE->v[0] ;
	Dummy[3] = -1. ;
      }

      Format_PostElement(PSO_P, PSO_P->Iso, 1,
			 Current.Time, 0, 1,
			 Current.NbrHar, PSO_P->HarmonicToTime,
			 Dummy, PE);
    }
  }

  Format_PostFooter(PSO_P, Store);

  if(Store)
    for(iPost = 0 ; iPost < NbrPost ; iPost++){
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      Destroy_PostElement(PE) ;
    }

  List_Delete(PostElement_L);

  if(CPQ_P) Free(CumulativeValues);
  if(PSO_P->Adapt) Free(Error) ;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n S e c t i o n                                     */
/* ------------------------------------------------------------------------ */

double Plane(double a, double b, double c, double d,
	     double x, double y, double z)
{
  return (a*x+b*y+c*z+d);
}

static double DIRX[3], DIRY[3], DIRZ[3], XCP, YCP ;

int fcmp_Angle (const void *a, const void *b)
{
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

void prodvec (double *a , double *b , double *c)
{
  c[0] = a[1]*b[2]-a[2]*b[1];
  c[1] = a[2]*b[0]-a[0]*b[2];
  c[2] = a[0]*b[1]-a[1]*b[0];
}

void normvec(double *a)
{
  double mod;
  mod = sqrt(SQU(a[0])+SQU(a[1])+SQU(a[2]));
  a[0]/=mod;
  a[1]/=mod;
  a[2]/=mod;
}

#define NBR_MAX_CUT 10

#define LETS_PRINT_THE_RESULT                                           \
  List_Reset(PE_L);                                                     \
  if(PSO_P->Depth < 2)                                                  \
    List_Add(PE_L, &PE) ;                                               \
  else                                                                  \
    Cut_PostElement(PE, Element.GeoElement, PE_L, PE->Index,            \
		    PSO_P->Depth, 0, 1) ;				\
  for(iPost = 0 ; iPost < List_Nbr(PE_L) ; iPost++){                    \
    PE = *(struct PostElement **)List_Pointer(PE_L, iPost) ;            \
    for(iTime = 0 ; iTime < NbTimeStep ; iTime++){                      \
      Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime) ;                  \
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){                  \
	if(NCPQ_P){                                                     \
	  Current.x = PE->x[iNode] ;                                    \
	  Current.y = PE->y[iNode] ;                                    \
	  Current.z = PE->z[iNode] ;                                    \
	  Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, \
		      NULL, &Element, PE->u[iNode], PE->v[iNode], PE->w[iNode], \
		      &PE->Value[iNode]);                               \
	  if(CPQ_P)                                                     \
             Combine_PostQuantity(PSO_P->CombinationType, Order,	\
				  &PE->Value[iNode], &CumulativeValues[iTime]) ; \
	}                                                               \
	else                                                            \
	  Cal_CopyValue(&CumulativeValues[iTime],&PE->Value[iNode]);    \
      }                                                                 \
      Format_PostElement(PSO_P, PSO_P->Iso,0,                           \
			 Current.Time, iTime, NbTimeStep,               \
			 Current.NbrHar, PSO_P->HarmonicToTime,         \
			 NULL, PE);                                     \
    }                                                                   \
  }                                                                     \
  for(iPost = 0 ; iPost < List_Nbr(PE_L) ; iPost++)                     \
     Destroy_PostElement(*(struct PostElement **)List_Pointer(PE_L, iPost));


void  Pos_PrintOnSection(struct PostQuantity     *NCPQ_P,
			 struct PostQuantity     *CPQ_P,
			 int                      Order,
			 struct DefineQuantity   *DefineQuantity_P0,
			 struct QuantityStorage  *QuantityStorage_P0,
			 struct PostSubOperation *PSO_P)
{
  struct CutEdge       e[NBR_MAX_CUT];
  struct Element       Element ;
  struct PostElement * PE ;
  struct Value       * CumulativeValues ;
  List_T             * PE_L ;

  int     NbGeoElement, NbTimeStep, NbCut, * NumNodes ;
  int     iPost, iNode, iGeo, iCut, iEdge, iTime ;
  double  A, B, C, D, d1, d2, u, xcg, ycg, zcg ;
  double  x[3], y[3], z[3] ;

  NbTimeStep = Pos_InitTimeSteps(PSO_P);

  PE_L = List_Create(10, 10, sizeof(struct PostElement *)) ;

  for(iCut = 0 ; iCut < NBR_MAX_CUT ; iCut++)
    e[iCut].Value = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;

  Format_PostHeader(PSO_P, NbTimeStep, Order,
                    PSO_P->Label ? PSO_P->Label :
		    (NCPQ_P ? NCPQ_P->Name : NULL),
                    PSO_P->Label ? NULL :
		    (CPQ_P ? CPQ_P->Name : NULL));

  if(CPQ_P){
    Cal_PostCumulativeQuantity(NULL,
			       PSO_P->PostQuantitySupport[Order],
			       PSO_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  switch(PSO_P->SubType) {

  case PRINT_ONSECTION_1D :
    Message::Error("Print on 1D cuts not done (use Print OnLine instead)");
    break;

  case PRINT_ONSECTION_2D :

    /* Ax+By+Cz+D=0  from  (x0,y0,z0),(x1,y1,z1),(x2,y2,z2) */

    x[0] = PSO_P->Case.OnSection.x[0] ;
    y[0] = PSO_P->Case.OnSection.y[0] ;
    z[0] = PSO_P->Case.OnSection.z[0] ;
    x[1] = PSO_P->Case.OnSection.x[1] ;
    y[1] = PSO_P->Case.OnSection.y[1] ;
    z[1] = PSO_P->Case.OnSection.z[1] ;
    x[2] = PSO_P->Case.OnSection.x[2] ;
    y[2] = PSO_P->Case.OnSection.y[2] ;
    z[2] = PSO_P->Case.OnSection.z[2] ;
    A =  (y[1]-y[0])*(z[2]-z[0]) - (z[1]-z[0])*(y[2]-y[0]) ;
    B = -(x[1]-x[0])*(z[2]-z[0]) + (z[1]-z[0])*(x[2]-x[0]) ;
    C =  (x[1]-x[0])*(y[2]-y[0]) - (y[1]-y[0])*(x[2]-x[0]) ;
    D = -A*x[0]-B*y[0]-C*z[0] ;

    /* Cut each element */

    NbGeoElement = Geo_GetNbrGeoElements() ;

    Message::ResetProgressMeter();
    for(iGeo = 0 ; iGeo < NbGeoElement ; iGeo++) {
      Element.GeoElement = Geo_GetGeoElement(iGeo) ;
      Element.Num        = Element.GeoElement->Num ;
      Element.Type       = Element.GeoElement->Type ;
      Current.Region = Element.Region = Element.GeoElement->Region ;

      if((PSO_P->Dimension == _ALL &&
	  (Element.GeoElement->Type != POINT)) ||
	 (PSO_P->Dimension == _3D &&
	  (Element.GeoElement->Type & (TETRAHEDRON|HEXAHEDRON|PRISM|PYRAMID))) ||
	 (PSO_P->Dimension == _2D &&
	  (Element.GeoElement->Type & (TRIANGLE|QUADRANGLE))) ||
	 (PSO_P->Dimension == _1D &&
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
	      xyz2uvwInAnElement(&Element, e[NbCut].xc, e[NbCut].yc, e[NbCut].zc,
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
	    if(PSO_P->Depth > 0){
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
	  if(PSO_P->Depth > 0){
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
      Message::ProgressMeter(iGeo + 1, NbGeoElement, "Post-processing (Cut)") ;
      if(Message::GetErrorCount()) break;
    }
    Format_PostFooter(PSO_P, 0);
    break;

  default :
    Message::Error("Unknown operation in Print OnSection");
    break;
  }

  List_Delete(PE_L) ;
  if(CPQ_P) Free(CumulativeValues);
  for(iCut = 0 ; iCut < NBR_MAX_CUT ; iCut++) Free(e[iCut].Value) ;
}

#undef NBR_MAX_CUT
#undef LETS_PRINT_THE_RESULT

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n G r i d                                           */
/* ------------------------------------------------------------------------ */


#define LETS_PRINT_THE_RESULT                                           \
 PE->x[0] = Current.xp = Current.x ;                                    \
 PE->y[0] = Current.yp = Current.y ;                                    \
 PE->z[0] = Current.zp = Current.z ;                                    \
 if(!NCPQ_P){                                                           \
   for (ts = 0 ; ts < NbTimeStep ; ts++){                               \
     PE->Value[0] = CumulativeValues[ts] ;                              \
     Format_PostElement(PSO_P, PSO_P->Iso, 0,                           \
		        Current.Time, ts, NbTimeStep,                   \
                        Current.NbrHar, PSO_P->HarmonicToTime,          \
			Normal, PE);                                    \
   }                                                                    \
 }                                                                      \
 else{                                                                  \
   InWhichElement(&Current.GeoData->Grid, NULL, &Element, PSO_P->Dimension, \
                  Current.x, Current.y, Current.z, &u, &v, &w) ;        \
   Current.Region = Element.Region ;                                    \
   if(Element.Num != NO_ELEMENT)                                        \
     PE->Index = Geo_GetGeoElementIndex(Element.GeoElement) ;           \
   else                                                                 \
     PE->Index = NO_ELEMENT ;                                           \
   for (ts = 0 ; ts < NbTimeStep ; ts++) {                              \
     Pos_InitAllSolutions(PSO_P->TimeStep_L, ts) ;                      \
     Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,    \
                 NULL, &Element, u, v, w, &PE->Value[0]);               \
     if(CPQ_P)                                                          \
       Combine_PostQuantity(PSO_P->CombinationType, Order,              \
                            &PE->Value[0], &CumulativeValues[ts]) ;     \
     Format_PostElement(PSO_P, PSO_P->Iso, 0,                           \
                        Current.Time, ts, NbTimeStep,                   \
                        Current.NbrHar, PSO_P->HarmonicToTime,          \
			Normal, PE);                                    \
   }                                                                    \
 }

#define ARRAY(i,j,k,t)						\
  Array[ (t) * Current.NbrHar * ((int)N[0]+1) * ((int)N[1]+1) +	\
         (k) * ((int)N[0]+1) * ((int)N[1]+1) + 			\
         (j) * ((int)N[0]+1) +					\
         (i) ]

#define LETS_STORE_THE_RESULT                                           \
 if(!NCPQ_P){                                                           \
   if(CumulativeValues[0].Type != SCALAR)                               \
     Message::Error("Print OnPlane not designed for non scalars with Depth > 1"); \
   else                                                                 \
     for (ts = 0 ; ts < NbTimeStep ; ts++)                              \
       for(k = 0 ; k < Current.NbrHar ; k++)                            \
         ARRAY(i1,i2,k,ts) = (float)CumulativeValues[ts].Val[MAX_DIM*k] ; \
 }                                                                      \
 else{                                                                  \
   InWhichElement(&Current.GeoData->Grid, NULL, &Element, PSO_P->Dimension, \
                  Current.x, Current.y, Current.z, &u, &v, &w) ;        \
   Current.Region = Element.Region ;                                    \
   for (ts = 0 ; ts < NbTimeStep ; ts++) {                              \
     Pos_InitAllSolutions(PSO_P->TimeStep_L, ts) ;                      \
     Cal_PostQuantity(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,    \
                      NULL, &Element, u, v, w, &PE->Value[0]);          \
     if(PE->Value[0].Type != SCALAR)                                    \
       Message::Error("Print OnPlane not designed for non scalars with Depth > 1"); \
     if(CPQ_P)                                                          \
       Combine_PostQuantity(PSO_P->CombinationType, Order,              \
                            &PE->Value[0], &CumulativeValues[ts]) ;     \
     for(k = 0 ; k < Current.NbrHar ; k++)                              \
       ARRAY(i1,i2,k,ts) = (float)PE->Value[0].Val[MAX_DIM*k] ;         \
   }                                                                    \
 }

void  Pos_PrintOnGrid(struct PostQuantity     *NCPQ_P,
		      struct PostQuantity     *CPQ_P,
		      int                      Order,
		      struct DefineQuantity   *DefineQuantity_P0,
		      struct QuantityStorage  *QuantityStorage_P0,
		      struct PostSubOperation *PSO_P)
{
  struct Element       Element ;
  struct Value       * CumulativeValues, Value ;
  struct PostElement * PE , * PE2 ;

  int     i1, i2, i3, k, NbTimeStep, ts ;
  float  *Array = NULL ;
  double  u, v, w, Length, Normal[4] = {0., 0., 0., 0.} ;
  double  X[4], Y[4], Z[4], S[4], N[4], tmp[3];

  Get_InitDofOfElement(&Element) ;

  NbTimeStep = Pos_InitTimeSteps(PSO_P);

  if(CPQ_P){
    Cal_PostCumulativeQuantity(NULL, PSO_P->PostQuantitySupport[Order],
			       PSO_P->TimeStep_L,
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, &CumulativeValues);
  }

  Format_PostHeader(PSO_P, NbTimeStep, Order,
                    PSO_P->Label ? PSO_P->Label :
		    (NCPQ_P ? NCPQ_P->Name : NULL),
                    PSO_P->Label ? NULL :
                    (CPQ_P ? CPQ_P->Name : NULL));

  PE = Create_PostElement(0, POINT, 1, 0) ;

  switch(PSO_P->SubType) {

  case PRINT_ONGRID_0D :
    Current.x = PSO_P->Case.OnGrid.x[0] ;
    Current.y = PSO_P->Case.OnGrid.y[0] ;
    Current.z = PSO_P->Case.OnGrid.z[0] ;
    Normal[0] = Normal[1] = Normal[2] = 0.0 ;
    LETS_PRINT_THE_RESULT ;

    if (PSO_P->StoreInRegister >= 0)
      Cal_StoreInRegister(&PE->Value[0], PSO_P->StoreInRegister) ;
    if (PSO_P->StoreInVariable)
      Cal_StoreInVariable(&PE->Value[0], PSO_P->StoreInVariable) ;
    break;

  case PRINT_ONGRID_1D :
    X[0] = PSO_P->Case.OnGrid.x[0] ; X[1] = PSO_P->Case.OnGrid.x[1] ;
    Y[0] = PSO_P->Case.OnGrid.y[0] ; Y[1] = PSO_P->Case.OnGrid.y[1] ;
    Z[0] = PSO_P->Case.OnGrid.z[0] ; Z[1] = PSO_P->Case.OnGrid.z[1] ;
    N[0] = PSO_P->Case.OnGrid.n[0] ;
    Normal[1] = Normal[2] = 0.0 ;
    Length = sqrt(SQU(X[1]-X[0]) + SQU(Y[1]-Y[0]) + SQU(Z[1]-Z[0])) ;
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
    Length = sqrt(SQU(Normal[0])+SQU(Normal[1])+SQU(Normal[2]));
    if(!Length){
      Message::Warning("Bad plane (null normal)");
      return ;
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
      if(PostStream && PSO_P->Depth < 2 && !Flag_BIN) fprintf(PostStream, "\n");
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
	  PE2->x[0] = X[0] + (X[1] - X[0]) * S[0] + (X[2] - X[0]) * S[1] ;
	  PE2->y[0] = Y[0] + (Y[1] - Y[0]) * S[0] + (Y[2] - Y[0]) * S[1] ;
	  PE2->z[0] = Z[0] + (Z[1] - Z[0]) * S[0] + (Z[2] - Z[0]) * S[1] ;
	  PE2->x[1] = X[0] + (X[1] - X[0]) * S[2] + (X[2] - X[0]) * S[1] ;
	  PE2->y[1] = Y[0] + (Y[1] - Y[0]) * S[2] + (Y[2] - Y[0]) * S[1] ;
	  PE2->z[1] = Z[0] + (Z[1] - Z[0]) * S[2] + (Z[2] - Z[0]) * S[1] ;
	  PE2->x[2] = X[0] + (X[1] - X[0]) * S[0] + (X[2] - X[0]) * S[3] ;
	  PE2->y[2] = Y[0] + (Y[1] - Y[0]) * S[0] + (Y[2] - Y[0]) * S[3] ;
	  PE2->z[2] = Z[0] + (Z[1] - Z[0]) * S[0] + (Z[2] - Z[0]) * S[3] ;
	  for (ts = 0 ; ts < NbTimeStep ; ts++){
	    for(k = 0 ; k < Current.NbrHar ; k++){
	      PE2->Value[0].Val[MAX_DIM*k] = ARRAY(i1,i2,k,ts) ;
	      PE2->Value[1].Val[MAX_DIM*k] = ARRAY(i1+1,i2,k,ts) ;
	      PE2->Value[2].Val[MAX_DIM*k] = ARRAY(i1,i2+1,k,ts) ;
	    }
	    Format_PostElement(PSO_P, PSO_P->Iso, 0,
			       Current.Time, ts, NbTimeStep,
			       Current.NbrHar, PSO_P->HarmonicToTime,
			       Normal, PE2);
	  }
	  PE2->x[0] = X[0] + (X[1] - X[0]) * S[2] + (X[2] - X[0]) * S[3] ;
	  PE2->y[0] = Y[0] + (Y[1] - Y[0]) * S[2] + (Y[2] - Y[0]) * S[3] ;
	  PE2->z[0] = Z[0] + (Z[1] - Z[0]) * S[2] + (Z[2] - Z[0]) * S[3] ;
	  tmp[0] = PE2->x[1]; PE2->x[1] = PE2->x[2]; PE2->x[2] = tmp[0];
	  tmp[1] = PE2->y[1]; PE2->y[1] = PE2->y[2]; PE2->y[2] = tmp[1];
	  tmp[2] = PE2->z[1]; PE2->z[1] = PE2->z[2]; PE2->z[2] = tmp[2];
	  for (ts = 0 ; ts < NbTimeStep ; ts++){
	    for(k = 0 ; k < Current.NbrHar ; k++){
	      PE2->Value[0].Val[MAX_DIM*k] = ARRAY(i1+1,i2+1,k,ts) ;
	      PE2->Value[1].Val[MAX_DIM*k] = ARRAY(i1,i2+1,k,ts) ;
	      PE2->Value[2].Val[MAX_DIM*k] = ARRAY(i1+1,i2,k,ts) ;
	    }
	    Format_PostElement(PSO_P, PSO_P->Iso, 0,
			       Current.Time, ts, NbTimeStep,
			       Current.NbrHar, PSO_P->HarmonicToTime,
			       Normal, PE2);
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
	if(PostStream && !Flag_BIN) fprintf(PostStream, "\n");
      }
      if(PostStream && !Flag_BIN) fprintf(PostStream, "\n\n");
      /*  two blanks lines for -index in gnuplot  */
    }
    break;

  case PRINT_ONGRID_PARAM :
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
	if(PostStream && List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[2])>1 && !Flag_BIN)
	  fprintf(PostStream, "\n");
      }
      if(PostStream && List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[1])>1 && !Flag_BIN)
	fprintf(PostStream, "\n\n");
      /*  two blanks lines for -index in gnuplot  */
    }
    break;
  }

  Destroy_PostElement(PE) ;

  Format_PostFooter(PSO_P, 0);

  if(CPQ_P) Free(CumulativeValues);
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
			struct PostSubOperation  *PSO_P)
{
  struct Element   Element ;
  struct Value     Value, ValueSummed ;
  struct PostQuantity  *PQ_P ;
  struct Group * Group_P ;

  List_T  *Region_L, *Support_L ;
  int      i, iTime, NbrTimeStep ;
  int      Nbr_Region=0, Num_Region, Group_FunctionType ;
  int      Type_Evaluation=0;
  double   u, v, w;

  NbrTimeStep = Pos_InitTimeSteps(PSO_P);

  if (CPQ_P && NCPQ_P){
    Message::Error("Only one PostProcessing Quantity allowed in PostOperation") ;
    return;
  }

  if (CPQ_P) {
    PQ_P = CPQ_P ;
    Support_L = /* for e.g. PQ[ Support ] ... */
      ((struct Group *)
       List_Pointer(Problem_S.Group,
		    PSO_P->PostQuantitySupport[Order]))->InitialList ;
  }
  else {
    PQ_P = NCPQ_P ;  Support_L = NULL ;
  }

  Format_PostHeader(PSO_P, NbrTimeStep, Order,
                    PSO_P->Label ? PSO_P->Label :
		    (NCPQ_P ? NCPQ_P->Name : NULL),
                    PSO_P->Label ? NULL :
                    (CPQ_P ? CPQ_P->Name : NULL));

  Group_P = (PSO_P->Case.OnRegion.RegionIndex < 0)?  NULL :
    (struct Group *)
     List_Pointer(Problem_S.Group,
		  PSO_P->Case.OnRegion.RegionIndex);
  Region_L =  Group_P?  Group_P->InitialList : NULL ;
  Group_FunctionType = Group_P? Group_P->FunctionType : REGION;

  if (!Support_L &&
      List_Nbr(NCPQ_P->PostQuantityTerm) &&
      (
       ((struct PostQuantityTerm *)List_Pointer(NCPQ_P->PostQuantityTerm, 0))
       ->Type == LOCALQUANTITY &&
       ((struct PostQuantityTerm *)List_Pointer(NCPQ_P->PostQuantityTerm, 0))
       ->EvaluationType == LOCAL)
      ) {
    if (Group_FunctionType == REGION){
      Message::Error("Print OnRegion not valid for PostProcessing Quantity '%s'",
                     NCPQ_P->Name);
      return;
    }
    else
      Type_Evaluation = LOCAL;
  }
  else
    Type_Evaluation = GLOBAL;

  if (Region_L) {
    if (Group_P->FunctionType == REGION) {
      List_Sort(Region_L, fcmp_int) ;
      Nbr_Region = List_Nbr(Region_L) ;

      if (!PSO_P->NoTitle &&
          PSO_P->Format != FORMAT_SPACE_TABLE &&
          PSO_P->Format != FORMAT_VALUE_ONLY &&
          PSO_P->Format != FORMAT_GETDP) {
        std::ostringstream sstream;
        if (PSO_P->Format == FORMAT_GMSH)
          sstream << "// ";
        else
          sstream << "# ";
        sstream << PQ_P->Name << " on";
	for(i = 0 ; i < Nbr_Region ; i++) {
	  List_Read(Region_L, i, &Num_Region) ;
	  sstream << " " << Num_Region;
	}
        if(PostStream == stdout || PostStream == stderr)
          Message::Direct(sstream.str().c_str());
        else if(PostStream)
          fprintf(PostStream, "%s\n", sstream.str().c_str()) ;
      }
    }
    else if (Group_P->FunctionType == NODESOF) {
      if (!Group_P->ExtendedList)  Generate_ExtendedGroup(Group_P) ;
      Region_L = Group_P->ExtendedList ; /* Attention: new Region_L */
      Nbr_Region = List_Nbr(Region_L) ;
    }
    else {
      Message::Error("Function type (%d) not allowed for PrintOnRegion",
                     Group_P->FunctionType) ;
      return;
    }
  }
  else
    Nbr_Region = 1 ;

  for (iTime = 0 ; iTime < NbrTimeStep ; iTime++) {

    Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime) ;

    if (PSO_P->Format == FORMAT_REGION_VALUE ||
        PSO_P->Format == FORMAT_FREQUENCY_REGION_VALUE) {
      Cal_ZeroValue(&ValueSummed) ;
    }

    if(Nbr_Region > 1)
      Message::ResetProgressMeter();

    for(i = 0 ; i < Nbr_Region ; i++) {

      if (Region_L)
	List_Read(Region_L, i, &Num_Region) ;
      else
	Num_Region = NO_REGION ;
      Current.SubRegion = Num_Region ; /* Region being a GlobalQuantity Entity no */

      Current.NumEntity = Num_Region ; /* for OnRegion NodesOf */

      Element.GeoElement = NULL ;
      Element.Num = NO_ELEMENT ;
      Element.Type = -1 ;
      Current.Region = Element.Region = Num_Region ;
      Current.x = Current.y = Current.z = 0. ;

      if (Type_Evaluation == GLOBAL) {
	Cal_PostQuantity(PQ_P, DefineQuantity_P0, QuantityStorage_P0,
			 Support_L, &Element, 0., 0., 0., &Value) ;
      }
      else {
	if (Group_FunctionType == NODESOF)
	  Geo_GetNodesCoordinates(1, &Num_Region,
				  &Current.x, &Current.y, &Current.z) ;
	InWhichElement(&Current.GeoData->Grid, NULL, &Element,
		       PSO_P->Dimension,
		       Current.x, Current.y, Current.z, &u, &v, &w) ;

	Cal_PostQuantity(PQ_P, DefineQuantity_P0, QuantityStorage_P0,
			 Support_L, &Element, u, v, w, &Value) ;
      }

      if (PSO_P->Format != FORMAT_REGION_VALUE &&
          PSO_P->Format != FORMAT_FREQUENCY_REGION_VALUE) {
        if (PSO_P->StoreInRegister >= 0)
          Cal_StoreInRegister(&Value, PSO_P->StoreInRegister) ;
        if (PSO_P->StoreInVariable)
          Cal_StoreInVariable(&Value, PSO_P->StoreInVariable) ;
        if (PSO_P->SendToServer && strcmp(PSO_P->SendToServer, "No")){
          std::vector<double> v;
          Export_Value(&Value, v, PSO_P->SendToServerList);
          Message::AddOnelabNumberChoice(PSO_P->SendToServer, v, PSO_P->Color,
                                         PSO_P->Units);
        }
      }

      Format_PostValue(PQ_P, PSO_P, PSO_P->Format, PSO_P->Comma,
		       Group_FunctionType,
		       iTime, Current.Time, NbrTimeStep,
                       i, Current.NumEntity, Nbr_Region,
		       Current.NbrHar, PSO_P->HarmonicToTime,
                       PSO_P->FourierTransform,
		       PSO_P->NoNewLine,
		       &Value) ;

      if (PSO_P->Format == FORMAT_REGION_VALUE ||
          PSO_P->Format == FORMAT_FREQUENCY_REGION_VALUE) {
	ValueSummed.Type = Value.Type ;
	Cal_AddValue(&ValueSummed, &Value, &ValueSummed);
      }

      if(Nbr_Region > 1)
        Message::ProgressMeter(i + 1, Nbr_Region, "Post-processing (OnRegion)");
    }

    if (PostStream && (PSO_P->Format == FORMAT_REGION_VALUE ||
                       PSO_P->Format == FORMAT_FREQUENCY_REGION_VALUE)) {
      fprintf(PostStream, "%s", Print_Value_ToString(&ValueSummed).c_str());
      if (PSO_P->StoreInRegister >= 0)
        Cal_StoreInRegister(&ValueSummed, PSO_P->StoreInRegister) ;
      if (PSO_P->StoreInVariable)
        Cal_StoreInVariable(&ValueSummed, PSO_P->StoreInVariable) ;
      if (PSO_P->SendToServer && strcmp(PSO_P->SendToServer, "No")){
        std::vector<double> v;
        Export_Value(&ValueSummed, v, PSO_P->SendToServerList);
        Message::AddOnelabNumberChoice(PSO_P->SendToServer, v, PSO_P->Color,
                                       PSO_P->Units);
      }
    }
  }

  Format_PostFooter(PSO_P, 0);
}

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t W i t h A r g u m e n t                               */
/* ------------------------------------------------------------------------ */

void  Pos_PrintWithArgument(struct PostQuantity      *NCPQ_P,
			    struct PostQuantity      *CPQ_P,
			    int                       Order,
			    struct DefineQuantity    *DefineQuantity_P0,
			    struct QuantityStorage   *QuantityStorage_P0,
			    struct PostSubOperation  *PSO_P)
{
  struct Element           Element ;
  struct Value             Value ;

  struct Expression        * Expression_P ;
  List_T  *Region_L ;
  int      i, N, Num_Region ;
  double   X[2], S, x ;

  if(CPQ_P){
    Message::Error("Cumulative PostProcessing Quantity in PrintWithArgument not done") ;
    return;
  }

  X[0] = PSO_P->Case.WithArgument.x[0] ;
  X[1] = PSO_P->Case.WithArgument.x[1] ;
  N = PSO_P->Case.WithArgument.n ;

  Expression_P = (struct Expression *)
    List_Pointer(Problem_S.Expression,
		 PSO_P->Case.WithArgument.ArgumentIndex) ;

  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group,
			   PSO_P->Case.WithArgument.RegionIndex))
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

    Format_PostValue(NCPQ_P, PSO_P, PSO_P->Format, PSO_P->Comma,
                     REGION,
                     0, x, 1,  0, 0, 1,
                     Current.NbrHar, PSO_P->HarmonicToTime,
                     PSO_P->FourierTransform,
                     PSO_P->NoNewLine,
                     &Value) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t E x p r e s s i o n                                   */
/* ------------------------------------------------------------------------ */

void  Pos_PrintExpression(struct PostSubOperation *PSO_P)
{
  int NbrTimeStep, iTime;
  struct Value Value;
  char *str = PSO_P->Case.Expression.String;
  char *str2 = PSO_P->Case.Expression.String2;
  int expr = PSO_P->Case.Expression.ExpressionIndex;

  if((!str || !strlen(str)) && (!str2 || !strlen(str2)) && expr < 0)
    return; // nothing to print; useful to request merging an existing file

  if(!PostStream) return;

  NbrTimeStep = Pos_InitTimeSteps(PSO_P);

  for(iTime = 0; iTime < NbrTimeStep; iTime++){
    Pos_InitAllSolutions(PSO_P->TimeStep_L, iTime) ;
    if(expr >= 0){
      Get_ValueOfExpressionByIndex(expr, NULL, 0., 0., 0., &Value) ;
      if(str) fprintf(PostStream, "%s", str);
      fprintf(PostStream, "%s", Print_Value_ToString(&Value).c_str());
    }
    else if(str2){
      if(str) fprintf(PostStream, "%s", str);
      fprintf(PostStream, "%s", str2);
    }
    else if(str){
      fprintf(PostStream, "%s", str);
    }
    if(PSO_P->NoNewLine)
      fprintf(PostStream, " ") ;
    else
      fprintf(PostStream, "\n") ;
  }
}

/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t G r o u p                                             */
/* ------------------------------------------------------------------------ */

void  Pos_PrintGroup(struct PostSubOperation *PSO_P)
{
  struct Group        *Group_P;
  struct Geo_Element  *GeoElement;
  struct PostElement  *SL, *ST, *SQ;
  List_T              *Region_L;
  int                  i, NbrGeo, iGeo, *NumNodes;
  double               x [NBR_MAX_NODES_IN_ELEMENT] ;
  double               y [NBR_MAX_NODES_IN_ELEMENT] ;
  double               z [NBR_MAX_NODES_IN_ELEMENT] ;

  int                  numDofData, Code_BasisFunction, CodeExist = 0, k;
  struct Dof  * Dof_P = NULL;
  double               sizeEdge, Val_Dof, Val_Dof_i ;

  NbrGeo = Geo_GetNbrGeoElements() ;

  Format_PostHeader(PSO_P, 1, 0, PSO_P->Label, NULL);

  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group,
			   PSO_P->Case.Group.GroupIndex))->InitialList ;
  Group_P = (struct Group *)
    List_Pointer(Problem_S.Group,
		 PSO_P->Case.Group.ExtendedGroupIndex);

  SL = Create_PostElement(0, LINE, 2, 1) ;
  ST = Create_PostElement(0, TRIANGLE, 3, 1) ;
  SQ = Create_PostElement(0, QUADRANGLE, 4, 1) ;

  if(!Group_P->ExtendedList) Generate_ExtendedGroup(Group_P) ;

  Message::ResetProgressMeter();
  for(iGeo = 0 ; iGeo < NbrGeo ; iGeo++) {

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
	    Format_PostElement(PSO_P, PSO_P->Iso, 0,
			       0, 0, 1, 1, 1,
			       NULL, SL);
	  }
	}
	break ;

      case EDGESOF :
	if(!GeoElement->NbrEdges) Geo_CreateEdgesOfElement(GeoElement) ;
	for(i=0 ; i<GeoElement->NbrEdges ; i++){
          NumNodes = Geo_GetNodesOfEdgeInElement(GeoElement, i) ;
          SL->Index = iGeo;
          SL->x[0] = x[abs(NumNodes[0])-1]; SL->x[1] = x[abs(NumNodes[1])-1];
          SL->y[0] = y[abs(NumNodes[0])-1]; SL->y[1] = y[abs(NumNodes[1])-1];
          SL->z[0] = z[abs(NumNodes[0])-1]; SL->z[1] = z[abs(NumNodes[1])-1];
          SL->Value[0].Type = SL->Value[1].Type = SCALAR ;

          //          SL->Value[0].Val[0] = SL->Value[1].Val[0] = fabs(GeoElement->NumEdges[i]);

          // Dof : type, num, 0
          if (List_Nbr(PSO_P->Value_L)<2)
            Message::Error("Number of Values needed: 2");

          numDofData         = int(*(double*)List_Pointer(PSO_P->Value_L, 0));
          Code_BasisFunction = int(*(double*)List_Pointer(PSO_P->Value_L, 1));

          CodeExist =
            ((Dof_P =
              Dof_GetDofStruct(Current.DofData_P0+ numDofData,
                               Code_BasisFunction, abs(GeoElement->NumEdges[i]), 0))
             != NULL) ;

          if (CodeExist) {
            sizeEdge = sqrt( SQU(SL->x[1]-SL->x[0]) + SQU(SL->y[1]-SL->y[0]) + SQU(SL->z[1]-SL->z[0]) );
            if(Current.NbrHar==1){
              Dof_GetRealDofValue(Current.DofData_P0+ numDofData, Dof_P, &Val_Dof) ;

              Val_Dof = Val_Dof / sizeEdge ;

              SL->Value[0].Val[0] = SL->Value[1].Val[0] = Val_Dof;
            }
            else{
              for (k = 0 ; k < Current.NbrHar ; k+=2) {
		Dof_GetComplexDofValue
		  (Current.DofData_P0+ numDofData,
                   Dof_P + k/2*gCOMPLEX_INCREMENT,
		   &Val_Dof, &Val_Dof_i) ;

              Val_Dof   = Val_Dof / sizeEdge ;
              Val_Dof_i = Val_Dof_i / sizeEdge ;

              SL->Value[0].Val[MAX_DIM*k    ] = SL->Value[1].Val[MAX_DIM*k    ] = Val_Dof;
              SL->Value[0].Val[MAX_DIM*(k+1)] = SL->Value[1].Val[MAX_DIM*(k+1)] = Val_Dof_i;
              }
            }

            Format_PostElement(PSO_P, PSO_P->Iso, 0,
                               0, 0, 1,
                               Current.NbrHar, PSO_P->HarmonicToTime,
                               NULL, SL);
          }

	}
	break ;

      case FACETSOFTREEIN :
	if(!GeoElement->NbrFacets) Geo_CreateFacetsOfElement(GeoElement) ;
	for(i=0 ; i<GeoElement->NbrFacets ; i++){
	  if(List_Search(Group_P->ExtendedList, &GeoElement->NumFacets[i], fcmp_absint)){
	    NumNodes = Geo_GetNodesOfFacetInElement(GeoElement, i) ;
            if(!NumNodes[3]){ // we have triangle
              ST->Index = iGeo;
              ST->x[0] = x[abs(NumNodes[0])-1]; ST->x[1] = x[abs(NumNodes[1])-1];
              ST->y[0] = y[abs(NumNodes[0])-1]; ST->y[1] = y[abs(NumNodes[1])-1];
              ST->z[0] = z[abs(NumNodes[0])-1]; ST->z[1] = z[abs(NumNodes[1])-1];
              ST->x[2] = x[abs(NumNodes[2])-1];
              ST->y[2] = y[abs(NumNodes[2])-1];
              ST->z[2] = z[abs(NumNodes[2])-1];
              ST->Value[0].Type = ST->Value[1].Type = ST->Value[2].Type = SCALAR ;
              ST->Value[0].Val[0] = ST->Value[1].Val[0] = ST->Value[2].Val[0] =
                GeoElement->NumFacets[i];
              Format_PostElement(PSO_P, PSO_P->Iso, 0,
                                 0, 0, 1, 1, 1,
                                 NULL, ST);
            }
            else{ // we have a quad
              SQ->Index = iGeo;
              SQ->x[0] = x[abs(NumNodes[0])-1]; SQ->x[1] = x[abs(NumNodes[1])-1];
              SQ->y[0] = y[abs(NumNodes[0])-1]; SQ->y[1] = y[abs(NumNodes[1])-1];
              SQ->z[0] = z[abs(NumNodes[0])-1]; SQ->z[1] = z[abs(NumNodes[1])-1];
              SQ->x[2] = x[abs(NumNodes[2])-1]; SQ->x[3] = x[abs(NumNodes[3])-1];
              SQ->y[2] = y[abs(NumNodes[2])-1]; SQ->y[3] = y[abs(NumNodes[3])-1];
              SQ->z[2] = z[abs(NumNodes[2])-1]; SQ->z[3] = z[abs(NumNodes[3])-1];
              SQ->Value[0].Type = SQ->Value[1].Type = SQ->Value[2].Type =
                SQ->Value[3].Type = SCALAR ;
              SQ->Value[0].Val[0] = SQ->Value[1].Val[0] = SQ->Value[2].Val[0] =
                SQ->Value[3].Val[0] = GeoElement->NumFacets[i];
              Format_PostElement(PSO_P, PSO_P->Iso, 0,
                                 0, 0, 1, 1, 1,
                                 NULL, SQ);
            }
          }
	}
	break ;

      default :
	Message::Error("Print function not implemented for this kind of Group");
	break ;

      }

    }
    Message::ProgressMeter(iGeo + 1, NbrGeo, "Post-processing (Compute)") ;
    if(Message::GetErrorCount()) break;
  }

  Destroy_PostElement(SL) ;

  Format_PostFooter(PSO_P, 0);
}
