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

#ifndef _POS_QUANTITY_H_
#define _POS_QUANTITY_H_

#include "Data_Active.h"

void Cal_PostQuantity(struct PostQuantity    *PostQuantity_P, 
		      struct DefineQuantity  *DefineQuantity_P0,
		      struct QuantityStorage *QuantityStorage_P0,
		      List_T *Support_L,
		      struct Element         *Element, 
		      double u, double v, double w, 
		      struct Value *Value) ;

void Pos_GlobalQuantity(struct PostQuantity    *PostQuantity_P,
			struct DefineQuantity  *DefineQuantity_P0,
			struct QuantityStorage *QuantityStorage_P0,
			struct PostQuantityTerm  *PostQuantityTerm_P,
			struct Element         *ElementEmpty, 
			List_T  *InRegion_L, List_T  *Support_L,
			struct Value *Value) ;

void Cal_PostCumulativeQuantity(List_T                 *Region_L,
				int                    SupportIndex,
				List_T                 *TimeStep_L, 
				struct PostQuantity    *PostQuantity_P, 
				struct DefineQuantity  *DefineQuantity_P0,
				struct QuantityStorage *QuantityStorage_P0,
				struct Value          **Value) ;

void Combine_PostQuantity(int Type, int Order, 
			  struct Value *V1, struct Value *V2) ;

void Pos_LocalOrIntegralQuantity(struct PostQuantity    *PostQuantity_P, 
				 struct DefineQuantity  *DefineQuantity_P0,
				 struct QuantityStorage *QuantityStorage_P0,
				 struct PostQuantityTerm  *PostQuantityTerm_P,
				 struct Element         *Element, 
				 int    Type_Quantity,
				 double u, double v, double w, 
				 struct Value *Value) ;

#endif
