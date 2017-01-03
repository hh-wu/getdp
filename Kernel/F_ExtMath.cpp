// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego

#include <math.h>
#include "F.h"
#include "GeoData.h"
#include "DofData.h"
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
    Message::Error("Non scalar argument(s) for function 'Hypot'");

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
    Message::Error("Wrong type of argument for function 'Transpose'");

  Cal_TransposeValue(A,V);
}

void F_Inv(F_ARG)
{
  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Message::Error("Wrong type of argument for function 'Inverse'");

  Cal_InvertValue(A,V);
}

void F_Det(F_ARG)
{
  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Message::Error("Wrong type of argument for function 'Det'");

  Cal_DetValue(A,V);
}

void F_Trace(F_ARG)
{
  if(A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR)
    Message::Error("Wrong type of argument for function 'Trace'");

  Cal_TraceValue(A,V);
}

void F_RotateXYZ(F_ARG)
{
  // Apply a (X_1 Y_2 Z_3) rotation matrix using Euler (Tait-Bryan) angles
  double  ca, sa, cb, sb, cc, sc ;
  struct  Value Rot ;

  if((A->Type != TENSOR_DIAG && A->Type != TENSOR_SYM && A->Type != TENSOR &&
      A->Type != VECTOR) ||
     (A+1)->Type != SCALAR || (A+2)->Type != SCALAR || (A+3)->Type != SCALAR)
    Message::Error("Wrong type of argument(s) for function 'Rotate'");

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
    Message::Error("Wrong type of argument for function 'Norm'");
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
    Message::Error("Wrong type of argument for function 'SquNorm'");
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
    Message::Error("Wrong type of argument for function 'Unit'");
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
    Message::Error("Too many harmonics for function 'Cos_wt_p'") ;
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
    Message::Error("Too many harmonics for function 'Sin_wt_p'") ;
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
    Message::Error("Number of components does not equal twice the number "
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
	      Message::Error("Unknown type of arguments in function 'Complex_MH'");
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
    Message::Error("Function 'F_Period' not valid for Complex");
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

/* ------------------------------------------------------------------------ */
/*  Create a Complex Value from k Real Values (of same type!)               */
/* ------------------------------------------------------------------------ */

void F_Complex(F_ARG)
{
  int NbrPar = Fct->NbrParameters ;
  int NbrArg = Fct->NbrArguments ;

  if(NbrArg){
    if(NbrArg > NBR_MAX_HARMONIC){
      Message::Error("Too many arguments for Complex[]");
      return;
    }
  }
  else if(NbrPar){
    if(NbrPar > NBR_MAX_HARMONIC){
      Message::Error("Too many parameters for Complex[]");
      return;
    }
  }
  else{
    Message::Error("Missing arguments or parameters for Complex[]");
    return;
  }

  int k ;

  if(NbrPar){
    for (k = 0 ; k < Current.NbrHar ; k++)
      V->Val[MAX_DIM*k] = Fct->Para[k] ;
    for (k = Current.NbrHar ; k < NbrPar ; k++)
      V->Val[MAX_DIM*k] = 0. ;
    V->Type = SCALAR;
    return;
  }

  switch(A->Type){

  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Message::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k] = (A+k)->Val[0] ;
    }
    for (k = Current.NbrHar ; k < NbrArg ; k++) {
      V->Val[MAX_DIM*k] = 0. ;
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Message::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k  ] = (A+k)->Val[0] ;
      V->Val[MAX_DIM*k+1] = (A+k)->Val[1] ;
      V->Val[MAX_DIM*k+2] = (A+k)->Val[2] ;
    }
    for (k = Current.NbrHar ; k < NbrArg ; k++) {
      V->Val[MAX_DIM*k  ] = 0. ;
      V->Val[MAX_DIM*k+1] = 0. ;
      V->Val[MAX_DIM*k+2] = 0. ;
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Message::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k  ] = (A+k)->Val[0] ;
      V->Val[MAX_DIM*k+1] = (A+k)->Val[1] ;
      V->Val[MAX_DIM*k+2] = (A+k)->Val[2] ;
      V->Val[MAX_DIM*k+3] = (A+k)->Val[3] ;
      V->Val[MAX_DIM*k+4] = (A+k)->Val[4] ;
      V->Val[MAX_DIM*k+5] = (A+k)->Val[5] ;
    }
    for (k = Current.NbrHar ; k < NbrArg ; k++) {
      V->Val[MAX_DIM*k  ] = 0. ;
      V->Val[MAX_DIM*k+1] = 0. ;
      V->Val[MAX_DIM*k+2] = 0. ;
      V->Val[MAX_DIM*k+3] = 0. ;
      V->Val[MAX_DIM*k+4] = 0. ;
      V->Val[MAX_DIM*k+5] = 0. ;
    }
    break;

  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Message::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k  ] = (A+k)->Val[0] ;
      V->Val[MAX_DIM*k+1] = (A+k)->Val[1] ;
      V->Val[MAX_DIM*k+2] = (A+k)->Val[2] ;
      V->Val[MAX_DIM*k+3] = (A+k)->Val[3] ;
      V->Val[MAX_DIM*k+4] = (A+k)->Val[4] ;
      V->Val[MAX_DIM*k+5] = (A+k)->Val[5] ;
      V->Val[MAX_DIM*k+6] = (A+k)->Val[6] ;
      V->Val[MAX_DIM*k+7] = (A+k)->Val[7] ;
      V->Val[MAX_DIM*k+8] = (A+k)->Val[8] ;
    }
    for (k = Current.NbrHar ; k < NbrArg ; k++) {
      V->Val[MAX_DIM*k  ] = 0. ;
      V->Val[MAX_DIM*k+1] = 0. ;
      V->Val[MAX_DIM*k+2] = 0. ;
      V->Val[MAX_DIM*k+3] = 0. ;
      V->Val[MAX_DIM*k+4] = 0. ;
      V->Val[MAX_DIM*k+5] = 0. ;
      V->Val[MAX_DIM*k+6] = 0. ;
      V->Val[MAX_DIM*k+7] = 0. ;
      V->Val[MAX_DIM*k+8] = 0. ;
    }
    break;

  default :
    Message::Error("Unknown type of arguments in function 'Complex'");
    break;
  }

  V->Type = A->Type ;
}


