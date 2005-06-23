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
 *
 * Contributor(s):
 *   Christophe Trophime
 */

#if defined(NEW_PYRAMIDS)

/* 8 integration points from ../utils/pyram.c */

double upyr8[8] = {0.3595161057791018,0.09633205020967324,
		   0.3595161057791018,0.09633205020967324,
		   0.6920507403468987,0.1854344369976602,
		   0.6920507403468987,0.1854344369976602};
		   
double vpyr8[8] = {0.3595161057791018,0.3595161057791018,
		   0.09633205020967324,0.09633205020967324,
		   0.6920507403468987,0.6920507403468987,
		   0.1854344369976602,0.1854344369976602};
		   
double wpyr8[8] = {0.544151844011225,0.544151844011225,
		   0.544151844011225,0.544151844011225,
		   0.122514822655441,0.122514822655441,
		   0.122514822655441,0.122514822655441};
		   
double ppyr8[8] = {0.02519647051995625,0.02519647051995625,
		   0.02519647051995625,0.02519647051995625,
		   0.058136862813377,0.058136862813377,
		   0.058136862813377,0.058136862813377};

#else

/* 8 integration points from Coulomb et al., IEEE tr.mag. 32(3) May
   1996, p.1395

   2 plans // a la base quadrangulaire, 4 points par plan suffisant
   pour integrer exactement nodal degre 2

   cf. ../utils/pyram.c */

double upyr8[8] = {0.2631840555694285,-0.2631840555694285,
		   0.2631840555694285,-0.2631840555694285,
		   0.5066163033492386,-0.5066163033492386,
		   0.5066163033492386,-0.5066163033492386};
double vpyr8[8] = {0.2631840555694285,0.2631840555694285,
		   -0.2631840555694285,-0.2631840555694285,
		   0.5066163033492386,0.5066163033492386,
		   -0.5066163033492386,-0.5066163033492386};
double wpyr8[8] = {0.544151844011225,0.544151844011225,
		   0.544151844011225,0.544151844011225,
		   0.122514822655441,0.122514822655441,
		   0.122514822655441,0.122514822655441};
double ppyr8[8] = {0.100785882079825,0.100785882079825,
		   0.100785882079825,0.100785882079825,
		   0.232547451253508,0.232547451253508,
		   0.232547451253508,0.232547451253508};

#endif

