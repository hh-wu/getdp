#define RCSID "$Id: Print_FMM.c,v 1.8 2004-01-19 16:51:13 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "GeoData.h"
#include "Numeric.h"
#include "Data_Passive.h"
#include "CurrentData.h"
#include "Tools.h"
#include "ExtendedGroup.h"
#include "Data_FMM.h"

int Get_GmshElementType(int Type) ;

void  Geo_WriteFileFMMGroups(struct GeoData *GeoData_P, char * FileName){

  int  i, j, i_Support, NbrInSupport, NbrGroups, NbrElmsGroupi ;
  int *ElmsGroupi_P0 ;
  struct Geo_Element *Element_P ;
  struct FMMData  *FMMData_P0 ;
  struct FMMGroup  FMMGroup_S ;

  FILE * file ;

  GetDP_Begin("Geo_WriteFileFMMGroups");

  Msg(INFO, "Writing FMMGroups File .pos : '%s' ", FileName );
  file = fopen(FileName, "w");

  NbrInSupport = List_Nbr(Problem_S.FMMGroup) ;

  for( i_Support = 0 ; i_Support < NbrInSupport ; i_Support++ ){
    List_Read(Problem_S.FMMGroup, i_Support, &FMMGroup_S) ;
    NbrGroups = List_Nbr(FMMGroup_S.List);
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;

    fprintf(file, "View \"FMM Support %d (%d)\" { \n", i_Support, NbrGroups ) ;
    
    for( i = 0 ; i < NbrGroups ; i++ ){
      NbrElmsGroupi =  List_Nbr((FMMData_P0+i)->Element) ;
      ElmsGroupi_P0 = (int*)List_Pointer((FMMData_P0+i)->Element,0) ;
      for( j = 0 ; j < NbrElmsGroupi ; j++){
	Element_P = Geo_GetGeoElementOfNum(ElmsGroupi_P0[j]);
	switch(Element_P->Type) {
	case POINT : 
	  fprintf(file, "SP( %f , %f , %f ) { %d };\n",
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->z, i); break;	  
	case LINE :
	  fprintf(file, "SL( %f , %f , %f , %f , %f , %f ) { %d ,%d };\n",
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->z,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->z, i, i); break;
	case TRIANGLE : 
	  fprintf(file, "ST( %f , %f , %f , %f , %f , %f, %f , %f , %f ) { %d, %d ,%d };\n",
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->z,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->z,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[2])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[2])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[2])->z, i, i, i); break;
	case QUADRANGLE : 
	  fprintf(file, "SQ( %f , %f , %f , %f , %f , %f, %f , %f , %f, %f , %f , %f) { %d, %d ,%d, %d };\n",
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[0])->z,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[1])->z,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[2])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[2])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[2])->z,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[3])->x,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[3])->y,
		  Geo_GetGeoNodeOfNum(Element_P->NumNodes[3])->z, i, i, i, i); break;
	default :  Msg(ERROR, "Wrong Type of Element for FMM groups"); break;   
	}
      }
    } 
    fprintf(file, "};\n");    
  }

  fclose(file);

  GetDP_End ;
}
  


void  Geo_WriteFileFMMGroupsCenter( char * FileName ){

  int NbrInSupport, i_Support, NbrGroups, i ;
  struct FMMData *FMMData_P0 ;
  struct FMMGroup  FMMGroup_S ;
  List_T *FMMGroup_L ;  
 
  FILE * file ;


  GetDP_Begin("Geo_WriteFileFMMGroupsCenter");

  Msg(INFO, "Writing FMMGroupsCenters File .pos : '%s' ", FileName );
  file = fopen(FileName, "w");

  NbrInSupport = List_Nbr(Problem_S.FMMGroup) ;
  for( i_Support = 0 ; i_Support < NbrInSupport ; i_Support++ ){
    List_Read(Problem_S.FMMGroup, i_Support, &FMMGroup_S) ;
    FMMGroup_L = FMMGroup_S.List ;
    NbrGroups = List_Nbr(FMMGroup_L);
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_L,0) ;

    fprintf(file, "View \"FMMCenters Support %d \" { \n", i_Support);

    for (i=0 ; i < NbrGroups ; i++)
      fprintf(file, "SP( %f , %f , %f ) { %d };\n",
	      (FMMData_P0+i)->Xgc, (FMMData_P0+i)->Ygc, (FMMData_P0+i)->Zgc, i);
  
    fprintf(file, "};\n");
  }    
  fclose(file);
  
  GetDP_End ;
}



