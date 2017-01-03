// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "Message.h"

/* ------------------------------------------------------------------------ */
/*  B F _ V o l u m e                                                       */
/* ------------------------------------------------------------------------ */

#define WrongNumVolume   Message::Error("Wrong Volume number in 'BF_Volume'")

void BF_Volume(struct Element * Element, int NumVolume,
	       double u, double v, double w,  double *s)
{
  switch (Element->Type) {
  case POINT :
    switch(NumVolume) {
    case 1  : *s = 1. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case LINE :
    switch(NumVolume) {
    case 1  : *s = 0.5 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case TRIANGLE :
    switch(NumVolume) {
    case 1  : *s = 2. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case QUADRANGLE :
    switch(NumVolume) {
    case 1  : *s = 0.25 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumVolume) {
    case 1  : *s = 6. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumVolume) {
    case 1  : *s = 0.125 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case PRISM :
    switch(NumVolume) {
    case 1  : *s = 1. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case PYRAMID :
    switch(NumVolume) {
    case 1  : *s = 3./4. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Volume");
    break ;
  }
}

#undef WrongNumVolume

void BF_VolumeX(struct Element * Element, int NumVolume,
		double u, double v, double w,  double *s)
{
  s[1] = s[2] = 0.;
  BF_Volume (Element, NumVolume, u, v, w, &s[0]) ;
}

void BF_VolumeY(struct Element * Element, int NumVolume,
		double u, double v, double w,  double *s)
{
  s[0] = s[2] = 0.;
  BF_Volume (Element, NumVolume, u, v, w, &s[1]) ;
}

void BF_VolumeZ(struct Element * Element, int NumVolume,
		double u, double v, double w,  double *s)
{
  s[0] = s[1] = 0.;
  BF_Volume (Element, NumVolume, u, v, w, &s[2]) ;
}
