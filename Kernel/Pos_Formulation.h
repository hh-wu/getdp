// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _POS_FORMULATION_H_
#define _POS_FORMULATION_H_

#include "ProData.h"
#include "ListUtils.h"

void  Pos_Formulation(struct Formulation       *Formulation_P,
		      struct PostProcessing    *PostProcessing_P,
		      struct PostSubOperation  *PostSubOperation_P);

void  Pos_FemFormulation(struct Formulation      * Formulation_P,
			 struct PostQuantity     * LocalPQ,
			 struct PostQuantity     * CummulativePQ,
			 int                       Order,
			 struct PostSubOperation * PostSubOperation_P) ;

int  Pos_InitTimeSteps(struct PostSubOperation * PostSubOperation_P) ;
void Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) ;
void Pos_ResampleTime(struct PostOperation *PostOperation_P);

#endif
