#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "Get_DofOfElement.h"
#include "GeoData.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"
#include "Pos_Formulation.h"

#include "Data_Passive.h"
#include "Data_DefineE.h"

#include "CurrentData.h"

#include "Data_Numeric.h"
#include "ualloc.h"
#include "outil.h"

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


  One should provide the possibility to save each timestep in a separate 
  res file (xxx-1.res, xxx-2.res, ...), and to read selectively
  the files for post processing.

  Reflexion necessaire sur le post : trop lent, trop gourmand en
  memoire... 
  

*/

extern  int       InteractiveInterrupt ;

/* ------------------------------------------------------------------------ */
/*  P o s _ F o r m u l a t i o n                                           */
/* ------------------------------------------------------------------------ */

void  Pos_Formulation(struct Formulation       *Formulation_P,
		      struct PostSubOperation  *PostSubOperation_P) {

  struct PostQuantity   *NCPQ_P, *CPQ_P ;
  int                    Order ;

  if (PostSubOperation_P->FileOut){
    if (!PostSubOperation_P->CatFile) {
      if((PostStream = fopen(PostSubOperation_P->FileOut, "w")))
	Msg(DIRECT, "-> '%s'", PostSubOperation_P->FileOut) ;
      else{
	Msg(ERROR, "Unable to Open File '%s'", PostSubOperation_P->FileOut) ;
      }
    }
    else {
      if((PostStream = fopen(PostSubOperation_P->FileOut, "a")))
	Msg(DIRECT, "->> '%s'", PostSubOperation_P->FileOut) ;
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
      List_Pointer(PostProcessing_S.PostQuantity, 
		   PostSubOperation_P->PostQuantityIndex[0]))->Type == NONCUMULATIVE){
    NCPQ_P = 
      (struct PostQuantity *) List_Pointer(PostProcessing_S.PostQuantity, 
					   PostSubOperation_P->PostQuantityIndex[0]) ;
    CPQ_P = 
      (PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
      (struct PostQuantity *)List_Pointer(PostProcessing_S.PostQuantity, 
					  PostSubOperation_P->PostQuantityIndex[1]) :
      NULL ;
    Order = 1 ;
  }
  else{
    CPQ_P = 
      (struct PostQuantity *) List_Pointer(PostProcessing_S.PostQuantity, 
					   PostSubOperation_P->PostQuantityIndex[0]) ;
    NCPQ_P = 
      (PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
      (struct PostQuantity *)List_Pointer(PostProcessing_S.PostQuantity, 
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

void Cal_PostCumulativeQuantity(List_T                 *TimeStep_L, 
				struct PostQuantity    *PostQuantity_P, 
				struct DefineQuantity  *DefineQuantity_P0,
				struct QuantityStorage *QuantityStorage_P0,
				struct Value           *Value){  
  struct Element Element ;
  struct Value tmpValue ;
  int i, j, NbElement, NbTimeStep ;

  NbTimeStep = List_Nbr(TimeStep_L) ; 
  NbElement = Geo_GetNbrGeoElements() ;

  for(i = 0 ; i < NbTimeStep ; i++) Cal_ZeroValue(&Value[i]);
  
  for(i = 0 ; i < NbElement ; i++) {    
    if(InteractiveInterrupt) break;
    Progress(i, NbElement, "Cumulative: ") ;

    Element.GeoElement = Geo_GetGeoElement(i) ;
    Element.Num        = Element.GeoElement->Num ;
    Element.Type       = Element.GeoElement->Type ;
    Current.Region     = Element.Region = Element.GeoElement->Region ;
    
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

  PE1 = (struct PostElement*)a; PE2 = (struct PostElement*)b;

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

/****** this should dissapear *********/

struct NumxList{
  int       Num ;
  List_T  * List ;
} ;

int fcmp_NumxList(const void * a, const void * b) {
  return  ((struct NumxList *)a)->Num - ((struct NumxList *)b)->Num ;
}

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
/****** END this should dissapear ********/


void  Pos_PlotOnRegion(struct PostQuantity     *NCPQ_P,
		       struct PostQuantity     *CPQ_P,
		       int                      Order,
		       struct DefineQuantity   *DefineQuantity_P0,
		       struct QuantityStorage  *QuantityStorage_P0,
		       struct PostSubOperation *PostSubOperation_P) {
  
  struct Element         Element ;
  struct PostElement     PostElement, PostElement2, *PostElement_P;
  struct Value          *CumulativeValues ;
  struct NumxList        Map ;

  List_T  *PostElement_L, *Region_L ;
  List_T  *PE_L, *PExN_L, *NxPE_L, *Neighbours_L, *Tmp_L ;
  Tree_T  *PostElement_T;
  double   Factor ;
  int      i, i_incr, j, k, l, m, n;
  int      NbElement, NbTimeStep, NbSmoothing ;


  /* PostElement generation */

  PostElement_L = List_Create(100,100,sizeof(struct PostElement)) ;
  
  NbElement = Geo_GetNbrGeoElements() ;
  
  Region_L = ((struct Group *)
	      List_Pointer(Problem_S.Group, 
			   PostSubOperation_P->Case.OnRegion.RegionIndex))->InitialList ;

  if(Region_L){
    for(i = 0 ; i < NbElement ; i++) {
      if(InteractiveInterrupt) break;
      Progress(i, NbElement, "Generate: ") ;
      Element.GeoElement = Geo_GetGeoElement(i) ;
      if(List_Search(Region_L, &Element.GeoElement->Region, fcmp_int)){
	PostElement.Index = i ; 
	PostElement.Type  = Element.GeoElement->Type ;        
	Pos_FillPostElement(PostElement, Element.GeoElement, PostElement_L, 
			    PostSubOperation_P->Depth,PostSubOperation_P->Skin) ;
      }
    }
  }

  /* Skin Treatment */

  if(PostSubOperation_P->Skin){
    PostElement_T = Tree_Create(sizeof(struct PostElement), fcmp_PostElement);

    for(i = 0 ; i < List_Nbr(PostElement_L) ; i++){
      if(InteractiveInterrupt) break;
      Progress(i, List_Nbr(PostElement_L), "Boundary: ") ;
      List_Read(PostElement_L, i, &PostElement) ;      
      if(Tree_Query(PostElement_T, &PostElement))
	Tree_Suppress(PostElement_T, &PostElement);
      else
	Tree_Add(PostElement_T, &PostElement);
    }

    List_Delete(PostElement_L);
    PostElement_L = Tree2List(PostElement_T);
    Tree_Delete(PostElement_T);
  }

  /* TimeStep selection */
  
  if( !(NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(i = 0 ; i < NbTimeStep ; i++) List_Add(PostSubOperation_P->TimeStep_L, &i);
  }

  /* Header */

  Print_PostHeader(PostSubOperation_P->Format, 
		   NbTimeStep, PostSubOperation_P->HarmonicToTime,
		   PostSubOperation_P->CombinationType, Order, 
		   NCPQ_P, CPQ_P);
  
  /* Cumulative Quantity Computation */

  if(CPQ_P){    
    CumulativeValues = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    Cal_PostCumulativeQuantity(PostSubOperation_P->TimeStep_L, 
			       CPQ_P, DefineQuantity_P0,
			       QuantityStorage_P0, CumulativeValues);    
  }

  /* Smoothing check */
  
  if(PostSubOperation_P->Smoothing){
    if(PostSubOperation_P->Depth > 1)
      Msg(ERROR, "No smoothing: Depth = %d > 1", PostSubOperation_P->Depth); 
    if(NbTimeStep > 1)
      Msg(ERROR, "No smoothing: NbTimeSteps = %d > 1", NbTimeStep); 
    NbSmoothing = PostSubOperation_P->Smoothing ;
  }
  else
    NbSmoothing = 0;

  /* De-refinement */

  if(PostSubOperation_P->Depth < 0)
    i_incr = - PostSubOperation_P->Depth ;
  else
    i_incr = 1 ;

  /* Search Grid if Plot On Grid */

  if(NCPQ_P && PostSubOperation_P->SubType == PLOT_ONGRID)
    Init_SearchGrid(&Current.GeoData->Grid) ;

  /* Non Cumulative Quantity Computation */

  Get_InitDofOfElement(&Element) ;      
  NbElement = List_Nbr(PostElement_L) ;  
  
  for(i = 0 ; i < NbElement ; i+=i_incr) {

    if(InteractiveInterrupt) break;
    Progress(i, NbElement, "Compute: ") ;
    
    PostElement_P = (struct PostElement *)List_Pointer(PostElement_L, i) ;
    
    if(!NCPQ_P){ 
      for (j = 0 ; j < NbTimeStep ; j++){
	for(k = 0 ; k < PostElement_P->NbrNodes ; k++)
	  Cal_CopyValue(&CumulativeValues[j],&PostElement_P->Value[k]);
	if(!NbSmoothing)
	  Print_PostElement(PostSubOperation_P->Format, 
			    Current.Time, j, NbTimeStep, 
			    Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			    PostElement_P->Type, PostElement_P->NbrNodes,
			    PostElement_P->x, PostElement_P->y, PostElement_P->z,
			    NULL, PostElement_P->Value);
      }
    }
    else{
      if(PostSubOperation_P->SubType == PLOT_ONGRID){
	for (j = 0 ; j < NbTimeStep ; j++) {
	  Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, j) ;
	  for(k = 0 ; k < PostElement_P->NbrNodes ; k++){
	    InWhichElement(Current.GeoData->Grid, Region_L, &Element, PostSubOperation_P->Dimension, 
			   PostElement_P->x[k], PostElement_P->y[k], PostElement_P->z[k],
			   &PostElement_P->u[k], &PostElement_P->v[k], &PostElement_P->w[k]) ;
	    Current.Region = Element.Region ;
	    Current.x = PostElement_P->x[k] ;
	    Current.y = PostElement_P->y[k] ;
	    Current.z = PostElement_P->z[k] ;
	    Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, 
			&Element, PostElement_P->u[k], PostElement_P->v[k], PostElement_P->w[k], 
			&PostElement_P->Value[k]);	    
	    if(CPQ_P)
	      Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				   &PostElement_P->Value[k], &CumulativeValues[j]) ;
	  }
	  if(!NbSmoothing)
	    Print_PostElement(PostSubOperation_P->Format, 
			      Current.Time, j, NbTimeStep, 
			      Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			      PostElement_P->Type, PostElement_P->NbrNodes,
			      PostElement_P->x, PostElement_P->y, PostElement_P->z,
			      NULL, PostElement_P->Value);
	}
      }
      else{
	Element.GeoElement = Geo_GetGeoElement(PostElement_P->Index) ;
	Element.Num = Element.GeoElement->Num ;
	Element.Type = Element.GeoElement->Type ;
	Current.Region = Element.Region = Element.GeoElement->Region ;
	Get_NodesCoordinatesOfElement(&Element) ;
	
	for (j = 0 ; j < NbTimeStep ; j++) {
	  Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, j) ;
	  for(k = 0 ; k < PostElement_P->NbrNodes ; k++){
	    Current.x = PostElement_P->x[k] ;
	    Current.y = PostElement_P->y[k] ;
	    Current.z = PostElement_P->z[k] ;
	    Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0, 
			&Element, PostElement_P->u[k], PostElement_P->v[k], PostElement_P->w[k], 
			&PostElement_P->Value[k]);	    
	    if(CPQ_P)
	      Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				   &PostElement_P->Value[k], &CumulativeValues[j]) ;
	  }      
	  if(!NbSmoothing)
	    Print_PostElement(PostSubOperation_P->Format, 
			      Current.Time, j, NbTimeStep, 
			      Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			      PostElement_P->Type, PostElement_P->NbrNodes,
			      PostElement_P->x, PostElement_P->y, PostElement_P->z,
			      NULL, PostElement_P->Value);
	}
      }
    }
  }

  /* Smoothing */
  
  if(NbSmoothing && !InteractiveInterrupt){

    Msg(INFO, "Smoothing (%d times)", NbSmoothing);
    
    NxPE_L = List_Create(NbElement, 100,sizeof(struct NumxList));
    PExN_L = List_Create(NbElement, 1, sizeof(struct NumxList));
    
    for (i=0 ; i < NbElement ; i++ ){ 
      List_Read(PostElement_L, i, &PostElement) ;
      Map.Num = i ;
      Map.List = List_Create(PostElement.NbrNodes, 1, sizeof(int));  
      for(j = 0 ; j < PostElement.NbrNodes ; j++) {
	if(PostElement.NumNodes[j]<0) /* pyramids... */
	  Msg(ERROR, "Smoothing with uncomptatible type of elements");
	List_Add(Map.List,&PostElement.NumNodes[j]);
      }
      List_Add(PExN_L, &Map);
    }
    
    Invert_MappingLists(PExN_L, NxPE_L);    
    List_Delete(PExN_L);

    PE_L = List_Create(NbElement,1, sizeof(struct PostElement)) ;
    
    while(NbSmoothing){
     
      for(i = 0 ; i < List_Nbr(PostElement_L) ; i++){ 
	List_Read(PostElement_L, i, &PostElement);

	for(j = 0 ; j < PostElement_P->NbrNodes ; j++){

	  Cal_ZeroValue(&PostElement.Value[j]) ;	  	  
	  Map.Num = PostElement.NumNodes[j];
	  Neighbours_L = ((struct NumxList*)List_PQuery(NxPE_L, &Map, fcmp_NumxList))->List;

	  for(k = 0 ; k < List_Nbr(Neighbours_L) ; k++){	      
	    List_Read(Neighbours_L, k, &l);
	    List_Read(PostElement_L, l, &PostElement2);
	    Factor = 1./PostElement2.NbrNodes ;	    
	    PostElement.Value[j].Type = PostElement2.Value[l].Type ;
	    for (l = 0 ; l < PostElement2.NbrNodes ; l++){
	      Cal_AddMultValue(&PostElement.Value[j],
			       &PostElement2.Value[l],
			       Factor,
			       &PostElement.Value[j]) ;
	    }
	  }

	  for (m = 0 ; m < Current.NbrHar ; m++)
	    for (n = 0 ; n < MAX_DIM ; n++)
	      PostElement.Value[j].Val[MAX_DIM*m+n] /= List_Nbr(Neighbours_L) ;

	}
	List_Add(PE_L, &PostElement);
	
      }
      NbSmoothing-- ;
      List_Reset(PostElement_L);
      Tmp_L = PE_L ; PE_L = PostElement_L ; PostElement_L = Tmp_L ;
    }

    for(i = 0 ; i < List_Nbr(PostElement_L) ; i++){ 
      PostElement_P = (struct PostElement*)List_Pointer(PostElement_L, i);
      Print_PostElement(PostSubOperation_P->Format, 
			Current.Time, j, NbTimeStep, 
			Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			PostElement_P->Type, PostElement_P->NbrNodes,
			PostElement_P->x, PostElement_P->y, PostElement_P->z,
			NULL, PostElement_P->Value);
    }
    List_Delete(PE_L);
  }
  
  Print_PostFooter(PostSubOperation_P->Format);
  
  List_Delete(PostElement_L);
  if(CPQ_P) Free(CumulativeValues);
}



/* ------------------------------------------------------------------------ */
/*  P o s _ P l o t O n C u t                                               */
/* ------------------------------------------------------------------------ */

double Plane(double a, double b, double c, double d, 
	     double x, double y, double z){
  return(a*x+b*y+c*z+d);
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

#define NB_MAX_CUT 10

void  Pos_PlotOnCut(struct PostQuantity     *NCPQ_P,
		    struct PostQuantity     *CPQ_P,
		    int                      Order,
		    struct DefineQuantity   *DefineQuantity_P0,
		    struct QuantityStorage  *QuantityStorage_P0,
		    struct PostSubOperation *PostSubOperation_P) {

  struct CutEdge       e[NB_MAX_CUT];
  struct Element       Element ;
  struct PostElement   PE ;
  struct Value        *CumulativeValues ;

  int     NbElement, NbTimeStep ;
  int     i, j, k, ts, *NumNodes, nbc ;
  double  A, B, C, D, d1, d2, u, v, w, xcg, ycg, zcg ;
  double  x[3], y[3], z[3] ;

  if(PostSubOperation_P->Depth != 1)
    Msg(ERROR, "Wrong Recursive Division Number (Depth=%d) in Plot OnCut",
	PostSubOperation_P->Depth);

  if( !(NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(j = 0 ; j < NbTimeStep ; j++) List_Add(PostSubOperation_P->TimeStep_L, &j);
  }

  for(i=0 ; i<NB_MAX_CUT ; i++)
    e[i].Value = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    
  Print_PostHeader(PostSubOperation_P->Format, 
		   NbTimeStep, PostSubOperation_P->HarmonicToTime,
		   PostSubOperation_P->CombinationType, Order, 
		   NCPQ_P, CPQ_P);

  if(CPQ_P){    
    CumulativeValues = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    Cal_PostCumulativeQuantity(PostSubOperation_P->TimeStep_L, 
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
	    
	    if(!NCPQ_P){ 
	      for(ts=0 ; ts<NbTimeStep ; ts++)
		Cal_CopyValue(&CumulativeValues[ts],&e[nbc].Value[ts]);
	    }
	    else{
	      xyz2uvwInAnElement(&Element, e[nbc].xc, e[nbc].yc, e[nbc].zc, 
				 &u, &v, &w, NULL, -1);	  
	      for(ts=0 ; ts<NbTimeStep ; ts++){
		Pos_InitAllSolutions(PostSubOperation_P->TimeStep_L, ts) ;
		Current.x = e[nbc].xc ;
		Current.y = e[nbc].yc ;
		Current.z = e[nbc].zc ;
		Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,
			    &Element, u, v, w, &e[nbc].Value[ts]);	  
		if(CPQ_P)
		  Combine_PostQuantity(PostSubOperation_P->CombinationType, Order,
				       &e[nbc].Value[ts], &CumulativeValues[ts]) ;
	      }
	    }
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
	    PE.Index = Element.Num ; PE.Type = TRIANGLE ; PE.Depth = 1 ;
	    PE.NbrNodes = 3 ;
	    PE.x[0] = e[0].xc; PE.x[1] = e[k-1].xc; PE.x[2] = e[k].xc;
	    PE.y[0] = e[0].yc; PE.y[1] = e[k-1].yc; PE.y[2] = e[k].yc;
	    PE.z[0] = e[0].zc; PE.z[1] = e[k-1].zc; PE.z[2] = e[k].zc;
	    
	    for(ts=0 ; ts<NbTimeStep ; ts++){
	      PE.Value[0] = e[0].Value[ts];
	      PE.Value[1] = e[k-1].Value[ts];
	      PE.Value[2] = e[k].Value[ts];
	      Print_PostElement(PostSubOperation_P->Format, 
				Current.Time, ts, NbTimeStep, 
				Current.NbrHar, PostSubOperation_P->HarmonicToTime,
				PE.Type, PE.NbrNodes, 
				PE.x, PE.y, PE.z, NULL, PE.Value);
	    }
	    k++;
	  }
	}
	
	if(nbc == 2){
	  PE.Index = Element.Num ; PE.Type = LINE ; PE.Depth = 1 ;
	  PE.NbrNodes = 2 ;
	  PE.x[0] = e[0].xc; PE.x[1] = e[1].xc; 
	  PE.y[0] = e[0].yc; PE.y[1] = e[1].yc; 
	  PE.z[0] = e[0].zc; PE.z[1] = e[1].zc; 
	  for(ts=0 ; ts<NbTimeStep ; ts++){
	    PE.Value[0] = e[0].Value[ts];
	    PE.Value[1] = e[1].Value[ts];
	    Print_PostElement(PostSubOperation_P->Format, 
			      Current.Time, ts, NbTimeStep, 
			      Current.NbrHar, PostSubOperation_P->HarmonicToTime,
			      PE.Type, PE.NbrNodes, 
			      PE.x, PE.y, PE.z, NULL, PE.Value);
	  }
	}

      }

    }
    Print_PostFooter(PostSubOperation_P->Format);
    break;
    
  default :
    Msg(ERROR, "Unknown Operation in Plot on Cut");
    break;
  }

  if(CPQ_P) Free(CumulativeValues);
  for(i=0 ; i<NB_MAX_CUT ; i++) Free(e[i].Value) ;

}

