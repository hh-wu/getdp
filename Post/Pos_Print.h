/* $Id: Pos_Print.h,v 1.4 2001-06-17 21:04:46 geuzaine Exp $ */
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
void  Pos_PrintOnSection    (ARG);
void  Pos_PrintOnGrid       (ARG);
void  Pos_PrintWithArgument (ARG);

#undef ARG

#endif
