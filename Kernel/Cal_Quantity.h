// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _CAL_QUANTITY_H_
#define _CAL_QUANTITY_H_

#include "ProData.h"
#include "ListUtils.h"

void  Get_ValueOfExpression(struct Expression *Expression_P,
			    struct QuantityStorage *QuantityStorage_P0,
			    double u, double v, double w,
			    struct Value *Value,
			    int NbrArguments=0,
			    char *CallingExpressionName=NULL);

void  Get_ValueOfExpressionByIndex(int Index_Expression,
				   struct QuantityStorage *QuantityStorage_P0,
				   double u, double v, double w,
				   struct Value *Value);

void  Cal_WholeQuantity(struct Element *Element,
			struct QuantityStorage *QuantityStorage_P0,
			List_T *WholeQuantity_L,
			double u, double v, double w,
			int Index_Dof, int Nbr_Dof, struct Value DofValue[],
			int NbrArguments=0, char *ExpressionName=NULL);

void Cal_StoreInRegister(struct Value *Value, int RegisterIndex);

void Cal_StoreInVariable(struct Value *Value, const char *name);
void Cal_GetValueSaved(struct Value *Value, const char *name);
std::map<std::string, struct Value> &Get_AllValueSaved();

bool Is_ExpressionConstant(struct Expression *Expression_P);

#endif
