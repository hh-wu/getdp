#define RCSID "$Id: FMM_Groups.c,v 1.5 2003-03-22 03:30:08 geuzaine Exp $"
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to "getdp@geuz.org".
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Numeric.h"
#include "Data_DefineE.h"
#include "CurrentData.h"
#include "Tools.h"
#include "Quadrature.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Data_FMM.h"
#include "F_FMM.h"
#include "Truncation.h"


void Geo_InitFMMData( struct FMMData *FMMData_P ){
 
  GetDP_Begin("Geo_InitFMMData") ;
  
  FMMData_P->Group = -1 ;
  FMMData_P->Xgc = FMMData_P->Ygc = FMMData_P->Zgc = 0;
  FMMData_P->Rmax = -1. ;
  FMMData_P->Element = NULL ;  
  
  GetDP_End;
}


void InitFMMmatrix( int i_Src, int i_Obs, struct FMMmat *FMMmat_P ){

  GetDP_Begin("InitFMMmatrix") ;

  FMMmat_P->Src = i_Src ;
  FMMmat_P->Obs = i_Obs ;
  
  FMMmat_P->FunctionSpaceIndexDof = FMMmat_P->FunctionSpaceIndexEqu = -1 ;
  FMMmat_P->TypeTimeDerivative = NODT_ ; /* Default: No time derivative */
 
  FMMmat_P->Pulsation = 1. ;
  
  FMMmat_P->NbrCom = 0 ;

  FMMmat_P->NumDof = FMMmat_P->NumEqu = NULL ;
  FMMmat_P->NumDofi = FMMmat_P->NumEqui = NULL ; /* Necessary for renumbering when complex system*/
 
  FMMmat_P->NG_L = FMMmat_P->FG_L = NULL ;
  FMMmat_P->Nd_L = NULL ;

  FMMmat_P->A_L = FMMmat_P->D_L = NULL;
  FMMmat_P->T   = NULL ;
  FMMmat_P->FctProd = NULL ;

  GetDP_End;
}


void Init_CurrentFMMData ( int Dimension, double k0 ){

  int i, i_Phi, i_The, NbrDir, Val_ns ;
  
  GetDP_Begin("Init_CurrentFMMData") ;

  if (k0 < 0){
    NbrDir = Current.FMM.NbrDir ;
  } 
 else {
    Val_ns = FMM_NbrSpectralDirections( k0 );
    NbrDir = (Dimension ==_2D) ? 2*Val_ns+1 : 2*Val_ns*Val_ns ;
    Current.FMM.NbrDir = NbrDir ; 
 }


  Current.FMM.N = (k0 < 0 && Dimension == _3D) ? (NbrDir-1)*(NbrDir+1): Current.FMM.NbrDir ; /* Laplace & GradLaplace 3D */

  if (Current.FMM.N > NBR_MAX_DIR)
    Msg(ERROR, "NbrDirections exceeds the NBR_MAX_DIR: %d", NBR_MAX_DIR ) ;

  Msg(INFO, "NbrDirections = %d N = %d", NbrDir, Current.FMM.N ) ;  
 
  Current.FMM.Type    = SCALAR ; /* Default */
  Current.FMM.NbrCom  = 1 ;
  Current.FMM.Flag_GF = 0 ;
  Current.FMM.Xgc = Current.FMM.Ygc = Current.FMM.Zgc = 0. ;

  if (k0 < 0){
    Current.FMM.Phi    = NULL ;
    Current.FMM.Theta  = NULL ;
    Current.FMM.Weight = NULL ;
    Current.FMM.Kdir   = NULL ;
  }    
  else
    switch(Dimension){
    case _2D :
      Current.FMM.Phi = (double*)Malloc(NbrDir*sizeof(double));
      for (i_Phi = 0 ; i_Phi < NbrDir ; i_Phi++)  
	Current.FMM.Phi[i_Phi] = i_Phi* 2.*PI/NbrDir;    
      break;
      
    case _3D : 
      Current.FMM.Phi = (double*)Malloc(2*Val_ns*sizeof(double));
      Current.FMM.Theta  = (double*)Malloc(Val_ns*sizeof(double));
      Current.FMM.Weight = (double*)Malloc(NbrDir*sizeof(double));
      Current.FMM.Kdir = (double**)Malloc(NbrDir*sizeof(double));
      for (i = 0 ; i < NbrDir ; i++)
	Current.FMM.Kdir[i] = (double*)Malloc(3*sizeof(double));
      
      for (i_Phi = 0 ; i_Phi < 2*Val_ns ; i_Phi++)  
	Current.FMM.Phi[i_Phi] = i_Phi*PI/Val_ns ;   
      
      GaussLegendre(-1., 1. , Current.FMM.Theta, Current.FMM.Weight, Val_ns);
      for (i_The = 0 ; i_The < Val_ns ; i_The++)  
	Current.FMM.Theta[i_The] = acos(Current.FMM.Theta[i_The]);    
      
      for (i_Phi = 0 ; i_Phi < 2 * Val_ns ; i_Phi++){
	for (i_The=0 ; i_The < Val_ns ; i_The++){
	  Current.FMM.Kdir[i_Phi * Val_ns + i_The ][0] =
	    sin(Current.FMM.Theta[i_The])*cos(Current.FMM.Phi[i_Phi]);
	  Current.FMM.Kdir[i_Phi * Val_ns + i_The ][1] =
	    sin( Current.FMM.Theta[i_The])*sin(Current.FMM.Phi[i_Phi]);
	  Current.FMM.Kdir[i_Phi * Val_ns  + i_The ][2] =
	    cos(Current.FMM.Theta[i_The]);
	  Current.FMM.Weight[i_Phi * Val_ns  + i_The] =
	    Current.FMM.Weight[i_The];
	}
      }
      break;
    default :
      Msg(ERROR, "Wrong Dimension for GroupsFMM: %d", Dimension ) ;
    }
  
  GetDP_End;
  
}



