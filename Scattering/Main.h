#ifndef _MAIN_H_
#define _MAIN_H_

#include "Scatterer.h"
#include "Function.h"
#include "LinAlg.h"
#include "Complex.h"

#define FULL_INTEGRATION     (1<<0)
#define STORE_OPERATOR       (1<<1)
#define INTERACT1            (1<<2)
#define INTERACT2            (1<<3)
#define ITER_SOLVE           (1<<5)
#define PATCHES              (1<<6)
#define POST_PROCESS         (1<<7)

// General context

typedef struct {
  double waveNum[3], epsilon, rise, initialTarget;
  double *nodes;
  int nbIntPts, nbTargetPts, type, nbdof;
  int iterNum, currentTarget;
  Scatterer scat;
  Function f;
  gSolver solver;
  Complex *discreteMap;
} Ctx;

#endif
