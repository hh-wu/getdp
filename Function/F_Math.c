#include <stdio.h>
#include <stdlib.h> /* pour int abs(int) */
#include <math.h>

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
/*  C math functions (scalar, 1 argument, imaginary part set to zero)       */
/* ------------------------------------------------------------------------ */

#define scalar_real_1_arg(func,string)					\
  int     k;								\
  double  tmp;								\
									\
  if(A->Type != SCALAR)							\
    Msg(ERROR, "Non Scalar Argument for Function '" string "'");	\
									\
  if (Current.NbrHar == 1){						\
    V->Val[0] = func(A->Val[0]) ;					\
  }									\
  else {								\
    tmp = func(A->Val[0]) ;						\
    for (k = 0 ; k < Current.NbrHar ; k += 2) {				\
      V->Val[MAX_DIM*k    ] = tmp ;					\
      V->Val[MAX_DIM*(k+1)] = 0. ;					\
    }									\
  }									\
  V->Type = SCALAR;

void  F_Exp   (F_ARG) { scalar_real_1_arg (exp,  "Exp")   }
void  F_Log   (F_ARG) { scalar_real_1_arg (log,  "Log")   }
void  F_Log10 (F_ARG) { scalar_real_1_arg (log10,"Log10") }
void  F_Sqrt  (F_ARG) { scalar_real_1_arg (sqrt, "Sqrt")  }
void  F_Sin   (F_ARG) { scalar_real_1_arg (sin,  "Sin")   }
void  F_Asin  (F_ARG) { scalar_real_1_arg (asin, "Asin")  }
void  F_Cos   (F_ARG) { scalar_real_1_arg (cos,  "Cos" )  }
void  F_Acos  (F_ARG) { scalar_real_1_arg (acos, "Acos")  }
void  F_Tan   (F_ARG) { scalar_real_1_arg (tan,  "Tan")   }
void  F_Atan  (F_ARG) { scalar_real_1_arg (atan, "Atan")  }
void  F_Sinh  (F_ARG) { scalar_real_1_arg (sinh, "Sinh")  }
void  F_Cosh  (F_ARG) { scalar_real_1_arg (cosh, "Cosh")  }
void  F_Tanh  (F_ARG) { scalar_real_1_arg (tanh, "Tanh")  }
void  F_Fabs  (F_ARG) { scalar_real_1_arg (fabs, "Fabs")  }
void  F_Floor (F_ARG) { scalar_real_1_arg (floor,"Floor") }
void  F_Ceil  (F_ARG) { scalar_real_1_arg (ceil, "Ceil")  }

#undef scalar_real_1_arg


/* ------------------------------------------------------------------------ */
/*  C math functions (scalar, 2 arguments, imaginary part set to zero)      */
/* ------------------------------------------------------------------------ */

#define scalar_real_2_arg(func,string)					\
  int     k;								\
  double  tmp;								\
									\
  if(A->Type != SCALAR || (A+1)->Type != SCALAR)			\
    Msg(ERROR, "Non Scalar Argument(s) for Function '" string "'");	\
									\
  if (Current.NbrHar == 1){						\
    V->Val[0] = func(A->Val[0], (A+1)->Val[0]) ;			\
  }									\
  else {								\
    tmp = func(A->Val[0], (A+1)->Val[0]) ;				\
    for (k = 0 ; k < Current.NbrHar ; k += 2) {				\
      V->Val[MAX_DIM* k   ] = tmp ;					\
      V->Val[MAX_DIM*(k+1)] = 0. ;					\
    }									\
  }									\
  V->Type = SCALAR;

void  F_Atan2 (F_ARG) { scalar_real_2_arg (atan2, "Atan2")   }
void  F_Fmod  (F_ARG) { scalar_real_2_arg (fmod, "Fmod")     }

#undef scalar_real_2_arg


#undef F_ARG

