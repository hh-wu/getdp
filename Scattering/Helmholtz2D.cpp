// $Id: Helmholtz2D.cpp,v 1.6 2002-06-12 00:23:40 geuzaine Exp $

#include "Utils.h"
#include "Helmholtz2D.h"
#include "Complex.h"
#include "Bessel.h"
#include "Scatterer.h"
#include "Patch.h"

#define EPSILON 1.e-14

// Helmholtz kernels (cf. Colton and Kress)

void GFHelmholtzParametric2D::init(double _t, double _xt[3], double _dxt[3], 
				   double _tau, double _xtau[3], double _dxtau[3],
				   double _k){
  double dist[3];
  t = _t;
  tau = _tau;
  for(int i=0;i<3;i++){
    xt[i] = _xt[i];
    dxt[i] = _dxt[i];
    xtau[i] = _xtau[i];
    dxtau[i] = _dxtau[i];
    dist[i] = _xt[i] - _xtau[i];
  }
  r = NORM3(dist);
  k = _k;
  kr = k*r;
  d = sqrt(SQU(dxtau[0])+SQU(dxtau[1])) ;
}

Complex GFHelmholtzParametric2D::M(){
  if(!kr){
    Msg(WARNING, "kr=0 in M");
    return 0.;
  }
  return Bessel_h(1,0,kr) * d;
}

Complex GFHelmholtzParametric2D::M1(){
  return -2./(I*TWO_PI) * Bessel_j(0,kr) * d;
}

Complex GFHelmholtzParametric2D::M2(double t_pp, double tau_pp, double jac){
  //  if(fabs(t-tau)>EPSILON)
  //    return M()-M1()*log(4.*SQU(sin((t-tau)/2.)));
  //  else
  //    return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(DSQU(k/2.*d))) * d;


  /*
  if(fabs(t-tau) > EPSILON){
    return M()-M1()*log(4.*SQU(sin((t-tau)/2.)));
  }
  else{
    return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(DSQU(k/2.*jac*d))) * d;
  }
  */

  if(fabs(t_pp-tau_pp) > EPSILON){
    return M()-M1()*log(4.*SQU(sin((t_pp-tau_pp)/2.)));
  }
  else{
    return (1. - 2.*EULER/(I*PI) - 2./(I*TWO_PI) * log(DSQU(k/2.*jac*d))) * d
      //+ 2. * log(jac) * M1(); // Colton and Kress chg of vars for corner
      ;
  }
}

// Special quadrature weights

double GFHelmholtzParametric2D::singLogQuadWeight(double t, double tau, int n){
  int m;
  double w=0., tmp;

  for(m=1 ; m<=n-1 ; m++){
    w += cos(m*(t-tau))/m;
  }
  tmp = -TWO_PI/n*w - PI/(n*n)*cos(n*(t-tau));
  return tmp;
}


// Nystrom integrator (cf. single layer potential formulation in
// Colton & Kress, p. 69) for
//
// I(t) = \int_{a-eps}^{a+eps} 
//            H_0^(1)(k*r(t,tau))
//          * \sqrt{x_1'(tau)^2+x_2'(tau)^2}
//          * f(tau) * pou(tau) dtau 
//
// where the integrand is 2*eps-periodic thanks to the partition of
// unity (pou), centered on a==t.
//
// (This integral can be optionnaly transformed into another if we
// want to better resolve the shadowing points)
//
// The Nystrom integrator given in Colton & Kress being only valid for
// a 2*PI-periodic integrand, from 0 to 2*PI, the change of variables
// 
// tau = (tau'-PI)*eps/PI+a
// dtau = eps/PI*dtau'
//
// is finally applied, to give:
//
// I(t) = \int_{0}^{2*PI} 
//            H_0^(1)(k*r(t,(tau'-PI)*eps/PI+a))
//          * \sqrt{x_1'((tau'-PI)*eps/PI+a))^2+x_2'((tau'-PI)*eps/PI+a))^2}
//          * f((tau'-PI)*eps/PI+a)) * pou((tau'-PI)*eps/PI+a)) 
//          * eps/PI dtau' 
//
// The decomposition of the logarithmic singularity is then made as in
// Colton & Kress. Warning: the jacobian eps/PI also appears in the
// decomposition of the kernel.
//

