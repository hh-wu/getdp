/* $Id: Pos_Print.h,v 1.1 2000-10-16 12:33:03 geuzaine Exp $ */
#ifndef _POS_PRINT_H_
#define _POS_PRINT_H_

void  Print_PostFormat(int Format) ;

void  Print_PostHeader(int Format, int NbTimeStep, int HarmonicToTime,
		       int Type, int Order, 
		       struct PostQuantity  *NCPQ_P,
		       struct PostQuantity  *CPQ_P) ;

void  Print_PostFooter(int Format) ;

void  Print_PostElement(int Format, double Time, int TimeStep, int NbTimeStep, 
			int NbHarmonics, int HarmonicToTime,
			double *Dummy, struct PostElement *PE);

void  Print_PostValue(int Format, struct Value * Value, int NbHarmonic, double Time, 
		      int Flag_PrintTime, int Flag_NewLine) ;

#endif
