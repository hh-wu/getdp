/* $Id: Pos_Format.h,v 1.1 2000-10-19 11:25:39 dular Exp $ */
#ifndef _POS_FORMAT_H_
#define _POS_FORMAT_H_

void  Format_PostFormat(int Format) ;

void  Format_PostHeader(int Format, int Contour, 
			int NbTimeStep, int HarmonicToTime,
			int Type, int Order, 
			struct PostQuantity  *NCPQ_P,
			struct PostQuantity  *CPQ_P) ;

void  Format_PostFooter(struct PostSubOperation * PSO_P) ;

void  Format_PostElement(int Format, int Contour, int Store,
			 double Time, int TimeStep, int NbTimeStep, 
			 int NbHarmonics, int HarmonicToTime,
			 double *Dummy, struct PostElement *PE);

void  Format_PostValue(int Format, struct Value * Value, int NbHarmonic, double Time, 
		       int Flag_PrintTime, int Flag_NewLine) ;

#endif
