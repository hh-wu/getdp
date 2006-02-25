#define RCSID "$Id: GeoNormal.c,v 1.10 2006-02-25 15:00:24 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 */

#include "GetDP.h"
#include "Data_Passive.h"
#include "Numeric.h"
#include "GeoData.h"
#include "Tools.h"

extern struct Problem    Problem_S ;
extern struct GeoData  * CurrentGeoData ;

int  fcmp_NXE(const void * a, const void * b) {
  return 
    ((struct Entity2XEntity1 *)a)->Num -
    ((struct Entity2XEntity1 *)b)->Num ;
}

int  fcmp_EXVector(const void * a, const void * b) {
  return 
    ((struct EntityXVector *)a)->Num -
    ((struct EntityXVector *)b)->Num ;
}


/*
  C'est une maniere un peu naive de creer cette BD. Mais elle a 
  l'avantage de permettre une allocation simple (et minimum).

  L'autre possibilite (boucler sur les elemnts) est plus rapide, mais
  je ne vois pas bien comment obtenir un cout memoire minimum simplement, 
  sans faire de nombreux realloc.
*/


#define MAX_NBR_NXE_INCIDENCE 20 

static int RegionIndexForNXE = -1;

void Geo_CreateNodesXElements(int NumNode, int InIndex, 
			      int *NbrElements, int **NumElements) {
  
  struct Entity2XEntity1   NXE, *NXE_P ;
  struct Geo_Element      *GeoElement ;
  struct Group            *Group_P ;

  int    i, j, tmp[MAX_NBR_NXE_INCIDENCE] ;

  GetDP_Begin("Geo_CreateNodesXElements");

  Group_P = (struct Group*)List_Pointer(Problem_S.Group, InIndex);

  if(InIndex != RegionIndexForNXE){
    RegionIndexForNXE = InIndex ;
    Msg(INFO, "  Generate NodesXElements information for Region '%s'", Group_P->Name);
    if(CurrentGeoData->NodesXElements)
      Tree_Delete(CurrentGeoData->NodesXElements);
    CurrentGeoData->NodesXElements = 
      Tree_Create(sizeof(struct Entity2XEntity1), fcmp_NXE) ;
  }
  
  NXE.Num = NumNode ;
  
  if((NXE_P = (struct Entity2XEntity1*)
      Tree_PQuery(CurrentGeoData->NodesXElements, &NXE))) {
    *NbrElements = NXE_P->NbrEntities ;
    *NumElements = NXE_P->NumEntities ;
  }
  else{
    NXE.NbrEntities = 0 ;
    for (i = 0 ; i < Geo_GetNbrGeoElements(); i++) {
      GeoElement = Geo_GetGeoElement(i) ;
      if (List_Search(Group_P->InitialList, &GeoElement->Region, fcmp_int)){
	for(j=0 ; j<GeoElement->NbrNodes ; j++){
	  if(GeoElement->NumNodes[j] == NumNode){

	    /* printf("Adding elm %d to node %d\n", GeoElement->Num, NumNode); */
	    /* this is to have orientation of elements adjacent to the node 
	       Only valid for line elemnts !!!!!!! */
	    
	    tmp[NXE.NbrEntities] = ((!j)?-1:1) * GeoElement->Num ;
	    NXE.NbrEntities++ ;
	  }
	}
      }
    }
    NXE.NumEntities = (int*)Malloc(NXE.NbrEntities * sizeof(int)) ;
    memcpy(NXE.NumEntities, tmp, NXE.NbrEntities * sizeof(int));
    Tree_Add(CurrentGeoData->NodesXElements, &NXE);
    *NbrElements = NXE.NbrEntities ;
    *NumElements = NXE.NumEntities ;
  }

  GetDP_End ;
}


void Geo_CreateNormal(int Type, double *x, double *y, double *z, double *N) {
  double  x1x0, x2x0, y1y0, y2y0, z1z0, z2z0 ;
  double  nx, ny, nz, norm ;

  GetDP_Begin("Geo_CreateNormal");

  switch (Type) {

  case LINE :
    nx = y[1] - y[0] ;
    ny = x[0] - x[1] ;
    norm = sqrt(DSQU(nx)+DSQU(ny)) ;      
    N[0] = nx / norm ;
    N[1] = ny / norm ;
    N[2] = 0. ;
    break ;

  case TRIANGLE :
  case QUADRANGLE :
    x1x0 = x[1] - x[0] ;
    y1y0 = y[1] - y[0] ;
    z1z0 = z[1] - z[0] ;
    x2x0 = x[2] - x[0] ; 
    y2y0 = y[2] - y[0] ;
    z2z0 = z[2] - z[0] ;
    nx = y1y0 * z2z0 - z1z0 * y2y0 ;
    ny = z1z0 * x2x0 - x1x0 * z2z0 ;
    nz = x1x0 * y2y0 - y1y0 * x2x0 ;
    norm = sqrt(DSQU(nx)+DSQU(ny)+DSQU(nz)) ;
    N[0] = nx/norm ;
    N[1] = ny/norm ;
    N[2] = nz/norm ;
    break ;
    
  default :
    Msg(ERROR, "Normal computation not done (yet) for Element Type %d", Type);
  }

  GetDP_End ;
}

void Geo_CreateNormalOfElement(struct Geo_Element *GeoElement, double *Normal) {  
  struct  EntityXVector  EXV, *EXV_P ;
  double  x [NBR_MAX_NODES_IN_ELEMENT] ;
  double  y [NBR_MAX_NODES_IN_ELEMENT] ;
  double  z [NBR_MAX_NODES_IN_ELEMENT] ;

  GetDP_Begin("Geo_CreateNormalOfElement");

  EXV.Num = GeoElement->Num ;

  if((EXV_P = (struct EntityXVector*)Tree_PQuery(CurrentGeoData->Normals, &EXV))) {
    memcpy(Normal, EXV_P->Vector, 3*sizeof(double));
  }
  else{
    Geo_GetNodesCoordinates(GeoElement->NbrNodes, GeoElement->NumNodes, x, y, z) ;
    Geo_CreateNormal(GeoElement->Type, x, y, z, Normal);
    memcpy(EXV.Vector, Normal, 3*sizeof(double));
    Tree_Add(CurrentGeoData->Normals, &EXV);    
  }

  GetDP_End ;
}


