// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <math.h>
#include "F.h"
#include "GeoData.h"
#include "DofData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h"
#include "Message.h"

extern struct CurrentData Current ;

#define SQU(a)     ((a)*(a)) 
#define TWO_PI             6.2831853071795865

/* ------------------------------------------------------------------------ */
/*  Simple Extended Math                                                    */
/* ------------------------------------------------------------------------ */

void F_Hypot(F_ARG)
{
  int     k;
  double  tmp;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR)
    Msg::Error("Non scalar argument(s) for function 'Hypot'");

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
}

void F_TanhC2(F_ARG)
{
  double denom = 
    SQU(cosh(A->Val[0])*cos(A->Val[MAX_DIM])) + 
    SQU(sinh(A->Val[0])*sin(A->Val[MAX_DIM]));
  V->Val[0]       = sinh(A->Val[0])*cosh(A->Val[0]) / denom ;
  V->Val[MAX_DIM] = sin(A->Val[MAX_DIM])*cos(A->Val[MAX_DIM]) / denom ;
  V->Type = SCALAR ;
}

/* ------------------------------------------------------------------------ */
/*  General Tensor Functions                                                */
/* ------------------------------------------------------------------------ */

void F_Transpose(F_ARG)
{
  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Msg::Error("Wrong type of argument for function 'Transpose'");

  Cal_TransposeValue(A,V);
}

void F_Trace(F_ARG)
{
  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Msg::Error("Wrong type of argument for function 'Trace'");

  Cal_TraceValue(A,V);
}

void F_RotateXYZ(F_ARG)
{
  double  ca, sa, cb, sb, cc, sc ;
  struct  Value Rot ;

  if((A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR &&
      A->Type != VECTOR) ||
     (A+1)->Type != SCALAR || (A+2)->Type != SCALAR || (A+3)->Type != SCALAR)
    Msg::Error("Wrong type of argument(s) for function 'Rotate'");

  ca = cos((A+1)->Val[0]) ; sa = sin((A+1)->Val[0]) ;
  cb = cos((A+2)->Val[0]) ; sb = sin((A+2)->Val[0]) ;
  cc = cos((A+3)->Val[0]) ; sc = sin((A+3)->Val[0]) ;

  Rot.Type   = TENSOR ;
  Cal_ZeroValue(&Rot);
  Rot.Val[0] =  cb*cc;          Rot.Val[1] = -cb*sc;          Rot.Val[2] =  sb;
  Rot.Val[3] =  sa*sb*cc+ca*sc; Rot.Val[4] = -sa*sb*sc+ca*cc; Rot.Val[5] = -sa*cb;
  Rot.Val[6] = -ca*sb*cc+sa*sc; Rot.Val[7] =  ca*sb*sc+sa*cc; Rot.Val[8] =  ca*cb;

  Cal_RotateValue(&Rot,A,V);
}

/* ------------------------------------------------------------------------ */
/*  Norm                                                                    */
/* ------------------------------------------------------------------------ */

