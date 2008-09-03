// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <stdlib.h>
#include <strings.h>
#include <string>
#include "ProData.h"
#include "ProDefine.h"
#include "ProParser.h"
#include "Message.h"
#if defined(HAVE_LEGACY)
#include "Generate_Network.h"
#endif

// Global problem structure: this is the only problem structure that
// is instanciated, and it is filled by the parser
struct Problem Problem_S;

// Global run-time current data: this is the only current data
// structure that is instanciated
struct CurrentData Current;

// Sorting functions

int fcmp_Integer(const void *a, const void *b)
{
  return(*(int*)a - *(int*)b );
}

int fcmp_Constant (const void *a, const void *b) 
{
  return ( strcmp(((struct Constant *)a)->Name, ((struct Constant *)b)->Name));
}

int fcmp_Expression_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct Expression *)b)->Name ) );
}

int fcmp_Group_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct Group *)b)->Name ) );
}

int fcmp_Constraint_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct Constraint *)b)->Name ) );
}

int fcmp_JacobianMethod_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct JacobianMethod *)b)->Name ) );
}

int fcmp_IntegrationMethod_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct IntegrationMethod *)b)->Name ) );
}

int fcmp_BasisFunction_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->Name ) );
}

int fcmp_FunctionSpace_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct FunctionSpace *)b)->Name ) );
}

int fcmp_BasisFunction_NameOfCoef(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->NameOfCoef ) );
}

int fcmp_SubSpace_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct SubSpace *)b)->Name ) );
}

int fcmp_GlobalQuantity_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct GlobalQuantity *)b)->Name ) );
}

int fcmp_Formulation_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct Formulation *)b)->Name ) );
}

int fcmp_DefineQuantity_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct DefineQuantity *)b)->Name ) );
}

int fcmp_DefineSystem_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct DefineSystem *)b)->Name ) );
}

int fcmp_Resolution_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct Resolution *)b)->Name ) );
}

int fcmp_PostProcessing_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct PostProcessing *)b)->Name ) );
}

int fcmp_PostQuantity_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct PostQuantity *)b)->Name ) );
}

int fcmp_PostOperation_Name(const void *a, const void *b) 
{
  return ( strcmp((char *)a, ((struct PostOperation *)b)->Name ) );
}

// I/O routines

void Init_ProblemStructure()
{ 
  Problem_S.Expression        = NULL ;  
  Problem_S.Group             = NULL ;
  Problem_S.Constraint        = NULL ;
  Problem_S.JacobianMethod    = NULL ;  
  Problem_S.IntegrationMethod = NULL ;
  Problem_S.FunctionSpace     = NULL ;  
  Problem_S.Formulation       = NULL ;
  Problem_S.Resolution        = NULL ;  
  Problem_S.PostProcessing    = NULL ;  
  Problem_S.PostOperation     = NULL ;
}

void Read_ProblemStructure(char *name)
{
  int Last_yylinenum = getdp_yylinenum; 
  std::string Last_yyname = std::string(getdp_yyname);
  int Last_ErrorLevel = getdp_yyerrorlevel; 
  int Last_yyincludenum = getdp_yyincludenum;

  char AbsPath[2048];
  strcpy(AbsPath, getdp_yyname);
  int i = strlen(getdp_yyname) - 1;
  while(i >= 0 && getdp_yyname[i] != '/' && getdp_yyname[i] != '\\') i--;
  AbsPath[i+1] = '\0';
  strcat(AbsPath, name);

  Msg::Info("Loading problem definition '%s'", AbsPath);

  // opening the file in text mode messes up the loops (they use
  // fsetpos/fgetpos) on Windows without Cygwin; not sure why, but
  // opening the file in binary mode fixes the problem
  if(!(getdp_yyin = fopen(AbsPath, "rb"))) 
    Msg::Error("Unable to open file '%s'", AbsPath);

  getdp_yyerrorlevel = 0;  getdp_yylinenum = 1; getdp_yyincludenum=0; 
  strcpy(getdp_yyname, AbsPath);

  getdp_yyrestart(getdp_yyin); getdp_yyparse(); fclose(getdp_yyin);

  if(getdp_yyerrorlevel) exit(1);
  
  while(getdp_yyincludenum > 0){
    Read_ProblemStructure(getdp_yyincludename);    
    getdp_yyin = fopen(getdp_yyname, "rb"); // same comment as above
    getdp_yyrestart(getdp_yyin);
    for(i = 0; i < getdp_yylinenum; i++) fgets(AbsPath, 2048, getdp_yyin);
    getdp_yylinenum++;
    getdp_yyparse(); 
    fclose(getdp_yyin);
    if(getdp_yyerrorlevel) exit(1);
  }

  getdp_yylinenum = Last_yylinenum;
  strcpy(getdp_yyname, Last_yyname.c_str());
  getdp_yyerrorlevel = Last_ErrorLevel; 
  getdp_yyincludenum = Last_yyincludenum;
}

char *Get_ExpressionName(int Index) 
{
  return(((struct Expression *)List_Pointer(Problem_S.Expression, Index))->Name);
}

