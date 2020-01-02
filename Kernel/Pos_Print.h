// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef POS_PRINT_H
#define POS_PRINT_H

#include "ProData.h"

#define ARG  struct PostQuantity     *NCPQ_P,			\
             struct PostQuantity     *CPQ_P,			\
	     int                      Order,			\
	     struct DefineQuantity   *DefineQuantity_P0,	\
	     struct QuantityStorage  *QuantityStorage_P0,	\
	     struct PostSubOperation *PostSubOperation_P

void  Pos_PrintOnRegion     (ARG);
void  Pos_PrintOnElementsOf (ARG);
void  Pos_PrintOnSection    (ARG);
void  Pos_PrintOnGrid       (ARG);
void  Pos_PrintWithArgument (ARG);

#undef ARG

void  Pos_PrintGroup(struct PostSubOperation *PostSubOperation_P);
void  Pos_PrintExpression(struct PostSubOperation *PostSubOperation_P);

#endif
