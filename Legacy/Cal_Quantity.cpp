// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <string.h>
#include <math.h>
#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "F.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "Get_Geometry.h"
#include "Pos_FemInterpolation.h"
#include "Pos_Search.h"
#include "Get_FunctionValue.h"
#include "MallocUtils.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;
extern int TreatmentStatus ;

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e O f E x p r e s s i o n                               */
/* ------------------------------------------------------------------------ */

void  Get_ValueOfExpression(struct Expression * Expression_P, 
			    struct QuantityStorage * QuantityStorage_P0, 
			    double u, double v, double w,
			    struct Value * Value)
{
  int k ;
  struct ExpressionPerRegion  * ExpressionPerRegion_P ;
  static char *Flag_WarningUndefined = NULL ;

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
	  Msg::Error("Function '%s' undefined in expressions without support",
		     Expression_P->Name);
	else
	  Msg::Error("Function '%s' undefined in Region %d",
		     Expression_P->Name, Current.Region);
      }
    }
    Get_ValueOfExpression
      (Expression_P->Case.PieceWiseFunction.ExpressionForLastRegion, 
       QuantityStorage_P0, u, v, w, Value) ;
    break ;

  case UNDEFINED_EXP :
    if(!Flag_WarningUndefined || strcmp(Flag_WarningUndefined, Expression_P->Name)){
      Msg::Warning("Undefined expression '%s' (assuming zero)", Expression_P->Name) ;
      Flag_WarningUndefined = Expression_P->Name;
    }
    Cal_ZeroValue(Value);
    Value->Type = SCALAR ;
    break;

  default :
    Msg::Error("Unknown type (%d) of Expression (%s)",
	       Expression_P->Type, Expression_P->Name) ;  
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e O f E x p r e s s i o n B y I n d e x                 */
/* ------------------------------------------------------------------------ */

void  Get_ValueOfExpressionByIndex(int Index_Expression,
				   struct QuantityStorage * QuantityStorage_P0, 
				   double u, double v, double w,
				   struct Value * Value) {
  Get_ValueOfExpression
    ((struct Expression *)List_Pointer(Problem_S.Expression, Index_Expression),
     QuantityStorage_P0,  u, v, w, Value) ;
}

/* ------------------------------------------------------------------------ */
/*  C a l _ S o l i d A n g l e                                             */
/* ------------------------------------------------------------------------ */

void Cal_SolidAngle(int Source, struct Element *Element,
		    struct QuantityStorage *QuantityStorage,
		    int Nbr_Dof, int Index,
		    struct Value **Stack)
{
  struct Element     *Elt ;
  struct Geo_Element *GeoElement ;
  struct Geo_Node    *GeoNode1, *GeoNode2, *GeoNode3 ;

  double X, Y, Atan ;
  int    In, TypEnt, NumNode, NbrElements, *NumElements ;
  int    i, j ;

  if(Nbr_Dof != QuantityStorage->NbrElementaryBasisFunction)
    Msg::Error("Uncompatible Quantity (%s) in SolidAngle computation",
	       QuantityStorage->DefineQuantity->Name);

  if(Source){
    Elt = Element->ElementSource ;
    In  = Current.SourceIntegrationSupportIndex ;
  }
  else{
    Elt = Element ;
    In  = Current.IntegrationSupportIndex ;
  }

  if (Elt->NumLastElementForSolidAngle == Elt->Num) {
    for(i=0 ; i<Nbr_Dof ; i++) {
      Stack[i][Index].Type = SCALAR ;
      Stack[i][Index].Val[0] = Elt->angle[i] ;
    }
    return;
  }

