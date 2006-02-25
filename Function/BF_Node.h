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

#ifndef _BF_NODE_H_
#define _BF_NODE_H_

/* Barycentric functions */

#define POI1  ( 1. )
	
#define LIN1  ( 0.5 * (1.-u) )
#define LIN2  ( 0.5 * (1.+u) )
	
#define TRI1  ( 1.-u-v )
#define TRI2  (    u   )
#define TRI3  (      v )
	
#define QUA1  ( 0.25 * (1.-u) * (1.-v) )
#define QUA2  ( 0.25 * (1.+u) * (1.-v) )
#define QUA3  ( 0.25 * (1.+u) * (1.+v) )
#define QUA4  ( 0.25 * (1.-u) * (1.+v) )
	
#define TET1  ( 1.-u-v-w )
#define TET2  (    u     )
#define TET3  (      v   )
#define TET4  (        w )
	
#define HEX1  ( (1.-u) * (1.-v) * (1.-w) * 0.125 )
#define HEX2  ( (1.+u) * (1.-v) * (1.-w) * 0.125 )
#define HEX3  ( (1.+u) * (1.+v) * (1.-w) * 0.125 )
#define HEX4  ( (1.-u) * (1.+v) * (1.-w) * 0.125 )
#define HEX5  ( (1.-u) * (1.-v) * (1.+w) * 0.125 )
#define HEX6  ( (1.+u) * (1.-v) * (1.+w) * 0.125 )
#define HEX7  ( (1.+u) * (1.+v) * (1.+w) * 0.125 )
#define HEX8  ( (1.-u) * (1.+v) * (1.+w) * 0.125 )
	
#define PRI1  ( (1.-u-v) * (1.-w) * 0.5 )
#define PRI2  (     u    * (1.-w) * 0.5 )
#define PRI3  (       v  * (1.-w) * 0.5 )
#define PRI4  ( (1.-u-v) * (1.+w) * 0.5 )
#define PRI5  (     u    * (1.+w) * 0.5 )
#define PRI6  (       v  * (1.+w) * 0.5 )
	
#define PYR1  ( 0.25 * ((1.-u) * (1.-v) - w + r) )
#define PYR2  ( 0.25 * ((1.+u) * (1.-v) - w - r) )
#define PYR3  ( 0.25 * ((1.+u) * (1.+v) - w + r) )
#define PYR4  ( 0.25 * ((1.-u) * (1.+v) - w - r) )
#define PYR5  ( w                                )

/* And their gradients */

#define dLIN1u  ( -0.5 )
#define dLIN2u  (  0.5 )
	 
#define dTRI1u  ( -1. )
#define dTRI1v  ( -1. )
#define dTRI2u  (  1. )
#define dTRI2v  (  0. )
#define dTRI3u  (  0. )
#define dTRI3v  (  1. )
	 
#define dQUA1u  ( -0.25 * (1.-v) )
#define dQUA1v  ( -0.25 * (1.-u) )
#define dQUA2u  (  0.25 * (1.-v) )
#define dQUA2v  ( -0.25 * (1.+u) )
#define dQUA3u  (  0.25 * (1.+v) )
#define dQUA3v  (  0.25 * (1.+u) )
#define dQUA4u  ( -0.25 * (1.+v) )
#define dQUA4v  (  0.25 * (1.-u) )

#define dTET1u  ( -1. )
#define dTET1v  ( -1. )
#define dTET1w  ( -1. )
#define dTET2u  (  1. )
#define dTET2v  (  0. )
#define dTET2w  (  0. )
#define dTET3u  (  0. )
#define dTET3v  (  1. )
#define dTET3w  (  0. )
#define dTET4u  (  0. )
#define dTET4v  (  0. )
#define dTET4w  (  1. )

