/* $Id: Pos_Quantity.h,v 1.1 2000-10-16 12:33:03 geuzaine Exp $ */
#ifndef _POS_QUANTITY_H_
#define _POS_QUANTITY_H_

void  Cal_PostQuantity(struct PostQuantity    *PostQuantity_P, 
		       struct DefineQuantity  *DefineQuantity_P0,
		       struct QuantityStorage *QuantityStorage_P0,
		       struct Element         *Element, 
		       double u, double v, double w, 
		       struct Value           *Value) ;

void Cal_PostCumulativeQuantity(List_T                 *Region_L,
				List_T                 *TimeStep_L, 
				struct PostQuantity    *PostQuantity_P, 
				struct DefineQuantity  *DefineQuantity_P0,
				struct QuantityStorage *QuantityStorage_P0,
				struct Value           *Value) ;

void Combine_PostQuantity(int Type, int Order, 
			  struct Value *V1, struct Value *V2) ;

#endif
