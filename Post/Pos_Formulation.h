#ifndef _POS_FORMULATION_H_
#define _POS_FORMULATION_H_

struct CutEdge {
  int     nbc ;
  double  x[2],y[2],z[2] ;  
  double  xc,yc,zc ;
  struct  Value  *Value ;
} ;


void  Pos_FemFormulation(struct Formulation      * Formulation_P,
			 struct PostQuantity     * LocalPQ,
			 struct PostQuantity     * CummulativePQ,
			 int                       Order,
			 struct PostSubOperation * PostSubOperation_P) ;

void  Pos_InitAllSolutions(List_T * TimeStep_L, int Index_TimeStep) ;

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

void  Pos_Element(struct PostQuantity    *PostQuantity_P, 
		  struct DefineQuantity  *DefineQuantity_P0,
		  struct QuantityStorage *QuantityStorage_P0,
		  struct Element         *Element, 
		  double u, double v, double w, 
		  struct Value           *Value) ;

void Pos_LocalOrIntegralQuantity(struct PostQuantity    *PostQuantity_P, 
				 struct DefineQuantity  *DefineQuantity_P0,
				 struct QuantityStorage *QuantityStorage_P0,
				 struct PostQuantityTerm  *PostQuantityTerm_P,
				 struct Element         *Element, 
				 int    Type_Quantity,
				 double u, double v, double w, 
				 struct Value *Value) ;

void Pos_GlobalQuantity(struct PostQuantity    *PostQuantity_P,
			struct DefineQuantity  *DefineQuantity_P0,
			struct QuantityStorage *QuantityStorage_P0,
			struct PostQuantityTerm  *PostQuantityTerm_P,
			struct Element         *Element, 
			List_T  *InRegion_L, int Num_Region,
			struct Value *Value) ;


void  Pos_FillPostElement(struct PostElement PE, struct Geo_Element *GE,
			  List_T *PostElement_L, int depth, int skin) ;


/* Interface Printing Functions */

void  Print_PostFormat(int Format) ;

void  Print_PostHeader(int Format, int NbTimeStep, int HarmonicToTime,
		       int Type, int Order,
		       struct PostQuantity  *NCPQ_P,
		       struct PostQuantity  *CPQ_P) ;

void  Print_PostFooter(int Format) ;

void  Print_PostElement(int Format, 
			double Time, int TimeStep, int NbTimeStep, 
			int NbHarmonics, int HarmonicToTime,
			int Type, int NbrNodes, double *x, double *y, double *z,
			double *Normal, struct Value *Value);

void  Print_PostValue(int Format, struct Value * Value, int NbHarmonic, double Time, 
		      int Flag_PrintTime, int Flag_NewLine) ;



#endif
