// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _POS_FORMAT_H_
#define _POS_FORMAT_H_

#include "ProData.h"
#include "ListUtils.h"

void  Format_PostFormat(int Format) ;

void  Format_PostHeader(int Format, int Contour, 
			int NbTimeStep, int HarmonicToTime,
			int Type, int Order, char *Name1, char *Name2) ;

void  Format_PostFooter(struct PostSubOperation * PSO_P, int Store) ;

void  Format_PostElement(int Format, int Contour, int Store,
			 double Time, int TimeStep, int NbTimeStep, 
			 int NbrHarmonics, int HarmonicToTime,
			 double *Dummy, struct PostElement *PE,
			 int *ChangeOfCoordinates,
			 List_T *ChangeOfValues);

void  Format_PostValue(int Format, int Flag_Comma, int Group_FunctionType,
		       double Time, int iRegion, int numRegion, int NbrRegion,
		       int NbrHarmonics, int HarmonicToTime, int Flag_NoNewLine,
		       struct Value * Value) ;

#endif
