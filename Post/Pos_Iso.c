/* $Id: Pos_Iso.c,v 1.9 2000-10-20 08:04:29 dular Exp $ */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "Data_Active.h"
#include "CurrentData.h"
#include "ualloc.h"

#include "Pos_Iso.h"
#include "Pos_Element.h"

/* ------------------------------------------------------------------------ */
/*  C a l _ I s o                                                           */
/* ------------------------------------------------------------------------ */

void Interpolate(double *X, double *Y, double *Z, 
		 struct Value *Val, double V, int I1, int I2, 
		 double *XI, double *YI ,double *ZI){
  
  if(Val[I1].Val[0] == Val[I2].Val[0]){
    *XI = X[I1]; 
    *YI = Y[I1]; 
    *ZI = Z[I1]; 
  }
  else{
    *XI= (V - Val[I1].Val[0])*(X[I2]-X[I1])/(Val[I2].Val[0]-Val[I1].Val[0]) + X[I1];
    *YI= (V - Val[I1].Val[0])*(Y[I2]-Y[I1])/(Val[I2].Val[0]-Val[I1].Val[0]) + Y[I1];
    *ZI= (V - Val[I1].Val[0])*(Z[I2]-Z[I1])/(Val[I2].Val[0]-Val[I1].Val[0]) + Z[I1];
  }
}

void Cal_IsoTetrahedron(double *X, double *Y, double *Z, struct Value *Val, 
			double V, double Vmin, double Vmax,
			double *Xp, double *Yp, double *Zp, int *nb){
  if(V != Vmax){
    *nb = 0;
    if((Val[0].Val[0] > V && Val[1].Val[0] <= V) || 
       (Val[1].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] > V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] > V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] > V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[2].Val[0] > V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] > V && Val[2].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,2,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }
  else{
    *nb=0;
    if((Val[0].Val[0] < V && Val[1].Val[0] <= V) ||
       (Val[1].Val[0] < V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] < V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] < V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] < V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] < V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] < V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] < V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] < V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] < V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[2].Val[0] < V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] < V && Val[2].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,2,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }
}


void Cal_IsoTriangle(double *X, double *Y, double *Z, struct Value *Val, 
		     double V, double Vmin, double Vmax,
		     double *Xp, double *Yp, double *Zp, int *nb){
  
  if(V != Vmax){
    *nb = 0;
    if((Val[0].Val[0] > V && Val[1].Val[0] <= V) || 
       (Val[1].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }
  else{
    *nb = 0;
    if((Val[0].Val[0] < V && Val[1].Val[0] >= V) ||
       (Val[1].Val[0] < V && Val[0].Val[0] >= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] < V && Val[2].Val[0] >= V) || 
       (Val[2].Val[0] < V && Val[0].Val[0] >= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }       
    if((Val[1].Val[0] < V && Val[2].Val[0] >= V) || 
       (Val[2].Val[0] < V && Val[1].Val[0] >= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }

}


void Cal_Iso(struct PostElement *PE, List_T *list, 
	     double val, double vmin, double vmax){

  int    i, k, nb;
  struct PostElement *PE2 ;

  switch(PE->Type){
  case TRIANGLE :
    PE2 =  Create_PostElement(PE->Index, LINE, 2, 1) ;
    Cal_IsoTriangle(PE->x, PE->y, PE->z, PE->Value, 
		    val, vmin, vmax, PE2->x, PE2->y, PE2->z, &nb) ;
    if(nb > 1){
      for (i = 0 ; i < nb ; i++){
	PE2->Value[i].Type = SCALAR ;
	PE2->Value[i].Val[0] = val ;
	for (k = 1 ; k < Current.NbrHar ; k++)
	  PE2->Value[i].Val[MAX_DIM*k] = 0. ;
      }
      List_Add(list, &PE2);
    }
    else
      Destroy_PostElement(PE2);
    break ;
  case TETRAHEDRON :
    PE2 =  Create_PostElement(PE->Index, QUADRANGLE, 4, 1) ;
    Cal_IsoTetrahedron(PE->x, PE->y, PE->z, PE->Value, 
		       val, vmin, vmax, PE2->x, PE2->y, PE2->z, &nb) ;
    if(nb > 2){
      for (i = 0 ; i < nb ; i++){
	PE2->Value[i].Type = SCALAR ;
	PE2->Value[i].Val[0] = val ;
	for (k = 1 ; k < Current.NbrHar ; k++)
	  PE2->Value[i].Val[MAX_DIM*k] = 0. ;
      }
      if(nb == 3){
	PE2->Type = TRIANGLE ;
	PE2->NbrNodes = nb ;
	List_Add(list, &PE2);
      }
      else{
	PE2->Type = QUADRANGLE ;
	PE2->NbrNodes = nb ;
      }

    }
    else
      Destroy_PostElement(PE2);
    break ;
  default :
    Msg(ERROR, "Iso Computation not Done for this Type of Element");
    break ;
  }

}
