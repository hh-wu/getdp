#include "GetDP.h"
#include "Data_DefineE.h"
#include "F_Function.h"
#include "GeoData.h"
#include "Numeric.h"
#include "Numeric_F.h"
#include "Get_Geometry.h"
#include "Cal_Value.h" 
#include "CurrentData.h"

#if defined(HAVE_GSL)

#include <gsl/gsl_vector.h>
#include <gsl/gsl_multiroots.h>

/* ------------------------------------------------------------------------ */
/*  Warning: the pointers A and V can be identical. You must                */
/*           use temporary variables in your computations: you can only     */
/*           affect to V at the very last time (when you're sure you will   */
/*           not use A any more).                                           */
/* ------------------------------------------------------------------------ */

#define F_ARG    struct Function * Fct, struct Value * A, struct Value * V

struct f_context
{
  double x1, y1;
};

static int f(const gsl_vector *ts, void *param, gsl_vector *f)
{
  struct f_context * c = (struct f_context *)param;
  double t = gsl_vector_get(ts, 0);
  double s = gsl_vector_get(ts, 1);
  double x = c->x1;
  double y = c->y1;	  

  gsl_vector_set(f, 0, cos(t) - s*cos(2*t) - x);
  gsl_vector_set(f, 1, sin(t) - s*sin(2*t) - y);

  return GSL_SUCCESS;
}

static int df(const gsl_vector *ts, void* param, gsl_matrix *j)
{
  struct f_context *c = (struct f_context *)(param);
  double t = gsl_vector_get(ts, 0);
  double s = gsl_vector_get(ts, 1);
  double x = c->x1;
  double y = c->y1;

  double j1dt = -sin(t) + s*2*sin(2*t);
  double j2dt = cos(t) - 2*s*cos(2*t);
  double j1ds = -cos(2*t);
  double j2ds = -sin(2*t);
 
  gsl_matrix_set(j, 0, 0, j1dt);
  gsl_matrix_set(j, 1, 1, j2ds);
  gsl_matrix_set(j, 1, 0, j2dt);
  gsl_matrix_set(j, 0, 1, j1ds);
  
  return GSL_SUCCESS;
}

static int fdf(const gsl_vector *uv, void *param, gsl_vector *func, gsl_matrix *jac)
{
  f(uv, param, func);
  df(uv, param, jac);
  return GSL_SUCCESS;
}

static int newton(gsl_multiroot_function_fdf FDF, double *u, double *v)
{
  const int MAX_ITER = 25;
  const gsl_multiroot_fdfsolver_type* TYPE = gsl_multiroot_fdfsolver_gnewton;

  int iter = 0, status;

  gsl_multiroot_fdfsolver* solver = gsl_multiroot_fdfsolver_alloc(TYPE, 2);

  /* u, v contains initial guess */
  gsl_vector *X = gsl_vector_alloc(2);
  gsl_vector_set(X, 0, *u);
  gsl_vector_set(X, 1, *v);
  gsl_multiroot_fdfsolver_set(solver, &FDF, X);

  do {
    iter++;
    status = gsl_multiroot_fdfsolver_iterate(solver);
    
    *u = gsl_vector_get(solver->x, 0);
    *v = gsl_vector_get(solver->x, 1);

    if(*v < 0 || *v > 15 || abs(*u) > 7){
      status= GSL_FAILURE;
      break;
    }
    
    status = gsl_multiroot_test_residual(solver->f, 1.e-12);
  } while(status == GSL_CONTINUE && iter < MAX_ITER);
  
  gsl_multiroot_fdfsolver_free(solver);
  gsl_vector_free(X);

  if(status == GSL_SUCCESS)
    return 1;
  else
    return 0;
}