#undef NB_MAX_CUT

/* ------------------------------------------------------------------------ */
/*  P o s _ P l o t O n G r i d                                             */
/* ------------------------------------------------------------------------ */


#define LETS_PRINT_THE_RESULT 							\
 Current.xp = Current.x ; Current.yp = Current.y ; Current.zp = Current.z ;     \
 if(!NCPQ_P){									\
   for (ts = 0 ; ts < NbTimeStep ; ts++)					\
     Print_PostElement(PSO_P->Format, 						\
		       Current.Time, ts, NbTimeStep,				\
		       Current.NbrHar, PSO_P->HarmonicToTime,			\
		       POINT, 1, &Current.x, &Current.y, &Current.z, 		\
		       Normal, &CumulativeValues[ts]);			        \
 }										\
 else{										\
   InWhichElement(Current.GeoData->Grid, NULL, &Element, PSO_P->Dimension,	\
		  Current.x, Current.y, Current.z, &u, &v, &w) ;		\
   Current.Region = Element.Region ;						\
   for (ts = 0 ; ts < NbTimeStep ; ts++) {					\
     Pos_InitAllSolutions(PSO_P->TimeStep_L, ts) ;				\
     Pos_Element(NCPQ_P, DefineQuantity_P0, QuantityStorage_P0,			\
		 &Element, u, v, w, &Value);					\
     if(CPQ_P)									\
       Combine_PostQuantity(PSO_P->CombinationType, Order,			\
			    &Value, &CumulativeValues[ts]) ;			\
     Print_PostElement(PSO_P->Format, 						\
		       Current.Time, ts, NbTimeStep,				\
		       Current.NbrHar, PSO_P->HarmonicToTime,			\
		       POINT, 1, &Current.xp, &Current.yp, &Current.zp,         \
                       Normal, &Value);	                                        \
   }										\
 }


void  Pos_PlotOnGrid(struct PostQuantity     *NCPQ_P,
		     struct PostQuantity     *CPQ_P,
		     int                      Order,
		     struct DefineQuantity   *DefineQuantity_P0,
		     struct QuantityStorage  *QuantityStorage_P0,
		     struct PostSubOperation *PSO_P) {

  struct Element       Element ;
  struct Value         Value, *CumulativeValues ;

  int     i1, i2, i3, j, NbTimeStep, ts ;
  double  u, v, w, Length, Normal[3] ;
  double  X[4], Y[4], Z[4], S[3], N[4];

  Get_InitDofOfElement(&Element) ;

  if( !(NbTimeStep = List_Nbr(PSO_P->TimeStep_L)) ){
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    for(j = 0 ; j < NbTimeStep ; j++) List_Add(PSO_P->TimeStep_L, &j);
  }

  if(CPQ_P){    
    CumulativeValues = (struct Value*) Malloc(NbTimeStep*sizeof(struct Value)) ;    
    Cal_PostCumulativeQuantity(PSO_P->TimeStep_L, 
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


