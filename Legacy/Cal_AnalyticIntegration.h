// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _CAL_ANALYTIC_INTEGRATION_H_
#define _CAL_ANALYTIC_INTEGRATION_H_

#include "ProData.h"

double Cal_AnalyticIntegration(struct Element * E,
			       void (*BFEqu)(), void (*BFDof)(),
			       int i, int j, double (*Cal_Productx)());

#endif
