#include <stdio.h>
#include <math.h>

#include "GeoData.h"
#include "Get_Geometry.h"
#include "Data_Active.h"


/* ------------------------------------------------------------------------ */
/*  P o s _ C u t P o s t E l e m e n t                                     */
/* ------------------------------------------------------------------------ */

void Pos_CutPostElement(struct PostElement PE, struct Geo_Element *GE,
			List_T *PE_L, int depth, int skin){

  struct  Element      E ;
  struct  PostElement  C[8] ;  
  
  double  u01, u02, u03, u12, u13, u23 ;
  double  v01, v02, v03, v12, v13, v23 ;
  double  w01, w02, w03, w12, w13, w23 ;
  int     i, j, NbCut ;

  /* No node numbers for these 'cutted' elements */

  for(i = 0 ; i < 8 ; i++)
    for(j = 0 ; j < 4 ; j++)
      C[i].NumNodes[j] = -1 ;

  /* Recursive division */

  if(PE.Depth < depth){

    u01 = .5 * (PE.u[0] + PE.u[1]);
    v01 = .5 * (PE.v[0] + PE.v[1]);
    w01 = .5 * (PE.w[0] + PE.w[1]);
     
    switch(PE.Type){

    case POINT :
      Msg(ERROR, "Stupido: recursive division for a Point!");
      break;
      
    case LINE :
      C[0].u[0] = PE.u[0] ; C[0].v[0] = PE.v[0] ; C[0].w[0] = PE.w[0] ;
      C[0].u[1] = u01     ; C[0].v[1] = v01     ; C[0].w[1] = w01     ;
      
      C[1].u[0] = u01     ; C[1].v[0] = v01     ; C[1].w[0] = w01     ;
      C[1].u[1] = PE.u[1] ; C[1].v[1] = PE.v[1] ; C[1].w[1] = PE.w[1] ;
      
      NbCut = 2 ;
      break;
      
    case TRIANGLE :
      u02 = .5 * (PE.u[0] + PE.u[2]); u12 = .5 * (PE.u[1] + PE.u[2]);
      v02 = .5 * (PE.v[0] + PE.v[2]); v12 = .5 * (PE.v[1] + PE.v[2]);
      w02 = .5 * (PE.w[0] + PE.w[2]); w12 = .5 * (PE.w[1] + PE.w[2]);
           
      C[0].u[0] = PE.u[0] ; C[0].v[0] = PE.v[0] ; C[0].w[0] = PE.w[0] ;
      C[0].u[1] = u01     ; C[0].v[1] = v01     ; C[0].w[1] = w01     ;
      C[0].u[2] = u02     ; C[0].v[2] = v02     ; C[0].w[2] = w02     ;

      C[1].u[0] = u01     ; C[1].v[0] = v01     ; C[1].w[0] = w01     ;
      C[1].u[1] = u12     ; C[1].v[1] = v12     ; C[1].w[1] = w12     ;
      C[1].u[2] = u02     ; C[1].v[2] = v02     ; C[1].w[2] = w02     ;
      
      C[2].u[0] = u01     ; C[2].v[0] = v01     ; C[2].w[0] = w01     ;
      C[2].u[1] = PE.u[1] ; C[2].v[1] = PE.v[1] ; C[2].w[1] = PE.w[1] ;
      C[2].u[2] = u12     ; C[2].v[2] = v12     ; C[2].w[2] = w12     ;
      
      C[3].u[0] = u02     ; C[3].v[0] = v02     ; C[3].w[0] = w02     ;
      C[3].u[1] = u12     ; C[3].v[1] = v12     ; C[3].w[1] = w12     ;
      C[3].u[2] = PE.u[2] ; C[3].v[2] = PE.v[2] ; C[3].w[2] = PE.w[2] ;
      
      NbCut = 4 ;
      break;

    case TETRAHEDRON :
      u02 = .5 * (PE.u[0] + PE.u[2]); u03 = .5 * (PE.u[0] + PE.u[3]); 
      v02 = .5 * (PE.v[0] + PE.v[2]); v03 = .5 * (PE.v[0] + PE.v[3]); 
      w02 = .5 * (PE.w[0] + PE.w[2]); w03 = .5 * (PE.w[0] + PE.w[3]); 
    
      u12 = .5 * (PE.u[1] + PE.u[2]); u13 = .5 * (PE.u[1] + PE.u[3]);
      v12 = .5 * (PE.v[1] + PE.v[2]); v13 = .5 * (PE.v[1] + PE.v[3]);
      w12 = .5 * (PE.w[1] + PE.w[2]); w13 = .5 * (PE.w[1] + PE.w[3]);

      u23 = .5 * (PE.u[2] + PE.u[3]);
      v23 = .5 * (PE.v[2] + PE.v[3]);
      w23 = .5 * (PE.w[2] + PE.w[3]);

      C[0].u[0] = PE.u[0] ; C[0].v[0] = PE.v[0] ; C[0].w[0] = PE.w[0] ;
      C[0].u[1] = u01     ; C[0].v[1] = v01     ; C[0].w[1] = w01     ;
      C[0].u[2] = u02     ; C[0].v[2] = v02     ; C[0].w[2] = w02     ;
      C[0].u[3] = u03     ; C[0].v[3] = v03     ; C[0].w[3] = w03     ;

      C[1].u[0] = PE.u[1] ; C[1].v[0] = PE.v[1] ; C[1].w[0] = PE.w[1] ;
      C[1].u[1] = u01     ; C[1].v[1] = v01     ; C[1].w[1] = w01     ;
      C[1].u[2] = u12     ; C[1].v[2] = v12     ; C[1].w[2] = w12     ;
      C[1].u[3] = u13     ; C[1].v[3] = v13     ; C[1].w[3] = w13     ;

      C[2].u[0] = PE.u[2] ; C[2].v[0] = PE.v[2] ; C[2].w[0] = PE.w[2] ;
      C[2].u[1] = u02     ; C[2].v[1] = v02     ; C[2].w[1] = w02     ;
      C[2].u[2] = u12     ; C[2].v[2] = v12     ; C[2].w[2] = w12     ;
      C[2].u[3] = u23     ; C[2].v[3] = v23     ; C[2].w[3] = w23     ;

      C[3].u[0] = PE.u[3] ; C[3].v[0] = PE.v[3] ; C[3].w[0] = PE.w[3] ;
      C[3].u[1] = u03     ; C[3].v[1] = v03     ; C[3].w[1] = w03     ;
      C[3].u[2] = u13     ; C[3].v[2] = v13     ; C[3].w[2] = w13     ;
      C[3].u[3] = u23     ; C[3].v[3] = v23     ; C[3].w[3] = w23     ;

      C[4].u[0] = u01     ; C[4].v[0] = v01     ; C[4].w[0] = w01     ;
      C[4].u[1] = u02     ; C[4].v[1] = v02     ; C[4].w[1] = w02     ;
      C[4].u[2] = u03     ; C[4].v[2] = v03     ; C[4].w[2] = w03     ;
      C[4].u[3] = u23     ; C[4].v[3] = v23     ; C[4].w[3] = w23     ;

      C[5].u[0] = u01     ; C[5].v[0] = v01     ; C[5].w[0] = w01     ;
      C[5].u[1] = u02     ; C[5].v[1] = v02     ; C[5].w[1] = w02     ;
      C[5].u[2] = u12     ; C[5].v[2] = v12     ; C[5].w[2] = w12     ;
      C[5].u[3] = u23     ; C[5].v[3] = v23     ; C[5].w[3] = w23     ;

      C[6].u[0] = u01     ; C[6].v[0] = v01     ; C[6].w[0] = w01     ;
      C[6].u[1] = u12     ; C[6].v[1] = v12     ; C[6].w[1] = w12     ;
      C[6].u[2] = u13     ; C[6].v[2] = v13     ; C[6].w[2] = w13     ;
      C[6].u[3] = u23     ; C[6].v[3] = v23     ; C[6].w[3] = w23     ;

      C[7].u[0] = u01     ; C[7].v[0] = v01     ; C[7].w[0] = w01     ;
      C[7].u[1] = u03     ; C[7].v[1] = v03     ; C[7].w[1] = w03     ;
      C[7].u[2] = u13     ; C[7].v[2] = v13     ; C[7].w[2] = w13     ;
      C[7].u[3] = u23     ; C[7].v[3] = v23     ; C[7].w[3] = w23     ;

      NbCut = 8 ;
      break ;
    }
    
    for(i = 0 ; i < NbCut ; i++){
      C[i].Type  = PE.Type   ; C[i].NbrNodes = PE.NbrNodes ; 
      C[i].Index = PE.Index  ; C[i].Depth    = PE.Depth + 1 ; 
      Pos_CutPostElement(C[i], GE, PE_L, depth, skin);
    }

  }
  else{

    E.GeoElement = GE ;
    E.Num = E.GeoElement->Num ;
    E.Type = E.GeoElement->Type ;
    E.Region = E.GeoElement->Region ;

    Get_NodesCoordinatesOfElement(&E) ;

    for(i = 0 ; i < PE.NbrNodes ; i++){
      if(!skin && PE.Depth == 1 && (E.GeoElement->Type == LINE ||
				    E.GeoElement->Type == TRIANGLE ||
				    E.GeoElement->Type == TETRAHEDRON)){
	PE.x[i] = E.x[i] ; 
	PE.y[i] = E.y[i] ; 
	PE.z[i] = E.z[i] ;
      }
      else{
	Get_GeoElement(&E, PE.u[i], PE.v[i], PE.w[i]) ;
	
	PE.x[i] = PE.y[i] = PE.z[i] = 0. ;
	for (j = 0 ; j < E.GeoElement->NbrNodes ; j++) {
	  PE.x[i] += E.x[j] * E.n[j] ;
	  PE.y[i] += E.y[j] * E.n[j] ;
	  PE.z[i] += E.z[j] * E.n[j] ;
	}
      }      

    }
    
    List_Add(PE_L, &PE);
  }
  
}

