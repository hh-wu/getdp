#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Numeric.h"
#include "Numeric_F.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V



void  F_CylinderPhase (F_ARG) 
{

  GetDP_Begin("F_CylinderPhase");

  Msg(GERROR, "Not done ...");

  if (Current.NbrHar == 1) 
  {
    V->Val[0] = 0 ;
  }
  else 
  {
    V->Val[0] = 0;
    V->Val[MAX_DIM] = 0 ;
  }

  V->Type = SCALAR ;

  GetDP_End ;
}
