#ifndef _NEWTON_H_
#define _NEWTON_H_

void newt (double x[], int n, int *check, 
	   void (*vecfunc) (int, double[], double[]),
	   void (*vecjac) (int n, double[], double[], double **,
			   void (*vecfunc) (int, double[], double[])));

void fdjac (int n, double x[], double fvec[], double **df,
	    void (*vecfunc) (int, double[], double[]));

#endif