/* ------------------------------------------------------------------------ */
/*  P o s _ F i l l P o s t E l e m e n t                                   */
/* ------------------------------------------------------------------------ */

#define POS_CUT_FILL  Pos_CutPostElement(PE, GE, PE_L, depth, 0)
#define POS_CUT_SKIN  Pos_CutPostElement(PE, GE, PE_L, depth, 1)

void Pos_FillPostElement(struct PostElement PE, struct Geo_Element *GE,
			 List_T *PE_L, int depth, int skin){

  PE.Type  = GE->Type ;

  if(!depth){

    PE.Depth = 0 ;
    PE.NbrNodes = 1 ;

    switch(PE.Type){      
    case POINT :
      PE.u[0] = 0.    ; PE.v[0] = 0.    ; PE.w[0] = 0.   ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case LINE :        
      PE.u[0] = 0.    ; PE.v[0] = 0.    ; PE.w[0] = 0.   ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case TRIANGLE :    
      PE.u[0] = 1./3. ; PE.v[0] = 1./3. ; PE.w[0] = 0.   ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case QUADRANGLE :  					   
      PE.u[0] = 0.    ; PE.v[0] = 0.    ; PE.w[0] = 0.   ; 	
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case TETRAHEDRON : 					   
      PE.u[0] = 0.25  ; PE.v[0] = 0.25  ; PE.w[0] = 0.25 ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case HEXAHEDRON :  					   
      PE.u[0] = 0.    ; PE.v[0] = 0.    ; PE.w[0] = 0.   ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case PRISM : 					   
      PE.u[0] = 1./3. ; PE.v[0] = 1./3. ; PE.w[0] = 0.   ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    case PYRAMID :	
      PE.u[0] = 0.    ; PE.v[0] = 0.    ; PE.w[0] = 1./3. ; 
      PE.Type = POINT ; POS_CUT_FILL ; break ;
    }
    
  }
  else{

    PE.Depth = 1 ;
    
    if(!skin){

      switch(PE.Type){
      
      case POINT :    
	PE.Type = POINT ; PE.NbrNodes = 1 ; 
	
	/* node 1 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	POS_CUT_FILL ; 
	break ;

      case LINE :    
	PE.Type = LINE ; PE.NbrNodes = 2 ; 
	
	/* nodes 1 2 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.u[0] =-1. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 0. ;
	POS_CUT_FILL ; 
	break ;
      
      case TRIANGLE :    
	PE.Type = TRIANGLE ; PE.NbrNodes = 3 ;
	
	/* nodes 1 2 3 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 0. ;
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 0. ;
	POS_CUT_FILL ; 
	break ;
	
      case QUADRANGLE :    
	PE.Type = TRIANGLE ; PE.NbrNodes = 3 ;
	
	/* nodes 1 2 4 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 0. ;
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] = 0. ;
	POS_CUT_FILL;
	
	/* nodes 2 3 4 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 0. ; 	      
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 0. ; 	      
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] = 0. ; 	     
	POS_CUT_FILL;
	break ;
	
      case TETRAHEDRON :
	PE.Type = TETRAHEDRON ; PE.NbrNodes = 4 ;
	
	/* nodes 1 2 3 4 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.NumNodes[3] = GE->NumNodes[3] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 0. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 0. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	break ;
	
      case HEXAHEDRON :
	PE.Type = TETRAHEDRON ; PE.NbrNodes = 4 ;
	
	/* nodes 1 2 3 6 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.NumNodes[3] = GE->NumNodes[5] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] =-1. ; 	      
	PE.u[2] = 1. ; PE.v[2] = 1. ; PE.w[2] =-1. ; 	     
	PE.u[3] = 1. ; PE.v[3] =-1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 3 6 7 */    
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[5] ;
	PE.NumNodes[3] = GE->NumNodes[6] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] =-1. ; 	      
	PE.u[2] = 1. ; PE.v[2] =-1. ; PE.w[2] = 1. ; 	     
	PE.u[3] = 1. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 5 6 7 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[4] ;
	PE.NumNodes[2] = GE->NumNodes[5] ;
	PE.NumNodes[3] = GE->NumNodes[6] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] =-1. ; PE.v[1] =-1. ; PE.w[1] = 1. ; 	      
	PE.u[2] = 1. ; PE.v[2] =-1. ; PE.w[2] = 1. ; 	     
	PE.u[3] = 1. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 3 4 7 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.NumNodes[3] = GE->NumNodes[6] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] =-1. ; 	      
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ; 	     
	PE.u[3] = 1. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 5 7 8 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[4] ;
	PE.NumNodes[2] = GE->NumNodes[6] ;
	PE.NumNodes[3] = GE->NumNodes[7] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] =-1. ; PE.v[1] =-1. ; PE.w[1] = 1. ; 	      
	PE.u[2] = 1. ; PE.v[2] = 1. ; PE.w[2] = 1. ; 	     
	PE.u[3] =-1. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 4 7 8 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[6] ;
	PE.NumNodes[3] = GE->NumNodes[7] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] =-1. ; PE.v[1] = 1. ; PE.w[1] =-1. ; 	      
	PE.u[2] = 1. ; PE.v[2] = 1. ; PE.w[2] = 1. ;
	PE.u[3] =-1. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	break ;
	
      case PRISM :
	PE.Type = TETRAHEDRON ; PE.NbrNodes = 4 ;
	
	/* nodes 1 2 3 5 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.NumNodes[3] = GE->NumNodes[4] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] =-1. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] =-1. ; 	     
	PE.u[3] = 1. ; PE.v[3] = 0. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 3 5 6 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.NumNodes[3] = GE->NumNodes[5] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 0. ; PE.v[1] = 1. ; PE.w[1] =-1. ; 	      
	PE.u[2] = 1. ; PE.v[2] = 0. ; PE.w[2] = 1. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	
	/* nodes 1 4 5 6 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.NumNodes[3] = GE->NumNodes[5] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 0. ; PE.v[1] = 0. ; PE.w[1] = 1. ;
	PE.u[2] = 1. ; PE.v[2] = 0. ; PE.w[2] = 1. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 1. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	break ;
	
      case PYRAMID :
	PE.Type = TETRAHEDRON ; PE.NbrNodes = 4 ;
	
	/* nodes 1 2 x 5 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = -1 ;
	PE.NumNodes[3] = GE->NumNodes[4] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 0. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 0. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;

	/* nodes 2 3 x 5 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = -1 ;
	PE.NumNodes[3] = GE->NumNodes[4] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 0. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 0. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;

	/* nodes 3 4 x 5 */
	PE.NumNodes[0] = GE->NumNodes[2] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = -1 ;
	PE.NumNodes[3] = GE->NumNodes[4] ;
	PE.u[0] = 1. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] = 1. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 0. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 0. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;

	/* nodes 4 1 x 5 */
	PE.NumNodes[0] = GE->NumNodes[3] ;
	PE.NumNodes[1] = GE->NumNodes[0] ;
	PE.NumNodes[2] = -1 ;
	PE.NumNodes[3] = GE->NumNodes[4] ;
	PE.u[0] =-1. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] =-1. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 0. ; 	     
	PE.u[3] = 0. ; PE.v[3] = 0. ; PE.w[3] = 1. ; 	     
	POS_CUT_FILL;
	break ;

      }
    }
    else {
    
      switch(PE.Type){
	
      case TRIANGLE :    
	PE.Type = LINE ; PE.NbrNodes = 2 ;
	
	/* nodes 1 2 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	
	/* nodes 2 3 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.u[0] = 1. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 0. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	
	/* nodes 3 1 */
	PE.NumNodes[0] = GE->NumNodes[2] ;
	PE.NumNodes[1] = GE->NumNodes[0] ;
	PE.u[0] = 0. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] = 0. ; PE.v[1] = 0. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	break ;
	
      case QUADRANGLE :    
	PE.Type = LINE ; PE.NbrNodes = 2 ;
	
	/* nodes 1 2 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	
	/* nodes 2 3 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	
	/* nodes 3 4 */
	PE.NumNodes[0] = GE->NumNodes[2] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.u[0] = 1. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	
	/* nodes 4 1 */
	PE.NumNodes[0] = GE->NumNodes[3] ;
	PE.NumNodes[1] = GE->NumNodes[0] ;
	PE.u[0] =-1. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] =-1. ; PE.w[1] = 0. ;
	POS_CUT_SKIN ; 
	break ;
	
      case TETRAHEDRON :
	PE.Type = TRIANGLE ; PE.NbrNodes = 3 ;
	
	/* nodes 1 2 4 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 1. ; 	     
	POS_CUT_SKIN;
	
	/* nodes 1 3 2 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[1] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 0. ; PE.v[1] = 1. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 1. ; PE.v[2] = 0. ; PE.w[2] = 0. ;
	POS_CUT_SKIN;
	
	/* nodes 1 4 3 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 0. ; PE.v[1] = 0. ; PE.w[1] = 1. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 0. ;
	POS_CUT_SKIN;
	
	/* nodes 2 3 4 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] = 1. ; PE.v[0] = 0. ; PE.w[0] = 0. ;
	PE.u[1] = 0. ; PE.v[1] = 1. ; PE.w[1] = 0. ; 	      
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	break ;
	
      case HEXAHEDRON :
	PE.Type = TRIANGLE ; PE.NbrNodes = 3 ;
	
	/* nodes 1 2 4 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] =-1. ; 	      
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 2 3 4 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] =-1. ; 	      
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] =-1. ; 	      
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ; 	     
	POS_CUT_SKIN;
	
	/* nodes 5 6 8 */
	PE.NumNodes[0] = GE->NumNodes[4] ;
	PE.NumNodes[1] = GE->NumNodes[5] ;
	PE.NumNodes[2] = GE->NumNodes[7] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 1. ; 	      
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 6 7 8 */
	PE.NumNodes[0] = GE->NumNodes[5] ;
	PE.NumNodes[1] = GE->NumNodes[6] ;
	PE.NumNodes[2] = GE->NumNodes[7] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 1. ; 	      
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 1. ; 	      
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] = 1. ; 	     
	POS_CUT_SKIN;
	
	/* nodes 1 5 4 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[4] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] =-1. ; PE.v[1] =-1. ; PE.w[1] = 1. ;
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 5 8 4 */
	PE.NumNodes[0] = GE->NumNodes[4] ;
	PE.NumNodes[1] = GE->NumNodes[7] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 1. ;
	PE.u[1] =-1. ; PE.v[1] = 1. ; PE.w[1] = 1. ;
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 2 6 3 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[5] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 1. ;
	PE.u[2] = 1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 6 7 3 */
	PE.NumNodes[0] = GE->NumNodes[5] ;
	PE.NumNodes[1] = GE->NumNodes[6] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 1. ;
	PE.u[2] = 1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 5 6 1 */
	PE.NumNodes[0] = GE->NumNodes[4] ;
	PE.NumNodes[1] = GE->NumNodes[5] ;
	PE.NumNodes[2] = GE->NumNodes[0] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 1. ;
	PE.u[2] =-1. ; PE.v[2] =-1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 6 2 1 */
	PE.NumNodes[0] = GE->NumNodes[5] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[0] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] =-1. ;
	PE.u[2] =-1. ; PE.v[2] =-1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 8 7 4 */
	PE.NumNodes[0] = GE->NumNodes[7] ;
	PE.NumNodes[1] = GE->NumNodes[6] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] =-1. ; PE.v[0] = 1. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 1. ;
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 7 3 4 */
	PE.NumNodes[0] = GE->NumNodes[6] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[3] ;
	PE.u[0] = 1. ; PE.v[0] = 1. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] =-1. ;
	PE.u[2] =-1. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	break ;
	
      case PRISM :
	PE.Type = TRIANGLE ; PE.NbrNodes = 3 ;
	
	/* nodes 1 2 3 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] =-1. ;
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] =-1. ;
	POS_CUT_SKIN;
	
	/* nodes 4 5 6 */
	PE.NumNodes[0] = GE->NumNodes[3] ;
	PE.NumNodes[1] = GE->NumNodes[4] ;
	PE.NumNodes[2] = GE->NumNodes[5] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 1. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 1. ;
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 1 2 5 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] =-1. ;
	PE.u[2] = 1. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 1 4 5 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] = 1. ;
	PE.u[1] = 0. ; PE.v[1] = 0. ; PE.w[1] = 1. ;
	PE.u[2] = 1. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 1 3 6 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[5] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 0. ; PE.v[1] = 1. ; PE.w[1] =-1. ;
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 1 4 6 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[5] ;
	PE.u[0] = 0. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 0. ; PE.v[1] = 0. ; PE.w[1] = 1. ;
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 2 3 5 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] = 1. ; PE.v[0] = 0. ; PE.w[0] =-1. ;
	PE.u[1] = 0. ; PE.v[1] = 1. ; PE.w[1] =-1. ;
	PE.u[2] = 1. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;
	
	/* nodes 3 5 6 */
	PE.NumNodes[0] = GE->NumNodes[2] ;
	PE.NumNodes[1] = GE->NumNodes[4] ;
	PE.NumNodes[2] = GE->NumNodes[5] ;
	PE.u[0] = 0. ; PE.v[0] = 1. ; PE.w[0] =-1. ;
	PE.u[1] = 1. ; PE.v[1] = 0. ; PE.w[1] = 1. ;
	PE.u[2] = 0. ; PE.v[2] = 1. ; PE.w[2] = 1. ;      
	POS_CUT_SKIN;
	break ;
	
      case PYRAMID :
	PE.Type = TRIANGLE ; PE.NbrNodes = 3 ;
	
	/* nodes 1 2 5 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[1] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] =-1. ; PE.w[1] = 0. ;
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;

	/* nodes 2 3 5 */
	PE.NumNodes[0] = GE->NumNodes[1] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] = 1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;

	/* nodes 3 4 5 */
	PE.NumNodes[0] = GE->NumNodes[2] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] = 1. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;

	/* nodes 4 1 5 */
	PE.NumNodes[0] = GE->NumNodes[3] ;
	PE.NumNodes[1] = GE->NumNodes[0] ;
	PE.NumNodes[2] = GE->NumNodes[4] ;
	PE.u[0] =-1. ; PE.v[0] = 1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] =-1. ; PE.w[1] = 0. ;
	PE.u[2] = 0. ; PE.v[2] = 0. ; PE.w[2] = 1. ;
	POS_CUT_SKIN;

	/* nodes 1 3 2 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[2] ;
	PE.NumNodes[2] = GE->NumNodes[1] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] = 1. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	PE.u[2] = 1. ; PE.v[2] =-1. ; PE.w[2] = 0. ;
	POS_CUT_SKIN;

	/* nodes 1 4 3 */
	PE.NumNodes[0] = GE->NumNodes[0] ;
	PE.NumNodes[1] = GE->NumNodes[3] ;
	PE.NumNodes[2] = GE->NumNodes[2] ;
	PE.u[0] =-1. ; PE.v[0] =-1. ; PE.w[0] = 0. ;
	PE.u[1] =-1. ; PE.v[1] = 1. ; PE.w[1] = 0. ;
	PE.u[2] = 1. ; PE.v[2] = 1. ; PE.w[2] = 0. ;
	POS_CUT_SKIN;	
      }
    }
  }

}

#undef POS_CUT_FILL
#undef POS_CUT_SKIN