void Print_WholeQuantity(List_T *WholeQuantity, List_T *DQ_L)
{
  int    j, k;
  struct WholeQuantity *WQ;

  WQ = (struct WholeQuantity*)List_Pointer(WholeQuantity, 0);

  for (k = 0; k < List_Nbr(WholeQuantity); k++) {
    switch ((WQ+k)->Type) {

    case WQ_OPERATORANDQUANTITY :
      Msg::Check(" {%s %s}",
	  Get_StringForDefine
	  (Operator_Type, (WQ+k)->Case.OperatorAndQuantity.TypeOperator),
	  ((struct DefineQuantity *)
	   List_Pointer(DQ_L, (WQ+k)->Case.OperatorAndQuantity.Index))
	  ->Name);
      break;

    case WQ_OPERATORANDQUANTITYEVAL :
      Msg::Check(" {%s %s} ExplicitEvaluation",
	  Get_StringForDefine
	  (Operator_Type, (WQ+k)->Case.OperatorAndQuantity.TypeOperator),
	  ((struct DefineQuantity *)
	   List_Pointer(DQ_L, (WQ+k)->Case.OperatorAndQuantity.Index))
	  ->Name);
      break;

    case WQ_BINARYOPERATOR :
      switch ((WQ+k)->Case.Operator.TypeOperator) {
      case OP_PLUS           : Msg::Check(" +");  break;
      case OP_MINUS          : Msg::Check(" -");  break;
      case OP_TIME           : Msg::Check(" *");  break;
      case OP_DIVIDE         : Msg::Check(" /");  break;
      case OP_MODULO         : Msg::Check(" %%");  break;
      case OP_POWER          : Msg::Check(" ^");  break;
      case OP_CROSSPRODUCT   : Msg::Check(" x");  break;
      case OP_LESS           : Msg::Check(" <");  break;
      case OP_GREATER        : Msg::Check(" >");  break;
      case OP_LESSOREQUAL    : Msg::Check(" <=");  break;
      case OP_GREATEROREQUAL : Msg::Check(" >=");  break;
      case OP_EQUAL          : Msg::Check(" ==");  break;
      case OP_NOTEQUAL       : Msg::Check(" !=");  break;
      default                : Msg::Check(" UnknownBinaryOperator[]");  break;
      }
      break;

    case WQ_UNARYOPERATOR :
      switch ((WQ+k)->Case.Operator.TypeOperator) {
      case OP_NEG            : Msg::Check(" -(unary)");  break;
      case OP_NOT            : Msg::Check(" !");  break;
      default                : Msg::Check(" UnknownUnaryOperator[]");  break;
      }
      break;

    case WQ_EXPRESSION :
      Msg::Check(" %s[]", ((struct Expression *)
			   List_Pointer(Problem_S.Expression,
					(WQ+k)->Case.Expression.Index))->Name);
      break;

    case WQ_BUILTINFUNCTION : 
    case WQ_EXTERNBUILTINFUNCTION :
#if defined(HAVE_LEGACY)
      Msg::Check(" %s", Get_StringForFunction2Nbr(F_Function,
						  (WQ+k)->Case.Function.Fct));
#endif
      if ((WQ+k)->Type == WQ_EXTERNBUILTINFUNCTION)  Msg::Check("[.]");
      if ((WQ+k)->Type == WQ_BUILTINFUNCTION)  Msg::Check("[]");
      if ((WQ+k)->Case.Function.NbrParameters) {
	Msg::Check("{");
	for (j = 0; j < (WQ+k)->Case.Function.NbrParameters; j++) {
	  if (j)  Msg::Check(",");
	  Msg::Check(" %.10g", (WQ+k)->Case.Function.Para[j]);
	}  Msg::Check(" }");
      }
      break;

    case WQ_CONSTANT :
      Msg::Check(" %.8g", (WQ+k)->Case.Constant);
      break;

    case WQ_TIMEDERIVATIVE :
      Msg::Check(" Dt[");
      Print_WholeQuantity((WQ+k)->Case.TimeDerivative.WholeQuantity, DQ_L);
      Msg::Check(" ]"); 
      break;

    case WQ_TRACE :
      Msg::Check(" Trace[");
      Print_WholeQuantity((WQ+k)->Case.Trace.WholeQuantity, DQ_L);
      Msg::Check(" , %s ]", ((struct Group*)
			     List_Pointer(Problem_S.Group, 
					  (WQ+k)->Case.Trace.InIndex))->Name); 
      break;

    case WQ_CAST :
      if(!(WQ+k)->Case.Cast.NbrHar)
	Msg::Check(" <%s>[",
	    ((struct FunctionSpace *)
	     List_Pointer(Problem_S.FunctionSpace,
			  (WQ+k)->Case.Cast.FunctionSpaceIndexForType))->Name);
      else
	Msg::Check(" <Real>[");	
      Print_WholeQuantity((WQ+k)->Case.Cast.WholeQuantity, DQ_L);
      Msg::Check(" ]");
      break;

    case WQ_CURRENTVALUE :
      Msg::Check(" $%s", 
	  Get_StringForPointer(Current_Value,
			       (void *)((WQ+k)->Case.CurrentValue.Value)));
      break;

    case WQ_ARGUMENT :
      Msg::Check(" $%d", (WQ+k)->Case.Argument.Index);
      break;

    case WQ_TEST :
      Msg::Check(" ?");
      Print_WholeQuantity((WQ+k)->Case.Test.WholeQuantity_True , DQ_L);
      Msg::Check(" :");
      Print_WholeQuantity((WQ+k)->Case.Test.WholeQuantity_False, DQ_L);
      break;

    case WQ_SAVEVALUE :
      Msg::Check(" ->#%d", (WQ+k)->Case.SaveValue.Index + 1);
      break;

    case WQ_VALUESAVED :
      Msg::Check(" #%d", (WQ+k)->Case.ValueSaved.Index + 1);
      break;

    case WQ_SHOWVALUE :
      Msg::Check(" ->show with prefix #%d", (WQ+k)->Case.ShowValue.Index + 1);
      break;

    default :
      Msg::Check(" ???");
      break;
    }
  }
}

