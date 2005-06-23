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

#ifndef _QUADRATURE_H_
#define _QUADRATURE_H_

#define MAX_LINE_POINTS 100

void GaussLegendre(double x1, double x2, double x[], double w[], int n) ;

#define GAUSS_ARGS  int Nbr_Points, int Num_Point, \
                    double *u, double *v, double *w, double *wght

void  Gauss_Point              (GAUSS_ARGS) ;

void  Gauss_Line               (GAUSS_ARGS) ;

void  Gauss_Triangle           (GAUSS_ARGS) ;
void  GaussLegendre_Triangle   (GAUSS_ARGS) ;
void  GaussSingularR_Triangle  (GAUSS_ARGS) ;

void  Gauss_Quadrangle         (GAUSS_ARGS) ;
void  GaussLegendre_Quadrangle (GAUSS_ARGS) ;
void  GaussSingularR_Quadrangle(GAUSS_ARGS) ;

void  Gauss_Tetrahedron        (GAUSS_ARGS) ;
void  GaussLegendre_Tetrahedron(GAUSS_ARGS) ;

void  Gauss_Hexahedron         (GAUSS_ARGS) ;
void  GaussLegendre_Hexahedron (GAUSS_ARGS) ;

void  Gauss_Prism              (GAUSS_ARGS) ;

void  Gauss_Pyramid            (GAUSS_ARGS) ;

#undef GAUSS_ARGS

#endif
