/* $Id: F_FMM_DTA.h,v 1.2 2003-03-18 14:55:22 geuzaine Exp $ */
#ifndef _F_FMM_DTA
#define _F_FMM_DTA

#include "Data_Active.h"

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
