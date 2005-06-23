#define RCSID "$Id: Get_Cells.c,v 1.10 2005-06-23 01:45:01 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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
#include "Get_Geometry.h"
#include "Get_Cells.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Numeric.h"


void Get_BarycentricDivision(struct Element * Element, double Bary_Edge[][3], 
			     double Bary_Facet[][3], double Bary_Volume[3]){

  int  i, j, *IM, *NumNodes, *NumEdges, Nbr_Edges, Nbr_Facets ;

  GetDP_Begin("Get_BarycentricDivision");

  i = 0; IM = Geo_GetIM_Den(Element->GeoElement->Type, &Nbr_Edges) ;
  do{
    NumNodes = IM + i * NBR_MAX_SUBENTITIES_IN_ELEMENT ;
    Bary_Edge[i][0] = (Element->x[abs(NumNodes[0])-1]+Element->x[abs(NumNodes[1])-1])/2. ;
    Bary_Edge[i][1] = (Element->y[abs(NumNodes[0])-1]+Element->y[abs(NumNodes[1])-1])/2. ;
    Bary_Edge[i][2] = (Element->z[abs(NumNodes[0])-1]+Element->z[abs(NumNodes[1])-1])/2. ;
    i++ ;
  } while (i<Nbr_Edges) ;

  if(Nbr_Edges > 1){
    i = 0; IM = Geo_GetIM_Dfe(Element->GeoElement->Type, &Nbr_Facets) ;
    do{
      NumEdges = IM + i * NBR_MAX_SUBENTITIES_IN_ELEMENT ;
      Bary_Facet[i][0] = Bary_Facet[i][1] = Bary_Facet[i][2] = 0. ;
      j = 0;
      while(NumEdges[j]!=0){
	Bary_Facet[i][0] += Bary_Edge[abs(NumEdges[j])-1][0] ;
	Bary_Facet[i][1] += Bary_Edge[abs(NumEdges[j])-1][1] ;
	Bary_Facet[i][2] += Bary_Edge[abs(NumEdges[j])-1][2] ;
	j++ ;
      }
      Bary_Facet[i][0] /= (double)j;
      Bary_Facet[i][1] /= (double)j;
      Bary_Facet[i][2] /= (double)j;
      i++ ;
    } while (i<Nbr_Facets) ;
    
    if(Nbr_Facets > 1){
      Bary_Volume[0] = Bary_Volume[1] = Bary_Volume[2] = 0. ;
      for(i=0 ; i<Nbr_Facets ; i++){
	Bary_Volume[0] += Bary_Facet[i][0] ;
	Bary_Volume[1] += Bary_Facet[i][1] ;
	Bary_Volume[2] += Bary_Facet[i][2] ;
      }
      Bary_Volume[0] /= (double)Nbr_Facets;
      Bary_Volume[1] /= (double)Nbr_Facets;
      Bary_Volume[2] /= (double)Nbr_Facets;
    }
  }

  GetDP_End ;
}

static struct Geo_Element deRhamGeoElement[20] ;

