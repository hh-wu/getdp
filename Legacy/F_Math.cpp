// GetDP - Copyright (C) 1997-2015 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "MallocUtils.h"
#include "Message.h"

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  C math functions (scalar, 1 argument, imaginary part set to zero)       */
/* ------------------------------------------------------------------------ */

#define scalar_real_1_arg(func, string)					\
  int     k;								\
									\
  if(A->Type != SCALAR)							\
    Message::Error("Non scalar argument for function '" string "'");	\
									\
  V->Val[0] = func(A->Val[0]) ;						\
  if (Current.NbrHar != 1){						\
    V->Val[MAX_DIM] = 0. ;						\
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) \
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;			\
  }									\
  V->Type = SCALAR;

void F_Exp   (F_ARG) { scalar_real_1_arg (exp,  "Exp")   }
void F_Log   (F_ARG) { scalar_real_1_arg (log,  "Log")   }
void F_Log10 (F_ARG) { scalar_real_1_arg (log10,"Log10") }
void F_Sqrt  (F_ARG) { scalar_real_1_arg (sqrt, "Sqrt")  }
void F_Sin   (F_ARG) { scalar_real_1_arg (sin,  "Sin")   }
void F_Asin  (F_ARG) { scalar_real_1_arg (asin, "Asin")  }
void F_Cos   (F_ARG) { scalar_real_1_arg (cos,  "Cos" )  }
void F_Acos  (F_ARG) { scalar_real_1_arg (acos, "Acos")  }
void F_Tan   (F_ARG) { scalar_real_1_arg (tan,  "Tan")   }
void F_Atan  (F_ARG) { scalar_real_1_arg (atan, "Atan")  }
void F_Sinh  (F_ARG) { scalar_real_1_arg (sinh, "Sinh")  }
void F_Cosh  (F_ARG) { scalar_real_1_arg (cosh, "Cosh")  }
void F_Tanh  (F_ARG) { scalar_real_1_arg (tanh, "Tanh")  }
void F_Fabs  (F_ARG) { scalar_real_1_arg (fabs, "Fabs")  }
void F_Floor (F_ARG) { scalar_real_1_arg (floor,"Floor") }
void F_Ceil  (F_ARG) { scalar_real_1_arg (ceil, "Ceil")  }

#undef scalar_real_1_arg

/* ------------------------------------------------------------------------ */
/*  C math functions (scalar, 2 arguments, imaginary part set to zero)      */
/* ------------------------------------------------------------------------ */

#define scalar_real_2_arg(func, string)					\
  int     k;								\
									\
  if(A->Type != SCALAR || (A+1)->Type != SCALAR)			\
    Message::Error("Non scalar argument(s) for function '" string "'");	\
									\
  V->Val[0] = func(A->Val[0], (A+1)->Val[0]) ;				\
  if (Current.NbrHar != 1){						\
    V->Val[MAX_DIM] = 0. ;						\
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2) \
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;			\
  }									\
  V->Type = SCALAR;

void F_Atan2 (F_ARG) { scalar_real_2_arg (atan2, "Atan2")   }
void F_Fmod  (F_ARG) { scalar_real_2_arg (fmod, "Fmod")     }

#undef scalar_real_2_arg

/* ------------------------------------------------------------------------ */
/*  Sign function                                                           */
/* ------------------------------------------------------------------------ */

void F_Sign(F_ARG)
{
  int     k;
  double  x;

  if(A->Type != SCALAR)
    Message::Error("Non scalar argument for function 'Sign'");
  x = A->Val[0];

  if(x >= 0.)
    V->Val[0] = 1.;
  else if(x < 0.)
    V->Val[0] = -1.;
  else
    V->Val[0] = 0.;

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  V->Type = SCALAR;
}

/* ------------------------------------------------------------------------ */
/*  Bessel functions jn, yn and their derivatives                           */
/* ------------------------------------------------------------------------ */

void F_Jn(F_ARG)
{
  int     k, n;
  double  x;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR)
    Message::Error("Non scalar argument(s) for Bessel function of the first kind 'Jn'");
  n = (int)A->Val[0];
  x = (A+1)->Val[0];

  V->Val[0] = jn(n, x);

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  V->Type = SCALAR;
}

void F_Yn(F_ARG)
{
  int     k, n;
  double  x;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR)
    Message::Error("Non scalar argument(s) for Bessel function of the second 'Yn'");
  n = (int)A->Val[0];
  x = (A+1)->Val[0];

  V->Val[0] = yn(n, x);

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  V->Type = SCALAR;
}

double dBessel(double *tab, int n, double x)
{
  if(n == 0){
    return - tab[1];
  }
  else{
    return tab[n-1] - (double)n/x * tab[n];
  }
}

void F_dJn(F_ARG)
{

  int     k, n;
  double  x, *jntab;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR)
    Message::Error("Non scalar argument(s) for the derivative of the Bessel function of the first kind 'dJn'");
  n = (int)A->Val[0];
  x = (A+1)->Val[0];

  jntab = (double*)Malloc((n + 2) * sizeof(double));
  for(k = 0; k < n + 2; k++){
    jntab[k] = jn(k, x);
  }
  V->Val[0] = dBessel(jntab, n, x);
  Free(jntab);

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  V->Type = SCALAR;
}

void F_dYn(F_ARG)
{
  int     k, n;
  double  x, *yntab;

  if(A->Type != SCALAR || (A+1)->Type != SCALAR)
    Message::Error("Non scalar argument(s) for the derivative of the Bessel function of the second kind 'dYn'");
  n = (int)A->Val[0];
  x = (A+1)->Val[0];

  yntab = (double*)Malloc((n + 2) * sizeof(double));
  for(k = 0; k < n + 2; k++){
    yntab[k] = yn(k, x);
  }
  V->Val[0] = dBessel(yntab, n, x);
  Free(yntab);

  if (Current.NbrHar != 1){
    V->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < std::min(NBR_MAX_HARMONIC, Current.NbrHar) ; k += 2)
      V->Val[MAX_DIM*k] = V->Val[MAX_DIM*(k+1)] = 0. ;
  }
  V->Type = SCALAR;
}