/* ----------------------------------------------------------------------- */
/*  Get the Real Part of a Value                                            */
/* ------------------------------------------------------------------------ */

void F_Re(F_ARG)
{
  int k ;

  switch (A->Type) {
  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k]     = A->Val[MAX_DIM*k] ;
      V->Val[MAX_DIM*(k+1)] = 0. ;
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     = A->Val[MAX_DIM*k  ] ;
      V->Val[MAX_DIM*k+1]     = A->Val[MAX_DIM*k+1] ;
      V->Val[MAX_DIM*k+2]     = A->Val[MAX_DIM*k+2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     = A->Val[MAX_DIM*k  ] ;
      V->Val[MAX_DIM*k+1]     = A->Val[MAX_DIM*k+1] ;
      V->Val[MAX_DIM*k+2]     = A->Val[MAX_DIM*k+2] ;
      V->Val[MAX_DIM*k+3]     = A->Val[MAX_DIM*k+3] ;
      V->Val[MAX_DIM*k+4]     = A->Val[MAX_DIM*k+4] ;
      V->Val[MAX_DIM*k+5]     = A->Val[MAX_DIM*k+5] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
      V->Val[MAX_DIM*(k+1)+3] = 0. ;
      V->Val[MAX_DIM*(k+1)+4] = 0. ;
      V->Val[MAX_DIM*(k+1)+5] = 0. ;
    }
    break;

  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     = A->Val[MAX_DIM*k  ] ;
      V->Val[MAX_DIM*k+1]     = A->Val[MAX_DIM*k+1] ;
      V->Val[MAX_DIM*k+2]     = A->Val[MAX_DIM*k+2] ;
      V->Val[MAX_DIM*k+3]     = A->Val[MAX_DIM*k+3] ;
      V->Val[MAX_DIM*k+4]     = A->Val[MAX_DIM*k+4] ;
      V->Val[MAX_DIM*k+5]     = A->Val[MAX_DIM*k+5] ;
      V->Val[MAX_DIM*k+6]     = A->Val[MAX_DIM*k+6] ;
      V->Val[MAX_DIM*k+7]     = A->Val[MAX_DIM*k+7] ;
      V->Val[MAX_DIM*k+8]     = A->Val[MAX_DIM*k+8] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
      V->Val[MAX_DIM*(k+1)+3] = 0. ;
      V->Val[MAX_DIM*(k+1)+4] = 0. ;
      V->Val[MAX_DIM*(k+1)+5] = 0. ;
      V->Val[MAX_DIM*(k+1)+6] = 0. ;
      V->Val[MAX_DIM*(k+1)+7] = 0. ;
      V->Val[MAX_DIM*(k+1)+8] = 0. ;
    }
    break;

  default :
    Message::Error("Unknown type of arguments in function 'Re'");
    break;
  }

  V->Type = A->Type ;
}

