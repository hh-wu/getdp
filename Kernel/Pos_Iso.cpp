// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "ProData.h"
#include "Pos_Element.h"
#include "Message.h"

#define PSCA3(a,b) ((a)[0]*(b)[0] + (a)[1]*(b)[1] + (a)[2]*(b)[2])

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  C a l _ I s o                                                           */
/* ------------------------------------------------------------------------ */

void Interpolate(double *X, double *Y, double *Z, 
		 struct Value *Val, double V, int I1, int I2, 
		 double *XI, double *YI ,double *ZI)
{
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
			double *Xp, double *Yp, double *Zp, int *nb)
{
  *nb = 0;
  if((Val[0].Val[0] >= V && Val[1].Val[0] <= V) || 
     (Val[1].Val[0] >= V && Val[0].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[0].Val[0] >= V && Val[2].Val[0] <= V) ||
     (Val[2].Val[0] >= V && Val[0].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[0].Val[0] >= V && Val[3].Val[0] <= V) ||
     (Val[3].Val[0] >= V && Val[0].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,0,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[1].Val[0] >= V && Val[2].Val[0] <= V) ||
     (Val[2].Val[0] >= V && Val[1].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[1].Val[0] >= V && Val[3].Val[0] <= V) ||
     (Val[3].Val[0] >= V && Val[1].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,1,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[2].Val[0] >= V && Val[3].Val[0] <= V) ||
     (Val[3].Val[0] >= V && Val[2].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,2,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
}

void Cal_IsoTriangle(double *X, double *Y, double *Z, struct Value *Val, 
		     double V, double Vmin, double Vmax,
		     double *Xp, double *Yp, double *Zp, int *nb)
{
  *nb = 0;
  if((Val[0].Val[0] >= V && Val[1].Val[0] <= V) || 
     (Val[1].Val[0] >= V && Val[0].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[0].Val[0] >= V && Val[2].Val[0] <= V) ||
     (Val[2].Val[0] >= V && Val[0].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
  if((Val[1].Val[0] >= V && Val[2].Val[0] <= V) ||
     (Val[2].Val[0] >= V && Val[1].Val[0] <= V)){
    Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
  }
}

void Fill_Iso(struct PostElement *PE, int nb, int *index,
	      double *x, double *y, double *z, double val)
{
  int i, k ;

  for (i = 0 ; i < nb ; i++){
    PE->x[i] = x[index[i]] ;
    PE->y[i] = y[index[i]] ;
    PE->z[i] = z[index[i]] ;
    PE->Value[i].Type = SCALAR ;
    PE->Value[i].Val[0] = val ;
    for (k = 1 ; k < Current.NbrHar ; k++)
      PE->Value[i].Val[MAX_DIM*k] = 0. ;
  }
}

void normvec(double *a);

void Cal_Iso(struct PostElement *PE, List_T *list, 
	     double val, double vmin, double vmax, int DecomposeInSimplex)
{
  struct PostElement *PE2 ;
  double x[5], y[5], z[5] ;
  double d1[3], d2[3], d3[3], a1, a2, a3 ;
  int    nb, index[5], index_default[] = {0,1,2,3} ;

  switch(PE->Type){
  case TRIANGLE :
  case TRIANGLE_2 :
    Cal_IsoTriangle(PE->x, PE->y, PE->z, PE->Value, 
		    val, vmin, vmax, x, y, z, &nb) ;
    if(nb == 2){
      PE2 =  Create_PostElement(PE->Index, LINE, 2, 1) ;
      Fill_Iso(PE2, nb, index_default, x, y, z, val) ;
      List_Add(list, &PE2);
    }
    break ;
  case TETRAHEDRON :
    Cal_IsoTetrahedron(PE->x, PE->y, PE->z, PE->Value, 
		       val, vmin, vmax, x, y, z, &nb) ;

    if(nb == 3){
      PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
      Fill_Iso(PE2, nb, index_default, x, y, z, val) ;
      List_Add(list, &PE2);
    }
    else if(nb == 4){
      if(DecomposeInSimplex){
	d1[0] = x[0] - x[1] ; d1[1] = y[0] - y[1] ; d1[2] = z[0] - z[1] ;
	d2[0] = x[0] - x[2] ; d2[1] = y[0] - y[2] ; d2[2] = z[0] - z[2] ;
	d3[0] = x[0] - x[3] ; d3[1] = y[0] - y[3] ; d3[2] = z[0] - z[3] ;
	normvec(d1) ; normvec(d2) ; normvec(d3) ;
	a1 = acos(PSCA3(d1,d2)) ;
	a2 = acos(PSCA3(d1,d3)) ;
	a3 = acos(PSCA3(d2,d3)) ;

	if(a1 >= a2 && a1 >= a3){
	  PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
	  index[0] = 0 ; index[1] = 1 ; index[2] = 2 ; 
	  Fill_Iso(PE2, 3, index, x, y, z, val) ;
	  List_Add(list, &PE2);
	  PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
	  index[0] = 3 ; index[1] = 2 ; index[2] = 1 ; 
	  Fill_Iso(PE2, 3, index, x, y, z, val) ;
	  List_Add(list, &PE2);
	}
	else if(a2 >= a1 && a2 >= a3){
	  PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
	  index[0] = 0 ; index[1] = 1 ; index[2] = 3 ; 
	  Fill_Iso(PE2, 3, index, x, y, z, val) ;
	  List_Add(list, &PE2);
	  PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
	  index[0] = 2 ; index[1] = 3 ; index[2] = 1 ; 
	  Fill_Iso(PE2, 3, index, x, y, z, val) ;
	  List_Add(list, &PE2);
	}
	else{
	  PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
	  index[0] = 0 ; index[1] = 2 ; index[2] = 3 ; 
	  Fill_Iso(PE2, 3, index, x, y, z, val) ;
	  List_Add(list, &PE2);
	  PE2 =  Create_PostElement(PE->Index, TRIANGLE, 3, 1) ;
	  index[0] = 1 ; index[1] = 3 ; index[2] = 2 ; 
	  Fill_Iso(PE2, 3, index, x, y, z, val) ;
	  List_Add(list, &PE2);
	}
      }
      else{
	PE2 =  Create_PostElement(PE->Index, QUADRANGLE, 4, 1) ;
	Fill_Iso(PE2, nb, index_default, x, y, z, val) ;
	List_Add(list, &PE2);
      }
    }
    break ;
  default :
    Message::Error("Iso computation not done for this type of element");
    break ;
  }
}
