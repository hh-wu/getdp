/* $Id: F_FMM_DTA.h,v 1.1 2003-03-17 16:13:09 sabarieg Exp $ */

#ifndef _F_FMM_DTA
#define _F_FMM_DTA

#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Get_DofOfElement.h"
#include "Get_Geometry.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Tools.h"

#include "Data_FMM.h"

void  GF_FMMTranslationValue() ;      
void  GF_FMMTranslationValueAdaptive() ;

void  Cal_FMMGalerkinDisaggregation( struct EquationTerm     * EquationTerm_P0,
				     struct QuantityStorage  * QuantityStorage_P0 ) ;

void  Cal_TermsforDisaggregation( struct EquationTerm * EquationTerm_P,
				  struct QuantityStorage * QuantityStorage_P0,
				  struct Value *TermFct ) ;

void  Cal_FMMGalerkinAggregation( struct EquationTerm     * EquationTerm_P0,
				  struct QuantityStorage  * QuantityStorage_P0 ) ;

void  Cal_TermsforAggregation( struct QuantityStorage * QuantityStorageDof_P,
			       struct Value Val0, void(**FunctionProd)() ) ;



#endif
