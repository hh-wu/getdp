/* $Id: Pos_Formulation.c,v 1.10 2000-09-26 11:33:06 geuzaine Exp $ */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "Data_Passive.h"

#include "Treatment_Formulation.h"
#include "Get_DofOfElement.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"
#include "Pos_Formulation.h"
#include "Adapt.h"

#include "CurrentData.h"

#include "Data_Numeric.h"
#include "ualloc.h"
#include "outil.h"

extern int  InteractiveInterrupt ;

/* ------------------------------------------------------------------------ */
/*  P o s _ F o r m u l a t i o n                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Formulation(struct Formulation       *Formulation_P,
		      struct PostProcessing    *PostProcessing_P,
		      struct PostSubOperation  *PostSubOperation_P) {

  struct PostQuantity   *NCPQ_P, *CPQ_P ;
  int                    Order ;

  if (PostSubOperation_P->FileOut){
    if (!PostSubOperation_P->CatFile) {
      if((PostStream = fopen(PostSubOperation_P->FileOut, "w")))
	Msg(DIRECT, "          > '%s'", PostSubOperation_P->FileOut) ;
      else{
	Msg(ERROR, "Unable to Open File '%s'", PostSubOperation_P->FileOut) ;
      }
    }
    else {
      if((PostStream = fopen(PostSubOperation_P->FileOut, "a")))
	Msg(DIRECT, "         >> '%s'", PostSubOperation_P->FileOut) ;
      else{
	Msg(ERROR, "Unable to Open File '%s'", PostSubOperation_P->FileOut) ;
      }
    }
  }
  else{
    PostStream = stdout ;
  }

  if (PostSubOperation_P->CatFile == 2)  fprintf(PostStream, "\n") ;

  Print_PostFormat(PostSubOperation_P->Format) ;

  if(((struct PostQuantity *)
      List_Pointer(PostProcessing_P->PostQuantity, 
		   PostSubOperation_P->PostQuantityIndex[0]))->Type == NONCUMULATIVE){
    NCPQ_P = 
      (struct PostQuantity *) List_Pointer(PostProcessing_P->PostQuantity, 
					   PostSubOperation_P->PostQuantityIndex[0]) ;
    CPQ_P = 
      (PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
      (struct PostQuantity *)List_Pointer(PostProcessing_P->PostQuantity, 
					  PostSubOperation_P->PostQuantityIndex[1]) :
      NULL ;
    Order = 1 ;
  }
  else{
    CPQ_P = 
      (struct PostQuantity *) List_Pointer(PostProcessing_P->PostQuantity, 
					   PostSubOperation_P->PostQuantityIndex[0]) ;
    NCPQ_P = 
      (PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
      (struct PostQuantity *)List_Pointer(PostProcessing_P->PostQuantity, 
					  PostSubOperation_P->PostQuantityIndex[1]) :
      NULL ;
    Order = 0 ;
  }
  
  switch (Formulation_P->Type) {

  case FEMEQUATION :
    Pos_FemFormulation(Formulation_P, NCPQ_P, CPQ_P, Order, PostSubOperation_P) ;
    break ;

  case GLOBALEQUATION :
    break ;

  default :
    Msg(ERROR, "Unknown Type for Formulation (%s)", Formulation_P->Name) ;
    break;

  }

  if (PostSubOperation_P->FileOut)  fclose(PostStream) ;

}

/* ------------------------------------------------------------------------ */
/*  P o s _ F e m F o r m u l a t i o n                                     */
/* ------------------------------------------------------------------------ */

/*
  Plot OnRegion
  -------------
  expl: plot on elements, belonging to the current mesh, where 
        the solution was computed during the pocessing stage
  args: list of groups of region type
  
  Plot OnCut 
  ----------
  expl: plot an a 'real' cut of the mesh, i.e. computation on the 
        intersections of the mesh with a cutting entity (plane, line)
  args: 2 or 3 points, specifying the cutting line or the cutting plane
  
  Plot OnGrid
  -----------
  expl: reinterpolate the solution on a grid
  args: - a list of groups of region type (belonging to a mesh, where the
	  solution will be reinterpolated)
        - 3 expressions (using $S and $T) and 2 intervals for the parametric 
	  grid definition

  Plot OnPoint, OnLine, OnPlane, OnBox
  --------------------------------------------
  expl: reinterpolate the solution on a grid (particular cases)
  args: 1, 2, 3 or 4 points (0d, 1d, 2d or 3d grid) and the associated
        number of divisions

  Depth 
  ----- 
    <0 -> derefinement 
     0 -> punctual values (only useful for "vector type" quantities)
     1 -> default (line, triangle, tetrahedron)
    >1 -> recursive subdivision (useful for interpolation > linear)

*/

