/* $Id: Pos_Plot.h,v 1.1 2000-10-16 12:33:02 geuzaine Exp $ */
#ifndef _POS_PLOT_H_
#define _POS_PLOT_H_

#define ARG  struct PostQuantity     *NCPQ_P,			\
             struct PostQuantity     *CPQ_P,			\
	     int                      Order,			\
	     struct DefineQuantity   *DefineQuantity_P0,	\
	     struct QuantityStorage  *QuantityStorage_P0,	\
	     struct PostSubOperation *PostSubOperation_P

void  Pos_PlotOnRegion      (ARG);
void  Pos_PlotOnCut         (ARG);
void  Pos_PlotOnGrid        (ARG);
void  Pos_PrintOnRegion     (ARG);
void  Pos_PrintWithArgument (ARG);

#undef ARG

#endif
