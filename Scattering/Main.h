#ifndef _MAIN_H_
#define _MAIN_H_

#include "Scatterer.h"
#include "Function.h"
#include "LinAlg.h"
#include "List.h"

#define FULL_INTEGRATION     (1<<0)
#define STORE_OPERATOR       (1<<1)
#define INTERACT1            (1<<2)
#define INTERACT2            (1<<3)
#define ITER_SOLVE           (1<<5)
#define PATCHES              (1<<6)
#define POST_PROCESS         (1<<7)

// General context

typedef struct {
  // global mode and options (forward map, iterative solver, etc.)
  int type;

  // global parameters
  double waveNum[3], epsilon, rise, initialTarget;

  // location of unknowns (=merge of all patch nodes)
  double *nodes; 
  int nbTargetPts, nbdof; // nbdof = gCOMPLEX_INCREMENT*nbTargetPts

  // - nb of integration points
  // - nb of integration points for singular, critical and shadowing intervals
  int nbIntPts, nbIntPts2, nbIntPts3; 

  // current number of forward map and integration point
  int iterNum, discreteMapIndex;

  // the scatterer definition
  Scatterer scat;

  // ansatz and interpolation stuff
  Function f;

  // solver
  gSolver solver;

  // storage for operator at all integration points
  List_T *discreteMap;

} Ctx;

#endif