void Get_RmaxGroups(int i_Obs, int i_Src){

  int Obs_OR_Src, iSup, NbrFMMSupports ; 
  int i, NbrFMMGroups ;
  struct FMMData      *FMMData_P0, *FMMData_P ;
  struct FMMGroup      FMMGroup_S ;

  GetDP_Begin("Get_RmaxGroups") ;
  
  NbrFMMSupports = (i_Obs == i_Src) ? 1 : 2 ;

  for(iSup = 0 ; iSup < NbrFMMSupports ; iSup ++ ){
    Obs_OR_Src = (iSup == 0) ? i_Obs :i_Src ;
    List_Read(Problem_S.FMMGroup, Obs_OR_Src, &FMMGroup_S) ;

    NbrFMMGroups = List_Nbr(FMMGroup_S.List) ;
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
 
    for ( i = 0 ; i < NbrFMMGroups; i++){
      FMMData_P = FMMData_P0 + i;
      if(FMMData_P->Rmax == -1)
   	FMMData_P->Rmax = Geo_GetRmaxInFMMGroup(FMMData_P) ;   
    }/* NbrFMMGroups */
  }/*NbrFMMSupports */

  GetDP_End ;
}


double Geo_GetRmaxInFMMGroup( struct FMMData *FMMData_P){
 
  int iElm, i, NbrElmsGr, NumElmi ;
  double R , Rmax =0., Xgc, Ygc, Zgc ;
  double x1[NBR_MAX_NODES_IN_ELEMENT], y1[NBR_MAX_NODES_IN_ELEMENT], z1[NBR_MAX_NODES_IN_ELEMENT];
  struct Geo_Element *Element ;  

  GetDP_Begin("Geo_GetRmaxInFMMGroup");

  Xgc = FMMData_P->Xgc ;
  Ygc = FMMData_P->Ygc ;
  Zgc = FMMData_P->Zgc ;
  NbrElmsGr = List_Nbr(FMMData_P->Element) ; 
  
  for (iElm = 0 ; iElm < NbrElmsGr ; iElm++){
    List_Read(FMMData_P->Element, iElm, &NumElmi);
    Element =  Geo_GetGeoElementOfNum(NumElmi) ; 
    Geo_GetNodesCoordinates(Element->NbrNodes, Element->NumNodes,
			    x1, y1, z1);

    for (i = 0 ; i < Element->NbrNodes ; i++){    
      R = sqrt(SQU(x1[i]-Xgc)+ SQU(y1[i]-Ygc)+ SQU(z1[i]-Zgc)) ;  
      Rmax = ( R > Rmax ) ? R : Rmax ;
    }
  }

  GetDP_Return(Rmax) ;
}




void Get_GroupNeighbours( int i_FMMEqu, int Dimension ){

  int i_Obs, i_Src, Ndir ;
  int NbrGroupObs, NbrGroupSrc, i, j, Flag_Far = 0 ;
  double d, XSrc, YSrc, ZSrc, Dfar ;
  double **Mat =NULL ;
  struct FMMData      *FMMDataGObs_P0, *FMMDataGSrc_P0 ;
  struct FMMGroup      FMMGroup_S ;
  struct FMMmat       *FMMmat_P, *FMMmat_P0 ;
  List_T *NGi, *FGi, *Ndi ;

  GetDP_Begin("Geo_GroupNeighbours");


  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0) ;
  FMMmat_P  = FMMmat_P0 + i_FMMEqu ;
  i_Obs = FMMmat_P->Obs ;
  i_Src = FMMmat_P->Src ;

  Get_RmaxGroups(i_Obs, i_Src) ;
  
  i = 0 ; 
  
  while (i < i_FMMEqu) {
    if ( (FMMmat_P0+i)->Obs == i_Obs  &&  (FMMmat_P0+i)->Src == i_Src ) break ;
    i++;
  }
  

  if (i < i_FMMEqu ){ 
    FMMmat_P->NG_L = (FMMmat_P0+i)->NG_L ;   
    FMMmat_P->FG_L = (FMMmat_P0+i)->FG_L ;
    FMMmat_P->Nd_L = (FMMmat_P0+i)->Nd_L ;

    List_Read(Problem_S.FMMGroup, i_Src, &FMMGroup_S) ;
    NbrGroupSrc =  NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
    if (i_Src != i_Obs){
      List_Read(Problem_S.FMMGroup, i_Obs, &FMMGroup_S) ;
      NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
    }

    FMMmat_P->A_L = List_Create(NbrGroupSrc, 1, sizeof(double**)) ;
    for(i = 0 ; i < NbrGroupSrc ; i++) List_Add(FMMmat_P->A_L, &Mat) ;

    FMMmat_P->D_L = List_Create(NbrGroupObs, 1, sizeof(double**)) ;
    for(i = 0 ; i < NbrGroupObs ; i++) List_Add(FMMmat_P->D_L, &Mat) ;
  }
  else{
    List_Read(Problem_S.FMMGroup, i_Src, &FMMGroup_S) ;
    NbrGroupSrc =  NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
    FMMDataGSrc_P0 = FMMDataGObs_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
  
    if (i_Src != i_Obs){
      List_Read(Problem_S.FMMGroup, i_Obs, &FMMGroup_S) ;
      NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
      FMMDataGObs_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
    }

    FMMmat_P->NG_L = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;
    FMMmat_P->FG_L = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;
    FMMmat_P->Nd_L = List_Create(NbrGroupSrc, 1, sizeof(List_T*)) ;

    FMMmat_P->A_L = List_Create(NbrGroupSrc, 1, sizeof(double**)) ;
    for(i = 0 ; i < NbrGroupSrc ; i++) List_Add(FMMmat_P->A_L, &Mat) ;

    FMMmat_P->D_L = List_Create(NbrGroupObs, 1, sizeof(double**)) ;
    for(i = 0 ; i < NbrGroupObs ; i++) List_Add(FMMmat_P->D_L, &Mat) ;

  
    for ( i = 0 ; i < NbrGroupSrc; i++){
      XSrc = (FMMDataGSrc_P0+i)->Xgc ;
      YSrc = (FMMDataGSrc_P0+i)->Ygc ;
      ZSrc = (FMMDataGSrc_P0+i)->Zgc ;

      NGi = List_Create(5,  2, sizeof(int)) ;
      FGi = List_Create(10, 2, sizeof(int)) ;
      Ndi = List_Create(10, 2, sizeof(int)) ;

      for ( j = 0 ; j < NbrGroupObs; j++){
	d = sqrt(SQU((FMMDataGObs_P0+j)->Xgc-XSrc) + SQU((FMMDataGObs_P0+j)->Ygc-YSrc) +
		 SQU((FMMDataGObs_P0+j)->Zgc-ZSrc)) ;
       
	Dfar = Current.FMM.far;
	if(d < Dfar)
	  List_Add(NGi, &j) ;
	else{ 
	  List_Add(FGi, &j) ;
	  Ndir = FMM_SetTruncation((FMMDataGSrc_P0+i)->Rmax,(FMMDataGObs_P0+j)->Rmax, d, Dimension) ;
	  
	  List_Add(Ndi, &Ndir) ;
	  if (!Flag_Far) Flag_Far = 1;
	} 
      }/* NbrGroupObs */
      List_Add( FMMmat_P->NG_L, &NGi );
      List_Add( FMMmat_P->FG_L, &FGi );
      List_Add( FMMmat_P->Nd_L, &Ndi );
    }/* NbrGroupSrc */
  } 

  GetDP_End ;
}


