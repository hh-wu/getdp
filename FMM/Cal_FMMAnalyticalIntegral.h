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
 *   Ruth Sabariego
 */

#ifndef _CAL_FMM_ANALYTIC_INTEGRAL_H_ 
#define _Cal_FMM_ANALYTIC_INTEGRAL_H_

#include "Data_Active.h"

#define MAX_NODES        6 

void GF_FMMLaplacexForm(struct Element           *  Element, 
			struct QuantityStorage   *  QuantityStorage_P,
			int                         Nbr_Dof, 
			void                        (*xFunctionBF) (), List_T *NumDof_L,
			struct Value                Val,
			double                   ** M);

#endif

