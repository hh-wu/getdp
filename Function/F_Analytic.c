#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Numeric.h"
#include "Numeric_F.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 

#include "CurrentData.h"
#include "Data_Numeric.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V


/* ------------------------------------------------------------------------ */
/*  Problem of the sphere                                                   */
/* ------------------------------------------------------------------------ */

void  F_Sphere (F_ARG) {

  double  x, y, z ;
  double  sxr, sxi, syr, syi, szr, szi ; 
  double  mur, sigma, freq, r0, r1 ;

  x = Current.x; y = Current.y; z = Current.z;
  
  mur = Fct->Para[1] ; sigma = Fct->Para[2] ; freq = Fct->Para[3] ;
  r0  = Fct->Para[4] ; r1    = Fct->Para[5] ;

  if (r0 == 0.0){  /* sphere pleine */
    if (Fct->Para[0] == 0){ /* induction */
      solsph_(&x,&y,&z,&sxr,&sxi,&syr,&syi,&szr,&szi,&mur,&sigma,&freq,&r1);  
    }
    else {
      Msg(ERROR, "pas encore fait...");
    }
  }
  else{  /* sphere creuse */
    Msg(ERROR, "pas encore fait...");
  }

  if (Current.NbrHar == 1) {
    V->Val[0] = sxr ; V->Val[1] = syr ; V->Val[2] = szr ;
  }
  else {
    V->Val[0] = sxr ; V->Val[1] = syr ; V->Val[2] = szr ;
    V->Val[MAX_DIM] = sxi ; V->Val[MAX_DIM+1] = syi ; V->Val[MAX_DIM+2] = szi ;
  }

  V->Type = VECTOR ;
}


/* ------------------------------------------------------------------------ */
/*  Problem of the cylinder                                                 */
/* ------------------------------------------------------------------------ */

void  F_Cylinder (F_ARG) {
  int     type ;
  double  x, y ;
  double  valx[2], valy[2];
  double  bxr, bxi, byr, byi, phir, phii=0 ;
  double  mur, sigma, freq, b0, r0, r1 ;

  valx[0] = 0.0  ; valx[1] = 0.0 ;
  valy[0] = 0.0  ; valy[1] = 0.0 ;

  x = Current.x; y = Current.y; 
  
  mur = Fct->Para[0] ; sigma = Fct->Para[1] ; freq = Fct->Para[2] ;
  b0  = Fct->Para[3] ; r0    = Fct->Para[4] ; r1   = Fct->Para[5] ;
  type = (int)Fct->Para[6] ;

  if (r0 == 0.0) 
    solcyl_(&x,&y,&bxr,&bxi,&byr,&byi,&b0,&mur,&sigma,&freq,&r1);
  else
    hollowcyl(x,y,&bxr,&byr,&phir,b0,mur,r0,r1);

  if(type == 0){
    valx[0] = bxr ; valx[1] = bxi ;
    valy[0] = byr ; valy[1] = byi ;
  }
  else{
    valx[0] = phir ; valx[1] = phii ;
  }

  if (Current.NbrHar == 1) {
    V->Val[0] = valx[0] ; V->Val[1] = valy[0] ; V->Val[2] = 0.0 ;
  }
  else {
    V->Val[0] = valx[0] ; V->Val[1] = valy[0] ; V->Val[2] = 0.0 ;
    V->Val[MAX_DIM] = valx[1] ; V->Val[MAX_DIM+1] = valy[1] ; V->Val[MAX_DIM+2] = 0.0 ;
  }

  V->Type = VECTOR ;
}


#undef F_ARG
