/* $Id: F_FMMOperations.h,v 1.2 2003-03-18 14:55:22 geuzaine Exp $ */
#ifndef _F_FMM_OPERATIONS_H_ 
#define _F_FMM_OPERATIONS_H_

/* ------------------------------------------------------------------------- */ 
/* FMM Operations                                                            */ 
/* ------------------------------------------------------------------------- */ 
  
void FMM_MatVectorProd (double *, double *) ;
void FMM_Renumbering(int N, int *permr, int *permp) ;
void FMM_InverseRenumbering(int *rpermr);
void FMM_Scaling(double *rowscal, double *colscal) ;
void FMM_UnScaling(double *rowscal, double *colscal) ;

#endif