void  Geo_SetCentroidCoordinates(int Num, double C[3]){
 
  int j ;
  double x[NBR_MAX_NODES_IN_ELEMENT], y[NBR_MAX_NODES_IN_ELEMENT], z[NBR_MAX_NODES_IN_ELEMENT];

  struct Geo_Element *Element ;  

  GetDP_Begin("Geo_SetCentroidCoordinates");
  
  C[0] = C[1] = C[2] = 0.;

  Element =  Geo_GetGeoElementOfNum(Num) ;    
  Geo_GetNodesCoordinates(Element->NbrNodes, Element->NumNodes,
			  x, y, z);

  for (j = 0;  j < Element->NbrNodes ; j++){
    C[0] += x[j] ;
    C[1] += y[j] ;
    C[2] += z[j] ;
  }
  
  C[0] /= Element->NbrNodes ;
  C[1] /= Element->NbrNodes ;
  C[2] /= Element->NbrNodes ;
  
  GetDP_End ;
}


void ReSet_FMMGroupCenters( ){

  int i, NbrGroups, iG, NbrElms, iElm, NumElm ;
  double Centroid[3];
  struct FMMGroup     FMMGroup_S ;
  struct FMMData     *FMMDataG_P0, *FMMDataG_P ;


  GetDP_Begin("ReSet_FMMGroupCenters");
  
  for( i = 0 ; i < List_Nbr(Problem_S.FMMGroup); i++){
    List_Read(Problem_S.FMMGroup, i, &FMMGroup_S) ;
    NbrGroups = List_Nbr(FMMGroup_S.List) ;
    FMMDataG_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
    
    for( iG = 0 ; iG < NbrGroups; iG++){
      FMMDataG_P =  FMMDataG_P0 + iG ;
      FMMDataG_P->Xgc =  FMMDataG_P->Ygc = FMMDataG_P->Zgc = 0. ;      
      NbrElms = List_Nbr(FMMDataG_P->Element) ;

      for( iElm = 0 ; iElm < NbrElms ; iElm++){
	List_Read( FMMDataG_P->Element, iElm, &NumElm) ;
	Geo_SetCentroidCoordinates(NumElm, Centroid);
	FMMDataG_P->Xgc += Centroid[0] ;  
	FMMDataG_P->Ygc += Centroid[1] ;
	FMMDataG_P->Zgc += Centroid[2] ;
      }/* iElm NbrElms */

      FMMDataG_P->Xgc /= NbrElms ;  
      FMMDataG_P->Ygc /= NbrElms ;
      FMMDataG_P->Zgc /= NbrElms ;
    }/* iG FMMGroups */

  }/* i  Getdp Groups affected by FMM */

  GetDP_End;

}


