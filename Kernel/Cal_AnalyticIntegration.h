// GetDP - Copyright (C) 1997-2019 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef _CAL_ANALYTIC_INTEGRATION_H_
#define _CAL_ANALYTIC_INTEGRATION_H_

#include "ProData.h"

double Cal_AnalyticIntegration(struct Element * E,
			       void (*BFEqu)(), void (*BFDof)(),
			       int i, int j, double (*Cal_Productx)());

#endif
