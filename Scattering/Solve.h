#ifndef _SOLVE_H_
#define _SOLVE_H_

#include "Nystrom.h"

void ForwardSolve(int typ, Function *f, Scatterer *scat, 
		  double kv[3], int nbtarget, double t0, int nbpts, 
		  double prescribed_eps, double rise);
void BuildSolve(int typ, Function *f, Scatterer *scat, 
		double kv[3], int nbtarget, double t0, int nbpts, 
		double prescribed_eps, double rise);
void IterSolve(int typ, Function *f, Scatterer *scat, 
	       double kv[3], int nbtarget, double t0, int nbpts, 
	       double prescribed_eps, double rise);

#endif
