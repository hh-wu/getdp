#ifndef _MISCELLANEOUS_H_
#define _MISCELLANEOUS_H_

#include "Data_Active.h"

#define F_ARG   struct Function * Fct, struct Value * A, struct Value * V


/* F_Analytic */

void  F_Sphere          (F_ARG) ;
void  F_Cylinder        (F_ARG) ;

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
void  F_Re              (F_ARG) ;
void  F_Im              (F_ARG) ;
void  F_Conj            (F_ARG) ;
void  F_Vector          (F_ARG) ;
void  F_Tensor          (F_ARG) ;
void  F_TensorV         (F_ARG) ;
void  F_TensorSym       (F_ARG) ;
void  F_TensorDiag      (F_ARG) ;
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
void  F_SurfaceArea     (F_ARG) ;
void  F_InterpolationLinear   (F_ARG) ;
void  F_dInterpolationLinear  (F_ARG) ;
void  F_dInterpolationLinear2 (F_ARG) ;
void  F_InterpolationAkima    (F_ARG) ;
void  F_dInterpolationAkima   (F_ARG) ;

void  Fi_InitListXY     (F_ARG) ;
void  Fi_InitListXY2    (F_ARG) ;
void  Fi_InitAkima      (F_ARG) ;


#undef F_ARG

#endif
