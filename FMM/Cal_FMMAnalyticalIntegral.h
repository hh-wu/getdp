/* $Id: Cal_FMMAnalyticalIntegral.h,v 1.1 2003-03-17 16:13:07 sabarieg Exp $ */
#ifndef _Cal_FMMAnalyticalIntegral_H_ 
#define _Cal_FMMAnalyticalIntegral_H_

#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Get_Geometry.h"
#include "BF_Function.h"
#include "CurrentData.h"
#include "Tools.h"
#include "Data_Numeric.h"


#define MAX_NODES        6 

void GF_FMMLaplacexForm( struct Element           *  Element, 
			 struct QuantityStorage   *  QuantityStorage_P,
			 int                         Nbr_Dof, 
			 void                        (*xFunctionBF) (), List_T *NumDof_L,
			 struct Value                Val,
			 double                   ** M ) ;


#endif

