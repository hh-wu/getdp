// GetDP - Copyright (C) 1997-2014 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#ifndef _GET_CONSTRAINT_OF_ELEMENT_H_
#define _GET_CONSTRAINT_OF_ELEMENT_H_

#include "ProData.h"

void  Treatment_ConstraintForElement(struct FunctionSpace    * FunctionSpace_P,
				     struct QuantityStorage  * QuantityStorage_P,
				     int Num_Entity[], int i_Entity,
				     int i_BFunction, int TypeConstraint) ;

void  Treatment_ConstraintForRegion(struct GlobalQuantity   * GlobalQuantity_P,
				    struct FunctionSpace    * FunctionSpace_P,
				    struct QuantityStorage  * QuantityStorage_P) ;

void Treatment_ConstraintByLocalProjection(struct Element *Element,
                                           struct FunctionSpace *FunctionSpace_P,
                                           struct QuantityStorage *QuantityStorage_P) ;

void  Get_ValueForConstraint(struct ConstraintInFS * Constraint_P,
                             double Value[], double Value2[],
			     int * Index_TimeFunction) ;
void  Get_PreResolutionForConstraint(struct ConstraintInFS * Constraint_P,
				     int * Index_TimeFunction) ;
void  Get_LinkForConstraint(struct ConstraintInFS * Constraint_P,
			    int Num_Entity, int * CodeEntity_Link,
                            int Orient, double Value[]) ;

#endif
