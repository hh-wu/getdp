static char *rcsid = "$Id: F_Type.c,v 1.4 2000-10-30 01:05:44 geuzaine Exp $" ;
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
/*  Create a Complex Value from k Real Values (of same type!)               */
/* ------------------------------------------------------------------------ */


void  F_Complex (F_ARG) {

  /* Warning: this function takes a variable number of arguments (depending on 
     Current.NbrHar). There is no test to check if this number is correct (it 
     just has to be a multiple of 2). */

  int k ;

  GetDP_Begin("F_Complex");

  switch(A->Type){

  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type) 
	Msg(ERROR, "Mixed Type of Arguments in function 'Complex'");
      V->Val[MAX_DIM*k] = (A+k)->Val[0] ;
    }
    break;

  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Msg(ERROR, "Mixed Type of Arguments in function 'Complex'");
      V->Val[MAX_DIM*k  ] = (A+k)->Val[0] ; 
      V->Val[MAX_DIM*k+1] = (A+k)->Val[1] ;
      V->Val[MAX_DIM*k+2] = (A+k)->Val[2] ;
    }
    break;

  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if((A+k)->Type != A->Type)
	Msg(ERROR, "Mixed Type of Arguments in function 'Complex'");
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
	Msg(ERROR, "Mixed Type of Arguments in function 'Complex'");
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
    Msg(ERROR, "Unknown Type of Arguments in function 'Complex'");
    break;
  }

  V->Type = A->Type ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Get the Real Part of a Value                                            */
/* ------------------------------------------------------------------------ */

void  F_Re (F_ARG) {
  int k ;

  GetDP_Begin("F_Re");

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
    Msg(ERROR, "Unknown Type of Arguments in function 'Re'");
    break;
  }
  
  V->Type = A->Type ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Get the Imaginary Part of a Value                                       */
/* ------------------------------------------------------------------------ */

void  F_Im (F_ARG) {
  int k ;

  GetDP_Begin("F_Im");

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
    Msg(ERROR, "Unknown Type of Arguments in function 'Re'");
    break;
  }
  
  V->Type = A->Type ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Conjugate                                                               */
/* ------------------------------------------------------------------------ */

void  F_Conj (F_ARG) {
  int k ;

  GetDP_Begin("F_Conj");

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
    Msg(ERROR, "Unknown Type of Arguments in function 'Conj'");
    break;
  }
  
  V->Type = A->Type ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Vector from 3 Scalar                                           */
/* ------------------------------------------------------------------------ */

