// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _POS_ISO_H_
#define _POS_ISO_H_

#include "Pos_Element.h"
#include "ListUtils.h"

void Cal_Iso(struct PostElement *PE, List_T *list, 
	     double val, double vmin, double vmax, 
	     int DecomposeInSimplex) ;

#endif
