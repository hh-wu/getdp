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

#ifndef _ARPACK_F_H_
#define _ARPACK_F_H_

#include "Compat.h"

#if defined(HAVE_UNDERSCORE)
#define znaupd_ znaupd
#define zneupd_ zneupd
#endif

EXTERN_C_BEGIN

typedef struct {double re; double im;} complex_16;

extern void znaupd_(int *ido, char *bmat, int *n,
		    char *which, int *nev, double *tol, complex_16 resid[],
		    int *ncv, complex_16 v[], int *ldv, int iparam[],
		    int ipntr[], complex_16 workd[], complex_16 workl[], int *lworkl,
		    double rwork[], int *info);
extern void zneupd_(unsigned int *rvec, char *howmny, unsigned int select[], 
		    complex_16 d[], complex_16 z[], int *ldz, complex_16 *sigma,
		    complex_16 workev[], char *bmat, int *n, char *which, 
		    int *nev, double *tol, complex_16 resid[], int *ncv, 
		    complex_16 v[], int *ldv, int iparam[], int ipntr[], 
		    complex_16 workd[], complex_16 workl[], int *lworkl, 
		    double rwork[], int *info);

EXTERN_C_END

#endif