  for(i=0 ; i<Nbr_Dof ; i++){

    Stack[i][Index].Type = SCALAR ;

    TypEnt = ((struct Group*)
	      List_Pointer(Problem_S.Group, 
			   QuantityStorage->BasisFunction[i].
			   BasisFunction->EntityIndex))->FunctionType ;

    if(TypEnt != NODESOF){

      if(Elt->Type == LINE){
	Stack[i][Index].Val[0] = M_PI ;
      }
      else{
	Stack[i][Index].Val[0] = 2.*M_PI ;
      }

    }

    else{

      NumNode = Elt->GeoElement->
	NumNodes[QuantityStorage->BasisFunction[i].NumEntityInElement] ;

      Geo_CreateNodesXElements(NumNode, In, &NbrElements, &NumElements) ;

      if(NbrElements != 2)
	Msg::Error("SolidAngle not done for incidence != 2 (%d)", NbrElements);

      GeoNode2 = Geo_GetGeoNodeOfNum(NumNode) ;
      GeoElement = Geo_GetGeoElementOfNum(abs(NumElements[0])) ;

      if(GeoElement->Type != LINE)
	Msg::Error("SolidAngle not done for Elements other than LINE");
      
      if(NumElements[0]>0){
	GeoNode1 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[0]) ;
	GeoElement = Geo_GetGeoElementOfNum(abs(NumElements[1])) ;
	GeoNode3 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[1]) ;

      }
      else{
	GeoNode3 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[1]) ;
	GeoElement = Geo_GetGeoElementOfNum(NumElements[1]) ;
	GeoNode1 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[0]) ;
      }

      Y = (GeoNode1->y - GeoNode2->y) * (GeoNode3->x - GeoNode2->x) - 
	  (GeoNode1->x - GeoNode2->x) * (GeoNode3->y - GeoNode2->y) ;
      X = (GeoNode1->x - GeoNode2->x) * (GeoNode3->x - GeoNode2->x) +
	  (GeoNode1->y - GeoNode2->y) * (GeoNode3->y - GeoNode2->y) ;

      Atan = atan2(Y,X) ;
      
      Stack[i][Index].Val[0] = (Atan >= 0) ? Atan : (Atan+2.*M_PI) ;

      if(Msg::GetVerbosity() == 3){
	printf("Solid angle=%g node=%d, region=%s, elms=", 
	       Stack[i][Index].Val[0] * 180/M_PI, NumNode, 
	       ((struct Group*)List_Pointer(Problem_S.Group, In))->Name);
	for(j=0 ; j<NbrElements ; j++) printf("%d ", NumElements[j]);
	printf("\n");
      }

    }

  }

  if (Elt->NumLastElementForSolidAngle != Elt->Num) {
    Elt->NumLastElementForSolidAngle = Elt->Num ;    
    for(i=0 ; i<Nbr_Dof ; i++) Elt->angle[i] = Stack[i][Index].Val[0] ;
  }
}

/* ------------------------------------------------------------------------ */
/*  C a l _ W h o l e Q u a n t i t y                                       */
/* ------------------------------------------------------------------------ */

#define MAX_REGISTER_SIZE   100

#define CAST3V    void(*)(struct Value*, struct Value*, struct Value*)
#define CAST1V    void(*)(struct Value*)
#define CASTF2V   void(*)(struct Function*, struct Value*, struct Value*)

/* There can be at max one "Dof{op qty}" per WholeQuantity, but as
   many {op qty} as you want. 

   Note that Stack[8][MAX_STACK_SIZE] should actually be
   Stack[NBR_MAX_BASISFUNCTION][MAX_STACK_SIZE]. But this tends to
   overflow the stack when we don't use USE_GLOBAL_STACK. Also, 8 is
   OK since the 'multi' feature is only used for SolidAngle
   computations at the moment.

   A better solution would be to build a single stack (instead of 8
   stacks), where a Value could be multiple. But this requires to
   change the way we deal with function arguments. */

static struct Value ValueSaved[MAX_REGISTER_SIZE] ;  

