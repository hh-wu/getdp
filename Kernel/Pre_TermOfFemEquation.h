// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef PRE_TERM_OF_FEM_EQUATION_H
#define PRE_TERM_OF_FEM_EQUATION_H

#include "ProData.h"

void Pre_InitTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
			       struct QuantityStorage  * QuantityStorage_P0);

void Pre_TermOfFemEquation(struct Element          * Element,
			   struct EquationTerm     * EquationTerm_P,
			   struct QuantityStorage  * QuantityStorage_P0);

void Pre_InitGlobalTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				     struct QuantityStorage  * QuantityStorage_P0);

void Pre_GlobalTermOfFemEquation(int  Num_Region,
				 struct EquationTerm     * EquationTerm_P,
				 struct QuantityStorage  * QuantityStorage_P0);

void Pre_FemGlobalEquation(struct EquationTerm    * EquationTerm_P,
			   struct DefineQuantity  * DefineQuantity_P0,
			   struct QuantityStorage * QuantityStorage_P0);

void Cst_TermOfFemEquation(struct Element          * Element,
			   struct EquationTerm     * EquationTerm_P,
			   struct QuantityStorage  * QuantityStorage_P0);

void  Cst_GlobalTermOfFemEquation(int  Num_Region,
				  struct EquationTerm     * EquationTerm_P,
				  struct QuantityStorage  * QuantityStorage_P0);

#endif
