#define RCSID "$Id: F_MultiHar.c,v 1.9 2000-11-03 15:24:18 gyselinc Exp $"
#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

#include "GetDP.h" 
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "Cal_Quantity.h" 
#include "CurrentData.h"
#include "Data_Numeric.h"
#include "Tools.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V


/*  M U L T I   H A R M O N I C  */

struct DofData * MH_Init = NULL ;
int NbrTimePoint_MH, NbrTimePointForSP_MH, NbrTimePointForGP_MH  ;
double *t_MH, *w_MH ; /* [ NBR_TIME_POINT ] */
double **Psi_MH ; /* [ NBR_TIME_POINT ] [ NBR_HARMONIC ] */
double ***PsiPsi_MH ; /* [ NBR_TIME_POINT ] [ NBR_HARMONIC ] [ NBR_HARMONIC ] */

int Current_iTime = 0 ;
double Matrix2_MH [ NBR_MAX_HARMONIC * 3 ] [ NBR_MAX_HARMONIC * 3 ] ;



/* ------------------------------------------------------------------------ */
/*  F_MHToTime                                                              */
/* ------------------------------------------------------------------------ */


void  F_MHToTime (F_ARG) {

  int  k ;
  double  tmp[3] ;

  GetDP_Begin("F_MHToTime");

  if (Current.NbrHar == 1) {
    GetDP_End ;
  }

  if (MH_Init != Current.DofData) {
    Msg(ERROR, "Init not done for MultiHarmonics") ;
  }

  switch (A->Type) {
  case SCALAR :

    tmp[0] = 0. ;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      tmp[0] += A->Val[ MAX_DIM * k ] * Psi_MH [ Current_iTime ] [ k ] ;
      V->Val[MAX_DIM*k] = 0. ;
    }
    V->Val[0] = tmp[0] ;

    break;

  case VECTOR :
  case TENSOR_DIAG :

    tmp[0] = tmp[1] = tmp[2] = 0. ;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      tmp[0] += A->Val[MAX_DIM * k   ] * Psi_MH [ Current_iTime ] [ k ] ;
      tmp[1] +=	A->Val[MAX_DIM * k +1] * Psi_MH [ Current_iTime ] [ k ] ;
      tmp[2] += A->Val[MAX_DIM * k +2] * Psi_MH [ Current_iTime ] [ k ] ;
      V->Val[MAX_DIM*k  ] = 0. ;
      V->Val[MAX_DIM*k+1] = 0. ;
      V->Val[MAX_DIM*k+2] = 0. ;
    }
    V->Val[0] = tmp[0] ;  V->Val[1] = tmp[1] ;  V->Val[2] = tmp[2] ;

    break;

  case TENSOR_SYM :
  case TENSOR :
    Msg(ERROR, "MHToTime not done for Tensor");
    break;

  default :
    Msg(ERROR, "Unknown Type of Arguments in function 'MHToTime'");
    break;
  }
  
  V->Type = A->Type ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  MH_InitTimes                                                            */
/* ------------------------------------------------------------------------ */