void  F_Vector (F_ARG) {
  int k ;

  GetDP_Begin("F_Vector");

  if(A->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR)
    Msg(ERROR, "Non Scalar Argument(s) for Function 'Vector'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (A  )->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
  }
  V->Type = VECTOR ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Create 1 Tensor from 9 Scalar                                           */
/* ------------------------------------------------------------------------ */

void  F_Tensor (F_ARG) {
  int k ;

  GetDP_Begin("F_Tensor");

  if(  (A)->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR ||
     (A+3)->Type != SCALAR || (A+4)->Type != SCALAR || (A+5)->Type != SCALAR ||
     (A+6)->Type != SCALAR || (A+7)->Type != SCALAR || (A+8)->Type != SCALAR )
    Msg(ERROR, "Non Scalar Argument(s) for Function 'Tensor'");

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

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Symmetric Tensor from 6 Scalar                                 */
/* ------------------------------------------------------------------------ */

void  F_TensorSym (F_ARG) {
  int k ;

  GetDP_Begin("F_TensorSym");

  if(  (A)->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR ||
     (A+3)->Type != SCALAR || (A+4)->Type != SCALAR || (A+5)->Type != SCALAR )
    Msg(ERROR, "Non Scalar Argument(s) for Function 'TensorSym'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] = (A  )->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+3] = (A+3)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+4] = (A+4)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+5] = (A+5)->Val[MAX_DIM*k] ;
  }
  V->Type = TENSOR_SYM ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Create 1 Diagonal Tensor from 3 Scalar                                  */
/* ------------------------------------------------------------------------ */

void  F_TensorDiag (F_ARG) {
  int k ;

  GetDP_Begin("F_TensorDiag");

  if(A->Type != SCALAR || (A+1)->Type != SCALAR || (A+2)->Type != SCALAR)
    Msg(ERROR, "Non Scalar Argument(s) for Function 'TensorDiag'");

  for (k = 0 ; k < Current.NbrHar ; k++) {
    V->Val[MAX_DIM*k  ] =     A->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+1] = (A+1)->Val[MAX_DIM*k] ;
    V->Val[MAX_DIM*k+2] = (A+2)->Val[MAX_DIM*k] ;
  }
  V->Type = TENSOR_DIAG ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Create 1 Tensor from 3 Vector                                           */
/* ------------------------------------------------------------------------ */

void  F_TensorV (F_ARG) {
  int k ;

  GetDP_Begin("F_TensorV");

  if((A)->Type != VECTOR || (A+1)->Type != VECTOR || (A+2)->Type != VECTOR)
    Msg(ERROR, "Non Scalar Argument(s) for Function 'TensorV'");

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

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Dyadic product                                                          */
/* ------------------------------------------------------------------------ */

void  F_SquDyadicProduct (F_ARG) {
  int k ;
  double t11, t12, t13, t22, t23, t33 ;

  GetDP_Begin("F_SquDyadicProduct");

  if (A->Type != VECTOR)
    Msg(ERROR, "Non Vector Argument for Function 'TensorDyadic'");

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

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  Get Vector Components                                                   */
/* ------------------------------------------------------------------------ */

#define get_comp_vector(index,string)					\
  int k ;								\
									\
  GetDP_Begin("F_" string);						\
									\
  if(A->Type != VECTOR)							\
    Msg(ERROR, "Non Vector Argument for Function '" string "'");	\
									\
  for (k = 0 ; k < Current.NbrHar ; k++) {				\
    V->Val[MAX_DIM*k  ] = A->Val[MAX_DIM*k+index] ;			\
  }									\
  V->Type = SCALAR ;							\
									\
  GetDP_End ;
    
void  F_CompX (F_ARG) { get_comp_vector(0,"CompX") }
void  F_CompY (F_ARG) { get_comp_vector(1,"CompY") }
void  F_CompZ (F_ARG) { get_comp_vector(2,"CompZ") }

#undef get_comp_vector


/* ------------------------------------------------------------------------ */
/*  Get Tensor Components                                                   */
/* ------------------------------------------------------------------------ */

#define get_comp_tensor(i,is,id,string)							\
  int k ;										\
											\
  GetDP_Begin("F_" string);								\
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
    Msg(ERROR, "Non Tensor Argument for Function '" string "'");			\
    break;										\
  }											\
  V->Type = SCALAR ;									\
  											\
  GetDP_End ;
  
void  F_CompXX (F_ARG) { get_comp_tensor(0,0, 0,"CompXX") }
void  F_CompXY (F_ARG) { get_comp_tensor(1,1,-1,"CompXY") }
void  F_CompXZ (F_ARG) { get_comp_tensor(2,2,-1,"CompXZ") }
void  F_CompYX (F_ARG) { get_comp_tensor(3,1,-1,"CompYX") }
void  F_CompYY (F_ARG) { get_comp_tensor(4,3, 1,"CompYY") }
void  F_CompYZ (F_ARG) { get_comp_tensor(5,4,-1,"CompYZ") }
void  F_CompZX (F_ARG) { get_comp_tensor(6,2,-1,"CompZX") }
void  F_CompZY (F_ARG) { get_comp_tensor(7,4,-1,"CompZY") }
void  F_CompZZ (F_ARG) { get_comp_tensor(8,5, 2,"CompZZ") }

#undef get_comp_tensor


#undef F_ARG
