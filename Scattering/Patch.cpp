// $Id: Patch.cpp,v 1.30 2002-09-05 00:10:32 geuzaine Exp $

#include "Context.h"
#include "Utils.h"
#include "Patch.h"
#include "Function.h"
#include "ChangeOfVars.h"

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

double Patch::changeOfVars(double s, int deriv){
  return cv_none(s,deriv);
  //return cv_leonid(s,deriv);
  //return cv_boyd(s,deriv);
  //return cv_colton(s,deriv);
  //return cv_doubleboyd(s,deriv);
  //return cv_shadow(s,deriv);
}

Patch::Patch(PatchType _type, int _beg, int _nbdof, 
	     double center, double eps, double rise){
  int i;
  double s;

  type = _type;
  beg = _beg;
  nbdof = _nbdof;

  nodes = new double[nbdof] ;
  jacs = new double[nbdof] ;
  localVals = new Complex[nbdof] ;
  part = new Partition();
  part->init(center,eps,rise);

  double step = 2.*eps/(double)(nbdof);
  for(i=0; i<nbdof; i++){
    s = center-eps + i*step; // uniform mesh in each patch
    //s = center-eps + i*step + step/2.; // mesh that does *not* comprise the origin
    //s = PI/4.; // TEST!!!
    nodes[i] = changeOfVars(s,0);
    jacs[i] = changeOfVars(s,1);
    printf("node %d : %.16g jac %.16g\n", i, nodes[i], jacs[i]);
  }

  if(type == SPLINE)
    spline = new Spline(nbdof,nodes);
  else
    fft = new FFT(nbdof,this);

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

void Ctx::createMesh(Patch::PatchType patchtype){
  Patch *p[10];
  int i;
  double a;

  scat.patches = List_Create(10,10,sizeof(Patch));

  if(!(type & PATCHES)){ // single patch by default

    if((type & ITER_SOLVE) || (type & POST_PROCESS)){
      if(type & REAL_COLTON_KRESS){
	if((nbTargetPts % 2)) nbTargetPts++;
      }
      else{
	// odd nb of Fourier modes... to change
	if(!(nbTargetPts % 2)) nbTargetPts++;
      }
    }

    p[0] = new Patch(patchtype, 
		     0, nbTargetPts, 
		     PI, PI, 0);
    List_Add(scat.patches, p[0]);

  }
  else{ // multi patch interpolation

    // change this when doing Fourier interpolation to have odd nb of
    // Fourier modes on each patch...

    nbTargetPts = 500;
    a = PI/10.;
    p[0] = new Patch(patchtype,  0,                nbTargetPts/4,      0, PI/4+a/2., a); List_Add(scat.patches, p[0]);
    p[1] = new Patch(patchtype,  nbTargetPts/4,    nbTargetPts/4,   PI/2, PI/4+a/2., a); List_Add(scat.patches, p[1]);
    p[2] = new Patch(patchtype, 2*(nbTargetPts/4), nbTargetPts/4,     PI, PI/4+a/2., a); List_Add(scat.patches, p[2]);
    p[3] = new Patch(patchtype, 3*(nbTargetPts/4), nbTargetPts-3*(nbTargetPts/4),   3*PI/2, PI/4+a/2., a); List_Add(scat.patches, p[3]);
    
#if 0
    a = 0.5;
    rise = 0.5;
    p[0] = new Patch(patchtype, 0, nbTargetPts/4, 
		     0, PI/2.-a, rise);
    List_Add(scat.patches, p[0]);
    p[1] = new Patch(patchtype, nbTargetPts/4, nbTargetPts/2, 
		     PI/2., a + rise, rise);
    List_Add(scat.patches, p[1]);

    p[2] = new Patch(patchtype, 20, 30, 
		     PI, PI/2. - a + rise, rise);
    List_Add(scat.patches, p[2]);
    p[3] = new Patch(patchtype, 30, nbTargetPts, 
		     3.*PI/2., a + rise, rise);
    List_Add(scat.patches, p[3]);
#endif
    
#if 0
    a=1.;
    p[0] = new Patch(patchtype, 0, nbTargetPts/2, 
		     PI/2., PI/2., a);
    List_Add(scat.patches, p[0]);
    p[1] = new Patch(patchtype, nbTargetPts/2, nbTargetPts, 
		     3.*PI/2., PI/2.+a, a);
    List_Add(scat.patches, p[1]);
#endif

#if 0    // overlapping nodes match "1 on 2"
    nbTargetPts = 60;
    a=5.0*PI/20.;
    p[0] = new Patch(patchtype, 0, 40, 
		     PI/2., PI/2., a);
    List_Add(scat.patches, p[0]);
    nbTargetPts += 10;
    p[1] = new Patch(patchtype, 40, nbTargetPts, 
		     3.*PI/2., PI/2.+a, a);
    List_Add(scat.patches, p[1]);
#endif

#if 0 // 5 overlapping nodes -> working 34 iters
    nbTargetPts = 40;
    a=5.1*PI/20.;
    p[0] = new Patch(patchtype, 0, 20, 
		     PI/2., PI/2., a);
    List_Add(scat.patches, p[0]);
    nbTargetPts += 10;
    p[1] = new Patch(patchtype, 20, nbTargetPts, 
		     3.*PI/2., PI/2.+a, a);
    List_Add(scat.patches, p[1]);
#endif

  }


  // put all the nodes in a single vector
  scat.nodes = new double[nbTargetPts];
  nbdof = gCOMPLEX_INCREMENT*nbTargetPts;
  int k = 0;
  for(i=0; i<List_Nbr(scat.patches); i++){
    p[0] = (Patch*)List_Pointer(scat.patches,i);
    for(int j=0; j<p[0]->nbdof; j++){
      scat.nodes[k++] = p[0]->nodes[j];
      printf("%d %g \n", k, p[0]->nodes[j]);
    }
  }

  // precompute critical points for the mesh
  if(!(type & FULL_INTEGRATION))
    scat.criticalPoints(nbTargetPts,waveNum);

}
