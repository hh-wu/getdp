#define RCSID "$Id: BF_Volume.c,v 1.12 2006-02-25 15:00:23 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
#include "BF_Function.h"

/* ------------------------------------------------------------------------ */
/*  B F _ V o l u m e                                                       */
/* ------------------------------------------------------------------------ */

#define WrongNumVolume   Msg(ERROR, "Wrong Volume number in 'BF_Volume'")

void  BF_Volume  (struct Element * Element, int NumVolume,
		  double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Volume");

  switch (Element->Type) {
  case POINT :
    switch(NumVolume) {
    case 1  : *s = 1. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case LINE :
    switch(NumVolume) {
    case 1  : *s = 0.5 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case TRIANGLE :
    switch(NumVolume) {
    case 1  : *s = 2. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case QUADRANGLE :
    switch(NumVolume) {
    case 1  : *s = 0.25 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumVolume) {
    case 1  : *s = 6. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumVolume) {
    case 1  : *s = 0.125 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case PRISM :
    switch(NumVolume) {
    case 1  : *s = 1. ; break ;
    default : WrongNumVolume ;
    }
    break ;

#if defined(NEW_PYRAMIDS)
  case PYRAMID :
    switch(NumVolume) {
    case 1  : *s = 3. ; break ;
    default : WrongNumVolume ;
    }
    break ;
#endif

  default :
    Msg(ERROR, "Unkown type of Element in BF_Volume");
    break ;
  }

  GetDP_End ;
}

#undef WrongNumVolume

void  BF_VolumeX (struct Element * Element, int NumVolume,
		  double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_VolumeX");

  s[1] = s[2] = 0.;
  BF_Volume (Element, NumVolume, u, v, w, &s[0]) ;

  GetDP_End ;
}

void  BF_VolumeY (struct Element * Element, int NumVolume,
		  double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_VolumeY");

  s[0] = s[2] = 0.;
  BF_Volume (Element, NumVolume, u, v, w, &s[1]) ;

  GetDP_End ;
}

void  BF_VolumeZ (struct Element * Element, int NumVolume,
		  double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_VolumeZ");

  s[0] = s[1] = 0.;
  BF_Volume (Element, NumVolume, u, v, w, &s[2]) ;

  GetDP_End ;
}