void ReGenerate_FMMGroupNeighbours( ){

  int i_Obs, i_Src, Ndir ;
  int NbrGroupObs, NbrGroupSrc, i, j, NbrFMMEqu, i_FMMEqu  ;
  double d, XSrc, YSrc, ZSrc, Dfar ;
  struct FMMData      *FMMDataGObs_P0, *FMMDataGSrc_P0 ;
  struct FMMGroup      FMMGroup_S ;
  struct FMMmat       *FMMmat_P, *FMMmat_P0 ;
  List_T *NGi, *FGi, *Ndi ;


  GetDP_Begin("ReGenerate_FMMGroupNeighbours");

  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0) ;
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix);
  Dfar = Current.FMM.far ;

  /* With movement neighbouring and far groups have to be recalculated */

  for (i_FMMEqu = 0 ; i_FMMEqu < NbrFMMEqu ; i_FMMEqu++){
    FMMmat_P  = FMMmat_P0 + i_FMMEqu ;
    List_Reset(FMMmat_P->NG_L);
    List_Reset(FMMmat_P->FG_L);
    List_Reset(FMMmat_P->Nd_L);
  }
  
  for (i_FMMEqu = 0 ; i_FMMEqu < NbrFMMEqu ; i_FMMEqu++){
    FMMmat_P  = FMMmat_P0 + i_FMMEqu ;  
    i_Obs = FMMmat_P->Obs ;
    i_Src = FMMmat_P->Src ;
    i = 0 ; while (i < i_FMMEqu) { if ((FMMmat_P0+i)->Obs == i_Obs  &&  (FMMmat_P0+i)->Src == i_Src) break ;i++;}

    if (i < i_FMMEqu ){ 
      FMMmat_P->NG_L = (FMMmat_P0+i)->NG_L ;   
      FMMmat_P->FG_L = (FMMmat_P0+i)->FG_L ;
      FMMmat_P->Nd_L = (FMMmat_P0+i)->Nd_L ;

      List_Read(Problem_S.FMMGroup, i_Src, &FMMGroup_S) ;
      NbrGroupSrc =  NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
      if (i_Src != i_Obs){
	List_Read(Problem_S.FMMGroup, i_Obs, &FMMGroup_S) ;
	NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
      }     
    }
    else{
      List_Read(Problem_S.FMMGroup, i_Src, &FMMGroup_S) ;
      NbrGroupSrc =  NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
      FMMDataGSrc_P0 = FMMDataGObs_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
      
      if (i_Src != i_Obs){
	List_Read(Problem_S.FMMGroup, i_Obs, &FMMGroup_S) ;
	NbrGroupObs = List_Nbr(FMMGroup_S.List) ;
	FMMDataGObs_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
      }

      for ( i = 0 ; i < NbrGroupSrc; i++){
	XSrc = (FMMDataGSrc_P0+i)->Xgc ;
	YSrc = (FMMDataGSrc_P0+i)->Ygc ;
	ZSrc = (FMMDataGSrc_P0+i)->Zgc ;
	
	NGi = List_Create(5,  2, sizeof(int)) ;
	FGi = List_Create(10, 2, sizeof(int)) ;
	Ndi = List_Create(10, 2, sizeof(int)) ;

	for ( j = 0 ; j < NbrGroupObs; j++){
	  d = sqrt(SQU((FMMDataGObs_P0+j)->Xgc-XSrc) + SQU((FMMDataGObs_P0+j)->Ygc-YSrc) +
		   SQU((FMMDataGObs_P0+j)->Zgc-ZSrc)) ;
	  
	  if(d < Dfar) List_Add(NGi, &j) ;
	  else {
	    List_Add(FGi, &j) ;

	    Ndir = FMM_SetTruncation((FMMDataGSrc_P0+i)->Rmax,(FMMDataGObs_P0+j)->Rmax, d, _2D) ;
	    List_Add(Ndi, &Ndir) ;
	  }
	}/* NbrGroupObs */

	List_Add( FMMmat_P->NG_L, &NGi );
	List_Add( FMMmat_P->FG_L, &FGi );
	List_Add( FMMmat_P->Nd_L, &Ndi );
      }/* NbrGroupSrc */
    }
  }/* i_FMMEqu */

  GetDP_End;

}


void  Geo_SetXYZMinMaxInElement(int Num, double *Xmin, double *Ymin, double *Zmin,
				double *Xmax, double *Ymax, double *Zmax){
 
  int j ;
  double x[NBR_MAX_NODES_IN_ELEMENT], y[NBR_MAX_NODES_IN_ELEMENT], z[NBR_MAX_NODES_IN_ELEMENT];

  struct Geo_Element *Element ;  

  GetDP_Begin("Geo_SetXYZMinMaxInElement");

  Element =  Geo_GetGeoElementOfNum(Num) ;    
  Geo_GetNodesCoordinates(Element->NbrNodes, Element->NumNodes,
			  x, y, z);

  for (j = 0;  j < Element->NbrNodes ; j++){
    *Xmax = (*Xmax >= x[j]) ? *Xmax : x[j] ;
    *Ymax = (*Ymax >= y[j]) ? *Ymax : y[j] ;
    *Zmax = (*Zmax >= z[j]) ? *Zmax : z[j] ;
    *Xmin = (*Xmin <= x[j]) ? *Xmin : x[j] ;
    *Ymin = (*Ymin <= y[j]) ? *Ymin : y[j] ;
    *Zmin = (*Zmin <= z[j]) ? *Zmin : z[j] ;
  }
  
  GetDP_End ;
}



double Geo_SetMaxEdgeLength(int Num){
 
  int j ;
  double D = 0. ,Dmax =0. ;
  double x[NBR_MAX_NODES_IN_ELEMENT], y[NBR_MAX_NODES_IN_ELEMENT], z[NBR_MAX_NODES_IN_ELEMENT];

  struct Geo_Element *Element ;  


  GetDP_Begin("Geo_SetMaxEdgeLength");

  Element =  Geo_GetGeoElementOfNum(Num) ;    
  Geo_GetNodesCoordinates(Element->NbrNodes, Element->NumNodes,
			  x, y, z);
  
  for (j = 0;  j < Element->NbrNodes ; j++){
    if (j+1<Element->NbrNodes)
      D = sqrt(SQU(x[j]-x[j+1])+ SQU(y[j]-y[j+1])+ SQU( z[j]-z[j+1])) ;
  
    Dmax = ( D > Dmax ) ? D : Dmax ;
  }
  
  GetDP_Return(Dmax) ;
}


