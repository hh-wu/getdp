#ifndef _ADAPT_H_
#define _ADAPT_H_

#define P1 1
#define P2 2
#define H1 3
#define H2 4

double Adapt (int N,        /* Number of elements */
	      int method,   /* H1, H2, P1 or P2 */
	      int dim,      /* 2 or 3 */
	      double *err,  /* elementary errors */
	      double *h,    /* elementary mesh sizes */
	      double *p,    /* elementary exponents */
	      double e0     /* prescribed error or number of elements */
	      );

#endif
