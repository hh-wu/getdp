#define RCSID "$Id: Gauss_Pyramid.c,v 1.8 2004-01-19 16:51:16 geuzaine Exp $"
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
#include "Gauss_Pyramid.h"

/* Gauss integration over a pyramid */

void  Gauss_Pyramid (int Nbr_Points, int Num,
		     double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Pyramid") ;

  switch (Nbr_Points) {

  case  8 : 
    *u = upyr8[Num]; *v = vpyr8[Num]; *w = wpyr8[Num]; *wght = ppyr8[Num]; 
    break ;

  default : 
    Msg(DIRECT, ERROR_STR "Wrong number of Gauss points for Pyramid");
    Msg(ERROR, "Valid choice: 8");
    break;

  }

  GetDP_End ;
}

