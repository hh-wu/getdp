// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Michael Asam

#include <stdio.h>
#include <limits>
#include <math.h>
#include "ProData.h"
#include "DofData.h"
#include "SolvingOperations.h"
#include "Message.h"

void Cal_SolutionErrorRatio(gVector *dx, gVector *x,
                            double reltol, double abstol,
                            int NormType, double *ErrorRatio)
{
  int     xLength;
  double  AbsVal_x, AbsVal_dx, ImagVal_x, ImagVal_dx;
  double  *ErrorRatioVec;
  bool    Is_NaN_or_Inf;

  LinAlg_GetVectorSize(dx, &xLength);
  ErrorRatioVec = new double[xLength];

  *ErrorRatio = 0.;
  Is_NaN_or_Inf = false;

  for (int i = 0; i < xLength; i++) {
    if (gSCALAR_SIZE == 1)
    {
      LinAlg_GetAbsDoubleInVector(&AbsVal_x, x, i) ;
      LinAlg_GetAbsDoubleInVector(&AbsVal_dx, dx, i) ;
    }
    if (gSCALAR_SIZE == 2)
    {
      LinAlg_GetComplexInVector(&AbsVal_x, &ImagVal_x, x, i, -1);
      LinAlg_GetComplexInVector(&AbsVal_dx, &ImagVal_dx, dx, i, -1);
      AbsVal_x = sqrt( AbsVal_x*AbsVal_x + ImagVal_x*ImagVal_x);
      AbsVal_dx = sqrt( AbsVal_dx*AbsVal_dx + ImagVal_dx*ImagVal_dx);
    }

    ErrorRatioVec[i] = AbsVal_dx / (abstol + reltol * AbsVal_x);

    if ( ErrorRatioVec[i] != ErrorRatioVec[i] ||                           // Solution is NaN
         ErrorRatioVec[i] == -std::numeric_limits<double>::infinity() ||   // Solution is -Inf
         ErrorRatioVec[i] ==  std::numeric_limits<double>::infinity() )    // Solution is Inf
      Is_NaN_or_Inf = true;
  }

  if ( Is_NaN_or_Inf ) {
    //Message::Error("No valid solution found (NaN or Inf)!"); // kj+++
    Message::Warning("No valid solution found (NaN or Inf)!");
    *ErrorRatio = std::numeric_limits<double>::quiet_NaN();
  }
  else{
    // Calculating the norm of the error ratio vector
    switch (NormType){
    case LINFNORM:
      for (int i = 0; i < xLength; i++) {
        if (ErrorRatioVec[i] > *ErrorRatio)
          *ErrorRatio = ErrorRatioVec[i];
      }
      break;

    case L1NORM:
      for (int i = 0; i < xLength; i++) {
        *ErrorRatio += ErrorRatioVec[i];
      }
      break;

    case MEANL1NORM:
      for (int i = 0; i < xLength; i++) {
        *ErrorRatio += ErrorRatioVec[i];
      }
      *ErrorRatio /= xLength;
      break;

    case L2NORM:
      for (int i = 0; i < xLength; i++) {
        *ErrorRatio += ErrorRatioVec[i] * ErrorRatioVec[i];
      }
      *ErrorRatio = sqrt(*ErrorRatio);
      break;

    case MEANL2NORM:
      for (int i = 0; i < xLength; i++) {
        *ErrorRatio += ErrorRatioVec[i] * ErrorRatioVec[i];
      }
      *ErrorRatio = sqrt(*ErrorRatio / xLength);
      break;

    default:
      Message::Error("Wrong error norm in Cal_SolutionErrorRatio");
      break;
    }
  }

  delete [] ErrorRatioVec;
}

/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r                                       */
/* ------------------------------------------------------------------------ */

void Cal_SolutionError(gVector *dx, gVector *x, int diff, double *MeanError)
{
  // This is not a very good implementation: it should be replaced with
  // Cal_SolutionErrorRatio above

  int    i, n;
  double valx, valdx, valxi = 0., valdxi = 0.,errsqr = 0., xmoy = 0., dxmoy = 0.;
  double tol, nvalx, nvaldx ;
  //bool    Is_NaN_or_Inf=0; // kj+++

  LinAlg_GetVectorSize(dx, &n);

  if (gSCALAR_SIZE == 1)
    for (i=0 ; i<n ; i++) {
      LinAlg_GetAbsDoubleInVector(&valx, x, i) ;
      LinAlg_GetAbsDoubleInVector(&valdx, dx, i) ;
      xmoy += valx ;
      if(diff) dxmoy += (valdx-valx) ;
      else     dxmoy += valdx ;
    }
  if (gSCALAR_SIZE == 2)
    for (i=0 ; i<n ; i++) {
      LinAlg_GetComplexInVector(&valx, &valxi, x, i, -1);
      LinAlg_GetComplexInVector(&valdx, &valdxi, dx, i, -1);
      xmoy += sqrt(valx*valx+valxi*valxi) ;
      if(diff) dxmoy += sqrt((valdx-valx)*(valdx-valx)+(valdxi-valxi)*(valdxi-valxi)) ;
      else     dxmoy += sqrt(valdx*valdx + valdxi*valdxi) ;
    }

  xmoy  /= (double)n ;
  dxmoy /= (double)n ;

  if (xmoy > 1.e-30) {
    tol = xmoy*1.e-10 ;
    //tol = 1e200; // kj+++
    //tol=(tol<1e-3)?1e-3:tol; // kj+++
    if (gSCALAR_SIZE == 1)
      for (i=0 ; i<n ; i++){
        LinAlg_GetAbsDoubleInVector(&valx, x, i) ;
        LinAlg_GetAbsDoubleInVector(&valdx, dx, i) ;
        if(diff){
          if (valx > tol) errsqr += fabs(valdx-valx)/valx ;
          else 	        errsqr += fabs(valdx-valx) ;
        }
        else{
          if (valx > tol) errsqr += valdx/valx ;
          else 	        errsqr += valdx ;
        }
      }

    if (gSCALAR_SIZE == 2)
      for (i=0 ; i<n ; i++) {
        LinAlg_GetComplexInVector(&valx, &valxi, x, i, -1);
        LinAlg_GetComplexInVector(&valdx, &valdxi, dx, i, -1);
        nvalx = sqrt(valx*valx+valxi*valxi) ;
        nvaldx = sqrt(valdx*valdx+valdxi*valdxi) ;
        if(diff){
          if (nvalx > tol)
            errsqr += sqrt((valdx-valx)*(valdx-valx)+(valdxi-valxi)*(valdxi-valxi))/nvalx ;
          else
            errsqr += sqrt((valdx-valx)*(valdx-valx)+(valdxi-valxi)*(valdxi-valxi));
        }
        else{
          if (nvalx > tol) errsqr += nvaldx/nvalx ;
          else 	        errsqr += nvaldx ;
        }
      }

    *MeanError = errsqr/(double)n ;
  }
  else{
    if (dxmoy > 1.e-30)
      *MeanError = 1. ;
    else
      *MeanError = 0. ;
  }

  /* // kj+++
  if ( *MeanError != *MeanError ||                                 // Solution is NaN
       *MeanError == -std::numeric_limits<double>::infinity() ||   // Solution is -Inf
       *MeanError ==  std::numeric_limits<double>::infinity() )    // Solution is Inf
    Is_NaN_or_Inf = true;

  if ( Is_NaN_or_Inf ) {
    Message::Error("No valid solution found (NaN or Inf)!");
    *MeanError = std::numeric_limits<double>::quiet_NaN(); 
  }
  */ 
}

