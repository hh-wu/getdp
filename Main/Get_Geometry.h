/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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

#ifndef _GET_GEOMETRY_H_
#define _GET_GEOMETRY_H_

#include "Data_Active.h"


/* Get_Geometry & co */
/* ----------------- */

void  Get_NodesCoordinatesOfElement(struct Element * Element) ;

void  Get_BFGeoElement(struct Element * Element, double u, double v, double w) ;

void  * Get_JacobianFunction (int Type_Jacobian, int Type_Element,
			      int * Type_Dimension) ;

/* Jacobian */
/* -------- */

#define JACOBIAN_ARG  struct Element * Element, MATRIX3x3 * Jac

/* Vol */

double  JacobianVol0D (JACOBIAN_ARG);

double  JacobianVol1D (JACOBIAN_ARG);

double  JacobianVol2D (JACOBIAN_ARG);
double  JacobianVolSphShell2D (JACOBIAN_ARG);
double  JacobianVolRectShell2D (JACOBIAN_ARG);
double  JacobianVolPlpdX2D (JACOBIAN_ARG);

double  JacobianVolAxi2D (JACOBIAN_ARG);
double  JacobianVolAxiSphShell2D (JACOBIAN_ARG);
double  JacobianVolAxiRectShell2D (JACOBIAN_ARG);
double  JacobianVolAxiPlpdX2D (JACOBIAN_ARG);

double  JacobianVolAxiSqu2D (JACOBIAN_ARG);
double  JacobianVolAxiSquSphShell2D (JACOBIAN_ARG);
double  JacobianVolAxiSquRectShell2D (JACOBIAN_ARG);

double  JacobianVol3D (JACOBIAN_ARG);
double  JacobianVolSphShell3D (JACOBIAN_ARG);
double  JacobianVolRectShell3D (JACOBIAN_ARG);

/* Sur */

double  JacobianSur2D (JACOBIAN_ARG);
double  JacobianSurSphShell2D (JACOBIAN_ARG);
double  JacobianSurRectShell2D (JACOBIAN_ARG);
double  JacobianSurAxi2D (JACOBIAN_ARG);
double  JacobianSur3D (JACOBIAN_ARG);

/* Lin */

double  JacobianLin3D (JACOBIAN_ARG);


#undef JACOBIAN_ARG

/* -------- */

void  Get_InverseMatrix(int Type_Dimension, int Type_Element, double DetMat,
			MATRIX3x3 * Mat, MATRIX3x3 * InvMat) ;
void  Get_ProductMatrix(int Type_Dimension,
			MATRIX3x3 * A, MATRIX3x3 * B, MATRIX3x3 * AB) ;

/* -------- */
void *Get_ChangeOfCoordinates(int Flag_ChangeCoord, int Type_Form) ;

void  ChangeOfCoord_No1(struct Element * Element,
			double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_No123(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form1(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form2(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form3(struct Element * Element,
			  double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form1P(struct Element * Element,
			   double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form2P(struct Element * Element,
			   double vBFu[], double vBFx[]) ;
void  ChangeOfCoord_Form1S(struct Element * Element,
			   double vBFu[], double vBFx[]) ;

/* -------- */

double  Cal_Product123 (double v1[], double v2[]) ;
double  Cal_Product12  (double v1[], double v2[]) ;
double  Cal_Product3   (double v1[], double v2[]) ;
double  Cal_Product1   (double v1[], double v2[]) ;

#endif
