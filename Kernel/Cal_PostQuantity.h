// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _CAL_POST_QUANTITY_H_
#define _CAL_POST_QUANTITY_H_

#include "ProData.h"

void Cal_PostQuantity(struct PostQuantity    *PostQuantity_P, 
		      struct DefineQuantity  *DefineQuantity_P0,
		      struct QuantityStorage *QuantityStorage_P0,
		      List_T *Support_L,
		      struct Element         *Element, 
		      double u, double v, double w, 
		      struct Value *Value) ;

void Cal_PostCumulativeQuantity(List_T                 *Region_L,
				int                    SupportIndex,
				List_T                 *TimeStep_L, 
				struct PostQuantity    *PostQuantity_P, 
				struct DefineQuantity  *DefineQuantity_P0,
				struct QuantityStorage *QuantityStorage_P0,
				struct Value          **Value) ;

void Combine_PostQuantity(int Type, int Order, 
			  struct Value *V1, struct Value *V2) ;

#endif
