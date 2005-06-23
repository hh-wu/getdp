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
 */

#ifndef _GET_DOF_OF_ELEMENT_H_
#define _GET_DOF_OF_ELEMENT_H_

#include "Data_Active.h"


/* Get_DofOfElement */
/* ---------------- */

void  Get_InitDofOfElement(struct Element * Element) ;

void  Get_DofOfElement(struct Element          * Element,
		       struct FunctionSpace    * FunctionSpace_P,
		       struct QuantityStorage  * QuantityStorage_P,
		       List_T                  * BasisFunctionIndex_L) ;

void  Get_GroupsOfElementaryEntitiesOfElement
  (struct Element * Element,
   int * StartingIndex, int Nbr_ElementaryEntities, int Num_ElementaryEntities[],
   struct BasisFunction * BasisFunction_P) ;
void  Get_GroupsOfEdgesOnNodesOfElement    (struct Element * Element,
					    int * StartingIndex) ;
void  Get_RegionForElement(struct Element * Element, int * StartingIndex,
			   struct BasisFunction * BasisFunction_P) ;
void  Get_GlobalForElement(struct Element * Element, int * StartingIndex,
			   struct BasisFunction * BasisFunction_P) ;

void  Get_CodesOfElement(struct FunctionSpace    * FunctionSpace_P,
			 struct QuantityStorage  * QuantityStorage_P,
			 int Nbr_Entity, int Num_Entity[], 
			 int StartingIndex,
			 int i_BFunction, int TypeConstraint, int * Num_SubFunction) ;

void  Treatment_ConstraintForElement(struct FunctionSpace    * FunctionSpace_P,
				     struct QuantityStorage  * QuantityStorage_P,
				     int Num_Entity[], int i_Entity,
				     int i_BFunction, int TypeConstraint) ;

void  Get_ValueForConstraint(struct ConstraintInFS * Constraint_P, double Value[],
			     int * Index_TimeFunction) ;
void  Get_PreResolutionForConstraint(struct ConstraintInFS * Constraint_P,
				     int * Index_TimeFunction) ;
void  Get_LinkForConstraint(struct ConstraintInFS * Constraint_P,
			    int Num_Entity, int * CodeEntity_Link, double Value[]) ;

void  Get_PreResolutionForGlobalBasisFunction(int Nbr_Global, int StartingIndex,
					      struct Element * Element) ;

void  Get_DofOfRegion(int  Num_Region,
		      struct GlobalQuantity   * GlobalQuantity_P,
		      struct FunctionSpace    * FunctionSpace_P,
		      struct QuantityStorage  * QuantityStorage_P) ;

void  Treatment_ConstraintForRegion(struct GlobalQuantity   * GlobalQuantity_P,
				    struct FunctionSpace    * FunctionSpace_P,
				    struct QuantityStorage  * QuantityStorage_P) ;

#endif