void  Geo_WriteFileMshFMMGroups( struct GeoData *GeoData_P, char * FileName ){

  int i, j, iNd, i_Support, NbrElmsInSupport, NbrNdsInSupport ;
  int NbrInSupport, NbrNds, NbrGroups, NbrElmsGroupi ;
  int ElemType, *ElmsGroupi_P0 ;
  struct Geo_Node *Nodes_P0 ;
  struct Geo_Element *Element_P ;
  struct FMMData *FMMData_P0 ;
  struct FMMGroup  FMMGroup_S ;
  List_T *NodesInRegion ;
  List_T *FMMGroup_L ;  
  FILE * file ;

  GetDP_Begin("Geo_WriteFileMshFMMGroups");

  Msg(INFO, "Writing FMMGroups  File .msh : '%s' ", FileName );
  NbrNds = List_Nbr(GeoData_P->Nodes) ;
  Nodes_P0 = (struct Geo_Node*)List_Pointer( GeoData_P->Nodes, 0 ) ;  


  file = fopen(FileName, "w") ;

  NbrInSupport = List_Nbr(Problem_S.FMMGroup) ;

  for(i_Support = 0 ; i_Support < NbrInSupport ; i_Support++ ){
    NbrElmsInSupport = 0 ; 
    List_Read(Problem_S.FMMGroup, i_Support, &FMMGroup_S) ;
    FMMGroup_L = FMMGroup_S.List ;
   
    Generate_ElementaryEntities( ((struct Group *) List_Pointer(Problem_S.Group, FMMGroup_S.InIndex))->InitialList ,
				 &NodesInRegion, NODESOF) ;
    NbrNdsInSupport = List_Nbr(NodesInRegion);
    
    fprintf(file, "$NOD \n");
    fprintf(file, "%d \n", NbrNdsInSupport);    
    for (iNd = 0 ; iNd < NbrNds ; iNd++)
      if(List_Search(NodesInRegion, &(Nodes_P0+iNd)->Num, fcmp_int))
	fprintf(file, "%d %f %f %f \n", (Nodes_P0+iNd)->Num,(Nodes_P0+iNd)->x, (Nodes_P0+iNd)->y, (Nodes_P0+iNd)->z);
    fprintf(file, "$ENDNOD \n");

    NbrGroups = List_Nbr(FMMGroup_L) ;
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_L,0) ;  

    for( i = 0 ; i < NbrGroups ; i++)
      NbrElmsInSupport += List_Nbr((FMMData_P0+i)->Element) ;

    fprintf(file, "$ELM Support %d \n", i_Support);
    fprintf(file, "%d \n", NbrElmsInSupport);
 
    for( i = 0 ; i < NbrGroups ; i++){
      NbrElmsGroupi =  List_Nbr((FMMData_P0+i)->Element) ;
      ElmsGroupi_P0 = (int*)List_Pointer((FMMData_P0+i)->Element,0) ;
      
      for (j=0 ; j < NbrElmsGroupi ; j++){
	Element_P = Geo_GetGeoElementOfNum(ElmsGroupi_P0[j]);
	ElemType = Get_GmshElementType(Element_P->Type);
	switch(Element_P->Type){
	case POINT :
	  fprintf(file, "%d %d %d %d %d %d \n", 
		  Element_P->Num , ElemType, i, Element_P->Region, Element_P->NbrNodes,
		  Element_P->NumNodes[0]); break;
	case LINE :
	  fprintf(file, "%d %d %d %d %d %d %d \n", 
		  Element_P->Num , ElemType, i, Element_P->Region, Element_P->NbrNodes,
		  Element_P->NumNodes[0], Element_P->NumNodes[1]); break;
	case TRIANGLE : 
	  fprintf(file, "%d %d %d %d %d %d %d %d \n", 
		  Element_P->Num , ElemType, i, Element_P->Region, Element_P->NbrNodes,
		  Element_P->NumNodes[0], Element_P->NumNodes[1] ,Element_P->NumNodes[2]); break;
	case QUADRANGLE : 
	  fprintf(file, "%d %d %d %d %d %d %d %d %d \n", 
		  Element_P->Num , ElemType, i, Element_P->Region, Element_P->NbrNodes,
		  Element_P->NumNodes[0], Element_P->NumNodes[1],
		  Element_P->NumNodes[2],Element_P->NumNodes[3]); break;

	default :  Msg(ERROR, "Wrong Type of Element for FMM groups"); break;
	}
      }
    }
    fprintf(file, "$ENDELM\n");
  }
  
  fclose(file);

  GetDP_End;
}



