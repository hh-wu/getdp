// $Id: Solve.cpp,v 1.35 2002-08-27 23:38:16 geuzaine Exp $

#include "Utils.h"
#include "Context.h"
#include "Complex.h"
#include "LinAlg.h"
#include "List.h"
#include "Patch.h"
#include "Helmholtz2D.h"

// Forward map computation

void Ctx::forwardMap(){
  List_T *reslist=List_Create(nbTargetPts,20,sizeof(Complex));
  Complex res;
  int i;

  f.type = Function::ANALYTIC; 

  for(i=0 ; i<nbTargetPts ; i++){
    res = integrate(i);
    List_Add(reslist, &res);
  }

  List_PrintMatlabComplex(reslist);
  List_Delete(reslist);
}

Complex Ctx::integrate(int index){
  double t;
  Complex res;

  if(scat.dim() == 2){
    t = getTarget(index);
    res = Integrate2D(this, index, t);

    if(f.type == Function::ANALYTIC){
      res *= 2./I;  // 2/I factor to be able to compare with Alain
      Msg(INFO, "==> I(%d: %.7e) = %' '.15e %+.15e * i", 
	  index+1, t, res.real(), res.imag());
    }
  }
  else{
    //return Integrate3D(this, index);
  }

  return res;
}

// Iterative solver

double Ctx::getTarget(int index){
  if(index<0 || index>nbdof-1) 
    Msg(ERROR, "Target out of bounds");
  return scat.nodes[index];
}

void Ctx::computeRHS(gVector *b){
  int i, beg, end;
  double t, xt[3], kr;
  Complex res;

  LinAlg_GetLocalVectorRange(b,&beg,&end);
  beg /= gCOMPLEX_INCREMENT;
  end /= gCOMPLEX_INCREMENT;
  Msg(INFO, "RHS %d->%d", beg, end-1);

  for(i=beg ; i<end ; i++){
    t = getTarget(i);
    scat.x(t,-1,xt);
    kr = waveNum[0]*xt[0]+waveNum[1]*xt[1]+waveNum[2]*xt[2];
    res = 1.;
    //res = cos(kr)+I*sin(kr);
    res *= 2 / NORM3(waveNum); // warning!
    LinAlg_SetComplexInVector(res, b, i);
  }
  LinAlg_AssembleVector(b);
}

void Ctx::readSolution(gVector *x){
  int i;
  char fn[256];
  FILE *fp;

  sprintf(fn, "hf.res");
  if(!(fp = fopen(fn, "r")))
    Msg(ERROR, "Could not open res file");
  
  for(i=0; i<nbdof; i++){
    Complex tmp;
    double d1, d2, d3;
    fscanf(fp, "%lf %lf %lf\n",&d1,&d2,&d3);
    tmp = d2+I*d3;
    LinAlg_SetComplexInVector(tmp,x,i);
  }
  
  fclose(fp);
}

void Ctx::saveSolution(gVector *x){
  int i;
  char fn[256];
  FILE *fp;

  sprintf(fn, "hf.res");
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open res file");
  
  for(i=0; i<nbdof; i++){
    Complex tmp;
    LinAlg_GetComplexInVector(&tmp,x,i);
    fprintf(fp, "%.16g %.16g %.16g\n",scat.nodes[i],(double)tmp.real(),(double)tmp.imag());
  }
  
  fclose(fp);

  sprintf(fn, "hf.m");
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open matlab file");
  
  fprintf(fp, "k = [%g %g %g];\n", waveNum[0], waveNum[1], waveNum[2]);
  fprintf(fp, "a = %g;\n", scat.a);
  fprintf(fp, "b = %g;\n", scat.b);

  fprintf(fp, "mu = [\n");
  for(i=0; i<nbdof; i++){
    Complex tmp;
    LinAlg_GetComplexInVector(&tmp,x,i);
    fprintf(fp, "%.15e + (%.15ei)\n", tmp.real(), tmp.imag());
  }
  fprintf(fp, "]\n");

  fprintf(fp, "angle = [\n");
  for(i=0; i<nbdof; i++){
    fprintf(fp, "%.15e\n", scat.nodes[i]);
  }
  fprintf(fp, "]\n");
  
  fclose(fp);

  return;

  LinAlg_SequentialBegin() ;
  LinAlg_PrintVector(stdout,x);
  LinAlg_SequentialEnd() ;
}

