#ifndef _CAL_QUANTITY_H_
#define _CAL_QUANTITY_H_

#include "Data_Active.h"
#include "Cal_Value.h"

void  Get_ValueOfExpression(struct Expression * Expression_P, 
			    struct QuantityStorage * QuantityStorage_P0, 
			    double u, double v, double w, 
			    struct Value * Value) ;

void  Get_ValueOfExpressionByIndex(int Index_Expression,
				   struct QuantityStorage * QuantityStorage_P0, 
				   double u, double v, double w,
				   struct Value * Value) ;

void  Cal_WholeQuantity(struct Element * Element,
			struct QuantityStorage * QuantityStorage_P0,
			List_T * WholeQuantity_L,
			double u, double v, double w, 
			int Index_Dof, int Nbr_Dof, struct Value DofValue[]) ;

#endif
