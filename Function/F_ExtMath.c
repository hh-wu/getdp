static char *rcsid = "$Id: F_ExtMath.c,v 1.3 2000-10-30 01:05:44 geuzaine Exp $" ;
#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
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
/*  Simple Extended Math                                                    */
/* ------------------------------------------------------------------------ */

void  F_Hypot (F_ARG) {
  int     k;
  double  tmp;

  GetDP_Begin("F_Hypot");

  if(A->Type != SCALAR || (A+1)->Type != SCALAR)
    Msg(ERROR, "Non Scalar Argument(s) for Function 'Hypot'");

  if (Current.NbrHar == 1){ 
    V->Val[0] = sqrt(A->Val[0]*A->Val[0]+(A+1)->Val[0]*(A+1)->Val[0]) ;
  } 
  else {
    tmp = sqrt(A->Val[0]*A->Val[0]+(A+1)->Val[0]*(A+1)->Val[0]) ;
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      V->Val[MAX_DIM* k   ] = tmp ;
      V->Val[MAX_DIM*(k+1)] = 0. ;
    }
  }
  V->Type = SCALAR;

  GetDP_End ;
}


void  F_TanhC2 (F_ARG) {
  double denom;

  GetDP_Begin("F_TanhC2");

  if(A->Type != SCALAR) Msg(ERROR, "Non Scalar Arguments for Function 'TanhC2'");
  if(Current.NbrHar != 2) Msg(ERROR, "Function 'TanhC2' only valid for Complex"); 

  denom = DSQU(cosh(A->Val[0])*cos(A->Val[0])) + DSQU(sinh(A->Val[0])*sin(A->Val[0]));
  V->Val[0]       = sinh(A->Val[0])*cosh(A->Val[0]) / denom ;
  V->Val[MAX_DIM] = sin(A->Val[0])*cos(A->Val[0]) / denom ;
  V->Type = SCALAR ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  General Tensor Functions                                                */
/* ------------------------------------------------------------------------ */

void  F_Transpose (F_ARG) {

  GetDP_Begin("F_Transpose");

  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Msg(ERROR, "Wrong Type of Argument for Function 'Transpose'");

  Cal_TransposeValue(A,V);

  GetDP_End ;
}


void  F_Trace (F_ARG) {

  GetDP_Begin("F_Trace");

  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Msg(ERROR, "Wrong Type of Argument for Function 'Trace'");

  Cal_TraceValue(A,V);

  GetDP_End ;
}


void  F_RotateXYZ (F_ARG) {
  double  ca, sa, cb, sb, cc, sc ;
  struct  Value Rot ;

  GetDP_Begin("F_RotateXYZ");

  if((A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR &&
      A->Type != VECTOR) ||
     (A+1)->Type != SCALAR || (A+2)->Type != SCALAR || (A+3)->Type != SCALAR)
    Msg(ERROR, "Wrong Type of Argument(s) for Function 'Rotate'");

  ca = cos((A+1)->Val[0]) ; sa = sin((A+1)->Val[0]) ;
  cb = cos((A+2)->Val[0]) ; sb = sin((A+2)->Val[0]) ;
  cc = cos((A+3)->Val[0]) ; sc = sin((A+3)->Val[0]) ;

  Rot.Type   = TENSOR ;
  Cal_ZeroValue(&Rot);
  Rot.Val[0] =  cb*cc;          Rot.Val[1] = -cb*sc;          Rot.Val[2] =  sb;
  Rot.Val[3] =  sa*sb*cc+ca*sc; Rot.Val[4] = -sa*sb*sc+ca*cc; Rot.Val[5] = -sa*cb;
  Rot.Val[6] = -ca*sb*cc+sa*sc; Rot.Val[7] =  ca*sb*sc+sa*cc; Rot.Val[8] =  ca*cb;

  Cal_RotateValue(&Rot,A,V);

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  Norm                                                                    */
/* ------------------------------------------------------------------------ */

void  F_Norm (F_ARG) {
  int k ;

  GetDP_Begin("F_Norm");

  switch(A->Type) {
    
  case SCALAR :
    if (Current.NbrHar == 1) {
      V->Val[0] = fabs(A->Val[0]) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = sqrt(DSQU(A->Val[MAX_DIM*k]) + DSQU(A->Val[MAX_DIM*(k+1)]));
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  case VECTOR :
    if (Current.NbrHar == 1) {
      V->Val[0] = sqrt(DSQU(A->Val[0]) + DSQU(A->Val[1]) + DSQU(A->Val[2])) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = sqrt(DSQU(A->Val[MAX_DIM* k     ]) + 
				 DSQU(A->Val[MAX_DIM* k   +1]) +
				 DSQU(A->Val[MAX_DIM* k   +2]) + 
				 DSQU(A->Val[MAX_DIM*(k+1)  ]) + 
				 DSQU(A->Val[MAX_DIM*(k+1)+1]) + 
				 DSQU(A->Val[MAX_DIM*(k+1)+2])) ;
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  default :
    Msg(ERROR, "Wrong Type of Argument in function 'Norm'");
    break;
  }

  V->Type = SCALAR ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Square Norm                                                             */
/* ------------------------------------------------------------------------ */

void  F_SquNorm (F_ARG) {
  int k ;

  GetDP_Begin("F_SquNorm");

  switch(A->Type) {
    
  case SCALAR :
    if (Current.NbrHar == 1) {
      V->Val[0] = DSQU(A->Val[0]) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = DSQU(A->Val[MAX_DIM*k]) + DSQU(A->Val[MAX_DIM*(k+1)]);
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  case VECTOR :
    if (Current.NbrHar == 1) {
      V->Val[0] = DSQU(A->Val[0]) + DSQU(A->Val[1]) + DSQU(A->Val[2]) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = DSQU(A->Val[MAX_DIM* k     ]) + 
	                    DSQU(A->Val[MAX_DIM* k   +1]) +
                            DSQU(A->Val[MAX_DIM* k   +2]) + 
			    DSQU(A->Val[MAX_DIM*(k+1)  ]) + 
			    DSQU(A->Val[MAX_DIM*(k+1)+1]) + 
			    DSQU(A->Val[MAX_DIM*(k+1)+2]) ;
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  default :
    Msg(ERROR, "Wrong Type of Argument in function 'SquNorm'");
    break;
  }

  V->Type = SCALAR ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Unit                                                                    */
/* ------------------------------------------------------------------------ */

void  F_Unit (F_ARG) {
  int k ;
  double Norm ;

  GetDP_Begin("F_Unit");

  switch(A->Type) {
    
  case SCALAR :
    if (Current.NbrHar == 1) {
      V->Val[0] = 1. ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM* k   ] = 1. ;
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    V->Type = SCALAR ;
    break ;

  case VECTOR :
    if (Current.NbrHar == 1) {
      Norm = sqrt(DSQU(A->Val[0]) + DSQU(A->Val[1]) + DSQU(A->Val[2])) ;
      if (Norm > 1.e-30) {  /* Attention: tolerance */
	V->Val[0] /= Norm ;
	V->Val[1] /= Norm ;
	V->Val[2] /= Norm ;
      }
      else {
	V->Val[0] = 0. ;
	V->Val[1] = 0. ;
	V->Val[2] = 0. ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	Norm = sqrt(DSQU(A->Val[MAX_DIM* k     ]) +
		    DSQU(A->Val[MAX_DIM* k   +1]) +
		    DSQU(A->Val[MAX_DIM* k   +2]) +
		    DSQU(A->Val[MAX_DIM*(k+1)  ]) +
		    DSQU(A->Val[MAX_DIM*(k+1)+1]) +
		    DSQU(A->Val[MAX_DIM*(k+1)+2])) ;
	if (Norm > 1.e-30) {  /* Attention: tolerance */
	  V->Val[MAX_DIM* k     ] /= Norm ;
	  V->Val[MAX_DIM* k   +1] /= Norm ;
	  V->Val[MAX_DIM* k   +2] /= Norm ;
	  V->Val[MAX_DIM*(k+1)  ] /= Norm ;
	  V->Val[MAX_DIM*(k+1)+1] /= Norm ;
	  V->Val[MAX_DIM*(k+1)+2] /= Norm ;
	}
	else {
	  V->Val[MAX_DIM* k     ] = 0 ;
	  V->Val[MAX_DIM* k   +1] = 0 ;
	  V->Val[MAX_DIM* k   +2] = 0 ;
	  V->Val[MAX_DIM*(k+1)  ] = 0 ;
	  V->Val[MAX_DIM*(k+1)+1] = 0 ;
	  V->Val[MAX_DIM*(k+1)+2] = 0 ;
	}
      }
    }
    V->Type = VECTOR ;
    break ;

  default :
    Msg(ERROR, "Wrong Type of Argument in function 'Unit'");
    break;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Time Functions                                                          */
/* ------------------------------------------------------------------------ */

/* Interesting only because it allows the same formal expression in both 
   Time and Frequency domains ! */

/* cos ( w * $Time + phi ) */

void  F_Cos_wt_p (F_ARG) {

  GetDP_Begin("F_Cos_wt_p");

  if (Current.NbrHar == 1)
    V->Val[0] = cos(Fct->Para[0] * Current.Time + Fct->Para[1]) ;
  else if (Current.NbrHar == 2) {
    V->Val[0]       = cos(Fct->Para[1]) ;
    V->Val[MAX_DIM] = sin(Fct->Para[1]) ;
  }
  else {
    Msg(ERROR,"Too many harmonics for Function 'Cos_wt_p'") ; 
  }
  V->Type = SCALAR ;

  GetDP_End ;
}

/* sin ( w * $Time + phi ) */

void  F_Sin_wt_p (F_ARG) {

  GetDP_Begin("F_Sin_wt_p");

  if (Current.NbrHar == 1)
    V->Val[0] = sin(Fct->Para[0] * Current.Time + Fct->Para[1]) ;
  else if (Current.NbrHar == 2){
    V->Val[0]       =  sin(Fct->Para[1]) ;
    V->Val[MAX_DIM] = -cos(Fct->Para[1]) ;
  }
  else {
    Msg(ERROR,"Too many harmonics for Function 'Sin_wt_p'") ; 
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Period                                                                  */
/* ------------------------------------------------------------------------ */

void  F_Period (F_ARG) {

  GetDP_Begin("F_Period");

  if (Current.NbrHar == 1)
    V->Val[0] = fmod(A->Val[0], Fct->Para[0])
      + ((A->Val[0] < 0.)? Fct->Para[0] : 0.) ;
  /*
    V->Val[0] = (A->Val[0]/Fct->Para[0] - (double)(int)(A->Val[0]/Fct->Para[0]))
      * Fct->Para[0] + ((A->Val[0] < 0.)? Fct->Para[0] : 0.) ;
      */
  else {
    Msg(ERROR,"Function 'F_Period' not valid for Complex");
  }
  V->Type = SCALAR ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Interval                                                                */
/* ------------------------------------------------------------------------ */

void  F_Interval (F_ARG) {
  int     k;
  double  tmp;

  GetDP_Begin("F_Interval");

  if (Current.NbrHar == 1) {
    V->Val[0] =
      A->Val[0] > (A+1)->Val[0] + Fct->Para[0] * Fct->Para[2] &&
      A->Val[0] < (A+2)->Val[0] + Fct->Para[1] * Fct->Para[2] ;
  }
  else {
    tmp =
      A->Val[0] > (A+1)->Val[0] + Fct->Para[0] * Fct->Para[2] &&
      A->Val[0] < (A+2)->Val[0] + Fct->Para[1] * Fct->Para[2] ;

    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      V->Val[MAX_DIM* k   ] = tmp ;
      V->Val[MAX_DIM*(k+1)] = 0. ;
    }

  }
  V->Type = SCALAR ;

  GetDP_End ;
}

