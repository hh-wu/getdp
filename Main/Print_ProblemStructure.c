#define RCSID "$Id: Print_ProblemStructure.c,v 1.35 2004-01-19 16:51:18 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
 *
 * Contributor(s):
 *   David Colignon
 *   Johan Gyselinck
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Data_Active.h"
#include "Data_DefineE.h"
#include "Print_ProblemStructure.h"
#include "Treatment_Formulation.h"
#include "CurrentData.h"
#include "GmshClient.h"

static int NbrBlk=-1;

char  * Get_ExpressionName(struct Problem * Problem, int Index) {

  GetDP_Begin("Get_ExpressionName");

  GetDP_Return( ((struct Expression *)List_Pointer(Problem->Expression, Index))->Name );
}

void  Print_WholeQuantity(struct Problem  * Problem,
			  List_T * WholeQuantity, List_T * DQ_L) {
  int    j, k ;
  struct WholeQuantity  * WQ ;

  GetDP_Begin("Print_WholeQuantity");

  WQ = (struct WholeQuantity*)List_Pointer(WholeQuantity, 0) ;

  for (k = 0 ; k < List_Nbr(WholeQuantity) ; k++) {
    switch ((WQ+k)->Type) {

    case WQ_OPERATORANDQUANTITY :
      Msg(CHECK, " {%s %s}",
	  Get_StringForDefine
	  (Operator_Type, (WQ+k)->Case.OperatorAndQuantity.TypeOperator),
	  ((struct DefineQuantity *)
	   List_Pointer(DQ_L, (WQ+k)->Case.OperatorAndQuantity.Index))
	  ->Name) ;
      break ;

    case WQ_OPERATORANDQUANTITYEVAL :
      Msg(CHECK, " {%s %s} ExplicitEvaluation",
	  Get_StringForDefine
	  (Operator_Type, (WQ+k)->Case.OperatorAndQuantity.TypeOperator),
	  ((struct DefineQuantity *)
	   List_Pointer(DQ_L, (WQ+k)->Case.OperatorAndQuantity.Index))
	  ->Name) ;
      break ;

    case WQ_BINARYOPERATOR :
      switch ((WQ+k)->Case.Operator.TypeOperator) {
      case OP_PLUS           : Msg(CHECK, " +")  ;  break ;
      case OP_MINUS          : Msg(CHECK, " -")  ;  break ;
      case OP_TIME           : Msg(CHECK, " *")  ;  break ;
      case OP_DIVIDE         : Msg(CHECK, " /")  ;  break ;
      case OP_MODULO         : Msg(CHECK, " %%") ;  break ;
      case OP_POWER          : Msg(CHECK, " ^")  ;  break ;
      case OP_CROSSPRODUCT   : Msg(CHECK, " x")  ;  break ;
      case OP_LESS           : Msg(CHECK, " <")  ;  break ;
      case OP_GREATER        : Msg(CHECK, " >")  ;  break ;
      case OP_LESSOREQUAL    : Msg(CHECK, " <=") ;  break ;
      case OP_GREATEROREQUAL : Msg(CHECK, " >=") ;  break ;
      case OP_EQUAL          : Msg(CHECK, " ==") ;  break ;
      case OP_NOTEQUAL       : Msg(CHECK, " !=") ;  break ;
      default                : Msg(CHECK, " UnknownBinaryOperator[]") ;  break ;
      }
      break ;

    case WQ_UNARYOPERATOR :
      switch ((WQ+k)->Case.Operator.TypeOperator) {
      case OP_NEG            : Msg(CHECK, " -(unary)")  ;  break ;
      case OP_NOT            : Msg(CHECK, " !")  ;  break ;
      default                : Msg(CHECK, " UnknownUnaryOperator[]") ;  break ;
      }
      break;

    case WQ_EXPRESSION :
      Msg(CHECK, " %s[]", ((struct Expression *)
			   List_Pointer(Problem->Expression,
					(WQ+k)->Case.Expression.Index))->Name) ;
      break ;

    case WQ_BUILTINFUNCTION : 
    case WQ_EXTERNBUILTINFUNCTION :
      Msg(CHECK, " %s", Get_StringForFunction2Nbr(F_Function,
						  (WQ+k)->Case.Function.Fct)) ;
      if ((WQ+k)->Type == WQ_EXTERNBUILTINFUNCTION)  Msg(CHECK, "[.]") ;
      if ((WQ+k)->Case.Function.NbrParameters) {
	Msg(CHECK, "{") ;
	for (j = 0 ; j < (WQ+k)->Case.Function.NbrParameters ; j++) {
	  if (j)  Msg(CHECK, ",") ;
	  Msg(CHECK, " %.10g", (WQ+k)->Case.Function.Para[j]) ;
	}  Msg(CHECK, " }") ;
      }
      break ;

    case WQ_CONSTANT :
      Msg(CHECK, " %.8g", (WQ+k)->Case.Constant) ;
      break ;

    case WQ_TIMEDERIVATIVE :
      Msg(CHECK, " Dt[") ;
      Print_WholeQuantity(Problem, (WQ+k)->Case.TimeDerivative.WholeQuantity, DQ_L) ;
      Msg(CHECK, " ]") ; 
      break ;

    case WQ_TRACE :
      Msg(CHECK, " Trace[") ;
      Print_WholeQuantity(Problem, (WQ+k)->Case.Trace.WholeQuantity, DQ_L) ;
      Msg(CHECK, " , %s ]", ((struct Group*)
			     List_Pointer(Problem->Group, 
					  (WQ+k)->Case.Trace.InIndex))->Name) ; 
      break ;

    case WQ_CAST :
      if(!(WQ+k)->Case.Cast.NbrHar)
	Msg(CHECK, " <%s>[",
	    ((struct FunctionSpace *)
	     List_Pointer(Problem->FunctionSpace,
			  (WQ+k)->Case.Cast.FunctionSpaceIndexForType))->Name) ;
      else
	Msg(CHECK, " <Real>[") ;	
      Print_WholeQuantity(Problem, (WQ+k)->Case.Cast.WholeQuantity, DQ_L) ;
      Msg(CHECK, " ]") ;
      break ;

    case WQ_CURRENTVALUE :
      Msg(CHECK, " $%s", 
	  Get_StringForPointer(Current_Value,
			       (void *)((WQ+k)->Case.CurrentValue.Value))) ;
      break ;

    case WQ_ARGUMENT :
      Msg(CHECK, " $%d", (WQ+k)->Case.Argument.Index) ;
      break ;

    case WQ_TEST :
      Msg(CHECK, " ?") ;
      Print_WholeQuantity(Problem, (WQ+k)->Case.Test.WholeQuantity_True , DQ_L) ;
      Msg(CHECK, " :") ;
      Print_WholeQuantity(Problem, (WQ+k)->Case.Test.WholeQuantity_False, DQ_L) ;
      break ;

    case WQ_SAVEVALUE :
      Msg(CHECK, " ->#%d", (WQ+k)->Case.SaveValue.Index + 1) ;
      break ;

    case WQ_VALUESAVED :
      Msg(CHECK, " #%d", (WQ+k)->Case.ValueSaved.Index + 1) ;
      break ;

    default :
      Msg(CHECK, " ???") ;
      break ;
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ G r o u p                             */
/* ------------------------------------------------------- */

void  Print_Group(struct Problem  * Problem) {
  int    i, Nbr, j ;
  struct Group *GR ;

  GetDP_Begin("Print_Group");

  Nbr = List_Nbr(Problem->Group) ;

  Msg(CHECK, "Group {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {

    GR = (struct Group*)List_Pointer(Problem->Group, i) ;

    Msg(CHECK, "  %s = %s [", GR->Name, 
	Get_StringForDefine(FunctionForGroup_Type, GR->FunctionType)) ;

    if (GR->InitialList != NULL) {
      Msg(CHECK, " {") ;
      for (j = 0 ; j < List_Nbr(GR->InitialList) ; j++)
	Msg(CHECK, " %d", *((int *)List_Pointer(GR->InitialList, j)) ) ;
      Msg(CHECK, " }") ;
    }
    else  Msg(CHECK, " All") ;

    if (GR->InitialSuppList != NULL) {
      if (GR->SuppListType != SUPPLIST_INSUPPORT) {
	Msg(CHECK, ", %s {",
	    Get_StringForDefine(FunctionForGroup_SuppList, GR->SuppListType)) ;
	for (j = 0 ; j < List_Nbr(GR->InitialSuppList) ; j++)
	  Msg(CHECK, " %d", *((int *)List_Pointer(GR->InitialSuppList, j)) ) ;
	Msg(CHECK, " }") ;
      }
      else {
	Msg(CHECK, ", %s",
	    Get_StringForDefine(FunctionForGroup_SuppList, GR->SuppListType)) ;
	Msg(CHECK, " %s",
	    ((struct Group *)
	     List_Pointer(Problem->Group,
			  *((int *)List_Pointer(GR->InitialSuppList, 0))))
	    ->Name) ;
      }
    }

    Msg(CHECK, " ]") ;

    if (GR->Type == MOVINGBAND2D) {
      Msg(CHECK, "  = MovingBand2D [ {");

      for (j = 0 ; j < List_Nbr(GR->MovingBand2D->InitialList1) ; j++)
	Msg(CHECK, " %d", *((int *)List_Pointer(GR->MovingBand2D->InitialList1, j)) ) ;
      Msg(CHECK, " } , {") ;
      for (j = 0 ; j < List_Nbr(GR->MovingBand2D->InitialList2) ; j++)
	Msg(CHECK, " %d", *((int *)List_Pointer(GR->MovingBand2D->InitialList2, j)) ) ;
      Msg(CHECK, " } ]") ;

    }

    Msg(CHECK, " ;  /* Num %d */\n", i) ;
  }

  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ E x p r e s s i o n                   */
/* ------------------------------------------------------- */

void  Print_Expression(struct Problem  * Problem) {

  int    i, Nbr, j ;
  struct Expression *EX ;  
  struct ExpressionPerRegion *EXPR ;

  GetDP_Begin("Print_Expression");

  Nbr = List_Nbr(Problem->Expression) ;

  Msg(CHECK, "Function {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    EX = (struct Expression*)List_Pointer(Problem->Expression, i) ;

    switch (EX->Type) {
    case CONSTANT :
      Msg(CHECK, "  %s = %.10g ;\n", EX->Name, EX->Case.Constant) ;  
      break ;

    case WHOLEQUANTITY :
      Msg(CHECK, "  %s = ", EX->Name) ;
      Print_WholeQuantity(Problem, EX->Case.WholeQuantity, NULL) ;
      Msg(CHECK, " ;\n") ;
      break ;

    case PIECEWISEFUNCTION :
      for (j = 0 ;
	   j < List_Nbr(EX->Case.PieceWiseFunction.ExpressionPerRegion) ; j++) {
	EXPR = (struct ExpressionPerRegion*)
	  List_Pointer(EX->Case.PieceWiseFunction.ExpressionPerRegion, j) ;
	Msg(CHECK, "  %s [%d] = Exp[%s] ;\n",
	    EX->Name, EXPR->RegionIndex,
	    Get_ExpressionName(Problem, EXPR->ExpressionIndex)) ;
      }
      if (!List_Nbr(EX->Case.PieceWiseFunction.ExpressionPerRegion))
	Msg(CHECK, "  DefineFunction[ %s ] ;\n", EX->Name) ;
      break ;

    case UNDEFINED_EXP :
      Msg(CHECK, "  DefineFunction[ %s ] ;\n", EX->Name) ;
      break ;

    default :
      Msg(CHECK, "??? ;\n") ;  
      break ;
    }
  }

  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ C o n s t r a i n t                   */
/* ------------------------------------------------------- */

void  Print_Network(struct MultiConstraintPerRegion  * MCPR_P) {
  int    i, j ;
  struct ConstraintActive *CA ;

  GetDP_Begin("Print_Network");

  CA = MCPR_P->Active ;

  Msg(CHECK, "NbrNode = %d, NbrBranch = %d\n",
      CA->Case.Network.NbrNode, CA->Case.Network.NbrBranch) ;
  Msg(CHECK, "\n") ;

  Msg(CHECK, "MatNode (NbrNode x NbrBranch):\n");
  for (i = 0 ; i < CA->Case.Network.NbrNode ; i++) {
    for (j = 0 ; j < CA->Case.Network.NbrBranch ; j++) {
      Msg(CHECK, "%2d ", CA->Case.Network.MatNode[i][j]) ;
    }
    Msg(CHECK, "\n");
  }

  Msg(CHECK, "\n");

  Msg(CHECK, "MatLoop (NbrLoop x NbrBranch):\n");
  for (i = 0 ; i < CA->Case.Network.NbrLoop ; i++) {
    for (j = 0 ; j < CA->Case.Network.NbrBranch ; j++) {
      Msg(CHECK, "%2d ", CA->Case.Network.MatLoop[i][j]) ;
    }
    Msg(CHECK, "\n");
  }

  GetDP_End ;
}

void  Print_Constraint(struct Problem  * Problem) {
  int    i, Nbr, j, Nbrj, k, Nbrk ;
  struct Constraint *CO ; 
  struct ConstraintPerRegion *CPR ;
  struct MultiConstraintPerRegion MCPR_S ;

  GetDP_Begin("Print_Constraint");

  Nbr = List_Nbr(Problem->Constraint) ;

  Msg(CHECK, "Constraint {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    Msg(CHECK, " /* Num : %d */\n", i) ;
    CO = (struct Constraint*)List_Pointer(Problem->Constraint, i) ;
    Msg(CHECK, "  { Name %s ; Type %s ;\n", CO->Name,
	Get_StringForDefine(Constraint_Type, CO->Type)) ;

    if (CO->Type == NETWORK){
      Nbrk = List_Nbr(CO->MultiConstraintPerRegion) ;
      for (k = 0 ; k < Nbrk ; k++) {
	List_Read(CO->MultiConstraintPerRegion, k, &MCPR_S) ;
	Msg(CHECK, "    Case %s {\n", MCPR_S.Name) ;

	Nbrj = List_Nbr(MCPR_S.ConstraintPerRegion) ;
	for (j = 0 ; j < Nbrj ; j++) {
	  CPR = (struct ConstraintPerRegion*)
	    List_Pointer(MCPR_S.ConstraintPerRegion, j) ;
	  Msg(CHECK, "      { Region %s ;",
	      ((struct Group *)
	       List_Pointer(Problem->Group, CPR->RegionIndex))->Name) ;
	  Msg(CHECK, " Branch { %d, %d } ;",
	      CPR->Case.Network.Node1, CPR->Case.Network.Node2) ;
	  Msg(CHECK, " }\n") ;
	}

	if (!MCPR_S.Active)
	  MCPR_S.Active = Generate_Network(MCPR_S.ConstraintPerRegion) ;
	Print_Network(&MCPR_S) ;
      }
    }
    else {
      Msg(CHECK, "    Case {\n") ;
      Nbrj = List_Nbr(CO->ConstraintPerRegion) ;
      for (j = 0 ; j < Nbrj ; j++) {
	CPR = (struct ConstraintPerRegion*)List_Pointer(CO->ConstraintPerRegion, j) ;
	Msg(CHECK, "      { Region %s ;",
	    ((struct Group *)
	     List_Pointer(Problem->Group, CPR->RegionIndex))->Name) ;
	if (CPR->SubRegionIndex >= 0)
	  Msg(CHECK, " SubRegion %s ;",
	      ((struct Group *)
	       List_Pointer(Problem->Group, CPR->SubRegionIndex))->Name) ;
	if (CPR->Type != CO->Type)
	  Msg(CHECK, " Type %s ;", Get_StringForDefine(Constraint_Type, CPR->Type)) ;

	switch (CPR->Type) {
	case ASSIGN :
	case INIT :
	  Msg(CHECK, " Value Exp[%s] ;",
	      Get_ExpressionName(Problem, CPR->Case.Fixed.ExpressionIndex)) ;
	  break;
	case ASSIGNFROMRESOLUTION :
	case INITFROMRESOLUTION :
	  Msg(CHECK, " NameOfResolution %s ;", CPR->Case.Solve.ResolutionName) ;
	  break;
	}
	  
	if (CPR->TimeFunctionIndex >= 0)
	  Msg(CHECK, " TimeFunction Exp[%s] ;",
	      Get_ExpressionName(Problem, CPR->TimeFunctionIndex)) ;

	Msg(CHECK, " }\n") ;
      }
    }

    Msg(CHECK, "    }\n");
    Msg(CHECK, "  }\n") ;

  }
  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ J a c o b i a n                       */
/* ------------------------------------------------------- */

void  Print_Jacobian(struct Problem  * Problem) {
  int    i, Nbr, j, Nbrj, k ;
  struct JacobianMethod *JM ; 
  struct JacobianCase *JC ;

  GetDP_Begin("Print_Jacobian");

  Nbr = List_Nbr(Problem->JacobianMethod) ;

  Msg(CHECK, "Jacobian {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    Msg(CHECK, " /* Num : %d */\n", i) ;
    JM = (struct JacobianMethod*)List_Pointer(Problem->JacobianMethod, i) ;
    Msg(CHECK, "  { Name %s ;\n", JM->Name) ;

    Msg(CHECK, "    Case {\n") ;
    Nbrj = List_Nbr(JM->JacobianCase) ;
    for (j = 0 ; j < Nbrj ; j++) {
      JC = (struct JacobianCase*)List_Pointer(JM->JacobianCase, j) ;

      Msg(CHECK, "      { Region ") ;
      if (JC->RegionIndex >= 0)
	Msg(CHECK, "%s ;", ((struct Group *)
			    List_Pointer(Problem->Group, JC->RegionIndex))->Name) ;
      else  Msg(CHECK, "All ;") ;
      Msg(CHECK, " Jacobian %s",
	  Get_StringForDefine1Nbr(Jacobian_Type, JC->TypeJacobian)) ;
      if (JC->NbrParameters) {
	for (k = 0 ; k < JC->NbrParameters ; k++) {
	  if (k)  Msg(CHECK, ",") ;  else  Msg(CHECK, " {") ;
	  Msg(CHECK, " %.10g", JC->Para[k]) ;
	}  Msg(CHECK, " }") ;
      }
      Msg(CHECK, " ; }\n") ;
    }
    Msg(CHECK, "    }\n");
    Msg(CHECK, "  }\n") ;

  }
  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ I n t e g r a t i o n                 */
/* ------------------------------------------------------- */

void  Print_Integration (struct Problem  * Problem) {
  int    i, j, k, Nbrm, Nbrc, Nbrq ;
  struct IntegrationMethod *IM ;  
  struct IntegrationCase *IC ;
  struct Quadrature *Q ;

  GetDP_Begin("Print_Integration");

  Nbrm = List_Nbr(Problem->IntegrationMethod) ;

  Msg(CHECK, "Integration {  /* nbr = %d */\n", Nbrm) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbrm ; i++) {
    Msg(CHECK, " /* Num : %d */\n", i) ;
    IM = (struct IntegrationMethod*)List_Pointer(Problem->IntegrationMethod, i) ;
    Msg(CHECK, "  { Name %s ; \n", IM->Name);
    if(IM->CriterionIndex>=0)
      Msg(CHECK, "    Criterion Exp[%s] ; \n", 
	  Get_ExpressionName(Problem, IM->CriterionIndex));

    Nbrc = List_Nbr(IM->IntegrationCase) ;
    Msg(CHECK, "    Case {") ;
    Msg(CHECK, "   /* nbr = %d */\n", Nbrc) ;
    for (j = 0 ; j < Nbrc ; j++) {
      IC = (struct IntegrationCase*)List_Pointer(IM->IntegrationCase, j) ;
      Msg(CHECK, "       { Type %s ;",
	  Get_StringForDefine(Integration_Type, IC->Type)) ;
      switch (IC->Type) {
      case GAUSS :
	Msg(CHECK, "\n");
	Msg(CHECK, "         Case {\n") ;

	Nbrq = List_Nbr(IC->Case) ;
	for (k = 0 ; k < Nbrq ; k++) {
	  Q = (struct Quadrature*)List_Pointer(IC->Case, k) ;
	  Msg(CHECK, "            { GeoElement %s ; NumberOfPoints %d ; }\n", 
	      Get_StringForDefine(Element_Type, Q->ElementType),
	      Q->NumberOfPoints) ;
	}
	Msg(CHECK, "         }\n"); 
	Msg(CHECK, "       }\n") ;  break ;
	
      default :
	Msg(CHECK, " }\n") ;  break ;
      }
    }
    Msg(CHECK, "    }\n");
    Msg(CHECK, "  }\n") ;
  }
  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ F u n c t i o n S p a c e             */
/* ------------------------------------------------------- */

void  Print_FunctionSpace(struct Problem  * Problem) {
  struct FunctionSpace *FS ;
  struct BasisFunction *BF ; 
  struct SubSpace *SS ;
  struct GlobalQuantity *GQ ;
  struct ConstraintInFS *CO ;
  List_T *BF_L, *SS_L, *GQ_L, *CO_L ;
  int    i0, i, Nbr0, Nbr, j, Nbrj ;

  GetDP_Begin("Print_FunctionSpace");

  Nbr0 = List_Nbr(Problem->FunctionSpace) ;

  Msg(CHECK, "FunctionSpace {  /* nbr = %d */\n", Nbr0) ;
  Msg(CHECK, "\n") ;

  for (i0=0 ; i0<Nbr0 ; i0++) {

    Msg(CHECK, " /* Num : %d */\n", i0) ;  
    FS = (struct FunctionSpace*)List_Pointer(Problem->FunctionSpace, i0) ;
    BF_L = FS->BasisFunction ;  SS_L = FS->SubSpace ;
    GQ_L = FS->GlobalQuantity ;  CO_L = FS->Constraint ;

    Msg(CHECK, "  { Name %s ; Type %s ;",
	FS->Name, Get_StringForDefine(Field_Type, FS->Type)) ;
    Msg(CHECK, "\n") ;

    Nbr = List_Nbr(BF_L) ;
    if (Nbr > 0) {
      Msg(CHECK, "    BasisFunction {\n") ;
      BF = (struct BasisFunction*)List_Pointer(BF_L, 0) ;
      for (i=0 ; i<Nbr ; i++) {
	Msg(CHECK, "    /* GlobalNum : %d */\n", BF->Num) ;
	Msg(CHECK, "      Name %s ; NameOfCoef %s ; Function %s ;\n",
	    BF->Name, BF->NameOfCoef,
	    Get_StringFor3Function2Nbr(BF_Function, BF->Function)) ;

	if (BF->SubFunction) {
	  Msg(CHECK, "      SubFunction {") ;
	  Nbrj = List_Nbr(BF->SubFunction) ;
	  for (j=0 ; j<Nbrj ; j++)
	    Msg(CHECK, " %s",
		((struct Expression *)
		 List_Pointer(Problem->Expression, 
			      *((int *)List_Pointer(BF->SubFunction, j))))->Name) ;
	  Msg(CHECK, " } ;\n") ;
	}

	if (BF->SubdFunction) {
	  Msg(CHECK, "      SubdFunction {") ;
	  Nbrj = List_Nbr(BF->SubdFunction) ;
	  for (j=0 ; j<Nbrj ; j++)
	    Msg(CHECK, " %s",
		((struct Expression *)
		 List_Pointer(Problem->Expression, 
			      *((int *)List_Pointer(BF->SubdFunction, j))))->Name) ;
	  Msg(CHECK, " } ;\n") ;
	}

	Msg(CHECK, "      Support %s ;", 
	    (BF->SupportIndex >=0)?
	    ((struct Group *)List_Pointer(Problem->Group, BF->SupportIndex))
	    ->Name : "?") ;
	Msg(CHECK, " Entity %s ;\n",
	    (BF->EntityIndex >=0)?
	    ((struct Group *)List_Pointer(Problem->Group, BF->EntityIndex))
	    ->Name : "?") ;
	
	BF += 1 ;
      }
      Msg(CHECK, "    }\n") ;
    }

    BF = (Nbr>0)? (struct BasisFunction*)List_Pointer(BF_L, 0) : NULL ;
    Nbr = List_Nbr(SS_L) ;
    if (Nbr > 0) {
      Msg(CHECK, "    SubSpace {\n") ;
      SS = (struct SubSpace*)List_Pointer(SS_L, 0) ;
      for (i=0 ; i<Nbr ; i++) {
	Msg(CHECK, "      Name %s ; NameOfBasisFunction {", SS->Name) ;
	Nbrj = List_Nbr(SS->BasisFunction) ;
	for (j=0 ; j<Nbrj ; j++)
	  Msg(CHECK, " %s /* n%d */",
	      ((struct BasisFunction *)
	       List_Pointer(BF_L, *((int *)List_Pointer(SS->BasisFunction, j))))
	      ->Name, *((int *)List_Pointer(SS->BasisFunction, j))) ;
	Msg(CHECK, " } ;\n") ;
	SS += 1 ;
      }
      Msg(CHECK, "    }\n") ;
    }

    Nbr = List_Nbr(GQ_L) ;
    if (Nbr > 0) {
      Msg(CHECK, "    GlobalQuantity {\n") ;
      GQ = (struct GlobalQuantity*)List_Pointer(GQ_L, 0) ;
      for (i=0 ; i<Nbr ; i++) {
	Msg(CHECK, "    /* GlobalNum : %d */\n", GQ->Num) ;
	Msg(CHECK, "      Name %s ; Type %s ;", 
	    GQ->Name,
	    Get_StringForDefine(GlobalQuantity_Type, GQ->Type)) ;
	Msg(CHECK, " NameOfCoef %s ;\n", ((struct BasisFunction *)
					  List_Pointer(BF_L, GQ->ReferenceIndex))->NameOfCoef) ;
	GQ += 1 ;
      }
      Msg(CHECK, "    }\n") ;
    }

    Nbr = List_Nbr(CO_L) ;
    if (Nbr > 0) {
      Msg(CHECK, "    Constraint {\n") ;
      CO = (struct ConstraintInFS*)List_Pointer(CO_L, 0) ;
      for (i=0 ; i<Nbr ; i++) {
	Msg(CHECK, "      NameOfCoef ") ;
	if (CO->QuantityType == LOCALQUANTITY)
	  Msg(CHECK, "%s ;", ((struct BasisFunction *)
			      List_Pointer(BF_L, CO->ReferenceIndex))->NameOfCoef) ;
	else if (CO->QuantityType == GLOBALQUANTITY)
	  Msg(CHECK, "%s ;", ((struct GlobalQuantity *)
			      List_Pointer(GQ_L, CO->ReferenceIndex))->Name) ;
	else Msg(CHECK, "? ;") ;

	Msg(CHECK, " // Entity %s ;\n",
	    ((struct Group *)List_Pointer(Problem->Group, CO->EntityIndex))
	    ->Name ) ;
	
	switch(CO->ConstraintPerRegion->Type) {
	case ASSIGN :
	case INIT :
	  Msg(CHECK, "      // Value Exp[%s] ;", Get_ExpressionName
	      (Problem, CO->ConstraintPerRegion->Case.Fixed.ExpressionIndex)) ;
	  break ;
	case ASSIGNFROMRESOLUTION :
	case INITFROMRESOLUTION :
	  Msg(CHECK, "      // Resolution %s ;",
	      CO->ConstraintPerRegion->Case.Solve.ResolutionName) ;
	  break ;
	}

	if (CO->ConstraintPerRegion->TimeFunctionIndex >= 0)
	  Msg(CHECK, " TimeFunction Exp[%s] ;",
	      Get_ExpressionName(Problem,
				 CO->ConstraintPerRegion->TimeFunctionIndex)) ;
	
	Msg(CHECK, "\n") ;	
	CO += 1 ;
      }
      Msg(CHECK, "    }\n") ;
    }

    Msg(CHECK, "  }\n") ;
  }

  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ F o r m u l a t i o n                 */
/* ------------------------------------------------------- */

void  Print_Formulation(struct Problem  * Problem) {
  struct Formulation *FO ;
  struct DefineQuantity *DQ ;
  struct EquationTerm *FE ;
  struct GlobalEquationTerm *GET ;
  List_T *DQ_L, *FE_L ;
  int    i, Nbr, j, Nbrj, k, Nbrk ;

  GetDP_Begin("Print_Formulation");

  Nbr = List_Nbr(Problem->Formulation) ;

  Msg(CHECK, "Formulation {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    Msg(CHECK, " /* Num : %d */\n", i) ;

    FO = (struct Formulation*)List_Pointer(Problem->Formulation, i) ;

    Msg(CHECK, "  { Name %s ; Type %s ;\n", FO->Name,
	Get_StringForDefine(Formulation_Type, FO->Type)) ;

    DQ_L = FO->DefineQuantity ;  FE_L = FO->Equation ;

    Msg(CHECK, "    Quantity {\n") ;
    Nbrj = List_Nbr(DQ_L) ;
    for (j=0 ; j<Nbrj ; j++) {
      DQ = (struct DefineQuantity*)List_Pointer(DQ_L, j) ;

      Msg(CHECK, "      { Name %s ; Type %s ; NameOfSpace %s",
	  DQ->Name,
	  Get_StringForDefine(DefineQuantity_Type, DQ->Type),
	  (DQ->FunctionSpaceIndex < 0) ? "?" :
	  ((struct FunctionSpace *)
	   List_Pointer(Problem->FunctionSpace, DQ->FunctionSpaceIndex))->Name) ;
      if (DQ->IndexInFunctionSpace) {
	if (DQ->Type == GLOBALQUANTITY)
	  Msg(CHECK, "[%s]",
	      ((struct GlobalQuantity *)
	       List_Pointer
	       (((struct FunctionSpace *)
		 List_Pointer(Problem->FunctionSpace, DQ->FunctionSpaceIndex))
		->GlobalQuantity,
		*((int *)List_Pointer(DQ->IndexInFunctionSpace, 0))))->Name) ;
	else if (DQ->Type == LOCALQUANTITY) {
	  Msg(CHECK, "[") ;
	  Nbrk = List_Nbr(DQ->IndexInFunctionSpace) ;
	  for (k=0 ; k<Nbrk ; k++)
	    Msg(CHECK, " %d", *((int *)List_Pointer(DQ->IndexInFunctionSpace, k))) ;
	  Msg(CHECK, "]") ;
	}
      }
      Msg(CHECK, " ;") ;

      if (DQ->Type == INTEGRALQUANTITY) {
	Msg(CHECK, "\n");
	Msg(CHECK, "        Integration %s ;\n",
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem->IntegrationMethod, 
			  DQ->IntegralQuantity.IntegrationMethodIndex))->Name) ;
	Msg(CHECK, "        Jacobian %s ;",
	    ((struct JacobianMethod *)
	     List_Pointer(Problem->JacobianMethod, 
			  DQ->IntegralQuantity.JacobianMethodIndex))->Name) ;
      }
      Msg(CHECK, " }\n") ;
    }
    Msg(CHECK, "    }\n") ;

    Msg(CHECK, "    Equation {\n") ;

    Nbrj = List_Nbr(FE_L) ;
    for (j=0 ; j<Nbrj ; j++) {
      FE = (struct EquationTerm*)List_Pointer(FE_L, j) ;
      if      (FE->Type == GALERKIN || FE->Type == DERHAM) {
	if(FE->Type == GALERKIN) Msg(CHECK, "      Galerkin { Density [ ... ] ;\n") ;
	if(FE->Type == DERHAM)   Msg(CHECK, "      deRham   { Density [ ... ] ;\n") ;
	Msg(CHECK, "                 In %s ;\n",
	    ((struct Group *)
	     List_Pointer(Problem->Group, FE->Case.LocalTerm.InIndex))->Name ) ;
	Msg(CHECK, "                 Jacobian %s ; \n",
	    ((struct JacobianMethod *)
	     List_Pointer(Problem->JacobianMethod, 
			  FE->Case.LocalTerm.JacobianMethodIndex))->Name );
	Msg(CHECK, "                 Integration %s ; }\n",
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem->IntegrationMethod, 
			  FE->Case.LocalTerm.IntegrationMethodIndex))->Name ) ;

	Msg(CHECK, "      /* Inventaire des DQ (%d) [%d] :",
	    FE->Case.LocalTerm.Term.NbrQuantityIndex,
	    FE->Case.LocalTerm.Term.QuantityIndexPost) ;
	for (k = 0 ; k < FE->Case.LocalTerm.Term.NbrQuantityIndex ; k++)
	  Msg(CHECK, " {%s}",
	      ((struct DefineQuantity *)
	       List_Pointer
	       (DQ_L, FE->Case.LocalTerm.Term.QuantityIndexTable[k]))->Name) ;
	Msg(CHECK, " */\n") ;

	Msg(CHECK, "      /* WholeQuantity (%d) :",
	    List_Nbr(FE->Case.LocalTerm.Term.WholeQuantity)) ;
	Print_WholeQuantity(Problem, FE->Case.LocalTerm.Term.WholeQuantity, DQ_L) ;
	Msg(CHECK, " */\n") ;

      }
      else if (FE->Type == GLOBALTERM     ) {
	Msg(CHECK, "      GlobalTerm { [ ... ] ;\n") ;
	Msg(CHECK, "                 In %s ;\n",
	    ((struct Group *)
	     List_Pointer(Problem->Group, FE->Case.GlobalTerm.InIndex))->Name ) ;
	
	Msg(CHECK, "      /* Inventaire des DQ (%d) [%d,%d] :",
	    FE->Case.GlobalTerm.Term.NbrQuantityIndex,
	    FE->Case.GlobalTerm.Term.DefineQuantityIndexDof,
	    FE->Case.GlobalTerm.Term.DefineQuantityIndexEqu) ;
	for (k = 0 ; k < FE->Case.GlobalTerm.Term.NbrQuantityIndex ; k++)
	  Msg(CHECK, " {%s}",
	      ((struct DefineQuantity *)
	       List_Pointer
	       (DQ_L, FE->Case.GlobalTerm.Term.QuantityIndexTable[k]))->Name) ;
	Msg(CHECK, " */\n") ;
	
	Msg(CHECK, "      /* WholeQuantity (%d) :",
	    List_Nbr(FE->Case.GlobalTerm.Term.WholeQuantity)) ;
	Print_WholeQuantity(Problem, FE->Case.GlobalTerm.Term.WholeQuantity, DQ_L) ;
	Msg(CHECK, " */\n") ;
	
      }
      else if (FE->Type == GLOBALEQUATION) {
	Msg(CHECK, "      GlobalEquation { Type %s ; UsingConstraint %s ;\n",
	    Get_StringForDefine(Constraint_Type, FE->Case.GlobalEquation.Type),
	    ((struct Constraint *)
	     List_Pointer(Problem->Constraint,
			  FE->Case.GlobalEquation.ConstraintIndex))->Name) ;

	Nbrk = List_Nbr(FE->Case.GlobalEquation.GlobalEquationTerm) ;
	for (k = 0 ; k < Nbrk ; k++) {
	  GET = (struct GlobalEquationTerm*)
	    List_Pointer(FE->Case.GlobalEquation.GlobalEquationTerm, k) ;
	  Msg(CHECK, "        { Node {%s} ; Loop {%s} ; Equation {%s} ;",
	      ((struct DefineQuantity *)
	       List_Pointer(DQ_L, GET->DefineQuantityIndexNode))->Name,
	      ((struct DefineQuantity *)
	       List_Pointer(DQ_L, GET->DefineQuantityIndexLoop))->Name,
	      ((struct DefineQuantity *)
	       List_Pointer(DQ_L, GET->DefineQuantityIndexEqu))->Name) ;
	  Msg(CHECK, " In %s ; }\n",
	      ((struct Group *)
	       List_Pointer(Problem->Group, GET->InIndex))->Name) ;
	}
      }
    }
    Msg(CHECK, "    }\n") ;
    Msg(CHECK, "  }\n") ;
  }
  Msg(CHECK, "\n");
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ R e s o l u t i o n                   */
/* ------------------------------------------------------- */

void  Print_Operation(struct Resolution * RE, List_T * Operation_L,
		      struct Problem * Problem) {
  struct Operation *OPE ;
  int    i, j, Nbrj ;

  GetDP_Begin("Print_Operation");

  NbrBlk++;

  Nbrj = List_Nbr(Operation_L) ;


  for (j=0 ; j<Nbrj ; j++) {
    OPE = (struct Operation*)List_Pointer(Operation_L, j) ;

    switch (OPE->Type) {

    case OPERATION_GENERATE :
    case OPERATION_GENERATEONLY :
    case OPERATION_GENERATEFMMGROUPS :
    case OPERATION_SOLVE :
    case OPERATION_GENERATEJAC :
    case OPERATION_SOLVEJAC :
    case OPERATION_GENERATESEPARATE :
    case OPERATION_UPDATECONSTRAINT :
    case OPERATION_INITSOLUTION :
    case OPERATION_SAVESOLUTION :
    case OPERATION_SAVESOLUTIONS :
    case OPERATION_READSOLUTION :
    case OPERATION_TRANSFERSOLUTION :
    case OPERATION_TRANSFERINITSOLUTION :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      %s[%s] ;\n",
	  Get_StringForDefine(Operation_Type, OPE->Type),
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name) ;
      break ;

   case OPERATION_UPDATE :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      Update [ %s, Exp[%s] ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  Get_ExpressionName(Problem,
			     OPE->Case.Update.ExpressionIndex)) ;
      break ;

   case OPERATION_FOURIERTRANSFORM :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      FourierTransform [ %s, %s, {...} ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->Case.FourierTransform.DefineSystemIndex[0]))->Name,
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->Case.FourierTransform.DefineSystemIndex[1]))->Name);
      break ;

    case OPERATION_TIMELOOPTHETA :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      TimeLoopTheta[ %.10g, %.10g, Exp[%s], Exp[%s] ] {\n",
	  OPE->Case.TimeLoopTheta.Time0, OPE->Case.TimeLoopTheta.TimeMax,
	  Get_ExpressionName(Problem,
			     OPE->Case.TimeLoopTheta.DTimeIndex),
	  Get_ExpressionName(Problem,
			     OPE->Case.TimeLoopTheta.ThetaIndex)) ;
      Print_Operation(RE, OPE->Case.TimeLoopTheta.Operation, Problem) ;
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      }\n") ;
      break ;

    case OPERATION_TIMELOOPNEWMARK :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      TimeLoopNewmark[ %.10g, %.10g, Exp[%s], %.10g, %.10g ] {\n",
	  OPE->Case.TimeLoopNewmark.Time0, OPE->Case.TimeLoopNewmark.TimeMax,
	  Get_ExpressionName(Problem,
			     OPE->Case.TimeLoopNewmark.DTimeIndex),
	  OPE->Case.TimeLoopNewmark.Beta, OPE->Case.TimeLoopNewmark.Gamma);
      Print_Operation(RE, OPE->Case.TimeLoopNewmark.Operation, Problem) ;
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      }\n") ;
      break ;

    case OPERATION_ITERATIVELOOP :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      IterativeLoop [ %d, Exp[%s], %.10g ] {\n",
	  OPE->Case.IterativeLoop.NbrMaxIteration,
	  Get_ExpressionName(Problem,
			     OPE->Case.IterativeLoop.RelaxationFactorIndex),
	  OPE->Case.IterativeLoop.Criterion) ;
      Print_Operation(RE, OPE->Case.IterativeLoop.Operation, Problem) ;
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      }\n") ;
      break ;

    case OPERATION_LANCZOS :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      Lanczos [ %s, %d, { ... } , %.10g ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  OPE->Case.Lanczos.Size,
	  OPE->Case.Lanczos.Shift);
      break ;

    case OPERATION_SETTIME :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      SetTime [ Exp[%s] ] ;\n",
	  Get_ExpressionName(Problem,
			     OPE->Case.SetTimeIndex)) ;
      break ;

    case OPERATION_SETFREQUENCY :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      SetFrequency [ %s, Exp[%s] ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  Get_ExpressionName(Problem,
			     OPE->Case.SetFrequency.ExpressionIndex)) ;
      break ;

    case OPERATION_BREAK :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      Break ;\n");
      break ;

    case OPERATION_SYSTEMCOMMAND :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      SystemCommand \" %s \" ;\n",
	  OPE->Case.SystemCommand);
      break ;

    case OPERATION_TEST :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      If [ Exp[%s] ] {\n",
	  Get_ExpressionName(Problem,
			     OPE->Case.Test.ExpressionIndex)) ;
      Print_Operation(RE, OPE->Case.Test.Operation_True, Problem) ;
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      }\n") ;
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      if(OPE->Case.Test.Operation_False){
	Msg(CHECK, "      Else {\n");
	Print_Operation(RE, OPE->Case.Test.Operation_False, Problem) ;
	Msg(CHECK, "      }\n") ;
      }
      break ;

    case OPERATION_CHANGEOFCOORDINATES :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      ChangeOfCoordinates [ %s, Exp[%s] ] ;\n",
	  ((struct Group *)
	   List_Pointer(Problem->Group,
			OPE->Case.ChangeOfCoordinates.GroupIndex))->Name,
	  Get_ExpressionName(Problem,
			     OPE->Case.ChangeOfCoordinates.ExpressionIndex)) ;
      break ;

    case OPERATION_INIT_MOVINGBAND2D :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      Init_MovingBand2D [ %s ] ;\n",
	  ((struct Group *)
	   List_Pointer(Problem->Group,
			OPE->Case.Init_MovingBand2D.GroupIndex))->Name) ;
      break ;

    case OPERATION_MESH_MOVINGBAND2D :
      for (i=0 ; i<2*NbrBlk ; i++) Msg(CHECK, " ") ;
      Msg(CHECK, "      Mesh_MovingBand2D [ %s ] ;\n",
	  ((struct Group *)
	   List_Pointer(Problem->Group,
			OPE->Case.Mesh_MovingBand2D.GroupIndex))->Name) ;
      break ;

    case OPERATION_DEFORMEMESH :
      Msg(CHECK, "      DeformeMesh [%s, %s,  '%s'] ; \n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name, OPE->Case.DeformeMesh.Quantity,
	  OPE->Case.DeformeMesh.Name_MshFile) ;
      break ;

    default :
      Msg(CHECK, "      ??? ;\n") ;
      break ;
    }
  }

  NbrBlk--;
  GetDP_End ;
}


