// $Id: Patch.cpp,v 1.7 2002-05-03 01:26:29 geuzaine Exp $

#include "Main.h"
#include "Utils.h"
#include "Patch.h"
#include "Function.h"

// Partitions of unity
//
// pou(x,c) = 1 , - 1 < -c < x < c < 1 
//          = smooth((|x|-c)/(1-c)) , otherwise
// with smooth(x) = exp(2*exp(-1/x)/(x-1) 

void Partition::init(double _center, double _epsilon, double _rise){
  center = _center;
  epsilon = _epsilon;

  if(epsilon>PI){
    Msg(WARNING, "Epsilon too large (%g > PI), restricting to PI", epsilon);
    epsilon = PI;
  }

  crest = epsilon-fabs(_rise);
  if(crest<0.) 
    Msg(ERROR, "Invalid rise (%g > epsilon)", _rise);

  subParts = NULL;
}

double Partition::smooth(double x){
  if(fabs(x-0.)<1.e-12)
    return 1.;
  else if(fabs(x-1.)<1.e-12) 
    return 0.;
  else 
    return exp(2.560851702*exp(-1./x)/(x-1.));
}

double Partition::pou(double x, double c){
  if(fabs(x)-1.e-12 > 1.) 
    return 0.;
  else if(fabs(x) <= c) 
    return 1.;
  else 
    return smooth((fabs(x)-c)/(1.-c));
}

double Partition::eval(double t){
  return pou((t-center)/epsilon,crest/epsilon);
  //return 1;
}


// Patches

Patch::Patch(PatchType _type, int _beg, int _end, 
	     double center, double eps, double rise){
  int i;

  type = _type;
  beg = _beg;
  end = _end;
  nbdof = end-beg;

  nodes = new double[nbdof] ;
  localVals = new Complex[nbdof] ;
  part = new Partition();
  part->init(center,eps,rise);

  // uniform mesh in each element:
  double h = 2.*eps/(double)(nbdof);
  for(i=0; i<nbdof; i++){
    nodes[i] = center-eps + i*h;

    // experimental stuff to better resolve the shadowing point
    // e.g. q=3 for k=500
    
    /*
    double q=5.;
    if(i<nbdof/2){
      nodes[i] = atan(q*tan(nodes[i])) ;
      if(i>nbdof/4) nodes[i] += PI;
    }
    else{
      nodes[i] = atan(q*tan(nodes[i]-PI))+PI ;
      if(i>3*nbdof/4) nodes[i] += PI;
    }
    printf("%.16g\n", nodes[i]);
    */
  
  }

  if(type == SPLINE)
    spline = new Spline(nbdof,nodes);
  else
    fft = new FFT(nbdof);

}

Patch::~Patch(){
  delete part;
  delete[] nodes;
  delete[] localVals;
  if(type == SPLINE){
    delete spline;
  }
  else{
    delete fft;
  }
}

// Mesh

void Create_Mesh(Ctx *ctx, Patch::PatchType type){
  Patch *p[10];
  int i;
  double a;

  ctx->scat.patches = List_Create(10,10,sizeof(Patch));

  if(!(ctx->type & PATCHES)){ // single patch by default

    // odd nb of Fourier modes... to change
    if((ctx->type & ITER_SOLVE) || (ctx->type & POST_PROCESS))
      if(!(ctx->nbTargetPts % 2)) 
	ctx->nbTargetPts++;

    p[0] = new Patch(type, 
		     0, ctx->nbTargetPts, 
		     PI, PI, 0);
    List_Add(ctx->scat.patches, p[0]);

  }
  else{

    // change this when doing Fourier interpolation to have odd nb of
    // Fourier modes on each patch
    
#if 0
    a = 0.5;
    ctx->rise = 0.5;
    p[0] = new Patch(Patch::FOURIER, 0, ctx->nbTargetPts/4, 
		     0, PI/2.-a, ctx->rise);
    List_Add(ctx->scat.patches, p[0]);
    p[1] = new Patch(Patch::FOURIER, ctx->nbTargetPts/4, ctx->nbTargetPts/2, 
		     PI/2., a + ctx->Rise, ctx->rise);
    List_Add(ctx->scat.patches, p[1]);

    p[2] = new Patch(Patch::FOURIER, 20, 30, 
		     PI, PI/2. - a + ctx->Rise, ctx->rise);
    List_Add(ctx->scat.patches, p[2]);
    p[3] = new Patch(Patch::FOURIER, 30, ctx->nbTargetPts, 
		     3.*PI/2., a + ctx->rise, ctx->rise);
    List_Add(ctx->scat.patches, p[3]);
#endif
    
#if 0
    a=1.;
    p[0] = new Patch(Patch::FOURIER, 0, ctx->nbTargetPts/2, 
		     PI/2., PI/2., a);
    List_Add(ctx->scat.patches, p[0]);
    p[1] = new Patch(Patch::FOURIER, ctx->nbTargetPts/2, ctx->nbTargetPts, 
		     3.*PI/2., PI/2.+a, a);
    List_Add(ctx->scat.patches, p[1]);
#endif

#if 0    // overlapping nodes match "1 on 2"
    ctx->nbTargetPts = 60;
    a=5.0*PI/20.;
    p[0] = new Patch(Patch::FOURIER, 0, 40, 
		     PI/2., PI/2., a);
    List_Add(ctx->scat.patches, p[0]);
    ctx->nbTargetPts += 10;
    p[1] = new Patch(Patch::FOURIER, 40, ctx->nbTargetPts, 
		     3.*PI/2., PI/2.+a, a);
    List_Add(ctx->scat.patches, p[1]);
#endif

#if 1 // 5 overlapping nodes -> working 34 iters
    ctx->nbTargetPts = 40;
    a=5.1*PI/20.;
    p[0] = new Patch(Patch::FOURIER, 0, 20, 
		     PI/2., PI/2., a);
    List_Add(ctx->scat.patches, p[0]);
    ctx->nbTargetPts += 10;
    p[1] = new Patch(Patch::FOURIER, 20, ctx->nbTargetPts, 
		     3.*PI/2., PI/2.+a, a);
    List_Add(ctx->scat.patches, p[1]);
#endif

  }


  // put all the nodes in a single vector
  ctx->scat.nodes = new double[ctx->nbTargetPts];
  ctx->nbdof = gCOMPLEX_INCREMENT*ctx->nbTargetPts;
  int k = 0;
  for(i=0; i<List_Nbr(ctx->scat.patches); i++){
    p[0] = (Patch*)List_Pointer(ctx->scat.patches,i);
    for(int j=0; j<p[0]->nbdof; j++)
      ctx->scat.nodes[k++] = p[0]->nodes[j];
  }

  // precompute critical points for the mesh
  if(!(ctx->type & FULL_INTEGRATION))
    ctx->scat.criticalPoints(ctx->nbTargetPts,ctx->waveNum);

}
