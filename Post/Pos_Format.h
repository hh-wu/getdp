/* $Id: Pos_Format.h,v 1.7 2001-10-25 07:06:37 geuzaine Exp $ */
#ifndef _POS_FORMAT_H_
#define _POS_FORMAT_H_

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

void  Format_PostValue(int Format,
		       double Time, int iRegion, int NbrRegion,
		       int NbrHarmonics, int HarmonicToTime, int Flag_NoNewLine,
		       struct Value * Value) ;

#endif