void  Print_Resolution(struct Problem  * Problem) {
  struct Resolution *RE ;
  struct DefineSystem *DS ;
  List_T *DS_L ;  
  int    i, Nbr, j, Nbrj, k ;

  GetDP_Begin("Print_Resolution");

  Nbr = List_Nbr(Problem->Resolution) ;

  Msg(CHECK, "Resolution {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    Msg(CHECK, " /* Num : %d */\n", i) ;

    RE = (struct Resolution*)List_Pointer(Problem->Resolution, i) ;

    Msg(CHECK, "  { Name %s\n", RE->Name) ;

    DS_L = RE->DefineSystem ;

    Msg(CHECK, "    System {\n") ;
    Nbrj = List_Nbr(DS_L) ;
    for (j=0 ; j<Nbrj ; j++) {
      DS = (struct DefineSystem*)List_Pointer(DS_L, j) ;

      Msg(CHECK, "      { Name %s ; Type %s ; ",
	  DS->Name,
	  Get_StringForDefine(DefineSystem_Type, DS->Type)) ;

      Msg(CHECK, "NameOfFormulation {") ;
      for (k = 0 ; k < List_Nbr(DS->FormulationIndex) ; k++)
	Msg(CHECK, " %s",
	    ((struct Formulation *)
	     List_Pointer(Problem->Formulation,
			  *((int *)List_Pointer(DS->FormulationIndex, k)))) ->Name) ;
      Msg(CHECK, " } ; ") ;

      if(DS->MeshName)
	Msg(CHECK, "NameOfMesh %s ;", DS->MeshName) ;

      if (DS->Type == VAL_COMPLEX) {
	Msg(CHECK, "Frequency {") ;

	for (k = 0 ; k < List_Nbr(DS->FrequencyValue) ; k++) {
	  if (k)  Msg(CHECK, ",") ;
	  Msg(CHECK, " %.10g", *((double *)List_Pointer(DS->FrequencyValue, k))) ;
	}
	Msg(CHECK, " } ;") ;
      }

      Msg(CHECK, " }\n") ;
    }
    Msg(CHECK, "    }\n") ;

    Msg(CHECK, "    Operation {\n") ;
    Print_Operation(RE, RE->Operation, Problem) ;
    Msg(CHECK, "    }\n") ;
    Msg(CHECK, "  }\n") ;
  }
  Msg(CHECK, "\n"); 
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ P o s t P r o c e s s i n g           */
/* ------------------------------------------------------- */

void  Print_PostProcessing(struct Problem  * Problem) {

  struct PostProcessing    * PP ;  
  struct PostQuantity      * PQ ;
  struct PostQuantityTerm  * PQT ;
  int   i, Nbr, j, Nbrj, k, Nbrk ;

  GetDP_Begin("Print_PostProcessing");

  Nbr = List_Nbr(Problem->PostProcessing) ;

  Msg(CHECK, "PostProcessing {  /* nbr = %d */\n", Nbr) ;
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    Msg(CHECK, " /* Num : %d */\n", i) ;

    PP = (struct PostProcessing*)List_Pointer(Problem->PostProcessing, i) ;

    Msg(CHECK, "  { Name %s ; NameOfFormulation %s ; \n", PP->Name,
	((struct Formulation *)
	 List_Pointer(Problem->Formulation, PP->FormulationIndex))->Name) ;

    if(PP->NameOfSystem)
      Msg(CHECK, "NameOfSystem %s ;", PP->NameOfSystem);
    
    Nbrj = List_Nbr(PP->PostQuantity) ;
    if (Nbrj > 0) {
      Msg(CHECK, "    Quantity {\n") ;
      for (j = 0 ; j < Nbrj ; j++) {
	PQ = (struct PostQuantity*)List_Pointer(PP->PostQuantity, j) ;
	Msg(CHECK, "      { Name %s ;\n", PQ->Name) ;
	Msg(CHECK, "        Value {\n") ;
	Nbrk = List_Nbr(PQ->PostQuantityTerm) ;
	for (k = 0 ; k < Nbrk ; k++) {
	  PQT = (struct PostQuantityTerm*)List_Pointer(PQ->PostQuantityTerm, k) ;
	  Msg(CHECK, "          { %s { ['", 
	      Get_StringForDefine(PostQuantityTerm_EvaluationType, 
				  PQT->EvaluationType)) ;
	  Print_WholeQuantity
	    (Problem, PQT->WholeQuantity,
	     ((struct Formulation *)
	      List_Pointer(Problem->Formulation, PP->FormulationIndex))
	     ->DefineQuantity) ;
	  Msg(CHECK, " '] ; /* DefineQuantityType %s */\n",
	      Get_StringForDefine(DefineQuantity_Type, PQT->Type)) ;

	  if(PQT->InIndex > 0)
	    Msg(CHECK, "                    In %s ;\n", 
		((struct Group *)List_Pointer(Problem->Group, PQT->InIndex))->Name);
	  if(PQT->IntegrationMethodIndex > 0)
	    Msg(CHECK, "                    Integration %s ;\n", 
		((struct IntegrationMethod *) 
		 List_Pointer(Problem->IntegrationMethod, 
			      PQT->IntegrationMethodIndex))->Name) ;
	  if(PQT->JacobianMethodIndex > 0)
	    Msg(CHECK, "                    Jacobian %s ;\n", 
		((struct JacobianMethod *)
		 List_Pointer(Problem->JacobianMethod, 
			      PQT->JacobianMethodIndex))->Name) ;
	  
	}
	Msg(CHECK, "          } } }\n") ;  Msg(CHECK, "      }\n") ;
      }
      Msg(CHECK, "    }\n") ;
    }
    Msg(CHECK, "  }\n") ;
  }
  Msg(CHECK, "\n}");
  Msg(CHECK, "\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  -->  P r i n t _ P o s t O p e r a t i o n             */
/* ------------------------------------------------------- */

/* This routine prints into a string buffer: check Pos_Interactive.c
   to understand why */

char * Print_PostSubOperation(struct Problem *Problem,
			      struct PostProcessing *PP,
			      struct PostSubOperation *PSO){
  int  i;
  char tmp[256], *out;

  out = (char*)Malloc(1000*sizeof(char));

  switch (PSO->Type) {
  case POP_PRINT :
    sprintf(out, "Print[%s",
	    ((struct PostQuantity *)
	     List_Pointer(PP->PostQuantity, PSO->PostQuantityIndex[0]))->Name) ;
    
    if(PSO->PostQuantitySupport[0] >= 0){
      sprintf(tmp, "[%s]",
	      ((struct Group *)
	       List_Pointer(Problem->Group, PSO->PostQuantitySupport[0]))->Name) ;
      strcat(out,tmp);
    }
    
    if(PSO->PostQuantityIndex[1] >= 0) {
      sprintf(tmp, " %s %s",
	      Get_StringForDefine(PostSubOperation_CombinationType, PSO->CombinationType),
	      ((struct PostQuantity *)
	       List_Pointer(PP->PostQuantity, PSO->PostQuantityIndex[1]))->Name) ;
      strcat(out,tmp);
      if(PSO->PostQuantitySupport[1] >= 0){
	sprintf(tmp, "[%s]",
		((struct Group *)
		 List_Pointer(Problem->Group, PSO->PostQuantitySupport[1]))->Name) ;
	strcat(out,tmp);
      }
    }
    
    switch (PSO->SubType) {
    case PRINT_ONREGION :
      if (PSO->Case.OnRegion.RegionIndex >=0)
	sprintf(tmp, ", OnRegion %s",
		((struct Group *)
		 List_Pointer(Problem->Group,
			      PSO->Case.OnRegion.RegionIndex))->Name ) ;
      else
	sprintf(tmp, ", OnGlobal") ;
      break ;
    case PRINT_ONELEMENTSOF :
      sprintf(tmp, ", OnElementsOf %s",
	      ((struct Group *)
	       List_Pointer(Problem->Group,
			    PSO->Case.OnRegion.RegionIndex))->Name ) ;
      break ;
    case PRINT_ONGRID :
      sprintf(tmp, ", OnGrid %s",
	      ((struct Group *)
	       List_Pointer(Problem->Group,
			    PSO->Case.OnRegion.RegionIndex))->Name ) ;
      break ;
    case PRINT_ONGRID_0D :
      sprintf(tmp, ", OnPoint {%.10g,%.10g,%.10g}",
	      PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0],
	      PSO->Case.OnGrid.z[0]) ;
      break ;
    case PRINT_ONGRID_1D :
      sprintf(tmp, ", OnLine {{%.10g,%.10g,%.10g}{%.10g,%.10g,%.10g}} {%d}",
	      PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0],
	      PSO->Case.OnGrid.z[0],
	      PSO->Case.OnGrid.x[1], PSO->Case.OnGrid.y[1],
	      PSO->Case.OnGrid.z[1], PSO->Case.OnGrid.n[0]) ;
      break ;
    case PRINT_ONGRID_2D :
      sprintf(tmp, ", OnPlane {{%.10g,%.10g,%.10g}{%.10g,%.10g,%.10g}"
	      "{%.10g,%.10g,%.10g}} {%d,%d}",
	      PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0],
	      PSO->Case.OnGrid.z[0],
	      PSO->Case.OnGrid.x[1], PSO->Case.OnGrid.y[1],
	      PSO->Case.OnGrid.z[1],
	      PSO->Case.OnGrid.x[2], PSO->Case.OnGrid.y[2],
	      PSO->Case.OnGrid.z[2],
	      PSO->Case.OnGrid.n[0], PSO->Case.OnGrid.n[1]) ;
      break ;
    default : /* parametric grid, ... */
      strcpy(out, "");
      return out;
      break ;
    }
    strcat(out,tmp);
    break;

  default : /* POP_GROUP, POP_ECHO, etc. */
    strcpy(out, "");
    return out;

    break;
   
  }

  if(PSO->Depth != 1){
    sprintf(tmp, ", Depth %d", PSO->Depth) ;
    strcat(out,tmp);
  }

  if(PSO->Skin) strcat(out,", Skin");

  if(PSO->NoNewLine) strcat(out,", NoNewLine");

  if(PSO->Smoothing){
    sprintf(tmp, ", Smoothing %d", PSO->Smoothing) ;
    strcat(out,tmp);
  }

  if(PSO->Dimension != _ALL){
    sprintf(tmp, ", Dimension %d", PSO->Dimension) ;
    strcat(out,tmp);
  }
  
  if(PSO->HarmonicToTime > 1){
    sprintf(tmp, ", HarmonicToTime %d", PSO->HarmonicToTime) ;
    strcat(out,tmp);
  }
  
  if(PSO->Sort){
    sprintf(tmp, ", Sort %s",
	    Get_StringForDefine(PostSubOperation_SortType, PSO->Adapt));
    strcat(out,tmp);
  }

  if(PSO->Adapt){
    sprintf(tmp, ", Adapt %s",
	    Get_StringForDefine(PostSubOperation_AdaptationType, PSO->Adapt));
    strcat(out,tmp);
  }

  if(PSO->Target >= 0){
    sprintf(tmp, ", Target %g", PSO->Target) ;
    strcat(out,tmp);
  }

  if(PSO->Iso){
    if(PSO->Iso < 0){
      strcat(out, ", Iso {") ;
      for(i=0 ; i<List_Nbr(PSO->Iso_L) ; i++){
	if(i!=List_Nbr(PSO->Iso_L)-1) sprintf(tmp, "%g,", *(double*)List_Pointer(PSO->Iso_L,i)) ;
	else sprintf(tmp, "%g}", *(double*)List_Pointer(PSO->Iso_L,i)) ;
	strcat(out,tmp);
      }
    }
    else{
      sprintf(tmp, ", Iso %d", PSO->Iso) ;
      strcat(out,tmp);
    }
  }

  /* todo: time steps, frequencies, values, changeofcoord, ... */

  sprintf(tmp, ", Format %s",
	  Get_StringForDefine(PostSubOperation_Format, PSO->Format));
  strcat(out,tmp);

  if(PSO->FileOut){
    sprintf(tmp, ", File %s\"%s\"", 
	    (PSO->CatFile==2)?">> ":(PSO->CatFile==1)?"> ":"", PSO->FileOut) ;
    strcat(out,tmp);
  }

  sprintf(tmp, "]") ;
  strcat(out,tmp);

  return out;
}

