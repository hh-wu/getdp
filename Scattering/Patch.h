#ifndef _PATCH_H_
#define _PATCH_H_

#include "List.h"
#include "Complex.h"
#include "FFT.h"
#include "Spline.h"

// Partition of unity

class Partition{
private:
  double smooth(double x);
  double pou(double x, double c);

public:
  Partition(){ subParts=NULL; };
  ~Partition(){
    List_Delete(subParts);
  };

  double center, epsilon, crest;
  List_T *subParts;

  void init(double _center, double _epsilon, double _rise);
  double eval(double t);
};

// Patch

class Patch{
public:
  enum PatchType {SPLINE,FOURIER};

  Patch(PatchType type, int _beg, int _end, 
	double center, double eps, double rise);
  ~Patch();
  
  PatchType type;
  int nbdof;
  int beg, end; // indices in global vector
  Partition *part;
  double *nodes, *jacs;
  Complex *localVals;
  FFT *fft;
  Spline *spline;
  
  void print(){
    for(int k=0; k<nbdof; k++){
      printf("%g %g\n", nodes[k], part->eval(nodes[k]));
    }
  }
};

#endif

