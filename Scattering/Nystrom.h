#ifndef _NYSTROM_H_
#define _NYSTROM_H_

#include "Complex.h"
#include "Scatterer.h"
#include "Function.h"

#define FULL_INTEGRATION     (1<<0)
#define CRITICAL_INTEGRATION (1<<1)
#define INTERACT1            (1<<2)
#define INTERACT2            (1<<3)
#define BUILD_MATRIX         (1<<4)
#define ITER_SOLVE           (1<<5)

// General context

typedef struct {
  double WaveNum[3], Epsilon, Rise, InitialTarget;
  int NbIntPts, NbTargetPts, Type;
  Scatterer scat;
  Function f;
} Ctx;


// prototypes

Complex Integrate(Ctx *ctx, double t);

#endif