Complex Nystrom(int singular, Ctx *ctx, double t, int nbpts, Partition *part){

  Complex res=0., density, ansatz, m, m1, m2, fact;
  double xt[3], dxt[3], xtau[3], dxtau[3];
  double tau, tau_p, tau_pp, t_p, t_pp, pou, w;
  double tau_p_min, tau_p_max;
  int j, n = nbpts/2;
  double k = NORM3(ctx->waveNum), jac=1.;
  GFHelmholtzParametric2D kern;
  static int first = 1;
  static double *Weights;

#define TEST
#ifdef TEST
  static FILE *fp;
  if(first) fp = fopen("debug","w");
#endif

  if(!nbpts) return 0.;

  ctx->scat.x(t,-1,xt);
  ctx->scat.dx(t,-1,dxt);

  if(singular && first) 
    Weights = new double[nbpts];

  if((ctx->type & STORE_OPERATOR) && first)
    ctx->discreteMap = List_Create(nbpts, nbpts, sizeof(Complex));

  // invert the change of vars to get the location of the target
  // point in the [0,2\pi] parameterization. In the classic case,
  // since we apply a linear chg of var and the interval is *always*
  // centered arount the target point, the target is always at
  // t_pp==PI! This is not the case anymore when a nonlinear chg of
  // var is applied. 
  // Here we first compute t_p in [w^{-1}(t_min),w^{-1}(t_max)] :
  ctx->f.invChgVar(t, &t_p);

  for(j=0 ; j<=2*n-1 ; j++){
    // tau_pp \in [0,2\pi]
    tau_pp = TWO_PI*j/(2.*n);
    jac = 1.;

    // tau_p \in [w(a-\epsilon),w(a+\epsilon)]
    ctx->f.invChgVar(part->center-part->epsilon, &tau_p_min);
    ctx->f.invChgVar(part->center+part->epsilon, &tau_p_max);
    tau_p = (tau_p_max-tau_p_min)/TWO_PI*tau_pp + tau_p_min;
    jac *= (tau_p_max-tau_p_min)/TWO_PI;

    // tau in [a-\epsilon,a+\epsilon]
    jac *= ctx->f.chgVar(tau_p, &tau);

    // then compute the target point in [0,2\pi]:
    t_pp = TWO_PI/(tau_p_max-tau_p_min)*(t_p-tau_p_min);
    //printf("t_pp = %g\n", t_pp);

    pou = part->eval(tau);

#ifdef TEST
    fprintf(fp,"%.12g %.12g %.12g    %.12g %.12g %.12g    %.12g\n",
	    t,t_p,t_pp,tau,tau_p,tau_pp,pou);
#endif

    if(singular && 
       (first || (ctx->f.applyChgVar && !(ctx->type & STORE_OPERATOR))))
	Weights[j] = kern.singLogQuadWeight(t_pp,tau_pp,n);
    
    if(pou){

      density = ctx->f.density(&ctx->scat,tau);

      if((ctx->type & STORE_OPERATOR) && ctx->iterNum > 1){
	
	res += *(Complex*)List_Pointer(ctx->discreteMap, ctx->discreteMapIndex) * density;

      }
      else{

	ctx->scat.x(tau,-1,xtau);
	ctx->scat.dx(tau,-1,dxtau);

	ansatz = ctx->f.ansatz(ctx->waveNum,xt,xtau);

	kern.init(t,xt,dxt,tau,xtau,dxtau,k);

	if(!jac){//ctx->f.applyChgVar && fabs(tau)<1.e-16){
	  // we are on the corner (jac is 0)
	  Msg(WARNING, "corner: jac=0 (tau=%g, tau'=%g, tau\"=%g, jac=%g)",
	      tau, tau_p, tau_pp, jac);
	  fact = 0;
	}
	else if(singular){
	  // combine special quadrature with trapezoidal
	  if(!jac) Msg(ERROR, "Jac==0!");
	  w = Weights[j]; // kern.singLogQuadWeight(PI,tau_pp,n);
	  m1 = kern.M1();
	  m2 = kern.M2(t_pp,tau_pp,jac);
	  fact = (w * m1 + PI/(double)n * m2) * ansatz * pou * jac;
	}
	else{
	  // simple trapezoidal
	  if(List_Nbr(part->subParts)){
	    Partition *part2 = (Partition*)List_Pointer(part->subParts,0);
	    double pou2 = part2->eval(tau);
	    pou -= pou2;
	  }
	  if(pou){
	    m = kern.M();
	    fact = (PI/(double)n * m) * ansatz * pou * jac;
	  }
	  else
	    fact = 0.;

	}

	if(ctx->type & STORE_OPERATOR)
	  List_Add(ctx->discreteMap, &fact);

	res += fact * density;

      }

      ctx->discreteMapIndex++;

    }
  }

  if(singular && first) first = 0;

#ifdef TEST
  fprintf(fp,"\n\n");
#endif
  
  return res;
}

