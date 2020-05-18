// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef CAL_INTEGRAL_QUANTITY_H
#define CAL_INTEGRAL_QUANTITY_H

#include "ProData.h"

void Cal_InitIntegralQuantity(struct Element                *Element,
			      struct IntegralQuantityActive *IQA,
			      struct QuantityStorage        *QuantityStorage_P);

void Cal_NumericalIntegralQuantity(struct Element                 *Element,
				   struct IntegralQuantityActive  *IQA,
				   struct QuantityStorage         *QuantityStorage_P0,
				   struct QuantityStorage         *QuantityStorage_P,
				   int                             Type_DefineQuantity,
				   int                             Nbr_Dof,
				   void                          (*xFunctionBF[])(),
				   struct Value                    vBFxDof[]);

void Cal_AnalyticIntegralQuantity(struct Element         *Element,
				  struct QuantityStorage *QuantityStorage_P,
				  int                     Nbr_Dof,
				  void                  (*xFunctionBF[])(),
				  struct Value            vBFxDof[]);
#endif