void Print_Group()
{
  int    i, Nbr, j;
  struct Group *GR;

  Nbr = List_Nbr(Problem_S.Group);

  Msg::Check("Group {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {

    GR = (struct Group*)List_Pointer(Problem_S.Group, i);

    Msg::Check("  %s = %s [", GR->Name, 
	Get_StringForDefine(FunctionForGroup_Type, GR->FunctionType));

    if (GR->InitialList != NULL) {
      Msg::Check(" {");
      for (j = 0; j < List_Nbr(GR->InitialList); j++)
	Msg::Check(" %d", *((int *)List_Pointer(GR->InitialList, j)) );
      Msg::Check(" }");
    }
    else  Msg::Check(" All");

    if (GR->InitialSuppList != NULL) {
      if (GR->SuppListType != SUPPLIST_INSUPPORT) {
	Msg::Check(", %s {",
	    Get_StringForDefine(FunctionForGroup_SuppList, GR->SuppListType));
	for (j = 0; j < List_Nbr(GR->InitialSuppList); j++)
	  Msg::Check(" %d", *((int *)List_Pointer(GR->InitialSuppList, j)) );
	Msg::Check(" }");
      }
      else {
	Msg::Check(", %s",
	    Get_StringForDefine(FunctionForGroup_SuppList, GR->SuppListType));
	Msg::Check(" %s",
	    ((struct Group *)
	     List_Pointer(Problem_S.Group,
			  *((int *)List_Pointer(GR->InitialSuppList, 0))))
	    ->Name);
      }
    }

    Msg::Check(" ]");

    if (GR->Type == MOVINGBAND2D) {
      Msg::Check("  = MovingBand2D [ {");

      for (j = 0; j < List_Nbr(GR->MovingBand2D->InitialList1); j++)
	Msg::Check(" %d", *((int *)List_Pointer(GR->MovingBand2D->InitialList1, j)) );
      Msg::Check(" } , {");
      for (j = 0; j < List_Nbr(GR->MovingBand2D->InitialList2); j++)
	Msg::Check(" %d", *((int *)List_Pointer(GR->MovingBand2D->InitialList2, j)) );
      Msg::Check(" } ]");

    }

    Msg::Check(";  /* Num %d */\n", i);
  }

  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_Expression()
{
  int    i, Nbr, j;
  struct Expression *EX;  
  struct ExpressionPerRegion *EXPR;

  Nbr = List_Nbr(Problem_S.Expression);

  Msg::Check("Function {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    EX = (struct Expression*)List_Pointer(Problem_S.Expression, i);

    switch (EX->Type) {
    case CONSTANT :
      Msg::Check("  %s = %.10g;\n", EX->Name, EX->Case.Constant);  
      break;

    case WHOLEQUANTITY :
      Msg::Check("  %s = ", EX->Name);
      Print_WholeQuantity(EX->Case.WholeQuantity, NULL);
      Msg::Check(";\n");
      break;

    case PIECEWISEFUNCTION :
      for (j = 0;
	   j < List_Nbr(EX->Case.PieceWiseFunction.ExpressionPerRegion); j++) {
	EXPR = (struct ExpressionPerRegion*)
	  List_Pointer(EX->Case.PieceWiseFunction.ExpressionPerRegion, j);
	Msg::Check("  %s [%d] = Exp[%s];\n",
	    EX->Name, EXPR->RegionIndex,
	    Get_ExpressionName(EXPR->ExpressionIndex));
      }
      if (!List_Nbr(EX->Case.PieceWiseFunction.ExpressionPerRegion))
	Msg::Check("  DefineFunction[ %s ];\n", EX->Name);
      break;

    case UNDEFINED_EXP :
      Msg::Check("  DefineFunction[ %s ];\n", EX->Name);
      break;

    default :
      Msg::Check("???;\n");  
      break;
    }
  }

  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_Network(struct MultiConstraintPerRegion *MCPR_P)
{
  int    i, j;
  struct ConstraintActive *CA;

  CA = MCPR_P->Active;

  Msg::Check("NbrNode = %d, NbrBranch = %d\n",
      CA->Case.Network.NbrNode, CA->Case.Network.NbrBranch);
  Msg::Check("\n");

  Msg::Check("MatNode (NbrNode x NbrBranch):\n");
  for (i = 0; i < CA->Case.Network.NbrNode; i++) {
    for (j = 0; j < CA->Case.Network.NbrBranch; j++) {
      Msg::Check("%2d ", CA->Case.Network.MatNode[i][j]);
    }
    Msg::Check("\n");
  }

  Msg::Check("\n");

  Msg::Check("MatLoop (NbrLoop x NbrBranch):\n");
  for (i = 0; i < CA->Case.Network.NbrLoop; i++) {
    for (j = 0; j < CA->Case.Network.NbrBranch; j++) {
      Msg::Check("%2d ", CA->Case.Network.MatLoop[i][j]);
    }
    Msg::Check("\n");
  }
}

void Print_Constraint()
{
  int    i, Nbr, j, Nbrj, k, Nbrk;
  struct Constraint *CO; 
  struct ConstraintPerRegion *CPR;
  struct MultiConstraintPerRegion MCPR_S;

  Nbr = List_Nbr(Problem_S.Constraint);

  Msg::Check("Constraint {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    Msg::Check(" /* Num : %d */\n", i);
    CO = (struct Constraint*)List_Pointer(Problem_S.Constraint, i);
    Msg::Check("  { Name %s; Type %s;\n", CO->Name,
	Get_StringForDefine(Constraint_Type, CO->Type));

    if (CO->Type == NETWORK){
      Nbrk = List_Nbr(CO->MultiConstraintPerRegion);
      for (k = 0; k < Nbrk; k++) {
	List_Read(CO->MultiConstraintPerRegion, k, &MCPR_S);
	Msg::Check("    Case %s {\n", MCPR_S.Name);

	Nbrj = List_Nbr(MCPR_S.ConstraintPerRegion);
	for (j = 0; j < Nbrj; j++) {
	  CPR = (struct ConstraintPerRegion*)
	    List_Pointer(MCPR_S.ConstraintPerRegion, j);
	  Msg::Check("      { Region %s;",
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, CPR->RegionIndex))->Name);
	  Msg::Check(" Branch { %d, %d };",
	      CPR->Case.Network.Node1, CPR->Case.Network.Node2);
	  Msg::Check(" }\n");
	}
#if defined(HAVE_LEGACY)
	if (!MCPR_S.Active)
	  MCPR_S.Active = Generate_Network(MCPR_S.ConstraintPerRegion);
#endif
	Print_Network(&MCPR_S);
      }
    }
    else {
      Msg::Check("    Case {\n");
      Nbrj = List_Nbr(CO->ConstraintPerRegion);
      for (j = 0; j < Nbrj; j++) {
	CPR = (struct ConstraintPerRegion*)List_Pointer(CO->ConstraintPerRegion, j);
	Msg::Check("      { Region %s;",
	    ((struct Group *)
	     List_Pointer(Problem_S.Group, CPR->RegionIndex))->Name);
	if (CPR->SubRegionIndex >= 0)
	  Msg::Check(" SubRegion %s;",
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, CPR->SubRegionIndex))->Name);
	if (CPR->Type != CO->Type)
	  Msg::Check(" Type %s;", Get_StringForDefine(Constraint_Type, CPR->Type));

	switch (CPR->Type) {
	case ASSIGN :
	case INIT :
	  Msg::Check(" Value Exp[%s];",
	      Get_ExpressionName(CPR->Case.Fixed.ExpressionIndex));
	  break;
	case ASSIGNFROMRESOLUTION :
	case INITFROMRESOLUTION :
	  Msg::Check(" NameOfResolution %s;", CPR->Case.Solve.ResolutionName);
	  break;
	}
	  
	if (CPR->TimeFunctionIndex >= 0)
	  Msg::Check(" TimeFunction Exp[%s];",
	      Get_ExpressionName(CPR->TimeFunctionIndex));

	Msg::Check(" }\n");
      }
    }

    Msg::Check("    }\n");
    Msg::Check("  }\n");

  }
  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_Jacobian()
{
  int    i, Nbr, j, Nbrj, k;
  struct JacobianMethod *JM; 
  struct JacobianCase *JC;

  Nbr = List_Nbr(Problem_S.JacobianMethod);

  Msg::Check("Jacobian {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    Msg::Check(" /* Num : %d */\n", i);
    JM = (struct JacobianMethod*)List_Pointer(Problem_S.JacobianMethod, i);
    Msg::Check("  { Name %s;\n", JM->Name);

    Msg::Check("    Case {\n");
    Nbrj = List_Nbr(JM->JacobianCase);
    for (j = 0; j < Nbrj; j++) {
      JC = (struct JacobianCase*)List_Pointer(JM->JacobianCase, j);

      Msg::Check("      { Region ");
      if (JC->RegionIndex >= 0)
	Msg::Check("%s;", ((struct Group *)
			    List_Pointer(Problem_S.Group, JC->RegionIndex))->Name);
      else  Msg::Check("All;");
      Msg::Check(" Jacobian %s",
	  Get_StringForDefine1Nbr(Jacobian_Type, JC->TypeJacobian));
      if (JC->NbrParameters) {
	for (k = 0; k < JC->NbrParameters; k++) {
	  if (k)  Msg::Check(",");  else  Msg::Check(" {");
	  Msg::Check(" %.10g", JC->Para[k]);
	}  Msg::Check(" }");
      }
      Msg::Check("; }\n");
    }
    Msg::Check("    }\n");
    Msg::Check("  }\n");

  }
  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_Integration()
{
  int    i, j, k, Nbrm, Nbrc, Nbrq;
  struct IntegrationMethod *IM;  
  struct IntegrationCase *IC;
  struct Quadrature *Q;

  Nbrm = List_Nbr(Problem_S.IntegrationMethod);

  Msg::Check("Integration {  /* nbr = %d */\n", Nbrm);
  Msg::Check("\n");

  for (i = 0; i < Nbrm; i++) {
    Msg::Check(" /* Num : %d */\n", i);
    IM = (struct IntegrationMethod*)List_Pointer(Problem_S.IntegrationMethod, i);
    Msg::Check("  { Name %s; \n", IM->Name);
    if(IM->CriterionIndex>=0)
      Msg::Check("    Criterion Exp[%s]; \n", 
	  Get_ExpressionName(IM->CriterionIndex));

    Nbrc = List_Nbr(IM->IntegrationCase);
    Msg::Check("    Case {");
    Msg::Check("   /* nbr = %d */\n", Nbrc);
    for (j = 0; j < Nbrc; j++) {
      IC = (struct IntegrationCase*)List_Pointer(IM->IntegrationCase, j);
      Msg::Check("       { Type %s;",
	  Get_StringForDefine(Integration_Type, IC->Type));
      switch (IC->Type) {
      case GAUSS :
	Msg::Check("\n");
	Msg::Check("         Case {\n");

	Nbrq = List_Nbr(IC->Case);
	for (k = 0; k < Nbrq; k++) {
	  Q = (struct Quadrature*)List_Pointer(IC->Case, k);
	  Msg::Check("            { GeoElement %s; NumberOfPoints %d; }\n", 
	      Get_StringForDefine(Element_Type, Q->ElementType),
	      Q->NumberOfPoints);
	}
	Msg::Check("         }\n"); 
	Msg::Check("       }\n");  break;
	
      default :
	Msg::Check(" }\n");  break;
      }
    }
    Msg::Check("    }\n");
    Msg::Check("  }\n");
  }
  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_FunctionSpace()
{
  struct FunctionSpace *FS;
  struct BasisFunction *BF; 
  struct SubSpace *SS;
  struct GlobalQuantity *GQ;
  struct ConstraintInFS *CO;
  List_T *BF_L, *SS_L, *GQ_L, *CO_L;
  int    i0, i, Nbr0, Nbr, j, Nbrj;

  Nbr0 = List_Nbr(Problem_S.FunctionSpace);

  Msg::Check("FunctionSpace {  /* nbr = %d */\n", Nbr0);
  Msg::Check("\n");

  for (i0=0; i0<Nbr0; i0++) {

    Msg::Check(" /* Num : %d */\n", i0);  
    FS = (struct FunctionSpace*)List_Pointer(Problem_S.FunctionSpace, i0);
    BF_L = FS->BasisFunction;  SS_L = FS->SubSpace;
    GQ_L = FS->GlobalQuantity;  CO_L = FS->Constraint;

    Msg::Check("  { Name %s; Type %s;",
	FS->Name, Get_StringForDefine(Field_Type, FS->Type));
    Msg::Check("\n");

    Nbr = List_Nbr(BF_L);
    if (Nbr > 0) {
      Msg::Check("    BasisFunction {\n");
      BF = (struct BasisFunction*)List_Pointer(BF_L, 0);
      for (i=0; i<Nbr; i++) {
	Msg::Check("    /* GlobalNum : %d */\n", BF->Num);
#if defined(HAVE_LEGACY)
	Msg::Check("      Name %s; NameOfCoef %s; Function %s;\n",
		   BF->Name, BF->NameOfCoef,
		   Get_StringFor3Function2Nbr(BF_Function, BF->Function));
#endif
	if (BF->SubFunction) {
	  Msg::Check("      SubFunction {");
	  Nbrj = List_Nbr(BF->SubFunction);
	  for (j=0; j<Nbrj; j++)
	    Msg::Check(" %s",
		((struct Expression *)
		 List_Pointer(Problem_S.Expression, 
			      *((int *)List_Pointer(BF->SubFunction, j))))->Name);
	  Msg::Check(" };\n");
	}

	if (BF->SubdFunction) {
	  Msg::Check("      SubdFunction {");
	  Nbrj = List_Nbr(BF->SubdFunction);
	  for (j=0; j<Nbrj; j++)
	    Msg::Check(" %s",
		((struct Expression *)
		 List_Pointer(Problem_S.Expression, 
			      *((int *)List_Pointer(BF->SubdFunction, j))))->Name);
	  Msg::Check(" };\n");
	}

	Msg::Check("      Support %s;", 
	    (BF->SupportIndex >=0)?
	    ((struct Group *)List_Pointer(Problem_S.Group, BF->SupportIndex))
	    ->Name : "?");
	Msg::Check(" Entity %s;\n",
	    (BF->EntityIndex >=0)?
	    ((struct Group *)List_Pointer(Problem_S.Group, BF->EntityIndex))
	    ->Name : "?");
	
	BF += 1;
      }
      Msg::Check("    }\n");
    }

    BF = (Nbr>0)? (struct BasisFunction*)List_Pointer(BF_L, 0) : NULL;
    Nbr = List_Nbr(SS_L);
    if (Nbr > 0) {
      Msg::Check("    SubSpace {\n");
      SS = (struct SubSpace*)List_Pointer(SS_L, 0);
      for (i=0; i<Nbr; i++) {
	Msg::Check("      Name %s; NameOfBasisFunction {", SS->Name);
	Nbrj = List_Nbr(SS->BasisFunction);
	for (j=0; j<Nbrj; j++)
	  Msg::Check(" %s /* n%d */",
	      ((struct BasisFunction *)
	       List_Pointer(BF_L, *((int *)List_Pointer(SS->BasisFunction, j))))
	      ->Name, *((int *)List_Pointer(SS->BasisFunction, j)));
	Msg::Check(" };\n");
	SS += 1;
      }
      Msg::Check("    }\n");
    }

    Nbr = List_Nbr(GQ_L);
    if (Nbr > 0) {
      Msg::Check("    GlobalQuantity {\n");
      GQ = (struct GlobalQuantity*)List_Pointer(GQ_L, 0);
      for (i=0; i<Nbr; i++) {
	Msg::Check("    /* GlobalNum : %d */\n", GQ->Num);
	Msg::Check("      Name %s; Type %s;", 
	    GQ->Name,
	    Get_StringForDefine(GlobalQuantity_Type, GQ->Type));
	Msg::Check(" NameOfCoef %s;\n", ((struct BasisFunction *)
					  List_Pointer(BF_L, GQ->ReferenceIndex))->NameOfCoef);
	GQ += 1;
      }
      Msg::Check("    }\n");
    }

    Nbr = List_Nbr(CO_L);
    if (Nbr > 0) {
      Msg::Check("    Constraint {\n");
      CO = (struct ConstraintInFS*)List_Pointer(CO_L, 0);
      for (i=0; i<Nbr; i++) {
	Msg::Check("      NameOfCoef ");
	if (CO->QuantityType == LOCALQUANTITY)
	  Msg::Check("%s;", ((struct BasisFunction *)
			      List_Pointer(BF_L, CO->ReferenceIndex))->NameOfCoef);
	else if (CO->QuantityType == GLOBALQUANTITY)
	  Msg::Check("%s;", ((struct GlobalQuantity *)
			      List_Pointer(GQ_L, CO->ReferenceIndex))->Name);
	else Msg::Check("?;");

	Msg::Check(" // Entity %s;\n",
	    ((struct Group *)List_Pointer(Problem_S.Group, CO->EntityIndex))
	    ->Name );
	
	switch(CO->ConstraintPerRegion->Type) {
	case ASSIGN :
	case INIT :
	  Msg::Check("      // Value Exp[%s];", Get_ExpressionName
	      (CO->ConstraintPerRegion->Case.Fixed.ExpressionIndex));
	  break;
	case ASSIGNFROMRESOLUTION :
	case INITFROMRESOLUTION :
	  Msg::Check("      // Resolution %s;",
	      CO->ConstraintPerRegion->Case.Solve.ResolutionName);
	  break;
	}

	if (CO->ConstraintPerRegion->TimeFunctionIndex >= 0)
	  Msg::Check(" TimeFunction Exp[%s];",
	      Get_ExpressionName(CO->ConstraintPerRegion->TimeFunctionIndex));
	
	Msg::Check("\n");	
	CO += 1;
      }
      Msg::Check("    }\n");
    }

    Msg::Check("  }\n");
  }

  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_Formulation()
{
  struct Formulation *FO;
  struct DefineQuantity *DQ;
  struct EquationTerm *FE;
  struct GlobalEquationTerm *GET;
  List_T *DQ_L, *FE_L;
  int    i, Nbr, j, Nbrj, k, Nbrk;

  Nbr = List_Nbr(Problem_S.Formulation);

  Msg::Check("Formulation {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    Msg::Check(" /* Num : %d */\n", i);

    FO = (struct Formulation*)List_Pointer(Problem_S.Formulation, i);

    Msg::Check("  { Name %s; Type %s;\n", FO->Name,
	Get_StringForDefine(Formulation_Type, FO->Type));

    DQ_L = FO->DefineQuantity;  FE_L = FO->Equation;

    Msg::Check("    Quantity {\n");
    Nbrj = List_Nbr(DQ_L);
    for (j=0; j<Nbrj; j++) {
      DQ = (struct DefineQuantity*)List_Pointer(DQ_L, j);

      Msg::Check("      { Name %s; Type %s; NameOfSpace %s",
	  DQ->Name,
	  Get_StringForDefine(DefineQuantity_Type, DQ->Type),
	  (DQ->FunctionSpaceIndex < 0) ? "?" :
	  ((struct FunctionSpace *)
	   List_Pointer(Problem_S.FunctionSpace, DQ->FunctionSpaceIndex))->Name);
      if (DQ->IndexInFunctionSpace) {
	if (DQ->Type == GLOBALQUANTITY)
	  Msg::Check("[%s]",
	      ((struct GlobalQuantity *)
	       List_Pointer
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace, DQ->FunctionSpaceIndex))
		->GlobalQuantity,
		*((int *)List_Pointer(DQ->IndexInFunctionSpace, 0))))->Name);
	else if (DQ->Type == LOCALQUANTITY) {
	  Msg::Check("[");
	  Nbrk = List_Nbr(DQ->IndexInFunctionSpace);
	  for (k=0; k<Nbrk; k++)
	    Msg::Check(" %d", *((int *)List_Pointer(DQ->IndexInFunctionSpace, k)));
	  Msg::Check("]");
	}
      }
      Msg::Check(";");

      if (DQ->Type == INTEGRALQUANTITY) {
	Msg::Check("\n");
	Msg::Check("        Integration %s;\n",
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem_S.IntegrationMethod, 
			  DQ->IntegralQuantity.IntegrationMethodIndex))->Name);
	Msg::Check("        Jacobian %s;",
	    ((struct JacobianMethod *)
	     List_Pointer(Problem_S.JacobianMethod, 
			  DQ->IntegralQuantity.JacobianMethodIndex))->Name);
      }
      Msg::Check(" }\n");
    }
    Msg::Check("    }\n");

    Msg::Check("    Equation {\n");

    Nbrj = List_Nbr(FE_L);
    for (j=0; j<Nbrj; j++) {
      FE = (struct EquationTerm*)List_Pointer(FE_L, j);
      if      (FE->Type == GALERKIN || FE->Type == DERHAM) {
	if(FE->Type == GALERKIN) Msg::Check("      Galerkin { Density [ ... ];\n");
	if(FE->Type == DERHAM)   Msg::Check("      deRham   { Density [ ... ];\n");
	Msg::Check("                 In %s;\n",
	    ((struct Group *)
	     List_Pointer(Problem_S.Group, FE->Case.LocalTerm.InIndex))->Name );
	Msg::Check("                 Jacobian %s; \n",
	    ((struct JacobianMethod *)
	     List_Pointer(Problem_S.JacobianMethod, 
			  FE->Case.LocalTerm.JacobianMethodIndex))->Name );
	Msg::Check("                 Integration %s; }\n",
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem_S.IntegrationMethod, 
			  FE->Case.LocalTerm.IntegrationMethodIndex))->Name );

	Msg::Check("      /* Inventaire des DQ (%d) [%d] :",
	    FE->Case.LocalTerm.Term.NbrQuantityIndex,
	    FE->Case.LocalTerm.Term.QuantityIndexPost);
	for (k = 0; k < FE->Case.LocalTerm.Term.NbrQuantityIndex; k++)
	  Msg::Check(" {%s}",
	      ((struct DefineQuantity *)
	       List_Pointer
	       (DQ_L, FE->Case.LocalTerm.Term.QuantityIndexTable[k]))->Name);
	Msg::Check(" */\n");

	Msg::Check("      /* WholeQuantity (%d) :",
	    List_Nbr(FE->Case.LocalTerm.Term.WholeQuantity));
	Print_WholeQuantity(FE->Case.LocalTerm.Term.WholeQuantity, DQ_L);
	Msg::Check(" */\n");

      }
      else if (FE->Type == GLOBALTERM     ) {
	Msg::Check("      GlobalTerm { [ ... ];\n");
	Msg::Check("                 In %s;\n",
	    ((struct Group *)
	     List_Pointer(Problem_S.Group, FE->Case.GlobalTerm.InIndex))->Name );
	
	Msg::Check("      /* Inventaire des DQ (%d) [%d,%d] :",
	    FE->Case.GlobalTerm.Term.NbrQuantityIndex,
	    FE->Case.GlobalTerm.Term.DefineQuantityIndexDof,
	    FE->Case.GlobalTerm.Term.DefineQuantityIndexEqu);
	for (k = 0; k < FE->Case.GlobalTerm.Term.NbrQuantityIndex; k++)
	  Msg::Check(" {%s}",
	      ((struct DefineQuantity *)
	       List_Pointer
	       (DQ_L, FE->Case.GlobalTerm.Term.QuantityIndexTable[k]))->Name);
	Msg::Check(" */\n");
	
	Msg::Check("      /* WholeQuantity (%d) :",
	    List_Nbr(FE->Case.GlobalTerm.Term.WholeQuantity));
	Print_WholeQuantity(FE->Case.GlobalTerm.Term.WholeQuantity, DQ_L);
	Msg::Check(" */\n");
	
      }
      else if (FE->Type == GLOBALEQUATION) {
	Msg::Check("      GlobalEquation { Type %s; UsingConstraint %s;\n",
	    Get_StringForDefine(Constraint_Type, FE->Case.GlobalEquation.Type),
	    ((struct Constraint *)
	     List_Pointer(Problem_S.Constraint,
			  FE->Case.GlobalEquation.ConstraintIndex))->Name);

	Nbrk = List_Nbr(FE->Case.GlobalEquation.GlobalEquationTerm);
	for (k = 0; k < Nbrk; k++) {
	  GET = (struct GlobalEquationTerm*)
	    List_Pointer(FE->Case.GlobalEquation.GlobalEquationTerm, k);
	  Msg::Check("        { Node {%s}; Loop {%s}; Equation {%s};",
	      ((struct DefineQuantity *)
	       List_Pointer(DQ_L, GET->DefineQuantityIndexNode))->Name,
	      ((struct DefineQuantity *)
	       List_Pointer(DQ_L, GET->DefineQuantityIndexLoop))->Name,
	      ((struct DefineQuantity *)
	       List_Pointer(DQ_L, GET->DefineQuantityIndexEqu))->Name);
	  Msg::Check(" In %s; }\n",
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, GET->InIndex))->Name);
	}
      }
    }
    Msg::Check("    }\n");
    Msg::Check("  }\n");
  }
  Msg::Check("\n");
  Msg::Check("}\n");
}