void Cal_WholeQuantity(struct Element * Element,
		       struct QuantityStorage * QuantityStorage_P0,
		       List_T * WholeQuantity_L,
		       double u, double v, double w, 
		       int DofIndexInWholeQuantity, 
		       int Nbr_Dof, struct Value DofValue[]) {

  static int Flag_WarningMissSolForDt = 0 ;
  static int Flag_WarningMissSolForTime_ntime = 0 ;
  static int Flag_InfoForTime_ntime = 0 ;

  int     i_WQ, j, k, Flag_True, Index, DofIndex, Multi[MAX_STACK_SIZE] ;
  int     Save_NbrHar, Save_Region, Type_Dimension, ntime ;
  double  Save_Time, Save_TimeImag, Save_TimeStep, X, Y, Z, Order ;
  double  Save_x, Save_y, Save_z ;

  struct WholeQuantity   *WholeQuantity_P0, *WholeQuantity_P ;
  struct DofData         *Save_DofData ;
  struct Solution        *Solution_P0, *Solution_PN ;

  struct Element* Save_CurrentElement ;

//#define USE_GLOBAL_STACK

#if defined(USE_GLOBAL_STACK)

  /* Use a single global (static) stack for all quantity evaluations.

     Stack size 
       = MAX_RECURSION * MAX_STACK_SIZE * 8 * sizeof(struct Value)
       = 50 * 40 * 8 * (MAX_DIM * NBR_MAX_HARMONIC * sizeof(double))
       = 50 * 40 * 8 * (9 * 2 * 8)
      ~= 2 Mb

     Beware that for NBR_MAX_HARMONIC=40, the size would grow to
     40Mb... So let's define MAX_RECURSION as follows : */

#if NBR_MAX_HARMONIC <= 10
#define MAX_RECURSION 50
#else
#define MAX_RECURSION 10
#endif

  /* We need MAX_RECURSION sufficiently large for expressions like
     (a?b:(c?d:(e?...))) with all n<MAX_RECURSION first tests
     evaluating to false. This case happens quite often when
     specifying piecewise defined physical characteristics.

     If this poses problem in the future, we could still think about
     reallocating ths stack as it grows. The same holds for
     MAX_STACK_SIZE, of course. */

  static struct Value ***StaticStack;
  static int RecursionIndex = -1, first = 1;
  struct Value **Stack;

#else

  /* Use a local stack: this can quickly overflow the stack on Windows
     and Mac OS X */
  struct Value Stack[8][MAX_STACK_SIZE] ;

#endif

#if defined(USE_GLOBAL_STACK)
  if(first){
    StaticStack = (struct Value***)Malloc(MAX_RECURSION*sizeof(struct Value**));
    for(j = 0; j < MAX_RECURSION; j++){
      StaticStack[j] = (struct Value**)Malloc(8*sizeof(struct Value*));
      for(k = 0; k < 8; k++){
	StaticStack[j][k] = (struct Value*)Malloc(MAX_STACK_SIZE*sizeof(struct Value));
      }
    }
    first = 0;
  }
  RecursionIndex++;
  if(RecursionIndex < 0 || RecursionIndex >= MAX_RECURSION) 
    Msg::Error("Recursion problem in Cal_WholeQuantity (%d outside [0,%d])", 
	       RecursionIndex, MAX_RECURSION);
  Stack = StaticStack[RecursionIndex];
#endif

  WholeQuantity_P0 = (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) ;

  Index     = 0 ;
  DofIndex  = -1 ;

  for (i_WQ = 0 ; i_WQ < List_Nbr(WholeQuantity_L) ; i_WQ++) {

    if(Index >= MAX_STACK_SIZE) Msg::Error("Stack size exceeded (%d)", MAX_STACK_SIZE);

    WholeQuantity_P = WholeQuantity_P0 + i_WQ ;

    switch (WholeQuantity_P->Type) {

    case WQ_OPERATORANDQUANTITY : /* {op qty}  Dof{op qty}  BF{op qty} */
      Save_Region = Current.Region ; 
      Save_CurrentElement = Current.Element ;
      if (i_WQ != DofIndexInWholeQuantity){ /* Attention!!! || TreatmentStatus == _POS){  */
	Pos_FemInterpolation
	  (Element,
	   QuantityStorage_P0,
	   QuantityStorage_P0 + WholeQuantity_P->Case.OperatorAndQuantity.Index,
	   WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity,
	   WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator, -1, 0,
	   u, v, w, 0, 0, 0, Stack[0][Index].Val, &Stack[0][Index].Type, 1) ;
	Multi[Index] = 0 ;
      }
      else {
	DofIndex = Index ;
      }
      Index++ ;  
      Current.Element = Save_CurrentElement ;
      Current.Region = Save_Region ;
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

    case WQ_OPERATORANDQUANTITYEVAL : 
      Save_Region = Current.Region ;
      Save_CurrentElement = Current.Element ;
      /* {op qty}[x,y,z], {op qty}[x,y,z,dimension] 
	 or {op qty}[Vector[x,y,x],dimension]
	 or {op qty}[ntime] */
      if (i_WQ != DofIndexInWholeQuantity || TreatmentStatus == _POS){
	j = WholeQuantity_P->Case.OperatorAndQuantity.NbrArguments;
	if (j == 2 || j == 3 || j == 4) {
	  if (j == 3 || j == 4) {
	    Index -= j ;
	    X = Stack[0][Index  ].Val[0] ;
	    Y = Stack[0][Index+1].Val[0] ;
	    Z = Stack[0][Index+2].Val[0] ;
	    if(j == 4) 
	      Type_Dimension = (int)Stack[0][Index+3].Val[0] ;
	    else
	      Type_Dimension = -1 ;
	  }
	  else { /* j==2 */
	    Index -= j ;
	    X = Stack[0][Index  ].Val[0] ;
	    Y = Stack[0][Index  ].Val[1] ;
	    Z = Stack[0][Index  ].Val[2] ;
	    Type_Dimension = (int)Stack[0][Index+1].Val[0] ;
	  }
	  Pos_FemInterpolation
	    (Element,
	     QuantityStorage_P0,
	     QuantityStorage_P0 + WholeQuantity_P->Case.OperatorAndQuantity.Index,
	     WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity,
	     WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator, Type_Dimension, 1,
	     u, v, w, X, Y, Z, Stack[0][Index].Val, &Stack[0][Index].Type, 1) ;
	  Multi[Index] = 0 ;
	  Index++ ;
	} 
	else if (j == 1) { 
	  Index -= j ;
	  ntime = (int)Stack[0][Index].Val[0] ;

	  for (k = 0 ; k < Current.NbrSystem ; k++){
	    Solution_P0 = (struct Solution*)List_Pointer((Current.DofData_P0+k)->Solutions, 0);
	    if(((Current.DofData_P0+k)->CurrentSolution - Solution_P0) >= ntime){ 
	      ((Current.DofData_P0+k)->CurrentSolution) -= ntime ;
	      if (Flag_InfoForTime_ntime != List_Nbr((Current.DofData_P0+k)->Solutions)) {
		Msg::Info("Accessing solution from %d time steps ago", ntime);
		Msg::Info("  -> System %d/%d: TimeStep = %d, Time = %g + i * %g",
			  k+1, Current.NbrSystem, 
			  (Current.DofData_P0+k)->CurrentSolution->TimeStep,
			  (Current.DofData_P0+k)->CurrentSolution->Time,
			  (Current.DofData_P0+k)->CurrentSolution->TimeImag);
		Flag_InfoForTime_ntime = List_Nbr((Current.DofData_P0+k)->Solutions);
	      }
	    }
	    else {
	      if (!Flag_WarningMissSolForTime_ntime) {
		Msg::Warning("Missing solution for time step -%d computation (System #%d/%d)",
			     ntime, k+1, Current.NbrSystem);
		Flag_WarningMissSolForTime_ntime = 1 ;
	      }
	    }
	  }

	  Pos_FemInterpolation
	    (Element,
	     QuantityStorage_P0,
	     QuantityStorage_P0 + WholeQuantity_P->Case.OperatorAndQuantity.Index,
	     WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity,
	     WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator, -1, 0,
	     u, v, w, 0, 0, 0, Stack[0][Index].Val, &Stack[0][Index].Type, 1) ;
	  
	  Multi[Index] = 0 ;
	  Index++ ;

	  for (k = 0 ; k < Current.NbrSystem ; k++){
	    Solution_PN = (struct Solution*)
	      List_Pointer((Current.DofData_P0+k)->Solutions, 
			   List_Nbr((Current.DofData_P0+k)->Solutions)-1);
	    if((Solution_PN - (Current.DofData_P0+k)->CurrentSolution) >= ntime)
	      ((Current.DofData_P0+k)->CurrentSolution) += ntime ;
	  }
	  
	} 
	else
	  Msg::Error("Explicit (x,y,z,time) evaluation not implemented");
      }
      else{
	Msg::Error("Explicit Dof{} evaluation out of context");
      }
      Current.Element = Save_CurrentElement ;
      Current.Region = Save_Region ;
      break ;

    case WQ_TRACE : /* Trace[WholeQuantity, Group] */
      Save_Region = Current.Region ; 

      if(!Element->ElementTrace)
	Msg::Error("Trace must act on discrete quantity (and not in post-processing)");

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
	xyz2uvwInAnElement(Element->ElementTrace, Current.x, Current.y, Current.z, 
			   &Current.ut, &Current.vt, &Current.wt) ;	
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
	((struct Expression*)List_Pointer
	 (Problem_S.Expression, WholeQuantity_P->Case.Expression.Index), 
	 QuantityStorage_P0, u, v, w, &Stack[0][Index]) ;
      Multi[Index] = 0 ;
      Index++ ;
      break ;

    case WQ_BUILTINFUNCTION :
      Index -= WholeQuantity_P->Case.Function.NbrArguments ;

      if (Index != DofIndex)
	((CASTF2V)WholeQuantity_P->Case.Function.Fct)
	  (&WholeQuantity_P->Case.Function, &Stack[0][Index], &Stack[0][Index]) ;
      else /* Dof must be the only argument, only valid with linear functions */
	for (j = 0 ; j < Nbr_Dof ; j++) {
	  Current.NumEntity = Current.NumEntities[j]; /* temp */
	  ((CASTF2V)WholeQuantity_P->Case.Function.Fct)
	    (&WholeQuantity_P->Case.Function, &DofValue[j], &DofValue[j]) ;
	}

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
	  (Current.DofData_P0+k)->Save_CurrentSolution =
	   (Current.DofData_P0+k)->CurrentSolution;

	  if(List_Nbr((Current.DofData_P0+k)->Solutions) > 1){
	    Solution_P0 = (struct Solution*)List_Pointer((Current.DofData_P0+k)->Solutions, 0);
	    if ((Current.DofData_P0+k)->CurrentSolution != Solution_P0)
	      ((Current.DofData_P0+k)->CurrentSolution) -- ;
	  }
	  else {
	    if (!Flag_WarningMissSolForDt) {
	      Msg::Warning("Missing solution for time derivative computation (Sys#%d/%d)",
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
	  (Current.DofData_P0+k)->CurrentSolution =
	    (Current.DofData_P0+k)->Save_CurrentSolution;

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

    case WQ_ATANTERIORTIMESTEP :
      ntime = WholeQuantity_P->Case.AtAnteriorTimeStep.TimeStep ;
      
      for (k = 0 ; k < Current.NbrSystem ; k++){
	Solution_P0 = (struct Solution*)List_Pointer((Current.DofData_P0+k)->Solutions, 0);
	if(((Current.DofData_P0+k)->CurrentSolution - Solution_P0) >= ntime){ 
	  ((Current.DofData_P0+k)->CurrentSolution) -= ntime ;
	  if (Flag_InfoForTime_ntime != List_Nbr((Current.DofData_P0+k)->Solutions)) {
	    Msg::Info("Accessing solution from %d time steps ago", ntime);
	    Msg::Info("  -> System %d/%d: TimeStep = %d, Time = %g + i * %g",
		      k+1, Current.NbrSystem, 
		      (Current.DofData_P0+k)->CurrentSolution->TimeStep,
		      (Current.DofData_P0+k)->CurrentSolution->Time,
		      (Current.DofData_P0+k)->CurrentSolution->TimeImag);
	    Flag_InfoForTime_ntime = List_Nbr((Current.DofData_P0+k)->Solutions);
	  }
	}
	else {
	  if (!Flag_WarningMissSolForTime_ntime) {
	    Msg::Warning("Missing solution for time step -%d computation (System #%d/%d)",
			 ntime, k+1, Current.NbrSystem);
	    Flag_WarningMissSolForTime_ntime = 1 ;
	  }
	}
      }
      
      Save_TimeStep = Current.TimeStep ;
      Save_Time = Current.Time ;
      Save_TimeImag = Current.TimeImag ;
      Current.TimeStep = Current.DofData->CurrentSolution->TimeStep ;
      Current.Time = Current.DofData->CurrentSolution->Time ;
      Current.TimeImag = Current.DofData->CurrentSolution->TimeImag ;
      
      Cal_WholeQuantity(Element, QuantityStorage_P0,
			WholeQuantity_P->Case.AtAnteriorTimeStep.WholeQuantity,
			u, v, w, -1, 0, &Stack[0][Index]) ;
      
      Current.TimeStep = Save_TimeStep ;
      Current.Time = Save_Time ;
      Current.TimeImag = Save_TimeImag ;

      for (k = 0 ; k < Current.NbrSystem ; k++){
	Solution_PN = (struct Solution*)
	  List_Pointer((Current.DofData_P0+k)->Solutions, 
		       List_Nbr((Current.DofData_P0+k)->Solutions)-1);
	if((Solution_PN - (Current.DofData_P0+k)->CurrentSolution) >= ntime)
	  ((Current.DofData_P0+k)->CurrentSolution) += ntime ;
      }

      Multi[Index] = 0 ;
      Index++ ;  
      break ;

    case WQ_MHTRANSFORM :
      if(Current.NbrHar == 1)
	Msg::Error("MHTransform can only be used in complex (multi-harmonic) calculations") ;

      Cal_WholeQuantity(Element, QuantityStorage_P0, 
			WholeQuantity_P->Case.MHTransform.WholeQuantity, 
			u, v, w, -1, 0, &Stack[0][Index]) ; 

      MHTransform(Element, QuantityStorage_P0, u, v, w, &Stack[0][Index],
		  (struct Expression *)List_Pointer(Problem_S.Expression, 
						    WholeQuantity_P->Case.MHTransform.Index),
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

    case WQ_CHANGECURRENTPOSITION : 
      Save_x = Current.x ; Save_y = Current.y ; Save_z = Current.z ;

      Current.x = Stack[0][Index-1].Val[0] ;
      Current.y = Stack[0][Index-1].Val[1] ;
      Current.z = Stack[0][Index-1].Val[2] ;

      Cal_WholeQuantity(Element, QuantityStorage_P0,
			WholeQuantity_P->Case.ChangeCurrentPosition.WholeQuantity,
			u, v, w, -1, 0, &Stack[0][Index-1]) ;
      
      Current.x = Save_x ; Current.y = Save_y ; Current.z = Save_z ;
      break ;

    case WQ_SAVEVALUE :
      if(WholeQuantity_P->Case.SaveValue.Index > MAX_REGISTER_SIZE-1)
	Msg::Error("Register Size Exceeded (%d)", MAX_REGISTER_SIZE);
      /* if (WholeQuantity_P->Case.SaveValue.Index >= 0) */
      Cal_CopyValue(&Stack[0][Index-1], 
		    ValueSaved + WholeQuantity_P->Case.SaveValue.Index) ;
      break ;

    case WQ_VALUESAVED :
      if(WholeQuantity_P->Case.ValueSaved.Index > MAX_REGISTER_SIZE-1)
	Msg::Error("Register size exceeded (%d)", MAX_REGISTER_SIZE);
      Cal_CopyValue(ValueSaved + WholeQuantity_P->Case.ValueSaved.Index, 
		    &Stack[0][Index]) ;
      Multi[Index] = 0 ;
      Index++ ;  
      break ;

    case WQ_SHOWVALUE :
      if (Index-1 == DofIndex) {
	for(j=0 ; j<Nbr_Dof ; j++){
	  fprintf(stderr, "##%d Dof %d ", WholeQuantity_P->Case.ShowValue.Index, j+1);
	  Show_Value(&DofValue[j]);
	}
      } 
      else {
	fprintf(stderr, "##%d ", WholeQuantity_P->Case.ShowValue.Index);
	Show_Value(&Stack[0][Index-1]);
      }
      break ;
      
    default :
      Msg::Error("Unknown type of WholeQuantity (%d)", WholeQuantity_P->Type);
      break;
    }
  }

  if (DofIndexInWholeQuantity < 0) Cal_CopyValue(&Stack[0][0], &DofValue[0]) ;

#if defined(USE_GLOBAL_STACK)
  RecursionIndex--;
#endif
}

/* ------------------------------------------------------------------------ */
/*  P u r i f y _ W h o l e Q u a n t i t y                                 */
/* ------------------------------------------------------------------------ */

List_T * Purify_WholeQuantity(List_T * WQ_L)
{
  /* It would be nice to pre-compute all trivial sequences in a list
     of WholeQuantities. For example, when all the quantties are
     constants, it is pretty stupid to recompute everything
     everytime using the stack... */
  return NULL ;
}

/* ------------------------------------------------------------------------ */
/*  C a l _ S t o r e I n R e g i s t e r                                   */
/* ------------------------------------------------------------------------ */

void Cal_StoreInRegister(struct  Value  *Value, int RegisterIndex)
{
  Cal_CopyValue(Value, ValueSaved + RegisterIndex) ;
}