Complex NystromSimple(Ctx *ctx, int index, double t){
  GFHelmholtzParametric2D kern;
  Patch *p = (Patch*)List_Pointer(ctx->scat.patches,0);
  Complex res=0., density, ansatz, w, m1, m2, fact;
  double xt[3], dxt[3], xtau[3], dxtau[3], tau, sigma, s, k=NORM3(ctx->waveNum), jac=1.;
  int j, n=ctx->nbTargetPts/2;
  static int first = 1;

  double STEP=TWO_PI/(2.*n);
  s = index*STEP+STEP/2.;
  //s = index*STEP;

  ctx->scat.x(t,-1,xt);
  ctx->scat.dx(t,-1,dxt);

  if((ctx->type & STORE_OPERATOR) && first)
    ctx->discreteMap = List_Create(2*n, 2*n, sizeof(Complex));

  for(j=0 ; j<=2*n-1 ; j++){
    sigma = j*STEP+STEP/2.;
    //sigma = j*STEP;

    tau = p->nodes[j];
    jac = p->jacs[j];

    density = ctx->f.density(&ctx->scat,j,tau);

    if((ctx->type & STORE_OPERATOR) && ctx->iterNum > 1){
      
      res += *(Complex*)List_Pointer(ctx->discreteMap, ctx->discreteMapIndex) * density;
      
    }
    else{
      
      ctx->scat.x(tau,-1,xtau);
      ctx->scat.dx(tau,-1,dxtau);
      
      ansatz = ctx->f.ansatz(ctx->waveNum,xt,xtau);
      
      kern.init(t,xt,dxt,tau,xtau,dxtau,k);
      w = kern.singLogQuadWeight(s,sigma,n);
      m1 = kern.M1();
      m2 = kern.M2(s,sigma,jac);
      fact = (w * m1 + PI/(double)n * m2) * ansatz * jac;
      
      if(ctx->type & STORE_OPERATOR)
	List_Add(ctx->discreteMap, &fact);

      res += fact * density;

    }

    ctx->discreteMapIndex++;

  }

  if(first) first = 0;

  return res;
}

// Stuff for interval comparison

typedef struct{
  int singular;
  double min, max;
} Interval;

int fcmp_Interval(const void * a, const void * b) {
  Interval *i1 = (Interval*)a, *i2 = (Interval*)b;
  if(i1->max < i2->min) return -1;
  else if(i1->min > i2->max) return 1;
  else return 0;
}

// Integrate, given the target point 't'

