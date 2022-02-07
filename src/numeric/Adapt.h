// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef ADAPT_H
#define ADAPT_H

#define ADAPT_P1 1
#define ADAPT_P2 2
#define ADAPT_H1 3
#define ADAPT_H2 4

double Adapt(int N, /* Number of elements */
             int method, /* ADAPT_H1, ADAPT_H2, ADAPT_P1 or ADAPT_P2 */
             int dim, /* 2 or 3 */
             double *err, /* elementary errors */
             double *h, /* elementary mesh sizes */
             double *p, /* elementary exponents */
             double e0); /* prescribed error or number of elements */

#endif