void F_Norm(F_ARG)
{
  int k ;

  switch(A->Type) {
    
  case SCALAR :
    if (Current.NbrHar == 1) {
      V->Val[0] = fabs(A->Val[0]) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = sqrt(SQU(A->Val[MAX_DIM*k]) + 
				 SQU(A->Val[MAX_DIM*(k+1)]));
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  case VECTOR :
    if (Current.NbrHar == 1) {
      V->Val[0] = sqrt(SQU(A->Val[0]) + SQU(A->Val[1]) + SQU(A->Val[2])) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = sqrt(SQU(A->Val[MAX_DIM* k     ]) + 
				 SQU(A->Val[MAX_DIM* k   +1]) +
				 SQU(A->Val[MAX_DIM* k   +2]) + 
				 SQU(A->Val[MAX_DIM*(k+1)  ]) + 
				 SQU(A->Val[MAX_DIM*(k+1)+1]) + 
				 SQU(A->Val[MAX_DIM*(k+1)+2])) ;
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  default :
    Msg::Error("Wrong type of argument for function 'Norm'");
    break;
  }

  V->Type = SCALAR ;
}

/* ------------------------------------------------------------------------ */
/*  Square Norm                                                             */
/* ------------------------------------------------------------------------ */

void F_SquNorm(F_ARG)
{
  int k ;

  switch(A->Type) {
    
  case SCALAR :
    if (Current.NbrHar == 1) {
      V->Val[0] = SQU(A->Val[0]) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = SQU(A->Val[MAX_DIM*k]) + SQU(A->Val[MAX_DIM*(k+1)]);
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  case VECTOR :
    if (Current.NbrHar == 1) {
      V->Val[0] = SQU(A->Val[0]) + SQU(A->Val[1]) + SQU(A->Val[2]) ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	V->Val[MAX_DIM*k] = SQU(A->Val[MAX_DIM* k     ]) + 
	                    SQU(A->Val[MAX_DIM* k   +1]) +
                            SQU(A->Val[MAX_DIM* k   +2]) + 
			    SQU(A->Val[MAX_DIM*(k+1)  ]) + 
			    SQU(A->Val[MAX_DIM*(k+1)+1]) + 
			    SQU(A->Val[MAX_DIM*(k+1)+2]) ;
	V->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    break ;

  default :
    Msg::Error("Wrong type of argument for function 'SquNorm'");
    break;
  }

  V->Type = SCALAR ;
}

/* ------------------------------------------------------------------------ */
/*  Unit                                                                    */
/* ------------------------------------------------------------------------ */

void F_Unit(F_ARG)
{
  int k ;
  double Norm ;

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
      Norm = sqrt(SQU(A->Val[0]) + SQU(A->Val[1]) + SQU(A->Val[2])) ;
      if (Norm > 1.e-30) {  /* Attention: tolerance */
	V->Val[0] = A->Val[0]/Norm ;
	V->Val[1] = A->Val[1]/Norm ;
	V->Val[2] = A->Val[2]/Norm ;
      }
      else {
	V->Val[0] = 0. ;
	V->Val[1] = 0. ;
	V->Val[2] = 0. ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2 ) {
	Norm = sqrt(SQU(A->Val[MAX_DIM* k     ]) +
		    SQU(A->Val[MAX_DIM* k   +1]) +
		    SQU(A->Val[MAX_DIM* k   +2]) +
		    SQU(A->Val[MAX_DIM*(k+1)  ]) +
		    SQU(A->Val[MAX_DIM*(k+1)+1]) +
		    SQU(A->Val[MAX_DIM*(k+1)+2])) ;
	if (Norm > 1.e-30) {  /* Attention: tolerance */
	  V->Val[MAX_DIM* k     ] = A->Val[MAX_DIM* k     ]/Norm ;
	  V->Val[MAX_DIM* k   +1] = A->Val[MAX_DIM* k   +1]/Norm ;
	  V->Val[MAX_DIM* k   +2] = A->Val[MAX_DIM* k   +2]/Norm ;
	  V->Val[MAX_DIM*(k+1)  ] = A->Val[MAX_DIM*(k+1)  ]/Norm ;
	  V->Val[MAX_DIM*(k+1)+1] = A->Val[MAX_DIM*(k+1)+1]/Norm ;
	  V->Val[MAX_DIM*(k+1)+2] = A->Val[MAX_DIM*(k+1)+2]/Norm ;
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
    Msg::Error("Wrong type of argument for function 'Unit'");
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  ScalarUnit                                                              */
/* ------------------------------------------------------------------------ */

void F_ScalarUnit(F_ARG)
{
  int k ;

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
}

/* ------------------------------------------------------------------------ */
/*  Time Functions                                                          */
/* ------------------------------------------------------------------------ */

/* Interesting only because it allows the same formal expression in both 
   Time and Frequency domains ! */

/* cos ( w * $Time + phi ) */

void F_Cos_wt_p (F_ARG)
{
  if (Current.NbrHar == 1)
    V->Val[0] = cos(Fct->Para[0] * Current.Time + Fct->Para[1]) ;
  else if (Current.NbrHar == 2) {
    V->Val[0]       = cos(Fct->Para[1]) ;
    V->Val[MAX_DIM] = sin(Fct->Para[1]) ;
  }
  else {
    Msg::Error("Too many harmonics for function 'Cos_wt_p'") ; 
  }
  V->Type = SCALAR ;
}

/* sin ( w * $Time + phi ) */

void F_Sin_wt_p (F_ARG)
{
  if (Current.NbrHar == 1)
    V->Val[0] = sin(Fct->Para[0] * Current.Time + Fct->Para[1]) ;
  else if (Current.NbrHar == 2){
    V->Val[0]       =  sin(Fct->Para[1]) ;
    V->Val[MAX_DIM] = -cos(Fct->Para[1]) ;
  }
  else {
    Msg::Error("Too many harmonics for function 'Sin_wt_p'") ; 
  }
  V->Type = SCALAR ;
}

void F_Complex_MH(F_ARG)
{
  int NbrFreq, NbrComp, i, j, k, l ;
  struct Value R;
  double * Val_Pulsation ;

  NbrFreq = Fct->NbrParameters ;
  NbrComp = Fct->NbrArguments ;
  if (NbrComp != 2*NbrFreq) 
    Msg::Error("Number of components does not equal twice the number "
	      "of frequencies in Complex_MH") ;

  R.Type = A->Type ;
  Cal_ZeroValue(&R);

  if (Current.NbrHar != 1) {
    Val_Pulsation = Current.DofData->Val_Pulsation ;   
    for (i=0 ; i<NbrFreq ; i++) {
      for (j = 0 ; j < Current.NbrHar/2 ; j++)      
	if (fabs (Val_Pulsation[j]-TWO_PI*Fct->Para[i]) <= 1e-10 * Val_Pulsation[j]) {
	  for (k=2*j,l=2*i ; k<2*j+2 ; k++,l++) {
	    switch(A->Type){  
	    case SCALAR :	 
	      R.Val[MAX_DIM*k  ] += (A+l)->Val[0] ; 
	      break;
	    case VECTOR :
	    case TENSOR_DIAG :
	      R.Val[MAX_DIM*k  ] += (A+l)->Val[0] ; 
	      R.Val[MAX_DIM*k+1] += (A+l)->Val[1] ;
	      R.Val[MAX_DIM*k+2] += (A+l)->Val[2] ;
	      break;
	    case TENSOR_SYM :
	      R.Val[MAX_DIM*k  ] += (A+l)->Val[0] ; 
	      R.Val[MAX_DIM*k+1] += (A+l)->Val[1] ;
	      R.Val[MAX_DIM*k+2] += (A+l)->Val[2] ;
	      R.Val[MAX_DIM*k+3] += (A+l)->Val[3] ; 
	      R.Val[MAX_DIM*k+4] += (A+l)->Val[4] ;
	      R.Val[MAX_DIM*k+5] += (A+l)->Val[5] ;
	      break;
	    case TENSOR :
	      R.Val[MAX_DIM*k  ] += (A+l)->Val[0] ; 
	      R.Val[MAX_DIM*k+1] += (A+l)->Val[1] ;
	      R.Val[MAX_DIM*k+2] += (A+l)->Val[2] ;
	      R.Val[MAX_DIM*k+3] += (A+l)->Val[3] ; 
	      R.Val[MAX_DIM*k+4] += (A+l)->Val[4] ;
	      R.Val[MAX_DIM*k+5] += (A+l)->Val[5] ;
	      R.Val[MAX_DIM*k+6] += (A+l)->Val[6] ;
	      R.Val[MAX_DIM*k+7] += (A+l)->Val[7] ;
	      R.Val[MAX_DIM*k+8] += (A+l)->Val[8] ;
	      break;
	    default :
	      Msg::Error("Unknown type of arguments in function 'Complex_MH'");
	      break;
	    }
	  }
	}
    }
  } else { /* time domain */
    for (i=0 ; i<NbrFreq ; i++) {
      Cal_AddMultValue (&R, A+2*i,    cos(TWO_PI*Fct->Para[i]*Current.Time), &R) ;
      Cal_AddMultValue (&R, A+2*i+1, -sin(TWO_PI*Fct->Para[i]*Current.Time), &R) ;
    }
  }
  Cal_CopyValue(&R,V);
}

/* ------------------------------------------------------------------------ */
/*  Period                                                                  */
/* ------------------------------------------------------------------------ */

void F_Period (F_ARG)
{
  if (Current.NbrHar == 1)
    V->Val[0] = fmod(A->Val[0], Fct->Para[0])
      + ((A->Val[0] < 0.)? Fct->Para[0] : 0.) ;
  else
    Msg::Error("Function 'F_Period' not valid for Complex");
  V->Type = SCALAR ;
}

/* ------------------------------------------------------------------------ */
/*  Interval                                                                */
/* ------------------------------------------------------------------------ */

void F_Interval (F_ARG)
{
  int     k;
  double  tmp;

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
}