void Ctx::initializeInterpolation(gVector *x){
  int i, j;
  double t, pou, pou2;
  Patch *p, *p2;

  if(type & REAL_COLTON_KRESS){
    if(List_Nbr(scat.patches) != 1)
      Msg(ERROR, "Multi-patch not implemented for classic Colton/Kress integrator");
    p = (Patch*)List_Pointer(scat.patches,0);
    for(j=0; j<p->nbdof; j++)
      LinAlg_GetComplexInVector(&p->localVals[j],x,j+p->beg);
    return;
  }

  if(List_Nbr(scat.patches) == 1){

    p = (Patch*)List_Pointer(scat.patches,0);
    for(j=0; j<p->nbdof; j++){
      LinAlg_GetComplexInVector(&p->localVals[j],x,j+p->beg);
      t = p->nodes[j];
      pou = p->part->eval(t);
      p->localVals[j] *= pou;
      //printf("%.16g %.16g %.16g\n", t, p->localVals[j].real(), pou);
    }

    if(p->type == Patch::SPLINE)
      p->spline->init(p->localVals);
    else
      p->fft->init(p->localVals);

  }
  else{

    for(i=0; i<List_Nbr(scat.patches); i++){
      p = (Patch*)List_Pointer(scat.patches,i);
      for(j=0; j<p->nbdof; j++){
	if(j<p->nbdof/2)
	  p2 = (Patch*)List_Pointer(scat.patches,(i==0)?List_Nbr(scat.patches)-1:i-1);
	else
	  p2 = (Patch*)List_Pointer(scat.patches,(i==List_Nbr(scat.patches)-1)?0:i+1);
	
	LinAlg_GetComplexInVector(&p->localVals[j],x,j+p->beg);
	t = p->nodes[j];
	pou = p->part->eval(t);
	pou2 = p2->part->eval(GetInInterval(t, p2->part->center - p2->part->epsilon,
					    p2->part->center - p2->part->epsilon + TWO_PI)); 
	p->localVals[j] *= pou/(pou+pou2);
	//printf("%.16g %.16g %.16g\n", t, p->localVals[j].real(), pou/(pou+pou2));
      }

      if(p->type == Patch::SPLINE)
	p->spline->init(p->localVals);
      else
	p->fft->init(p->localVals);
    }

  }

}

void MatrixFreeMatMult(gMatrix *A, gVector *x, gVector *y){
  Ctx *ctx;
  int i, beg, end;
  Complex res;

  LinAlg_GetMatrixContext(A,(void **)(&ctx));

  // unscale
  //Patch *p = (Patch*)List_Pointer(ctx->scat.patches,0);
  //for(i=0; i<p->nbdof; i++) p->localVals[i] /= p->jacs[i];

  /*
  char str[128];
  sprintf(str, "x-%d",ctx->iterNum);
  FILE *fp=fopen(str, "w");
  //if(ctx->iterNum == 18)
  LinAlg_PrintVector(fp,x);
  fclose(fp);
  */

  ctx->initializeInterpolation(x);

  LinAlg_GetVectorSize(x,&i);
  LinAlg_GetLocalVectorRange(x,&beg,&end);
  Msg(INFO, "A*x (N=%d: Part:%d->%d)", i, beg, end-1);
  
  ctx->iterNum++;
  ctx->discreteMapIndex=0;

  for(i=beg ; i<end ; i++){
    res = - ctx->integrate(i);
    LinAlg_SetComplexInVector(res, y, i);
  }

  // scale
  //for(i=0; i<p->nbdof; i++) p->localVals[i] *= p->jacs[i];

  LinAlg_Barrier();
}

void Ctx::iterSolve(){
  gVector b, x;
  gMatrix A;

  f.type = Function::INTERPOLATED; 

  LinAlg_CreateVector(&b, &solver, nbdof, 1, NULL);
  LinAlg_CreateVector(&x, &solver, nbdof, 1, NULL);
  LinAlg_ZeroVector(&x);
  LinAlg_CreateMatrixShell(&A, &solver, nbdof, nbdof, 
			   (void*)this, MatrixFreeMatMult);

  computeRHS(&b);

  // set initial solution (change also LinAlg_PETSC!)
  //    for(int i=0; i<nbTargetPts; i++){
  //      double t = getTarget(i);
  //      Complex res = cos(t);
  //      VecSetValues(x.V,1, &i, &res, INSERT_VALUES);
  //    }

  LinAlg_Solve(&A, &b, &solver, &x);

  saveSolution(&x);

  LinAlg_DestroyMatrix(&A);
  LinAlg_DestroyVector(&b);
  LinAlg_DestroyVector(&x);
}