/* ------------------------------------------------------------------------ */
/*  Get the Imaginary Part of a Value                                       */
/* ------------------------------------------------------------------------ */

void  F_Im(F_ARG)
{
  int k ;

  switch (A->Type) {
  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k]     = A->Val[MAX_DIM*(k+1)] ;
      V->Val[MAX_DIM*(k+1)] = 0. ;
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     = A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*k+1]     = A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*k+2]     = A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     = A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*k+1]     = A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*k+2]     = A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*k+3]     = A->Val[MAX_DIM*(k+1)+3] ;
      V->Val[MAX_DIM*k+4]     = A->Val[MAX_DIM*(k+1)+4] ;
      V->Val[MAX_DIM*k+5]     = A->Val[MAX_DIM*(k+1)+5] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
      V->Val[MAX_DIM*(k+1)+3] = 0. ;
      V->Val[MAX_DIM*(k+1)+4] = 0. ;
      V->Val[MAX_DIM*(k+1)+5] = 0. ;
    }
    break;

  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     = A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*k+1]     = A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*k+2]     = A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*k+3]     = A->Val[MAX_DIM*(k+1)+3] ;
      V->Val[MAX_DIM*k+4]     = A->Val[MAX_DIM*(k+1)+4] ;
      V->Val[MAX_DIM*k+5]     = A->Val[MAX_DIM*(k+1)+5] ;
      V->Val[MAX_DIM*k+6]     = A->Val[MAX_DIM*(k+1)+6] ;
      V->Val[MAX_DIM*k+7]     = A->Val[MAX_DIM*(k+1)+7] ;
      V->Val[MAX_DIM*k+8]     = A->Val[MAX_DIM*(k+1)+8] ;
      V->Val[MAX_DIM*(k+1)  ] = 0. ;
      V->Val[MAX_DIM*(k+1)+1] = 0. ;
      V->Val[MAX_DIM*(k+1)+2] = 0. ;
      V->Val[MAX_DIM*(k+1)+3] = 0. ;
      V->Val[MAX_DIM*(k+1)+4] = 0. ;
      V->Val[MAX_DIM*(k+1)+5] = 0. ;
      V->Val[MAX_DIM*(k+1)+6] = 0. ;
      V->Val[MAX_DIM*(k+1)+7] = 0. ;
      V->Val[MAX_DIM*(k+1)+8] = 0. ;
    }
    break;

  default :
    Message::Error("Unknown type of arguments in function 'Re'");
    break;
  }

  V->Type = A->Type ;
}

/* ------------------------------------------------------------------------ */
/*  Conjugate                                                               */
/* ------------------------------------------------------------------------ */

