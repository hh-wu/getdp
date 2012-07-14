// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
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
      LinAlg_GetComplexInVector(&AbsVal_x, &ImagVal_x, x, i, i+1);
      LinAlg_GetComplexInVector(&AbsVal_dx, &ImagVal_dx, dx, i, i+1);
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
    Message::Warning("No valid solution found (NaN or Inf)!");
    *ErrorRatio = std::numeric_limits<double>::quiet_NaN();
  }
  else
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

  delete [] ErrorRatioVec;
}

