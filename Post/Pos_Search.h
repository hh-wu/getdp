/* $Id: Pos_Search.h,v 1.4 2000-09-07 18:47:29 geuzaine Exp $ */
#ifndef _POS_SEARCH_H_
#define _POS_SEARCH_H_

struct Brick {
  List_T *p[3];
} ;

struct ElementBox {
  double  Xmin, Xmax ;
  double  Ymin, Ymax ;
  double  Zmin, Zmax ;
} ;

struct PointElement {
  double d;
  double xp, yp, zp;
  struct Element Element;
} ;

void Init_SearchGrid (struct Grid * Grid) ;

void InWhichElement (struct Grid Grid, 
		     List_T *ExcludeRegion,
		     struct Element * Element, 
		     int Flag, 
		     double  x, double  y, double  z, 
		     double *u, double *v, double *w) ;

void xyz2uvwInAnElement (struct Element *Element,
			 double  x, double  y, double  z, 
			 double *u, double *v, double *w,
			 double   (*Get_Jacobian) (struct Element * Element, MATRIX3x3 * Jac),
			 int      Dimension) ;

#endif
