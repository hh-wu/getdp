#define RCSID "$Id: Gauss_Prism.c,v 1.8 2004-01-19 16:51:16 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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

#include "GetDP.h"
#include "Gauss_Prism.h"

/* Gauss integration over a prism */

void  Gauss_Prism      (int Nbr_Points, int Num,
			double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Prism") ;

  switch (Nbr_Points) {

  case  6 : 
    *u = upri6 [Num] ; *v = vpri6 [Num] ; *w = wpri6 [Num] ;
    *wght = ppri6 [Num] ; break ;

  case  9 : 
    *u = upri9 [Num] ; *v = vpri9 [Num] ; *w = wpri9 [Num] ;
    *wght = ppri9 [Num] ; break ;

  case 21 : 
    *u = upri21[Num] ; *v = vpri21[Num] ; *w = wpri21[Num] ;
    *wght = ppri21[Num] ; break ;

  case 42 : 
    *u = upri42[Num] ; *v = vpri42[Num] ; *w = wpri42[Num] ;
    *wght = ppri42[Num] ; break ;
    
  default : 
    Msg(DIRECT, ERROR_STR "Wrong number of Gauss points for Prism");
    Msg(ERROR, "Valid choices: 6, 9, 21, 42");
    break;

  }

  GetDP_End ;
}