void F_Conj(F_ARG)
{
  int k ;

  switch (A->Type) {
  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k]     =  A->Val[MAX_DIM*k] ;
      V->Val[MAX_DIM*(k+1)] = -A->Val[MAX_DIM*(k+1)] ;
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     =  A->Val[MAX_DIM*k  ] ;
      V->Val[MAX_DIM*k+1]     =  A->Val[MAX_DIM*k+1] ;
      V->Val[MAX_DIM*k+2]     =  A->Val[MAX_DIM*k+2] ;
      V->Val[MAX_DIM*(k+1)  ] = -A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*(k+1)+1] = -A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*(k+1)+2] = -A->Val[MAX_DIM*(k+1)+2] ;
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     =  A->Val[MAX_DIM*k  ] ;
      V->Val[MAX_DIM*k+1]     =  A->Val[MAX_DIM*k+1] ;
      V->Val[MAX_DIM*k+2]     =  A->Val[MAX_DIM*k+2] ;
      V->Val[MAX_DIM*k+3]     =  A->Val[MAX_DIM*k+3] ;
      V->Val[MAX_DIM*k+4]     =  A->Val[MAX_DIM*k+4] ;
      V->Val[MAX_DIM*k+5]     =  A->Val[MAX_DIM*k+5] ;
      V->Val[MAX_DIM*(k+1)  ] = -A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*(k+1)+1] = -A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*(k+1)+2] = -A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*(k+1)+3] = -A->Val[MAX_DIM*(k+1)+3] ;
      V->Val[MAX_DIM*(k+1)+4] = -A->Val[MAX_DIM*(k+1)+4] ;
      V->Val[MAX_DIM*(k+1)+5] = -A->Val[MAX_DIM*(k+1)+5] ;
    }
    break;

  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      V->Val[MAX_DIM*k  ]     =  A->Val[MAX_DIM*k  ] ;
      V->Val[MAX_DIM*k+1]     =  A->Val[MAX_DIM*k+1] ;
      V->Val[MAX_DIM*k+2]     =  A->Val[MAX_DIM*k+2] ;
      V->Val[MAX_DIM*k+3]     =  A->Val[MAX_DIM*k+3] ;
      V->Val[MAX_DIM*k+4]     =  A->Val[MAX_DIM*k+4] ;
      V->Val[MAX_DIM*k+5]     =  A->Val[MAX_DIM*k+5] ;
      V->Val[MAX_DIM*k+6]     =  A->Val[MAX_DIM*k+6] ;
      V->Val[MAX_DIM*k+7]     =  A->Val[MAX_DIM*k+7] ;
      V->Val[MAX_DIM*k+8]     =  A->Val[MAX_DIM*k+8] ;
      V->Val[MAX_DIM*(k+1)  ] = -A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*(k+1)+1] = -A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*(k+1)+2] = -A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*(k+1)+3] = -A->Val[MAX_DIM*(k+1)+3] ;
      V->Val[MAX_DIM*(k+1)+4] = -A->Val[MAX_DIM*(k+1)+4] ;
      V->Val[MAX_DIM*(k+1)+5] = -A->Val[MAX_DIM*(k+1)+5] ;
      V->Val[MAX_DIM*(k+1)+6] = -A->Val[MAX_DIM*(k+1)+6] ;
      V->Val[MAX_DIM*(k+1)+7] = -A->Val[MAX_DIM*(k+1)+7] ;
      V->Val[MAX_DIM*(k+1)+8] = -A->Val[MAX_DIM*(k+1)+8] ;
    }
    break;

  default :
    Message::Error("Unknown type of arguments in function 'Conj'");
    break;
  }

  V->Type = A->Type ;
}

/* -------------------------------------------------------------------------------- */
/*  Cartesian coordinates (Re,Im) to polar coordinates (Amplitude,phase[Radians])   */
/* -------------------------------------------------------------------------------- */