void Print_Operation(struct Resolution *RE, List_T *Operation_L)
{
  struct Operation *OPE;
  int    i, j, Nbrj;
  static int NbrBlk = -1;

  NbrBlk++;

  Nbrj = List_Nbr(Operation_L);


  for (j=0; j<Nbrj; j++) {
    OPE = (struct Operation*)List_Pointer(Operation_L, j);

    switch (OPE->Type) {

    case OPERATION_GENERATE :
    case OPERATION_GENERATEONLY :
    case OPERATION_SOLVE :
    case OPERATION_GENERATEJAC :
    case OPERATION_SOLVEJAC :
    case OPERATION_GENERATESEPARATE :
    case OPERATION_INITSOLUTION :
    case OPERATION_SAVESOLUTION :
    case OPERATION_SAVESOLUTIONS :
    case OPERATION_READSOLUTION :
    case OPERATION_TRANSFERSOLUTION :
    case OPERATION_TRANSFERINITSOLUTION :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      %s [%s];\n",
	  Get_StringForDefine(Operation_Type, OPE->Type),
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name);
      break;

   case OPERATION_UPDATE :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      Update [ %s, Exp[%s] ];\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  Get_ExpressionName(OPE->Case.Update.ExpressionIndex));
      break;
    
    case OPERATION_SELECTCORRECTION :
      for (i=0 ; i<2*NbrBlk ; i++) Msg::Check(" ");
      Msg::Check("      SelectCorrection [ %s, %d ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  OPE->Case.SelectCorrection.Iteration) ;
      break ;

   case OPERATION_ADDCORRECTION :
      for (i=0 ; i<2*NbrBlk ; i++) Msg::Check(" ");
      Msg::Check("      AddCorrection [ %s, %g ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  OPE->Case.AddCorrection.Alpha) ;
      break ;

   case OPERATION_UPDATECONSTRAINT :
      for (i=0 ; i<2*NbrBlk ; i++) Msg::Check(" ");
      Msg::Check("      UpdateConstraint [ %s ] ;\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name) ;
      break ;

   case OPERATION_FOURIERTRANSFORM :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      FourierTransform [ %s, %s, {...} ];\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->Case.FourierTransform.DefineSystemIndex[0]))->Name,
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->Case.FourierTransform.DefineSystemIndex[1]))->Name);
      break;

    case OPERATION_TIMELOOPTHETA :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      TimeLoopTheta [ %.10g, %.10g, Exp[%s], Exp[%s] ] {\n",
	  OPE->Case.TimeLoopTheta.Time0, OPE->Case.TimeLoopTheta.TimeMax,
	  Get_ExpressionName(OPE->Case.TimeLoopTheta.DTimeIndex),
	  Get_ExpressionName(OPE->Case.TimeLoopTheta.ThetaIndex));
      Print_Operation(RE, OPE->Case.TimeLoopTheta.Operation);
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      }\n");
      break;

    case OPERATION_TIMELOOPNEWMARK :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      TimeLoopNewmark [ %.10g, %.10g, Exp[%s], %.10g, %.10g ] {\n",
	  OPE->Case.TimeLoopNewmark.Time0, OPE->Case.TimeLoopNewmark.TimeMax,
	  Get_ExpressionName(OPE->Case.TimeLoopNewmark.DTimeIndex),
	  OPE->Case.TimeLoopNewmark.Beta, OPE->Case.TimeLoopNewmark.Gamma);
      Print_Operation(RE, OPE->Case.TimeLoopNewmark.Operation);
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      }\n");
      break;

    case OPERATION_ITERATIVELOOP :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      IterativeLoop [ %d, %.10g, Exp[%s] ] {\n",
	  OPE->Case.IterativeLoop.NbrMaxIteration, 
	  OPE->Case.IterativeLoop.Criterion,
	  Get_ExpressionName(OPE->Case.IterativeLoop.RelaxationFactorIndex));
      Print_Operation(RE, OPE->Case.IterativeLoop.Operation);
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      }\n");
      break;

    case OPERATION_LANCZOS :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      Lanczos [ %s, %d, { ... } , %.10g ];\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  OPE->Case.Lanczos.Size,
	  OPE->Case.Lanczos.Shift);
      break;

    case OPERATION_EIGENSOLVE :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      EigenSolve [ %s, %d, %.10g , %.10g ];\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  OPE->Case.EigenSolve.NumEigenvalues,
	  OPE->Case.EigenSolve.Shift_r, OPE->Case.EigenSolve.Shift_i);
      break;

    case OPERATION_POSTOPERATION :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      PostOperation [ ... ];\n");
      break;

    case OPERATION_EVALUATE :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      Evaluate [ Exp[%s] ];\n",
	  Get_ExpressionName(OPE->Case.Evaluate.ExpressionIndex));
      break;

    case OPERATION_SETTIME :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      SetTime [ Exp[%s] ];\n",
	  Get_ExpressionName(OPE->Case.SetTime.ExpressionIndex));
      break;

    case OPERATION_SETFREQUENCY :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      SetFrequency [ %s, Exp[%s] ];\n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name,
	  Get_ExpressionName(OPE->Case.SetFrequency.ExpressionIndex));
      break;

    case OPERATION_BREAK :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      Break;\n");
      break;

    case OPERATION_SYSTEMCOMMAND :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      SystemCommand \" %s \";\n",
	  OPE->Case.SystemCommand.String);
      break;

    case OPERATION_TEST :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      If [ Exp[%s] ] {\n",
	  Get_ExpressionName(OPE->Case.Test.ExpressionIndex));
      Print_Operation(RE, OPE->Case.Test.Operation_True);
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      }\n");
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      if(OPE->Case.Test.Operation_False){
	Msg::Check("      Else {\n");
	Print_Operation(RE, OPE->Case.Test.Operation_False);
	Msg::Check("      }\n");
      }
      break;

    case OPERATION_CHANGEOFCOORDINATES :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      ChangeOfCoordinates [ %s, Exp[%s] ];\n",
	  ((struct Group *)
	   List_Pointer(Problem_S.Group,
			OPE->Case.ChangeOfCoordinates.GroupIndex))->Name,
	  Get_ExpressionName(OPE->Case.ChangeOfCoordinates.ExpressionIndex));
      break;

    case OPERATION_INIT_MOVINGBAND2D :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      Init_MovingBand2D [ %s ];\n",
	  ((struct Group *)
	   List_Pointer(Problem_S.Group,
			OPE->Case.Init_MovingBand2D.GroupIndex))->Name);
      break;

    case OPERATION_MESH_MOVINGBAND2D :
      for (i=0; i<2*NbrBlk; i++) Msg::Check(" ");
      Msg::Check("      Mesh_MovingBand2D [ %s ];\n",
	  ((struct Group *)
	   List_Pointer(Problem_S.Group,
			OPE->Case.Mesh_MovingBand2D.GroupIndex))->Name);
      break;

    case OPERATION_DEFORMEMESH :
      Msg::Check("      DeformeMesh [%s, %s,  '%s']; \n",
	  ((struct DefineSystem *)
	   List_Pointer(RE->DefineSystem, OPE->DefineSystemIndex))->Name, OPE->Case.DeformeMesh.Quantity,
	  OPE->Case.DeformeMesh.Name_MshFile);
      break;

    // FIXME: Roman
    case OPERATION_TENSORPRODUCTSOLVE :
      Msg::Check("      TensorProductSolve [\n");
      for(int i = 0; i < List_Nbr(OPE->Case.TensorProductSolve.SystemIndex); i++){
	int j;
	List_Read(OPE->Case.TensorProductSolve.SystemIndex, i, &j);
	Msg::Check("%d ", j);
      }
      Msg::Check("  XXX] \n");
      //Operation_P->ExpectationIndex = ;
      //Operation_P->LocalMatrixIndex = ;
      //Operation_P->ExpansionCoef = ;
      break;

    default :
      Msg::Check("      ???;\n");
      break;
    }
  }

  NbrBlk--;
}

