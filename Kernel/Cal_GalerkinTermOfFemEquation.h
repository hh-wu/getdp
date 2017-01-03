// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _CAL_GALERKIN_TERM_OF_FEM_EQUATION_H_
#define _CAL_GALERKIN_TERM_OF_FEM_EQUATION_H_

#include "ProData.h"

void Cal_InitGalerkinTermOfFemEquation(struct EquationTerm     * EquationTerm_P,
				       struct QuantityStorage  * QuantityStorage_P0,
				       struct QuantityStorage  * QuantityStorageNoDof,
				       struct Dof              * DofForNoDof_P);

void  Cal_GalerkinTermOfFemEquation(struct Element          * Element,
				    struct EquationTerm     * EquationTerm_P,
				    struct QuantityStorage  * QuantityStorage_P0);

void Cal_EndGalerkinTermOfFemEquation();

/* In F_MultiHar */
void Cal_InitGalerkinTermOfFemEquation_MHJacNL(struct EquationTerm * EquationTerm_P);
void Cal_GalerkinTermOfFemEquation_MHJacNL(struct Element * Element,
                                           struct EquationTerm * EquationTerm_P,
					   struct QuantityStorage *QuantityStorage_P0);

#endif