void F_Cart2Pol(F_ARG)
{
  int k ;
  double Re, Im;

  switch (A->Type) {
  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      Re = A->Val[MAX_DIM*k] ; Im = A->Val[MAX_DIM*(k+1)] ;
      V->Val[MAX_DIM*k] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)] = atan2(Im,Re);
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      Re = A->Val[MAX_DIM*k  ] ; Im = A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*k  ] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)  ] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+1] ; Im = A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*k+1] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+1] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+2] ; Im = A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*k+2] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+2] = atan2(Im,Re);
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      Re = A->Val[MAX_DIM*k  ] ; Im = A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*k  ] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)  ] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+1] ; Im = A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*k+1] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+1] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+2] ; Im = A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*k+2] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+2] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+3] ; Im = A->Val[MAX_DIM*(k+1)+3] ;
      V->Val[MAX_DIM*k+3] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+3] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+4] ; Im = A->Val[MAX_DIM*(k+1)+4] ;
      V->Val[MAX_DIM*k+4] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+4] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+5] ; Im = A->Val[MAX_DIM*(k+1)+5] ;
      V->Val[MAX_DIM*k+5] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+5] = atan2(Im,Re);
    }
    break;

  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k+=2) {
      Re = A->Val[MAX_DIM*k  ] ; Im = A->Val[MAX_DIM*(k+1)  ] ;
      V->Val[MAX_DIM*k  ] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)  ] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+1] ; Im = A->Val[MAX_DIM*(k+1)+1] ;
      V->Val[MAX_DIM*k+1] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+1] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+2] ; Im = A->Val[MAX_DIM*(k+1)+2] ;
      V->Val[MAX_DIM*k+2] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+2] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+3] ; Im = A->Val[MAX_DIM*(k+1)+3] ;
      V->Val[MAX_DIM*k+3] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+3] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+4] ; Im = A->Val[MAX_DIM*(k+1)+4] ;
      V->Val[MAX_DIM*k+4] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+4] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+5] ; Im = A->Val[MAX_DIM*(k+1)+5] ;
      V->Val[MAX_DIM*k+5] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+5] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+6] ; Im = A->Val[MAX_DIM*(k+1)+6] ;
      V->Val[MAX_DIM*k+6] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+6] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+7] ; Im = A->Val[MAX_DIM*(k+1)+7] ;
      V->Val[MAX_DIM*k+7] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+7] = atan2(Im,Re);
      Re = A->Val[MAX_DIM*k+8] ; Im = A->Val[MAX_DIM*(k+1)+8] ;
      V->Val[MAX_DIM*k+8] = sqrt(SQU(Re)+SQU(Im)) ; V->Val[MAX_DIM*(k+1)+8] = atan2(Im,Re);
    }
    break;

  default :
    Message::Error("Unknown type of arguments in function 'Cart2Pol'");
    break;
  }

  V->Type = A->Type ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Vector from 3 Scalar                                           */
/* ------------------------------------------------------------------------ */

void F_Vector(F_ARG)
{
  int k ;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR)
    Message::Error("Non scalar argument(s) for function 'Vector'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (A  )->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
  }
  V->Type = VECTOR ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Tensor from 9 Scalar                                           */
/* ------------------------------------------------------------------------ */

