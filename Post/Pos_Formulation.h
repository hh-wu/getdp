/* $Id: Pos_Formulation.h,v 1.7 2000-10-17 07:20:54 geuzaine Exp $ */
#ifndef _POS_FORMULATION_H_
#define _POS_FORMULATION_H_

void  Pos_FemFormulation(struct Formulation      * Formulation_P,
			 struct PostQuantity     * LocalPQ,
			 struct PostQuantity     * CummulativePQ,
			 int                       Order,
			 struct PostSubOperation * PostSubOperation_P) ;

void  Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) ;

#endif
