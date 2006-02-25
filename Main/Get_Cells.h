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

#ifndef _GET_CELLS_H_
#define _GET_CELLS_H_


#define NBR_MAX_DERHAM_CELLS 12 /* dual edges hexahedron */

void Get_deRhamCells(struct Element *Element,
		     struct QuantityStorage * QuantityStorage,
		     struct Group * Group, 
		     int *Nbr_Cell, struct Element Cell[], 
		     struct Value Vec[], int *RelJac);


#define NBR_MAX_INTEGRATION_CELLS 4 /* quadrangle divided in 4  */

void Get_IntegrationCells(struct Element *Element, 
			  double x, double y, double z,
			  int *Nbr_Cells, struct Element Cells[]) ;

#endif
