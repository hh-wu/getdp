/* $Id: Pos_Print.h,v 1.2 2000-10-16 21:02:16 geuzaine Exp $ */
#ifndef _POS_PRINT_H_
#define _POS_PRINT_H_

void  Print_PostFormat(int Format) ;

void  Print_PostHeader(int Format, int Contour, 
		       int NbTimeStep, int HarmonicToTime,
		       int Type, int Order, 
		       struct PostQuantity  *NCPQ_P,
		       struct PostQuantity  *CPQ_P) ;

void  Print_PostFooter(struct PostSubOperation * PSO_P) ;

void  Print_PostElement(int Format, int Contour, int Store,
			double Time, int TimeStep, int NbTimeStep, 
			int NbHarmonics, int HarmonicToTime,
			double *Dummy, struct PostElement *PE);

void  Print_PostValue(int Format, struct Value * Value, int NbHarmonic, double Time, 
		      int Flag_PrintTime, int Flag_NewLine) ;

#endif
