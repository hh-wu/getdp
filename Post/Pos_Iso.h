/* $Id: Pos_Iso.h,v 1.1 2000-10-16 12:33:02 geuzaine Exp $ */
#ifndef _POS_ISO_H_
#define _POS_ISO_H_


void Print_Contour2D(int Format, float *Array, double *N, 
		     double *X, double *Y, double *Z, double NbrIso) ;

void Cal_Iso(struct PostElement *PE, List_T *list, 
	     double val, double vmin, double vmax) ;


#endif
