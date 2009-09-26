// GetDP - Copyright (C) 1997-2009 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "Message.h"

#define SQU(a)     ((a)*(a)) 

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  Create a Complex Value from k Real Values (of same type!)               */
/* ------------------------------------------------------------------------ */

void F_Complex(F_ARG)
{
  /* Warning: this function takes a variable number of arguments
     (depending on Current.NbrHar). There is no test to check if this
     number is correct (it just has to be a multiple of 2). */

  int k ;

  switch(A->Type){

  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type) 
	Msg::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k] = (A+k)->Val[0] ;
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Msg::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k  ] = (A+k)->Val[0] ; 
      V->Val[MAX_DIM*k+1] = (A+k)->Val[1] ;
      V->Val[MAX_DIM*k+2] = (A+k)->Val[2] ;
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Msg::Error("Mixed type of arguments in function 'Complex'");
      V->Val[MAX_DIM*k  ] = (A+k)->Val[0] ; 
      V->Val[MAX_DIM*k+1] = (A+k)->Val[1] ;
      V->Val[MAX_DIM*k+2] = (A+k)->Val[2] ;
      V->Val[MAX_DIM*k+3] = (A+k)->Val[3] ; 
      V->Val[MAX_DIM*k+4] = (A+k)->Val[4] ;
      V->Val[MAX_DIM*k+5] = (A+k)->Val[5] ;
    }
    break;

  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Msg::Error("Mixed type of arguments in function 'Complex'");
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
    break;

  default :
    Msg::Error("Unknown type of arguments in function 'Complex'");
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
    Msg::Error("Unknown type of arguments in function 'Re'");
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
    Msg::Error("Unknown type of arguments in function 'Re'");
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
    Msg::Error("Unknown type of arguments in function 'Conj'");
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
    Msg::Error("Unknown type of arguments in function 'Cart2Pol'");
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
    Msg::Error("Non scalar argument(s) for function 'Vector'");

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
    Msg::Error("Non scalar argument(s) for function 'Tensor'");

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
    Msg::Error("Non scalar argument(s) for function 'TensorSym'");

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
    Msg::Error("Non scalar argument(s) for function 'TensorDiag'");

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
    Msg::Error("Non scalar argument(s) for function 'TensorV'");

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
    Msg::Error("Non vector argument for function 'TensorDyadic'");

  t11 = SQU(A->Val[0]) ;  t22 = SQU(A->Val[1]) ;  t33 = SQU(A->Val[2]) ;
  t12 = A->Val[0] * A->Val[1] ;  t13 = A->Val[0] * A->Val[2] ;
  t23 = A->Val[1] * A->Val[2] ;

  V->Val[0] = t11 ;  V->Val[1] = t12 ;  V->Val[2] = t13 ;
  V->Val[3] = t22 ;  V->Val[4] = t23 ;  V->Val[5] = t33 ;

  /* Attention : a revoir */
  if (Current.NbrHar > 1) {
    V->Val[MAX_DIM  ] = V->Val[MAX_DIM+1] = V->Val[MAX_DIM+2] =
      V->Val[MAX_DIM+3] = V->Val[MAX_DIM+4] = V->Val[MAX_DIM+5] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k++) {
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
    Msg::Error("Non vector argument for function '" string "'");	\
									\
  for (k = 0 ; k < Current.NbrHar ; k++) {				\
    V->Val[MAX_DIM*k  ] = A->Val[MAX_DIM*k+index] ;			\
  }									\
  V->Type = SCALAR ;
    
void F_CompX(F_ARG){ get_comp_vector(0, "CompX") }
void F_CompY(F_ARG){ get_comp_vector(1, "CompY") }
void F_CompZ(F_ARG){ get_comp_vector(2, "CompZ") }

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
  default :										\
    Msg::Error("Non tensor argument for function '" string "'");			\
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
     Msg::Error("Vector argument required for Function 'Cart2Sph'");
     
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
     Msg::Error("Vector argument required for Function 'Cart2Cyl'");
     
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
