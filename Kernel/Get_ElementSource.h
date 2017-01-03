// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GET_ELEMENT_SOURCE_H_
#define _GET_ELEMENT_SOURCE_H_

#include "ProData.h"

void Get_InitElementSource(struct Element *Element, int InIndex);
int Get_NextElementSource(struct Element *ElementSource);
void Get_ElementTrace(struct Element *Element, int InIndex);

#endif
