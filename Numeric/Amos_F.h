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

#ifndef _AMOS_F_H_
#define _AMOS_F_H_

#include "Compat.h"

#ifdef _UNDERSCORE

#define zbesj_ zbesj
#define zbesy_ zbesy
#define zbesh_ zbesh
#define zbesi_ zbesi
#define zbesk_ zbesk         
  
#endif

EXTERN_C_BEGIN

void zbesj_ (double*, double*, double*, int*, int*, double*, double*, int*, int*) ; 
void zbesy_ (double*, double*, double*, int*, int*, double*, double*, int*, double*, double*, int* );
void zbesh_ (double*, double*, double*, int*, int*, int*, double*, double*, int*, int*) ;

void zbesi_ (double*, double*, double*, int*, int*, double*, double*, int*, int*) ;
void zbesk_ (double*, double*, double*, int*, int*, double*, double*, int*, int*) ;

EXTERN_C_END

#endif




