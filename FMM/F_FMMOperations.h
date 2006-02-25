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
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#ifndef _F_FMM_OPERATIONS_H_ 
#define _F_FMM_OPERATIONS_H_

/* ------------------------------------------------------------------------- */ 
/* FMM Operations                                                            */ 
/* ------------------------------------------------------------------------- */ 
  
void FMM_MatVectorProd (double *, double *) ;
void FMM_Renumbering(int N, int *permr, int *permp) ;
void FMM_InverseRenumbering(int *rpermr);
void FMM_Scaling(double *rowscal, double *colscal) ;
void FMM_UnScaling(double *rowscal, double *colscal) ;

#endif
