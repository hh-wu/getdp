// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "ProData.h"
#include "F.h"
#include "Message.h"
#include "GetDPConfig.h"

extern "C" {
  extern void cylindrical_cavity_(double *du, double *dv, double *dut, double *dvt,
                                  double *X, double *Y, double *t, double *omega,
                                  double *lambda, double *mu, double *rho, double *a);
  extern void cylindrical_wall_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a);
}

void  F_ElastodynamicsCylinderCavity(F_ARG)
{
  double du_re = 0., dv_re = 0., du_im = 0., dv_im = 0.;
#if defined(HAVE_PEWE)
  double X = A->Val[0];
  double Y = A->Val[1];
  double t = 0.;
  double omega = Fct->Para[0];
  double lambda = Fct->Para[1];
  double mu = Fct->Para[2];
  double rho = Fct->Para[3];
  double a = Fct->Para[4];
  cylindrical_cavity_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,&lambda,&mu,&rho,&a);
#else
  Message::Error("ElastodynamicsCylinderCavity requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastodynamicsCylinderWall(F_ARG)
{
  double du_re = 0., dv_re = 0., du_im = 0., dv_im = 0.;
#if defined(HAVE_PEWE)
  double X = A->Val[0];
  double Y = A->Val[1];
  double t = 0.;
  double omega = Fct->Para[0];
  double lambda = Fct->Para[1];
  double mu = Fct->Para[2];
  double rho = Fct->Para[3];
  double a = Fct->Para[4];
  cylindrical_wall_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,&lambda,&mu,&rho,&a);
#else
  Message::Error("ElastodynamicsCylinderWall requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

#undef F_ARG
