/* $Id: Cal_Value.h,v 1.3 2001-08-04 03:33:36 geuzaine Exp $ */
#ifndef _CAL_VALUE_H_
#define _CAL_VALUE_H_


void  Cal_CopyValue           (struct Value *V1, struct Value *R);
void  Cal_ZeroValue           (struct Value *V1);

void  Cal_AddValue            (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_SubstractValue      (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_ProductValue        (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_DivideValue         (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_ModuloValue         (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_CrossProductValue   (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_PowerValue          (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_RotateValue         (struct Value *V1, struct Value *V2, struct Value *R);
void  Cal_InvertValue         (struct Value *V1, struct Value *R);
void  Cal_DetValue            (struct Value *V1, struct Value *R);
void  Cal_TransposeValue      (struct Value *V1, struct Value *R);
void  Cal_TraceValue          (struct Value *V1, struct Value *R);
 	 
void  Cal_LessValue           (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_GreaterValue        (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_LessOrEqualValue    (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_GreaterOrEqualValue (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_EqualValue          (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_NotEqualValue       (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_ApproxEqualValue    (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_AndValue            (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_OrValue             (struct Value *V1, struct Value *V2, struct Value *R) ;
void  Cal_NegValue            (struct Value *V1) ;
void  Cal_NotValue            (struct Value *V1) ;

void  Cal_SetHarmonicValue    (struct Value *R) ;

void  Cal_AddMultValue        (struct Value *V1, struct Value *V2, double d, struct Value *R) ;
void  Cal_AddMultValue2       (struct Value *V1, double d1, struct Value *V2, double d2) ;

void  Cal_ComplexProduct  (double V1[], double V2[], double P[]);
void  Cal_ComplexDivision (double V1[], double V2[], double P[]);
void  Cal_ComplexInvert   (double V1[], double P[]);


/* Debug */

void  Print_Value (struct Value *A);

#endif
