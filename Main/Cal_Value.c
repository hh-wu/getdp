static char *rcsid = "$Id: Cal_Value.c,v 1.9 2000-10-30 01:05:45 geuzaine Exp $" ;
#include <stdio.h>
#include <math.h>
#include <string.h> /* memcpy */

#include "GetDP.h"
#include "Data_Passive.h"
#include "Data_DefineE.h"
#include "Cal_Value.h"
#include "CurrentData.h"
#include "Data_Numeric.h"

void  MH_Cal_ProductValue (struct Value * V1, struct Value * V2, struct Value * R) ;

/* ------------------------------------------------------------------------ */
/*  O p e r a t o r s   o n   V a l u e s                                   */
/* ------------------------------------------------------------------------ */
/* Warning: the pointers V1 and R or V2 and R can be identical. You must    */
/*          use temporary variables in your computations: you can only      */
/*          affect to R at the very last time (when you're sure you will    */
/*          not use V1 or V2 any more).                                     */
/* ------------------------------------------------------------------------ */

static double  a0;
static double  a1     [NBR_MAX_HARMONIC * MAX_DIM] ;
static double  a2     [NBR_MAX_HARMONIC * MAX_DIM] ;
static double  b1     [NBR_MAX_HARMONIC * MAX_DIM] ; 
static double  b2     [NBR_MAX_HARMONIC * MAX_DIM] ;
static double  b3     [NBR_MAX_HARMONIC * MAX_DIM] ;
static double  c1     [NBR_MAX_HARMONIC * MAX_DIM] ; 
static double  c2     [NBR_MAX_HARMONIC * MAX_DIM] ;
static double  c3     [NBR_MAX_HARMONIC * MAX_DIM] ;
static double  tmp[27][NBR_MAX_HARMONIC * MAX_DIM] ;

static int TENSOR_SYM_MAP[]  = {0,1,2,1,3,4,2,4,5};
static int TENSOR_DIAG_MAP[] = {0,-1,-1,-1,1,-1,-1,-1,2};

void Cal_ComplexProduct(double V1[], double V2[], double P[]) {

  GetDP_Begin("Cal_ComplexProduct");

  P[0]       = V1[0] * V2[0]       - V1[MAX_DIM] * V2[MAX_DIM] ;
  P[MAX_DIM] = V1[0] * V2[MAX_DIM] + V1[MAX_DIM] * V2[0] ;

  GetDP_End ;
}

void Cal_ComplexDivision(double V1[], double V2[], double P[]) {
  double Mod2 ;
  
  GetDP_Begin("Cal_ComplexDivision");

  Mod2       = DSQU(V2[0]) + DSQU(V2[MAX_DIM]) ;
  if(!Mod2) Msg(ERROR, "Division by zero in 'Cal_ComplexDivision'");
  P[0]       = (  V1[0] * V2[0]       + V1[MAX_DIM] * V2[MAX_DIM]) / Mod2 ;
  P[MAX_DIM] = (- V1[0] * V2[MAX_DIM] + V1[MAX_DIM] * V2[0])       / Mod2 ;

  GetDP_End ;
}

void Cal_ComplexInvert(double V1[], double P[]) {
  double Mod2 ;

  GetDP_Begin("Cal_ComplexInvert");

  Mod2       = DSQU(V1[0]) + DSQU(V1[MAX_DIM]) ;
  if(!Mod2) Msg(ERROR, "Division by zero in 'Cal_ComplexInvert'");
  P[0]       =   V1[0]       / Mod2 ;
  P[MAX_DIM] = - V1[MAX_DIM] / Mod2 ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 
   ------------------------------------------------------------------------ */

void  Cal_CopyValue(struct Value * V1, struct Value * R) {
  int  k ;

  GetDP_Begin("Cal_CopyValue");
  
  if (V1->Type == SCALAR) {
    R->Type = SCALAR ;
    for (k = 0 ; k < Current.NbrHar ; k++)
      R->Val[MAX_DIM*k  ] = V1->Val[MAX_DIM*k  ] ;
  }
  else if (V1->Type == VECTOR || V1->Type == TENSOR_DIAG){
    R->Type = V1->Type ;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      R->Val[MAX_DIM*k  ] = V1->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM*k+1] = V1->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM*k+2] = V1->Val[MAX_DIM*k+2] ;
    }
  }
  else if (V1->Type == TENSOR_SYM){
    R->Type = TENSOR_SYM ;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      R->Val[MAX_DIM*k  ] = V1->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM*k+1] = V1->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM*k+2] = V1->Val[MAX_DIM*k+2] ;
      R->Val[MAX_DIM*k+3] = V1->Val[MAX_DIM*k+3] ;
      R->Val[MAX_DIM*k+4] = V1->Val[MAX_DIM*k+4] ;
      R->Val[MAX_DIM*k+5] = V1->Val[MAX_DIM*k+5] ;
    }
  }
  else if (V1->Type == TENSOR){
    R->Type = TENSOR ;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      R->Val[MAX_DIM*k  ] = V1->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM*k+1] = V1->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM*k+2] = V1->Val[MAX_DIM*k+2] ;
      R->Val[MAX_DIM*k+3] = V1->Val[MAX_DIM*k+3] ;
      R->Val[MAX_DIM*k+4] = V1->Val[MAX_DIM*k+4] ;
      R->Val[MAX_DIM*k+5] = V1->Val[MAX_DIM*k+5] ;
      R->Val[MAX_DIM*k+6] = V1->Val[MAX_DIM*k+6] ;
      R->Val[MAX_DIM*k+7] = V1->Val[MAX_DIM*k+7] ;
      R->Val[MAX_DIM*k+8] = V1->Val[MAX_DIM*k+8] ;
    }
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ 
   R <- 0 
   ------------------------------------------------------------------------ */

static double VALUE_ZERO [NBR_MAX_HARMONIC * MAX_DIM] = 
  {0.,0.,0., 0.,0.,0.,
   0.,0.,0., 0.,0.,0.,
   0.,0.,0., 0.,0.,0.} ;

