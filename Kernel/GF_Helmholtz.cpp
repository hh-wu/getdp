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
#include "GF.h"
#include "Cal_Value.h"
#include "GeoData.h"
#include "Message.h"

#define SQU(a)     ((a)*(a))
#define CUB(a)     ((a)*(a)*(a))
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  G F _ H e l m h o l t z                                                 */
/* ------------------------------------------------------------------------ */

void GF_Helmholtz(GF_ARG)
{
  double  r, kr ;

  if(Current.NbrHar != 2)
    Message::Error("Wrong Number of Harmonics in 'GF_Helmholtz'");

  V->Type = SCALAR ;

  switch((int)Fct->Para[0]){
  case _2D :
    r = sqrt(SQU(Current.x-Current.xs)+
	     SQU(Current.y-Current.ys) ) ;
    if(!r) Message::Error("1/0 in 'GF_Helmholtz'") ;
    kr = Fct->Para[1]*r;

    V->Val[0]       = -y0(kr)/4 ;
    V->Val[MAX_DIM] = -j0(kr)/4 ;
    break ;

  case _3D :
    r = sqrt(SQU(Current.x-Current.xs)+
	     SQU(Current.y-Current.ys)+
	     SQU(Current.z-Current.zs)) ;
    if(!r) Message::Error("1/0 in 'GF_Helmholtz'") ;

    kr = Fct->Para[1]*r;
    V->Val[0]       =  ONE_OVER_FOUR_PI * cos(kr) / r ;
    V->Val[MAX_DIM] = -ONE_OVER_FOUR_PI * sin(kr) / r ;
    break ;

  default :
    Message::Error("Bad Parameter for 'GF_Helmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ H e l m h o l t z T h i n W i r e                                 */
/* ------------------------------------------------------------------------ */

void GF_HelmholtzThinWire(GF_ARG)
{
  double  a , r, kr ;

  if(Current.NbrHar != 2)
    Message::Error("Wrong Number of Harmonics in 'GF_HelmholtzThinWire'");

  V->Type = SCALAR ;

  switch((int)Fct->Para[0]){
  case _2D :
    a =  Fct->Para[2] ;
    r = sqrt(SQU(Current.x-Current.xs)+
	     SQU(Current.y-Current.ys)+SQU(a)) ;
    if(!r) Message::Error("1/0 in 'GF_HelmholtzThinWire'") ;
    kr = Fct->Para[1]*r;

    V->Val[0]       = -y0(kr)/4 ;
    V->Val[MAX_DIM] = -j0(kr)/4 ;
    break ;

  case _3D :
    a =  Fct->Para[2] ;

    r = sqrt(SQU(Current.x-Current.xs)+
	     SQU(Current.y-Current.ys)+
	     SQU(Current.z-Current.zs)+SQU(a)) ;
    if(!r) Message::Error("1/0 in 'GF_HelmholtzThinWire'") ;

    kr = Fct->Para[1]*r;
    V->Val[0]       =  ONE_OVER_FOUR_PI * cos(kr) / r ;
    V->Val[MAX_DIM] = -ONE_OVER_FOUR_PI * sin(kr) / r ;
    break ;

  default :
    Message::Error("Bad Parameter for 'GF_HelmholtzThinWire' (%d)", (int)Fct->Para[0]);
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ G r a d H e l m h o l t z                                         */
/* ------------------------------------------------------------------------ */

/* the gradient is taken relative to the destination point (x,y,z) */

void GF_GradHelmholtz(GF_ARG)
{
  double  xxs, yys, zzs, r, kr, k0r ;
  double  c1, c2, cr, ci ;

  if(Current.NbrHar != 2)
    Message::Error("Wrong Number of Harmonics in 'GF_GradHelmholtz'");

  V->Type = VECTOR ;

  switch((int)Fct->Para[0]){
  case _2D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    r = sqrt(SQU(xxs)+SQU(yys)) ;
    k0r = Fct->Para[1]*r;

    if (!r) Cal_ZeroValue(V);
    else {
      c1 = Fct->Para[1]/4/r ;
      cr = c1 * y1(k0r);
      ci = c1 * j1(k0r);
      V->Val[0] = xxs * cr ; V->Val[MAX_DIM  ] = xxs * ci ;
      V->Val[1] = yys * cr ; V->Val[MAX_DIM+1] = yys * ci ;
    }
    break ;

  case _3D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;
    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;
    kr = Fct->Para[1] * r ;

    if (!r) Cal_ZeroValue(V);
    else {
      c1 = - ONE_OVER_FOUR_PI / CUB(r) ;
      c2 =  ONE_OVER_FOUR_PI * Fct->Para[1] / SQU(r) ;
      cr =  c1 * cos(kr) - c2 * sin(kr) ;
      ci = -c1 * sin(kr) - c2 * cos(kr) ;

      V->Val[0] = xxs * cr ; V->Val[MAX_DIM  ] = xxs * ci ;
      V->Val[1] = yys * cr ; V->Val[MAX_DIM+1] = yys * ci ;
      V->Val[2] = zzs * cr ; V->Val[MAX_DIM+2] = zzs * ci ;
    }
    break ;

  default :
    Message::Error("Bad Parameter for 'GF_GradHelmholtz' (%d)", (int)Fct->Para[0]);
    break;

  }

}

/* ------------------------------------------------------------------------ */
/*  G F _ N P x G r a d H e l m h o l t z                                   */
/* ------------------------------------------------------------------------ */

void GF_NPxGradHelmholtz(GF_ARG)
{
  double  N[3] ;
  struct Value ValGrad ;

  /* Vectorial product N[] /\ Grad G */
  if(Current.NbrHar != 2)
    Message::Error("Wrong Number of Harmonics in 'GF_NPxGradHelmholtz'");

  V->Type = VECTOR ;

  if (Current.Element->Num == Current.ElementSource->Num) {
    Cal_ZeroValue(V);
    return ;
  }

  switch((int)Fct->Para[0]){
  case _3D :
    Geo_CreateNormal(Current.Element->Type,
		     Current.Element->x,Current.Element->y,Current.Element->z, N);

    GF_GradHelmholtz(Fct, &ValGrad, &ValGrad) ;

    V->Val[0] = N[1]*ValGrad.Val[2] - N[2]*ValGrad.Val[1];
    V->Val[1] =-N[0]*ValGrad.Val[2] + N[2]*ValGrad.Val[0];
    V->Val[2] = N[0]*ValGrad.Val[1] - N[1]*ValGrad.Val[0];
    V->Val[MAX_DIM  ] = N[1]*ValGrad.Val[MAX_DIM+2] - N[2]*ValGrad.Val[MAX_DIM+1];
    V->Val[MAX_DIM+1] =-N[0]*ValGrad.Val[MAX_DIM+2] + N[2]*ValGrad.Val[MAX_DIM];
    V->Val[MAX_DIM+2] = N[0]*ValGrad.Val[MAX_DIM+1] - N[1]*ValGrad.Val[MAX_DIM];
    break ;

  default :
    Message::Error("Bad Parameter for 'GF_NPxGradHelmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  G F _ N S x G r a d  H e l m h o l t z                                  */
/* ------------------------------------------------------------------------ */

void GF_NSxGradHelmholtz(GF_ARG)
{
  double  x1x0, x2x0, y1y0, y2y0, z1z0, z2z0, xxs, yys, zzs, r ;
  double  nx, ny, nz, n, c1, c2, cr, ci ;

  if(Current.NbrHar != 2)
    Message::Error("Wrong Number of Harmonics in 'GF_NSxGradHelmholtz'");

  V->Type = SCALAR ;

  switch((int)Fct->Para[0]){
  case _2D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    r = sqrt(SQU(xxs)+SQU(yys)) ;

    if(Current.Element->Num == NO_ELEMENT)
      Current.Element = Current.ElementSource ;

    ny = - Current.Element->x[1] + Current.Element->x[0] ;
    nx = Current.Element->y[1] - Current.Element->y[0] ;
    n = sqrt(SQU(nx)+SQU(ny)) ;
    nx = nx / n ;
    ny = ny / n ;

    if (!r) Cal_ZeroValue(V);
    else {
      c1 = Fct->Para[1]/4/r ;
      cr = c1 * y1(Fct->Para[1]*r);
      ci = c1 * j1(Fct->Para[1]*r);

      V->Val[0] = nx * xxs * cr +  ny * yys * cr ;
      V->Val[MAX_DIM  ] = nx * xxs * ci + ny * yys * ci ;
    }
    break ;

  case _3D :
    xxs  = Current.x-Current.xs ;
    yys  = Current.y-Current.ys ;
    zzs  = Current.z-Current.zs ;

    r = sqrt(SQU(xxs)+SQU(yys)+SQU(zzs)) ;

    if (!r) Cal_ZeroValue(V);
    else {
      x1x0 = Current.Element->x[1] - Current.Element->x[0] ;
      y1y0 = Current.Element->y[1] - Current.Element->y[0] ;
      z1z0 = Current.Element->z[1] - Current.Element->z[0] ;
      x2x0 = Current.Element->x[2] - Current.Element->x[0] ;
      y2y0 = Current.Element->y[2] - Current.Element->y[0] ;
      z2z0 = Current.Element->z[2] - Current.Element->z[0] ;
      nx = y1y0 * z2z0 - z1z0 * y2y0 ;
      ny = z1z0 * x2x0 - x1x0 * z2z0 ;
      nz = x1x0 * y2y0 - y1y0 * x2x0 ;
      n = sqrt(SQU(nx)+SQU(ny)+SQU(nz)) ;
      nx = nx/n ;
      ny = ny/n ;
      nz = nz/n ;

      c1 = - ONE_OVER_FOUR_PI / CUB(r) ;
      c2 =  ONE_OVER_FOUR_PI * Fct->Para[1] / SQU(r) ;
      cr = (c1 * cos(Fct->Para[1]*r) - c2 * sin(Fct->Para[1]*r)) ;
      ci = (c1 * sin(Fct->Para[1]*r) + c2 * cos(Fct->Para[1]*r)) ;
      V->Val[0] =nx * xxs * cr + ny * yys * cr + nz *  zzs * cr  ;
      V->Val[MAX_DIM  ] = nx* xxs * ci + ny *  yys * ci + nz * zzs * ci;
    }
    break ;

  default :
    Message::Error("Bad Parameter for 'GF_NSxGradHelmholtz' (%d)", (int)Fct->Para[0]);
    break;
  }

}