void Print_Resolution()
{
  struct Resolution *RE;
  struct DefineSystem *DS;
  List_T *DS_L;  
  int    i, Nbr, j, Nbrj, k;

  Nbr = List_Nbr(Problem_S.Resolution);

  Msg::Check("Resolution {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    Msg::Check(" /* Num : %d */\n", i);

    RE = (struct Resolution*)List_Pointer(Problem_S.Resolution, i);

    Msg::Check("  { Name %s\n", RE->Name);

    DS_L = RE->DefineSystem;

    Msg::Check("    System {\n");
    Nbrj = List_Nbr(DS_L);
    for (j=0; j<Nbrj; j++) {
      DS = (struct DefineSystem*)List_Pointer(DS_L, j);

      Msg::Check("      { Name %s; Type %s; ",
	  DS->Name,
	  Get_StringForDefine(DefineSystem_Type, DS->Type));

      Msg::Check("NameOfFormulation {");
      for (k = 0; k < List_Nbr(DS->FormulationIndex); k++)
	Msg::Check(" %s",
	    ((struct Formulation *)
	     List_Pointer(Problem_S.Formulation,
			  *((int *)List_Pointer(DS->FormulationIndex, k)))) ->Name);
      Msg::Check(" }; ");

      if(DS->MeshName)
	Msg::Check("NameOfMesh %s; ", DS->MeshName);

      if(DS->OriginSystemIndex) {
	Msg::Check("OriginSystem {") ;

	for (k = 0 ; k < List_Nbr(DS->OriginSystemIndex) ; k++) {
	  if (k)  Msg::Check(",") ;
	  Msg::Check(" %d", *((int *)List_Pointer(DS->OriginSystemIndex, k))) ;
	}
	Msg::Check(" } ;") ;
      }

      if (DS->Type == VAL_COMPLEX) {
	Msg::Check("Frequency {");

	for (k = 0; k < List_Nbr(DS->FrequencyValue); k++) {
	  if (k)  Msg::Check(",");
	  Msg::Check(" %.10g", *((double *)List_Pointer(DS->FrequencyValue, k)));
	}
	Msg::Check(" };");
      }

      Msg::Check(" }\n");
    }
    Msg::Check("    }\n");

    Msg::Check("    Operation {\n");
    Print_Operation(RE, RE->Operation);
    Msg::Check("    }\n");
    Msg::Check("  }\n");
  }
  Msg::Check("\n"); 
  Msg::Check("}\n");
}