double Geo_GetMaxDistance2Elms(int Numi, int Numj){
 
  int i, j ;
  double D = 0. ,Dmax =0. ;
  double x1[NBR_MAX_NODES_IN_ELEMENT], y1[NBR_MAX_NODES_IN_ELEMENT], z1[NBR_MAX_NODES_IN_ELEMENT];
  double x2[NBR_MAX_NODES_IN_ELEMENT], y2[NBR_MAX_NODES_IN_ELEMENT], z2[NBR_MAX_NODES_IN_ELEMENT];

  struct Geo_Element *Elementi, *Elementj ;  

  GetDP_Begin("Geo_GetMaxDistance2Elms");

  Elementi =  Geo_GetGeoElementOfNum(Numi) ;    
  Geo_GetNodesCoordinates(Elementi->NbrNodes, Elementi->NumNodes,
			  x1, y1, z1);

  Elementj =  Geo_GetGeoElementOfNum(Numj) ;    
  Geo_GetNodesCoordinates(Elementj->NbrNodes, Elementj->NumNodes,
			  x2, y2, z2);
  
  for (i = 0;  i < Elementi->NbrNodes ; i++)
    for (j = 0;  j < Elementj->NbrNodes ; j++){
      D = sqrt(SQU(x1[i]-x2[j])+ SQU(y1[i]-y2[j])+ SQU(z1[i]-z2[j])) ;  
      Dmax = ( D > Dmax ) ? D : Dmax ;
    }
  
  GetDP_Return(Dmax) ;
}



int FMM_NbrSpectralDirections( double k0 ){

  int i, j, i_Support, NbrInSupport, NbrGroups, NbrElmsGroupi ;
  int NumElmj, NumElmjp ;
  double D = 1., Daux, Centroidj[3], Centroidjp[3] ; 
  struct FMMData  *FMMData_P0 ;
  struct FMMGroup  FMMGroup_S ;

  GetDP_Begin("FMM_NbrSpectralDirections");

  NbrInSupport = List_Nbr(Problem_S.FMMGroup) ;

  for( i_Support = 0 ; i_Support < NbrInSupport ; i_Support++ ){
    List_Read(Problem_S.FMMGroup, i_Support, &FMMGroup_S) ;
    NbrGroups = List_Nbr(FMMGroup_S.List) ;
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;

    for(i = 0; i < NbrGroups; i++ ){
      NbrElmsGroupi = List_Nbr((FMMData_P0+i)->Element) ;
      
      if (NbrElmsGroupi==1){ 
	List_Read((FMMData_P0+i)->Element, 0, &NumElmj);
	Daux = Geo_SetMaxEdgeLength(NumElmj);
      }
      else{
	for (j = 0 ; j < NbrElmsGroupi ; j++){
	  if ((j+1) < NbrElmsGroupi){
	    List_Read((FMMData_P0+i)->Element, j, &NumElmj);
	    List_Read((FMMData_P0+i)->Element, j+1, &NumElmjp);
	    
	    Geo_SetCentroidCoordinates(NumElmj, Centroidj);
	    Geo_SetCentroidCoordinates(NumElmjp, Centroidjp);
	    
	    Daux = sqrt(SQU(Centroidj[0]-Centroidjp[0])+ SQU(Centroidj[1]-Centroidjp[1])+ SQU(Centroidj[2]-Centroidjp[2])) ;       
	  }
	  D = (Daux>D) ? Daux : D ;
	}
      }
      D = (Daux>D) ? Daux : D ;
    }    
  }
  
  Msg(INFO,"D_FMM = %.8f", D);
  
  GetDP_Return( (int)ceil( k0*D+5.*log(k0*D+PI) ) );
}




int FMM_SetTruncation( double Rsrc, double Robs, double D, int Dimension){

  int NbrDir, i, j, k, exp ;
  double Precision ; 

  GetDP_Begin("FMM_SetTruncation");

  Precision = Current.FMM.Precision ;
  exp = - (int)floor(log10(Precision)) ;

  i = (int)floor(Rsrc/D/0.05)-1 ; 
  j = (int)floor(Robs/D/0.05)-1 ;
  if (i<0) i = 0 ;
  if (j<0) j = 0 ;
  k = ((i + j * 7)>48)?48: i+j*7 ;


  if (Dimension == _2D){
    switch(exp){
    case 3 :  NbrDir = t2D1e_3[k] ; break ;  
    case 4 :  NbrDir = t2D1e_4[k] ; break ;  
    case 5 :  NbrDir = t2D1e_5[k] ; break ;  
    case 6 :  NbrDir = t2D1e_6[k] ; break ;  
    case 7 :  NbrDir = t2D1e_7[k] ; break ;  
    case 8 :  NbrDir = t2D1e_8[k] ; break ;  
    case 9 :  NbrDir = t2D1e_9[k] ; break ;
    default: 
      Msg(ERROR, "Precision for FMM truncation can only be: 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9");
    }
    if (NbrDir > 11){ if (Flag_FMM == 1) Msg(WARNING,"NbrDir = %d changed to 11 for memory requirements", NbrDir) ; NbrDir = 11 ;}
  }
  else{
    switch(exp){
    case 3 :  NbrDir = t3D1e_3[k] ; break ;  
    case 4 :  NbrDir = t3D1e_4[k] ; break ;  
    case 5 :  NbrDir = t3D1e_5[k] ; break ;  
    case 6 :  NbrDir = t3D1e_6[k] ; break ;  
    case 7 :  NbrDir = t3D1e_7[k] ; break ;  
    case 8 :  NbrDir = t3D1e_8[k] ; break ;  
    case 9 :  NbrDir = t3D1e_9[k] ; break ;
    default: 
      Msg(ERROR, "Precision for FMM truncation can only be: 1e-3, 1e-4, 1e-5, 1e-6, 1e-7, 1e-8, 1e-9");
  }
    if (NbrDir > 15){ 
      if (Flag_FMM == 1) 
	Msg(WARNING,"NbrDir = %d changed to 15 for memory requirements Rsrc/D %g Robs/D %g", NbrDir,Rsrc/D,Robs/D) ; NbrDir = 15 ;}
  }
 

  if (Flag_FMM == 2)  
    NbrDir = (NbrDir > Current.FMM.NbrDir) ? Current.FMM.NbrDir : NbrDir ; 
  else
    Current.FMM.NbrDir = (NbrDir>Current.FMM.NbrDir) ? NbrDir : Current.FMM.NbrDir ;
  
  GetDP_Return(NbrDir);
}