void Ctx::postProcess(){
  gVector x;
  int i, j;
  char fn[256];
  FILE *fp;
  Complex vi, vs;
  double k = NORM3(waveNum);
  double coord[3], angle;

  if(scat.dim() != 2) Msg(ERROR, "Postpro not ready for 3D");

  LinAlg_CreateVector(&x, &solver, nbdof, 1, NULL);
  readSolution(&x);

  LinAlg_PrintVector(stderr, &x);

  initializeInterpolation(&x);

  // compute far field
  /*  
  coord[0] = 1;
  coord[1] = 0;
  coord[2] = 0;
  vs = -0.5 * Evaluate2D(this, 1, coord); //????? /2
  printf("farfield = %.15g + i* %.15g \n", vs.real(), vs.imag());
  return;
  */

  // far field polar plot
  sprintf(fn, "far.m");
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open .m file");

#define NBP 1000

  fprintf(fp, "far=[\n");
  for(angle=0.; angle<TWO_PI; angle+=TWO_PI/NBP){
    coord[0] = cos(angle);
    coord[1] = sin(angle);
    coord[2] = 0;
    vs = -0.5 * Evaluate2D(this, 1, coord); //????? 0.5
    printf("%g %.15g %.15g\n", angle, vs.real(), vs.imag());
    fprintf(fp, "%.15e + (%.15ei)\n", vs.real(), vs.imag());
  }
  fprintf(fp, "];\n");

  fprintf(fp, "angle=[\n");
  for(angle=0.; angle<TWO_PI; angle+=TWO_PI/NBP){
    fprintf(fp, "%g\n", angle);
  }
  fprintf(fp, "];\n");

  fprintf(fp, "scat=[\n");
  for(angle=0.; angle<TWO_PI; angle+=TWO_PI/NBP){
    double xx[3];
    scat.x(angle,0,xx);
    fprintf(fp, "%g %g\n", xx[0], xx[1]);
  }
  fprintf(fp, "];\n");

  fclose(fp);
  return;


  double xmin = -PI, xmax = PI, ymin = -PI, ymax = PI;
  //double xmin = -2*PI, xmax = 2*PI, ymin = -2*PI, ymax = 2*PI;
  //double xmin = -0.5, xmax = 0., ymin = 0., ymax = .5;

  int nbx = (int)((xmax-xmin)/TWO_PI*10*k);
  int nby = (int)((ymax-ymin)/TWO_PI*10*k);

  if(nbx<100) nbx = nby = 100;

  sprintf(fn, "hf.pos");
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open pos file");

  fprintf(fp, "View \"phi\" {\n");
  for(i=0; i<nbx; i++){
    coord[0] = xmin + i*(xmax-xmin)/(double)(nbx-1) ;
    printf("line %d/%d\n", i, nbx);
    for(j=0; j<nby; j++){
      coord[1] = ymin + j*(ymax-ymin)/(double)(nby-1) ;
      coord[2] = 0. ;
      //if(coord[0]*coord[0]+coord[1]*coord[1] > 1.){
	vs = -0.5 * Evaluate2D(this, 0, coord);
	double kr = waveNum[0]*coord[0]+waveNum[1]*coord[1]+waveNum[2]*coord[2];
	vi = cos(kr)+I*sin(kr);
      //}
      //else{
	//vs = vi = 0.;
      //}
      
      fprintf(fp, "SP(%g,%g,%g){%g,%g,%g,%g,%g,%g,%g};\n"
	      , coord[0], coord[1], coord[2]
	      , vs.real(), vs.imag()
	      , vi.real(), vi.imag()
	      , vs.real()+vi.real(), vs.imag()+vi.imag()
	      , sqrt(SQU(vs.real()+vi.real())+SQU(vs.imag()+vi.imag()))
	      //, atan2( vs.real()+vi.real() , vs.imag()+vi.imag() )
	      );
    }
  }
  fprintf(fp,
	  "};\n"
	  //"Plugin(Triangulate).iView=PostProcessing.NbViews-1;\n"
	  //"Plugin(Triangulate).Run;\n"
	  //"Delete View[PostProcessing.NbViews-2];\n"
	  );

  fclose(fp);

}