#define dHEX1u  ( -0.125 * (1.-v) * (1.-w) )
#define dHEX1v  ( -0.125 * (1.-u) * (1.-w) )
#define dHEX1w  ( -0.125 * (1.-u) * (1.-v) )
#define dHEX2u  (  0.125 * (1.-v) * (1.-w) )
#define dHEX2v  ( -0.125 * (1.+u) * (1.-w) )
#define dHEX2w  ( -0.125 * (1.+u) * (1.-v) )
#define dHEX3u  (  0.125 * (1.+v) * (1.-w) )
#define dHEX3v  (  0.125 * (1.+u) * (1.-w) )
#define dHEX3w  ( -0.125 * (1.+u) * (1.+v) )
#define dHEX4u  ( -0.125 * (1.+v) * (1.-w) )
#define dHEX4v  (  0.125 * (1.-u) * (1.-w) )
#define dHEX4w  ( -0.125 * (1.-u) * (1.+v) )
#define dHEX5u  ( -0.125 * (1.-v) * (1.+w) )
#define dHEX5v  ( -0.125 * (1.-u) * (1.+w) )
#define dHEX5w  (  0.125 * (1.-u) * (1.-v) )
#define dHEX6u  (  0.125 * (1.-v) * (1.+w) )
#define dHEX6v  ( -0.125 * (1.+u) * (1.+w) )
#define dHEX6w  (  0.125 * (1.+u) * (1.-v) )
#define dHEX7u  (  0.125 * (1.+v) * (1.+w) )
#define dHEX7v  (  0.125 * (1.+u) * (1.+w) )
#define dHEX7w  (  0.125 * (1.+u) * (1.+v) )
#define dHEX8u  ( -0.125 * (1.+v) * (1.+w) )
#define dHEX8v  (  0.125 * (1.-u) * (1.+w) )
#define dHEX8w  (  0.125 * (1.-u) * (1.+v) )

#define dPRI1u  (-0.5 * (1.-w)    )
#define dPRI1v  ( -0.5 * (1.-w)   )
#define dPRI1w  ( -0.5 * (1.-u-v) )
#define dPRI2u  (  0.5 * (1.-w)   )
#define dPRI2v  (  0.             )
#define dPRI2w  ( -0.5 * u        )
#define dPRI3u  (  0.             )
#define dPRI3v  (  0.5 * (1.-w)   )
#define dPRI3w  ( -0.5 * v        )
#define dPRI4u  ( -0.5 * (1.+w)   )
#define dPRI4v  ( -0.5 * (1.+w)   )
#define dPRI4w  (  0.5 * (1.-u-v) )
#define dPRI5u  (  0.5 * (1.+w)   )
#define dPRI5v  (  0.             )
#define dPRI5w  (  0.5 * u        )
#define dPRI6u  (  0.             )
#define dPRI6v  (  0.5 * (1.+w)   )
#define dPRI6w  (  0.5 * v        )

#define dPYR1u  ( 0.25 * ( -(1.-v) + v*w/(1.-w) )     )
#define dPYR1v  ( 0.25 * ( -(1.-u) + u*w/(1.-w) )     )      
#define dPYR1w  ( 0.25 * ( -1.     + u*v/DSQU(1.-w) ) )
#define dPYR2u  ( 0.25 * (  (1.-v) + v*w/(1.-w) )     )        
#define dPYR2v  ( 0.25 * ( -(1.+u) + u*w/(1.-w) )     )       
#define dPYR2w  ( 0.25 * ( -1.     + u*v/DSQU(1.-w) ) )
#define dPYR3u  ( 0.25 * (  (1.+v) + v*w/(1.-w) )     )
#define dPYR3v  ( 0.25 * (  (1.+u) + u*w/(1.-w) )     )
#define dPYR3w  ( 0.25 * ( -1.     + u*v/DSQU(1.-w) ) )
#define dPYR4u  ( 0.25 * ( -(1.+v) + v*w/(1.-w) )     )
#define dPYR4v  ( 0.25 * (  (1.-u) + u*w/(1.-w) )     )
#define dPYR4w  ( 0.25 * ( -1.     + u*v/DSQU(1.-w) ) )
#define dPYR5u  ( 0.                                  )
#define dPYR5v  ( 0.                                  )
#define dPYR5w  ( 1.                                  )


#endif