void  Cal_ZeroValue(struct Value * R) {

  GetDP_Begin("Cal_ZeroValue");

  memcpy(R->Val, VALUE_ZERO, Current.NbrHar*MAX_DIM*sizeof(double));

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 + V2 
   ------------------------------------------------------------------------ */

#define ADD(i)   R->Val[i] = V1->Val[i] + V2->Val[i]
#define CADD(i)  R->Val[MAX_DIM*k+i] = V1->Val[MAX_DIM*k+i] + V2->Val[MAX_DIM*k+i]

void  Cal_AddValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int           i, k;
  int           i1,i2;
  struct Value  A;

  GetDP_Begin("Cal_AddValue");

  if (V1->Type == SCALAR && V2->Type == SCALAR) {
    if (Current.NbrHar == 1) {
      ADD(0);
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CADD(0);
      }
    }
    R->Type = SCALAR ;
  }

  else if ((V1->Type == VECTOR      && V2->Type == VECTOR) ||
	   (V1->Type == TENSOR_DIAG && V2->Type == TENSOR_DIAG)) {
    if (Current.NbrHar == 1) {
      ADD(0); ADD(1); ADD(2); 
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CADD(0); CADD(1); CADD(2);
      }
    }
    R->Type = V1->Type;
  }

  else if (V1->Type == TENSOR_SYM && V2->Type == TENSOR_SYM) {
    if (Current.NbrHar == 1) {
      ADD(0); ADD(1); ADD(2); ADD(3); ADD(4); ADD(5);
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CADD(0); CADD(1); CADD(2); CADD(3); CADD(4); CADD(5);
      }
    }
    R->Type = TENSOR_SYM;
  }

  else if (V1->Type == TENSOR && V2->Type == TENSOR) {
    if (Current.NbrHar == 1) {
      ADD(0); ADD(1); ADD(2); ADD(3); ADD(4); ADD(5); ADD(6); ADD(7); ADD(8);
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CADD(0); CADD(1); CADD(2); CADD(3); CADD(4); CADD(5); CADD(6); CADD(7); CADD(8);
      }
    }
    R->Type = TENSOR;
  }

  else if ((V1->Type == TENSOR     && V2->Type == TENSOR_SYM) ||
	   (V1->Type == TENSOR     && V2->Type == TENSOR_DIAG)||
	   (V1->Type == TENSOR_SYM && V2->Type == TENSOR_DIAG)){
    A.Type = V1->Type;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      for(i=0 ; i<9 ; i++){
	i1 = (V1->Type==TENSOR)?i:TENSOR_SYM_MAP[i];
	i2 = (V2->Type==TENSOR_SYM)?TENSOR_SYM_MAP[i]:TENSOR_DIAG_MAP[i];
	A.Val[MAX_DIM*k+i1] = 
	  V1->Val[MAX_DIM*k+i1] + ((i2<0)?0.0:V2->Val[MAX_DIM*k+i2]);
      }
    }
    Cal_CopyValue(&A,R);
  }
  
  else if ((V1->Type == TENSOR_SYM  && V2->Type == TENSOR)      ||
	   (V1->Type == TENSOR_DIAG && V2->Type == TENSOR)      ||
	   (V1->Type == TENSOR_DIAG && V2->Type == TENSOR_SYM)){
    A.Type = V2->Type;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      for(i=0 ; i<9 ; i++){
	i1 = (V1->Type==TENSOR_SYM)?TENSOR_SYM_MAP[i]:TENSOR_DIAG_MAP[i];
	i2 = (V2->Type==TENSOR)?i:TENSOR_SYM_MAP[i];
	A.Val[MAX_DIM*k+i2] = 
	  ((i1<0)?0.0:V1->Val[MAX_DIM*k+i1]) + V2->Val[MAX_DIM*k+i2];
      }
    }
    Cal_CopyValue(&A,R);
  }
  
  else {
    Msg(ERROR, "Addition of different quantities: %s + %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

#undef ADD
#undef CADD

/* ------------------------------------------------------------------------ 
   R <- V1 + V2 * d ,   where d is a double
   ------------------------------------------------------------------------ */

void  Cal_AddMultValue (struct Value * V1, struct Value * V2, double d, struct Value * R) {
  int k;
  struct Value A ;

  GetDP_Begin("Cal_AddMultValue");

  A.Type = V2->Type ;

  switch(V2->Type){
  case SCALAR :
    if (Current.NbrHar == 1) {
      A.Val[0] = V2->Val[0] * d;      
    }
    else{
      for (k = 0 ; k < Current.NbrHar ; k++) {
	A.Val[MAX_DIM*k] = V2->Val[MAX_DIM*k] * d;
      }
    }
    break;
  case VECTOR :
  case TENSOR_DIAG :
    if (Current.NbrHar == 1) {
      A.Val[0] = V2->Val[0] * d;
      A.Val[1] = V2->Val[1] * d;
      A.Val[2] = V2->Val[2] * d;
    }
    else{
      for (k = 0 ; k < Current.NbrHar ; k++) {
	A.Val[MAX_DIM*k  ] = V2->Val[MAX_DIM*k  ] * d;
	A.Val[MAX_DIM*k+1] = V2->Val[MAX_DIM*k+1] * d;
	A.Val[MAX_DIM*k+2] = V2->Val[MAX_DIM*k+2] * d;
      }
    }
    break;
  case TENSOR_SYM :
    if (Current.NbrHar == 1) {
      A.Val[0] = V2->Val[0] * d;
      A.Val[1] = V2->Val[1] * d;
      A.Val[2] = V2->Val[2] * d;
      A.Val[3] = V2->Val[3] * d;
      A.Val[4] = V2->Val[4] * d;
      A.Val[5] = V2->Val[5] * d;
    }
    else{
      for (k = 0 ; k < Current.NbrHar ; k++) {
	A.Val[MAX_DIM*k  ] = V2->Val[MAX_DIM*k  ] * d;
	A.Val[MAX_DIM*k+1] = V2->Val[MAX_DIM*k+1] * d;
	A.Val[MAX_DIM*k+2] = V2->Val[MAX_DIM*k+2] * d;
	A.Val[MAX_DIM*k+3] = V2->Val[MAX_DIM*k+3] * d;
	A.Val[MAX_DIM*k+4] = V2->Val[MAX_DIM*k+4] * d;
	A.Val[MAX_DIM*k+5] = V2->Val[MAX_DIM*k+5] * d;
      }
    }
    break;
  case TENSOR :
    if (Current.NbrHar == 1) {
      A.Val[0] = V2->Val[0] * d;
      A.Val[1] = V2->Val[1] * d;
      A.Val[2] = V2->Val[2] * d;
      A.Val[3] = V2->Val[3] * d;
      A.Val[4] = V2->Val[4] * d;
      A.Val[5] = V2->Val[5] * d;
      A.Val[6] = V2->Val[6] * d;
      A.Val[7] = V2->Val[7] * d;
      A.Val[8] = V2->Val[8] * d;
    }
    else{
      for (k = 0 ; k < Current.NbrHar ; k++) {
	A.Val[MAX_DIM*k  ] = V2->Val[MAX_DIM*k  ] * d;
	A.Val[MAX_DIM*k+1] = V2->Val[MAX_DIM*k+1] * d;
	A.Val[MAX_DIM*k+2] = V2->Val[MAX_DIM*k+2] * d;
	A.Val[MAX_DIM*k+3] = V2->Val[MAX_DIM*k+3] * d;
	A.Val[MAX_DIM*k+4] = V2->Val[MAX_DIM*k+4] * d;
	A.Val[MAX_DIM*k+5] = V2->Val[MAX_DIM*k+5] * d;
	A.Val[MAX_DIM*k+6] = V2->Val[MAX_DIM*k+6] * d;
	A.Val[MAX_DIM*k+7] = V2->Val[MAX_DIM*k+7] * d;
	A.Val[MAX_DIM*k+8] = V2->Val[MAX_DIM*k+8] * d;
      }
    }
    break;        
  default :
    Msg(ERROR, "Wrong Argument Type Quantity for 'Cal_AddMultValue'");
    break;
  }
  Cal_AddValue(V1,&A,R);

  GetDP_End ;
}

/* ------------------------------------------------------------------------ 
   R <- V1 - V2 
   ------------------------------------------------------------------------ */

#define SUB(i)   R->Val[i] = V1->Val[i] - V2->Val[i]
#define CSUB(i)  R->Val[MAX_DIM*k+i] = V1->Val[MAX_DIM*k+i] - V2->Val[MAX_DIM*k+i]

void  Cal_SubstractValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int           i, k;
  int           i1, i2;
  struct Value  A;

  GetDP_Begin("Cal_SubstractValue");

  if (V1->Type == SCALAR && V2->Type == SCALAR) {
    if (Current.NbrHar == 1) {
      SUB(0);
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CSUB(0);
      }
    }
    R->Type = SCALAR ;
  }

  else if ((V1->Type == VECTOR      && V2->Type == VECTOR) ||
	   (V1->Type == TENSOR_DIAG && V2->Type == TENSOR_DIAG)) {
    if (Current.NbrHar == 1) {
      SUB(0); SUB(1); SUB(2); 
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CSUB(0); CSUB(1); CSUB(2); 
      }
    }
    R->Type = V1->Type ;
  }

  else if (V1->Type == TENSOR_SYM && V2->Type == TENSOR_SYM) {
    if (Current.NbrHar == 1) {
      SUB(0); SUB(1); SUB(2); SUB(3); SUB(4); SUB(5);
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CSUB(0); CSUB(1); CSUB(2); CSUB(3); CSUB(4); CSUB(5);
      }
    }
    R->Type = TENSOR_SYM;
  }

  else if (V1->Type == TENSOR && V2->Type == TENSOR) {
    if (Current.NbrHar == 1) {
      SUB(0); SUB(1); SUB(2); SUB(3); SUB(4); SUB(5); SUB(6); SUB(7); SUB(8);
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	CSUB(0); CSUB(1); CSUB(2); CSUB(3); CSUB(4); CSUB(5); CSUB(6); CSUB(7); CSUB(8);
      }
    }
    R->Type = TENSOR;
  }

  else if ((V1->Type == TENSOR     && V2->Type == TENSOR_SYM) ||
	   (V1->Type == TENSOR     && V2->Type == TENSOR_DIAG)||
	   (V1->Type == TENSOR_SYM && V2->Type == TENSOR_DIAG)){
    A.Type = V1->Type;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      for(i=0 ; i<9 ; i++){
	i1 = (V1->Type==TENSOR)?i:TENSOR_SYM_MAP[i];
	i2 = (V2->Type==TENSOR_SYM)?TENSOR_SYM_MAP[i]:TENSOR_DIAG_MAP[i];
	A.Val[MAX_DIM*k+i1] = 
	  V1->Val[MAX_DIM*k+i1] - ((i2<0)?0.0:V2->Val[MAX_DIM*k+i2]);
      }
    }
    Cal_CopyValue(&A,R);
  }
  
  else if ((V1->Type == TENSOR_SYM  && V2->Type == TENSOR)      ||
	   (V1->Type == TENSOR_DIAG && V2->Type == TENSOR)      ||
	   (V1->Type == TENSOR_DIAG && V2->Type == TENSOR_SYM)){
    A.Type = V2->Type;
    for (k = 0 ; k < Current.NbrHar ; k++) {
      for(i=0 ; i<9 ; i++){
	i1 = (V1->Type==TENSOR_SYM)?TENSOR_SYM_MAP[i]:TENSOR_DIAG_MAP[i];
	i2 = (V2->Type==TENSOR)?i:TENSOR_SYM_MAP[i];
	A.Val[MAX_DIM*k+i2] = 
	  ((i1<0)?0.0:V1->Val[MAX_DIM*k+i1]) - V2->Val[MAX_DIM*k+i2];
      }
    }
    Cal_CopyValue(&A,R);
  }

  else {
    Msg(ERROR, "Substraction of different quantities: %s - %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

#undef SUB
#undef CSUB


/* ------------------------------------------------------------------------ 
   R <- V1 * V2 
   ------------------------------------------------------------------------ */

#define CMULT(a,b,c)								\
  Cal_ComplexProduct(&(V1->Val[MAX_DIM*k+a]), &(V2->Val[MAX_DIM*k+b]), tmp[c])

#define CPUT(a)					\
  R->Val[MAX_DIM* k   +a] = tmp[a][0] ;		\
  R->Val[MAX_DIM*(k+1)+a] = tmp[a][MAX_DIM]

#define CPUT3(a,b,c,d)								\
  R->Val[MAX_DIM* k   +d] = tmp[a][0]      +tmp[b][0]      +tmp[c][0] ;		\
  R->Val[MAX_DIM*(k+1)+d] = tmp[a][MAX_DIM]+tmp[b][MAX_DIM]+tmp[c][MAX_DIM] 

void  Cal_ProductValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int k;
  
  GetDP_Begin("Cal_ProductValue");

  if (V1->Type == SCALAR && V2->Type == SCALAR) {
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]*V2->Val[0];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0);
	CPUT(0);
      }
    }
    R->Type = SCALAR ;
  }
  
  else if (V1->Type == SCALAR && (V2->Type == VECTOR || V2->Type == TENSOR_DIAG)) {
    if (Current.NbrHar == 1) {
      a0 = V1->Val[0] ;
      R->Val[0] = a0 * V2->Val[0] ;
      R->Val[1] = a0 * V2->Val[1] ;
      R->Val[2] = a0 * V2->Val[2] ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(0,1,1); CMULT(0,2,2);
	CPUT(0); CPUT(1); CPUT(2); 
      }
    }
    R->Type = V2->Type ;
  }
  
  else if (V1->Type == SCALAR && V2->Type == TENSOR_SYM) {
    if (Current.NbrHar == 1) {
      a0 = V1->Val[0] ;
      R->Val[0] = a0 * V2->Val[0] ;
      R->Val[1] = a0 * V2->Val[1] ;
      R->Val[2] = a0 * V2->Val[2] ;
      R->Val[3] = a0 * V2->Val[3] ;
      R->Val[4] = a0 * V2->Val[4] ;
      R->Val[5] = a0 * V2->Val[5] ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(0,1,1); CMULT(0,2,2); CMULT(0,3,3); CMULT(0,4,4); CMULT(0,5,5);
	CPUT(0); CPUT(1); CPUT(2); CPUT(3); CPUT(4); CPUT(5); 
      }
    }
    R->Type = TENSOR_SYM ;
  }
  
  else if (V1->Type == SCALAR && V2->Type == TENSOR) {
    if (Current.NbrHar == 1) {
      a0 = V1->Val[0] ;
      R->Val[0] = a0 * V2->Val[0] ;
      R->Val[1] = a0 * V2->Val[1] ;
      R->Val[2] = a0 * V2->Val[2] ;
      R->Val[3] = a0 * V2->Val[3] ;
      R->Val[4] = a0 * V2->Val[4] ;
      R->Val[5] = a0 * V2->Val[5] ;
      R->Val[6] = a0 * V2->Val[6] ;
      R->Val[7] = a0 * V2->Val[7] ;
      R->Val[8] = a0 * V2->Val[8] ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(0,1,1); CMULT(0,2,2); CMULT(0,3,3); CMULT(0,4,4); CMULT(0,5,5);
	CMULT(0,6,6); CMULT(0,7,7); CMULT(0,8,8);
	CPUT(0); CPUT(1); CPUT(2); CPUT(3); CPUT(4); CPUT(5); 
	CPUT(6); CPUT(7); CPUT(8);
      }
    }
    R->Type = TENSOR ;
  }
  
  else if ((V1->Type == VECTOR || V1->Type == TENSOR_DIAG) && V2->Type == SCALAR) {
    if (Current.NbrHar == 1) {
      a0 = V2->Val[0] ;
      R->Val[0] = V1->Val[0] * a0 ;
      R->Val[1] = V1->Val[1] * a0 ;
      R->Val[2] = V1->Val[2] * a0 ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,0,1); CMULT(2,0,2);
	CPUT(0); CPUT(1); CPUT(2); 
      }
    }
    R->Type = V1->Type ;
  }
  
  else if (V1->Type == TENSOR_SYM && V2->Type == SCALAR) {
    if (Current.NbrHar == 1) {
      a0 = V2->Val[0] ;
      R->Val[0] = V1->Val[0] * a0 ;
      R->Val[1] = V1->Val[1] * a0 ;
      R->Val[2] = V1->Val[2] * a0 ;
      R->Val[3] = V1->Val[3] * a0 ;
      R->Val[4] = V1->Val[4] * a0 ;
      R->Val[5] = V1->Val[5] * a0 ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,0,1); CMULT(2,0,2); CMULT(3,0,3); CMULT(4,0,4); CMULT(5,0,5);
	CPUT(0); CPUT(1); CPUT(2); CPUT(3); CPUT(4); CPUT(5); 
      }
    }
    R->Type = TENSOR_SYM ;
  }

  else if (V1->Type == TENSOR && V2->Type == SCALAR) {
    if (Current.NbrHar == 1) {
      a0 = V2->Val[0] ;
      R->Val[0] = V1->Val[0] * a0 ;
      R->Val[1] = V1->Val[1] * a0 ;
      R->Val[2] = V1->Val[2] * a0 ;
      R->Val[3] = V1->Val[3] * a0 ;
      R->Val[4] = V1->Val[4] * a0 ;
      R->Val[5] = V1->Val[5] * a0 ;
      R->Val[6] = V1->Val[6] * a0 ;
      R->Val[7] = V1->Val[7] * a0 ;
      R->Val[8] = V1->Val[8] * a0 ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,0,1); CMULT(2,0,2); CMULT(3,0,3); CMULT(4,0,4); CMULT(5,0,5);
	CMULT(6,0,6); CMULT(7,0,7); CMULT(8,0,8);
	CPUT(0); CPUT(1); CPUT(2); CPUT(3); CPUT(4); CPUT(5); 
	CPUT(6); CPUT(7); CPUT(8); 
      }
    }
    R->Type = TENSOR ;
  }
  
  /* Scalar Product. See 'Cal_CrossProductValue' for the Vector Product */
  
  else if (V1->Type == VECTOR && V2->Type == VECTOR) {
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0] * V2->Val[0] + 
                  V1->Val[1] * V2->Val[1] + 
	          V1->Val[2] * V2->Val[2] ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,1,1); CMULT(2,2,2); 
	CPUT3(0,1,2,0);
      }
    }
    R->Type = SCALAR ;
  }
  
  
  else if ( (V1->Type == TENSOR_DIAG && V2->Type == VECTOR) ||
	    (V2->Type == TENSOR_DIAG && V1->Type == VECTOR) ) { /* WARNING WARNING! */
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]*V2->Val[0];      
      R->Val[1] = V1->Val[1]*V2->Val[1];      
      R->Val[2] = V1->Val[2]*V2->Val[2];      
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,1,1); CMULT(2,2,2); 
	CPUT(0); CPUT(1); CPUT(2); 
      }
    }
    R->Type = VECTOR ;
  }

  else if (V1->Type == TENSOR_SYM && V2->Type == VECTOR) {
    if (Current.NbrHar == 1) {
      a1[0] = V1->Val[0]*V2->Val[0] + V1->Val[1]*V2->Val[1] + V1->Val[2]*V2->Val[2];
      a1[1] = V1->Val[1]*V2->Val[0] + V1->Val[3]*V2->Val[1] + V1->Val[4]*V2->Val[2];
      a1[2] = V1->Val[2]*V2->Val[0] + V1->Val[4]*V2->Val[1] + V1->Val[5]*V2->Val[2];
      R->Val[0] = a1[0];
      R->Val[1] = a1[1];
      R->Val[2] = a1[2];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,1,1); CMULT(2,2,2);
	CMULT(1,0,3); CMULT(3,1,4); CMULT(4,2,5);
	CMULT(2,0,6); CMULT(4,1,7); CMULT(5,2,8);
	CPUT3(0,1,2,0);
	CPUT3(3,4,5,1);
	CPUT3(6,7,8,2);
      }
    }
    R->Type = VECTOR ;
  }

  else if (V1->Type == TENSOR && V2->Type == VECTOR) {
    if (Current.NbrHar == 1) {
      a1[0] = V1->Val[0]*V2->Val[0] + V1->Val[1]*V2->Val[1] + V1->Val[2]*V2->Val[2];
      a1[1] = V1->Val[3]*V2->Val[0] + V1->Val[4]*V2->Val[1] + V1->Val[5]*V2->Val[2];
      a1[2] = V1->Val[6]*V2->Val[0] + V1->Val[7]*V2->Val[1] + V1->Val[8]*V2->Val[2];
      R->Val[0] = a1[0];
      R->Val[1] = a1[1];
      R->Val[2] = a1[2];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,1,1); CMULT(2,2,2);
	CMULT(3,0,3); CMULT(4,1,4); CMULT(5,2,5);
	CMULT(6,0,6); CMULT(7,1,7); CMULT(8,2,8);
	CPUT3(0,1,2,0);
	CPUT3(3,4,5,1);
	CPUT3(6,7,8,2);
      }
    }
    R->Type = VECTOR ;
  }
  
  else if (V1->Type == TENSOR_DIAG && V2->Type == TENSOR_DIAG) {
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]*V2->Val[0];      
      R->Val[1] = V1->Val[1]*V2->Val[1];      
      R->Val[2] = V1->Val[2]*V2->Val[2];      
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0); CMULT(1,1,1); CMULT(2,2,2);
	CPUT(0); CPUT(1); CPUT(2);
      }
    }
    R->Type = TENSOR_DIAG;
  }

  else if (V1->Type == TENSOR_SYM && V2->Type == TENSOR_SYM) {
    if (Current.NbrHar == 1) {
      a1[0] = V1->Val[0]*V2->Val[0] + V1->Val[1]*V2->Val[1] + V1->Val[2]*V2->Val[2];
      a1[1] = V1->Val[0]*V2->Val[1] + V1->Val[1]*V2->Val[2] + V1->Val[2]*V2->Val[4];
      a1[2] = V1->Val[0]*V2->Val[2] + V1->Val[1]*V2->Val[4] + V1->Val[2]*V2->Val[5];
      a1[3] = V1->Val[1]*V2->Val[0] + V1->Val[3]*V2->Val[1] + V1->Val[4]*V2->Val[2];
      a1[4] = V1->Val[1]*V2->Val[1] + V1->Val[3]*V2->Val[2] + V1->Val[4]*V2->Val[4];
      a1[5] = V1->Val[1]*V2->Val[2] + V1->Val[3]*V2->Val[4] + V1->Val[4]*V2->Val[5];
      a1[6] = V1->Val[2]*V2->Val[0] + V1->Val[4]*V2->Val[1] + V1->Val[5]*V2->Val[2];
      a1[7] = V1->Val[2]*V2->Val[1] + V1->Val[4]*V2->Val[2] + V1->Val[5]*V2->Val[4];
      a1[8] = V1->Val[2]*V2->Val[2] + V1->Val[4]*V2->Val[4] + V1->Val[5]*V2->Val[5];
      R->Val[0] = a1[0];  R->Val[1] = a1[1];  R->Val[2] = a1[2];
      R->Val[3] = a1[3];  R->Val[4] = a1[4];  R->Val[5] = a1[5];
      R->Val[6] = a1[6];  R->Val[7] = a1[7];  R->Val[8] = a1[8];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0);  CMULT(1,1,1);  CMULT(2,2,2);
	CMULT(0,1,3);  CMULT(1,2,4);  CMULT(2,4,5);
	CMULT(0,2,6);  CMULT(1,4,7);  CMULT(2,5,8);
	CMULT(1,0,9);  CMULT(3,1,10); CMULT(4,2,11);
	CMULT(1,1,12); CMULT(3,2,13); CMULT(4,4,14);
	CMULT(1,2,15); CMULT(3,4,16); CMULT(4,5,17);
	CMULT(2,0,18); CMULT(4,1,19); CMULT(5,2,20);
	CMULT(2,1,21); CMULT(4,2,22); CMULT(5,4,23);
	CMULT(2,2,24); CMULT(4,4,25); CMULT(5,5,26);
	CPUT3(0,1,2,0);    CPUT3(3,4,5,1);    CPUT3(6,7,8,2);
	CPUT3(9,10,11,3);  CPUT3(12,13,14,4); CPUT3(15,16,17,5);
	CPUT3(18,19,20,6); CPUT3(21,22,23,7); CPUT3(24,25,26,8);
      }
    }
    R->Type = TENSOR;
  }

  else if (V1->Type == TENSOR && V2->Type == TENSOR) {
    if (Current.NbrHar == 1) {
      a1[0] = V1->Val[0]*V2->Val[0] + V1->Val[1]*V2->Val[3] + V1->Val[2]*V2->Val[6];
      a1[1] = V1->Val[0]*V2->Val[1] + V1->Val[1]*V2->Val[4] + V1->Val[2]*V2->Val[7];
      a1[2] = V1->Val[0]*V2->Val[2] + V1->Val[1]*V2->Val[5] + V1->Val[2]*V2->Val[8];
      a1[3] = V1->Val[3]*V2->Val[0] + V1->Val[4]*V2->Val[3] + V1->Val[5]*V2->Val[6];
      a1[4] = V1->Val[3]*V2->Val[1] + V1->Val[4]*V2->Val[4] + V1->Val[5]*V2->Val[7];
      a1[5] = V1->Val[3]*V2->Val[2] + V1->Val[4]*V2->Val[5] + V1->Val[5]*V2->Val[8];
      a1[6] = V1->Val[6]*V2->Val[0] + V1->Val[7]*V2->Val[3] + V1->Val[8]*V2->Val[6];
      a1[7] = V1->Val[6]*V2->Val[1] + V1->Val[7]*V2->Val[4] + V1->Val[8]*V2->Val[7];
      a1[8] = V1->Val[6]*V2->Val[2] + V1->Val[7]*V2->Val[5] + V1->Val[8]*V2->Val[8];
      R->Val[0] = a1[0];  R->Val[1] = a1[1];  R->Val[2] = a1[2];
      R->Val[3] = a1[3];  R->Val[4] = a1[4];  R->Val[5] = a1[5];
      R->Val[6] = a1[6];  R->Val[7] = a1[7];  R->Val[8] = a1[8];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CMULT(0,0,0);  CMULT(1,3,1);  CMULT(2,6,2);
	CMULT(0,1,3);  CMULT(1,4,4);  CMULT(2,7,5);
	CMULT(0,2,6);  CMULT(1,5,7);  CMULT(2,8,8);
	CMULT(3,0,9);  CMULT(4,3,10); CMULT(5,6,11);
	CMULT(3,1,12); CMULT(4,4,13); CMULT(5,7,14);
	CMULT(3,2,15); CMULT(4,5,16); CMULT(5,8,17);
	CMULT(6,0,18); CMULT(7,3,19); CMULT(8,6,20);
	CMULT(6,1,21); CMULT(7,4,22); CMULT(8,7,23);
	CMULT(6,2,24); CMULT(7,5,25); CMULT(8,8,26);
	CPUT3(0,1,2,0);    CPUT3(3,4,5,1);    CPUT3(6,7,8,2);
	CPUT3(9,10,11,3);  CPUT3(12,13,14,4); CPUT3(15,16,17,5);
	CPUT3(18,19,20,6); CPUT3(21,22,23,7); CPUT3(24,25,26,8);
      }
    }
    R->Type = TENSOR;
  }

  else if (V1->Type == TENSOR_MH && V2->Type == VECTOR) {
    MH_Cal_ProductValue(V1, V2, R) ;
    R->Type = VECTOR ;
  }

  /* a faire: differents tenseurs entre eux */

  else {
    Msg(ERROR, "Product of non adapted quantities: %s * %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

#undef CMULT
#undef CPUT
#undef CPUT3


/* ------------------------------------------------------------------------ 
   R <- V1 / V2 
   ------------------------------------------------------------------------ */

#define CDIVI(a,b,c) 								\
  Cal_ComplexDivision(&(V1->Val[MAX_DIM*k+a]), &(V2->Val[MAX_DIM*k+b]), tmp[c])

#define CPUT(a) 				\
  R->Val[MAX_DIM* k   +a] = tmp[a][0] ; 	\
  R->Val[MAX_DIM*(k+1)+a] = tmp[a][MAX_DIM]

void  Cal_DivideValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int  k ;
  struct Value V3 ;

  GetDP_Begin("Cal_DivideValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]/V2->Val[0];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CDIVI(0,0,0);
	CPUT(0);
      }
    }
    R->Type = SCALAR ;
  }

  else if ( (V1->Type == VECTOR || V1->Type == TENSOR_DIAG) && (V2->Type == SCALAR) ) {
    if (Current.NbrHar == 1) {
      a0 = V2->Val[0] ;
      R->Val[0] = V1->Val[0] / a0 ;
      R->Val[1] = V1->Val[1] / a0 ;
      R->Val[2] = V1->Val[2] / a0 ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CDIVI(0,0,0); CDIVI(1,0,1); CDIVI(2,0,2);
	CPUT(0); CPUT(1); CPUT(2);	
      }
    }
    R->Type = V1->Type ;
  }

  else if ( (V1->Type == TENSOR_SYM) && (V2->Type == SCALAR) ) {
    if (Current.NbrHar == 1) {
      a0 = V2->Val[0] ;
      R->Val[0] = V1->Val[0] / a0 ;
      R->Val[1] = V1->Val[1] / a0 ;
      R->Val[2] = V1->Val[2] / a0 ;
      R->Val[3] = V1->Val[3] / a0 ;
      R->Val[4] = V1->Val[4] / a0 ;
      R->Val[5] = V1->Val[5] / a0 ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CDIVI(0,0,0); CDIVI(1,0,1); CDIVI(2,0,2); CDIVI(3,0,3); CDIVI(4,0,4); CDIVI(5,0,5);
	CPUT(0); CPUT(1); CPUT(2); CPUT(3); CPUT(4); CPUT(5);
      }
    }
    R->Type = TENSOR_SYM ;
  }

  else if ( (V1->Type == TENSOR) && (V2->Type == SCALAR) ) {
    if (Current.NbrHar == 1) {
      a0 = V2->Val[0] ;
      R->Val[0] = V1->Val[0] / a0 ;
      R->Val[1] = V1->Val[1] / a0 ;
      R->Val[2] = V1->Val[2] / a0 ;
      R->Val[3] = V1->Val[3] / a0 ;
      R->Val[4] = V1->Val[4] / a0 ;
      R->Val[5] = V1->Val[5] / a0 ;
      R->Val[6] = V1->Val[6] / a0 ;
      R->Val[7] = V1->Val[7] / a0 ;
      R->Val[8] = V1->Val[8] / a0 ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	CDIVI(0,0,0); CDIVI(1,0,1); CDIVI(2,0,2); CDIVI(3,0,3); CDIVI(4,0,4); CDIVI(5,0,5);	
	CDIVI(6,0,6); CDIVI(7,0,7); CDIVI(8,0,8);
	CPUT(0); CPUT(1); CPUT(2); CPUT(3); CPUT(4); CPUT(5);
	CPUT(6); CPUT(7); CPUT(8);
      }
    }
    R->Type = TENSOR ;
  }

  else if ( (V1->Type == SCALAR) && 
	    (V2->Type == TENSOR || V2->Type == TENSOR_SYM || V2->Type == TENSOR_DIAG) ) {
    Cal_InvertValue(V2,&V3);
    Cal_ProductValue(V1,&V3,R);
  }

  else {
    Msg(ERROR, "Division of non adapted quantities: %s / %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

#undef CDIVI
#undef CPUT

/* ------------------------------------------------------------------------ 
   R <- V1 % V2 
   ------------------------------------------------------------------------ */

void  Cal_ModuloValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int k ;

  GetDP_Begin("Cal_ModuloValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      R->Val[MAX_DIM* k   ] = (int)V1->Val[MAX_DIM*k] % (int)V2->Val[MAX_DIM*k] ;
      R->Val[MAX_DIM*(k+1)] = 0. ;
    }
    R->Type = SCALAR ;
  }

  else if ( (V1->Type == VECTOR) && (V2->Type == SCALAR) ) {
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      R->Val[MAX_DIM* k   ]   = (int)V1->Val[MAX_DIM*k  ] % (int)V2->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM* k   +1] = (int)V1->Val[MAX_DIM*k+1] % (int)V2->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM* k   +2] = (int)V1->Val[MAX_DIM*k+2] % (int)V2->Val[MAX_DIM*k+2] ;
      R->Val[MAX_DIM*(k+1)]   = 0. ;
      R->Val[MAX_DIM*(k+1)+1] = 0. ;
      R->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
    R->Type = VECTOR ;
  }

  else {
    Msg(ERROR, "Modulo of non adapted quantities: %s %% %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 X V2 
   ------------------------------------------------------------------------ */

void  Cal_CrossProductValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int k ;

  GetDP_Begin("Cal_CrossProductValue");

  if ( (V1->Type == VECTOR) && (V2->Type == VECTOR) ) {
    if (Current.NbrHar == 1) {
      a1[0] = V1->Val[1] * V2->Val[2] - V1->Val[2] * V2->Val[1] ;
      a1[1] = V1->Val[2] * V2->Val[0] - V1->Val[0] * V2->Val[2] ;
      a1[2] = V1->Val[0] * V2->Val[1] - V1->Val[1] * V2->Val[0] ;
      R->Val[0] = a1[0] ;  R->Val[1] = a1[1] ;  R->Val[2] = a1[2] ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	Cal_ComplexProduct(&(V1->Val[MAX_DIM*k+1]), &(V2->Val[MAX_DIM*k+2]), a1) ;
	Cal_ComplexProduct(&(V1->Val[MAX_DIM*k+2]), &(V2->Val[MAX_DIM*k+1]), a2) ;
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;

	Cal_ComplexProduct(&(V1->Val[MAX_DIM*k+2]), &(V2->Val[MAX_DIM*k  ]), a1) ;
	Cal_ComplexProduct(&(V1->Val[MAX_DIM*k  ]), &(V2->Val[MAX_DIM*k+2]), a2) ;
	b2[0] = a1[0] - a2[0] ;  b2[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;

	Cal_ComplexProduct(&(V1->Val[MAX_DIM*k  ]), &(V2->Val[MAX_DIM*k+1]), a1) ;
	Cal_ComplexProduct(&(V1->Val[MAX_DIM*k+1]), &(V2->Val[MAX_DIM*k  ]), a2) ;
	b3[0] = a1[0] - a2[0] ;  b3[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;

	R->Val[MAX_DIM*k  ] = b1[0] ;  R->Val[MAX_DIM*(k+1)  ] = b1[MAX_DIM] ;
	R->Val[MAX_DIM*k+1] = b2[0] ;  R->Val[MAX_DIM*(k+1)+1] = b2[MAX_DIM] ;
	R->Val[MAX_DIM*k+2] = b3[0] ;  R->Val[MAX_DIM*(k+1)+2] = b3[MAX_DIM] ;
      }
    }
    R->Type = VECTOR ;
  }

  else {
    Msg(ERROR, "Cross product of non vector quantities: %s /\\ %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ 
   R <- V1 ^ V2 
   ------------------------------------------------------------------------ */

void  Cal_PowerValue (struct Value * V1, struct Value * V2, struct Value * R) {
  int    k;
  double arg, abs ;

  GetDP_Begin("Cal_PowerValue");

  if ( V1->Type == SCALAR && V2->Type == SCALAR ){

    if(V2->Val[0] == 1.){
      Cal_CopyValue(V1,R) ;
    }
    if(V2->Val[0] == 2.){
      if (Current.NbrHar == 1) {
	R->Val[0] = DSQU(V1->Val[0]) ;
      }
      else{
	for (k = 0 ; k < Current.NbrHar ; k+=2) {
	  Cal_ComplexProduct(&(V1->Val[MAX_DIM*k]), &(V1->Val[MAX_DIM*k]), a1) ;	  
	  R->Val[MAX_DIM* k   ] = a1[0];
	  R->Val[MAX_DIM*(k+1)] = a1[MAX_DIM];
	}
      }
    }
    else{
      if (Current.NbrHar == 1) {
	R->Val[0] = pow(V1->Val[0],V2->Val[0]) ;
      }
      else{
	/* Msg(WARNING, "Power > 2 not tested for Complex"); */
	for (k = 0 ; k < Current.NbrHar ; k+=2) {
	  abs = pow(sqrt(DSQU(V1->Val[MAX_DIM*k])+DSQU(V1->Val[MAX_DIM*(k+1)])), 
		    V2->Val[0]) ;
	  arg = atan2(V1->Val[MAX_DIM*(k+1)], V1->Val[MAX_DIM*k]) ;
	  R->Val[MAX_DIM* k   ] = abs * cos(V2->Val[0] * arg) ;
	  R->Val[MAX_DIM*(k+1)] = abs * sin(V2->Val[0] * arg) ;
	}
      }
    }
    R->Type = SCALAR ;
  }

  else {
    Msg(ERROR, "Power of non scalar quantities: %s ^ %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ 
   R <- V1 < V2 
   ------------------------------------------------------------------------ */

void  Cal_LessValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_LessValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] < V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s < %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 <= V2 
   ------------------------------------------------------------------------ */

void  Cal_LessOrEqualValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_LessOrEqualValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] <= V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s <= %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 > V2 
   ------------------------------------------------------------------------ */

void  Cal_GreaterValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_GreaterValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] > V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s > %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 >= V2 
   ------------------------------------------------------------------------ */

void  Cal_GreaterOrEqualValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_GreaterOrEqualValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] >= V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s >= %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 == V2 
   ------------------------------------------------------------------------ */

void  Cal_EqualValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_EqualValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] == V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s == %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 != V2 
   ------------------------------------------------------------------------ */

void  Cal_NotEqualValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_NotEqualValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] != V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s != %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ 
   R <- V1 ~= V2 
   ------------------------------------------------------------------------ */

void  Cal_ApproxEqualValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_ApproxEqualValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (fabs(V1->Val[0] - V2->Val[0]) < 1.e-10) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Comparison of non scalar quantities: %s ~= %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ 
   R <- V1 && V2 
   ------------------------------------------------------------------------ */

void  Cal_AndValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_AndValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] && V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "And of non scalar quantities: %s && %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1 || V2 
   ------------------------------------------------------------------------ */

void  Cal_OrValue (struct Value * V1, struct Value * V2, struct Value * R) {

  GetDP_Begin("Cal_OrValue");

  if ( (V1->Type == SCALAR) && (V2->Type == SCALAR) ) {
    R->Val[0] = (V1->Val[0] || V2->Val[0]) ;
    R->Type = SCALAR ;
  }
  else {
    Msg(ERROR, "Or of non scalar quantities: %s || %s",
	Get_StringForDefine(Field_Type, V1->Type),
	Get_StringForDefine(Field_Type, V2->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- -R 
   ------------------------------------------------------------------------ */

void  Cal_NegValue (struct Value * R) {
  int k ;

  GetDP_Begin("Cal_NegValue");

  switch(R->Type) {
  case SCALAR :
    for (k = 0 ; k < Current.NbrHar ; k++){
      R->Val[MAX_DIM*k] = -R->Val[MAX_DIM*k] ;
    }
    break;
  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < Current.NbrHar ; k++){
      R->Val[MAX_DIM*k  ] = -R->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM*k+1] = -R->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM*k+2] = -R->Val[MAX_DIM*k+2] ;
    }
    break;
  case TENSOR_SYM :
    for (k = 0 ; k < Current.NbrHar ; k++){
      R->Val[MAX_DIM*k  ] = -R->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM*k+1] = -R->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM*k+2] = -R->Val[MAX_DIM*k+2] ;
      R->Val[MAX_DIM*k+3] = -R->Val[MAX_DIM*k+3] ;
      R->Val[MAX_DIM*k+4] = -R->Val[MAX_DIM*k+4] ;
      R->Val[MAX_DIM*k+5] = -R->Val[MAX_DIM*k+5] ;
    }
    break;
  case TENSOR :
    for (k = 0 ; k < Current.NbrHar ; k++){
      R->Val[MAX_DIM*k  ] = -R->Val[MAX_DIM*k  ] ;
      R->Val[MAX_DIM*k+1] = -R->Val[MAX_DIM*k+1] ;
      R->Val[MAX_DIM*k+2] = -R->Val[MAX_DIM*k+2] ;
      R->Val[MAX_DIM*k+3] = -R->Val[MAX_DIM*k+3] ;
      R->Val[MAX_DIM*k+4] = -R->Val[MAX_DIM*k+4] ;
      R->Val[MAX_DIM*k+5] = -R->Val[MAX_DIM*k+5] ;
      R->Val[MAX_DIM*k+6] = -R->Val[MAX_DIM*k+6] ;
      R->Val[MAX_DIM*k+7] = -R->Val[MAX_DIM*k+7] ;
      R->Val[MAX_DIM*k+8] = -R->Val[MAX_DIM*k+8] ;
    }
    break;
  default :
    Msg(ERROR, "Wrong Argument Type Quantity for Operator (-)");
    break;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- !R 
   ------------------------------------------------------------------------ */

void  Cal_NotValue (struct Value * R) {

  GetDP_Begin("Cal_NotValue");

  if (R->Type == SCALAR){
    R->Val[0] = !R->Val[0] ;
  }
  else {
    Msg(ERROR, "Negation of non scalar quantity: ! %s",
	Get_StringForDefine(Field_Type, R->Type));
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- V1^T 
   ------------------------------------------------------------------------ */

void Cal_TransposeValue(struct Value *V1, struct Value *R){
  int     k;

  GetDP_Begin("Cal_TransposeValue");

  switch(V1->Type){

  case TENSOR_DIAG :
  case TENSOR_SYM :
    Cal_CopyValue(V1,R);
    break;

  case TENSOR :
    if(Current.NbrHar==1){      
      R->Val[0] = V1->Val[0]; 
      R->Val[4] = V1->Val[4]; 
      R->Val[8] = V1->Val[8];
      a1[0] = V1->Val[1];
      a1[1] = V1->Val[2];
      a1[2] = V1->Val[5];
      R->Val[1] = V1->Val[3]; 
      R->Val[2] = V1->Val[6];
      R->Val[5] = V1->Val[7];
      R->Val[3] = a1[0];
      R->Val[6] = a1[1];
      R->Val[7] = a1[2];
    }
    else{
      for(k=0 ; k<Current.NbrHar ; k+=1){
	R->Val[MAX_DIM*k+0] = V1->Val[MAX_DIM*k+0]; 
	R->Val[MAX_DIM*k+4] = V1->Val[MAX_DIM*k+4]; 
	R->Val[MAX_DIM*k+8] = V1->Val[MAX_DIM*k+8];
	a1[0] = V1->Val[MAX_DIM*k+1];
	a1[1] = V1->Val[MAX_DIM*k+2];
	a1[2] = V1->Val[MAX_DIM*k+5];
	R->Val[MAX_DIM*k+1] = V1->Val[MAX_DIM*k+3]; 
	R->Val[MAX_DIM*k+2] = V1->Val[MAX_DIM*k+6];
	R->Val[MAX_DIM*k+5] = V1->Val[MAX_DIM*k+7];
	R->Val[MAX_DIM*k+3] = a1[0];
	R->Val[MAX_DIM*k+6] = a1[1];
	R->Val[MAX_DIM*k+7] = a1[2];
      }
    }
    break;    
    
  default:
    Msg(ERROR, "Wrong Argument Type in 'Cal_TransposeValue'");
    break;
  }  
  
  GetDP_End ;
}

/* ------------------------------------------------------------------------ 
   R <- Trace(V1) 
   ------------------------------------------------------------------------ */

void Cal_TraceValue(struct Value *V1, struct Value *R){
  int     k;

  GetDP_Begin("Cal_TraceValue");

  switch(V1->Type){

  case TENSOR_DIAG :
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]+V1->Val[1]+V1->Val[2];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	R->Val[MAX_DIM*k] = V1->Val[MAX_DIM*k  ]+
	                    V1->Val[MAX_DIM*k+1]+
	                    V1->Val[MAX_DIM*k+2];
      }
    }
    R->Type = SCALAR ;
    break;

  case TENSOR_SYM :
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]+V1->Val[3]+V1->Val[5];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	R->Val[MAX_DIM*k] = V1->Val[MAX_DIM*k  ]+
	                    V1->Val[MAX_DIM*k+3]+
	                    V1->Val[MAX_DIM*k+5];
      }
    }
    R->Type = SCALAR ;
    break;

  case TENSOR :
    if (Current.NbrHar == 1) {
      R->Val[0] = V1->Val[0]+V1->Val[4]+V1->Val[8];
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k++) {
	R->Val[MAX_DIM*k] = V1->Val[MAX_DIM*k  ]+
	                    V1->Val[MAX_DIM*k+4]+
	                    V1->Val[MAX_DIM*k+8];
      }
    }
    R->Type = SCALAR ;
    break;
    
  default:
    Msg(ERROR, "Wrong Argument Type in 'Cal_TraceValue'");
    break;
  }  

  GetDP_End ;  
}