Complex Integrate2D(Ctx *ctx, int index, double t){
  Partition part, part2;
  CPoint pt;
  Interval I, *pI;
  Complex res, tmp, tmp2;
  double eps, s_eps=0.;
  int j, nb, i_index;

  static List_T *CritPts=List_Create(10,10,sizeof(CPoint));
  static List_T *Intervals=List_Create(10,10,sizeof(Interval));

  List_Reset(CritPts);
  List_Reset(Intervals);

  if(ctx->type & REAL_COLTON_KRESS){ // simple Nystrom, always in [0,2\pi]

    return NystromSimple(ctx,index,t);

  }
  else if(ctx->type & FULL_INTEGRATION){ // full Nystrom integrator

    // stupid pou around t, equal to 1 everywhere in [t-PI,t+PI]
    part.init(t,PI,0.);
    return Nystrom(1,ctx,t,ctx->nbIntPts,&part);
    //return Nystrom(0,ctx,t,ctx->nbIntPts,&part);// pure trapezoidal (non log sing removal)

  }

  if(ctx->type & INTERACT1){ // interactive integration around one critical point

    // add singular and  critical points in list
    ctx->scat.singularPoint(t,CritPts);
    ctx->scat.criticalPoints(index,CritPts);
    List_Sort(CritPts, fcmp_CPoint);
  
    // around which point should we integrate?
    printf("Target = %g\n", t);
    for(j=0 ; j<List_Nbr(CritPts) ; j++) {
      List_Read(CritPts,j,&pt);
      printf("%d (%s) = %g\n", j, pt.name(), pt.val);
    }
    printf("Pt num to integrate around? "); scanf("%d", &i_index);
    printf("Epsilon? "); scanf("%lf", &eps);
    printf("Rise? "); scanf("%lf", &ctx->rise);
    printf("Number of integration points? "); scanf("%d", &nb);
    List_Read(CritPts, i_index, &pt);
    Msg(DEBUG, "%s int. : %d pts in [%g , %g]", pt.name(), nb, pt.val-eps, pt.val+eps);

    part.init(pt.val,eps,ctx->rise);
    return Nystrom((pt.degree==1),ctx,t,nb,&part);

  }

  //double eps_shad = 1.; // k=1000;
  //double eps_shad = 0.5; // k=10000;
  //double eps_shad = 0.25; // k=100000;
  //double eps_shad = 2*0.46; // k=320000;
  double eps_shad = pow(ctx->epsilon,1./3.) ;

  // FIXME:
  //
  // We should maybe keep the sing, scat, crit pts in separate
  // lists. At least, add a test on the type before discarding a
  // point: what happens when critical points approach a target pt?
  // 
  // Should change fcmp_CPoint ?????????

  // add target, critical and shadowing points in list
  ctx->scat.singularPoint(t,CritPts);
  ctx->scat.criticalPoints(index,CritPts);
  //ctx->scat.shadowingPoints(t,eps_shad/2.,ctx->waveNum,CritPts);
  // ctx->scat.shadowingPoints(t,0.,ctx->waveNum,CritPts);

  List_Sort(CritPts, fcmp_CPoint);

  if(ctx->iterNum==1) ctx->scat.printPoints(t,CritPts);

  // merge all overlapping pous in an interval list
  for(j=0 ; j<List_Nbr(CritPts) ; j++) {
    List_Read(CritPts,j,&pt);
    I.singular = (pt.degree==1);
    if(ctx->type == INTERACT2){
      printf("Epsilon for t=%g?\n", pt.val); 
      scanf("%lf", &eps);
      if(pt.degree == 1) s_eps = eps;
    }
    else{
      if(pt.degree == 1) eps = s_eps = ctx->epsilon;
      else if(pt.degree == 2) eps = sqrt(ctx->epsilon);
      //else eps = 1.3*pow(ctx->epsilon,1./2.) ;
      else eps = eps_shad ;
    }
    I.min = pt.val-eps;
    I.max = pt.val+eps;
    Msg(DEBUG, "  - %s pt %d = %.15e -> [%g,%g]", pt.name(), j, pt.val, I.min, I.max);
    if((pI = (Interval*)List_PQuery(Intervals, &I, fcmp_Interval))){
      if(I.singular) pI->singular = 1;
      pI->min = MIN(pI->min, I.min);
      pI->max = MAX(pI->max, I.max);
    }
    else{
      List_Add(Intervals, &I);
    }
  }
  
  for(j=0 ; j<List_Nbr(Intervals) ; j++) {
    List_Read(Intervals, j, &I);
    Msg(DEBUG, "  * [%g , %g]", I.min, I.max);
  }
  
  // insure periodicity
  if(List_Nbr(Intervals)>1){
    pI = (Interval*)List_Pointer(Intervals, 0);
    List_Read(Intervals, List_Nbr(Intervals)-1, &I);
    if(I.max > TWO_PI+pI->min){
      Msg(DEBUG, "  ! Flipping last interval");
      I.min -= TWO_PI;
      I.max -= TWO_PI;
      if(I.singular) t-=TWO_PI;
      List_PSuppress(Intervals, List_Nbr(Intervals)-1);
      if((pI = (Interval*)List_PQuery(Intervals, &I, fcmp_Interval))){
	if(I.singular) pI->singular = 1;
	pI->min = MIN(pI->min, I.min);
	pI->max = MAX(pI->max, I.max);
      }
      else{
	List_Add(Intervals, &I);
      }
    }
  }
  
  for(j=0 ; j<List_Nbr(Intervals) ; j++) {
    List_Read(Intervals, j, &I);
    Msg(DEBUG, "  ** [%g , %g]", I.min, I.max);
  }
  
  // integrate
  res = 0.;
  for(j=0 ; j<List_Nbr(Intervals) ; j++) {
    List_Read(Intervals, j, &I);
    
    if(I.singular){
      part.init(t,s_eps,ctx->rise);
      if(ctx->type & INTERACT2){
	printf("Nb int. pts for singular part.? "); 
	scanf("%d", &nb);
      }
      else{
	//nb = (int)(2*s_eps/TWO_PI*ctx->nbIntPts); // change this
	nb = ctx->nbIntPts;
      }
      Msg(DEBUG, "  - singular int. : %d pts in [%g , %g]", nb, t-s_eps, t+s_eps);
      tmp = Nystrom(1,ctx,t,nb,&part);
      Msg(DEBUG, "    IS = %' '.15e %+.15e * i", tmp.real(), tmp.imag());
      
      // if the singular integration is embedded in a larger one
      if((I.max-I.min) > 2.*s_eps) {
	part.init((I.min+I.max)/2,(I.max-I.min)/2.,ctx->rise);
	part.subParts = List_Create(1,1,sizeof(Partition));
	part2.init(t,s_eps,ctx->rise);
	List_Add(part.subParts, &part2);
	if(ctx->type & INTERACT2){
	  printf("Nb int. pts for special critical part.? "); 
	  scanf("%d", &nb);
	}
	else{
	  //nb = (int)(2*sqrt(part.epsilon)/TWO_PI*ctx->nbIntPts); // change this
	  
	  // this is not correct. we should have a multilevel strategy:
	  // if degree 1 embedded in degree 2 -> nbpts=...
	  //                      in degree 3 ->
	  // if degree 2 in degree 3, etc.

	  nb = (int)(part.epsilon/sqrt(ctx->epsilon) * ctx->nbIntPts2);
	}
	Msg(DEBUG, "  - critical int. in [%g,%g] \\ [%g,%g]",I.min,I.max,t-s_eps, t+s_eps);
	tmp2 = Nystrom(0,ctx,t,nb,&part);
	Msg(DEBUG, "    IC* = %' '.15e %+.15e * i", tmp2.real(), tmp2.imag());
	List_Delete(part.subParts);
	part.subParts = NULL;
	tmp += tmp2;
      }
      
    }
    else{
      part.init((I.min+I.max)/2.,(I.max-I.min)/2.,ctx->rise);
      if(ctx->type & INTERACT2){
	printf("Nb int. pts for critical part.? "); 
	scanf("%d", &nb);
      }
      else{
	//nb = (int)(2*sqrt(part.epsilon)/TWO_PI*ctx->nbIntPts);//change this

	// same remark as above...

	nb = (int)(part.epsilon/sqrt(ctx->epsilon) * ctx->nbIntPts2);
      }
      Msg(DEBUG, "  - critical int.: %d pts in [%g , %g]", nb, I.min, I.max);
      tmp = Nystrom(0,ctx,t,nb,&part);
      Msg(DEBUG, "    IC = %' '.15e %+.15e * i", tmp.real(), tmp.imag());
    }
    
    res += tmp;
  }
  
  return res;

}

