// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef CAL_POST_QUANTITY_H
#define CAL_POST_QUANTITY_H

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