/* ------------------------------------------------------------------------ 
   R <- V1^T * V2 * V1  ,  V1 real 
   ------------------------------------------------------------------------ */

#define A0  V1->Val[0]
#define A1  V1->Val[1]
#define A2  V1->Val[2]
#define A3  V1->Val[3]
#define A4  V1->Val[4]
#define A5  V1->Val[5]
#define A6  V1->Val[6]
#define A7  V1->Val[7]
#define A8  V1->Val[8]

void Cal_RotateValue(struct Value *V1, struct Value *V2, struct Value *R){
  int           k;
  double        t0,t1,t2,t3,t4,t5,t6,t7,t8;
  struct Value  A;

  GetDP_Begin("Cal_RotateValue");

  switch(V2->Type){

  case VECTOR :
    if(Current.NbrHar == 1){
#define B0  V2->Val[0]
#define B1  V2->Val[1]
#define B2  V2->Val[2]
      A.Val[0]= A0*B0+A1*B1+A2*B2;
      A.Val[1]= A3*B0+A4*B1+A5*B2;
      A.Val[2]= A6*B0+A7*B1+A8*B2;
      A.Type = VECTOR;
      Cal_CopyValue(&A,R); 
#undef B0
#undef B1
#undef B2
    }
    else{ /* Attention: a modifier */
#define B0  V2->Val[0]
#define B1  V2->Val[1]
#define B2  V2->Val[2]
      A.Val[0]= A0*B0+A1*B1+A2*B2;
      A.Val[1]= A3*B0+A4*B1+A5*B2;
      A.Val[2]= A6*B0+A7*B1+A8*B2;
      A.Type = VECTOR;
      Cal_CopyValue(&A,R); 
#undef B0
#undef B1
#undef B2
    }
    break ;

  case TENSOR_DIAG :
    if(Current.NbrHar == 1){
#define B0  V2->Val[0]
#define B1  V2->Val[1]
#define B2  V2->Val[2]
      A.Val[0]= A0*A0*B0+A3*A3*B1+A6*A6*B2;
      A.Val[1]= A1*A0*B0+A3*A4*B1+A6*A7*B2;
      A.Val[2]= A2*A0*B0+A3*A5*B1+A6*A8*B2;
      A.Val[3]= A1*A0*B0+A3*A4*B1+A6*A7*B2;
      A.Val[4]= A1*A1*B0+A4*A4*B1+A7*A7*B2;
      A.Val[5]= A2*A1*B0+A4*A5*B1+A7*A8*B2;
      A.Val[6]= A2*A0*B0+A3*A5*B1+A6*A8*B2;
      A.Val[7]= A2*A1*B0+A4*A5*B1+A7*A8*B2;
      A.Val[8]= A2*A2*B0+A5*A5*B1+A8*A8*B2;
      A.Type = TENSOR;
      Cal_CopyValue(&A,R); 
#undef B0
#undef B1
#undef B2
    }
    else{
#define B0r  V2->Val[MAX_DIM* k   +0]
#define B1r  V2->Val[MAX_DIM* k   +1]
#define B2r  V2->Val[MAX_DIM* k   +2]
#define B0i  V2->Val[MAX_DIM*(k+1)+0]
#define B1i  V2->Val[MAX_DIM*(k+1)+1]
#define B2i  V2->Val[MAX_DIM*(k+1)+2]
#define AFFECT(i)				\
  A.Val[MAX_DIM* k   +i] = t0*B0r+t1*B1r+t2*B2r;	\
  A.Val[MAX_DIM*(k+1)+i] = t0*B0i+t1*B1i+t2*B2i
      for(k=0 ; k<Current.NbrHar ; k+=2){	
	t0=A0*A0; t1=A3*A3; t2=A6*A6; AFFECT(0);
	t0=A1*A0; t1=A3*A4; t2=A6*A7; AFFECT(1);
	t0=A2*A0; t1=A3*A5; t2=A6*A8; AFFECT(2);
	t0=A1*A0; t1=A3*A4; t2=A6*A7; AFFECT(3);
	t0=A1*A1; t1=A4*A4; t2=A7*A7; AFFECT(4);
	t0=A2*A1; t1=A4*A5; t2=A7*A8; AFFECT(5);
	t0=A2*A0; t1=A3*A5; t2=A6*A8; AFFECT(6);
	t0=A2*A1; t1=A4*A5; t2=A7*A8; AFFECT(7);
	t0=A2*A2; t1=A5*A5; t2=A8*A8; AFFECT(8);	
      }
      A.Type = TENSOR;
      Cal_CopyValue(&A,R); 
#undef B0r
#undef B1r
#undef B2r
#undef B0i
#undef B1i
#undef B2i
#undef AFFECT
    }    
    break;

#define COMPUTE_A										\
  A.Val[0]= A0*A0*B0+A0*A3*B3+A0*A6*B6+A3*A0*B1+A3*A3*B4+A3*A6*B7+A6*A0*B2+A6*A3*B5+A6*A6*B8;	\
  A.Val[1]= A1*A0*B0+A1*A3*B3+A1*A6*B6+A4*A0*B1+A4*A3*B4+A4*A6*B7+A7*A0*B2+A7*A3*B5+A7*A6*B8;	\
  A.Val[2]= A2*A0*B0+A2*A3*B3+A2*A6*B6+A5*A0*B1+A5*A3*B4+A5*A6*B7+A8*A0*B2+A8*A3*B5+A8*A6*B8;	\
  A.Val[3]= A1*A0*B0+A0*A4*B3+A0*A7*B6+A3*A1*B1+A4*A3*B4+A3*A7*B7+A6*A1*B2+A6*A4*B5+A7*A6*B8;	\
  A.Val[4]= A1*A1*B0+A1*A4*B3+A1*A7*B6+A4*A1*B1+A4*A4*B4+A4*A7*B7+A7*A1*B2+A7*A4*B5+A7*A7*B8;	\
  A.Val[5]= A2*A1*B0+A2*A4*B3+A2*A7*B6+A5*A1*B1+A5*A4*B4+A5*A7*B7+A8*A1*B2+A8*A4*B5+A8*A7*B8;	\
  A.Val[6]= A2*A0*B0+A0*A5*B3+A0*A8*B6+A3*A2*B1+A5*A3*B4+A3*A8*B7+A6*A2*B2+A6*A5*B5+A8*A6*B8;	\
  A.Val[7]= A2*A1*B0+A1*A5*B3+A1*A8*B6+A4*A2*B1+A5*A4*B4+A4*A8*B7+A7*A2*B2+A7*A5*B5+A8*A7*B8;	\
  A.Val[8]= A2*A2*B0+A2*A5*B3+A2*A8*B6+A5*A2*B1+A5*A5*B4+A5*A8*B7+A8*A2*B2+A8*A5*B5+A8*A8*B8

#define COMPLEX_COMPUTE_A									\
  t0=A0*A0; t1=A0*A3; t2=A0*A6; t3=A3*A0; t4=A3*A3; t5=A3*A6; t6=A6*A0; t7=A6*A3; t8=A6*A6; 	\
  AFFECT(0);											\
  t0=A1*A0; t1=A1*A3; t2=A1*A6; t3=A4*A0; t4=A4*A3; t5=A4*A6; t6=A7*A0; t7=A7*A3; t8=A7*A6; 	\
  AFFECT(1);											\
  t0=A2*A0; t1=A2*A3; t2=A2*A6; t3=A5*A0; t4=A5*A3; t5=A5*A6; t6=A8*A0; t7=A8*A3; t8=A8*A6; 	\
  AFFECT(2);											\
  t0=A1*A0; t1=A0*A4; t2=A0*A7; t3=A3*A1; t4=A4*A3; t5=A3*A7; t6=A6*A1; t7=A6*A4; t8=A7*A6; 	\
  AFFECT(3);											\
  t0=A1*A1; t1=A1*A4; t2=A1*A7; t3=A4*A1; t4=A4*A4; t5=A4*A7; t6=A7*A1; t7=A7*A4; t8=A7*A7; 	\
  AFFECT(4);											\
  t0=A2*A1; t1=A2*A4; t2=A2*A7; t3=A5*A1; t4=A5*A4; t5=A5*A7; t6=A8*A1; t7=A8*A4; t8=A8*A7; 	\
  AFFECT(5);											\
  t0=A2*A0; t1=A0*A5; t2=A0*A8; t3=A3*A2; t4=A5*A3; t5=A3*A8; t6=A6*A2; t7=A6*A5; t8=A8*A6; 	\
  AFFECT(6);											\
  t0=A2*A1; t1=A1*A5; t2=A1*A8; t3=A4*A2; t4=A5*A4; t5=A4*A8; t6=A7*A2; t7=A7*A5; t8=A8*A7; 	\
  AFFECT(7);											\
  t0=A2*A2; t1=A2*A5; t2=A2*A8; t3=A5*A2; t4=A5*A5; t5=A5*A8; t6=A8*A2; t7=A8*A5; t8=A8*A8; 	\
  AFFECT(8)
  
  case TENSOR_SYM :
    if(Current.NbrHar == 1){
#define B0  V2->Val[0]
#define B1  V2->Val[1]
#define B2  V2->Val[2]
#define B3  V2->Val[1]
#define B4  V2->Val[3]
#define B5  V2->Val[4]
#define B6  V2->Val[2]
#define B7  V2->Val[4]
#define B8  V2->Val[5]
      COMPUTE_A;
      A.Type = TENSOR;
      Cal_CopyValue(&A,R); 
#undef B0
#undef B1
#undef B2
#undef B3
#undef B4
#undef B5
#undef B6
#undef B7
#undef B8
    }
    else{
#define B0r  V2->Val[MAX_DIM* k   +0]
#define B1r  V2->Val[MAX_DIM* k   +1]
#define B2r  V2->Val[MAX_DIM* k   +2]
#define B3r  V2->Val[MAX_DIM* k   +3]
#define B4r  V2->Val[MAX_DIM* k   +4]
#define B5r  V2->Val[MAX_DIM* k   +5]
#define B6r  V2->Val[MAX_DIM* k   +6]
#define B7r  V2->Val[MAX_DIM* k   +7]
#define B8r  V2->Val[MAX_DIM* k   +8]
#define B0i  V2->Val[MAX_DIM*(k+1)+0]
#define B1i  V2->Val[MAX_DIM*(k+1)+1]
#define B2i  V2->Val[MAX_DIM*(k+1)+2]
#define B3i  V2->Val[MAX_DIM*(k+1)+3]
#define B4i  V2->Val[MAX_DIM*(k+1)+4]
#define B5i  V2->Val[MAX_DIM*(k+1)+5]
#define B6i  V2->Val[MAX_DIM*(k+1)+6]
#define B7i  V2->Val[MAX_DIM*(k+1)+7]
#define B8i  V2->Val[MAX_DIM*(k+1)+8]
#define AFFECT(i) 										\
  A.Val[MAX_DIM* k   +i] = t0*B0r+t1*B3r+t2*B6r+t3*B1r+t4*B4r+t5*B7r+t6*B2r+t7*B5r+t8*B8r; 	\
  A.Val[MAX_DIM*(k+1)+i] = t0*B0i+t1*B3i+t2*B6i+t3*B1i+t4*B4i+t5*B7i+t6*B2i+t7*B5i+t8*B8i
      for(k=0 ; k<Current.NbrHar ; k+=2){	
	COMPLEX_COMPUTE_A;
      }
      A.Type = TENSOR;
      Cal_CopyValue(&A,R); 
#undef B0r
#undef B1r
#undef B2r
#undef B3r
#undef B4r
#undef B5r
#undef B6r
#undef B7r
#undef B8r
#undef B0i
#undef B1i
#undef B2i
#undef B3i
#undef B4i
#undef B5i
#undef B6i
#undef B7i
#undef B8i
#undef AFFECT
    }
    break;

  case TENSOR :
    if(Current.NbrHar == 1){
#define B0  V2->Val[0]
#define B1  V2->Val[1]
#define B2  V2->Val[2]
#define B3  V2->Val[3]
#define B4  V2->Val[4]
#define B5  V2->Val[5]
#define B6  V2->Val[6]
#define B7  V2->Val[7]
#define B8  V2->Val[8]
      COMPUTE_A;
      A.Type = TENSOR;
      Cal_CopyValue(&A,R); 
#undef B0
#undef B1
#undef B2
#undef B3
#undef B4
#undef B5
#undef B6
#undef B7
#undef B8
    }
    else{
#define B0r  V2->Val[MAX_DIM* k   +0]
#define B1r  V2->Val[MAX_DIM* k   +1]
#define B2r  V2->Val[MAX_DIM* k   +2]
#define B3r  V2->Val[MAX_DIM* k   +3]
#define B4r  V2->Val[MAX_DIM* k   +4]
#define B5r  V2->Val[MAX_DIM* k   +5]
#define B6r  V2->Val[MAX_DIM* k   +6]
#define B7r  V2->Val[MAX_DIM* k   +7]
#define B8r  V2->Val[MAX_DIM* k   +8]
#define B0i  V2->Val[MAX_DIM*(k+1)+0]
#define B1i  V2->Val[MAX_DIM*(k+1)+1]
#define B2i  V2->Val[MAX_DIM*(k+1)+2]
#define B3i  V2->Val[MAX_DIM*(k+1)+3]
#define B4i  V2->Val[MAX_DIM*(k+1)+4]
#define B5i  V2->Val[MAX_DIM*(k+1)+5]
#define B6i  V2->Val[MAX_DIM*(k+1)+6]
#define B7i  V2->Val[MAX_DIM*(k+1)+7]
#define B8i  V2->Val[MAX_DIM*(k+1)+8]
#define AFFECT(i) 										\
  A.Val[MAX_DIM* k   +i] = t0*B0r+t1*B3r+t2*B6r+t3*B1r+t4*B4r+t5*B7r+t6*B2r+t7*B5r+t8*B8r; 	\
  A.Val[MAX_DIM*(k+1)+i] = t0*B0i+t1*B3i+t2*B6i+t3*B1i+t4*B4i+t5*B7i+t6*B2i+t7*B5i+t8*B8i
      for(k=0 ; k<Current.NbrHar ; k+=2){	
	COMPLEX_COMPUTE_A;
      }
      A.Type = TENSOR;
      Cal_CopyValue(&A,R); 
#undef B0r
#undef B1r
#undef B2r
#undef B3r
#undef B4r
#undef B5r
#undef B6r
#undef B7r
#undef B8r
#undef B0i
#undef B1i
#undef B2i
#undef B3i
#undef B4i
#undef B5i
#undef B6i
#undef B7i
#undef B8i
#undef AFFECT
    }
    break;

#undef COMPUTE_A
#undef COMPLEX_COMPUTE_A
    
  default :
    Msg(ERROR, "Wrong Argument Type in 'Cal_RotateValue'");
    break;
  }

  GetDP_End ;
}
      
