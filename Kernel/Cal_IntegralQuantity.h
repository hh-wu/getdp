// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _CAL_INTEGRAL_QUANTITY_H_
#define _CAL_INTEGRAL_QUANTITY_H_

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
