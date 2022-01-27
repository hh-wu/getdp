// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef GET_ELEMENT_SOURCE_H
#define GET_ELEMENT_SOURCE_H

#include "ProData.h"

void Get_InitElementSource(struct Element *Element, int InIndex);
int Get_NextElementSource(struct Element *ElementSource);
int Get_InitElementTrace(struct Element *Element, int InIndex);
int Get_NextElementTrace(struct Element *ElementTrace);

#endif