#undef A0
#undef A1
#undef A2
#undef A3
#undef A4
#undef A5
#undef A6
#undef A7
#undef A8



/* ------------------------------------------------------------------------ 
   R <- Det(V1) 
   ------------------------------------------------------------------------ */

void Cal_DetValue(struct Value *V1, struct Value *R){
  int     k;

  GetDP_Begin("Cal_DetValue");

  R->Type = SCALAR;
  
  switch(V1->Type){

  case TENSOR_DIAG :
    if(Current.NbrHar==1){      
      R->Val[0] = V1->Val[0]*V1->Val[1]*V1->Val[2];
    }
    else{
      for(k=0 ; k<Current.NbrHar ; k+=2){
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+0], &V1->Val[MAX_DIM*k+1], a1);
      	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+2], a1, a2);
	R->Val[MAX_DIM* k   ] = a2[0];
	R->Val[MAX_DIM*(k+1)] = a2[MAX_DIM];
      }
    }
    break;

  case TENSOR_SYM :
    if(Current.NbrHar==1){      
      R->Val[0] = V1->Val[0]*(V1->Val[3]*V1->Val[5]-V1->Val[4]*V1->Val[4])
	        - V1->Val[1]*(V1->Val[1]*V1->Val[5]-V1->Val[2]*V1->Val[4])
	        + V1->Val[2]*(V1->Val[1]*V1->Val[4]-V1->Val[2]*V1->Val[3]);
    }
    else{
      for(k=0 ; k<Current.NbrHar ; k+=2){
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+3], &V1->Val[MAX_DIM*k+5], a1);
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+4], &V1->Val[MAX_DIM*k+4], a2);
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+0], b1, c1);
	
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+1], &V1->Val[MAX_DIM*k+5], a1);
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+2], &V1->Val[MAX_DIM*k+4], a2);
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+1], b1, c2);

	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+1], &V1->Val[MAX_DIM*k+4], a1);
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+2], &V1->Val[MAX_DIM*k+3], a2);
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+2], b1, c3);

	R->Val[MAX_DIM* k   ] = c1[0]      -c2[0]      +c3[0];
	R->Val[MAX_DIM*(k+1)] = c1[MAX_DIM]-c2[MAX_DIM]+c3[MAX_DIM];
      }   
    }
    break;

  case TENSOR :
    if(Current.NbrHar==1){      
      R->Val[0] = V1->Val[0]*(V1->Val[4]*V1->Val[8]-V1->Val[7]*V1->Val[5])
	        - V1->Val[1]*(V1->Val[3]*V1->Val[8]-V1->Val[6]*V1->Val[5])
	        + V1->Val[2]*(V1->Val[3]*V1->Val[7]-V1->Val[6]*V1->Val[4]);
    }
    else{
      for(k=0 ; k<Current.NbrHar ; k+=2){
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+4], &V1->Val[MAX_DIM*k+8], a1);
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+7], &V1->Val[MAX_DIM*k+5], a2);
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+0], b1, c1);

	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+3], &V1->Val[MAX_DIM*k+8], a1);
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+6], &V1->Val[MAX_DIM*k+5], a2);
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+1], b1, c2);

	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+3], &V1->Val[MAX_DIM*k+7], a1);
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+6], &V1->Val[MAX_DIM*k+4], a2);
	b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM] ;
	Cal_ComplexProduct(&V1->Val[MAX_DIM*k+2], b1, c3);

	R->Val[MAX_DIM* k   ] = c1[0]      -c2[0]      +c3[0];
	R->Val[MAX_DIM*(k+1)] = c1[MAX_DIM]-c2[MAX_DIM]+c3[MAX_DIM];
      }
    }
    break;    
    
  default:
    Msg(ERROR, "Wrong Argument Type in 'Cal_DetValue'");
    break;
  }  
  
  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   R <- 1/V1 
   ------------------------------------------------------------------------ */

