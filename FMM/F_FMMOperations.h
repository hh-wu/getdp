/* $Id: F_FMMOperations.h,v 1.1 2003-03-17 16:13:09 sabarieg Exp $ */
#ifndef _F_FMMOperations_H_ 
#define _F_FMMOperations_H_

#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "GetDP.h"


/* ------------------------------------------------------------------------- */ 
/* FMM Operations                                                            */ 
/* ------------------------------------------------------------------------- */ 
  
void FMM_MatVectorProd ( double *, double * ) ;
void FMM_Renumbering( int N, int *permr, int *permp) ;
void FMM_InverseRenumbering( int *rpermr);
void FMM_Scaling(double *rowscal, double *colscal) ;
void FMM_UnScaling(double *rowscal, double *colscal) ;
#endif