void Get_deRhamCells(struct Element *Element, 
		     struct QuantityStorage *QuantityStorage,
		     struct Group * Group, 
		     int *Nbr_Cells, struct Element Cells[],
		     struct Value Vec[], int *Relative_Jacobian){

  double   Bary_Edge[12][3], Bary_Facet[6][3], Bary_Volume[3], *uvw, norm ;
  int      i ;

  GetDP_Begin("Get_deRhamCells");
  
  *Nbr_Cells = QuantityStorage->NbrElementaryBasisFunction ;

  for(i=0 ; i<*Nbr_Cells ; i++) {
    Cells[i].GeoElement = &deRhamGeoElement[i] ;
    Cells[i].GeoElement->Num = -1 ;
    Cells[i].GeoElement->Region = Cells[i].Region = Element->Region ;
    Cells[i].GeoElement->NumNodes = NULL ;
  }
 
  switch (Group->FunctionType) {

    /* ------------------------------------------------------------ */
    /*  Primal mesh cells                                           */
    /* ------------------------------------------------------------ */

  case NODESOF :
    *Relative_Jacobian = -3 ; /* dummy */
    uvw = Geo_GetNodes_uvw(Element->Type, &i) ;

    for(i = 0 ; i < *Nbr_Cells ; i++){
      Cells[i].GeoElement->Type = Cells[i].Type = POINT ;
      Cells[i].GeoElement->NbrNodes = 1 ;
      /* This a a hack: x,y,z <- u,v,w */
      Cells[i].x[0] = uvw[3 * QuantityStorage->BasisFunction[i].NumEntityInElement    ] ;
      Cells[i].y[0] = uvw[3 * QuantityStorage->BasisFunction[i].NumEntityInElement + 1] ;
      Cells[i].z[0] = uvw[3 * QuantityStorage->BasisFunction[i].NumEntityInElement + 2] ;
    }
    break ;

  case EDGESOF :
    Msg(ERROR, "de Rham Map on EdgesOf not Done") ;
    break;

  case FACETSOF :
    Msg(ERROR, "de Rham Map on FacetsOf not Done") ;
    break;

  case VOLUMESOF :
    *Relative_Jacobian = 0 ;
    if(*Nbr_Cells > 1) Msg(ERROR, "Non consistent choice of VolumesOf");
    Cells[0] = *Element ;
    break;
    

    /* ------------------------------------------------------------ */
    /*  Dual mesh cells                                             */
    /* ------------------------------------------------------------ */

  case DUALNODESOF :
    *Relative_Jacobian = 0 ;
    Get_BarycentricDivision(Element, Bary_Edge, Bary_Facet, Bary_Volume) ;
  
    switch(Element->Type){

    case LINE :
      for(i = 0 ; i < *Nbr_Cells ; i++){
	Cells[i].GeoElement->Type = Cells[i].Type = LINE ;
	Cells[i].GeoElement->NbrNodes = 2 ;

	switch(QuantityStorage->BasisFunction[i].NumEntityInElement){
	case 0 :
	  Cells[i].x[0] = Element->x[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	  Cells[i].y[0] = Element->y[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	  Cells[i].z[0] = Element->z[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	  Cells[i].x[1] = Bary_Edge[0][0] ;
	  Cells[i].y[1] = Bary_Edge[0][1] ;
	  Cells[i].z[1] = Bary_Edge[0][2] ;
	  break ;
	case 1 :
	  Cells[i].x[0] = Bary_Edge[0][0] ;
	  Cells[i].y[0] = Bary_Edge[0][1] ;
	  Cells[i].z[0] = Bary_Edge[0][2] ;
	  Cells[i].x[1] = Element->x[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	  Cells[i].y[1] = Element->y[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	  Cells[i].z[1] = Element->z[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	  break ;
	}
      }
      break;
      
    case TRIANGLE :
      for(i = 0 ; i < *Nbr_Cells ; i++){
	Cells[i].GeoElement->Type = Cells[i].Type = QUADRANGLE ;
	Cells[i].GeoElement->NbrNodes = 4 ;

	Cells[i].x[0] = Element->x[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	Cells[i].y[0] = Element->y[QuantityStorage->BasisFunction[i].NumEntityInElement] ;
	Cells[i].z[0] = Element->z[QuantityStorage->BasisFunction[i].NumEntityInElement];

	Cells[i].x[2] = Bary_Facet[0][0] ;
	Cells[i].y[2] = Bary_Facet[0][1] ;
	Cells[i].z[2] = Bary_Facet[0][2] ;

	switch(QuantityStorage->BasisFunction[i].NumEntityInElement){
	case 0 :
	  Cells[i].x[1] = Bary_Edge[0][0] ; Cells[i].x[3] = Bary_Edge[1][0] ;
	  Cells[i].y[1] = Bary_Edge[0][1] ; Cells[i].y[3] = Bary_Edge[1][1] ;
	  Cells[i].z[1] = Bary_Edge[0][2] ; Cells[i].z[3] = Bary_Edge[1][2] ;
	  break ;
	case 1 :
	  Cells[i].x[1] = Bary_Edge[2][0] ; Cells[i].x[3] = Bary_Edge[0][0] ;
	  Cells[i].y[1] = Bary_Edge[2][1] ; Cells[i].y[3] = Bary_Edge[0][1] ;
	  Cells[i].z[1] = Bary_Edge[2][2] ; Cells[i].z[3] = Bary_Edge[0][2] ;
	  break ;
	case 2 :
	  Cells[i].x[1] = Bary_Edge[1][0] ; Cells[i].x[3] = Bary_Edge[2][0] ;
	  Cells[i].y[1] = Bary_Edge[1][1] ; Cells[i].y[3] = Bary_Edge[2][1] ;
	  Cells[i].z[1] = Bary_Edge[1][2] ; Cells[i].z[3] = Bary_Edge[2][2] ;
	  break ;
	}	
      }
      break;

    default :
      Msg(ERROR, "Unknown Element type for DualNodesOf");
      break;

    }
    break;


  case DUALEDGESOF :
    *Relative_Jacobian = -1 ;
    Get_BarycentricDivision(Element, Bary_Edge, Bary_Facet, Bary_Volume) ;
    
    switch(Element->Type){

    case TRIANGLE :
      for(i=0 ; i<*Nbr_Cells ; i++){       	
	Cells[i].GeoElement->Type = Cells[i].Type = LINE ;
	Cells[i].GeoElement->NbrNodes = 2 ;

	Cells[i].x[0] = Bary_Edge[QuantityStorage->BasisFunction[i].NumEntityInElement][0] ;
	Cells[i].y[0] = Bary_Edge[QuantityStorage->BasisFunction[i].NumEntityInElement][1] ;
	Cells[i].z[0] = Bary_Edge[QuantityStorage->BasisFunction[i].NumEntityInElement][2] ;

	Cells[i].x[1] = Bary_Facet[0][0] ;
	Cells[i].y[1] = Bary_Facet[0][1] ;
	Cells[i].z[1] = Bary_Facet[0][2] ;

	Vec[i].Type = VECTOR ; /* tangent */
	Vec[i].Val[0] = Cells[i].x[1] - Cells[i].x[0] ;
	Vec[i].Val[1] = Cells[i].y[1] - Cells[i].y[0] ;
	Vec[i].Val[2] = Cells[i].z[1] - Cells[i].z[0] ;
	norm = sqrt(DSQU(Vec[i].Val[0])+DSQU(Vec[i].Val[1])+DSQU(Vec[i].Val[2]));
	Vec[i].Val[0] /= norm ;
	Vec[i].Val[1] /= norm ;
	Vec[i].Val[2] /= norm ;
	if(i==1){
	  Vec[i].Val[0] *= -1 ;
	  Vec[i].Val[1] *= -1 ;
	  Vec[i].Val[2] *= -1 ;
	}
      }
      break;

    default :
      Msg(ERROR, "Unknown Element type for DualEdgesOf");
      break;

    }
    break;

  case DUALFACETSOF :
  case DUALVOLUMESOF :
    Msg(ERROR, "de Rham Map on DualFacetsOf and DualVolumesOf not done") ;
    break ;


    /* ------------------------------------------------------------ */
    /*  Boundary of dual mesh cells                                 */
    /* ------------------------------------------------------------ */

  case BOUNDARYOFDUALNODESOF :
    *Relative_Jacobian = -1 ;
    Get_BarycentricDivision(Element, Bary_Edge, Bary_Facet, Bary_Volume) ;
    
    switch(Element->Type){

    case LINE :
      for(i=0 ; i<2 ; i++){       	
	Cells[i].GeoElement->Type = Cells[i].Type = POINT ;
	Cells[i].GeoElement->NbrNodes = 1 ;
	/* This a a hack: x,y,z <- u,v,w */
	Cells[i].x[0] = 0. ;
	Cells[i].y[0] = 0. ; 
	Cells[i].z[0] = 0. ;
      }
      break;

    case TRIANGLE :
      for(i=0 ; i<3 ; i++){       	
	Cells[i].GeoElement->Type = Cells[i].Type = LINE ;
	Cells[i].GeoElement->NbrNodes = 2 ;

	Cells[i].x[0] = Bary_Edge[i][0] ;
	Cells[i].y[0] = Bary_Edge[i][1] ; 
	Cells[i].z[0] = Bary_Edge[i][2] ;

	Cells[i].x[1] = Bary_Facet[0][0] ;
	Cells[i].y[1] = Bary_Facet[0][1] ;
	Cells[i].z[1] = Bary_Facet[0][2] ;

	Vec[i].Type = VECTOR ;	/* normal. Only valid for 2D cases ! */
	Vec[i].Val[0] = Cells[i].y[1] - Cells[i].y[0] ;
	Vec[i].Val[1] = Cells[i].x[0] - Cells[i].x[1] ;
	Vec[i].Val[2] = 0;
	norm = sqrt(DSQU(Vec[i].Val[0])+DSQU(Vec[i].Val[1])+DSQU(Vec[i].Val[2]));
	Vec[i].Val[0] /= norm ;
	Vec[i].Val[1] /= norm ;
	Vec[i].Val[2] /= norm ;
	if(i==1){
	  Vec[i].Val[0] *= -1 ;
	  Vec[i].Val[1] *= -1 ;
	  Vec[i].Val[2] *= -1 ;
	}
      }
      break;

    default :
      Msg(ERROR, "Unknown Element type for BoundaryOfDualNodesOf");
      break;

    }
    break;

  case BOUNDARYOFDUALEDGESOF :
    Msg(ERROR, "de Rham Map on BoundaryOfDualEdgesOf not done") ;
    break;

  default:
    Msg(ERROR, "Unknown type of Entity in de Rham Map");
    break;
  }

  GetDP_End ;
}



static struct Geo_Element IntegrationGeoElement[20] ;

void Get_IntegrationCells(struct Element *Element, 
			  double x, double y, double z,
			  int *Nbr_Cells, struct Element Cells[]) {
  int  i, j ;

  GetDP_Begin("Get_IntegrationCells");
  
  switch(Element->Type){

  case TRIANGLE :
    *Nbr_Cells = 3 ;
    for(i = 0 ; i < *Nbr_Cells ; i++){
      Cells[i].GeoElement = &IntegrationGeoElement[i] ;
      Cells[i].GeoElement->Num = -1 ;
      Cells[i].GeoElement->Type = Cells[i].Type = TRIANGLE ;
      Cells[i].GeoElement->Region = Cells[i].Region = Element->Region ;
      Cells[i].GeoElement->NbrNodes = 3 ;
      Cells[i].GeoElement->NumNodes = NULL ;

      Cells[i].x[0] = x ;
      Cells[i].y[0] = y ;
      Cells[i].z[0] = z ;
      
      Cells[i].x[1] = Element->x[i] ;
      Cells[i].y[1] = Element->y[i] ;
      Cells[i].z[1] = Element->z[i] ;

      j = (i<2)?i+1:0 ;
      Cells[i].x[2] = Element->x[j] ;
      Cells[i].y[2] = Element->y[j] ;
      Cells[i].z[2] = Element->z[j] ;
    }
    break;

  default :
    Msg(ERROR, "Unknown Element type for Get_IntegrationCells");
    break;

  }

  GetDP_End ;
}