void Print_FMMGroupInfo( char* FileName ){
  
  int i, j, NbrInSupport, NumElm, *NG, *FG, *Nd, NbrGroupsSrc, NbrGroupsObs ;
  int NbrDir, NbrHar, NbrCom, NbrElmsGroup, NbrNG, NbrFG ;
  int NbrDof=0, NbrEqu=0, *NumDof, *NumEqu, NbrFMMEqu, iFMMEqu ;
  double  StorageFMM=0., StorageFMMA, StorageFMMD, StorageFMMT, StorageDir=0., TotalMem ;
  int NbrMultLaplace2D, NbrMultLaplace3D, N ;
  int NbrDirMAX = 0, NbrDirAV = 0 ;
  struct FMMData *FMMDataObs_P0, *FMMDataSrc_P0 ;
  struct FMMGroup FMMGroupObs_S, FMMGroupSrc_S ;
  struct FMMmat FMMmat_S ;
  List_T *G_L, *Nd_L, *NumDof_L, *NumEqu_L ;
 

  FILE * file ;
  

  GetDP_Begin("Print_FMMGroupInfo") ;
  
  Msg(INFO, "Writing FMM information : '%s' ", FileName );
 
  NbrDir = Current.FMM.NbrDir ;
  N = (NbrDir-1)*(NbrDir+1);
  NbrHar = 2 ;
  NbrCom = Current.FMM.NbrCom ;
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  NbrInSupport = List_Nbr(Problem_S.FMMGroup) ;


  NbrMultLaplace2D = NbrMultLaplace3D = 0 ;

  file = fopen(FileName, "w");
  fprintf(file, "$FMMGroupsInfo\n");
  fprintf(file, "NbrDirections = %d NbrHarmonics = %d NbrCom = %d (Warning: Default == SCALAR)\n", NbrDir, NbrHar, NbrCom) ;
  fprintf(file, "NbrFMMEqu = %d NbrSupports = %d\n\n", NbrFMMEqu, NbrInSupport) ;

  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu++){
    List_Read(Current.DofData->FMM_Matrix, iFMMEqu, &FMMmat_S ) ;
    fprintf(file, "EQUTERM %d Src %d Obs %d FS_Dof %d FS_Equ %d\n",
	    iFMMEqu, FMMmat_S.Src, FMMmat_S.Obs, FMMmat_S.FunctionSpaceIndexDof, FMMmat_S.FunctionSpaceIndexEqu) ;
  }

  TotalMem = 0. ; 

  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu++){
    StorageFMM = StorageDir = 0. ;
    StorageFMMA = StorageFMMD = StorageFMMT = 0. ;

    List_Read(Current.DofData->FMM_Matrix, iFMMEqu, &FMMmat_S ) ;
    List_Read(Problem_S.FMMGroup, FMMmat_S.Src, &FMMGroupSrc_S) ;
    FMMDataSrc_P0 =  FMMDataObs_P0 = (struct FMMData*)List_Pointer(FMMGroupSrc_S.List, 0) ; 
    NbrGroupsSrc = NbrGroupsObs =  List_Nbr(FMMGroupSrc_S.List) ;

    if( FMMmat_S.Src == FMMmat_S.Obs ){
      fprintf(file, "$EQUTERM (%d) SOURCE == OBSERVATION (%d)\n", iFMMEqu, FMMmat_S.Src) ;
      fprintf(file, "FunctionSpaceIndexDof %d FunctionSpaceIndexEqu %d\n",
	      FMMmat_S.FunctionSpaceIndexDof, FMMmat_S.FunctionSpaceIndexEqu) ;
      fprintf(file, "FmmGROUP #Elm #Dof #Equ\n");
     
      for (i = 0 ; i < NbrGroupsSrc ; i++){
	NbrElmsGroup =  List_Nbr((FMMDataSrc_P0+i)->Element) ;
	List_Read(FMMmat_S.NumDof, i, &NumDof_L) ;
	NbrDof = List_Nbr(NumDof_L) ;
	List_Read(FMMmat_S.NumEqu, i, &NumEqu_L) ;
	NbrEqu = List_Nbr(NumEqu_L) ;
	fprintf(file, "%5d  %5d  %5d  %5d\n", i, NbrElmsGroup, NbrDof, NbrEqu);
	StorageFMMA += NbrDof*NbrCom*NbrHar*NbrDir* 32./1024. ;
	StorageFMMD += NbrEqu*NbrCom*NbrHar*NbrDir* 32./1024. ;

	NbrMultLaplace2D += NbrDof*NbrDir*NbrHar + NbrEqu *NbrDir *NbrHar + NbrDir*NbrDir*6 ;
	NbrMultLaplace3D += NbrDof*N*NbrHar + NbrEqu * N *NbrHar + N*N*6 ;
	
	List_Read(FMMmat_S.FG_L, i, &G_L) ;
       
	NbrFG = List_Nbr(G_L) ;
	StorageFMMT += NbrFG*NbrHar * N * 32./1024. ;
      }
    }   
    else{
      List_Read(Problem_S.FMMGroup, FMMmat_S.Obs, &FMMGroupObs_S) ;
      FMMDataObs_P0 = (struct FMMData*)List_Pointer(FMMGroupObs_S.List, 0) ; 
      NbrGroupsObs = List_Nbr(FMMGroupObs_S.List) ;
      fprintf(file, "FmmGROUP   #Elm  #Dof\n");
      for (i = 0 ; i < NbrGroupsSrc ; i++){
	NbrElmsGroup =  List_Nbr((FMMDataSrc_P0+i)->Element) ;
	List_Read(FMMmat_S.NumDof, i, &NumDof_L) ;
	NbrDof = List_Nbr(NumDof_L) ;
	fprintf(file, "%5d  %5d  %5d\n", i, NbrElmsGroup, NbrDof);
	StorageFMMA += NbrDof*NbrCom*NbrHar*NbrDir* 32./1024. ;
	List_Read(FMMmat_S.FG_L, i, &G_L) ;	  
	NbrFG = List_Nbr(G_L) ;
	StorageFMMT += NbrFG*NbrHar*NbrDir* 32./1024. ;

      }
      fprintf(file, "FmmGROUP    #Elm  #Equ\n");
      for (i = 0 ; i < NbrGroupsObs ; i++){
	NbrElmsGroup =  List_Nbr((FMMDataObs_P0+i)->Element) ;
	List_Read(FMMmat_S.NumEqu, i, &NumEqu_L) ;
	NbrDof = List_Nbr(NumEqu_L) ;
	fprintf(file, "%5d  %5d  %5d\n", i, NbrElmsGroup, NbrEqu);
	StorageFMMD += NbrEqu*NbrCom*NbrHar*NbrDir* 32./1024. ;
      }
    }

    StorageFMM += StorageFMMA + StorageFMMD + StorageFMMT ;   
  
  

    for ( i = 0 ; i < NbrGroupsSrc ; i++){
      fprintf(file, "FMMGroup %d (Equ %d on %d)", i, iFMMEqu, FMMmat_S.Src) ;
      List_Read(FMMmat_S.NG_L, i, &G_L) ;
      NbrNG = List_Nbr(G_L) ;
      NG = (int*)(G_L->array) ;
      StorageDir += (NbrDof+NbrEqu)*(NbrDof+NbrEqu)*NbrHar*32./1024. ; 
      fprintf(file, "\nNEIGHBOURS (on %d) ", FMMmat_S.Obs);
     
      for (j = 0 ; j < NbrNG ; j++ ){
	fprintf(file, "%d ", NG[j]);
      }

      List_Read(FMMmat_S.FG_L, i, &G_L) ;	  
      NbrFG = List_Nbr(G_L) ;
      FG = (int*)( G_L->array ) ;
      List_Read(FMMmat_S.Nd_L, i, &Nd_L) ;	  
      Nd = (int*)( Nd_L->array ) ;
      fprintf(file, "\nFAR (on %d) ", FMMmat_S.Obs);
      for (j = 0 ; j < NbrFG ; j++ ){
	fprintf(file,"%d(%d) ", FG[j], Nd[j]);	
	NbrDirAV += Nd[j] ;
	NbrDirMAX = (NbrDirMAX < Nd[j]) ? Nd[j] : NbrDirMAX ; 
      }
      if(NbrFG) NbrDirAV /=NbrFG ;
      fprintf(file, "\n\n");    
    }
    
    TotalMem += StorageDir + StorageFMM ;

  } /* iFMMEqu */
  
  fprintf(file,"\nAVERAGE Truncantion factor = %d\n", NbrDirAV) ;
  fprintf(file,"MAXIMUM Truncation factor = %d\n", NbrDirMAX);
  fprintf(file,"\nTotal Number of Dof = %d\n", Current.DofData->NbrAnyDof);
  fprintf(file,"TotalMemMoM %.5g Kb\n", Current.DofData->NbrAnyDof*Current.DofData->NbrAnyDof*32./1024.);
  fprintf(file, "\nTotalMemFMM %.5g Kb   StorageDir %.5g Kb   StorageFMM   %.5g Kb\n", TotalMem, StorageDir, StorageFMM);

  fprintf(file, "\nNbrMultLaplace2D %d\n", NbrMultLaplace2D) ;
  fprintf(file, "NbrMultLaplace3D %d\n", NbrMultLaplace3D) ;

  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu++){
    List_Read(Current.DofData->FMM_Matrix, iFMMEqu, &FMMmat_S ) ;
    List_Read(Problem_S.FMMGroup, FMMmat_S.Src, &FMMGroupSrc_S) ;
    FMMDataSrc_P0 = FMMDataObs_P0 =  (struct FMMData*)List_Pointer(FMMGroupSrc_S.List, 0) ; 
    NbrGroupsSrc = NbrGroupsObs = List_Nbr(FMMGroupSrc_S.List) ;

    if ( FMMmat_S.Src == FMMmat_S.Obs ){
      fprintf(file, "$EQUTERM (%d) SOURCE == OBSERVATION (%d)\n", iFMMEqu, FMMmat_S.Src) ;
      fprintf(file, "FunctionSpaceIndexDof %d FunctionSpaceIndexEqu %d\n",
	      FMMmat_S.FunctionSpaceIndexDof, FMMmat_S.FunctionSpaceIndexEqu) ;
    
      for (i = 0 ; i < NbrGroupsSrc ; i++){
	NbrElmsGroup =  List_Nbr((FMMDataSrc_P0+i)->Element) ;     
	fprintf(file, "$GROUP %d (Equ %d, Support %d)\n", i, iFMMEqu, FMMmat_S.Src) ;
	fprintf(file, "%f\n", (FMMDataSrc_P0+i)->Rmax); /* Group radius */
	fprintf(file, "%f %f %f\n", (FMMDataSrc_P0+i)->Xgc, (FMMDataSrc_P0+i)->Ygc, (FMMDataSrc_P0+i)->Zgc); /* Group Center */
      
	NbrElmsGroup =  List_Nbr((FMMDataSrc_P0+i)->Element) ;
	fprintf(file, "%d $EL ", NbrElmsGroup);
	for (j = 0 ; j < NbrElmsGroup ; j++){
	  List_Read((FMMDataSrc_P0+i)->Element, j, &NumElm);
	  fprintf(file, "%d ", NumElm);
	}
	fprintf(file, "\n");
	
	List_Read(FMMmat_S.NumDof, i, &NumDof_L) ;
	NbrDof = List_Nbr(NumDof_L) ;
	fprintf(file, "%d $Dof(%d)", NbrDof, FMMmat_S.FunctionSpaceIndexDof);
	NumDof = (int*)(NumDof_L->array) ;
	for (j = 0 ; j < NbrDof ; j++)
	  fprintf(file, "%d ", NumDof[j]);
	fprintf(file, "\n");

	List_Read(FMMmat_S.NumEqu, i, &NumEqu_L) ;
	NbrEqu = List_Nbr(NumEqu_L) ;
	fprintf(file, "%d $Equ(%d)", NbrEqu, FMMmat_S.FunctionSpaceIndexEqu);
	NumEqu = (int*)(NumEqu_L->array) ;
	for (j = 0 ; j < NbrEqu ; j++)
	  fprintf(file, "%d ", NumEqu[j]);
	fprintf(file, "\n");
	
	fprintf(file, "$END_GROUP %d \n", i);
      }
    }   
    else{ 
      List_Read(Problem_S.FMMGroup, FMMmat_S.Obs, &FMMGroupObs_S) ;
      FMMDataObs_P0 = (struct FMMData*)List_Pointer(FMMGroupObs_S.List, 0) ; 
      NbrGroupsObs = List_Nbr(FMMGroupObs_S.List) ;

      fprintf(file, "$EQUTERM (%d) SOURCE (%d) != OBSERVATION (%d)\n", iFMMEqu, FMMmat_S.Src, FMMmat_S.Obs ) ;
      fprintf(file, "FunctionSpaceIndexDof %d FunctionSpaceIndexEqu %d\n",
	      FMMmat_S.FunctionSpaceIndexDof, FMMmat_S.FunctionSpaceIndexEqu) ;
      fprintf(file, "$SOURCE GROUPS on %d (Equ %d) \n", FMMmat_S.Src, iFMMEqu) ;
      for (i = 0 ; i < NbrGroupsSrc ; i++){
	NbrElmsGroup =  List_Nbr((FMMDataSrc_P0+i)->Element) ;     
	fprintf(file, "$GROUP SRC %d (Equ %d)\n", i, iFMMEqu);
	fprintf(file, "%f\n", (FMMDataSrc_P0+i)->Rmax); /* Group radius */
	fprintf(file, "%f %f %f\n", (FMMDataSrc_P0+i)->Xgc, (FMMDataSrc_P0+i)->Ygc, (FMMDataSrc_P0+i)->Zgc); /* Group Center */
      
	NbrElmsGroup =  List_Nbr((FMMDataSrc_P0+i)->Element) ;
	fprintf(file, "%d $EL ", NbrElmsGroup);
	for (j = 0 ; j < NbrElmsGroup ; j++){
	  List_Read((FMMDataSrc_P0+i)->Element, j, &NumElm);
	  fprintf(file, "%d ", NumElm);
	}
	fprintf(file, "\n");
	List_Read(FMMmat_S.NumDof, i, &NumDof_L) ;
	NbrDof = List_Nbr(NumDof_L) ;
	fprintf(file, "%d $Dof(%d)", NbrDof, FMMmat_S.FunctionSpaceIndexDof);

	NumDof = (int*)(NumDof_L->array) ;
	for (j = 0 ; j < NbrDof ; j++)
	  fprintf(file, "%d ", NumDof[j]);
	fprintf(file, "\n");
	fprintf(file, "$END_GROUP SRC %d \n", i);
      }
      fprintf(file, "$END_SOURCE GROUPS on %d (Equ %d) \n", FMMmat_S.Src, iFMMEqu) ;

      fprintf(file, "$OBSERVATION GROUPS on %d (Equ %d) \n", FMMmat_S.Obs, iFMMEqu) ;
      for (i = 0 ; i < NbrGroupsObs ; i++){
	fprintf(file, "$GROUP OBS %d (Equ %d)\n", i, iFMMEqu);
	fprintf(file, "%f\n", (FMMDataObs_P0+i)->Rmax); /* Group radius */
	fprintf(file, "%f %f %f\n", (FMMDataObs_P0+i)->Xgc, (FMMDataObs_P0+i)->Ygc, (FMMDataObs_P0+i)->Zgc); /* Group Center */
	NbrElmsGroup =  List_Nbr((FMMDataObs_P0+i)->Element) ;
	fprintf(file, "%d $EL ", NbrElmsGroup);
	for (j = 0 ; j < NbrElmsGroup ; j++){
	  List_Read((FMMDataObs_P0+i)->Element, j, &NumElm);
	  fprintf(file, "%d ", NumElm);
	}
	fprintf(file, "\n");

	List_Read(FMMmat_S.NumEqu, i, &NumEqu_L) ;
	NbrEqu = List_Nbr(NumEqu_L) ;
	fprintf(file, "%d $Equ(%d)", NbrEqu, FMMmat_S.FunctionSpaceIndexEqu);	
	NumEqu = (int*)(NumEqu_L->array) ;
	for (j = 0 ; j < NbrEqu ; j++)
	  fprintf(file, "%d ", NumEqu[j]);
	fprintf(file, "\n");
	fprintf(file, "$END_GROUP OBS%d \n", i);
      }
      fprintf(file, "$END_OBSERVATION GROUPS on %d (Equ %d) \n", FMMmat_S.Obs, iFMMEqu) ;
    }
  }
    
  fclose(file);
  
  GetDP_End;
}


