// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef GET_FUNCTION_VALUE_H
#define GET_FUNCTION_VALUE_H

#include "ProData.h"

int Get_ValueFromForm(int Form);
struct IntegrationCase * Get_IntegrationCase (struct Element * Element,
					      List_T *IntegrationCase_L,
					      int     CriterionIndex);
void  Get_FunctionValue(int Nbr_Function,
			void (*xFunctionBF[])(),
			int Type_Operator,
			struct QuantityStorage  * QuantityStorage_P,
			int * Type_Form);
void  Get_InitFunctionValue(int Type_Operator,
			    struct QuantityStorage  * QuantityStorage_P,
			    int * Type_Form);
double Cal_InterpolationOrder(struct Element * Element,
			      struct QuantityStorage * QuantityStorage);
double Cal_MaxEdgeLength(struct Element * Element);

#endif
