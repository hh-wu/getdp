// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef POS_SEARCH_H
#define POS_SEARCH_H

#include "ProData.h"
#include "GeoData.h"
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

void Free_SearchGrid(struct Grid * Grid);

void InWhichElement(struct Grid *Grid,
		    List_T *ExcludeRegion,
		    struct Element * Element,
		    int Flag,
		    double  x, double  y, double  z,
		    double *u, double *v, double *w);

void xyz2uvwInAnElement(struct Element *Element,
			double  x, double  y, double  z,
			double *u, double *v, double *w);

#endif
