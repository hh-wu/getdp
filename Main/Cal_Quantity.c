#define RCSID "$Id: Cal_Quantity.c,v 1.19 2003-02-07 19:22:57 geuzaine Exp $"
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Cal_Quantity.h"
#include "Treatment_Formulation.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"
#include "F_Function.h"
#include "CurrentData.h"
#include "Data_Numeric.h"
#include "Tools.h"

int  fcmp_int2(const void * a, const void * b) ;

void  Cal_SolidAngle(int Source, struct Element *Element,
		     struct QuantityStorage * QuantityStorage,
		     int Nbr_Dof, int Index, struct Value **Stack);

static int Flag_WarningMissSolForDt = 0 ;

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e O f E x p r e s s i o n                               */
/* ------------------------------------------------------------------------ */

void  Get_ValueOfExpression(struct Expression * Expression_P, 
			    struct QuantityStorage * QuantityStorage_P0, 
			    double u, double v, double w,
			    struct Value * Value) {
  int k ;
  struct ExpressionPerRegion  * ExpressionPerRegion_P ;

  GetDP_Begin("Get_ValueOfExpression");

  switch (Expression_P->Type) {

  case CONSTANT :
    if (Current.NbrHar == 1) {
      Value->Val[0] = Expression_P->Case.Constant ;
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	Value->Val[MAX_DIM* k   ] = Expression_P->Case.Constant ;
	Value->Val[MAX_DIM*(k+1)] = 0. ;
      }
    }
    Value->Type = SCALAR ;
    break ;

  case WHOLEQUANTITY :
    Cal_WholeQuantity(Current.Element, QuantityStorage_P0, 
		      Expression_P->Case.WholeQuantity,
		      u,v,w, -1, 0, Value) ;
    break ;

  case PIECEWISEFUNCTION :
    if (Current.Region != Expression_P->Case.PieceWiseFunction.NumLastRegion) {
      if ((ExpressionPerRegion_P = (struct ExpressionPerRegion*)
	   List_PQuery(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		       &Current.Region, fcmp_int))) {
	Expression_P->Case.PieceWiseFunction.NumLastRegion = Current.Region ;
	Expression_P->Case.PieceWiseFunction.ExpressionForLastRegion =
	  (struct Expression*)List_Pointer(Problem_S.Expression,
					   ExpressionPerRegion_P->ExpressionIndex) ;
      }
      else {
	if(Current.Region == NO_REGION)
	  Msg(ERROR, "Function '%s' undefined in expressions without support",
	      Expression_P->Name);
	else
	  Msg(ERROR, "Function '%s' undefined in Region %d",
	      Expression_P->Name, Current.Region);
      }
    }
    Get_ValueOfExpression
      (Expression_P->Case.PieceWiseFunction.ExpressionForLastRegion, 
       QuantityStorage_P0, u, v, w, Value) ;
    break ;

  default :
    Msg(ERROR, "Unknown type (%d) of Expression (%s)",
	Expression_P->Type, Expression_P->Name) ;  
    break;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e O f E x p r e s s i o n B y I n d e x                 */
/* ------------------------------------------------------------------------ */

void  Get_ValueOfExpressionByIndex(int Index_Expression,
				   struct QuantityStorage * QuantityStorage_P0, 
				   double u, double v, double w,
				   struct Value * Value) {

  GetDP_Begin("Get_ValueOfExpressionByIndex");

  Get_ValueOfExpression
    ((struct Expression *)List_Pointer(Problem_S.Expression, Index_Expression),
     QuantityStorage_P0,  u, v, w, Value) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  C a l _ W h o l e Q u a n t i t y                                       */
/* ------------------------------------------------------------------------ */

#define MAX_REGISTER_SIZE   100

#define CAST3V    void(*)(struct Value*, struct Value*, struct Value*)
#define CAST1V    void(*)(struct Value*)
#define CASTF2V   void(*)(struct Function*, struct Value*, struct Value*)

static struct Value  ValueSaved[MAX_REGISTER_SIZE] ;  

void Cal_WholeQuantity(struct Element * Element,
		       struct QuantityStorage * QuantityStorage_P0,
		       List_T * WholeQuantity_L,
		       double u, double v, double w, 
		       int DofIndexInWholeQuantity, 
		       int Nbr_Dof, struct Value DofValue[]) {

  
  /* Warning: Maximum one "Dof{op qty}" per WholeQuantity, but as many 
              {op qty} as you want */

  /* Patrick: 

     Pour l'angle solide, je ne voulais pas d'un operateur special
     agissant sur une qty, vu le manque de souplesse (et je voulais
     pouvoir faire reference a une qty autre que le Dof courant, dans
     le cas de qtes integrales).  Considerer un vecteur local me
     parait limite (si on a besoin d'autres grandeurs pouvant dependre
     du Dof, ou de plusieurs grandeurs de ce type)

     -> La solution immediate pour etre plus general etait de
     considerer une pile de type Stack[MAX_STACK_SIZE][NBR_MAX_BASISFUNCTIONS]
     et de reellement tout empiler dedans. J'ai choisi de garder le
     cas particulier du DofValue, pour eviter (2*Nbr_Dof) memcopy
     inutiles (empiler le dof value et le desempiler).

     Ce qui n'est pas encore fait : 
     1) On ne peut pas appliquer de fonction sur un multi
     2) la recursion ne marche pas avec ce type de grandeurs

     -> Une autre solution (meilleure) serait de garder une pile
     simple, mais ou une Value pourrait etre multiple. Mais ca
     necessite de changer un petit peu le traitement des arguments des
     fcts. Qu'en penses-tu ?

     De toute facons, l'indexage ne se fait plus par pointeurs, mais
     avec un index explicite (c'est presque aussi efficace, et ca
     permet de detecter facilement un stack overflow). (On pourrait
     d'ailleurs reallouer, ce qui serait plus elegant.)
     */

  int     i_WQ, j, k, Flag_True, Index, DofIndex, Multi[MAX_STACK_SIZE] ;
  int     Save_NbrHar, Save_Region, Type_Dimension ;
  double  Save_Time, X, Y, Z, Order ;
  
  struct WholeQuantity   *WholeQuantity_P0, *WholeQuantity_P ;
  struct DofData         *Save_DofData ;
  struct Solution        *Solution_P0 ;

  /* Should be Stack[NBR_MAX_BASISFUNCTION][MAX_STACK_SIZE] but this
     overflows the stack for long recursive calls. 8 is still OK since
     the 'multi' feature is only used for SolidAngle computation for
     now */

#undef HEAP
  /* To measure the overhead induced by the allocation, just define
     HEAP. Apparently, the (huge) performance hit is the same as the
     one witnessed under Cygwin... So, does Cygwin play dirty tricks
     with the stack??? This should REALLY be examined in detail. */
#ifdef HEAP
  struct Value *Stack[8];
  for(j = 0; j < 8; j++) 
    Stack[j] = (struct Value*)Malloc(MAX_STACK_SIZE*sizeof(struct Value));
#else
  struct Value           Stack[8][MAX_STACK_SIZE] ;
#endif

  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;

  GetDP_Begin("Cal_WholeQuantity");

  WholeQuantity_P0 = (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) ;

  Index     = 0 ;
  DofIndex  = -1 ;

  for (i_WQ = 0 ; i_WQ < List_Nbr(WholeQuantity_L) ; i_WQ++) {

    if(Index >= MAX_STACK_SIZE) Msg(ERROR, "Stack size exceeded (%d)", MAX_STACK_SIZE);

    WholeQuantity_P = WholeQuantity_P0 + i_WQ ;

    switch (WholeQuantity_P->Type) {

    case WQ_OPERATORANDQUANTITY : /* {op qty}  Dof{op qty}  BF{op qty} */
      if (i_WQ != DofIndexInWholeQuantity){ /* Attention!!! || TreatmentStatus == _POS){  */
	Pos_FemInterpolation
	  (Element,
	   QuantityStorage_P0,
	   QuantityStorage_P0 + WholeQuantity_P->Case.OperatorAndQuantity.Index,
	   WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity,
	   WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator, 0,
	   u, v, w, 0, 0, 0, Stack[0][Index].Val, &Stack[0][Index].Type, 1) ;
	Multi[Index] = 0 ;
      }
      else {
	DofIndex = Index ;
      }
      Index++ ;  
      break ;

    case WQ_ORDER : /* Order[{qty}] */
      Order = Cal_InterpolationOrder
	(Element, QuantityStorage_P0 + WholeQuantity_P->Case.OperatorAndQuantity.Index) ;
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	Stack[0][Index].Val[MAX_DIM* k   ] = Order ;
	Stack[0][Index].Val[MAX_DIM*(k+1)] = 0. ;
      }
      Stack[0][Index].Type = SCALAR ;
      Multi[Index] = 0 ;
      Index++ ;  
      break ;

    case WQ_OPERATORANDQUANTITYEVAL : /* {op qty}[x,y,z] {op qty}[x,y,z,t]*/
      if (i_WQ != DofIndexInWholeQuantity || TreatmentStatus == _POS){
	if ((k = WholeQuantity_P->Case.OperatorAndQuantity.NbrArguments) != 3) 
	  Msg(ERROR, "Explicit time evaluation not done (yet)");
	Index -= k ;
	X = Stack[0][Index  ].Val[0] ;
	Y = Stack[0][Index+1].Val[0] ;
	Z = Stack[0][Index+2].Val[0] ;
	Pos_FemInterpolation
	  (Element,
	   QuantityStorage_P0,
	   QuantityStorage_P0 + WholeQuantity_P->Case.OperatorAndQuantity.Index,
	   WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity,
	   WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator, 1,
	   u, v, w, X, Y, Z, Stack[0][Index].Val, &Stack[0][Index].Type, 1) ;
	Multi[Index] = 0 ;
	Index++ ;
      }
      else{
	Msg(ERROR, "Explicit Dof{} evaluation out of context");
      }
      break ;

    case WQ_TRACE : /* Trace[WholeQuantity, Group] */
      Save_Region = Current.Region ; 

      if(!Element->ElementTrace)
	Msg(ERROR, "The trace operator should act on a discrete Quantity");
      
      Current.Region = Element->ElementTrace->Region ;
      
      if(WholeQuantity_P->Case.Trace.DofIndexInWholeQuantity >= 0){
	Cal_WholeQuantity(Element->ElementTrace, QuantityStorage_P0,
			  WholeQuantity_P->Case.Trace.WholeQuantity,
			  Current.ut, Current.vt, Current.wt, 
			  WholeQuantity_P->Case.Trace.DofIndexInWholeQuantity,
			  Nbr_Dof, DofValue) ;
	DofIndexInWholeQuantity = DofIndex = Index ;
      }
      else{
	Current.x = Current.y = Current.z = 0. ;
	for (j = 0 ; j < Element->GeoElement->NbrNodes ; j++) {
	  Current.x += Element->x[j] * Element->n[j] ;
	  Current.y += Element->y[j] * Element->n[j] ;
	  Current.z += Element->z[j] * Element->n[j] ;
	}
	Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
	  Get_JacobianFunction(Element->JacobianCase->TypeJacobian + 1,
			       Element->ElementTrace->Type, &Type_Dimension) ;
	xyz2uvwInAnElement (Element->ElementTrace, Current.x, Current.y, Current.z, 
			    &Current.ut, &Current.vt, &Current.wt, Get_Jacobian, Type_Dimension) ;	
	Cal_WholeQuantity(Element->ElementTrace, QuantityStorage_P0,
			  WholeQuantity_P->Case.Trace.WholeQuantity,
			  Current.ut, Current.vt, Current.wt, 
			  -1, 0, &Stack[0][Index]) ;
      }

      Current.Region = Save_Region ;
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_SOLIDANGLE : /* SolidAngle[{qty}] */
      Cal_SolidAngle(0, Element, QuantityStorage_P0 +
		     WholeQuantity_P->Case.OperatorAndQuantity.Index, 
		     Nbr_Dof, Index, (struct Value **)Stack);
      Multi[Index] = 1 ;
      Index++ ;
      break ;

    case WQ_BINARYOPERATOR : /* + - * x / % ^ < > <= >= == != && || */
      if (Index-2 != DofIndex && Index-1 != DofIndex){
	if(!Multi[Index-1] && !Multi[Index-2])
	  ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	    (&Stack[0][Index-2], &Stack[0][Index-1], &Stack[0][Index-2]) ;
	else if(Multi[Index-1] && Multi[Index-2])
	  for(j=0 ; j<Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&Stack[j][Index-2], &Stack[j][Index-1], &Stack[j][Index-2]) ;
	else if(Multi[Index-2])
	  for(j=0 ; j<Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&Stack[j][Index-2], &Stack[0][Index-1], &Stack[j][Index-2]) ;
	else {
	  for(j=0 ; j<Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&Stack[0][Index-2], &Stack[j][Index-1], &Stack[j][Index-2]) ;
	  Multi[Index-2] = 1 ;
	}
      }
      else if (Index-1 == DofIndex) {
	if(Multi[Index-2])
	  for (j = 0 ; j < Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&Stack[j][Index-2], &DofValue[j], &DofValue[j]) ;
	else
	  for (j = 0 ; j < Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&Stack[0][Index-2], &DofValue[j], &DofValue[j]) ;
	DofIndex-- ;
      }
      else { /* Index-2 == DofIndex */
	if(Multi[Index-1])
	  for (j = 0 ; j < Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&DofValue[j], &Stack[j][Index-1], &DofValue[j]) ;
	else
	  for (j = 0 ; j < Nbr_Dof ; j++)
	    ((CAST3V)WholeQuantity_P->Case.Operator.Function)
	      (&DofValue[j], &Stack[0][Index-1], &DofValue[j]) ;
      }
      Index-- ;  
      break ;

    case WQ_UNARYOPERATOR : /* + - ! */
      if (Index-1 == DofIndex)
	for (j = 0 ; j < Nbr_Dof ; j++)
	  ((CAST1V)WholeQuantity_P->Case.Operator.Function)(&DofValue[j]) ;
      else if(Multi[Index-1])
	for(j=0 ; j<Nbr_Dof ; j++)
	  ((CAST1V)WholeQuantity_P->Case.Operator.Function)(&Stack[j][Index-1]) ;	
      else
	((CAST1V)WholeQuantity_P->Case.Operator.Function)(&Stack[0][Index-1]) ;
      break ;


      /* WARNING: all the rest assumes 0 multi status */

    case WQ_TEST :
      Flag_True = (Stack[0][Index-1].Val[0] != 0.) ;
      Cal_WholeQuantity(Element, QuantityStorage_P0,
			(Flag_True) ? WholeQuantity_P->Case.Test.WholeQuantity_True :
		 	              WholeQuantity_P->Case.Test.WholeQuantity_False,
			u, v, w, -1, 0, &Stack[0][Index-1]) ;
      break ;

    case WQ_EXPRESSION :
      Index -= WholeQuantity_P->Case.Expression.NbrArguments ;
      Get_ValueOfExpression
	(Problem_Expression0 + WholeQuantity_P->Case.Expression.Index, 
	 QuantityStorage_P0, u, v, w, &Stack[0][Index]) ;
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_BUILTINFUNCTION :
      Index -= WholeQuantity_P->Case.Function.NbrArguments ;
      ((CASTF2V)WholeQuantity_P->Case.Function.Fct)
	(&WholeQuantity_P->Case.Function, &Stack[0][Index], &Stack[0][Index]) ;	
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_EXTERNBUILTINFUNCTION :
      ((CASTF2V)WholeQuantity_P->Case.Function.Fct) 
	(&WholeQuantity_P->Case.Function, DofValue, &Stack[0][Index]) ;
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_CONSTANT :
      if (Current.NbrHar == 1) {
	Stack[0][Index].Val[0] = WholeQuantity_P->Case.Constant ;
      }
      else {
	for (k = 0 ; k < Current.NbrHar ; k += 2) {
	  Stack[0][Index].Val[MAX_DIM* k   ] = WholeQuantity_P->Case.Constant ;
	  Stack[0][Index].Val[MAX_DIM*(k+1)] = 0. ;
	}
      }
      Stack[0][Index].Type = SCALAR ;
      Multi[Index] = 0 ;
      Index++ ;  
      break ;


    case WQ_CURRENTVALUE :
      if (Current.NbrHar == 1) {
	Stack[0][Index].Val[0] = *(WholeQuantity_P->Case.CurrentValue.Value) ;
      }
      else {
	for (k = 0 ; k < Current.NbrHar ; k += 2) {
	  Stack[0][Index].Val[MAX_DIM* k   ] = *(WholeQuantity_P->Case.CurrentValue.Value) ;
	  Stack[0][Index].Val[MAX_DIM*(k+1)] = 0. ;
	}
      }
      Stack[0][Index].Type = SCALAR ;
      Multi[Index] = 0 ;
      Index++ ;  
      break ;


    case WQ_ARGUMENT :
      Cal_CopyValue(DofValue + WholeQuantity_P->Case.Argument.Index - 1,
		    &Stack[0][Index]) ;
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_TIMEDERIVATIVE :
      if (Current.NbrHar == 1) {
	Cal_WholeQuantity(Element, QuantityStorage_P0,
			  WholeQuantity_P->Case.TimeDerivative.WholeQuantity,
			  u, v, w, -1, 0, &Stack[0][Index]) ;
	
	for (k = 0 ; k < Current.NbrSystem ; k++){
	  if(List_Nbr((Current.DofData_P0+k)->Solutions) > 1){
	    Solution_P0 = (struct Solution*)List_Pointer((Current.DofData_P0+k)->Solutions, 0);
	    if ((Current.DofData_P0+k)->CurrentSolution != Solution_P0)
	      ((Current.DofData_P0+k)->CurrentSolution) -- ;
	  }
	  else {
	    if (!Flag_WarningMissSolForDt) {
	      Msg(WARNING,
		  "Missing solution for time derivative computation (Sys#%d/%d)",
		  k, Current.NbrSystem);
	      Flag_WarningMissSolForDt = 1 ;
	    }
	  }
	}

	Save_Time = Current.Time ;
	Current.Time = Current.DofData->CurrentSolution->Time ;

	Cal_WholeQuantity(Element, QuantityStorage_P0,
			  WholeQuantity_P->Case.TimeDerivative.WholeQuantity,
			  u, v, w, -1, 0, &Stack[0][Index+1]) ;
	Cal_SubstractValue(&Stack[0][Index], &Stack[0][Index+1], &Stack[0][Index]) ;
	Stack[0][Index+1].Val[0] = Save_Time - Current.Time ;
	Stack[0][Index+1].Type = SCALAR ;
	if(Stack[0][Index+1].Val[0])
	  Cal_DivideValue(&Stack[0][Index], &Stack[0][Index+1], &Stack[0][Index]) ;
	else
	  Cal_ZeroValue(&Stack[0][Index]);

	for (k = 0 ; k < Current.NbrSystem ; k++)
	  if (List_Nbr((Current.DofData_P0+k)->Solutions) > 1)
	    ((Current.DofData_P0+k)->CurrentSolution) ++ ;

	Current.Time = Save_Time ;
      }
      else {
	Cal_WholeQuantity(Element, QuantityStorage_P0,
			  WholeQuantity_P->Case.TimeDerivative.WholeQuantity,
			  u, v, w, -1, 0, &Stack[0][Index]) ;
	for (k = 0 ; k < Current.NbrHar ; k += 2) {
	  Stack[0][Index+1].Val[MAX_DIM* k   ] = 0. ;
	  Stack[0][Index+1].Val[MAX_DIM*(k+1)] = Current.DofData->Val_Pulsation[k/2] ;
	}
	Stack[0][Index+1].Type = SCALAR ;
	Cal_ProductValue(&Stack[0][Index], &Stack[0][Index+1], &Stack[0][Index]) ;
      }
      Multi[Index] = 0 ;
      Index++ ;  
      break ;

    case WQ_MHTRANSFORM :
      if(Current.NbrHar == 1)
	Msg(ERROR, 
	    "MHTransform can only be used in complex (multi-harmonic) calculations") ;

      Cal_WholeQuantity(Element, QuantityStorage_P0, 
			WholeQuantity_P->Case.MHTransform.WholeQuantity, 
			u, v, w, -1, 0, &Stack[0][Index]) ; 

      MHTransform(Element, QuantityStorage_P0, u, v, w, &Stack[0][Index],
		  Problem_Expression0 + WholeQuantity_P->Case.MHTransform.Index,
		  WholeQuantity_P->Case.MHTransform.NbrPoints) ;
      Multi[Index] = 0 ;
      Index++ ;  
      break ;

    case WQ_CAST : 

      /* This should be changed... */

      Save_NbrHar = Current.NbrHar ;
      Save_DofData = Current.DofData ;
         
      if (!WholeQuantity_P->Case.Cast.NbrHar){
	Current.DofData = 	
	  ((struct FunctionSpace *)
	   List_Pointer(Problem_S.FunctionSpace,
			WholeQuantity_P->Case.Cast.FunctionSpaceIndexForType))
	  ->DofData ;
	
	Current.NbrHar = Current.DofData->NbrHar ;
      }
      else{
	Current.NbrHar = WholeQuantity_P->Case.Cast.NbrHar ;
      }

      Cal_WholeQuantity(Element, QuantityStorage_P0,
			WholeQuantity_P->Case.Cast.WholeQuantity,
			u, v, w, -1, 0, &Stack[0][Index]) ;

       if (Current.NbrHar < Save_NbrHar)  /* ne plus a completer ...?? */
      	Cal_SetZeroHarmonicValue(&Stack[0][Index], Save_NbrHar) ;

      Current.NbrHar = Save_NbrHar ;
      Current.DofData = Save_DofData ;
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_SAVEVALUE :
      if(WholeQuantity_P->Case.SaveValue.Index > MAX_REGISTER_SIZE-1)
	Msg(ERROR, "Register Size Exceeded (%d)", MAX_REGISTER_SIZE);
      /* if (WholeQuantity_P->Case.SaveValue.Index >= 0) */
      Cal_CopyValue(&Stack[0][Index-1], 
		    ValueSaved + WholeQuantity_P->Case.SaveValue.Index) ;
      break ;

   case WQ_SHOWVALUE :
     if (Index-1 == DofIndex) {
       for(j=0 ; j<Nbr_Dof ; j++){
	 fprintf(stderr, "##%d Dof %d ", WholeQuantity_P->Case.ShowValue.Index, j+1);
	 Show_Value(&DofValue[j]);
      }
     } else {
       fprintf(stderr, "##%d ", WholeQuantity_P->Case.ShowValue.Index);
       Show_Value(&Stack[0][Index-1]);
     }
     break ;


    case WQ_VALUESAVED :
      if(WholeQuantity_P->Case.ValueSaved.Index > MAX_REGISTER_SIZE-1)
	Msg(ERROR, "Register size exceeded (%d)", MAX_REGISTER_SIZE);
      Cal_CopyValue(ValueSaved + WholeQuantity_P->Case.ValueSaved.Index, 
		    &Stack[0][Index]) ;
      Multi[Index] = 0 ;
      Index++ ;  
      break ;

    default :
      Msg(ERROR, "Unknown type of WholeQuantity (%d)", WholeQuantity_P->Type);
      break;
    }
  }

  if (DofIndexInWholeQuantity < 0) Cal_CopyValue(&Stack[0][0], &DofValue[0]) ;

#ifdef HEAP
  for(j = 0; j < 8; j++)
    Free(Stack[j]);
#endif

  GetDP_End ;
}

#undef CAST3V
#undef CAST1V
#undef CASTF2V

#undef MAX_REGISTER_SIZE

/* ------------------------------------------------------------------------ */
/*  P u r i f y _ W h o l e Q u a n t i t y                                 */
/* ------------------------------------------------------------------------ */

/* 
   Effectuerait les operations qui peuvent l'etre avant execution 
   Reste a savoir si c'est possible...

struct WholeQuantity* Purify_WholeQuantity(List_T * WQ_L) {
  
  GetDP_Begin("Purify_WholeQuantity");

  GetDP_End ;
}
*/


