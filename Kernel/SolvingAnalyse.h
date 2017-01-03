// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _SOLVING_ANALYSE_H_
#define _SOLVING_ANALYSE_H_

#include "ProData.h"

void  Init_DofDataInFunctionSpace(int Nbr_DefineSystem,
				  struct DofData *DofData_P0);

void  Init_DofDataInDefineQuantity(struct DefineSystem *DefineSystem_P,
                                   struct DofData      *DofData_P0,
                                   struct Formulation  *Formulation_P);

double  * Get_TimeFunctionValues(struct DofData * DofData_P);

void  Init_HarInDofData(struct DefineSystem * DefineSystem_P,
                        struct DofData * DofData_P);

void  Treatment_PostOperation(struct Resolution     * Resolution_P,
			      struct DofData        * DofData_P0,
			      struct DefineSystem   * DefineSystem_P0,
			      struct GeoData        * GeoData_P0,
			      struct PostProcessing * PostProcessing_P,
			      struct PostOperation  * PostOperation_P);

void SolvingAnalyse();

#endif