void  Print_PostOperation(struct Problem  * Problem) {
  struct PostProcessing  * PP ;  
  struct PostOperation     *PO ;
  struct PostSubOperation  *PSO ;
  int   i, Nbr, k, Nbrk ;
  char *str;

  GetDP_Begin("Print_PostOperation");

  Nbr = List_Nbr(Problem->PostOperation) ;

  Msg(CHECK, "PostOperation {  /* nbr = %d */\n", Nbr);
  Msg(CHECK, "\n") ;

  for (i = 0 ; i < Nbr ; i++) {
    PO = (struct PostOperation*)List_Pointer(Problem->PostOperation, i) ;
    PP = (struct PostProcessing*)List_Pointer(Problem->PostProcessing, 
					      PO->PostProcessingIndex) ;

    Msg(CHECK, "  { Name %s ; NameOfPostProcessing %s ;\n", PO->Name, PP->Name) ;
    Msg(CHECK, "    Operation {\n");

    Nbrk = List_Nbr(PO->PostSubOperation) ;
    for (k = 0 ; k < Nbrk ; k++) {
      PSO = (struct PostSubOperation*)List_Pointer(PO->PostSubOperation, k) ;
      Msg(CHECK, "      %s ;\n", str=Print_PostSubOperation(Problem, PP, PSO));
      Free(str);
    }
    Msg(CHECK, "    }\n ");
    Msg(CHECK, " }\n") ;
  }
  Msg(CHECK, "\n"); 
  Msg(CHECK, "}\n") ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  P r i n t _ P r o b l e m S t r u c t u r e                             */
/* ------------------------------------------------------------------------ */

void  Print_Constant();

int Print_Object(int ichoice, struct Problem * Problem){
  switch (ichoice) {
  case  0 : Print_Constant      () ;  break ;
  case  1 : Print_Group         (Problem) ;  break ;
  case  2 : Print_Expression    (Problem) ;  break ;
  case  3 : Print_Constraint    (Problem) ;  break ;
  case  4 : Print_Jacobian      (Problem) ;  break ;
  case  5 : Print_Integration   (Problem) ;  break ;
  case  6 : Print_FunctionSpace (Problem) ;  break ;
  case  7 : Print_Formulation   (Problem) ;  break ;
  case  8 : Print_Resolution    (Problem) ;  break ;
  case  9 : Print_PostProcessing(Problem) ;  break ;
  case 10 : Print_PostOperation (Problem) ;  break ;
  default : return 1;
  }
  return 0;
}

void  Print_ProblemStructure(struct Problem  * Problem) {
  char buff[128];
  int  ichoice;

  GetDP_Begin("Print_ProblemStructure");

  while (1) {
    Msg(INFO, "Checking") ;
    Msg(CHECK, "(1) Group                (2) Function\n") ; 
    Msg(CHECK, "(3) Constraint           (4) Jacobian\n") ;
    Msg(CHECK, "(5) Integration          (6) FunctionSpace\n") ;
    Msg(CHECK, "(7) Formulation          (8) Resolution\n") ;
    Msg(CHECK, "(9) PostProcessing      (10) PostOperation\n") ;
    Msg(CHECK, "(0) Quit\n") ; 
    Msg(CHECK, "Choice: ") ;
    fgets(buff, 128, stdin);
    ichoice = atoi(buff);
    if(Print_Object(ichoice?ichoice:-1, Problem)){
      Msg(CHECK, "E n d C h e c k i n g\n") ;
      GetDP_End ;
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------- */
/*  P r i n t _ L i s t R e s o l u t i o n                */
/* ------------------------------------------------------- */

void  Print_ListResolution(int choose, struct Problem  * Problem) {
  struct Resolution *RE ;
  int    i, Nbr, ichoice = 0 ;
  char   buff[128];

  GetDP_Begin("Print_ListResolution");

  if((Nbr = List_Nbr(Problem->Resolution))){
    if(Flag_LRES < 0){
      ichoice = - Flag_LRES ;
    }
    else{
      Msg(INFO, "Available Resolutions") ;
      for (i = 0 ; i < Nbr ; i++) {
	RE = (struct Resolution*)List_Pointer(Problem->Resolution, i) ;
	Msg(CHECK, "(%d) %s\n", i+1, RE->Name) ;
	if(Flag_SOCKET > 0)
	  Gmsh_SendString(Flag_SOCKET, GMSH_CLIENT_OPTION_1, RE->Name);
      }
      if(choose){
	Msg(CHECK, "Choice: ") ;
	fgets(buff, 128, stdin);
	ichoice = atoi(buff);
      }
    }
    if(ichoice > 0 && ichoice < Nbr+1){
      RE = (struct Resolution*)List_Pointer(Problem->Resolution, ichoice-1) ;
      Name_Resolution = RE->Name ; 
    }
    else if(choose)
      Msg(ERROR, "Unknown Resolution") ;
  }
  else
    Msg(WARNING, "No Resolution available") ;

  GetDP_End ;
}

/* ------------------------------------------------------- */
/*  P r i n t _ L i s t P o s t P r o c e s s i n g        */
/* ------------------------------------------------------- */

void  Print_ListPostProcessing(int choose, struct Problem  * Problem) {
  struct PostProcessing *PP ;
  int    i, Nbr, ichoice = 0 ;
  char   buff[128];

  GetDP_Begin("Print_ListPostProcessing");

  if((Nbr = List_Nbr(Problem->PostProcessing))){
    Msg(INFO, "Available PostProcessings") ;
    for (i = 0 ; i < Nbr ; i++) {
      PP = (struct PostProcessing*)List_Pointer(Problem->PostProcessing, i) ;
      Msg(CHECK, "(%d) %s\n", i+1, PP->Name) ;
    }
    if(choose){
      Msg(CHECK, "Choice: ") ;
      fgets(buff, 128, stdin);
      ichoice = atoi(buff);
    }
    if(ichoice > 0 && ichoice < Nbr+1){
      PP = (struct PostProcessing*)List_Pointer(Problem->PostProcessing, ichoice-1) ;
      Name_PostProcessing[0] = PP->Name ;
      Name_PostProcessing[1] = NULL ;
    }
    else if(choose)
      Msg(ERROR, "Unknown PostProcessing") ;
  }
  else
    Msg(WARNING, "No PostProcessing available") ;

  GetDP_End ;
}

/* ------------------------------------------------------- */
/*  P r i n t _ L i s t P o s t O p e r a t i o n          */
/* ------------------------------------------------------- */

void  Print_ListPostOperation(int choose, struct Problem  * Problem) {
  struct PostOperation *PO ;
  int    i, Nbr, ichoice = 0 ;
  char   buff[128];

  GetDP_Begin("Print_ListPostOperation");

  if((Nbr = List_Nbr(Problem->PostOperation))){
    if(Flag_LPOS < 0){
      ichoice = - Flag_LPOS ;
    }
    else{
      Msg(INFO, "Available PostOperations") ;
      for (i = 0 ; i < Nbr ; i++) {
	PO = (struct PostOperation*)List_Pointer(Problem->PostOperation, i) ;
	Msg(CHECK, "(%d) %s\n", i+1, PO->Name) ;
	if(Flag_SOCKET > 0)
	  Gmsh_SendString(Flag_SOCKET, GMSH_CLIENT_OPTION_2, PO->Name);
      }
      if(choose){
	Msg(CHECK, "Choice: ") ;
	fgets(buff, 128, stdin);
	ichoice = atoi(buff);
      }
    }
    if(ichoice > 0 && ichoice < Nbr+1){
      PO = (struct PostOperation*)List_Pointer(Problem->PostOperation, ichoice-1) ;
      Name_PostOperation[0] = PO->Name ;
      Name_PostOperation[1] = NULL ;
    }
    else if(choose)
      Msg(ERROR, "Unknown PostOperation") ;
  }
  else
    Msg(WARNING, "No PostOperation available");
    
  GetDP_End ;
}