void Cal_InvertValue(struct Value *V1, struct Value *R){
  int            k;
  struct Value   Det,A;

  GetDP_Begin("Cal_InvertValue");

  switch(V1->Type){

  case SCALAR :
    R->Type = SCALAR;

    if(Current.NbrHar==1){      
      if(!V1->Val[0]){
	Msg(ERROR, "Division by zero in 'Cal_InvertValue'");
      }
      R->Val[0] = 1./V1->Val[0];
    }
    else{
      for(k=0 ; k<Current.NbrHar ; k+=2){
	Cal_ComplexInvert(&V1->Val[MAX_DIM*k], &R->Val[MAX_DIM*k]);
      }
    }
    break;

  case TENSOR_DIAG :
    R->Type = TENSOR_DIAG;

    if(Current.NbrHar==1){      
      if(V1->Val[0] && V1->Val[1] && V1->Val[2]){
	R->Val[0] = 1./V1->Val[0];
	R->Val[1] = 1./V1->Val[1];
	R->Val[2] = 1./V1->Val[2];
      }
      else{
	Msg(ERROR, "Null Determinant in 'Cal_InvertValue'");
      }
    }
    else{
      for(k=0 ; k<Current.NbrHar ; k+=2){
	Cal_ComplexInvert(&V1->Val[MAX_DIM*k  ], &R->Val[MAX_DIM*k  ]);
	Cal_ComplexInvert(&V1->Val[MAX_DIM*k+1], &R->Val[MAX_DIM*k+1]);
	Cal_ComplexInvert(&V1->Val[MAX_DIM*k+2], &R->Val[MAX_DIM*k+2]);
      }
    }
    break;

  case TENSOR_SYM :
    Cal_DetValue(V1,&Det);

    if(!Det.Val[0]){
      Msg(ERROR, "Null Determinant in 'Cal_InvertValue'");
    }

    if(Current.NbrHar==1){      
      A.Val[0] =  (V1->Val[3]*V1->Val[5]-V1->Val[4]*V1->Val[4])/Det.Val[0];
      A.Val[1] = -(V1->Val[1]*V1->Val[5]-V1->Val[4]*V1->Val[2])/Det.Val[0];
      A.Val[2] =  (V1->Val[1]*V1->Val[4]-V1->Val[3]*V1->Val[2])/Det.Val[0];
      A.Val[3] = -(V1->Val[1]*V1->Val[5]-V1->Val[2]*V1->Val[4])/Det.Val[0];
      A.Val[4] =  (V1->Val[0]*V1->Val[5]-V1->Val[2]*V1->Val[2])/Det.Val[0];
      A.Val[5] = -(V1->Val[0]*V1->Val[4]-V1->Val[2]*V1->Val[1])/Det.Val[0];
      A.Val[6] =  (V1->Val[1]*V1->Val[4]-V1->Val[2]*V1->Val[3])/Det.Val[0];
      A.Val[7] = -(V1->Val[0]*V1->Val[4]-V1->Val[1]*V1->Val[2])/Det.Val[0];
      A.Val[8] =  (V1->Val[0]*V1->Val[3]-V1->Val[1]*V1->Val[1])/Det.Val[0];
      A.Type = TENSOR;
      Cal_CopyValue(&A,R);
    }
    else{
#define PRODSUBDIV(a,b,c,d,e) 						\
  Cal_ComplexProduct(&V1->Val[MAX_DIM*k+a], &V1->Val[MAX_DIM*k+b], a1);	\
  Cal_ComplexProduct(&V1->Val[MAX_DIM*k+c], &V1->Val[MAX_DIM*k+d], a2);	\
  b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM];     \
  Cal_ComplexDivision(b1, &Det.Val[MAX_DIM*k], &A.Val[e])

#define ASSIGN1(i)				      \
  R->Val[MAX_DIM* k   +i] = A.Val[MAX_DIM* k   +i];   \
  R->Val[MAX_DIM*(k+1)+i] = A.Val[MAX_DIM*(k+1)+i]

#define ASSIGN2(i)				      \
  R->Val[MAX_DIM* k   +i] = -A.Val[MAX_DIM* k   +i];  \
  R->Val[MAX_DIM*(k+1)+i] = -A.Val[MAX_DIM*(k+1)+i]
      for(k=0 ; k<Current.NbrHar ; k+=2){
	PRODSUBDIV(3,5,4,4,0); PRODSUBDIV(1,5,4,2,1); PRODSUBDIV(1,4,3,2,2);
	PRODSUBDIV(1,5,2,4,3); PRODSUBDIV(0,5,2,2,4); PRODSUBDIV(0,4,2,1,5);
	PRODSUBDIV(1,4,2,3,6); PRODSUBDIV(0,4,1,2,7); PRODSUBDIV(0,3,1,1,8);
	ASSIGN1(0); ASSIGN2(1);	ASSIGN1(2);
	ASSIGN2(3); ASSIGN1(4);	ASSIGN2(5);
	ASSIGN1(6); ASSIGN2(7);	ASSIGN1(8);
      }    
      R->Type = TENSOR;
#undef PRODSUBDIV
#undef ASSIGN1
#undef ASSIGN2
    }
    break;

  case TENSOR :
    Cal_DetValue(V1,&Det);

    if(!Det.Val[0]){
      Msg(ERROR, "Null Determinant in 'Cal_InvertValue'");
    }

    if(Current.NbrHar==1){      
      A.Val[0] =  (V1->Val[4]*V1->Val[8]-V1->Val[5]*V1->Val[7])/Det.Val[0];
      A.Val[1] = -(V1->Val[1]*V1->Val[8]-V1->Val[7]*V1->Val[2])/Det.Val[0];
      A.Val[2] =  (V1->Val[1]*V1->Val[5]-V1->Val[4]*V1->Val[2])/Det.Val[0];
      A.Val[3] = -(V1->Val[3]*V1->Val[8]-V1->Val[6]*V1->Val[5])/Det.Val[0];
      A.Val[4] =  (V1->Val[0]*V1->Val[8]-V1->Val[2]*V1->Val[6])/Det.Val[0];
      A.Val[5] = -(V1->Val[0]*V1->Val[5]-V1->Val[2]*V1->Val[3])/Det.Val[0];
      A.Val[6] =  (V1->Val[3]*V1->Val[7]-V1->Val[6]*V1->Val[4])/Det.Val[0];
      A.Val[7] = -(V1->Val[0]*V1->Val[7]-V1->Val[1]*V1->Val[6])/Det.Val[0];
      A.Val[8] =  (V1->Val[0]*V1->Val[4]-V1->Val[1]*V1->Val[3])/Det.Val[0];
      A.Type = TENSOR;
      Cal_CopyValue(&A,R);
    }
    else{
#define PRODSUBDIV(a,b,c,d,e) 						\
  Cal_ComplexProduct(&V1->Val[MAX_DIM*k+a], &V1->Val[MAX_DIM*k+b], a1);	\
  Cal_ComplexProduct(&V1->Val[MAX_DIM*k+c], &V1->Val[MAX_DIM*k+d], a2);	\
  b1[0] = a1[0] - a2[0] ;  b1[MAX_DIM] = a1[MAX_DIM] - a2[MAX_DIM];     \
  Cal_ComplexDivision(b1, &Det.Val[MAX_DIM*k], &A.Val[e])

#define ASSIGN1(i)				 \
  R->Val[MAX_DIM* k   +i] = A.Val[MAX_DIM* k   +i];	 \
  R->Val[MAX_DIM*(k+1)+i] = A.Val[MAX_DIM*(k+1)+i]

#define ASSIGN2(i)				\
  R->Val[MAX_DIM* k   +i] = -A.Val[MAX_DIM* k   +i];	\
  R->Val[MAX_DIM*(k+1)+i] = -A.Val[MAX_DIM*(k+1)+i]
      for(k=0 ; k<Current.NbrHar ; k+=2){
	PRODSUBDIV(4,8,5,7,0); PRODSUBDIV(1,8,7,2,1); PRODSUBDIV(1,5,4,2,2);
	PRODSUBDIV(3,8,6,5,3); PRODSUBDIV(0,8,2,6,4); PRODSUBDIV(0,5,2,3,5);
	PRODSUBDIV(3,7,6,4,6); PRODSUBDIV(0,7,1,6,7); PRODSUBDIV(0,4,1,3,8);
	ASSIGN1(0); ASSIGN2(1);	ASSIGN1(2);
	ASSIGN2(3); ASSIGN1(4);	ASSIGN2(5);
	ASSIGN1(6); ASSIGN2(7);	ASSIGN1(8);
      }    
      R->Type = TENSOR;
#undef PRODSUBDIV
#undef ASSIGN1
#undef ASSIGN2
    }
    break;

  default :
    Msg(ERROR, "Wrong Type of Argument in 'Cal_InvertValue'");
    break;
  }

  GetDP_End ;
}