void F_Tensor(F_ARG)
{
  int k ;

  if(  (A)->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR ||
     (A+3)->Type != SCALAR || (A+4)->Type != SCALAR || (A+5)->Type != SCALAR ||
     (A+6)->Type != SCALAR || (A+7)->Type != SCALAR || (A+8)->Type != SCALAR )
    Message::Error("Non scalar argument(s) for function 'Tensor'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (A  )->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+3] = (A+3)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+4] = (A+4)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+5] = (A+5)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+6] = (A+6)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+7] = (A+7)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+8] = (A+8)->Val[MAX_DIM*k] ;
  }
  V->Type = TENSOR ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Symmetric Tensor from 6 Scalar                                 */
/* ------------------------------------------------------------------------ */

void F_TensorSym(F_ARG)
{
  int k ;

  if(  (A)->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR ||
     (A+3)->Type != SCALAR || (A+4)->Type != SCALAR || (A+5)->Type != SCALAR )
    Message::Error("Non scalar argument(s) for function 'TensorSym'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (A  )->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+3] = (A+3)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+4] = (A+4)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+5] = (A+5)->Val[MAX_DIM*k] ;
  }
  V->Type = TENSOR_SYM ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Diagonal Tensor from 3 Scalar                                  */
/* ------------------------------------------------------------------------ */

void F_TensorDiag(F_ARG)
{
  int k ;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR)
    Message::Error("Non scalar argument(s) for function 'TensorDiag'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] =     A->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
  }
  V->Type = TENSOR_DIAG ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Tensor from 3 Vector                                           */
/* ------------------------------------------------------------------------ */

void F_TensorV(F_ARG)
{
  int k ;

  if((A)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR)
    Message::Error("Non scalar argument(s) for function 'TensorV'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (A  )->Val[MAX_DIM*k  ] ;
    V->Val[MAX_DIM*k+1] = (A  )->Val[MAX_DIM*k+1] ;
    V->Val[MAX_DIM*k+2] = (A  )->Val[MAX_DIM*k+2] ;
    V->Val[MAX_DIM*k+3] = (A+1)->Val[MAX_DIM*k  ] ;
    V->Val[MAX_DIM*k+4] = (A+1)->Val[MAX_DIM*k+1] ;
    V->Val[MAX_DIM*k+5] = (A+1)->Val[MAX_DIM*k+2] ;
    V->Val[MAX_DIM*k+6] = (A+2)->Val[MAX_DIM*k  ] ;
    V->Val[MAX_DIM*k+7] = (A+2)->Val[MAX_DIM*k+1] ;
    V->Val[MAX_DIM*k+8] = (A+2)->Val[MAX_DIM*k+2] ;
  }
  V->Type = TENSOR ;
}

/* ------------------------------------------------------------------------ */
/*  Dyadic product                                                          */
/* ------------------------------------------------------------------------ */

void F_SquDyadicProduct(F_ARG)
{
  int k ;
  double t11, t12, t13, t22, t23, t33 ;

  if (A->Type != VECTOR)
    Message::Error("Non vector argument for function 'TensorDyadic'");

  t11 = SQU(A->Val[0]) ;  t22 = SQU(A->Val[1]) ;  t33 = SQU(A->Val[2]) ;
  t12 = A->Val[0] * A->Val[1] ;  t13 = A->Val[0] * A->Val[2] ;
  t23 = A->Val[1] * A->Val[2] ;

  V->Val[0] = t11 ;  V->Val[1] = t12 ;  V->Val[2] = t13 ;
  V->Val[3] = t22 ;  V->Val[4] = t23 ;  V->Val[5] = t33 ;

  /* Attention : a revoir */
  if (Current.NbrHar > 1) {
    V->Val[MAX_DIM  ] = V->Val[MAX_DIM+1] = V->Val[MAX_DIM+2] =
      V->Val[MAX_DIM+3] = V->Val[MAX_DIM+4] = V->Val[MAX_DIM+5] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k++) {
      V->Val[MAX_DIM*k  ] = V->Val[MAX_DIM*k+1] = V->Val[MAX_DIM*k+2] =
	V->Val[MAX_DIM*k+3] = V->Val[MAX_DIM*k+4] = V->Val[MAX_DIM*k+5] = 0. ;
    }
  }

  V->Type = TENSOR_SYM ;
}

/* ------------------------------------------------------------------------ */
/*  Get Vector Components                                                   */
/* ------------------------------------------------------------------------ */

#define get_comp_vector(index, string)					\
  int k ;								\
									\
  if(A->Type != VECTOR)							\
    Message::Error("Non vector argument for function '" string "'");	\
									\
  for (k = 0 ; k < Current.NbrHar ; k++) {				\
    V->Val[MAX_DIM*k  ] = A->Val[MAX_DIM*k+index] ;			\
  }									\
  V->Type = SCALAR ;

void F_CompX(F_ARG){ get_comp_vector(0, "CompX") }
void F_CompY(F_ARG){ get_comp_vector(1, "CompY") }
void F_CompZ(F_ARG){ get_comp_vector(2, "CompZ") }

void F_Comp(F_ARG){
  if (Fct->NbrParameters != 1)
    Message::Error("Function 'Comp': one parameter needed to define component index");
  if ((int)(Fct->Para[0]) < 0 || (int)(Fct->Para[0]) > 2)
    Message::Error("Function 'Comp': parameter (%g) out of range (must be 0, 1 or 2)", Fct->Para[0]);

  get_comp_vector((int)(Fct->Para[0]), "Comp")
}

#undef get_comp_vector

/* ------------------------------------------------------------------------ */
/*  Get Tensor Components                                                   */
/* ------------------------------------------------------------------------ */

#define get_comp_tensor(i, is, id, string)						\
  int k ;										\
											\
  switch(A->Type) {									\
  case TENSOR :										\
    for (k=0; k<Current.NbrHar; k++) V->Val[MAX_DIM*k] = A->Val[MAX_DIM*k+(i)] ;	\
    break ;										\
  case TENSOR_SYM :									\
    for (k=0; k<Current.NbrHar; k++) V->Val[MAX_DIM*k] = A->Val[MAX_DIM*k+(is)] ;	\
    break ;										\
  case TENSOR_DIAG :									\
    if(id >= 0)										\
      for (k=0; k<Current.NbrHar; k++) V->Val[MAX_DIM*k] = A->Val[MAX_DIM*k+(id)] ;	\
    else										\
      for (k=0; k<Current.NbrHar; k++) V->Val[MAX_DIM*k] = 0.;				\
    break ;										\
  case SCALAR :										\
    for (k=0; k<Current.NbrHar; k++) V->Val[MAX_DIM*k] = A->Val[MAX_DIM*k] ;	\
    break ;										\
  default :										\
    Message::Error("Non tensor or scalar argument for function '" string "'");			\
    break;										\
  }											\
  V->Type = SCALAR ;

void F_CompXX(F_ARG){ get_comp_tensor(0,0, 0,"CompXX") }
void F_CompXY(F_ARG){ get_comp_tensor(1,1,-1,"CompXY") }
void F_CompXZ(F_ARG){ get_comp_tensor(2,2,-1,"CompXZ") }
void F_CompYX(F_ARG){ get_comp_tensor(3,1,-1,"CompYX") }
void F_CompYY(F_ARG){ get_comp_tensor(4,3, 1,"CompYY") }
void F_CompYZ(F_ARG){ get_comp_tensor(5,4,-1,"CompYZ") }
void F_CompZX(F_ARG){ get_comp_tensor(6,2,-1,"CompZX") }
void F_CompZY(F_ARG){ get_comp_tensor(7,4,-1,"CompZY") }
void F_CompZZ(F_ARG){ get_comp_tensor(8,5, 2,"CompZZ") }

#undef get_comp_tensor

/* ------------------------------------------------------------------------ */
/*  Get Tensor for transformation of vector                                 */
/*  from cartesian to spherical coordinate system                           */
/* ------------------------------------------------------------------------ */

void F_Cart2Sph(F_ARG)
{
  int k ;
  double theta, phi ;

  if((A)->Type != VECTOR)
     Message::Error("Vector argument required for Function 'Cart2Sph'");

  /* Warning! This is the physic's convention. For the math
     convention, switch theta and phi. */

  theta = atan2( sqrt(SQU(A->Val[0])+ SQU(A->Val[1])) ,  A->Val[2] ) ;
  phi = atan2( A->Val[1] , A->Val[0] ) ;

  /* r basis vector */
  V->Val[0] = sin(theta) * cos(phi) ;
  V->Val[1] = sin(theta) * sin(phi) ;
  V->Val[2] = cos(theta) ;

  /* theta basis vector */
  V->Val[3] = cos(theta) * cos(phi) ;
  V->Val[4] = cos(theta) * sin(phi) ;
  V->Val[5] = - sin(theta) ;

  /* phi basis vector */
  V->Val[6] = - sin(phi) ;
  V->Val[7] = cos(phi) ;
  V->Val[8] = 0. ;

  for (k = 0 ; k < Current.NbrHar ; k+=2) {
    V->Val[MAX_DIM*k  ] = V->Val[0] ;
    V->Val[MAX_DIM*k+1] = V->Val[1] ;
    V->Val[MAX_DIM*k+2] = V->Val[2] ;
    V->Val[MAX_DIM*k+3] = V->Val[3] ;
    V->Val[MAX_DIM*k+4] = V->Val[4] ;
    V->Val[MAX_DIM*k+5] = V->Val[5] ;
    V->Val[MAX_DIM*k+6] = V->Val[6] ;
    V->Val[MAX_DIM*k+7] = V->Val[7] ;
    V->Val[MAX_DIM*k+8] = V->Val[8] ;
    V->Val[MAX_DIM*(k+1)  ] = 0. ;
    V->Val[MAX_DIM*(k+1)+1] = 0. ;
    V->Val[MAX_DIM*(k+1)+2] = 0. ;
    V->Val[MAX_DIM*(k+1)+3] = 0. ;
    V->Val[MAX_DIM*(k+1)+4] = 0. ;
    V->Val[MAX_DIM*(k+1)+5] = 0. ;
    V->Val[MAX_DIM*(k+1)+6] = 0. ;
    V->Val[MAX_DIM*(k+1)+7] = 0. ;
    V->Val[MAX_DIM*(k+1)+8] = 0. ;
  }
  V->Type = TENSOR ;
}

/* ------------------------------------------------------------------------ */
/*  Get Tensor for transformation of vector                                 */
/*  from cartesian to cylindric coordinate system                           */
/*  vector              ->  Cart2Cyl[XYZ[]] * vector                        */
/*  (x,y,z)-components  ->  (radial, tangential, axial)-components          */
/* ------------------------------------------------------------------------ */

void F_Cart2Cyl(F_ARG)
{
  int k ;
  double theta ;

  if((A)->Type != VECTOR)
     Message::Error("Vector argument required for Function 'Cart2Cyl'");

  theta = atan2(A->Val[1] , A->Val[0]) ;

  V->Val[0] =  cos(theta) ;
  V->Val[1] =  sin(theta) ;
  V->Val[2] =  0 ;
  V->Val[3] = -sin(theta) ;
  V->Val[4] =  cos(theta) ;
  V->Val[5] =  0 ;
  V->Val[6] =  0 ;
  V->Val[7] =  0 ;
  V->Val[8] =  1. ;

  for (k = 0 ; k < Current.NbrHar ; k+=2) {
    V->Val[MAX_DIM*k  ] = V->Val[0] ;
    V->Val[MAX_DIM*k+1] = V->Val[1] ;
    V->Val[MAX_DIM*k+2] = V->Val[2] ;
    V->Val[MAX_DIM*k+3] = V->Val[3] ;
    V->Val[MAX_DIM*k+4] = V->Val[4] ;
    V->Val[MAX_DIM*k+5] = V->Val[5] ;
    V->Val[MAX_DIM*k+6] = V->Val[6] ;
    V->Val[MAX_DIM*k+7] = V->Val[7] ;
    V->Val[MAX_DIM*k+8] = V->Val[8] ;
    V->Val[MAX_DIM*(k+1)  ] = 0. ;
    V->Val[MAX_DIM*(k+1)+1] = 0. ;
    V->Val[MAX_DIM*(k+1)+2] = 0. ;
    V->Val[MAX_DIM*(k+1)+3] = 0. ;
    V->Val[MAX_DIM*(k+1)+4] = 0. ;
    V->Val[MAX_DIM*(k+1)+5] = 0. ;
    V->Val[MAX_DIM*(k+1)+6] = 0. ;
    V->Val[MAX_DIM*(k+1)+7] = 0. ;
    V->Val[MAX_DIM*(k+1)+8] = 0. ;
  }
  V->Type = TENSOR ;
}

/* ------------------------------------------------------------------------ */
/*  U n i t V e c t o r X, Y, Z                                             */
/* ------------------------------------------------------------------------ */

void F_UnitVectorX(F_ARG)
{
  int k ;

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (k)? 0.:1. ;
    V->Val[MAX_DIM*k+1] = 0. ;
    V->Val[MAX_DIM*k+2] = 0. ;
  }
  V->Type = VECTOR ;
}

void F_UnitVectorY(F_ARG)
{
  int k ;

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = 0. ;
    V->Val[MAX_DIM*k+1] = (k)? 0.:1. ;
    V->Val[MAX_DIM*k+2] = 0. ;
  }
  V->Type = VECTOR ;
}

void F_UnitVectorZ(F_ARG)
{
  int k ;

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = 0. ;
    V->Val[MAX_DIM*k+1] = 0. ;
    V->Val[MAX_DIM*k+2] = (k)? 0.:1. ;
  }
  V->Type = VECTOR ;
}
