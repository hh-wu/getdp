// $Id: Solve.cpp,v 1.21 2002-05-14 01:15:47 geuzaine Exp $

#include "Utils.h"
#include "Complex.h"
#include "LinAlg.h"
#include "List.h"
#include "Solve.h"
#include "Patch.h"
#include "Nystrom.h"


// Forward map computation only

void ForwardMap(Ctx *ctx){
  List_T *reslist=List_Create(ctx->nbTargetPts,20,sizeof(Complex));
  Complex res;
  double t;
  int i;

  ctx->f.type = Function::ANALYTIC; 

  for(i=0 ; i<ctx->nbTargetPts ; i++){
    //t = GetTarget(i,ctx);
    t = 2*PI*i/(double)ctx->nbTargetPts + ctx->initialTarget;
    res = Integrate(ctx, i, t); 
    Msg(INFO, "==> I(%d: %.7e) = %' '.15e %+.15e * i", i+1, t, res.real(), res.imag());
    List_Add(reslist, &res);
  }

  List_PrintMatlabComplex(reslist);
  List_Delete(reslist);
}

// Iterative solver

double GetTarget(int index, Ctx *ctx){
  if(index<0 || index>ctx->nbdof-1) 
    Msg(ERROR, "Target out of bounds");
  return ctx->scat.nodes[index];
}

void ComputeRHS(Ctx *ctx, gVector *b){
  int i, beg, end;
  double t, xt[3], kr;
  Complex res;

  LinAlg_GetLocalVectorRange(b,&beg,&end);
  beg /= gCOMPLEX_INCREMENT;
  end /= gCOMPLEX_INCREMENT;
  Msg(INFO, "RHS %d->%d", beg, end-1);

  for(i=beg ; i<end ; i++){
    t = GetTarget(i,ctx);
    ctx->scat.x(t,xt);
    kr = ctx->waveNum[0]*xt[0]+ctx->waveNum[1]*xt[1]+ctx->waveNum[2]*xt[2];
    res = 1.;
    //res = cos(kr)+I*sin(kr);
    res *= 2 / NORM3(ctx->waveNum); // warning!
    LinAlg_SetComplexInVector(res, b, i);
  }
  LinAlg_AssembleVector(b);
}

void ReadSolution(Ctx *ctx, gVector *x){
  int i;
  char fn[256];
  FILE *fp;

  sprintf(fn, "hf.res");
  if(!(fp = fopen(fn, "r")))
    Msg(ERROR, "Could not open res file");
  
  for(i=0; i<ctx->nbdof; i++){
    Complex tmp;
    double d1, d2, d3;
    fscanf(fp, "%lf %lf %lf\n",&d1,&d2,&d3);
    tmp = d2+I*d3;
    LinAlg_SetComplexInVector(tmp,x,i);
  }
  
  fclose(fp);
}

void SaveSolution(Ctx *ctx, gVector *x){
  int i;
  char fn[256];
  FILE *fp;

  sprintf(fn, "hf.res");
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open res file");
  
  for(i=0; i<ctx->nbdof; i++){
    Complex tmp;
    LinAlg_GetComplexInVector(&tmp,x,i);
    fprintf(fp, "%.16g %.16g %.16g\n",ctx->scat.nodes[i],(double)tmp.real(),(double)tmp.imag());
  }
  
  fclose(fp);

  sprintf(fn, "hf.m");
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open matlab file");
  
  fprintf(fp, "k = [%g %g];\n", ctx->waveNum[0], ctx->waveNum[1]);
  fprintf(fp, "a = %g;\n", ctx->scat.a);
  fprintf(fp, "b = %g;\n", ctx->scat.b);

  fprintf(fp, "mu = [\n");
  for(i=0; i<ctx->nbdof; i++){
    Complex tmp;
    LinAlg_GetComplexInVector(&tmp,x,i);
    fprintf(fp, "%.15e + (%.15ei)\n", tmp.real(), tmp.imag());
  }
  fprintf(fp, "]\n");

  fprintf(fp, "angle = [\n");
  for(i=0; i<ctx->nbdof; i++){
    fprintf(fp, "%.15e\n", ctx->scat.nodes[i]);
  }
  fprintf(fp, "]\n");
  
  fclose(fp);

  return;

  LinAlg_SequentialBegin() ;
  LinAlg_PrintVector(stdout,x);
  LinAlg_SequentialEnd() ;
}