int  NeighbouringGroups( int FMMGroupEObs, int FMMGroupESrc ){

  int iFMMEqu, NbrFMMEqu, FMMObs, FMMSrc, NbrNG=0, i, *NG ;
  struct FMMmat  *FMMmat_P0 ;
  List_T *NG_L ;

  GetDP_Begin("NeigbouringGroups");

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0) ;
  
  iFMMEqu = 0 ; 
  while (iFMMEqu<NbrFMMEqu && ((FMMmat_P0+iFMMEqu)->Obs != Current.FMM.Obs || (FMMmat_P0+iFMMEqu)->Src != Current.FMM.Src)) 
    iFMMEqu++ ;

  if ( iFMMEqu == NbrFMMEqu )  Msg(ERROR, "Wrong Supports for FMM: Source %d Observation %d", Current.FMM.Src, Current.FMM.Obs) ; 

  FMMObs = (FMMmat_P0+iFMMEqu)->Obs ;
  FMMSrc = (FMMmat_P0+iFMMEqu)->Src ;

  if (FMMObs == FMMSrc &&  FMMGroupEObs == FMMGroupESrc) GetDP_Return(1) ;


  List_Read((FMMmat_P0+iFMMEqu)->NG_L, FMMGroupESrc, &NG_L);
  NbrNG = List_Nbr(NG_L) ;  

  NG = (int*)(NG_L->array) ;   
  
  for ( i = 0 ; i < NbrNG ; i++ )
    if (NG[i] == FMMGroupEObs) GetDP_Return(1) ; 
     
  GetDP_Return(0) ;
}



int  Get_NextElementSourceNeighbour( struct Element      * Element ) {

  struct Element * ElementSource ;

  GetDP_Begin("Get_NextElementSourceNeighbour");
  
  ElementSource = Element->ElementSource ;

  while (Get_NextElementSource(ElementSource))
    if (NeighbouringGroups(Element->FMMGroup, ElementSource->FMMGroup)) GetDP_Return(1) ;
  
  GetDP_Return(0) ;
}


int  Get_NextElementSourceInGroup(struct Element *Element) {
  struct Element * ElementSource ;

  GetDP_Begin("Get_NextElementSourceInGroup");

  ElementSource = Element->ElementSource ;
  while (Get_NextElementSource(ElementSource))
    if (ElementSource->FMMGroup == Element->FMMGroup) GetDP_Return(1) ;  
  GetDP_Return(0) ;
}