void  Pos_FemFormulation(struct Formulation       *Formulation_P,
			 struct PostQuantity      *NCPQ_P, 
			 struct PostQuantity      *CPQ_P, 
			 int                       Order,
			 struct PostSubOperation  *PostSubOperation_P) {

  struct Element           Element ;
  struct DefineQuantity   *DefineQuantity_P0 ;
  struct QuantityStorage  *QuantityStorage_P0, QuantityStorage ;

  List_T   *QuantityStorage_L ;
  int       i ;
  
  Get_InitDofOfElement(&Element) ;

  DefineQuantity_P0 = (struct DefineQuantity*)
    List_Pointer(Formulation_P->DefineQuantity, 0) ;
  QuantityStorage_L = List_Create(List_Nbr(Formulation_P->DefineQuantity),  1, 
				  sizeof (struct QuantityStorage) ) ;

  for (i = 0 ; i < List_Nbr(Formulation_P->DefineQuantity) ; i++) {

    QuantityStorage.DefineQuantity = DefineQuantity_P0 + i ;

    if(QuantityStorage.DefineQuantity->Type == INTEGRALQUANTITY &&
       QuantityStorage.DefineQuantity->IntegralQuantity.DefineQuantityIndexDof < 0){
      QuantityStorage.TypeQuantity = VECTOR ; /* on ne sait pas... */
    }
    else{
      QuantityStorage.TypeQuantity = 
	((struct FunctionSpace *)
	 List_Pointer(Problem_S.FunctionSpace,
		      (DefineQuantity_P0+i)->FunctionSpaceIndex))->Type ;
    }
    
    QuantityStorage.NumLastElementForFunctionSpace = 0 ;
    List_Add(QuantityStorage_L, &QuantityStorage) ;
  }

  QuantityStorage_P0 = (struct QuantityStorage*)List_Pointer(QuantityStorage_L, 0) ;

  switch (PostSubOperation_P->Type) {
    
  case POP_PLOT :
    switch (PostSubOperation_P->SubType) {
    case PLOT_ONREGION :
    case PLOT_ONGRID   :
      Pos_PlotOnRegion(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
		       QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    case PLOT_ONCUT_1D :
    case PLOT_ONCUT_2D :
      Pos_PlotOnCut(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
		    QuantityStorage_P0, PostSubOperation_P) ;
      break ;
    case PLOT_ONGRID_0D    :
    case PLOT_ONGRID_1D    :
    case PLOT_ONGRID_2D    :
    case PLOT_ONGRID_3D    :
    case PLOT_ONGRID_PARAM :
      Pos_PlotOnGrid(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
		     QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    default :
      Msg(ERROR, "Unknown Operation Type for Plot") ;
      break;
    }
    break ;

  case POP_PRINT :    
    switch (PostSubOperation_P->SubType) {
    case PLOT_ONREGION :
      Pos_PrintOnRegion(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
			QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    case PLOT_WITHARGUMENT :
      Pos_PrintWithArgument(NCPQ_P, CPQ_P, Order, DefineQuantity_P0, 
			    QuantityStorage_P0, PostSubOperation_P) ; 
      break ;
    default :
      Msg(ERROR, "Unknown Operation Type for Print"); 
      break;
    }    
    break ;    

  default :
    Msg(ERROR, "Unknown PostSubOperation Type") ;
    break;
  }

  if(InteractiveInterrupt) InteractiveInterrupt=0 ;
  
  List_Delete(QuantityStorage_L);
}


/* ------------------------------------------------------------------------ */
/*  C a l _ P o s t C u m u l a t i v e Q u a n t i t y                     */
/* ------------------------------------------------------------------------ */

void Cal_PostCumulativeQuantity(List_T                 *Region_L,
				List_T                 *TimeStep_L, 
				struct PostQuantity    *PostQuantity_P, 
				struct DefineQuantity  *DefineQuantity_P0,
				struct QuantityStorage *QuantityStorage_P0,
				struct Value           *Value){  
  struct Element Element ;
  struct Value tmpValue ;
  int i, j, NbElement, NbTimeStep ;

  NbTimeStep = List_Nbr(TimeStep_L) ; 
  NbElement = Geo_GetNbrGeoElements() ;

  Get_InitDofOfElement(&Element) ;

  for(i = 0 ; i < NbTimeStep ; i++) Cal_ZeroValue(&Value[i]);
  
  for(i = 0 ; i < NbElement ; i++) {    
    if(InteractiveInterrupt) break;
    Progress(i, NbElement, "Accumulate: ") ;

    Element.GeoElement = Geo_GetGeoElement(i) ;
    Element.Num        = Element.GeoElement->Num ;
    Element.Type       = Element.GeoElement->Type ;
    Current.Region     = Element.Region = Element.GeoElement->Region ;

    if(!Region_L || List_Search(Region_L, &Current.Region, fcmp_int)){
      Get_NodesCoordinatesOfElement(&Element) ;
      for (j = 0 ; j < NbTimeStep ; j++) {	
	Pos_InitAllSolutions(TimeStep_L, j) ;
	Current.x = Element.x[0];
	Current.y = Element.y[0];
	Current.z = Element.z[0]; 
	Pos_Element(PostQuantity_P, DefineQuantity_P0, QuantityStorage_P0, &Element, 
		    0, 0, 0, &tmpValue);
	Value[j].Type = tmpValue.Type;
	Cal_AddValue(&Value[j],&tmpValue,&Value[j]);
      }
    }

  }    
}


void Combine_PostQuantity(int Type, int Order, 
			  struct Value *V1, struct Value *V2){
  switch(Type){
  case MULTIPLICATION : Cal_ProductValue(V1, V2, V1) ; break ;
  case ADDITION :       Cal_AddValue(V1, V2, V1) ; break ;
  case DIVISION :       Cal_DivideValue(Order?V1:V2, Order?V2:V1, V1) ; break;
  case SOUSTRACTION :   Cal_SubstractValue(Order?V1:V2, Order?V2:V1, V1) ; break;	
  }
}


/* ------------------------------------------------------------------------ */
/*  P o s _ P l o t O n R e g i o n                                         */
/* ------------------------------------------------------------------------ */

/* 2 PostElements never have the same barycenter unless they are identical */

#define TOL 1.e-08  /* should be relative... */

int fcmp_PostElement(const void *a, const void *b){
  struct PostElement *PE1, *PE2 ;
  double s1, s2 ;
  int i;

  PE1 = *(struct PostElement**)a; PE2 = *(struct PostElement**)b;

  s1 = s2 = 0.0 ;  
  for(i=0;i<PE1->NbrNodes;i++){ s1 += PE1->x[i]; s2 += PE2->x[i]; }
  if(s1-s2 > TOL) return 1; else if(s1-s2 < -TOL) return -1;

  s1 = s2 = 0.0 ;
  for(i=0;i<PE1->NbrNodes;i++){ s1 += PE1->y[i]; s2 += PE2->y[i]; }
  if(s1-s2 > TOL) return 1; else if(s1-s2 < -TOL) return -1;

  s1 = s2 = 0.0 ;
  for(i=0;i<PE1->NbrNodes;i++){ s1 += PE1->z[i]; s2 += PE2->z[i]; }
  if(s1-s2 > TOL) return 1; else if(s1-s2 < -TOL) return -1;

  return 0;
}  

#undef TOL

int fcmp_IntxList(const void * a, const void * b) {
  return  ((struct IntxList *)a)->Int - ((struct IntxList *)b)->Int ;
}

struct PostElement * Create_PostElement(int Index, int Type, int NbrNodes, int Depth){
  struct PostElement * PostElement ;

  PostElement = (struct PostElement *) Malloc(sizeof(struct PostElement)) ;
  PostElement->Index = Index ; 
  PostElement->Type = Type ;
  PostElement->Depth = Depth ;
  PostElement->NbrNodes = NbrNodes ;
  if(NbrNodes > 0){
    PostElement->NumNodes= (int *) Malloc(NbrNodes * sizeof(int)) ;
    PostElement->u= (double *) Malloc(NbrNodes * sizeof(double)) ;
    PostElement->v= (double *) Malloc(NbrNodes * sizeof(double)) ;
    PostElement->w= (double *) Malloc(NbrNodes * sizeof(double)) ;
    PostElement->x= (double *) Malloc(NbrNodes * sizeof(double)) ;
    PostElement->y= (double *) Malloc(NbrNodes * sizeof(double)) ;
    PostElement->z= (double *) Malloc(NbrNodes * sizeof(double)) ;
    PostElement->Value= (struct Value *) Malloc(NbrNodes * sizeof(struct Value)) ;
  }
  return PostElement ;
}

void Destroy_PostElement(struct PostElement * PostElement){
  if(PostElement->NbrNodes > 0){
    Free(PostElement->u) ;
    Free(PostElement->v) ;
    Free(PostElement->w) ;
    Free(PostElement->x) ;
    Free(PostElement->y) ;
    Free(PostElement->z) ;
    Free(PostElement->Value) ;
  }
  Free(PostElement) ;
}

List_T * SkinPostElement_L ;
int      SkinDepth ;

void Cut_SkinPostElement(void *a, void *b){
  struct PostElement  * PE ;
  
  PE = *(struct PostElement**)a ;

  Pos_CutPostElement(PE, Geo_GetGeoElement(PE->Index), SkinPostElement_L, 
		     PE->Index, SkinDepth, 0, 1) ;
}

void  Pos_PlotOnRegion(struct PostQuantity     *NCPQ_P,
		       struct PostQuantity     *CPQ_P,
		       int                      Order,
		       struct DefineQuantity   *DefineQuantity_P0,
		       struct QuantityStorage  *QuantityStorage_P0,
		       struct PostSubOperation *PostSubOperation_P) {
  
  Tree_T  * PostElement_T, * NodexPostElement_T ;
  List_T  * PostElement_L, * PostElement2_L, * Region_L, * Tmp_L ;

  struct Element        Element ;
  struct PostElement  * PE, * PE2 ;
  struct Value        * CumulativeValues ;
  struct IntxList       NxPE, * NxPE_P ;

  double  * Error, Dummy[5], d ;
  int       ii, jj, kk, NbrGeo, iGeo, incGeo, NbrPost, iPost ;
  int       NbrTimeStep, iTime, NbrSmoothing, iNode ;
  int       Store = 0, DecomposeInSimplex = 0, Depth ;


  /* Select the TimeSteps */
  
  if( !(NbrTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbrTimeStep = List_Nbr(Current.DofData->Solutions);
    for(iTime = 0 ; iTime < NbrTimeStep ; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }

  /* Print the header */

  NbrGeo = Geo_GetNbrGeoElements() ;

  Print_PostHeader(PostSubOperation_P->Format, NbrTimeStep,
		   PostSubOperation_P->HarmonicToTime, 
		   PostSubOperation_P->CombinationType, Order,
		   NCPQ_P, CPQ_P);
  
  /* Get the region */
  
  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group, 
			   PostSubOperation_P->Case.OnRegion.RegionIndex))->InitialList ;
  Get_InitDofOfElement(&Element) ;

  /* Compute the Cumulative quantity, if any */

  if(CPQ_P){    
    CumulativeValues = (struct Value *)Malloc(NbrTimeStep*sizeof(struct Value)) ;    
    Cal_PostCumulativeQuantity(Region_L, PostSubOperation_P->TimeStep_L, 
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, CumulativeValues);    
  }

  /* Init a search grid if we plot a NonCumulative quantity with OnGrid */

  if(NCPQ_P && PostSubOperation_P->SubType == PLOT_ONGRID)
    Init_SearchGrid(&Current.GeoData->Grid) ;

  /* How many smoothing steps should we apply to the results? */
  
  if(PostSubOperation_P->Smoothing){
    if(PostSubOperation_P->Depth > 1)
      Msg(ERROR, "Smoothing not Allowed: Depth = %d > 1", PostSubOperation_P->Depth); 
    if(NbrTimeStep > 1)
      Msg(ERROR, "Smoothing not Allowed: Time Steps = %d > 1", NbrTimeStep); 
    NbrSmoothing = PostSubOperation_P->Smoothing ;
  }
  else
    NbrSmoothing = 0;

  /* If we compute a skin, apply smoothing or perform adaption, we'll
     need to store all the PostElements */

  if(NbrSmoothing || PostSubOperation_P->Skin || PostSubOperation_P->Adapt)
    Store = 1 ;

  /* Check if everything is OK for Adaption */

  if(PostSubOperation_P->Adapt){
    if(PostSubOperation_P->Dimension == _ALL)
      Msg(ERROR, "You have to specify a Dimension for the Adaption (2 or 3)");
    if(PostSubOperation_P->Target < 0.)
      Msg(ERROR, "You have to specify a Target for the Adaption (e.g. 0.01)");
    if(NbrTimeStep > 1)
      Msg(ERROR, "Adaption not ready for Time Steps = %d > 1", NbrTimeStep); 
  }

  /* Check if we should decompose all PostElements to simplices */

  if(PostSubOperation_P->Format == FORMAT_GMSH || 
     PostSubOperation_P->Format == FORMAT_GMSH_NL)
    DecomposeInSimplex = 1 ;

  /* Check for de-refinement */
  
  if(PostSubOperation_P->Depth < 0)
    incGeo = - PostSubOperation_P->Depth ;
  else
    incGeo = 1 ;
  
  /* Create the list of PostElements */

  PostElement_L = List_Create(Store ? 100 : 10, Store ? 100 : 10,
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
	Pos_FillPostElement(Element.GeoElement, PostElement_L, iGeo,
			    Depth, PostSubOperation_P->Skin,
			    DecomposeInSimplex) ;
      }
    }

    /* Compute the skin */

    if(PostSubOperation_P->Skin){
      PostElement_T = Tree_Create(sizeof(struct PostElement *), fcmp_PostElement);

      for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){
	if(InteractiveInterrupt) break;
	Progress(iPost, List_Nbr(PostElement_L), "Skin: ") ;
	PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost) ;
	if(Tree_Query(PostElement_T, &PE)){
	  Tree_Suppress(PostElement_T, &PE);
	  Destroy_PostElement(PE) ;
	}
	else
	  Tree_Add(PostElement_T, &PE);
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

  }
  
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
	Pos_FillPostElement(Element.GeoElement, PostElement_L, iGeo,
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
    
      if(!NCPQ_P){ /* Everything is Cumulative */
	for (iTime = 0 ; iTime < NbrTimeStep ; iTime++){
	  for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++)
	    Cal_CopyValue(&CumulativeValues[iTime], &PE->Value[iNode]);
	  Print_PostElement(PostSubOperation_P->Format, Current.Time, iTime, 
			    NbrTimeStep, Current.NbrHar,
			    PostSubOperation_P->HarmonicToTime, NULL, PE);
	}
      }
      else{ /* There is some non-cumulative */

	if(PostSubOperation_P->SubType == PLOT_ONGRID){ /* We re-interpolate */
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
	      Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, &Element, 
			  PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);
	      if(CPQ_P)
		Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				     &PE->Value[iNode], &CumulativeValues[iNode]) ;
	    }
	    if(!Store)
	      Print_PostElement(PostSubOperation_P->Format, Current.Time, iTime, 
				NbrTimeStep, Current.NbrHar, 
				PostSubOperation_P->HarmonicToTime, NULL, PE);
	  }
	}
	else{ /* We work on the real mesh */
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
	      Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, &Element,
			  PE->u[iNode], PE->v[iNode], PE->w[iNode], &PE->Value[iNode]);
	    if(CPQ_P)
	      Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				   &PE->Value[iNode], &CumulativeValues[iTime]) ;
	    }      
	    if(!Store)
	      Print_PostElement(PostSubOperation_P->Format, Current.Time, iTime, 
				NbrTimeStep, Current.NbrHar, 
				PostSubOperation_P->HarmonicToTime, NULL, PE);
	  }
	}
      }
      
      if(!Store) Destroy_PostElement(PE) ;

    }
  }

  /* Perform Smoothing */
  
  if(NbrSmoothing && !InteractiveInterrupt){

    Msg(INFO, "Smoothing (%d)", NbrSmoothing);

    PostElement2_L = List_Create(NbrPost, 1, sizeof(struct PostElement *)) ;
    
    NodexPostElement_T = Tree_Create(sizeof(struct IntxList), fcmp_IntxList);
    
    for (iPost = 0 ; iPost < NbrPost ; iPost++ ){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost) ;
      PE2 = Create_PostElement(PE->Index, PE->Type, PE->NbrNodes, PE->Depth) ;

      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++) {

	if(PE->NumNodes[iNode] < 0)
	  Msg(ERROR, "Smoothing not done with Pyramids");

	NxPE.Int = PE->NumNodes[iNode] ; 
	if(!(NxPE_P = (struct IntxList*)Tree_PQuery(NodexPostElement_T, &NxPE))){
	  NxPE.List = List_Create(5, 5, sizeof(int));  
	  List_Add(NxPE.List, &iPost);
	  Tree_Add(NodexPostElement_T, &NxPE) ;
	}
	else
	  List_Add(NxPE_P->List, &iPost);

	PE2->NumNodes[iNode] = PE->NumNodes[iNode] ;
	PE2->u[iNode] = PE->u[iNode] ;
	PE2->v[iNode] = PE->v[iNode] ;
	PE2->w[iNode] = PE->w[iNode] ;
	PE2->x[iNode] = PE->x[iNode] ;
	PE2->y[iNode] = PE->y[iNode] ;
	PE2->z[iNode] = PE->z[iNode] ;
      }

      List_Add(PostElement2_L, &PE2) ;
    }

    while(NbrSmoothing){
     
      for(iPost = 0 ; iPost < NbrPost ; iPost++){ 

	PE2 = *(struct PostElement**)List_Pointer(PostElement2_L, iPost) ;

	for(iNode = 0 ; iNode < PE2->NbrNodes ; iNode++){

	  Cal_ZeroValue(&PE2->Value[iNode]) ;  	  

	  NxPE.Int = PE2->NumNodes[iNode];
	  NxPE_P = (struct IntxList *)Tree_PQuery(NodexPostElement_T, &NxPE);

	  for(ii = 0 ; ii < List_Nbr(NxPE_P->List) ; ii++){
	    List_Read(NxPE_P->List, ii, &jj);
	    PE = *(struct PostElement**)List_Pointer(PostElement_L, jj) ;

	    PE2->Value[iNode].Type = PE->Value[0].Type ;
	    for (jj = 0 ; jj < PE->NbrNodes ; jj++){
	      Cal_AddMultValue(&PE2->Value[iNode], &PE->Value[jj], 
			       1./(double)PE->NbrNodes, &PE2->Value[iNode]) ;
	    }
	  }

	  for (ii = 0 ; ii < MAX_DIM ; ii++)
	    for (kk = 0 ; kk < Current.NbrHar ; kk++)
	      PE2->Value[iNode].Val[MAX_DIM*kk+ii] /= (double)List_Nbr(NxPE_P->List) ;
	}
	
      }

      Tmp_L = PostElement_L ;	
      PostElement_L = PostElement2_L ; 
      PostElement2_L = Tmp_L ;
      NbrSmoothing-- ;
    }

    for(iPost = 0 ; iPost < NbrPost ; iPost++){ 
      PE2 = *(struct PostElement**)List_Pointer(PostElement2_L, iPost);
      Destroy_PostElement(PE2) ;
    }

  }

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
  }

  /* Print evrything if we are in Store mode */

  if(Store && !InteractiveInterrupt){
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

      Print_PostElement(PostSubOperation_P->Format, Current.Time, 0, 
			1, Current.NbrHar, 
			PostSubOperation_P->HarmonicToTime, 
			PostSubOperation_P->Adapt ? Dummy : NULL, PE);
      Destroy_PostElement(PE) ;
    }
  }
  
  Print_PostFooter(PostSubOperation_P->Format);

  List_Delete(PostElement_L);

  if(CPQ_P) Free(CumulativeValues);
  if(PostSubOperation_P->Adapt) Free(Error) ;
}



