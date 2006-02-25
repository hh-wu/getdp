#define RCSID "$Id: Cal_AnalyticIntegration.c,v 1.10 2006-02-25 15:00:24 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

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

  default :
    Msg(ERROR, "Something wrong in Cal_AnalyticIntegration");
    GetDP_Return(0.) ;
    
  }

}

