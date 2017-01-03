// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Ruth Sabariego
//

#include <math.h>
#include "ProData.h" 
#include "F.h"
#include "Message.h"

#define ONE_OVER_TWO_PI    1.5915494309189534E-01
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02
#define SQU(a)     ((a)*(a)) 
#define CUB(a)     ((a)*(a)*(a)) 

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  F _ B i o t S a v a r t                                                 */
/* ------------------------------------------------------------------------ */

void F_BiotSavart(F_ARG)
{
  double r, xxs, yys, zzs ;  

  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){
  case _2D :
    xxs = Current.x-Current.xs ; 
    yys = Current.y-Current.ys ; 
    
    r = SQU(xxs)+SQU(yys) ;
    if(!r) Message::Error("1/0 in 'F_BiotSavart'") ;
     
    V->Val[0] = ONE_OVER_TWO_PI * xxs / r ;
    V->Val[1] = ONE_OVER_TWO_PI * yys / r ;
    V->Val[2] = 0. ;
    V->Val[MAX_DIM    ] = V->Val[MAX_DIM + 1] = V->Val[MAX_DIM + 2] = 0. ;
    break;

  case _3D :
    xxs = Current.x-Current.xs ;
    yys = Current.y-Current.ys ;
    zzs = Current.z-Current.zs ;

    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
    
    if(!r) Message::Error("1/0 in 'F_BiotSavart'") ;
    
    V->Val[0] = ONE_OVER_FOUR_PI * xxs/ CUB(r) ;
    V->Val[1] = ONE_OVER_FOUR_PI * yys/ CUB(r) ;
    V->Val[2] = ONE_OVER_FOUR_PI * zzs/ CUB(r) ;
    V->Val[MAX_DIM] =  V->Val[MAX_DIM + 1 ] = V->Val[MAX_DIM + 2 ] =0. ; 
    break;
  default:
    Message::Error("Bad dimension for BiotSavart");  
    break;
  }
}


void F_Pocklington(F_ARG)
{
  double r, xxs, yys, zzs ;
  double k , kr, cte, a, re, im ;

  V->Type = SCALAR ;

  k = Fct->Para[0] ;
  a = Fct->Para[1] ;

  xxs = Current.x-Current.xs ;
  yys = Current.y-Current.ys ;
  zzs = Current.z-Current.zs ;

  r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)+ a*a ) ;
  
  if(!r) Message::Error("1/0 in 'F_Pocklington'") ;
    
  kr = k*r ;
  cte = ONE_OVER_FOUR_PI/(r*r*r*r*r);
  re = 2*SQU(r)-3*SQU(a) + SQU(kr*a);
  im = kr * (2*SQU(r)-3*SQU(a)) ;
 
  V->Val[0] = cte * (cos(kr)* re + sin(kr)*im) ;
  V->Val[MAX_DIM] = cte * (-sin(kr) * re + cos(kr)*im) ;
}
  
#undef F_ARG
