/* $Id: Pos_Formulation.h,v 1.6 2000-10-16 12:32:04 geuzaine Exp $ */
#ifndef _POS_FORMULATION_H_
#define _POS_FORMULATION_H_

void  Pos_FemFormulation(struct Formulation      * Formulation_P,
			 struct PostQuantity     * LocalPQ,
			 struct PostQuantity     * CummulativePQ,
			 int                       Order,
			 struct PostSubOperation * PostSubOperation_P) ;

void  Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) ;


void Cal_Iso(struct PostElement *PE, List_T *list, 
	     double val, double vmin, double vmax) ;

#endif
