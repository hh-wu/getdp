/* $Id: Pos_Print.h,v 1.3 2000-10-19 11:24:21 dular Exp $ */
#ifndef _POS_PRINT_H_
#define _POS_PRINT_H_

#define ARG  struct PostQuantity     *NCPQ_P,			\
             struct PostQuantity     *CPQ_P,			\
	     int                      Order,			\
	     struct DefineQuantity   *DefineQuantity_P0,	\
	     struct QuantityStorage  *QuantityStorage_P0,	\
	     struct PostSubOperation *PostSubOperation_P

void  Pos_PrintOnRegion     (ARG);
void  Pos_PrintOnElementsOf (ARG);
void  Pos_PrintOnCut        (ARG);
void  Pos_PrintOnGrid       (ARG);
void  Pos_PrintWithArgument (ARG);

#undef ARG

#endif
