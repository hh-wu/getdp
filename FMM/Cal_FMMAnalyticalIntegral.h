/* $Id: Cal_FMMAnalyticalIntegral.h,v 1.3 2003-03-18 14:55:22 geuzaine Exp $ */
#ifndef _CAL_FMM_ANALYTIC_INTEGRAL_H_ 
#define _Cal_FMM_ANALYTIC_INTEGRAL_H_

#include "Data_Active.h"

#define MAX_NODES        6 

void GF_FMMLaplacexForm( struct Element           *  Element, 
			 struct QuantityStorage   *  QuantityStorage_P,
			 int                         Nbr_Dof, 
			 void                        (*xFunctionBF) (), List_T *NumDof_L,
			 struct Value                Val,
			 double                   ** M ) ;


#endif

