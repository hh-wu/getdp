// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _POS_SEARCH_H_
#define _POS_SEARCH_H_

#include "ProData.h"
#include "ListUtils.h"

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
  int ElementIndex;
} ;

void Init_SearchGrid(struct Grid * Grid);
void Free_SearchGrid(struct Grid * Grid);

void InWhichElement(struct Grid Grid, 
		    List_T *ExcludeRegion,
		    struct Element * Element, 
		    int Flag, 
		    double  x, double  y, double  z, 
		    double *u, double *v, double *w);

void xyz2uvwInAnElement(struct Element *Element,
			double  x, double  y, double  z, 
			double *u, double *v, double *w);

#endif
