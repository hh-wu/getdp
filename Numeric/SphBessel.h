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
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#ifndef _SPHBESSEL_H_
#define _SPHBESSEL_H_

double Spherical_j_n(int n, double x) ;
void Spherical_j_nArray(int n, double x, int NB, double jsph[]) ;
double AltSpherical_j_n(int n, double x) ;
void PrintSpherical_j_n(int n, char * FileName) ;

double Spherical_y_n(int n, double x) ;
void Spherical_y_nArray(int n, double x, int NB, double ysph[]) ;
double AltSpherical_y_n(int n, double x) ;
void PrintSpherical_y_n(int n, char * FileName) ;

void Spherical_h_n(int type, int n, double x, double *hr, double *hi);
void Spherical_h_nArray(int type, int n, double x, int N, double *hr, double *hi);


#endif