void  Geo_CreateFMMGroup( int InSupport, struct GeoData *GeoData_P, double k0 ){

  int NbrGroupsInSupport, iGroup, NbrFMMGroupsInRegion ;
  int NbrElms, NbrElmsInRegion, NbrElmsInSupport ;
  int j, k, l, m, FoundHome, iFMMGroup, iElm ;
  int ***NbrElmsDiv, ****ElmsDiv, Dimension ;
  double  Xmax, Xmin, Ymax, Ymin, Zmax, Zmin, l0 ;
  int NbrDivX = 1, NbrDivY = 1, NbrDivZ = 1 ;
  double  x1, x2, y1, y2, z1, z2, Centroid[3], tol ;
  struct Value DivXYZ ;
  struct Geo_Element *Elements_P0 ;
  struct FMMData FMMData_S ;
  struct FMMGroup FMMGroup_S ;
  List_T * FMMGroup_L ;  


  GetDP_Begin("Geo_CreateFMMGroup");

  Dimension = (int)GeoData_P->Dimension ;    

  tol = 1e-6;

  if (!List_Nbr(Problem_S.FMMGroup)){
    if(k0 > 0){
      l0 = k0/TWO_PI ; /* Wavelength */
      Msg(INFO,"Helmholtz %dD, Wavelength = %g", Dimension, l0);
    }  
    else{
      Msg(INFO,"Laplace %dD", Dimension);
    }
  }

  NbrElms = List_Nbr(GeoData_P->Elements) ;
  Elements_P0 =  (struct Geo_Element*)List_Pointer(GeoData_P->Elements, 0) ;

  FMMGroup_L = List_Create (10, 10, sizeof(struct FMMData)) ; 
  
  NbrElmsInSupport = 0 ;  
  NbrGroupsInSupport = List_Nbr(((struct Group *) List_Pointer(Problem_S.Group, InSupport))->InitialList ); 

  iFMMGroup = 0 ;
  
  for (iGroup = 0 ; iGroup < NbrGroupsInSupport ; iGroup++){
    List_Read(((struct Group *) List_Pointer(Problem_S.Group, InSupport))->InitialList, iGroup, &Current.Region) ;    
    Get_ValueOfExpressionByIndex(Current.FMM.DivXYZIndex, NULL, 0., 0., 0., &DivXYZ) ;
    NbrDivX = (int)DivXYZ.Val[0] ;
    NbrDivY = (int)DivXYZ.Val[1] ;
    NbrDivZ = (int)DivXYZ.Val[2] ;
  
    Msg(INFO,"Region = %d DivX = %d  DivY = %d  DivZ = %d", Current.Region, NbrDivX, NbrDivY, NbrDivZ) ; 
    
    NbrElmsInRegion = 0 ; 
    Xmax = Ymax = Zmax = Xmin = Ymin = Zmin = 0. ;

    for(iElm = 0 ; iElm < NbrElms ; iElm++){
      if((Elements_P0+iElm)->Region == Current.Region){
	NbrElmsInRegion++ ; 
	Geo_SetXYZMinMaxInElement((Elements_P0+iElm)->Num, &Xmin, &Ymin, &Zmin, &Xmax, &Ymax, &Zmax ) ;      
      }      
    }

    NbrElmsInSupport += NbrElmsInRegion ; 

    NbrElmsDiv = (int ***)Malloc(NbrDivX*sizeof(int**));
    for (j = 0 ; j < NbrDivX ; j++){
      NbrElmsDiv[j] = (int **)Calloc(NbrDivY, sizeof(int*));
      for (k = 0 ; k < NbrDivY ; k++)
	NbrElmsDiv[j][k] = (int *)Calloc(NbrDivZ, sizeof(int));
    }
    
    ElmsDiv = (int ****)Malloc(NbrDivX*sizeof(int***));
    for (j = 0 ; j < NbrDivX ; j++){
      ElmsDiv[j] = (int ***)Malloc(NbrDivY*sizeof(int**)); 
      for (k = 0 ; k < NbrDivY ; k++){
	ElmsDiv[j][k] = (int **)Malloc(NbrDivZ*sizeof(int*));
	for (l = 0 ; l < NbrDivZ ; l++)
	  ElmsDiv[j][k][l] = (int *)Malloc(sizeof(int));
      }
    }

    for (iElm = 0 ; iElm < NbrElms ; iElm++){ 
      FoundHome = 0;
      
      for (j = 0 ; j < NbrDivX ; j++){
	for (k = 0 ; k < NbrDivY ; k++){
	  for (l = 0 ; l < NbrDivZ ; l++){
	    x1 = -tol+Xmin +(double)j*(Xmax-Xmin)/(double)NbrDivX;
	    x2 =  tol+Xmin +(double)(j+1)*(Xmax-Xmin)/(double)NbrDivX;
	    y1 = -tol+Ymin +(double)k*(Ymax-Ymin)/(double)NbrDivY;
	    y2 =  tol+Ymin +(double)(k+1)*(Ymax-Ymin)/(double)NbrDivY;
	    z1 = -tol+Zmin +(double)l*(Zmax-Zmin)/(double)NbrDivZ;
	    z2 =  tol+Zmin +(double)(l+1)*(Zmax-Zmin)/(double)NbrDivZ;

	    if( Current.Region == (Elements_P0+iElm)->Region ){
	      Geo_SetCentroidCoordinates((Elements_P0+iElm)->Num, Centroid);
	      
	      if (x1 <= Centroid[0] && Centroid[0] <= x2 &&
		  y1 <= Centroid[1] && Centroid[1] <= y2 &&
		  z1 <= Centroid[2] && Centroid[2] <= z2 ){
		if(!NbrElmsDiv[j][k][l]){
		  NbrElmsDiv[j][k][l] = 1;
		  ElmsDiv[j][k][l][0] = iElm ;
		} else {
		  NbrElmsDiv[j][k][l] += 1;
		  ElmsDiv[j][k][l] = (int *)realloc(ElmsDiv[j][k][l], NbrElmsDiv[j][k][l]*sizeof(int));
		  ElmsDiv[j][k][l][NbrElmsDiv[j][k][l]-1] = iElm;	    
		}
		FoundHome = 1; break;
	      }
	    }/* if Region */
	    if(FoundHome)break;
	  }
	  if(FoundHome)break;
	}
	if(FoundHome)break;
      }
      if(!FoundHome && (Current.Region == (Elements_P0+iElm)->Region)) Msg(WARNING,"Element %d has not been assigned to a FMMGroup", iElm);
    }/* Elms NbrElms */ 

    NbrFMMGroupsInRegion = 0;
    for (j = 0 ; j < NbrDivX ; j++)
      for (k = 0 ; k < NbrDivY ; k++)
	for (l = 0 ; l < NbrDivZ ; l++)
	  if(NbrElmsDiv[j][k][l]){
	    Geo_InitFMMData(&FMMData_S) ;
	    FMMData_S.Element = List_Create(NbrElmsDiv[j][k][l], 1, sizeof(int)) ;
	    for(m = 0 ; m < NbrElmsDiv[j][k][l] ; m++){
	      List_Add(FMMData_S.Element, &(Elements_P0 + ElmsDiv[j][k][l][m])->Num) ;
	      Geo_SetCentroidCoordinates((Elements_P0+ElmsDiv[j][k][l][m])->Num, Centroid) ;

	      FMMData_S.Xgc += Centroid[0] ;
	      FMMData_S.Ygc += Centroid[1] ;
	      FMMData_S.Zgc += Centroid[2] ;
	      
	      (Elements_P0 + ElmsDiv[j][k][l][m])->FMMGroup = iFMMGroup ;
	    }	
	    
	    FMMData_S.Group = iFMMGroup;  
	    FMMData_S.Xgc /= NbrElmsDiv[j][k][l];
	    FMMData_S.Ygc /= NbrElmsDiv[j][k][l];
	    FMMData_S.Zgc /= NbrElmsDiv[j][k][l];
	    List_Add(FMMGroup_L, &FMMData_S) ;
	    
	    iFMMGroup +=1 ;
	    NbrFMMGroupsInRegion += 1 ;
	  }/* if( NbrElmsDiv[j][k][l] ) */    
  
    
    Free(NbrElmsDiv);
    Free(ElmsDiv);

    Msg(INFO,"SupportIndex = %d  Region = %d  NbrElmsInRegion = %d  NbrFMMGroupsInRegion = %d",
	InSupport, Current.Region, NbrElmsInRegion, NbrFMMGroupsInRegion) ; 
  }/* iGroup NbrGroupInSuppport*/
 
  Msg(INFO,"SupportIndex = %d  NbrElmsInSupport = %d  NbrFMMGroupsInSupport = %d",
      InSupport, NbrElmsInSupport, iFMMGroup) ; 

  FMMGroup_S.InIndex = InSupport ;
  FMMGroup_S.List = FMMGroup_L ;
  List_Add(Problem_S.FMMGroup, &FMMGroup_S ); 


  GetDP_End ;
}
  