void Print_FMMGroupNeighbours( char* FileName ){
  
  int i, j, *NG, *FG, *Nd, NbrGroupsSrc ;
  int NbrNG, NbrFG ;
  int NbrFMMEqu, iFMMEqu ;
  struct FMMGroup FMMGroupSrc_S ;
  struct FMMmat FMMmat_S ;
  List_T *G_L, *Nd_L ;
 

  FILE * file ;
  

  GetDP_Begin("Print_FMMGroupNeighbours") ;
  
  Msg(INFO, "Writing FMM Group Neighbours : '%s' ", FileName );

  file = fopen(FileName, "w");
  fprintf(file, "$FMMGroupsNEIGHBOURS\n");
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  fprintf(file, "$NbrFMMEqu %d\n", NbrFMMEqu) ;

  for(iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu++){
    List_Read(Current.DofData->FMM_Matrix, iFMMEqu, &FMMmat_S ) ;
    fprintf(file, "EQUTERM %d Src %d Obs %d FS_Dof %d FS_Equ %d\n",
	    iFMMEqu, FMMmat_S.Src, FMMmat_S.Obs, FMMmat_S.FunctionSpaceIndexDof, FMMmat_S.FunctionSpaceIndexEqu) ;

    List_Read(Problem_S.FMMGroup, FMMmat_S.Src, &FMMGroupSrc_S) ;    
    NbrGroupsSrc = List_Nbr(FMMGroupSrc_S.List) ;

    for ( i = 0 ; i < NbrGroupsSrc ; i++){
      fprintf(file, "FMMGroup %d (Equ %d on %d)", i, iFMMEqu, FMMmat_S.Src) ;
      List_Read(FMMmat_S.NG_L, i, &G_L) ;
      NbrNG = List_Nbr(G_L) ;
      NG = (int*)(G_L->array) ;
      fprintf(file, "\nNEIGHBOURS (on %d) ", FMMmat_S.Obs) ;
     
      for (j = 0 ; j < NbrNG ; j++ )
	fprintf(file, "%d ", NG[j]);

      List_Read(FMMmat_S.FG_L, i, &G_L) ;	  
      NbrFG = List_Nbr(G_L) ;
      FG = (int*)( G_L->array ) ;
      List_Read(FMMmat_S.Nd_L, i, &Nd_L) ;	  
      Nd = (int*)( Nd_L->array ) ;
      fprintf(file, "\nFAR (on %d) ", FMMmat_S.Obs);
      for (j = 0 ; j < NbrFG ; j++ )
       fprintf(file,"%d(%d) ", FG[j], Nd[j]);	
      fprintf(file, "\n\n");    
    }

  } /* iFMMEqu */
  
  fclose(file);
  
  GetDP_End;
}