void  MH_InitTimes(int NbrHar, double Val_Pulsation[], 
		   int NbrTimePointForSmallestPeriod, int NbrTimePointForGreatestPeriod, 
		   int Flag_Psi) {

  int iPul, iTime, iHar, jHar ;
  double MaxPulsation, MinPulsation ;


  GetDP_Begin("MH_InitTimes");


  /* NbrTimePoint_M */

  MaxPulsation = 0. ; MinPulsation = 1.e99 ;
  for ( iPul = 0 ; iPul < NbrHar /2 ; iPul++ ) {
    if ( Val_Pulsation [ iPul ] &&  Val_Pulsation [ iPul ] < MinPulsation )
      MinPulsation = Val_Pulsation [ iPul ] ;
    if ( Val_Pulsation [ iPul ] &&  Val_Pulsation [ iPul ] > MaxPulsation )
      MaxPulsation = Val_Pulsation [ iPul ] ;
  }

  if ( (NbrTimePointForSmallestPeriod && NbrTimePointForGreatestPeriod) ||
       (!NbrTimePointForSmallestPeriod && !NbrTimePointForGreatestPeriod) )
    Msg(ERROR, "MH_InitTimes: NbrTimePoint_MH cannot be determined") ;

  if (NbrTimePointForSmallestPeriod){
    NbrTimePointForSP_MH = NbrTimePointForSmallestPeriod ;
    NbrTimePointForGP_MH = 0 ;
    NbrTimePoint_MH = (int)rint((double)MaxPulsation / (double)MinPulsation 
		             * (double)NbrTimePointForSmallestPeriod) ;
  }else{ 
    NbrTimePointForGP_MH = NbrTimePointForGreatestPeriod ;
    NbrTimePointForSP_MH = 0 ;
    NbrTimePoint_MH = NbrTimePointForGreatestPeriod ;
  }

  printf ("MH_InitTime => NbrHar = %d  NbrTimePoint_MH = %d \n", NbrHar, NbrTimePoint_MH );

  /* Trapezoidal integration */

  Psi_MH = (double **)Malloc(sizeof(double *)*NbrTimePoint_MH) ;
  for (iTime=0 ; iTime<NbrTimePoint_MH ; iTime++)
    Psi_MH[iTime] = (double *)Malloc(sizeof(double)*NbrHar) ;


  if (!Flag_Psi) {
    PsiPsi_MH = (double ***)Malloc(sizeof(double **)*NbrTimePoint_MH) ;
    for (iTime=0 ; iTime<NbrTimePoint_MH ; iTime++) {
      PsiPsi_MH[iTime] = (double **)Malloc(sizeof(double *)*NbrHar) ;
      for (iHar=0 ; iHar<NbrHar ; iHar++)
	PsiPsi_MH[iTime][iHar] = (double *)Malloc(sizeof(double)*NbrHar) ;
    }
  }

  t_MH = (double *)Malloc(sizeof(double)*NbrTimePoint_MH) ;
  for ( iTime = 0 ; iTime < NbrTimePoint_MH ; iTime++ ) {
    t_MH [ iTime ] = (double)iTime / ( (double)NbrTimePoint_MH - 1. ) 
      / ( MinPulsation / TWO_PI ) ;
  } 

  if (!Flag_Psi) {
    w_MH = (double *)Malloc(sizeof(double)*NbrTimePoint_MH) ;
    for ( iTime = 0 ; iTime < NbrTimePoint_MH ; iTime++ ) {
      w_MH [ iTime ] = 2. / ( (double)NbrTimePoint_MH - 1.0 ) ;
    } 
    w_MH [ 0 ] = w_MH [ NbrTimePoint_MH - 1 ]  = 1. / ( (double)NbrTimePoint_MH - 1.) ;
  }

  for ( iTime = 0 ; iTime < NbrTimePoint_MH ; iTime++ ) {
    for ( iPul = 0 ; iPul < NbrHar /2 ; iPul++ ) {
      if ( Val_Pulsation [ iPul ] ){
	Psi_MH [iTime] [2* iPul    ] =   cos ( Val_Pulsation [iPul] * t_MH [iTime] ) ;
	Psi_MH [iTime] [2* iPul + 1] = - sin ( Val_Pulsation [iPul] * t_MH [iTime] ) ;
      }
      else {
	Psi_MH [iTime] [2* iPul    ] = 0.5 ;
	Psi_MH [iTime] [2* iPul + 1] = 0 ;
      }
    }
  }

  if (!Flag_Psi) {
    for ( iTime = 0 ; iTime < NbrTimePoint_MH ; iTime++ )
      for ( iHar = 0 ; iHar < NbrHar ; iHar++ )
	for ( jHar = 0 ; jHar < NbrHar ; jHar++ )
	  PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] = 
	    w_MH [ iTime ] * Psi_MH [ iTime ] [ iHar ] * Psi_MH [ iTime ] [ jHar ] ;
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  F_MHTimeIntegration                                                     */
/* ------------------------------------------------------------------------ */

void  Fi_MHTimeIntegration(int TypePsi, int NbrTimePointSP,
			   List_T * WholeQuantity_L,
			   struct Element * Element,
			   struct QuantityStorage * QuantityStorage_P0,
			   double u, double v, double w,
			   struct Value *ValueOut) {

  int iTime, iHar, jHar, iDim, jDim ;
  struct Value  Value ;

  GetDP_Begin("MH_TimeIntegration");

  if (MH_Init != Current.DofData ||
      (MH_Init == Current.DofData && NbrTimePointForSP_MH != NbrTimePointSP)) {
    MH_Init = Current.DofData ;
    MH_InitTimes(Current.NbrHar, Current.DofData->Val_Pulsation, NbrTimePointSP, 0, 0) ;
  }

  for ( iTime = 0 ; iTime < NbrTimePoint_MH ; iTime++ ) {

    Current_iTime = iTime ;

    Cal_WholeQuantity(Element, QuantityStorage_P0,
		      WholeQuantity_L, u, v, w, -1, 0, &Value) ;

    if (!iTime) {
      switch (Value.Type) {
      case SCALAR :
	if (TypePsi == 1) {
	  fprintf(stderr, " --> Scalar Psi\n") ;
	  for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	    ValueOut->Val [ iHar * MAX_DIM ] = 0. ;
	  ValueOut->Type = SCALAR ;
	}
	else {
	  fprintf(stderr, " --> Scalar PsiPsi\n") ;
	  for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	    for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ )
	      Matrix2_MH [ iHar ] [ jHar ] = 0. ;
	  ValueOut->Type = TENSOR_MH ;
	}
	break ;
      case VECTOR :
	if (TypePsi == 1) {
	  fprintf(stderr, " --> Vector Psi\n") ;
	  for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	    ValueOut->Val[iHar*MAX_DIM] = ValueOut->Val[iHar*MAX_DIM+1] =
	      ValueOut->Val[iHar*MAX_DIM+2] = 0. ;
	  ValueOut->Type = VECTOR ;
	}
	else {
	  Msg(ERROR, "MHTimeIntegration: Type 2 (Vector PsiPsi) not allowed") ;
	}
	break ;
      case TENSOR_SYM :
	if (TypePsi == 1) {
	  Msg(ERROR, "MHTimeIntegration: Type 1 (Tensor Psi) not allowed") ;
	}
	else {
	  fprintf(stderr, " --> Tensor PsiPsi\n") ;
	  for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	    for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ )
	      for ( iDim = 0 ; iDim < 3 ; iDim++ )
		for ( jDim = 0 ; jDim < 3 ; jDim++ )
		  Matrix2_MH [ iHar*3 + iDim ] [ jHar*3 + jDim ] = 0. ;
	  ValueOut->Type = TENSOR_MH ;
	}
	break ;
      case TENSOR_DIAG :
	if (TypePsi == 1) {
	  Msg(ERROR, "MHTimeIntegration: Type 1 (Tensor Psi) not allowed") ;
	}
	else {
	  fprintf(stderr, " --> Tensor PsiPsi\n") ;
	  for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	    for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ )
	      for ( iDim = 0 ; iDim < 3 ; iDim++ )
		for ( jDim = 0 ; jDim < 3 ; jDim++ )
		  Matrix2_MH [ iHar*3 + iDim ] [ jHar*3 + jDim ] = 0. ;
	  ValueOut->Type = TENSOR_MH ;
	}
	break ;
      default :
	Msg(ERROR, "Bad type of WholeQuantity in MHTimeIntegration") ;
      }
    }


    switch (Value.Type) {

    case SCALAR :
      if (TypePsi == 1) {
	for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	  ValueOut->Val [ iHar * MAX_DIM ] +=
	    Value.Val[0] * Psi_MH [ iTime ] [ iHar ] * w_MH [ iTime ] ;
      }
      else {
	for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	  for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ )
	    Matrix2_MH [ iHar ] [ jHar ] =
	      Value.Val[0] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
      }
      break ;

    case VECTOR :  /* if TypePsi == 1 */
      for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ ) {
	ValueOut->Val[iHar*MAX_DIM] +=
	  Value.Val[0] * Psi_MH [ iTime ] [ iHar ] * w_MH [ iTime ] ;
	ValueOut->Val[iHar*MAX_DIM+1] +=
	  Value.Val[1] * Psi_MH [ iTime ] [ iHar ] * w_MH [ iTime ] ;
	ValueOut->Val[iHar*MAX_DIM+2] +=
	  Value.Val[2] * Psi_MH [ iTime ] [ iHar ] * w_MH [ iTime ] ;
      }
      break ;

    case TENSOR_SYM :  /* if TypePsi == 2 */  /* Attention : a revoir */
      for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ ) {
	  Matrix2_MH [iHar*3+0] [jHar*3+0] +=
	    Value.Val[0] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+0] [jHar*3+1] +=
	    Value.Val[1] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+0] [jHar*3+2] +=
	    Value.Val[2] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+1] [jHar*3+1] +=
	    Value.Val[3] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+1] [jHar*3+2] +=
	    Value.Val[4] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+2] [jHar*3+2] +=
	    Value.Val[5] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+1] [jHar*3+0] = Matrix2_MH [iHar*3+0] [jHar*3+1] ;
	  Matrix2_MH [iHar*3+2] [jHar*3+0] = Matrix2_MH [iHar*3+0] [jHar*3+2] ;
	  Matrix2_MH [iHar*3+2] [jHar*3+1] = Matrix2_MH [iHar*3+1] [jHar*3+2] ;
	}
      break ;

    case TENSOR_DIAG :  /* if TypePsi == 2 */  /* Attention : a revoir */
      for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ )
	for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ ) {
	  Matrix2_MH [iHar*3+0] [jHar*3+0] +=
	    Value.Val[0] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+1] [jHar*3+1] +=
	    Value.Val[1] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	  Matrix2_MH [iHar*3+2] [jHar*3+2] +=
	    Value.Val[2] * PsiPsi_MH [ iTime ] [ iHar ] [ jHar ] ;
	}
      break ;

    default :
      Msg(ERROR, "Bad type of WholeQuantity in MHTimeIntegration") ;
    }

  } /* for iTime */


      switch (Value.Type) {
      case TENSOR_SYM :

	for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ ){
	  for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ ) {
	    for ( iDim = 0 ; iDim < 3 ; iDim++ ){
	      for ( jDim = 0 ; jDim < 3 ; jDim++ ){
		//		printf ("+++ %d %d %d %d %f \n",iHar,jHar,iDim,jDim,
		// Matrix2_MH [iHar*3+iDim] [jHar*3+jDim] );
	      }
	    }
	  }
	}
	break ;

      }


  GetDP_End ;
}


