/* $Id: Pos_Quantity.h,v 1.2 2000-10-19 11:24:21 dular Exp $ */
#ifndef _POS_QUANTITY_H_
#define _POS_QUANTITY_H_

void Cal_PostQuantity(struct PostQuantity    *PostQuantity_P, 
		      struct DefineQuantity  *DefineQuantity_P0,
		      struct QuantityStorage *QuantityStorage_P0,
		      List_T *Support_L,
		      struct Element         *Element, 
		      double u, double v, double w, 
		      struct Value *Value) ;

void Pos_GlobalQuantity(struct PostQuantity    *PostQuantity_P,
			struct DefineQuantity  *DefineQuantity_P0,
			struct QuantityStorage *QuantityStorage_P0,
			struct PostQuantityTerm  *PostQuantityTerm_P,
			struct Element         *ElementEmpty, 
			List_T  *InRegion_L, List_T  *Support_L,
			struct Value *Value) ;

void Cal_PostCumulativeQuantity(List_T                 *Region_L,
				List_T                 *TimeStep_L, 
				struct PostQuantity    *PostQuantity_P, 
				struct DefineQuantity  *DefineQuantity_P0,
				struct QuantityStorage *QuantityStorage_P0,
				struct Value           *Value) ;

void Combine_PostQuantity(int Type, int Order, 
			  struct Value *V1, struct Value *V2) ;

void Pos_LocalOrIntegralQuantity(struct PostQuantity    *PostQuantity_P, 
				 struct DefineQuantity  *DefineQuantity_P0,
				 struct QuantityStorage *QuantityStorage_P0,
				 struct PostQuantityTerm  *PostQuantityTerm_P,
				 struct Element         *Element, 
				 int    Type_Quantity,
				 double u, double v, double w, 
				 struct Value *Value) ;

#endif
