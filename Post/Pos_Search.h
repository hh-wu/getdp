/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

#ifndef _POS_SEARCH_H_
#define _POS_SEARCH_H_

#include "Data_Element.h"
#include "List.h"

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
void xyz2uvwInAnElementSimple (struct Element *Element,
			       double  x, double  y, double  z, 
			       double *u, double *v, double *w);

#endif