void Print_PostProcessing()
{
  struct PostProcessing   *PP;  
  struct PostQuantity     *PQ;
  struct PostQuantityTerm *PQT;
  int   i, Nbr, j, Nbrj, k, Nbrk;

  Nbr = List_Nbr(Problem_S.PostProcessing);

  Msg::Check("PostProcessing {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    Msg::Check(" /* Num : %d */\n", i);

    PP = (struct PostProcessing*)List_Pointer(Problem_S.PostProcessing, i);

    Msg::Check("  { Name %s; NameOfFormulation %s; \n", PP->Name,
	((struct Formulation *)
	 List_Pointer(Problem_S.Formulation, PP->FormulationIndex))->Name);

    if(PP->NameOfSystem)
      Msg::Check("NameOfSystem %s;", PP->NameOfSystem);
    
    Nbrj = List_Nbr(PP->PostQuantity);
    if (Nbrj > 0) {
      Msg::Check("    Quantity {\n");
      for (j = 0; j < Nbrj; j++) {
	PQ = (struct PostQuantity*)List_Pointer(PP->PostQuantity, j);
	Msg::Check("      { Name %s;\n", PQ->Name);
	Msg::Check("        Value {\n");
	Nbrk = List_Nbr(PQ->PostQuantityTerm);
	for (k = 0; k < Nbrk; k++) {
	  PQT = (struct PostQuantityTerm*)List_Pointer(PQ->PostQuantityTerm, k);
	  Msg::Check("          { %s { ['", 
	      Get_StringForDefine(PostQuantityTerm_EvaluationType, 
				  PQT->EvaluationType));
	  Print_WholeQuantity
	    (PQT->WholeQuantity,
	     ((struct Formulation *)
	      List_Pointer(Problem_S.Formulation, PP->FormulationIndex))
	     ->DefineQuantity);
	  Msg::Check(" ']; /* DefineQuantityType %s */\n",
	      Get_StringForDefine(DefineQuantity_Type, PQT->Type));

	  if(PQT->InIndex > 0)
	    Msg::Check("                    In %s;\n", 
		((struct Group *)List_Pointer(Problem_S.Group, PQT->InIndex))->Name);
	  if(PQT->IntegrationMethodIndex > 0)
	    Msg::Check("                    Integration %s;\n", 
		((struct IntegrationMethod *) 
		 List_Pointer(Problem_S.IntegrationMethod, 
			      PQT->IntegrationMethodIndex))->Name);
	  if(PQT->JacobianMethodIndex > 0)
	    Msg::Check("                    Jacobian %s;\n", 
		((struct JacobianMethod *)
		 List_Pointer(Problem_S.JacobianMethod, 
			      PQT->JacobianMethodIndex))->Name);
	  
	}
	Msg::Check("          } } }\n");  Msg::Check("      }\n");
      }
      Msg::Check("    }\n");
    }
    Msg::Check("  }\n");
  }
  Msg::Check("\n}");
  Msg::Check("\n");
}