void InitializeInterpolation(Ctx *ctx, gVector *x){
  int i, j;
  double t, pou, pou2;
  Patch *p, *p2;

  if(List_Nbr(ctx->scat.patches) == 1){

    p = (Patch*)List_Pointer(ctx->scat.patches,0);
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

    for(i=0; i<List_Nbr(ctx->scat.patches); i++){
      p = (Patch*)List_Pointer(ctx->scat.patches,i);
      for(j=0; j<p->nbdof; j++){
	if(j<p->nbdof/2)
	  p2 = (Patch*)List_Pointer(ctx->scat.patches,(i==0)?List_Nbr(ctx->scat.patches)-1:i-1);
	else
	  p2 = (Patch*)List_Pointer(ctx->scat.patches,(i==List_Nbr(ctx->scat.patches)-1)?0:i+1);
	
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
  double t;
  Complex res;

  LinAlg_GetMatrixContext(A,(void **)(&ctx));

  InitializeInterpolation(ctx, x);

  LinAlg_GetLocalVectorRange(x,&beg,&end);
  Msg(INFO, "A*x %d->%d", beg, end-1);
  
  ctx->iterNum++;
  ctx->discreteMapIndex=0;

  for(i=beg ; i<end ; i++){
    t = GetTarget(i,ctx);
    res = (-I/2.) * Integrate(ctx, i, t);
    LinAlg_SetComplexInVector(res, y, i);
  }
   
  LinAlg_Barrier();
}

void IterSolve(Ctx *ctx){
  gVector b, x;
  gMatrix A;

  ctx->f.type = Function::INTERPOLATED; 

  LinAlg_CreateVector(&b, &ctx->solver, ctx->nbdof, 1, NULL);
  LinAlg_CreateVector(&x, &ctx->solver, ctx->nbdof, 1, NULL);
  LinAlg_ZeroVector(&x);
  LinAlg_CreateMatrixShell(&A, &ctx->solver, ctx->nbdof, ctx->nbdof, 
			   (void*)ctx, MatrixFreeMatMult);

  ComputeRHS(ctx,&b);

  // set initial solution (change also LinAlg_PETSC!)
  //    for(int i=0; i<ctx->nbTargetPts; i++){
  //      double t = GetTarget(i,ctx);
  //      Complex res = cos(t);
  //      VecSetValues(x.V,1, &i, &res, INSERT_VALUES);
  //    }

  LinAlg_Solve(&A, &b, &ctx->solver, &x);

  SaveSolution(ctx,&x);

  LinAlg_DestroyMatrix(&A);
  LinAlg_DestroyVector(&b);
  LinAlg_DestroyVector(&x);
}


void PostProcess(Ctx *ctx){
  gVector x;
  int i, j;
  char fn[256];
  FILE *fp;
  Complex vi, vs;
  double k = NORM3(ctx->waveNum);
  double coord[3];

  LinAlg_CreateVector(&x, &ctx->solver, ctx->nbdof, 1, NULL);
  ReadSolution(ctx,&x);

  LinAlg_PrintVector(stderr, &x);

  InitializeInterpolation(ctx,&x);

  coord[0] = 1;
  coord[0] = 0;
  coord[0] = 0;
  vs = (-2./I) * Evaluate(ctx, 1, coord);
  printf("FAR FIELD = %g %g \n", vs.real(), vs.imag());
  return;

  double xmin = -2*PI, xmax = 2*PI, ymin = -2*PI, ymax = 2*PI;
  //double xmin = -2., xmax = 2., ymin = 0., ymax = 2.;

  int nbx = (int)((xmax-xmin)/TWO_PI*10*k);
  int nby = (int)((ymax-ymin)/TWO_PI*10*k);

  sprintf(fn, "hf_k%g.pos", k);
  if(!(fp = fopen(fn, "w")))
    Msg(ERROR, "Could not open pos file");

  fprintf(fp, "View \"phi\" {\n");
  for(i=0; i<nbx; i++){
    coord[0] = xmin + i*(xmax-xmin)/(double)(nbx-1) ;
    printf("line %d/%d\n", i, nbx);
    for(j=0; j<nby; j++){
      coord[1] = ymin + j*(ymax-ymin)/(double)(nby-1) ;
      coord[2] = 0. ;
      if(coord[0]*coord[0]+coord[1]*coord[1] > 1.){
	vs = (-2./I) * Evaluate(ctx, 0, coord);
	double kr = ctx->waveNum[0]*coord[0]+ctx->waveNum[1]*coord[1]+ctx->waveNum[2]*coord[2];
	vi = cos(kr)+I*sin(kr);
      }
      else{
	vs = vi = 0.;
      }
      
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