/* ------------------------------------------------------------------------ */
/*  P o s _ P l o t O n C u t                                               */
/* ------------------------------------------------------------------------ */

double Plane(double a, double b, double c, double d, 
	     double x, double y, double z){
  return a*x+b*y+c*z+d;
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
  c[0] = a[1]*b[2]-a[2]*b[1];
  c[1] = a[2]*b[0]-a[0]*b[2];
  c[2] = a[0]*b[1]-a[1]*b[0];
}

void normvec(double *a){
  double mod;
  mod = hypot(hypot(a[0],a[1]),a[2]);
  a[0]/=mod;
  a[1]/=mod;
  a[2]/=mod;
}

#define NBR_MAX_CUT 10

#define LETS_PRINT_THE_RESULT								\
  List_Reset(PE_L);									\
  if(PostSubOperation_P->Depth < 2)							\
    List_Add(PE_L, &PE) ;								\
  else											\
    Pos_CutPostElement(PE, Element.GeoElement, PE_L, PE->Index,				\
		       PostSubOperation_P->Depth, 0, 1) ;				\
  for(iPost = 0 ; iPost < List_Nbr(PE_L) ; iPost++){					\
    PE = *(struct PostElement **)List_Pointer(PE_L, iPost) ;				\
    for(ts = 0 ; ts < NbTimeStep ; ts++){						\
      Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, ts) ;			\
      for(iNode = 0 ; iNode < PE->NbrNodes ; iNode++){					\
	if(NCPQ_P){									\
	  Current.x = PE->x[iNode] ;							\
	  Current.y = PE->y[iNode] ;							\
	  Current.z = PE->z[iNode] ;							\
	  Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,			\
		      &Element, PE->u[iNode], PE->v[iNode], PE->w[iNode],		\
		      &PE->Value[iNode]);						\
	  if(CPQ_P) 									\
             Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,		\
				  &PE->Value[iNode], &CumulativeValues[ts]) ;		\
	}										\
	else										\
	  Cal_CopyValue(&CumulativeValues[ts],&PE->Value[iNode]);			\
      }											\
      Print_PostElement(PostSubOperation_P->Format, Current.Time, ts, NbTimeStep,	\
			Current.NbrHar, PostSubOperation_P->HarmonicToTime,		\
			NULL, PE);							\
    }											\
  }											\
  for(iPost = 0 ; iPost < List_Nbr(PE_L) ; iPost++)					\
     Destroy_PostElement(*(struct PostElement **)List_Pointer(PE_L, iPost));
  

