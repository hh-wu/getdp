#define RCSID "$Id: Gauss_Point.c,v 1.6 2003-03-22 03:30:11 geuzaine Exp $"
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to "getdp@geuz.org".
 */

#include "GetDP.h"

/* Gauss integration over a point (!) */

void Gauss_Point (int Nbr_Points, int Num,
		  double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Point") ;

  *u = 0. ; *v = 0. ; *w = 0. ; *wght = 1. ;

  GetDP_End ;
}