void Print_FMM_Matrices( int DA, char* FileName ){
  
  int i, iDof, iEqu, iCom, iDir, iFMMEqu, NbrFMMEqu, FMMi ;
  int NbrGroups, NbrDir, NbrHar, NbrCom, NbrDof, NumDof, NbrEqu, NumEqu ;
  double **M ;

  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  List_T *NumDof_L, *NumEqu_L ;
  FILE * file ;
  

  GetDP_Begin("Print_FMM_Matrices");

  Msg(INFO, "Writing FMM '%s' ", FileName );
  
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  NbrDir = Current.FMM.NbrDir ; /* Current.FMM.N for Laplace3D */
  NbrHar = Current.NbrHar ;

  file = fopen(FileName, "w");  
  fprintf(file, "$FMM_Matrices \n\n");

  if (DA==0) fprintf(file, "$AGGREGATION \n"); else fprintf(file, "$DISAGGREGATION \n");
  fprintf(file, "NbrDirections = %d \n", NbrDir);
  fprintf(file, "NbrHarmonics = %d \n\n", NbrHar);

  for( iFMMEqu = 0 ; iFMMEqu < NbrFMMEqu ; iFMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + iFMMEqu ;
    NbrCom = FMMmat_P->NbrCom ;
    if (DA == 0) FMMi = FMMmat_P->Src ; 
    else FMMi = FMMmat_P->Obs ;

    if (DA == 0) NbrGroups = List_Nbr( FMMmat_P->A_L ) ;
    else NbrGroups = List_Nbr( FMMmat_P->D_L ) ;

    fprintf(file, "NbrGroups (Support %d NbrComponents %d) = %d \n",
	    FMMi, NbrCom, NbrGroups);

    for (i = 0 ; i < NbrGroups ; i++){      
      if (DA==0){
	List_Read(FMMmat_P->A_L, i, &M ) ;
	List_Read(FMMmat_P->NumDof, i, &NumDof_L ) ;
	NbrDof = List_Nbr( NumDof_L) ;
	fprintf(file, "$matrixGROUP %d NbrDof %d\n", i, NbrDof);

	for (iDof = 0 ; iDof < NbrDof ; iDof++){
	  List_Read(NumDof_L, iDof, &NumDof);
	  fprintf(file, "$NumDof %d\n", NumDof);
	  
	  for (iDir = 0 ; iDir < NbrDir ; iDir++){
	    for (iCom = 0 ; iCom < NbrCom ; iCom++){ 
	      fprintf(file, "%d %3.8g %3.8g \n", iDir, 
		      M[iDof][iDir*NbrHar*NbrCom+iCom], M[iDof][iDir*NbrHar*NbrCom+NbrCom+iCom]);
	    }
	  }
	}   
      } 
      else {
	List_Read(FMMmat_P->D_L, i, &M ) ;
	List_Read(FMMmat_P->NumEqu, i, &NumEqu_L ) ;
	NbrEqu = List_Nbr(NumEqu_L) ;
	fprintf(file, "$matrixGROUP %d NbrEqu %d\n", i, NbrEqu);

	for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
	  List_Read( NumEqu_L, iEqu, &NumEqu);
	  fprintf(file, "$NumEqu %d\n", NumEqu);
	  
	  for (iDir = 0 ; iDir < NbrDir ; iDir++){
	    for (iCom = 0 ; iCom < NbrCom ; iCom++){ 
	      fprintf(file, "%d %3.8g %3.8g \n", iDir, 
		      M[iEqu][iDir*NbrHar*NbrCom+iCom], M[iEqu][iDir*NbrHar*NbrCom+NbrCom+iCom]);
	    }
	  }
	}   
	
	
      }
      fprintf(file, "$END_matrixGROUP %d \n\n", i);
    } 
    fclose(file);
  }
  GetDP_End;
}



