// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef GET_DOF_OF_ELEMENT_H
#define GET_DOF_OF_ELEMENT_H

#include "ProData.h"

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

void  Get_GroupOfRegionsForElement(struct Element * Element, int * StartingIndex,
                                   struct BasisFunction * BasisFunction_P);

void  Get_GlobalForElement(struct Element * Element, int * StartingIndex,
			   struct BasisFunction * BasisFunction_P) ;

void  Get_CodesOfElement(struct FunctionSpace    * FunctionSpace_P,
			 struct QuantityStorage  * QuantityStorage_P,
			 int Nbr_Entity, int Num_Entity[],
			 int StartingIndex,
			 int i_BFunction, int TypeConstraint, int * Num_SubFunction) ;

void  Get_PreResolutionForGlobalBasisFunction(int Nbr_Global, int StartingIndex,
					      struct Element * Element) ;

void  Get_DofOfRegion(int  Num_Region,
		      struct GlobalQuantity   * GlobalQuantity_P,
		      struct FunctionSpace    * FunctionSpace_P,
		      struct QuantityStorage  * QuantityStorage_P) ;

#endif
