// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef POS_FORMULATION_H
#define POS_FORMULATION_H

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