// Post-process solution

Complex Evaluate2D(Ctx *ctx, int farfield, double x[3]){
  int j, n;
  double tau, xtau[3], dxtau[3], dummy[3]={0,0,0}, k = NORM3(ctx->waveNum);
  Complex res=0., f, tmp;
  GFHelmholtzParametric2D kern;

  if(ctx->type & REAL_COLTON_KRESS)
    n = ctx->nbTargetPts/2;
  else
    n = ctx->nbIntPts/2;

  for(j=0 ; j<=2*n-1 ; j++){
    tau = TWO_PI*j/(2.*n);
    ctx->scat.x(tau,-1,xtau);
    ctx->scat.dx(tau,-1,dxtau);

    ctx->f.type = Function::ANALYTIC; 
    f = ctx->f.ansatz(ctx->waveNum,NULL,xtau);

    ctx->f.type = Function::INTERPOLATED; 

    if(ctx->type & REAL_COLTON_KRESS){
      tmp = ctx->f.density(&ctx->scat,j,tau);
    }
    else{
      tmp = ctx->f.density(&ctx->scat,tau);
    }

    //printf("%g %g %g\n", tau, tmp.real(), tmp.imag());

    if(!farfield){
      kern.init(0,x,dummy,tau,xtau,dxtau,k);
      res += kern.M() * f * tmp;
    }
    else{
      res += exp(-I*k*(x[0]*xtau[0]+x[1]*xtau[1])) * 
	f * tmp * sqrt(SQU(dxtau[0]) + SQU(dxtau[1])) ;
    }
    
  }

  res *= PI/(double)n; // trapezoidal rule weight

  if(farfield) res *= exp(-I*PI/4.)/sqrt(8.*PI*k); // from asympt. kern.

  return res;
}

