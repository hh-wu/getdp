/* $Id: Data_Numeric.h,v 1.3 2000-10-20 17:07:39 geuzaine Exp $ */
#ifndef _DATA_NUMERIC_H_
#define _DATA_NUMERIC_H_

#define THESIGN(a) ((a)>=0 ? 1 : -1)
#define SQU(a)     ((a)*(a)) 
#define CUB(a)     ((a)*(a)*(a)) 
#define MIN(a,b)   ((a)<(b) ? (a) : (b))
#define MAX(a,b)   ((a)>(b) ? (a) : (b))
#define HYPOT(a,b) (sqrt((a)*(a)+(b)*(b)))
#define PSCA2(a,b) ((a)[0]*(b)[0] + (a)[1]*(b)[1])
#define PSCA3(a,b) ((a)[0]*(b)[0] + (a)[1]*(b)[1] + (a)[2]*(b)[2])
#define NORM2(a)   (sqrt((a)[0]*(a)[0]+(a)[1]*(a)[1])) 
#define NORM3(a)   (sqrt((a)[0]*(a)[0]+(a)[1]*(a)[1]+(a)[2]*(a)[2])) 

#define DSQU SQU

#define PI                 3.1415926535897932
#define TWO_PI             6.2831853071795865
#define ONE_OVER_TWO_PI    1.5915494309189534E-01
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02

#endif