void Get_InFMMGroupList( int Index_Formulation, struct GeoData *GeoData_P ){

  int  i_EquTerm, Nbr_EquationTerm, i_Observation, i_Source, FlagError, DIM ;
  double k0 = -1. ;
  struct Formulation    * Formulation_P ;
  struct EquationTerm   * EquationTerm_P0, * EquationTerm_P ;
  struct DefineQuantity * DefineQuantityDof_P, * DefineQuantity_P0 ;
  struct FMMmat         * FMMmat_P, FMMmat_S ;
  List_T *InIndex ;

  GetDP_Begin("Get_InFMMGroupList") ;

  Formulation_P = (struct Formulation*)List_Pointer(Problem_S.Formulation, Index_Formulation) ;
  EquationTerm_P0 = (struct EquationTerm*)List_Pointer(Formulation_P->Equation, 0) ;
  Nbr_EquationTerm = List_Nbr(Formulation_P->Equation) ;
  DefineQuantity_P0 = (struct DefineQuantity*)List_Pointer(Formulation_P->DefineQuantity, 0) ;

  InIndex = List_Create( 1, 1, sizeof(int)) ;

  Problem_S.FMMGroup = List_Create (1, 1, sizeof(struct FMMGroup)) ;

  Current.DofData->FMM_Matrix = NULL ;
  
  for (i_EquTerm = 0 ; i_EquTerm < Nbr_EquationTerm ; i_EquTerm++) {
    EquationTerm_P = EquationTerm_P0 + i_EquTerm ;
    EquationTerm_P->Case.LocalTerm.FMMObservation =
      EquationTerm_P->Case.LocalTerm.FMMSource = EquationTerm_P->Case.LocalTerm.iFMMEqu = -1 ;

    if ( EquationTerm_P->Type == GALERKIN && EquationTerm_P->Case.LocalTerm.Term.NbrQuantityIndex > 1 ) {
      DefineQuantityDof_P = DefineQuantity_P0 + EquationTerm_P->Case.LocalTerm.Term.DefineQuantityIndexDof ;
      if( DefineQuantityDof_P->Type==INTEGRALQUANTITY){

	if(DefineQuantityDof_P->IntegralQuantity.FunctionForFMM.NbrParameters == 2)
	  k0 = DefineQuantityDof_P->IntegralQuantity.FunctionForFMM.Para[1] ;/* Helmoltz Case */
	DIM = (int)DefineQuantityDof_P->IntegralQuantity.FunctionForFMM.Para[0] ;

	if( List_PQuery(InIndex, &EquationTerm_P->Case.LocalTerm.InIndex, fcmp_int) == NULL ){
	  List_Add( InIndex, &EquationTerm_P->Case.LocalTerm.InIndex ) ;
	  Geo_CreateFMMGroup( EquationTerm_P->Case.LocalTerm.InIndex, GeoData_P, k0) ;
	}

	if( List_PQuery(InIndex, &DefineQuantityDof_P->IntegralQuantity.InIndex, fcmp_int) == NULL ){
	  List_Add( InIndex, &DefineQuantityDof_P->IntegralQuantity.InIndex ) ;
	  Geo_CreateFMMGroup( DefineQuantityDof_P->IntegralQuantity.InIndex, GeoData_P, k0 ) ;
	}	

	if (Current.DofData->FMM_Matrix == NULL)
	  Current.DofData->FMM_Matrix = List_Create(1, 1, sizeof(struct FMMmat)) ;
	
	i_Source = EquationTerm_P->Case.LocalTerm.FMMSource = 
	  List_ISearch(InIndex, &DefineQuantityDof_P->IntegralQuantity.InIndex, fcmp_int) ;
	i_Observation = EquationTerm_P->Case.LocalTerm.FMMObservation = 
	  List_ISearch(InIndex, &EquationTerm_P->Case.LocalTerm.InIndex, fcmp_int) ;

	InitFMMmatrix(i_Source, i_Observation, &FMMmat_S) ;
	List_Add( Current.DofData->FMM_Matrix, &FMMmat_S) ;
 	EquationTerm_P->Case.LocalTerm.iFMMEqu = List_Nbr(Current.DofData->FMM_Matrix)-1 ;
	
	Get_GroupNeighbours( EquationTerm_P->Case.LocalTerm.iFMMEqu, DIM ) ;

	FMMmat_P = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, EquationTerm_P->Case.LocalTerm.iFMMEqu) ;

	if (DIM == _2D)
	  Get_FunctionForFunction( FMMProd_Function2D, DefineQuantityDof_P->IntegralQuantity.FunctionForFMM.Fct,
				   &FlagError, &(FMMmat_P->FctProd) ) ;
	else
	  Get_FunctionForFunction( FMMProd_Function3D, DefineQuantityDof_P->IntegralQuantity.FunctionForFMM.Fct,
				   &FlagError, &(FMMmat_P->FctProd) ) ;

	FMMmat_P->GFx = &(DefineQuantityDof_P->IntegralQuantity.FunctionForFMM) ;

	
      }/* Quantity */
    }/* If Galerkin */
  }/* Equation_Term */

  
  Init_CurrentFMMData ((int)((GeoData_P)->Dimension), k0 ) ;
  List_Delete(InIndex);

  GetDP_End ; 

}















