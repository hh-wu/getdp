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

#ifndef _MISCELLANEOUS_H_
#define _MISCELLANEOUS_H_

#include "Data_Active.h"

#define F_ARG   struct Function * Fct, struct Value * A, struct Value * V


/* F_Analytic */

void  F_Sphere            (F_ARG) ;
void  F_Cylinder          (F_ARG) ;
void  F_JFIE_ZPolCyl      (F_ARG) ; 
void  F_RCS_ZPolCyl       (F_ARG) ; 
void  F_JFIE_TransZPolCyl (F_ARG) ;
void  F_JFIE_SphTheta     (F_ARG) ;
void  F_RCS_SphTheta      (F_ARG) ;
void  F_JFIE_SphPhi       (F_ARG) ;
void  F_RCS_SphPhi        (F_ARG) ;
void  F_AcousticSoftSphere(F_ARG) ;
void  F_AcousticFieldSoftCylinder(F_ARG) ;
void  F_DrAcousticFieldSoftCylinder(F_ARG) ;
void  F_AcousticFieldHardCylinder(F_ARG) ;
void  F_OSRC_C0(F_ARG);
void  F_OSRC_Aj(F_ARG);
void  F_OSRC_Bj(F_ARG);

/* F_Math */

void  F_Exp             (F_ARG) ;
void  F_Log             (F_ARG) ;
void  F_Log10           (F_ARG) ;
void  F_Sqrt            (F_ARG) ;
void  F_Sin             (F_ARG) ;
void  F_Asin            (F_ARG) ;
void  F_Cos             (F_ARG) ;
void  F_Acos            (F_ARG) ;
void  F_Tan             (F_ARG) ;
void  F_Atan            (F_ARG) ;
void  F_Sinh            (F_ARG) ;
void  F_Cosh            (F_ARG) ;
void  F_Tanh            (F_ARG) ;
void  F_Fabs            (F_ARG) ;
void  F_Floor           (F_ARG) ;
void  F_Ceil            (F_ARG) ;
void  F_Fmod            (F_ARG) ;

/* F_ExtMath */

void  F_Hypot           (F_ARG) ;
void  F_Atan2           (F_ARG) ;
void  F_TanhC2          (F_ARG) ;
void  F_Transpose       (F_ARG) ;
void  F_Trace           (F_ARG) ;
void  F_RotateXYZ       (F_ARG) ;
void  F_Norm            (F_ARG) ;
void  F_SquNorm         (F_ARG) ;
void  F_Unit            (F_ARG) ;
void  F_Cos_wt_p        (F_ARG) ;
void  F_Sin_wt_p        (F_ARG) ;
void  F_Period          (F_ARG) ;
void  F_Interval        (F_ARG) ;

/* F_Type */

void  F_Complex         (F_ARG) ;
void  F_Complex_MH      (F_ARG) ;
void  F_Re              (F_ARG) ;
void  F_Im              (F_ARG) ;
void  F_Conj            (F_ARG) ;
void  F_Cart2Pol        (F_ARG) ;
void  F_Vector          (F_ARG) ;
void  F_Tensor          (F_ARG) ;
void  F_TensorV         (F_ARG) ;
void  F_TensorSym       (F_ARG) ;
void  F_TensorDiag      (F_ARG) ;
void  F_SquDyadicProduct(F_ARG) ;
void  F_CompX           (F_ARG) ;
void  F_CompY           (F_ARG) ;
void  F_CompZ           (F_ARG) ;
void  F_CompXX          (F_ARG) ;
void  F_CompXY          (F_ARG) ;
void  F_CompXZ          (F_ARG) ;
void  F_CompYX          (F_ARG) ;
void  F_CompYY          (F_ARG) ;
void  F_CompYZ          (F_ARG) ;
void  F_CompZX          (F_ARG) ;
void  F_CompZY          (F_ARG) ;
void  F_CompZZ          (F_ARG) ;
void  F_Cart2Sph        (F_ARG) ;
void  F_Cart2Cyl        (F_ARG) ;
void  F_UnitVectorX     (F_ARG) ;
void  F_UnitVectorY     (F_ARG) ;
void  F_UnitVectorZ     (F_ARG) ;

/* F_Coord */

/* se basent sur le uvw courant (-> en cal) */
void  F_CoordX          (F_ARG) ;
void  F_CoordY          (F_ARG) ;
void  F_CoordZ          (F_ARG) ;
void  F_CoordXYZ        (F_ARG) ;

/* se basent sur le xyz courant, i.e. les coord d'un noeud (-> en pre)*/
void  F_aX_bY_cZ        (F_ARG) ;
void  F_aX21_bY21_cZ21  (F_ARG) ;


/* F_Misc */

void  F_Printf          (F_ARG) ;
void  F_Normal          (F_ARG) ;
void  F_NormalSource    (F_ARG) ;
void  F_Tangent         (F_ARG) ;
void  F_CompElementNum  (F_ARG) ;
void  F_ElementVol      (F_ARG) ;
void  F_SurfaceArea     (F_ARG) ;
void  F_InterpolationLinear   (F_ARG) ;
void  F_dInterpolationLinear  (F_ARG) ;
void  F_dInterpolationLinear2 (F_ARG) ;
void  F_InterpolationAkima    (F_ARG) ;
void  F_dInterpolationAkima   (F_ARG) ;
void  F_InterpolationMatrix   (F_ARG) ;

void  Fi_InitListXY     (F_ARG) ;
void  Fi_InitListXY2    (F_ARG) ;
void  Fi_InitAkima      (F_ARG) ;
void  F_TransformTensor (F_ARG) ;  /* pour Tuan */
void  F_TransformPerm   (F_ARG) ;  /* pour Tuan */
void  F_TransformPiezo  (F_ARG) ;  /* pour Tuan */
void  F_TransformPiezoT (F_ARG) ;  /* pour Tuan */

void  F_dhdb_Jiles      (F_ARG) ;  /* pour Johan */
void  F_dbdh_Jiles      (F_ARG) ;  /* pour Johan */
void  F_h_Jiles         (F_ARG) ;  /* pour Johan */
void  F_b_Jiles         (F_ARG) ;  /* pour Johan */

void  F_VirtualWork     (F_ARG) ;  /* pour Patrick */


/* F_MultiHar */

void  F_MHToTime           (F_ARG) ;

/* the following should go somewhere else... */

void  Fi_MHTimeIntegration(int TypePsi, int NbrTimePoint,
			   List_T * WholeQuantity_L, int FreqOffSet,
			   struct Element * Element,
			   struct QuantityStorage * QuantityStorage_P0,
			   double u, double v, double w,
			   struct Value *ValueOut) ;
void  F_MHToTime0 (int init, struct Value * A, struct Value * V, 
		   int iTime, int NbrTimePoint, double * TimeMH) ;/* OJO!!! int *init */
void  MHTransform(struct Element * Element, struct QuantityStorage * QuantityStorage_P0,
		  double u, double v, double w, struct Value *MH_Value,
		  struct Expression * Expression_P, int NbrPoints);

/* F_BiotSavart */
void  F_BiotSavart (F_ARG) ;
void  F_Pocklington (F_ARG) ;

/* F_DiscreteGeometry */

void  F_IncMatrixEdgesXNodes    (F_ARG) ;

void  F_MatrixDualEdgesXEdges   (F_ARG) ;


#undef F_ARG

#endif