/* ------------------------------------------------------------------------- */ 
/* Print TRANSLATION matrix                                                  */ 
/* ------------------------------------------------------------------------- */ 

void Print_FMM_Translation( char* FileName ){

  int i, iFar, *FG, iDir, iDir2, iEqu ;
  int NbrEqu, NbrGroupSrc, NbrFG, NbrDir, NbrDir2, NbrHar ;
  double ***T;
  struct FMMGroup FMMGroup_S ;
  struct FMMmat *FMMmat_P0, *FMMmat_P ;
  List_T *FG_L ; 
  FILE * file ;


  GetDP_Begin("Print_FMM_Translation");

  Msg(INFO, "Writing FMM Translation matrix '%s' ", FileName );

  NbrDir = NbrDir2 = Current.FMM.NbrDir ;
  NbrHar = 2 ;
  NbrEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0) ;

  file = fopen(FileName, "w") ;
  fprintf(file, "$FMM_Translation Matrices \n\n") ;
  fprintf(file, "NbrDirections = %d \n", NbrDir) ;
  fprintf(file, "NbrHarmonics = %d \n\n", NbrHar) ;
 
  for (iEqu = 0 ; iEqu < NbrEqu ; iEqu++){
    FMMmat_P = FMMmat_P0 + iEqu ;
    T = FMMmat_P->T ;

    fprintf(file, "SOURCE %d\n", FMMmat_P->Src) ; 
    fprintf(file, "OBSERV %d\n", FMMmat_P->Obs) ;

    List_Read(Problem_S.FMMGroup, FMMmat_P->Src, &FMMGroup_S);
    NbrGroupSrc = List_Nbr(FMMGroup_S.List) ;    
    fprintf(file, "NbrGroupSrc = %d \n", NbrGroupSrc);

    for (i = 0 ; i < NbrGroupSrc ; i++){
      List_Read(FMMmat_P->FG_L, i, &FG_L) ;	  
      NbrFG = List_Nbr(FG_L) ;
      FG = (int*)( FG_L->array ) ;
      
      for (iFar = 0 ; iFar < NbrFG ; iFar++){
	fprintf(file, "$GROUPS Origin %d (Support %d) Destination %d (Support %d) \n",
		i, FMMmat_P->Src, FG[iFar], FMMmat_P->Obs);      
	for (iDir = 0 ; iDir < NbrDir ; iDir++)
	  for (iDir2 = 0 ; iDir2 < NbrDir2 ; iDir2++)	
	    fprintf(file, "%d %3.8g %3.8g \n",
		    iDir, T[i][iFar][iDir*NbrHar*NbrDir+iDir2*NbrHar ], T[i][iFar][iDir*NbrHar*NbrDir+iDir2*NbrHar+1]) ;
      }      
      fprintf(file, "$END_GROUP Origin %d \n\n", i);
    }
  }

  fclose(file);
    
  GetDP_End;
}



/* ------------------------------------------------------------------------- */ 
/* Print FMM DTA matrix                                                      */ 
/* ------------------------------------------------------------------------- */ 

void Print_FMM_MatrixDTA( int n, double **DTA, char* FileName ){

  int  iDof, iEqu ; 
  FILE * file ;

  GetDP_Begin("Print_FMM_MatrixDTA");

  Msg(INFO, "Writing FMM DTA matrix : '%s' ", FileName );

  file = fopen(FileName, "w");
  
  fprintf(file, "$FMM_Matrix_DTA  NbrDof = %d\n", n) ;
  
  /* GetDP works with the transposed system matrix */
  for (iEqu = 0 ; iEqu < n ; iEqu++) 
    for (iDof = 0 ; iDof < n ; iDof++)   
      fprintf(file, "%d %d %.8g\n", iEqu+1, iDof+1, DTA[iEqu][iDof]) ; 
  
  fclose(file);

  GetDP_End;
}

















