// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

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
  extern void cylindrical_walls_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a);

  extern void cylindrical_wallout_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a);

  extern void cylindrical_wallsout_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a);

  extern void cylindrical_walloutabc_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a,
                                double *b);

  extern void cylindrical_wallsoutabc_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a,
                                double *b);

  extern void cylindrical_walloutabc2_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a,
                                double *b);

  extern void cylindrical_walloutabc2pade_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a,
                                double *b, double *L, double *alpha, double *eps_p, double *eps_s);

  extern void cylindrical_wallsoutabc2pade_(double *du, double *dv, double *dut, double *dvt,
                                double *X, double *Y, double *t, double *omega,
                                double *lambda, double *mu, double *rho, double *a,
                                double *b, double *L, double *alpha, double *eps_p, double *eps_s);

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

void  F_ElastodynamicsCylinderWallS(F_ARG)
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
  cylindrical_walls_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,&lambda,&mu,&rho,&a);
#else
  Message::Error("ElastodynamicsCylinderWallS requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastodynamicsCylinderWallOut(F_ARG)
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
  cylindrical_wallout_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,
  &omega,&lambda,&mu,&rho,&a);
#else
  Message::Error("ElastodynamicsCylinderWallOut requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastodynamicsCylinderWallsOut(F_ARG)
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
  cylindrical_wallsout_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,&lambda,&mu,&rho,&a);
#else
  Message::Error("ElastodynamicsCylinderWallSOut requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastoCylinderWallOutAbc(F_ARG)
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
  double b = Fct->Para[5];
  cylindrical_walloutabc_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,
&lambda,&mu,&rho,&a,&b);
#else
  Message::Error("ElastodynamicsCylinderWallOutABC requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastoCylinderWallsOutAbc(F_ARG)
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
  double b = Fct->Para[5];
  cylindrical_wallsoutabc_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,
&lambda,&mu,&rho,&a,&b);
#else
  Message::Error("ElastodynamicsCylinderWallsOutABC requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastoCylinderWallOutAbc2(F_ARG)
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
  double b = Fct->Para[5];
  cylindrical_walloutabc2_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,
&lambda,&mu,&rho,&a,&b);
#else
  Message::Error("ElastodynamicsCylinderWallOutABC2 requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastoCylinderWallOutAbc2Pade(F_ARG)
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
  double b = Fct->Para[5];
  double L = Fct->Para[6];
  double alpha = Fct->Para[7];
  double eps_p = Fct->Para[8];
  double eps_s = Fct->Para[9];
  cylindrical_walloutabc2pade_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,
&lambda,&mu,&rho,&a,&b,&L,&alpha,&eps_p,&eps_s);
#else
  Message::Error("ElastodynamicsCylinderWallOutABC2_Pade requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

void  F_ElastoCylinderWallsOutAbc2Pade(F_ARG)
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
  double b = Fct->Para[5];
  double L = Fct->Para[6];
  double alpha = Fct->Para[7];
  double eps_p = Fct->Para[8];
  double eps_s = Fct->Para[9];
  cylindrical_wallsoutabc2pade_(&du_re,&dv_re,&du_im,&dv_im,&X,&Y,&t,&omega,
&lambda,&mu,&rho,&a,&b,&L,&alpha,&eps_p,&eps_s);
#else
  Message::Error("ElastodynamicsCylinderWallsOutABC2_Pade requires PeWe");
#endif
  V->Val[0] = du_re;
  V->Val[1] = dv_re;
  V->Val[MAX_DIM] = du_im;
  V->Val[MAX_DIM+1] = dv_im;
  V->Type = VECTOR ;
}

#undef F_ARG
