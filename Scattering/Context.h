#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "Scatterer.h"
#include "Function.h"
#include "Patch.h"
#include "LinAlg.h"
#include "List.h"
#include "Complex.h"

#define FULL_INTEGRATION     (1<<0)
#define STORE_OPERATOR       (1<<1)
#define INTERACT1            (1<<2)
#define INTERACT2            (1<<3)
#define ITER_SOLVE           (1<<5)
#define PATCHES              (1<<6)
#define POST_PROCESS         (1<<7)

// General context

class Ctx {
public:
  // global mode and options (forward map, iterative solver, etc.)
  int type;

  // global parameters
  double waveNum[3], epsilon, rise, initialTarget;

  // number of unknowns
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


  // global functions
  void forwardMap(); // compute forward map for given discratization
  Complex integrate(int i); // compute forward map for target i
  double getTarget(int index); // get parametric location of target in 2D // FIXME
  void computeRHS(gVector *b);
  void readSolution(gVector *x);
  void saveSolution(gVector *x);
  void initializeInterpolation(gVector *x);
  void iterSolve();
  void postProcess();
  void createMesh(Patch::PatchType type);
};

#endif
