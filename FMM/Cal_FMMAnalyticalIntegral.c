#define RCSID "$Id: Cal_FMMAnalyticalIntegral.c,v 1.7 2004-01-19 16:51:12 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "CurrentData.h"
#include "Numeric.h"
#include "Tools.h"
#include "Cal_FMMAnalyticalIntegral.h"


void GF_FMMLaplacexForm( struct Element           * Element, 
			 struct QuantityStorage   * QuantityStorage_P,
			 int                        Nbr_Dof, 
			 void                       (*xFunctionBF) (), List_T *NumDof_L,
			 struct Value                Val,
			 double                   ** M ){

  int      i, j, id, NbrDir ;
  double   xs[MAX_NODES], ys[MAX_NODES] ;
  double   r0, phi0=0., r1, phi1=0., p0, p1, d, phi=0., cphi, sphi, Re, Im, cte=0., R=0. ;
  double   ValRe = 1., ValIm = 0., Re2, Im2 ;

  GetDP_Begin("GF_FMMLaplacexForm");

  NbrDir = Current.FMM.N ;
  /* Watch out: Only SCALAR ctes are considered */
  
  if (Val.Type == SCALAR){
    ValRe = Val.Val[0];
    ValIm = Val.Val[MAX_DIM];
  }

  switch ( _2D ) {
  case _2D : 
    switch (Element->ElementSource->Type) {
    case LINE:
      xs[0] = Element->ElementSource->x[0] ; ys[0] = Element->ElementSource->y[0] ;
      xs[1] = Element->ElementSource->x[1] ; ys[1] = Element->ElementSource->y[1] ;
      
      d = sqrt(SQU(xs[0]-xs[1]) + SQU(ys[0]-ys[1])) ;

      r0 = sqrt(SQU(xs[0]-Current.FMM.Xgc) + SQU(ys[0]-Current.FMM.Ygc)) ;
      r1 = sqrt(SQU(xs[1]-Current.FMM.Xgc) + SQU(ys[1] -Current.FMM.Ygc)) ;

      switch (Current.FMM.Flag_GF) {
      case FMM_AGGREGATION :
	if(!Current.FMM.Flag_Normal){
	  phi = atan2(ys[1]-ys[0], xs[1]-xs[0]) ;
	  phi0 = atan2(ys[0] - Current.FMM.Ygc, xs[0] - Current.FMM.Xgc) ;    
	  phi1 = atan2(ys[1] - Current.FMM.Ygc, xs[1] - Current.FMM.Xgc) ; 
	}
	else{
	  /* Watch out: the analytical integration with NPxGradLaplace 
	     is solo posible for Aggregation */
	  phi = atan2(-ys[1]+ys[0], -xs[1]+xs[0]) ;
	  phi0 = atan2(-ys[0] + Current.FMM.Ygc, -xs[0] + Current.FMM.Xgc) ;    
	  phi1 = atan2(-ys[1] + Current.FMM.Ygc, -xs[1] + Current.FMM.Xgc) ; 
	}
	cte = -ONE_OVER_TWO_PI ;
	R = Current.FMM.Rsrc ;
	break;
      case FMM_DISAGGREGATION :
	phi = atan2(-ys[1]+ys[0], -xs[1]+xs[0]) ;
	phi0 = atan2(-ys[0] + Current.FMM.Ygc, -xs[0] + Current.FMM.Xgc) ;    
	phi1 = atan2(-ys[1] + Current.FMM.Ygc, -xs[1] + Current.FMM.Xgc) ; 
	cte = 1. ;
	R = Current.FMM.Robs ;
	break;
      }

      cphi = cos(phi) ;
      sphi = sin(phi) ;
      
      for (j = 0 ; j < Nbr_Dof ; j++) {
	if(QuantityStorage_P->BasisFunction[j].Dof->Type == DOF_UNKNOWN){
	  i = List_ISearch(NumDof_L, 
			   &QuantityStorage_P->BasisFunction[j].Dof->Case.Unknown.NumDof,
			   fcmp_int) ;
	  if (i != -1){
	    p0 = p1 = cte*R/d ;
	    for (id = 0 ; id < NbrDir ; id++){
	      p0 *= r0/R ;
	      p1 *= r1/R ;
	      Re = (p1 * cos((id+1)*phi1) - p0 * cos((id+1)*phi0))/(id+1);
	      Im = (p1 * sin((id+1)*phi1) - p0 * sin((id+1)*phi0))/(id+1);
	      Re2 = Re * ValRe - Im * ValIm ;
	      Im2 = Re * ValIm + Im * ValRe ;
  	      M[i][2*id  ] =  Re2*cphi + Im2*sphi ;
	      M[i][2*id+1] = -Re2*sphi + Im2*cphi ;
	    }
	  }
	  else  Msg(ERROR, "Wrong NumDof %d for Analytical Aggreg", 
		    QuantityStorage_P->BasisFunction[j].Dof->Case.Unknown.NumDof) ;
	}
      } 
      break;
    default:
      Msg(ERROR, "Element not implemented for Analytical Aggreg") ;
    }/* Element type */
    break;
  default:
    Msg(ERROR, "Wrong dimension for Analytical Aggreg") ;
  }
  
  GetDP_End;
  
}




