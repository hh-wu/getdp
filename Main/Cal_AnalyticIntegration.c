#define RCSID "$Id: Cal_AnalyticIntegration.c,v 1.5 2001-03-03 19:21:20 geuzaine Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "BF_Function.h"

/* ------------------------------------------------------------------------ */
/*  C a l _ A n a l y t i c I n t e g r a t i o n                           */
/* ------------------------------------------------------------------------ */

double  Cal_AnalyticIntegration(struct Element * E,
				void (*BFEqu)(), void (*BFDof)(),
				int i, int j, double (*Cal_Productx)() ) {
  double DetJ ;

  GetDP_Begin("Cal_AnalyticalIntegration");

  if ((E->Type != TRIANGLE) ||
      (BFEqu != (void (*)())BF_GradNode) || (BFDof != (void (*)())BF_GradNode) ) {

    Msg(ERROR, "Unknown analytic method for integration") ;
    GetDP_Return(0.) ;
  }


  DetJ = (E->x[2] - E->x[0]) * (E->y[1] - E->y[0]) -
         (E->x[1] - E->x[0]) * (E->y[2] - E->y[0]) ;
  
  switch (i) {

  case 0 :
    switch (j) {
    case 0 :
      GetDP_Return( ((E->y[2]-E->y[1])*(E->y[2]-E->y[1]) + 
	      (E->x[1]-E->x[2])*(E->x[1]-E->x[2])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    case 1 :
      GetDP_Return( ((E->y[2]-E->y[1])*(E->y[0]-E->y[2]) + 
	      (E->x[1]-E->x[2])*(E->x[2]-E->x[0])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    case 2 :
      GetDP_Return( ((E->y[2]-E->y[1])*(E->y[1]-E->y[0]) + 
	      (E->x[1]-E->x[2])*(E->x[0]-E->x[1])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    default :
      Msg(ERROR, "Something wrong in Cal_AnalyticIntegration");
      GetDP_Return(0.) ;
    }
    break;
    
  case 1 :
    switch (j) {
    case 0 :
      GetDP_Return( ((E->y[2]-E->y[1])*(E->y[0]-E->y[2]) + 
	      (E->x[1]-E->x[2])*(E->x[2]-E->x[0])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    case 1 :
      GetDP_Return( ((E->y[0]-E->y[2])*(E->y[0]-E->y[2]) + 
	      (E->x[2]-E->x[0])*(E->x[2]-E->x[0])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    case 2 :
      GetDP_Return( ((E->y[0]-E->y[2])*(E->y[1]-E->y[0]) + 
	      (E->x[2]-E->x[0])*(E->x[0]-E->x[1])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    default :
      Msg(ERROR, "Something wrong in Cal_AnalyticIntegration");
      GetDP_Return(0.) ;
    }
    break;
    
  case 2 :
    switch (j) {
    case 0 :
      GetDP_Return( ((E->y[2]-E->y[1])*(E->y[1]-E->y[0]) + 
	      (E->x[1]-E->x[2])*(E->x[0]-E->x[1])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    case 1 :
      GetDP_Return( ((E->y[0]-E->y[2])*(E->y[1]-E->y[0]) + 
	      (E->x[2]-E->x[0])*(E->x[0]-E->x[1])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    case 2 :
      GetDP_Return( ((E->y[1]-E->y[0])*(E->y[1]-E->y[0]) + 
	      (E->x[0]-E->x[1])*(E->x[0]-E->x[1])) * fabs(DetJ)
	/ (2. * DetJ * DetJ) ) ;
    default :
      Msg(ERROR, "Something wrong in Cal_AnalyticIntegration");
      GetDP_Return(0.);
    }
    break;

  default :
    Msg(ERROR, "Something wrong in Cal_AnalyticIntegration");
    GetDP_Return(0.) ;
    
  }

}