void  F_CylinderPhase(F_ARG) 
{
  double initGuess, tau[2], sigma, phase;
  int *check;

  double x = A->Val[0], y = A->Val[1], r = 1.;
  struct f_context context = {x, y};
  gsl_multiroot_function_fdf FDF;

  GetDP_Begin("F_CylinderPhase");

  if(x > 0 && y < 1 && y > -1) {
    V->Val[0] = x;
    V->Type = SCALAR;
    GetDP_End;
    return;
  }
  
  if(x > 0){
    tau[1] = sqrt(x * x + y * y);
    if(y > 0){
      initGuess = (atan2(y, -x) + 3.14 / 2) / 2;
    }
    else{
      initGuess = (atan2(y, -x) - 3.14 / 2) / 2;
    }
  }
  else{
    tau[1] = sqrt(x * x + y * y) - 1;
    initGuess = atan2(y, x);
  }
  
  if(abs(x) < 1 && abs(y) > 6.5){
    if(y < 0){
      initGuess = initGuess - 3.14 / 8;
    }
    else{
      initGuess = initGuess + 3.14 / 8;
    }
  }
  
  tau[0] = initGuess;
  
  if(tau[1] == 0){
    V->Val[0] = x;
    V->Type = SCALAR;
    return;
  }

  FDF.f = &f;
  FDF.df = &df;
  FDF.fdf = &fdf;
  FDF.n = 2;
  FDF.params = &context;
  
  if(!newton(FDF, &tau[0], &tau[1]))
    Msg(GERROR, "Newton did not converge: %lf, %lf \n", tau[0], tau[1]);
  
  /* now we just go on to calculate the phase from this */

  phase = cos(tau[0]) + tau[1];
  
  if(phase > abs(13)){
    phase = 13;
  }

  V->Val[0] = phase;
  V->Type = SCALAR;

  GetDP_End;
}

void F_DiamondPhase(F_ARG)
{
  double x, y, phase, r, theta, xtrans, ytrans;

  GetDP_Begin(F_DiamondPhase);

  x = A->Val[0];
  y = A->Val[1];

  /*
  if(x < 0 &&){
    phase = -x;
    V-Val[0] = phase;
    V->Type = SCALAR;
    GetDP_End;
    return;
  }
 */

  x = -x; /* just a temp investigation */
  /*partition up the space into a couple of pieces*/
 
  if(x >= 0 && (y-.1 <= 1 && y+.1 >= -1)){
    V->Val[0] = x;
    V->Type = SCALAR;
    GetDP_End;
    return;     
  }

  /*
  if( x <= 0 && (y>=-1 && y<=0) )
  { 
    phase = -y-1 + (-x+(-y-1));       
    V->Val[0] = phase;
    V->Type = SCALAR;
    GetDP_End;
    return;
  }  
  */

  /*check to see if the point is in the cone made by the x-corner*/
  xtrans = x + 1;
  ytrans = y;
  theta = atan2(ytrans,xtrans);
  if( theta >= 3.14/2 || theta <= -3.14/2){
    phase = -1 + sqrt( pow(xtrans,2.0) + pow(ytrans,2.0) );
    V->Val[0] = phase;
    V->Type = SCALAR;
    GetDP_End;
    return;  
  }   
  
  /*check to see if the point is in the upper corner cone*/
  xtrans = x;
  ytrans = y - 1;
  theta = atan2(ytrans,xtrans);
  if( theta <= 3.14/2 && theta >= 0 ){
    phase = sqrt( pow(x,2.0) + pow(ytrans,2.0) );
    V->Val[0] = phase;
    V->Type = SCALAR;
    GetDP_End;
    return;    
  }  
  
  /*lower corner cone*/
  xtrans = x;
  ytrans = y + 1;
  theta = atan2(ytrans,xtrans);
  if( theta >= -3.14/2 && theta <= 0 ){
    phase = sqrt( pow(x,2.0) + pow(ytrans,2.0) );
    V->Val[0] = phase;
    V->Type = SCALAR;
    GetDP_End;
    return;    
  }    

  /*the point must be in one of the two reflections caused by the
    sides facing the incoming wave*/
  /*  xtrans = x;
      ytrans = y; */
  if(y<0){
    /*  xtrans = (x+y+1)/2;
	ytrans = (xtrans)-1;
	phase = xtrans + sqrt( pow(x-xtrans,2.0) + pow(y-ytrans,2.0)  ); */
    phase = -x + ( -y + (x-1) );
  }
  else{
    /*  xtrans = (1+x-y)/2;
	ytrans = xtrans-1;
	phase = xtrans + sqrt( pow(x-xtrans,2.0) + pow(-y-ytrans,2.0)  ); */
    phase = -x + ( y - (1-x) );
  }  

  V->Val[0] = phase;
  V->Type = SCALAR;
  GetDP_End; 
}

#endif
