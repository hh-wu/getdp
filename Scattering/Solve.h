#ifndef _SOLVE_H_
#define _SOLVE_H_

#include "Main.h"

void ForwardMap(Ctx *ctx);
void IterSolve(Ctx *ctx);
void PostProcess(Ctx *ctx);

void ReadSolution(Ctx *ctx, gVector *x);
void SaveSolution(Ctx *ctx, gVector *x);

#endif
