// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _PRE_TERM_OF_FEM_EQUATION_H_
#define _PRE_TERM_OF_FEM_EQUATION_H_

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
