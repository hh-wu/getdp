/* $Id: Data_Numeric.h,v 1.2 2000-09-07 18:47:25 geuzaine Exp $ */
#ifndef _DATA_NUMERIC_H_
#define _DATA_NUMERIC_H_

#define THESIGN(a) ((a)>=0 ? 1 : -1)
#define SQU(a)     ((a)*(a)) 
#define CUB(a)     ((a)*(a)*(a)) 
#define MIN(a,b)   ((a)<(b) ? (a) : (b))
#define MAX(a,b)   ((a)>(b) ? (a) : (b))
#define HYPOT(a,b) (sqrt((a)*(a)+(b)*(b)))

#define DSQU SQU

#define PI                 3.1415926535897932
#define TWO_PI             6.2831853071795865
#define ONE_OVER_TWO_PI    1.5915494309189534E-01
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02

#endif