/* ------------------------------------------------------- */
/*  -->  P r i n t _ V a l u e                             */
/* ------------------------------------------------------- */

void Print_Value(struct Value *A){
  int i,j,k,index ;

  GetDP_Begin("Cal_PrintValue");

  switch(A->Type){

  case SCALAR :
    if(Current.NbrHar>1) fprintf(PrintStream, "(");
    for (k = 0 ; k < Current.NbrHar ; k++) {
      if(k) fprintf(PrintStream, ",");
      fprintf(PrintStream, "%g", A->Val[MAX_DIM*k]);
    }
    if(Current.NbrHar>1) fprintf(PrintStream, ")");    
    break;

  case VECTOR :
    fprintf(PrintStream, "[");
    for (i = 0 ; i < 3 ; i++) {
      if(i) fprintf(PrintStream, " ");
      if(Current.NbrHar>1) fprintf(PrintStream, "(");
      for (k = 0 ; k < Current.NbrHar ; k++) {
	if(k) fprintf(PrintStream, ",");
	fprintf(PrintStream, "%g", A->Val[MAX_DIM*k+i]);
      }
      if(Current.NbrHar>1) fprintf(PrintStream, ")");
    }
    fprintf(PrintStream, "]");
    break;

  case TENSOR_DIAG :
  case TENSOR_SYM :
  case TENSOR :
    fprintf(PrintStream, "[[");
    for (i = 0 ; i < 3 ; i++) {
      if(i) fprintf(PrintStream, "][");
      for (j = 0 ; j < 3 ; j++) {
	if(j) fprintf(PrintStream, " ");
	if(Current.NbrHar>1) fprintf(PrintStream, "(");
	switch(A->Type){
	case TENSOR_DIAG : index = TENSOR_DIAG_MAP[3*i+j]; break;
	case TENSOR_SYM  : index = TENSOR_SYM_MAP[3*i+j]; break;
	case TENSOR      : index = 3*i+j; break;
	}
	for (k = 0 ; k < Current.NbrHar ; k++) {
	  if(k) fprintf(PrintStream, ",");
	  if(index<0) 
	    fprintf(PrintStream, "0");
	  else
	    fprintf(PrintStream, "%g", A->Val[MAX_DIM*k+index]);
	}
	if(Current.NbrHar>1) fprintf(PrintStream, ")");
      }
    }
    fprintf(PrintStream, "]]");
    break;

  default :
    Msg(ERROR, "Unknown Type of Argument in function 'Printf'");
    break;
  }

  fprintf(PrintStream, " ");

  GetDP_End ;
}