void Print_PostOperation()
{
  struct PostProcessing   *PP;  
  struct PostOperation    *PO;
  struct PostSubOperation *PSO;
  int   i, Nbr, k, Nbrk;

  Nbr = List_Nbr(Problem_S.PostOperation);

  Msg::Check("PostOperation {  /* nbr = %d */\n", Nbr);
  Msg::Check("\n");

  for (i = 0; i < Nbr; i++) {
    PO = (struct PostOperation*)List_Pointer(Problem_S.PostOperation, i);
    PP = (struct PostProcessing*)List_Pointer(Problem_S.PostProcessing, 
					      PO->PostProcessingIndex);

    Msg::Check("  { Name %s; NameOfPostProcessing %s;\n", PO->Name, PP->Name);
    Msg::Check("    Operation {\n");

    Nbrk = List_Nbr(PO->PostSubOperation);
    for (k = 0; k < Nbrk; k++) {
      PSO = (struct PostSubOperation*)List_Pointer(PO->PostSubOperation, k);
      switch (PSO->Type) {
      case POP_PRINT :
	Msg::Check("      Print[%s",
		((struct PostQuantity *)
		 List_Pointer(PP->PostQuantity, PSO->PostQuantityIndex[0]))->Name);
        if(PSO->PostQuantitySupport[0] >= 0)
	  Msg::Check(" [%s]",
		  ((struct Group *)
		   List_Pointer(Problem_S.Group, PSO->PostQuantitySupport[0]))->Name);
	if(PSO->PostQuantityIndex[1] >= 0) {
	  Msg::Check(" %s %s",
		  Get_StringForDefine(PostSubOperation_CombinationType, PSO->CombinationType),
		  ((struct PostQuantity *)
		   List_Pointer(PP->PostQuantity, PSO->PostQuantityIndex[1]))->Name);
	  if(PSO->PostQuantitySupport[1] >= 0)
	    Msg::Check(" [%s]",
		    ((struct Group *)
		     List_Pointer(Problem_S.Group, PSO->PostQuantitySupport[1]))->Name);
	}
        switch (PSO->SubType) {
	case PRINT_ONREGION :
	  if (PSO->Case.OnRegion.RegionIndex >=0)
	    Msg::Check(", OnRegion %s",
		    ((struct Group *)
		     List_Pointer(Problem_S.Group,
				  PSO->Case.OnRegion.RegionIndex))->Name );
	  else
	    Msg::Check(", OnGlobal");
	  break;
	case PRINT_ONELEMENTSOF :
	  Msg::Check(", OnElementsOf %s",
		  ((struct Group *)
		   List_Pointer(Problem_S.Group,
				PSO->Case.OnRegion.RegionIndex))->Name );
	  break;
	case PRINT_ONGRID :
	  Msg::Check(", OnGrid %s",
		  ((struct Group *)
		   List_Pointer(Problem_S.Group,
				PSO->Case.OnRegion.RegionIndex))->Name );
	  break;
	case PRINT_ONGRID_0D :
	  Msg::Check(", OnPoint {%.10g,%.10g,%.10g}",
		  PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0],
		  PSO->Case.OnGrid.z[0]);
	  break;
	case PRINT_ONGRID_1D :
	  Msg::Check(", OnLine {{%.10g,%.10g,%.10g}{%.10g,%.10g,%.10g}} {%d}",
		  PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0],
		  PSO->Case.OnGrid.z[0],
		  PSO->Case.OnGrid.x[1], PSO->Case.OnGrid.y[1],
		  PSO->Case.OnGrid.z[1], PSO->Case.OnGrid.n[0]);
	  break;
	case PRINT_ONGRID_2D :
	  Msg::Check(", OnPlane {{%.10g,%.10g,%.10g}{%.10g,%.10g,%.10g}"
		  "{%.10g,%.10g,%.10g}} {%d,%d}",
		  PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0],
		  PSO->Case.OnGrid.z[0],
		  PSO->Case.OnGrid.x[1], PSO->Case.OnGrid.y[1],
		  PSO->Case.OnGrid.z[1],
		  PSO->Case.OnGrid.x[2], PSO->Case.OnGrid.y[2],
		  PSO->Case.OnGrid.z[2],
		  PSO->Case.OnGrid.n[0], PSO->Case.OnGrid.n[1]);
	  break;
	default : /* parametric grid, ... */
	  break;
	}
	break;
      default : /* POP_EXPRESSION, POP_GROUP, etc. */
	break;
      }
      
      if(PSO->Depth != 1)
	Msg::Check(", Depth %d", PSO->Depth);
      
      if(PSO->Skin)
	Msg::Check(", Skin");

      if(PSO->NoNewLine)
	Msg::Check(", NoNewLine");
      
      if(PSO->Smoothing)
	Msg::Check(", Smoothing %d", PSO->Smoothing);

      if(PSO->Dimension != _ALL)
	Msg::Check(", Dimension %d", PSO->Dimension);
  
      if(PSO->HarmonicToTime > 1)
	Msg::Check(", HarmonicToTime %d", PSO->HarmonicToTime);
  
      if(PSO->Sort)
	Msg::Check(", Sort %s",
		Get_StringForDefine(PostSubOperation_SortType, PSO->Adapt));

      if(PSO->Adapt)
	Msg::Check(", Adapt %s",
		Get_StringForDefine(PostSubOperation_AdaptationType, PSO->Adapt));

      if(PSO->Target >= 0)
	Msg::Check(", Target %g", PSO->Target);

      if(PSO->Iso){
	if(PSO->Iso < 0){
	  Msg::Check(", Iso {");
	  for(i=0; i<List_Nbr(PSO->Iso_L); i++){
	    if(i!=List_Nbr(PSO->Iso_L)-1) 
	      Msg::Check("%g,", *(double*)List_Pointer(PSO->Iso_L,i));
	    else 
	      Msg::Check("%g}", *(double*)List_Pointer(PSO->Iso_L,i));
	  }
	}
	else{
	  Msg::Check(", Iso %d", PSO->Iso);
	}
      }
      
      /* todo: time steps, frequencies, values, changeofcoord, ... */
      
      Msg::Check(", Format %s",
	      Get_StringForDefine(PostSubOperation_Format, PSO->Format));

      if(PSO->FileOut){
	Msg::Check(", File %s\"%s\"", 
		(PSO->CatFile==2)?">> ":(PSO->CatFile==1)?"> ":"", PSO->FileOut);
      }

      Msg::Check("];\n");
    }
    Msg::Check("    }\n ");
    Msg::Check(" }\n");
  }
  Msg::Check("\n"); 
  Msg::Check("}\n");
}

