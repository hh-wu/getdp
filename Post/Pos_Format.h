/* $Id: Pos_Format.h,v 1.3 2000-11-03 08:31:31 dular Exp $ */
#ifndef _POS_FORMAT_H_
#define _POS_FORMAT_H_

void  Format_PostFormat(int Format) ;

void  Format_PostHeader(int Format, int Contour, 
			int NbTimeStep, int HarmonicToTime,
			int Type, int Order, 
			struct PostQuantity  *NCPQ_P,
			struct PostQuantity  *CPQ_P) ;

void  Format_PostFooter(struct PostSubOperation * PSO_P, int Store) ;

void  Format_PostElement(int Format, int Contour, int Store,
			 double Time, int TimeStep, int NbTimeStep, 
			 int NbrHarmonics, int HarmonicToTime,
			 double *Dummy, struct PostElement *PE);

void  Format_PostValue(int Format,
		       double Time, int iRegion, int NbrRegion,
		       int NbrHarmonics, int HarmonicToTime,
		       struct Value * Value) ;

#endif