/* ------------------------------------------------------------------------ 
   Complete harmonics 
   ------------------------------------------------------------------------ */

void  Cal_SetHarmonicValue(struct Value *R) {
  int k ;

  GetDP_Begin("Cal_SetHarmonicValue");

  switch(R->Type){

  case SCALAR :
    R->Val[MAX_DIM] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2) {
      R->Val[MAX_DIM*k    ] = R->Val[0] ;
      R->Val[MAX_DIM*(k+1)] = 0. ;
    }
    break;

  case VECTOR :
    R->Val[MAX_DIM] = R->Val[MAX_DIM+1] = R->Val[MAX_DIM+2] = 0. ;
    for (k = 2 ; k < Current.NbrHar ; k += 2) {
      R->Val[MAX_DIM*k  ] = R->Val[0] ;
      R->Val[MAX_DIM*k+1] = R->Val[1] ;
      R->Val[MAX_DIM*k+2] = R->Val[2] ;
      R->Val[MAX_DIM*(k+1)  ] = 0. ; 
      R->Val[MAX_DIM*(k+1)+1] = 0. ;
      R->Val[MAX_DIM*(k+1)+2] = 0. ;
    }
    break;
    
  default :
    Msg(ERROR, "Unknown Type of Argument in function 'Cal_SetHarmonicValue'");
  }

  GetDP_End ;
}