void Print_Constant(); // defined in the parser since it uses the
		       // parser's static list of constants

int Print_Object(int ichoice)
{
  switch (ichoice) {
  case  0 : Print_Constant      ();  break;
  case  1 : Print_Group         ();  break;
  case  2 : Print_Expression    ();  break;
  case  3 : Print_Constraint    ();  break;
  case  4 : Print_Jacobian      ();  break;
  case  5 : Print_Integration   ();  break;
  case  6 : Print_FunctionSpace ();  break;
  case  7 : Print_Formulation   ();  break;
  case  8 : Print_Resolution    ();  break;
  case  9 : Print_PostProcessing();  break;
  case 10 : Print_PostOperation ();  break;
  default : return 1;
  }
  return 0;
}

void  Print_ProblemStructure()
{
  char buff[128];
  int  ichoice;

  while (1) {
    Msg::Info("Checking");
    Msg::Check("(1) Group                (2) Function\n"); 
    Msg::Check("(3) Constraint           (4) Jacobian\n");
    Msg::Check("(5) Integration          (6) FunctionSpace\n");
    Msg::Check("(7) Formulation          (8) Resolution\n");
    Msg::Check("(9) PostProcessing      (10) PostOperation\n");
    Msg::Check("(0) Quit\n"); 
    Msg::Check("Choice: ");
    fgets(buff, 128, stdin);
    ichoice = atoi(buff);
    if(Print_Object(ichoice ? ichoice : -1)){
      Msg::Check("E n d C h e c k i n g\n");
      return;
    }
  }
}

void Print_ListResolution(int choose, int Flag_LRES, char **name)
{
  struct Resolution *RE;
  int    i, Nbr, ichoice = 0;
  char   buff[128];

  if((Nbr = List_Nbr(Problem_S.Resolution))){
    if(Flag_LRES < 0){
      ichoice = - Flag_LRES;
    }
    else{
      Msg::Info("Available Resolutions");
      for (i = 0; i < Nbr; i++) {
	RE = (struct Resolution*)List_Pointer(Problem_S.Resolution, i);
	Msg::Check("(%d) %s\n", i+1, RE->Name);
	Msg::SendOptionOnSocket(1, RE->Name);
      }
      if(choose){
	Msg::Check("Choice: ");
	fgets(buff, 128, stdin);
	ichoice = atoi(buff);
      }
    }
    if(ichoice > 0 && ichoice < Nbr+1){
      RE = (struct Resolution*)List_Pointer(Problem_S.Resolution, ichoice-1);
      *name = RE->Name; 
      return;
    }
    else if(choose)
      Msg::Error("Unknown Resolution");
  }
  else
    Msg::Warning("No Resolution available");
}

void Print_ListPostOperation(int choose, int Flag_LPOS, char **name)
{
  struct PostOperation *PO;
  int    i, Nbr, ichoice = 0;
  char   buff[128];

  if((Nbr = List_Nbr(Problem_S.PostOperation))){
    if(Flag_LPOS < 0){
      ichoice = - Flag_LPOS;
    }
    else{
      Msg::Info("Available PostOperations");
      for (i = 0; i < Nbr; i++) {
	PO = (struct PostOperation*)List_Pointer(Problem_S.PostOperation, i);
	Msg::Check("(%d) %s\n", i+1, PO->Name);
	Msg::SendOptionOnSocket(2, PO->Name);
      }
      if(choose){
	Msg::Check("Choice: ");
	fgets(buff, 128, stdin);
	ichoice = atoi(buff);
      }
    }
    if(ichoice > 0 && ichoice < Nbr+1){
      PO = (struct PostOperation*)List_Pointer(Problem_S.PostOperation, ichoice-1);
      *name = PO->Name;
      return;
    }
    else if(choose)
      Msg::Error("Unknown PostOperation");
  }
  else
    Msg::Warning("No PostOperation available");
}