void  Pos_PlotOnCut(struct PostQuantity     *NCPQ_P,
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

  int     NbElement, NbTimeStep, iPost, iNode ;
  int     i, j, k, ts, * NumNodes, nbc ;
  double  A, B, C, D, d1, d2, u, xcg, ycg, zcg ;
  double  x[3], y[3], z[3] ;

  if( !(NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(j = 0 ; j < NbTimeStep ; j++) List_Add(PostSubOperation_P->TimeStep_L, &j);
  }

  PE_L = List_Create(10, 10, sizeof(struct PostElement *)) ;

  for(i=0 ; i<NBR_MAX_CUT ; i++)
    e[i].Value = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    
  Print_PostHeader(PostSubOperation_P->Format, 
		   NbTimeStep, PostSubOperation_P->HarmonicToTime,
		   PostSubOperation_P->CombinationType, Order,
		   NCPQ_P, CPQ_P);

  if(CPQ_P){    
    CumulativeValues = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    Cal_PostCumulativeQuantity(NULL, PostSubOperation_P->TimeStep_L, 
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, CumulativeValues);    
  }

  switch(PostSubOperation_P->SubType) {

  case PLOT_ONCUT_1D :
    Msg(ERROR, "Plot on 1D cuts not done. Use Plot OnLine instead");
    break;

  case PLOT_ONCUT_2D :
    
    /* Ax+By+Cz+D=0  from  (x0,y0,z0),(x1,y1,z1),(x2,y2,z2) */
    
    x[0] = PostSubOperation_P->Case.OnCut.x[0] ;
    y[0] = PostSubOperation_P->Case.OnCut.y[0] ;
    z[0] = PostSubOperation_P->Case.OnCut.z[0] ;
    x[1] = PostSubOperation_P->Case.OnCut.x[1] ;
    y[1] = PostSubOperation_P->Case.OnCut.y[1] ;
    z[1] = PostSubOperation_P->Case.OnCut.z[1] ;
    x[2] = PostSubOperation_P->Case.OnCut.x[2] ;
    y[2] = PostSubOperation_P->Case.OnCut.y[2] ;
    z[2] = PostSubOperation_P->Case.OnCut.z[2] ;
    A =  (y[1]-y[0])*(z[2]-z[0]) - (z[1]-z[0])*(y[2]-y[0]) ;
    B = -(x[1]-x[0])*(z[2]-z[0]) + (z[1]-z[0])*(x[2]-x[0]) ;
    C =  (x[1]-x[0])*(y[2]-y[0]) - (y[1]-y[0])*(x[2]-x[0]) ;
    D = -A*x[0]-B*y[0]-C*z[0] ;

    /* Cut each element */
    
    NbElement = Geo_GetNbrGeoElements() ;

    for(i = 0 ; i < NbElement ; i++) {
      if(InteractiveInterrupt) break;   
      Progress(i, NbElement, "Cut: ") ;
      Element.GeoElement = Geo_GetGeoElement(i) ;
      Element.Num        = Element.GeoElement->Num ;
      Element.Type       = Element.GeoElement->Type ;
      Current.Region = Element.Region = Element.GeoElement->Region ;

      if(Element.GeoElement->Type == TETRAHEDRON || 
	 Element.GeoElement->Type == HEXAHEDRON  ||
	 Element.GeoElement->Type == PRISM       ||
	 Element.GeoElement->Type == PYRAMID){

	Get_NodesCoordinatesOfElement(&Element) ;

	if(Element.GeoElement->NbrEdges == 0)
	  Geo_CreateEdgesOfElement(Element.GeoElement) ;

	nbc = 0;
	
	for(j=0 ; j<Element.GeoElement->NbrEdges ; j++){
	  NumNodes = Geo_GetNodesOfEdgeInElement(Element.GeoElement, j) ;
	  e[nbc].x[0] = Element.x[abs(NumNodes[0])-1] ;
	  e[nbc].y[0] = Element.y[abs(NumNodes[0])-1] ;
	  e[nbc].z[0] = Element.z[abs(NumNodes[0])-1] ;
	  e[nbc].x[1] = Element.x[abs(NumNodes[1])-1] ;
	  e[nbc].y[1] = Element.y[abs(NumNodes[1])-1] ;
	  e[nbc].z[1] = Element.z[abs(NumNodes[1])-1] ;
	  d1 = Plane(A,B,C,D,e[nbc].x[0],e[nbc].y[0],e[nbc].z[0]);
	  d2 = Plane(A,B,C,D,e[nbc].x[1],e[nbc].y[1],e[nbc].z[1]);
	  
	  if(d1*d2 <= 0) {
	    if(d1*d2 < 0.) u = -d2/(d1-d2) ;	    
	    else if(d1 == 0.) u = 1. ;
	    else u = 0. ;
	    e[nbc].xc = u*e[nbc].x[0] + (1.-u)*e[nbc].x[1];
	    e[nbc].yc = u*e[nbc].y[0] + (1.-u)*e[nbc].y[1];
	    e[nbc].zc = u*e[nbc].z[0] + (1.-u)*e[nbc].z[1];	  

	    if(NCPQ_P)
	      xyz2uvwInAnElement(&Element, e[nbc].xc, e[nbc].yc, e[nbc].zc, 
				 &e[nbc].uc, &e[nbc].vc, &e[nbc].wc, NULL, -1);	  
	    nbc++;
	  }
	}
	
	if(nbc > 3){
	  xcg = ycg = zcg = 0.;
	  for(k=0 ; k<nbc ; k++){
	    xcg += e[k].xc; ycg += e[k].yc; zcg += e[k].zc;
	  }
	  xcg /= (double)nbc; ycg /= (double)nbc; zcg /= (double)nbc;
	  DIRZ[0] = A; DIRY[0] = xcg-e[0].xc; 
	  DIRZ[1] = B; DIRY[1] = ycg-e[0].yc; 
	  DIRZ[2] = C; DIRY[2] = zcg-e[0].zc;
	  normvec(DIRZ); normvec(DIRY); prodvec(DIRY,DIRZ,DIRX); normvec(DIRX);
	  XCP = xcg*DIRX[0] + ycg*DIRX[1] + zcg*DIRX[2];
	  YCP = xcg*DIRY[0] + ycg*DIRY[1] + zcg*DIRY[2];	
	  qsort(e,nbc,sizeof(struct CutEdge), fcmp_Angle);
	}
	
	if(nbc > 2){
	  k=2;
	  while(k < nbc){
	    if(PostSubOperation_P->Depth > 0){
	      PE = Create_PostElement(Element.Num, TRIANGLE, 3, 1) ;
	      PE->x[0] = e[0].xc; PE->x[1] = e[k-1].xc; PE->x[2] = e[k].xc;
	      PE->y[0] = e[0].yc; PE->y[1] = e[k-1].yc; PE->y[2] = e[k].yc;
	      PE->z[0] = e[0].zc; PE->z[1] = e[k-1].zc; PE->z[2] = e[k].zc;
	      PE->u[0] = e[0].uc; PE->u[1] = e[k-1].uc; PE->u[2] = e[k].uc;
	      PE->v[0] = e[0].vc; PE->v[1] = e[k-1].vc; PE->v[2] = e[k].vc;
	      PE->w[0] = e[0].wc; PE->w[1] = e[k-1].wc; PE->w[2] = e[k].wc;
	      LETS_PRINT_THE_RESULT ;
	    }
	    else{
	      PE = Create_PostElement(Element.Num, POINT, 1, 0) ;
	      PE->x[0] = (e[0].xc + e[k-1].xc + e[k].xc) / 3. ;
	      PE->y[0] = (e[0].yc + e[k-1].yc + e[k].yc) / 3. ;
	      PE->z[0] = (e[0].zc + e[k-1].zc + e[k].zc) / 3. ;
	      PE->u[0] = (e[0].uc + e[k-1].uc + e[k].uc) / 3. ;
	      PE->v[0] = (e[0].vc + e[k-1].vc + e[k].vc) / 3. ;
	      PE->w[0] = (e[0].wc + e[k-1].wc + e[k].wc) / 3. ;
	      LETS_PRINT_THE_RESULT ;
	    }
	    k++;
	  }
	}
	
	if(nbc == 2){
	  if(PostSubOperation_P->Depth > 0){
	    PE = Create_PostElement(Element.Num, LINE, 2, 1) ;
	    PE->x[0] = e[0].xc; PE->x[1] = e[1].xc; 
	    PE->y[0] = e[0].yc; PE->y[1] = e[1].yc; 
	    PE->z[0] = e[0].zc; PE->z[1] = e[1].zc; 
	    PE->u[0] = e[0].uc; PE->u[1] = e[k-1].uc;
	    PE->v[0] = e[0].vc; PE->v[1] = e[k-1].vc;
	    PE->w[0] = e[0].wc; PE->w[1] = e[k-1].wc;
	    LETS_PRINT_THE_RESULT ;
	  }
	  else{
	    PE = Create_PostElement(Element.Num, POINT, 1, 0) ;
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
    Print_PostFooter(PostSubOperation_P->Format);
    break;
    
  default :
    Msg(ERROR, "Unknown Operation in Plot OnCut");
    break;
  }

  List_Delete(PE_L) ;
  if(CPQ_P) Free(CumulativeValues);
  for(i=0 ; i<NBR_MAX_CUT ; i++) Free(e[i].Value) ;

}

#undef NBR_MAX_CUT
#undef LETS_PRINT_THE_RESULT

/* ------------------------------------------------------------------------ */
/*  P o s _ P l o t O n G r i d                                             */
/* ------------------------------------------------------------------------ */


#define LETS_PRINT_THE_RESULT							\
 PE->x[0] = Current.xp = Current.x ;						\
 PE->y[0] = Current.yp = Current.y ; 						\
 PE->z[0] = Current.zp = Current.z ;						\
 if(!NCPQ_P){									\
   for (ts = 0 ; ts < NbTimeStep ; ts++){					\
     PE->Value[0] = CumulativeValues[ts] ;					\
     Print_PostElement(PSO_P->Format, Current.Time, ts, NbTimeStep,		\
                       Current.NbrHar, PSO_P->HarmonicToTime, Normal, PE);	\
   }										\
 }										\
 else{										\
   InWhichElement(Current.GeoData->Grid, NULL, &Element, PSO_P->Dimension,	\
                  Current.x, Current.y, Current.z, &u, &v, &w) ;		\
   Current.Region = Element.Region ;						\
   for (ts = 0 ; ts < NbTimeStep ; ts++) {					\
     Pos_InitAllSolutions(PSO_P->TimeStep_L, ts) ;				\
     Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,			\
                 &Element, u, v, w, &PE->Value[0]);				\
     if(CPQ_P)									\
       Combine_PostQuantity(PSO_P->CombinationType, Order,			\
                            &PE->Value[0], &CumulativeValues[ts]) ;		\
     Print_PostElement(PSO_P->Format, Current.Time, ts, NbTimeStep,		\
                       Current.NbrHar, PSO_P->HarmonicToTime, Normal, PE);      \
   }										\
 }


void  Pos_PlotOnGrid(struct PostQuantity     *NCPQ_P,
		     struct PostQuantity     *CPQ_P,
		     int                      Order,
		     struct DefineQuantity   *DefineQuantity_P0,
		     struct QuantityStorage  *QuantityStorage_P0,
		     struct PostSubOperation *PSO_P) {

  struct Element       Element ;
  struct Value       * CumulativeValues, Value ;
  struct PostElement * PE ;

  int     i1, i2, i3, j, NbTimeStep, ts ;
  double  u, v, w, Length, Normal[3] ;
  double  X[4], Y[4], Z[4], S[3], N[4];

  Get_InitDofOfElement(&Element) ;

  PE = Create_PostElement(0, POINT, 1, 0) ;

  if( !(NbTimeStep = List_Nbr(PSO_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(j = 0 ; j < NbTimeStep ; j++) List_Add(PSO_P->TimeStep_L, &j);
  }

  if(CPQ_P){    
    CumulativeValues = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    Cal_PostCumulativeQuantity(NULL, PSO_P->TimeStep_L, 
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, CumulativeValues);    
  }

  Init_SearchGrid(&Current.GeoData->Grid) ;

  Print_PostHeader(PSO_P->Format, NbTimeStep, PSO_P->HarmonicToTime,
		   PSO_P->CombinationType, Order, NCPQ_P, CPQ_P);

  switch(PSO_P->SubType) {

  case PLOT_ONGRID_0D :
    Current.x = PSO_P->Case.OnGrid.x[0] ;
    Current.y = PSO_P->Case.OnGrid.y[0] ;
    Current.z = PSO_P->Case.OnGrid.z[0] ;
    Normal[0] = Normal[1] = Normal[2] = 0.0 ;
    LETS_PRINT_THE_RESULT ;
    break;

  case PLOT_ONGRID_1D :
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

  case PLOT_ONGRID_2D :
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
      Msg(WARNING, "Bad Plane (Null Normal)"); return ;
    }
    Normal[0]/=Length ; Normal[1]/=Length ; Normal[2]/=Length ;

    N[0] = PSO_P->Case.OnGrid.n[0] ; N[1] = PSO_P->Case.OnGrid.n[1] ;
    
    for (i1 = 0 ; i1 <= N[0] ; i1++) {
      S[0] = (double)i1 / (double)(N[0] ? N[0] : 1) ;
      for (i2 = 0 ; i2 <= N[1] ; i2++) {
	S[1] = (double)i2 / (double)(N[1] ? N[1] : 1) ;
	Current.x = X[0] + (X[1] - X[0]) * S[0] + (X[2] - X[0]) * S[1] ;
	Current.y = Y[0] + (Y[1] - Y[0]) * S[0] + (Y[2] - Y[0]) * S[1] ;
	Current.z = Z[0] + (Z[1] - Z[0]) * S[0] + (Z[2] - Z[0]) * S[1] ;	  
	LETS_PRINT_THE_RESULT ;
      }
      fprintf(PostStream, "\n");
    }
    break;

  case PLOT_ONGRID_3D :
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
	fprintf(PostStream, "\n");
      }
      fprintf(PostStream, "\n");
    }
    break;

  case PLOT_ONGRID_PARAM :
    Normal[0] = Normal[1] = Normal[2] = 0.0 ;
    for (i1 = 0 ; i1 < List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[0]) ; i1++) {
      List_Read(PSO_P->Case.OnParamGrid.ParameterValue[0], i1, &Current.s) ;
      for (i2 = 0 ; i2 < List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[1]) ; i2++) {
	List_Read(PSO_P->Case.OnParamGrid.ParameterValue[1], i2, &Current.t) ;
	Get_ValueOfExpressionByIndex(PSO_P->Case.OnParamGrid.ExpressionIndex[0],
				     NULL, 0., 0., 0., &Value) ; 
	Current.x = Value.Val[0];
	Get_ValueOfExpressionByIndex(PSO_P->Case.OnParamGrid.ExpressionIndex[1],
				     NULL, 0., 0., 0., &Value) ; 
	Current.y = Value.Val[0];
	Get_ValueOfExpressionByIndex(PSO_P->Case.OnParamGrid.ExpressionIndex[2],
				     NULL, 0., 0., 0., &Value) ; 
	Current.z = Value.Val[0];
	Normal[0] = Current.s ;
	Normal[1] = Current.t ;
	Normal[2] = 0. ;
	LETS_PRINT_THE_RESULT ;
      }
      if(List_Nbr(PSO_P->Case.OnParamGrid.ParameterValue[1])>1) fprintf(PostStream, "\n");
    }
    break;
  }

  Print_PostFooter(PSO_P->Format);

  Destroy_PostElement(PE) ;
  if(CPQ_P) Free(CumulativeValues);
}

#undef LETS_PRINT_THE_RESULT


/* ------------------------------------------------------------------------ */
/*  P o s _ P r i n t O n R e g i o n                                       */
/* ------------------------------------------------------------------------ */

void  Pos_PrintOnRegion(struct PostQuantity      *NCPQ_P,
			struct PostQuantity      *CPQ_P,
			int                       Order,
			struct DefineQuantity    *DefineQuantity_P0,
			struct QuantityStorage   *QuantityStorage_P0,
			struct PostSubOperation  *PostSubOperation_P) {

  struct Element           Element ;
  struct Value             Value ;

  List_T  *Region_L ;
  int      i, j, NbTimeStep ;
  int      Nbr_Region, Num_Region ;

  if(CPQ_P)
    Msg(ERROR, "Cumulative PostQuantity in PrintOnRegion not done") ;

  if( !(NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(i = 0 ; i < NbTimeStep ; i++) List_Add(PostSubOperation_P->TimeStep_L, &i);
  }

  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group, 
			   PostSubOperation_P->Case.OnRegion.RegionIndex))
    ->InitialList ;
  List_Tri(Region_L, fcmp_int) ;
  /*
  if (PostSubOperation_P->InIndex >= 0) {
    SubRegion_L =
      ((struct Group *)
       List_Pointer(Problem_S.Group, PostSubOperation_P->InIndex))->InitialList ;
    if (List_Nbr(SubRegion_L) == 1)
      List_Read(SubRegion_L, 0, &Current.SubRegion) ;
    else
      Msg(ERROR, "Only one Region allowed for SubRegion '%s' of PostQuantity",
	  ((struct Group *)
	   List_Pointer(Problem_S.Group, PostSubOperation_P->InIndex))->Name) ;
  }
  else
    Current.SubRegion = 0 ;
  */
  Nbr_Region = List_Nbr(Region_L) ;

  fprintf(PostStream, "# %s on", NCPQ_P->Name) ;
  for(i = 0 ; i < Nbr_Region ; i++) {
    List_Read(Region_L, i, &Num_Region) ;
    fprintf(PostStream, " %d", Num_Region) ;
  }
  fprintf(PostStream, "\n") ;


  for (j = 0 ; j < NbTimeStep ; j++) {
      
    Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, j) ;

    fprintf(PostStream, "%.8g", Current.Time) ;

    for(i = 0 ; i < Nbr_Region ; i++) {

      List_Read(Region_L, i, &Num_Region) ;

      Current.SubRegion = Num_Region ;

      Element.GeoElement = NULL ;
      Element.Num = NO_ELEMENT ;
      Element.Type = -1 ;
      Current.Region = Element.Region = Num_Region ;
      Current.x = Current.y = Current.z = 0. ;
      Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, 
		  &Element, 0., 0., 0., &Value) ;

      Print_PostValue(PostSubOperation_P->Format, &Value, 
		      Current.NbrHar, Current.Time, 0, 0) ;
    }

    fprintf(PostStream, "\n"); 
  }

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

  if(CPQ_P)
    Msg(ERROR, "Cumulative PostQuantity in PrintWithArgument not done") ;

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

      fprintf(PostStream, "%.8g", x) ;

      Element.GeoElement = NULL ;
      Element.Num = NO_ELEMENT ;
      Element.Type = -1 ;
      Current.Region = Element.Region = Num_Region ;
      Current.x = Current.y = Current.z = 0. ;

      Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, 
		  &Element, 0., 0., 0., &Value) ;

      Print_PostValue(PostSubOperation_P->Format, &Value, 
		      Current.NbrHar, Current.Time, 0, 1) ;
  }

}




/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t A l l S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) {

  int  Num_TimeStep, k, Num_Solution ;

  List_Read(TimeStep_L, Index_TimeStep, &Num_TimeStep) ;

  for (k = 0 ; k < Current.NbrSystem ; k++)
    if ( (Num_Solution = MIN(List_Nbr((Current.DofData_P0+k)->Solutions)-1,
			     Num_TimeStep)) >=0 )
      (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)
	List_Pointer((Current.DofData_P0+k)->Solutions, Num_Solution) ;

  Current.Time = Current.DofData->CurrentSolution->Time ;

}