void  MH_Cal_ProductValue (struct Value * V1, struct Value * V2, struct Value * R) {

  int iHar, jHar, iDim, jDim ;
  struct Value  Value ;

  GetDP_Begin("MH_Cal_ProductValue");

  // printf(" Begin H_Cal_ProductValue \n");

  for ( iHar = 0 ; iHar < Current.NbrHar ; iHar++ ) {

    Value.Val[iHar*MAX_DIM] = Value.Val[iHar*MAX_DIM+1] = Value.Val[iHar*MAX_DIM+2] = 0. ;

    for ( jHar = 0 ; jHar < Current.NbrHar ; jHar++ )

      for ( iDim = 0 ; iDim < 3 ; iDim++ )
	for ( jDim = 0 ; jDim < 3 ; jDim++ )

	  Value.Val[iHar*MAX_DIM+iDim] +=
	    Matrix2_MH [iHar*3+iDim] [jHar*3+jDim] * V2->Val[jHar*MAX_DIM+jDim] ;

  }

  Value.Type = VECTOR ;
  Cal_CopyValue(&Value, R) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  F_MHToTime0                                                             */
/* ------------------------------------------------------------------------ */

void  F_MHToTime0 (F_ARG, int iTime, int NbrTimePointGP, double * TimeMH) {


  GetDP_Begin("F_MHToTime0");

  if (Current.NbrHar == 1) {
    GetDP_End ;
  }

  if (MH_Init != Current.DofData ||
      (MH_Init == Current.DofData && NbrTimePointForGP_MH != NbrTimePointGP)) {
    MH_Init = Current.DofData ;
    MH_InitTimes(Current.NbrHar, Current.DofData->Val_Pulsation, 0, NbrTimePointGP, 1) ;
  }

  Current_iTime = iTime ;
  *TimeMH = t_MH[iTime] ;

  F_MHToTime(NULL, A, V) ;

  GetDP_End ;
}


#undef F_ARG
