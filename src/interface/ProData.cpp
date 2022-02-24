// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdlib.h>
#include <string.h>
#include <string>
#include <set>
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "ProParser.h"
#include "MacroManager.h"
#include "Message.h"
#include "MallocUtils.h"
#include "OS.h"

#if defined(HAVE_KERNEL)
#include "Generate_Network.h"
#endif

// Global problem structure: this is the only problem structure that
// is instanciated, and it is filled by the parser
struct Problem Problem_S;

// Global run-time current data: this is the only current data
// structure that is instantiated
struct CurrentData Current;

// Sorting functions

int fcmp_Integer(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int fcmp_Integer2(const void *a, const void *b)
{
  static int result;
  if((result = (*(int *)a - *(int *)b)) != 0) return result;
  return (*((int *)a + 1) - *((int *)b + 1));
}

int fcmp_Constant(const void *a, const void *b)
{
  return (strcmp(((struct Constant *)a)->Name, ((struct Constant *)b)->Name));
}

int fcmp_Expression_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct Expression *)b)->Name));
}

int fcmp_Group_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct Group *)b)->Name));
}

int fcmp_Constraint_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct Constraint *)b)->Name));
}

int fcmp_JacobianMethod_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct JacobianMethod *)b)->Name));
}

int fcmp_IntegrationMethod_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct IntegrationMethod *)b)->Name));
}

int fcmp_BasisFunction_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct BasisFunction *)b)->Name));
}

int fcmp_FunctionSpace_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct FunctionSpace *)b)->Name));
}

int fcmp_BasisFunction_NameOfCoef(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct BasisFunction *)b)->NameOfCoef));
}

int fcmp_SubSpace_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct SubSpace *)b)->Name));
}

int fcmp_GlobalQuantity_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct GlobalQuantity *)b)->Name));
}

int fcmp_Formulation_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct Formulation *)b)->Name));
}

int fcmp_DefineQuantity_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct DefineQuantity *)b)->Name));
}

int fcmp_DefineSystem_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct DefineSystem *)b)->Name));
}

int fcmp_Resolution_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct Resolution *)b)->Name));
}

int fcmp_PostProcessing_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct PostProcessing *)b)->Name));
}

int fcmp_PostQuantity_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct PostQuantity *)b)->Name));
}

int fcmp_PostOperation_Name(const void *a, const void *b)
{
  return (strcmp((char *)a, ((struct PostOperation *)b)->Name));
}

// I/O routines

void Init_ProblemStructure()
{
  Problem_S.Group = NULL;
  Problem_S.Expression = NULL;
  Problem_S.FunctionSpace = NULL;
  Problem_S.Constraint = NULL;
  Problem_S.Formulation = NULL;
  Problem_S.JacobianMethod = NULL;
  Problem_S.IntegrationMethod = NULL;
  Problem_S.Resolution = NULL;
  Problem_S.PostProcessing = NULL;
  Problem_S.PostOperation = NULL;

  Current.Name = NULL;
  Current.NbrSystem = 0;
  Current.DefineSystem_P = NULL;
  Current.DofData_P0 = NULL;
  Current.DofData = NULL;
  Current.GeoData = NULL;
  Current.PostOpData_L = NULL;
  Current.PostOpDataIndex = 0;
  Current.NbrHar = 0;
  Current.Region = 0;
  Current.SubRegion = 0;
  Current.NumEntity = 0;
  Current.NumEntityInElement = 0;
  Current.NumEntities[0] = 0;
  Current.Element = NULL;
  Current.IntegrationSupportIndex = 0;
  Current.ElementSource = 0;
  Current.SourceIntegrationSupportIndex = 0;
  Current.TypeTime = 0;
  Current.TypeAssembly = 0;
  Current.SubTimeStep = 0;
  Current.flagAssDiag = 0;
  Current.x = 0.0;
  Current.y = 0.0;
  Current.z = 0.0;
  Current.u = 0.0;
  Current.v = 0.0;
  Current.w = 0.0;
  Current.xs = 0.0;
  Current.ys = 0.0;
  Current.zs = 0.0;
  Current.us = 0.0;
  Current.vs = 0.0;
  Current.ws = 0.0;
  Current.a = 0.0;
  Current.b = 0.0;
  Current.c = 0.0;
  Current.xp = 0.0;
  Current.yp = 0.0;
  Current.zp = 0.0;
  Current.ut = 0.0;
  Current.vt = 0.0;
  Current.wt = 0.0;
  Current.Val[0] = 0.0;
  Current.QuadraturePointIndex = 0.0;
  Current.Time = 0.0;
  Current.TimeImag = 0.0;
  Current.TimeStep = 0.0;
  Current.DTime = 0.0;
  Current.Theta = 0.0;
  Current.Beta = 0.0;
  Current.Gamma = 0.0;
  Current.PredOrder = 0.0;
  Current.CorrOrder = 0.0;
  Current.aPredCoeff[0] = 0.0;
  Current.aCorrCoeff[0] = 0.0;
  Current.bCorrCoeff = 0.0;
  Current.PredErrorConst = 0.0;
  Current.CorrErrorConst = 0.0;
  Current.Breakpoint = 0.0;
  Current.Iteration = 0.0;
  Current.Residual = 0.0;
  Current.ResidualN = 0.0; //+++
  Current.Residual_Iter1 = 1.0; //+++
  Current.RelativeDifference = 0.0;
  Current.RelativeDifferenceOld = 0.0;
  Current.RelaxationFactor = 0.0;
  Current.RelaxFac = 0.0; //+++
  Current.NbrTestedFac = 0.0; //+++
  Current.SolveJacAdaptFailed = 0.0; //+++
  Current.KSPIterations = 0.0;
  Current.KSPIteration = 0.0;
  Current.KSPResidual = 0.0;
  Current.KSPSystemSize = 0.0;
  Current.Frequency = 0.0;
}

// FIXME: TODO to remove parser memory leaks!
void Free_Group(struct Group *a)
{
  // we should convert all the structs into classes and add a default
  // constructor with proper initializations ; cleanup the parser to make sure
  // who owns what, so we can safely delete
  //
  // List_Delete(a->ExtendedList); List_Delete(a->ExtendedSuppList);
}
void Free_Expression(struct Expression *a) {}
void Free_FunctinSpace(struct FunctionSpace *a) {}
void Free_Constraint(struct Constraint *a) {}
void Free_Formulation(struct Formuation *a) {}
void Free_JacobianMethod(struct JacobianMethod *a) {}
void Free_IntegrationMethod(struct IntegrationMethod *a) {}
void Free_Resolution(struct Resolution *a) {}
void Free_PostProcessing(struct PostProcessing *a) {}
void Free_PostOperation(struct PostOperation *a) {}

void Free_ProblemStructure()
{
  if(Problem_S.Group) {
    for(int i = 0; i < List_Nbr(Problem_S.Group); i++)
      Free_Group((Group *)List_Pointer(Problem_S.Group, i));
    List_Delete(Problem_S.Group);
  }
  if(Problem_S.Expression) {
    for(int i = 0; i < List_Nbr(Problem_S.Expression); i++)
      Free_Expression((Expression *)List_Pointer(Problem_S.Expression, i));
    List_Delete(Problem_S.Expression);
  }
  if(Problem_S.FunctionSpace) {
    for(int i = 0; i < List_Nbr(Problem_S.FunctionSpace); i++)
      Free_FunctinSpace(
        (FunctionSpace *)List_Pointer(Problem_S.FunctionSpace, i));
    List_Delete(Problem_S.FunctionSpace);
  }
  if(Problem_S.Constraint) {
    for(int i = 0; i < List_Nbr(Problem_S.Constraint); i++)
      Free_Constraint((Constraint *)List_Pointer(Problem_S.Constraint, i));
    List_Delete(Problem_S.Constraint);
  }
  if(Problem_S.Formulation) {
    for(int i = 0; i < List_Nbr(Problem_S.Formulation); i++)
      Free_Formulation((Formuation *)List_Pointer(Problem_S.Formulation, i));
    List_Delete(Problem_S.Formulation);
  }
  if(Problem_S.JacobianMethod) {
    for(int i = 0; i < List_Nbr(Problem_S.JacobianMethod); i++)
      Free_JacobianMethod(
        (JacobianMethod *)List_Pointer(Problem_S.JacobianMethod, i));
    List_Delete(Problem_S.JacobianMethod);
  }
  if(Problem_S.IntegrationMethod) {
    for(int i = 0; i < List_Nbr(Problem_S.IntegrationMethod); i++)
      Free_IntegrationMethod(
        (IntegrationMethod *)List_Pointer(Problem_S.IntegrationMethod, i));
    List_Delete(Problem_S.IntegrationMethod);
  }
  if(Problem_S.Resolution) {
    for(int i = 0; i < List_Nbr(Problem_S.Resolution); i++)
      Free_Resolution((Resolution *)List_Pointer(Problem_S.Resolution, i));
    List_Delete(Problem_S.Resolution);
  }
  if(Problem_S.PostProcessing) {
    for(int i = 0; i < List_Nbr(Problem_S.PostProcessing); i++)
      Free_PostProcessing(
        (PostProcessing *)List_Pointer(Problem_S.PostProcessing, i));
    List_Delete(Problem_S.PostProcessing);
  }
  if(Problem_S.PostOperation) {
    for(int i = 0; i < List_Nbr(Problem_S.PostOperation); i++)
      Free_PostOperation(
        (PostOperation *)List_Pointer(Problem_S.PostOperation, i));
    List_Delete(Problem_S.PostOperation);
  }
  Init_ProblemStructure();
}

std::string Fix_RelativePath(const char *name, const char *reference)
{
  if(!name || !strlen(name)) return "";

  std::string in(name);

  if(in[0] == '/' || in[0] == '\\' ||
     (in.size() > 3 && in[1] == ':' && (in[2] == '/' || in[2] == '\\'))) {
    // do nothing: 'in' is an absolute path
    return in;
  }
  else {
    char AbsPath[2048];
    strcpy(AbsPath, reference ? reference : getdp_yyname.c_str());
    int i = strlen(AbsPath) - 1;
    while(i >= 0 && AbsPath[i] != '/' && AbsPath[i] != '\\') i--;
    AbsPath[i + 1] = '\0';
    return std::string(AbsPath) + in;
  }
}

#if !defined(HAVE_NX)
void Read_ProblemPreamble()
{
  // no-op ; could be used to fill getdp_yystring in order to parse some
  // definitions before the actuel .pro file processing starts.
}
#endif

static std::vector<FILE *> openFiles;

void Read_ProblemStructure(const char *name)
{
  int Last_yylinenum = getdp_yylinenum;
  std::string Last_yyname = getdp_yyname;
  int Last_ErrorLevel = getdp_yyerrorlevel;
  int Last_yyincludenum = getdp_yyincludenum;

  char AbsPath[4096];
  int i;
  bool absolute = false;

  if((strlen(name) > 0 && (name[0] == '/' || name[0] == '\\')) ||
     (strlen(name) > 3 && name[1] == ':' &&
      (name[2] == '\\' || name[2] == '/'))) {
    // name is an absolute path
    absolute = true;
    strcpy(AbsPath, name);
  }
  else {
    strcpy(AbsPath, getdp_yyname.c_str());
    i = getdp_yyname.size() - 1;
    while(i >= 0 && getdp_yyname[i] != '/' && getdp_yyname[i] != '\\') i--;
    AbsPath[i + 1] = '\0';
    strcat(AbsPath, name);
  }

  Message::Info("Loading problem definition '%s'", AbsPath);

  Message::AddOnelabStringChoice(Message::GetOnelabClientName() +
                                   "/{Input files",
                                 "file", AbsPath, true, true);

  // opening the file in text mode messes up the loops (they use
  // fsetpos/fgetpos) on Windows without Cygwin; not sure why, but
  // opening the file in binary mode fixes the problem
  if(!(getdp_yyin = FOpen(AbsPath, "rb"))) {
    if(getdp_yyincludenum > 0 && !absolute) {
      // try to find included files in a standard directory
      Message::Info("File `%s' not found, looking in $GETDP_TEMPLATES",
                    AbsPath);
      const char *template_dir = getenv("GETDP_TEMPLATES");
      if(template_dir) {
        strcpy(AbsPath, template_dir);
        strcat(AbsPath, "/");
        strcat(AbsPath, name);
        printf("trying to open %s\n", AbsPath);
        if(!(getdp_yyin = FOpen(AbsPath, "rb"))) {
          Message::Error("Unable to open file '%s'", AbsPath);
          return;
        }
      }
      else {
        Message::Error("No template directory defined");
        return;
      }
    }
    else {
      Message::Error("Unable to open file '%s'", AbsPath);
      return;
    }
  }

  getdp_yyerrorlevel = 0;
  getdp_yylinenum = 1;
  getdp_yyincludenum = 0;
  getdp_yyname = std::string(AbsPath);

  getdp_yyrestart(getdp_yyin);
  getdp_yyparse();
  // don't close the file here: we'll need it if there is a Macro in it:
  // fclose(getdp_yyin);
  openFiles.push_back(getdp_yyin);

  if(getdp_yyerrorlevel) return;

  while(getdp_yyincludenum > 0) {
    Read_ProblemStructure(getdp_yyincludename);
    getdp_yyin = FOpen(getdp_yyname.c_str(), "rb"); // same comment as above
    getdp_yyrestart(getdp_yyin);
    for(i = 0; i < getdp_yylinenum; i++) {
      if(!fgets(AbsPath, sizeof(AbsPath), getdp_yyin))
        Message::Warning("Could not read line %d", getdp_yylinenum);
    }
    getdp_yylinenum++;
    getdp_yyparse();
    // don't close the file here: we'll need it if there is a Macro in it:
    // fclose(getdp_yyin);
    openFiles.push_back(getdp_yyin);
    if(getdp_yyerrorlevel) return;
  }

  level_include--;

  getdp_yylinenum = Last_yylinenum;
  getdp_yyname = Last_yyname;
  getdp_yyerrorlevel = Last_ErrorLevel;
  getdp_yyincludenum = Last_yyincludenum;
}

void Finalize_ProblemStructure()
{
  for(unsigned int i = 0; i < openFiles.size(); i++) fclose(openFiles[i]);
  openFiles.clear();
  MacroManager::Instance()->clear();
}

char *Get_ExpressionName(int Index)
{
  return (
    ((struct Expression *)List_Pointer(Problem_S.Expression, Index))->Name);
}

void Print_WholeQuantity(List_T *WholeQuantity, List_T *DQ_L)
{
  int j, k;
  struct WholeQuantity *WQ;

  WQ = (struct WholeQuantity *)List_Pointer(WholeQuantity, 0);

  for(k = 0; k < List_Nbr(WholeQuantity); k++) {
    switch((WQ + k)->Type) {
    case WQ_OPERATORANDQUANTITY:
      Message::Check(
        " {%s %s}",
        Get_StringForDefine(Operator_Type,
                            (WQ + k)->Case.OperatorAndQuantity.TypeOperator),
        ((struct DefineQuantity *)List_Pointer(
           DQ_L, (WQ + k)->Case.OperatorAndQuantity.Index))
          ->Name);
      break;

    case WQ_OPERATORANDQUANTITYEVAL:
      Message::Check(
        " {%s %s} ExplicitEvaluation",
        Get_StringForDefine(Operator_Type,
                            (WQ + k)->Case.OperatorAndQuantity.TypeOperator),
        ((struct DefineQuantity *)List_Pointer(
           DQ_L, (WQ + k)->Case.OperatorAndQuantity.Index))
          ->Name);
      break;

    case WQ_BINARYOPERATOR:
      switch((WQ + k)->Case.Operator.TypeOperator) {
      case OP_PLUS: Message::Check(" +"); break;
      case OP_MINUS: Message::Check(" -"); break;
      case OP_TIME: Message::Check(" *"); break;
      case OP_DIVIDE: Message::Check(" /"); break;
      case OP_MODULO: Message::Check(" %%"); break;
      case OP_POWER: Message::Check(" ^"); break;
      case OP_CROSSPRODUCT: Message::Check(" x"); break;
      case OP_LESS: Message::Check(" <"); break;
      case OP_GREATER: Message::Check(" >"); break;
      case OP_LESSOREQUAL: Message::Check(" <="); break;
      case OP_GREATEROREQUAL: Message::Check(" >="); break;
      case OP_EQUAL: Message::Check(" =="); break;
      case OP_NOTEQUAL: Message::Check(" !="); break;
      case OP_APPROXEQUAL: Message::Check(" ~="); break;
      case OP_AND: Message::Check(" &&"); break;
      case OP_OR: Message::Check(" ||"); break;
      default: Message::Check(" UnknownBinaryOperator[]"); break;
      }
      break;

    case WQ_UNARYOPERATOR:
      switch((WQ + k)->Case.Operator.TypeOperator) {
      case OP_NEG: Message::Check(" -(unary)"); break;
      case OP_NOT: Message::Check(" !"); break;
      default: Message::Check(" UnknownUnaryOperator[]"); break;
      }
      break;

    case WQ_EXPRESSION:
      Message::Check(" %s[]",
                     ((struct Expression *)List_Pointer(
                        Problem_S.Expression, (WQ + k)->Case.Expression.Index))
                       ->Name);
      break;

    case WQ_BUILTINFUNCTION:
    case WQ_EXTERNBUILTINFUNCTION:
      Message::Check(" %s", Get_StringForFunction2Nbr(
                              F_Function, (WQ + k)->Case.Function.Fct));
      if((WQ + k)->Type == WQ_EXTERNBUILTINFUNCTION) Message::Check("[.]");
      if((WQ + k)->Type == WQ_BUILTINFUNCTION) Message::Check("[]");
      if((WQ + k)->Case.Function.NbrParameters) {
        Message::Check("{");
        for(j = 0; j < (WQ + k)->Case.Function.NbrParameters; j++) {
          if(j) Message::Check(",");
          Message::Check(" %.10g", (WQ + k)->Case.Function.Para[j]);
        }
        Message::Check(" }");
      }
      break;

    case WQ_CONSTANT: Message::Check(" %.8g", (WQ + k)->Case.Constant); break;

    case WQ_MHTRANSFORM:
      Message::Check(" MHTransform[ ");
      Message::Check("%s",
                     Get_ExpressionName((WQ + k)->Case.MHTransform.Index));
      Message::Check("[");
      for(int i = 0; i < List_Nbr((WQ + k)->Case.MHTransform.WholeQuantity_L);
          i++) {
        List_T *wq;
        List_Read((WQ + k)->Case.MHTransform.WholeQuantity_L, i, &wq);
        Print_WholeQuantity(wq, DQ_L);
      }
      Message::Check(" ] ]{ %d }", (WQ + k)->Case.MHTransform.NbrPoints);
      break;

    case WQ_MHBILINEAR:
      Message::Check(" MHBilinear[ ");
      Message::Check("%s", Get_ExpressionName((WQ + k)->Case.MHBilinear.Index));
      Message::Check("]{ %d, %d}", (WQ + k)->Case.MHBilinear.NbrPoints,
                     (WQ + k)->Case.MHBilinear.FreqOffSet);
      break;

    case WQ_TIMEDERIVATIVE:
      Message::Check(" Dt[");
      Print_WholeQuantity((WQ + k)->Case.TimeDerivative.WholeQuantity, DQ_L);
      Message::Check(" ]");
      break;

    case WQ_TRACE:
      Message::Check(" Trace[");
      Print_WholeQuantity((WQ + k)->Case.Trace.WholeQuantity, DQ_L);
      Message::Check(
        " , %s ]", ((struct Group *)List_Pointer(Problem_S.Group,
                                                 (WQ + k)->Case.Trace.InIndex))
                     ->Name);
      break;

    case WQ_CAST:
      if(!(WQ + k)->Case.Cast.NbrHar)
        Message::Check(" <%s>[",
                       ((struct FunctionSpace *)List_Pointer(
                          Problem_S.FunctionSpace,
                          (WQ + k)->Case.Cast.FunctionSpaceIndexForType))
                         ->Name);
      else
        Message::Check(" <Real>[");
      Print_WholeQuantity((WQ + k)->Case.Cast.WholeQuantity, DQ_L);
      Message::Check(" ]");
      break;

    case WQ_CURRENTVALUE:
      Message::Check(
        " $%s", Get_StringForPointer(
                  Current_Value, (void *)((WQ + k)->Case.CurrentValue.Value)));
      break;

    case WQ_ARGUMENT:
      Message::Check(" $%d", (WQ + k)->Case.Argument.Index);
      break;

    case WQ_TEST:
      Message::Check(" ?");
      Print_WholeQuantity((WQ + k)->Case.Test.WholeQuantity_True, DQ_L);
      Message::Check(" :");
      Print_WholeQuantity((WQ + k)->Case.Test.WholeQuantity_False, DQ_L);
      break;

    case WQ_SAVEVALUE:
      Message::Check(" ->#%d", (WQ + k)->Case.SaveValue.Index + 1);
      break;

    case WQ_VALUESAVED:
      Message::Check(" #%d", (WQ + k)->Case.ValueSaved.Index + 1);
      break;

    case WQ_SAVENAMEDVALUE:
      Message::Check(" ->$%s", (WQ + k)->Case.NamedValue.Name);
      break;

    case WQ_NAMEDVALUESAVED:
      Message::Check(" $%s", (WQ + k)->Case.NamedValue.Name);
      break;

    case WQ_SHOWVALUE:
      Message::Check(" ->show with prefix #%d",
                     (WQ + k)->Case.ShowValue.Index + 1);
      break;

    default: Message::Check(" ???"); break;
    }
  }
}

void Print_Group()
{
  int i, Nbr, j;
  struct Group *GR;

  Nbr = List_Nbr(Problem_S.Group);

  Message::Check("Group {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    GR = (struct Group *)List_Pointer(Problem_S.Group, i);

    Message::Check(
      "  %s = %s [", GR->Name,
      Get_StringForDefine(FunctionForGroup_Type, GR->FunctionType));

    if(GR->InitialList != NULL) {
      Message::Check(" {");
      for(j = 0; j < List_Nbr(GR->InitialList); j++)
        Message::Check(" %d", *((int *)List_Pointer(GR->InitialList, j)));
      Message::Check(" }");
    }
    else
      Message::Check(" All");

    if(GR->InitialSuppList != NULL) {
      if(GR->SuppListType != SUPPLIST_INSUPPORT) {
        Message::Check(", %s {", Get_StringForDefine(FunctionForGroup_SuppList,
                                                     GR->SuppListType));
        for(j = 0; j < List_Nbr(GR->InitialSuppList); j++)
          Message::Check(" %d", *((int *)List_Pointer(GR->InitialSuppList, j)));
        Message::Check(" }");
      }
      else {
        Message::Check(", %s", Get_StringForDefine(FunctionForGroup_SuppList,
                                                   GR->SuppListType));
        Message::Check(
          " %s",
          ((struct Group *)List_Pointer(
             Problem_S.Group, *((int *)List_Pointer(GR->InitialSuppList, 0))))
            ->Name);
      }
    }

    if(GR->InitialSuppList2 != NULL) {
      if(GR->SuppListType2 != SUPPLIST_INSUPPORT) {
        Message::Check(", %s {", Get_StringForDefine(FunctionForGroup_SuppList,
                                                     GR->SuppListType2));
        for(j = 0; j < List_Nbr(GR->InitialSuppList2); j++)
          Message::Check(" %d",
                         *((int *)List_Pointer(GR->InitialSuppList2, j)));
        Message::Check(" }");
      }
      else {
        Message::Check(", %s", Get_StringForDefine(FunctionForGroup_SuppList,
                                                   GR->SuppListType2));
        Message::Check(
          " %s",
          ((struct Group *)List_Pointer(
             Problem_S.Group, *((int *)List_Pointer(GR->InitialSuppList2, 0))))
            ->Name);
      }
    }

    Message::Check(" ]");

    if(GR->Type == MOVINGBAND2D) {
      Message::Check("  = MovingBand2D [ {");

      for(j = 0; j < List_Nbr(GR->MovingBand2D->InitialList1); j++)
        Message::Check(
          " %d", *((int *)List_Pointer(GR->MovingBand2D->InitialList1, j)));
      Message::Check(" } , {");
      for(j = 0; j < List_Nbr(GR->MovingBand2D->InitialList2); j++)
        Message::Check(
          " %d", *((int *)List_Pointer(GR->MovingBand2D->InitialList2, j)));
      Message::Check(" } ]");
    }

    Message::Check(";  /* Num %d */\n", i);
  }

  Message::Check("\n");
  Message::Check("}\n");
}

void Print_Expression()
{
  int i, Nbr, j;
  struct Expression *EX;
  struct ExpressionPerRegion *EXPR;

  Nbr = List_Nbr(Problem_S.Expression);

  Message::Check("Function {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    EX = (struct Expression *)List_Pointer(Problem_S.Expression, i);

    switch(EX->Type) {
    case CONSTANT:
      Message::Check("  %s[] = %.10g;\n", EX->Name, EX->Case.Constant);
      break;

    case WHOLEQUANTITY:
      Message::Check("  %s[] = ", EX->Name);
      Print_WholeQuantity(EX->Case.WholeQuantity, NULL);
      Message::Check(";\n");
      break;

    case PIECEWISEFUNCTION:
      for(j = 0; j < List_Nbr(EX->Case.PieceWiseFunction.ExpressionPerRegion);
          j++) {
        EXPR = (struct ExpressionPerRegion *)List_Pointer(
          EX->Case.PieceWiseFunction.ExpressionPerRegion, j);
        Message::Check("  %s[%d] = Exp[%s];\n", EX->Name, EXPR->RegionIndex,
                       Get_ExpressionName(EXPR->ExpressionIndex));
      }
      if(EX->Case.PieceWiseFunction.ExpressionIndex_Default >= 0) {
        Message::Check("  %s[All] = Exp[%s];\n", EX->Name,
                       Get_ExpressionName(
                         EX->Case.PieceWiseFunction.ExpressionIndex_Default));
      }
      if(!List_Nbr(EX->Case.PieceWiseFunction.ExpressionPerRegion) &&
         EX->Case.PieceWiseFunction.ExpressionIndex_Default < 0)
        Message::Check("  DefineFunction[ %s ];\n", EX->Name);
      break;

    case PIECEWISEFUNCTION2:
      for(j = 0; j < List_Nbr(EX->Case.PieceWiseFunction2.ExpressionPerRegion);
          j++) {
        struct ExpressionPerRegion2 *EXPR;
        EXPR = (struct ExpressionPerRegion2 *)List_Pointer(
          EX->Case.PieceWiseFunction2.ExpressionPerRegion, j);
        Message::Check("  %s[%d,%d] = Exp[%s];\n", EX->Name,
                       EXPR->RegionIndex[0], EXPR->RegionIndex[1],
                       Get_ExpressionName(EXPR->ExpressionIndex));
      }
      if(EX->Case.PieceWiseFunction2.ExpressionIndex_Default >= 0) {
        Message::Check("  %s[All,All] = Exp[%s];\n", EX->Name,
                       Get_ExpressionName(
                         EX->Case.PieceWiseFunction.ExpressionIndex_Default));
      }
      if(!List_Nbr(EX->Case.PieceWiseFunction2.ExpressionPerRegion) &&
         EX->Case.PieceWiseFunction2.ExpressionIndex_Default < 0)
        Message::Check("  DefineFunction[ %s ];\n", EX->Name);
      break;

    case UNDEFINED_EXP:
      Message::Check("  DefineFunction[ %s ];\n", EX->Name);
      break;

    default: Message::Check("???;\n"); break;
    }
  }

  Message::Check("\n");
  Message::Check("}\n");
}

void Print_Network(struct MultiConstraintPerRegion *MCPR_P)
{
  int i, j;
  struct ConstraintActive *CA;

  CA = MCPR_P->Active;

  Message::Check("NbrNode = %d, NbrBranch = %d\n", CA->Case.Network.NbrNode,
                 CA->Case.Network.NbrBranch);
  Message::Check("\n");

  Message::Check("MatNode (NbrNode x NbrBranch):\n");
  for(i = 0; i < CA->Case.Network.NbrNode; i++) {
    for(j = 0; j < CA->Case.Network.NbrBranch; j++) {
      Message::Check("%2d ", CA->Case.Network.MatNode[i][j]);
    }
    Message::Check("\n");
  }

  Message::Check("\n");

  Message::Check("MatLoop (NbrLoop x NbrBranch):\n");
  for(i = 0; i < CA->Case.Network.NbrLoop; i++) {
    for(j = 0; j < CA->Case.Network.NbrBranch; j++) {
      Message::Check("%2d ", CA->Case.Network.MatLoop[i][j]);
    }
    Message::Check("\n");
  }
}

void Print_Constraint()
{
  int i, Nbr, j, Nbrj, k, Nbrk, index, index2;
  struct Constraint *CO;
  struct ConstraintPerRegion *CPR;
  struct MultiConstraintPerRegion MCPR_S;

  Nbr = List_Nbr(Problem_S.Constraint);

  Message::Check("Constraint {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    Message::Check(" /* Num : %d */\n", i);
    CO = (struct Constraint *)List_Pointer(Problem_S.Constraint, i);
    Message::Check("  { Name %s; Type %s;\n", CO->Name,
                   Get_StringForDefine(Constraint_Type, CO->Type));

    if(CO->Type == NETWORK) {
      Nbrk = List_Nbr(CO->MultiConstraintPerRegion);
      for(k = 0; k < Nbrk; k++) {
        List_Read(CO->MultiConstraintPerRegion, k, &MCPR_S);
        Message::Check("    Case %s {\n", MCPR_S.Name);

        Nbrj = List_Nbr(MCPR_S.ConstraintPerRegion);
        for(j = 0; j < Nbrj; j++) {
          CPR = (struct ConstraintPerRegion *)List_Pointer(
            MCPR_S.ConstraintPerRegion, j);
          Message::Check(
            "      { Region %s;",
            ((struct Group *)List_Pointer(Problem_S.Group, CPR->RegionIndex))
              ->Name);
          Message::Check(" Branch { %d, %d };", CPR->Case.Network.Node1,
                         CPR->Case.Network.Node2);
          Message::Check(" }\n");
        }
#if defined(HAVE_KERNEL)
        if(!MCPR_S.Active)
          MCPR_S.Active =
            Generate_Network(MCPR_S.Name, MCPR_S.ConstraintPerRegion);
#endif
        Print_Network(&MCPR_S);
      }
    }
    else {
      Message::Check("    Case {\n");
      Nbrj = List_Nbr(CO->ConstraintPerRegion);
      for(j = 0; j < Nbrj; j++) {
        CPR = (struct ConstraintPerRegion *)List_Pointer(
          CO->ConstraintPerRegion, j);
        Message::Check(
          "      { Region %s;",
          ((struct Group *)List_Pointer(Problem_S.Group, CPR->RegionIndex))
            ->Name);
        if(CPR->SubRegionIndex >= 0)
          Message::Check(
            " SubRegion %s;",
            ((struct Group *)List_Pointer(Problem_S.Group, CPR->SubRegionIndex))
              ->Name);
        if(CPR->Type != CO->Type)
          Message::Check(" Type %s;",
                         Get_StringForDefine(Constraint_Type, CPR->Type));

        switch(CPR->Type) {
        case ASSIGN:
        case INIT:
          Message::Check(" Value Exp[%s];",
                         Get_ExpressionName(CPR->Case.Fixed.ExpressionIndex));
          break;
        case ASSIGNFROMRESOLUTION:
        case INITFROMRESOLUTION:
          Message::Check(" NameOfResolution %s;",
                         CPR->Case.Solve.ResolutionName);
          break;
        case CST_LINK:
        case CST_LINKCPLX:
          if((index = CPR->Case.Link.RegionRefIndex) >= 0)
            Message::Check(
              " RegionRef %s;",
              ((struct Group *)List_Pointer(Problem_S.Group, index))->Name);
          if((index = CPR->Case.Link.SubRegionRefIndex) >= 0)
            Message::Check(
              " SubRegionRef %s;",
              ((struct Group *)List_Pointer(Problem_S.Group, index))->Name);

          if((index = CPR->Case.Link.FilterIndex) >= 0) {
            if((index2 = CPR->Case.Link.FilterIndex2) < 0)
              Message::Check(" Filter Exp[%s];", Get_ExpressionName(index));
            else
              Message::Check(" Filter [ Exp[%s], Exp[%s] ];",
                             Get_ExpressionName(index),
                             Get_ExpressionName(index2));
          }
          if((index = CPR->Case.Link.FunctionIndex) >= 0) {
            if((index2 = CPR->Case.Link.FunctionIndex2) < 0)
              Message::Check(" Function Exp[%s];", Get_ExpressionName(index));
            else
              Message::Check(" Function [ Exp[%s], Exp[%s] ];",
                             Get_ExpressionName(index),
                             Get_ExpressionName(index2));
          }
          if((index = CPR->Case.Link.CoefIndex) >= 0) {
            if((index2 = CPR->Case.Link.CoefIndex2) < 0)
              Message::Check(" Coefficient Exp[%s];",
                             Get_ExpressionName(index));
            else
              Message::Check(" Coefficient [ Exp[%s], Exp[%s] ];",
                             Get_ExpressionName(index),
                             Get_ExpressionName(index2));
          }
          Message::Check(" ToleranceFactor %g;",
                         CPR->Case.Link.ToleranceFactor);
          break;
        }

        if(CPR->TimeFunctionIndex >= 0)
          Message::Check(" TimeFunction Exp[%s];",
                         Get_ExpressionName(CPR->TimeFunctionIndex));

        Message::Check(" }\n");
      }
    }

    Message::Check("    }\n");
    Message::Check("  }\n");
  }
  Message::Check("\n");
  Message::Check("}\n");
}

void Print_Jacobian()
{
  int i, Nbr, j, Nbrj, k;
  struct JacobianMethod *JM;
  struct JacobianCase *JC;

  Nbr = List_Nbr(Problem_S.JacobianMethod);

  Message::Check("Jacobian {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    Message::Check(" /* Num : %d */\n", i);
    JM = (struct JacobianMethod *)List_Pointer(Problem_S.JacobianMethod, i);
    Message::Check("  { Name %s;\n", JM->Name);

    Message::Check("    Case {\n");
    Nbrj = List_Nbr(JM->JacobianCase);
    for(j = 0; j < Nbrj; j++) {
      JC = (struct JacobianCase *)List_Pointer(JM->JacobianCase, j);

      Message::Check("      { Region ");
      if(JC->RegionIndex >= 0)
        Message::Check("%s;", ((struct Group *)List_Pointer(Problem_S.Group,
                                                            JC->RegionIndex))
                                ->Name);
      else
        Message::Check("All;");
      Message::Check(" Jacobian %s",
                     Get_StringForDefine1Nbr(Jacobian_Type, JC->TypeJacobian));
      if(JC->NbrParameters) {
        for(k = 0; k < JC->NbrParameters; k++) {
          if(k)
            Message::Check(",");
          else
            Message::Check(" {");
          Message::Check(" %.10g", JC->Para[k]);
        }
        Message::Check(" }");
      }
      Message::Check(";");
      if(JC->CoefficientIndex >= 0)
        Message::Check(" Coefficient Exp[%s];",
                       Get_ExpressionName(JC->CoefficientIndex));
      Message::Check(" }\n");
    }
    Message::Check("    }\n");
    Message::Check("  }\n");
  }
  Message::Check("\n");
  Message::Check("}\n");
}

void Print_Integration()
{
  int i, j, k, Nbrm, Nbrc, Nbrq;
  struct IntegrationMethod *IM;
  struct IntegrationCase *IC;
  struct Quadrature *Q;

  Nbrm = List_Nbr(Problem_S.IntegrationMethod);

  Message::Check("Integration {  /* nbr = %d */\n", Nbrm);
  Message::Check("\n");

  for(i = 0; i < Nbrm; i++) {
    Message::Check(" /* Num : %d */\n", i);
    IM =
      (struct IntegrationMethod *)List_Pointer(Problem_S.IntegrationMethod, i);
    Message::Check("  { Name %s; \n", IM->Name);
    if(IM->CriterionIndex >= 0)
      Message::Check("    Criterion Exp[%s]; \n",
                     Get_ExpressionName(IM->CriterionIndex));

    Nbrc = List_Nbr(IM->IntegrationCase);
    Message::Check("    Case {");
    Message::Check("   /* nbr = %d */\n", Nbrc);
    for(j = 0; j < Nbrc; j++) {
      IC = (struct IntegrationCase *)List_Pointer(IM->IntegrationCase, j);
      Message::Check("       { Type %s;",
                     Get_StringForDefine(Integration_Type, IC->Type));
      switch(IC->Type) {
      case GAUSS:
        Message::Check("\n");
        Message::Check("         Case {\n");

        Nbrq = List_Nbr(IC->Case);
        for(k = 0; k < Nbrq; k++) {
          Q = (struct Quadrature *)List_Pointer(IC->Case, k);
          Message::Check("            { GeoElement %s; NumberOfPoints %d; }\n",
                         Get_StringForDefine(Element_Type, Q->ElementType),
                         Q->NumberOfPoints);
        }
        Message::Check("         }\n");
        Message::Check("       }\n");
        break;

      default: Message::Check(" }\n"); break;
      }
    }
    Message::Check("    }\n");
    Message::Check("  }\n");
  }
  Message::Check("\n");
  Message::Check("}\n");
}

void Print_FunctionSpace()
{
  struct FunctionSpace *FS;
  struct BasisFunction *BF;
  struct SubSpace *SS;
  struct GlobalQuantity *GQ;
  struct ConstraintInFS *CO;
  List_T *BF_L, *SS_L, *GQ_L, *CO_L;
  int i0, i, Nbr0, Nbr, j, Nbrj;

  Nbr0 = List_Nbr(Problem_S.FunctionSpace);

  Message::Check("FunctionSpace {  /* nbr = %d */\n", Nbr0);
  Message::Check("\n");

  for(i0 = 0; i0 < Nbr0; i0++) {
    Message::Check(" /* Num : %d */\n", i0);
    FS = (struct FunctionSpace *)List_Pointer(Problem_S.FunctionSpace, i0);
    BF_L = FS->BasisFunction;
    SS_L = FS->SubSpace;
    GQ_L = FS->GlobalQuantity;
    CO_L = FS->Constraint;

    Message::Check("  { Name %s; Type %s;", FS->Name,
                   Get_StringForDefine(Field_Type, FS->Type));
    Message::Check("\n");

    Nbr = List_Nbr(BF_L);
    if(Nbr > 0) {
      Message::Check("    BasisFunction {\n");
      BF = (struct BasisFunction *)List_Pointer(BF_L, 0);
      for(i = 0; i < Nbr; i++) {
        Message::Check("    /* GlobalNum : %d */\n", BF->Num);
        Message::Check("      Name %s; NameOfCoef %s; Function %s;\n", BF->Name,
                       BF->NameOfCoef,
                       Get_StringFor3Function3Nbr(BF_Function, BF->Function));
        if(BF->SubFunction) {
          Message::Check("      SubFunction {");
          Nbrj = List_Nbr(BF->SubFunction);
          for(j = 0; j < Nbrj; j++)
            Message::Check(" %s",
                           ((struct Expression *)List_Pointer(
                              Problem_S.Expression,
                              *((int *)List_Pointer(BF->SubFunction, j))))
                             ->Name);
          Message::Check(" };\n");
        }

        if(BF->SubdFunction) {
          Message::Check("      SubdFunction {");
          Nbrj = List_Nbr(BF->SubdFunction);
          for(j = 0; j < Nbrj; j++)
            Message::Check(" %s",
                           ((struct Expression *)List_Pointer(
                              Problem_S.Expression,
                              *((int *)List_Pointer(BF->SubdFunction, j))))
                             ->Name);
          Message::Check(" };\n");
        }

        Message::Check(
          "      Support %s;",
          (BF->SupportIndex >= 0) ?
            ((struct Group *)List_Pointer(Problem_S.Group, BF->SupportIndex))
              ->Name :
            "?");
        Message::Check(" Entity %s;\n", (BF->EntityIndex >= 0) ?
                                          ((struct Group *)List_Pointer(
                                             Problem_S.Group, BF->EntityIndex))
                                            ->Name :
                                          "?");

        BF += 1;
      }
      Message::Check("    }\n");
    }

    BF = (Nbr > 0) ? (struct BasisFunction *)List_Pointer(BF_L, 0) : NULL;
    Nbr = List_Nbr(SS_L);
    if(Nbr > 0) {
      Message::Check("    SubSpace {\n");
      SS = (struct SubSpace *)List_Pointer(SS_L, 0);
      for(i = 0; i < Nbr; i++) {
        Message::Check("      Name %s; NameOfBasisFunction {", SS->Name);
        Nbrj = List_Nbr(SS->BasisFunction);
        for(j = 0; j < Nbrj; j++)
          Message::Check(" %s /* n%d */",
                         ((struct BasisFunction *)List_Pointer(
                            BF_L, *((int *)List_Pointer(SS->BasisFunction, j))))
                           ->Name,
                         *((int *)List_Pointer(SS->BasisFunction, j)));
        Message::Check(" };\n");
        SS += 1;
      }
      Message::Check("    }\n");
    }

    Nbr = List_Nbr(GQ_L);
    if(Nbr > 0) {
      Message::Check("    GlobalQuantity {\n");
      GQ = (struct GlobalQuantity *)List_Pointer(GQ_L, 0);
      for(i = 0; i < Nbr; i++) {
        Message::Check("    /* GlobalNum : %d */\n", GQ->Num);
        Message::Check("      Name %s; Type %s;", GQ->Name,
                       Get_StringForDefine(GlobalQuantity_Type, GQ->Type));
        Message::Check(
          " NameOfCoef %s;\n",
          ((struct BasisFunction *)List_Pointer(BF_L, GQ->ReferenceIndex))
            ->NameOfCoef);
        GQ += 1;
      }
      Message::Check("    }\n");
    }

    Nbr = List_Nbr(CO_L);
    if(Nbr > 0) {
      Message::Check("    Constraint {\n");
      CO = (struct ConstraintInFS *)List_Pointer(CO_L, 0);
      for(i = 0; i < Nbr; i++) {
        Message::Check("      NameOfCoef ");
        if(CO->QuantityType == LOCALQUANTITY)
          Message::Check("%s;", ((struct BasisFunction *)List_Pointer(
                                   BF_L, CO->ReferenceIndex))
                                  ->NameOfCoef);
        else if(CO->QuantityType == GLOBALQUANTITY)
          Message::Check("%s;", ((struct GlobalQuantity *)List_Pointer(
                                   GQ_L, CO->ReferenceIndex))
                                  ->Name);
        else
          Message::Check("?;");

        Message::Check(" // Entity %s;\n", ((struct Group *)List_Pointer(
                                              Problem_S.Group, CO->EntityIndex))
                                             ->Name);

        switch(CO->ConstraintPerRegion->Type) {
        case INIT: Message::Check("      // Type Init;");
        case ASSIGN:
          Message::Check(
            "      // Value Exp[%s];",
            Get_ExpressionName(
              CO->ConstraintPerRegion->Case.Fixed.ExpressionIndex));
          break;
        case ASSIGNFROMRESOLUTION:
        case INITFROMRESOLUTION:
          Message::Check("      // Resolution %s;",
                         CO->ConstraintPerRegion->Case.Solve.ResolutionName);
          break;
        }

        if(CO->ConstraintPerRegion->TimeFunctionIndex >= 0)
          Message::Check(
            " TimeFunction Exp[%s];",
            Get_ExpressionName(CO->ConstraintPerRegion->TimeFunctionIndex));

        Message::Check("\n");
        CO += 1;
      }
      Message::Check("    }\n");
    }

    Message::Check("  }\n");
  }

  Message::Check("\n");
  Message::Check("}\n");
}

void Print_Formulation()
{
  struct Formulation *FO;
  struct DefineQuantity *DQ;
  struct EquationTerm *FE;
  struct GlobalEquationTerm *GET;
  List_T *DQ_L, *FE_L;
  int i, Nbr, j, Nbrj, k, Nbrk;

  Nbr = List_Nbr(Problem_S.Formulation);

  Message::Check("Formulation {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    Message::Check(" /* Num : %d */\n", i);

    FO = (struct Formulation *)List_Pointer(Problem_S.Formulation, i);

    Message::Check("  { Name %s; Type %s;\n", FO->Name,
                   Get_StringForDefine(Formulation_Type, FO->Type));

    DQ_L = FO->DefineQuantity;
    FE_L = FO->Equation;

    Message::Check("    Quantity {\n");
    Nbrj = List_Nbr(DQ_L);
    for(j = 0; j < Nbrj; j++) {
      DQ = (struct DefineQuantity *)List_Pointer(DQ_L, j);

      Message::Check("      { Name %s; Type %s; NameOfSpace %s", DQ->Name,
                     Get_StringForDefine(DefineQuantity_Type, DQ->Type),
                     (DQ->FunctionSpaceIndex < 0) ?
                       "?" :
                       ((struct FunctionSpace *)List_Pointer(
                          Problem_S.FunctionSpace, DQ->FunctionSpaceIndex))
                         ->Name);
      if(DQ->IndexInFunctionSpace) {
        if(DQ->Type == GLOBALQUANTITY)
          Message::Check(
            "[%s]", ((struct GlobalQuantity *)List_Pointer(
                       ((struct FunctionSpace *)List_Pointer(
                          Problem_S.FunctionSpace, DQ->FunctionSpaceIndex))
                         ->GlobalQuantity,
                       *((int *)List_Pointer(DQ->IndexInFunctionSpace, 0))))
                      ->Name);
        else if(DQ->Type == LOCALQUANTITY) {
          Message::Check("[");
          Nbrk = List_Nbr(DQ->IndexInFunctionSpace);
          for(k = 0; k < Nbrk; k++)
            Message::Check(" %d",
                           *((int *)List_Pointer(DQ->IndexInFunctionSpace, k)));
          Message::Check("]");
        }
      }
      Message::Check(";");

      if(DQ->Type == INTEGRALQUANTITY) {
        Message::Check("\n");
        Message::Check("        Integration %s;\n",
                       ((struct IntegrationMethod *)List_Pointer(
                          Problem_S.IntegrationMethod,
                          DQ->IntegralQuantity.IntegrationMethodIndex))
                         ->Name);
        Message::Check("        Jacobian %s;",
                       ((struct JacobianMethod *)List_Pointer(
                          Problem_S.JacobianMethod,
                          DQ->IntegralQuantity.JacobianMethodIndex))
                         ->Name);
      }
      Message::Check(" }\n");
    }
    Message::Check("    }\n");

    Message::Check("    Equation {\n");

    Nbrj = List_Nbr(FE_L);
    for(j = 0; j < Nbrj; j++) {
      FE = (struct EquationTerm *)List_Pointer(FE_L, j);
      if(FE->Type == GALERKIN || FE->Type == DERHAM) {
        if(FE->Type == GALERKIN)
          Message::Check("      Galerkin { Density [ ... ];\n");
        if(FE->Type == DERHAM)
          Message::Check("      deRham   { Density [ ... ];\n");
        Message::Check("                 In %s;\n",
                       ((struct Group *)List_Pointer(
                          Problem_S.Group, FE->Case.LocalTerm.InIndex))
                         ->Name);
        Message::Check(
          "                 Jacobian %s; \n",
          ((struct JacobianMethod *)List_Pointer(
             Problem_S.JacobianMethod, FE->Case.LocalTerm.JacobianMethodIndex))
            ->Name);
        Message::Check("                 Integration %s; }\n",
                       ((struct IntegrationMethod *)List_Pointer(
                          Problem_S.IntegrationMethod,
                          FE->Case.LocalTerm.IntegrationMethodIndex))
                         ->Name);

        Message::Check("      /* Inventaire des DQ (%d) [%d] :",
                       FE->Case.LocalTerm.Term.NbrQuantityIndex,
                       FE->Case.LocalTerm.Term.QuantityIndexPost);
        for(k = 0; k < FE->Case.LocalTerm.Term.NbrQuantityIndex; k++)
          Message::Check(
            " {%s}", ((struct DefineQuantity *)List_Pointer(
                        DQ_L, FE->Case.LocalTerm.Term.QuantityIndexTable[k]))
                       ->Name);
        Message::Check(" */\n");

        Message::Check("      /* WholeQuantity (%d) :",
                       List_Nbr(FE->Case.LocalTerm.Term.WholeQuantity));
        Print_WholeQuantity(FE->Case.LocalTerm.Term.WholeQuantity, DQ_L);
        Message::Check(" */\n");
      }
      else if(FE->Type == GLOBALTERM) {
        Message::Check("      GlobalTerm { [ ... ];\n");
        Message::Check("                 In %s;\n",
                       ((struct Group *)List_Pointer(
                          Problem_S.Group, FE->Case.GlobalTerm.InIndex))
                         ->Name);

        if(FE->Case.GlobalTerm.SubType != EQ_ST_SELF)
          Message::Check(
            "                 SubType %s;\n",
            Get_StringForDefine(Equation_SubType, FE->Case.GlobalTerm.SubType));

        Message::Check("      /* Inventaire des DQ (%d) [%d,%d] :",
                       FE->Case.GlobalTerm.Term.NbrQuantityIndex,
                       FE->Case.GlobalTerm.Term.DefineQuantityIndexDof,
                       FE->Case.GlobalTerm.Term.DefineQuantityIndexEqu);
        for(k = 0; k < FE->Case.GlobalTerm.Term.NbrQuantityIndex; k++)
          Message::Check(
            " {%s}", ((struct DefineQuantity *)List_Pointer(
                        DQ_L, FE->Case.GlobalTerm.Term.QuantityIndexTable[k]))
                       ->Name);
        Message::Check(" */\n");

        Message::Check("      /* WholeQuantity (%d) :",
                       List_Nbr(FE->Case.GlobalTerm.Term.WholeQuantity));
        Print_WholeQuantity(FE->Case.GlobalTerm.Term.WholeQuantity, DQ_L);
        Message::Check(" */\n");
      }
      else if(FE->Type == GLOBALEQUATION) {
        Message::Check(
          "      GlobalEquation { Type %s; UsingConstraint %s;\n",
          Get_StringForDefine(Constraint_Type, FE->Case.GlobalEquation.Type),
          (FE->Case.GlobalEquation.ConstraintIndex >= 0) ?
            ((struct Constraint *)List_Pointer(
               Problem_S.Constraint, FE->Case.GlobalEquation.ConstraintIndex))
              ->Name :
            "undefined_constraint");
        Nbrk = List_Nbr(FE->Case.GlobalEquation.GlobalEquationTerm);
        for(k = 0; k < Nbrk; k++) {
          GET = (struct GlobalEquationTerm *)List_Pointer(
            FE->Case.GlobalEquation.GlobalEquationTerm, k);
          Message::Check("        { Node {%s}; Loop {%s}; Equation {%s};",
                         ((struct DefineQuantity *)List_Pointer(
                            DQ_L, GET->DefineQuantityIndexNode))
                           ->Name,
                         ((struct DefineQuantity *)List_Pointer(
                            DQ_L, GET->DefineQuantityIndexLoop))
                           ->Name,
                         ((struct DefineQuantity *)List_Pointer(
                            DQ_L, GET->DefineQuantityIndexEqu))
                           ->Name);
          Message::Check(" In %s; }\n", ((struct Group *)List_Pointer(
                                           Problem_S.Group, GET->InIndex))
                                          ->Name);
        }
      }
    }
    Message::Check("    }\n");
    Message::Check("  }\n");
  }
  Message::Check("\n");
  Message::Check("}\n");
}

void Print_Operation(struct Resolution *RE, List_T *Operation_L)
{
  struct Operation *OPE;
  int i, j, Nbrj;
  static int NbrBlk = -1;

  NbrBlk++;

  Nbrj = List_Nbr(Operation_L);

  for(j = 0; j < Nbrj; j++) {
    OPE = (struct Operation *)List_Pointer(Operation_L, j);

    switch(OPE->Type) {
    case OPERATION_GENERATE:
    case OPERATION_GENERATEONLY:
    case OPERATION_SOLVE:
    case OPERATION_GENERATEJAC:
    case OPERATION_SOLVEJAC:
    case OPERATION_SOLVENL:
    case OPERATION_GENERATESEPARATE:
    case OPERATION_INITSOLUTION:
    case OPERATION_SAVESOLUTION:
    case OPERATION_SAVESOLUTIONS:
    case OPERATION_READSOLUTION:
    case OPERATION_TRANSFERSOLUTION:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      %s [%s];\n",
                     Get_StringForDefine(Operation_Type, OPE->Type),
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name);
      break;

    case OPERATION_UPDATE:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      Update [ %s, Exp[%s] ];\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name,
                     Get_ExpressionName(OPE->Case.Update.ExpressionIndex));
      break;

    case OPERATION_SELECTCORRECTION:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      SelectCorrection [ %s, %d ] ;\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name,
                     OPE->Case.SelectCorrection.Iteration);
      break;

    case OPERATION_ADDCORRECTION:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      AddCorrection [ %s, %g ] ;\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name,
                     OPE->Case.AddCorrection.Alpha);
      break;

    case OPERATION_UPDATECONSTRAINT:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      UpdateConstraint [ %s ] ;\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name);
      break;

    case OPERATION_FOURIERTRANSFORM:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      FourierTransform [ %s, %s, {...} ];\n",
        ((struct DefineSystem *)List_Pointer(
           RE->DefineSystem, OPE->Case.FourierTransform.DefineSystemIndex[0]))
          ->Name,
        ((struct DefineSystem *)List_Pointer(
           RE->DefineSystem, OPE->Case.FourierTransform.DefineSystemIndex[1]))
          ->Name);
      break;

    case OPERATION_TIMELOOPTHETA:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      TimeLoopTheta [ %.10g, %.10g, Exp[%s], Exp[%s] ] {\n",
        OPE->Case.TimeLoopTheta.Time0, OPE->Case.TimeLoopTheta.TimeMax,
        Get_ExpressionName(OPE->Case.TimeLoopTheta.DTimeIndex),
        Get_ExpressionName(OPE->Case.TimeLoopTheta.ThetaIndex));
      Print_Operation(RE, OPE->Case.TimeLoopTheta.Operation);
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      }\n");
      break;

    case OPERATION_TIMELOOPNEWMARK:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      TimeLoopNewmark [ %.10g, %.10g, Exp[%s], %.10g, %.10g ] {\n",
        OPE->Case.TimeLoopNewmark.Time0, OPE->Case.TimeLoopNewmark.TimeMax,
        Get_ExpressionName(OPE->Case.TimeLoopNewmark.DTimeIndex),
        OPE->Case.TimeLoopNewmark.Beta, OPE->Case.TimeLoopNewmark.Gamma);
      Print_Operation(RE, OPE->Case.TimeLoopNewmark.Operation);
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      }\n");
      break;

    case OPERATION_ITERATIVELOOP:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      IterativeLoop [ %d, %.10g, Exp[%s] ] {\n",
        OPE->Case.IterativeLoop.NbrMaxIteration,
        OPE->Case.IterativeLoop.Criterion,
        Get_ExpressionName(OPE->Case.IterativeLoop.RelaxationFactorIndex));
      Print_Operation(RE, OPE->Case.IterativeLoop.Operation);
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      }\n");
      break;

    case OPERATION_LANCZOS:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      Lanczos [ %s, %d, { ... } , %.10g ];\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name,
                     OPE->Case.Lanczos.Size, OPE->Case.Lanczos.Shift);
      break;

    case OPERATION_EIGENSOLVE:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      EigenSolve [ %s, %d, %.10g , %.10g ];\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name,
                     OPE->Case.EigenSolve.NumEigenvalues,
                     OPE->Case.EigenSolve.Shift_r,
                     OPE->Case.EigenSolve.Shift_i);
      break;

    case OPERATION_POSTOPERATION:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      PostOperation [ ... ];\n");
      break;

    case OPERATION_EVALUATE:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      Evaluate [ ... ];\n");
      break;

    case OPERATION_SETTIME:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      SetTime [ Exp[%s] ];\n",
                     Get_ExpressionName(OPE->Case.SetTime.ExpressionIndex));
      break;

    case OPERATION_SETFREQUENCY:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      SetFrequency [ %s, Exp[%s] ];\n",
        ((struct DefineSystem *)List_Pointer(RE->DefineSystem,
                                             OPE->DefineSystemIndex))
          ->Name,
        Get_ExpressionName(OPE->Case.SetFrequency.ExpressionIndex));
      break;

    case OPERATION_BREAK:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      Break;\n");
      break;

    case OPERATION_SYSTEMCOMMAND:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      SystemCommand \" %s \";\n",
                     OPE->Case.SystemCommand.String);
      break;

    case OPERATION_TEST:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      If [ Exp[%s] ] {\n",
                     Get_ExpressionName(OPE->Case.Test.ExpressionIndex));
      Print_Operation(RE, OPE->Case.Test.Operation_True);
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      }\n");
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      if(OPE->Case.Test.Operation_False) {
        Message::Check("      Else {\n");
        Print_Operation(RE, OPE->Case.Test.Operation_False);
        Message::Check("      }\n");
      }
      break;

    case OPERATION_CHANGEOFCOORDINATES:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      ChangeOfCoordinates [ %s, Exp[%s] ];\n",
        ((struct Group *)List_Pointer(Problem_S.Group,
                                      OPE->Case.ChangeOfCoordinates.GroupIndex))
          ->Name,
        Get_ExpressionName(OPE->Case.ChangeOfCoordinates.ExpressionIndex));
      break;

    case OPERATION_INIT_MOVINGBAND2D:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      Init_MovingBand2D [ %s ];\n",
        ((struct Group *)List_Pointer(Problem_S.Group,
                                      OPE->Case.Init_MovingBand2D.GroupIndex))
          ->Name);
      break;

    case OPERATION_MESH_MOVINGBAND2D:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      Mesh_MovingBand2D [ %s ];\n",
        ((struct Group *)List_Pointer(Problem_S.Group,
                                      OPE->Case.Mesh_MovingBand2D.GroupIndex))
          ->Name);
      break;
    case OPERATION_GENERATE_MH_MOVING:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      GenerateMHMoving [ %s, %s, %g, %d ];\n",
        ((struct DefineSystem *)List_Pointer(RE->DefineSystem,
                                             OPE->DefineSystemIndex))
          ->Name,
        ((struct Group *)List_Pointer(Problem_S.Group,
                                      OPE->Case.Generate_MH_Moving.GroupIndex))
          ->Name,
        OPE->Case.Generate_MH_Moving.Period,
        OPE->Case.Generate_MH_Moving.NbrStep);
      break;
    case OPERATION_GENERATE_MH_MOVING_S:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check(
        "      GenerateMHMovingSeparate [ %s, %s, %g, %d ];\n",
        ((struct DefineSystem *)List_Pointer(RE->DefineSystem,
                                             OPE->DefineSystemIndex))
          ->Name,
        ((struct Group *)List_Pointer(
           Problem_S.Group, OPE->Case.Generate_MH_Moving_S.GroupIndex))
          ->Name,
        OPE->Case.Generate_MH_Moving_S.Period,
        OPE->Case.Generate_MH_Moving_S.NbrStep);
      break;
    case OPERATION_ADDMHMOVING:
      for(i = 0; i < 2 * NbrBlk; i++) Message::Check(" ");
      Message::Check("      AddMHMoving [%s];\n",
                     ((struct DefineSystem *)List_Pointer(
                        RE->DefineSystem, OPE->DefineSystemIndex))
                       ->Name);
      break;

    case OPERATION_DEFORMMESH:
      if(OPE->Case.DeformMesh.Quantity && OPE->Case.DeformMesh.Quantity2 &&
         OPE->Case.DeformMesh.Quantity3)
        Message::Check(
          "      DeformMesh [%s, {%s, %s, %s}, '%s']; \n",
          ((struct DefineSystem *)List_Pointer(RE->DefineSystem,
                                               OPE->DefineSystemIndex))
            ->Name,
          OPE->Case.DeformMesh.Quantity, OPE->Case.DeformMesh.Quantity2,
          OPE->Case.DeformMesh.Quantity3, OPE->Case.DeformMesh.Name_MshFile);
      else
        Message::Check("      DeformMesh [%s, %s, '%s']; \n",
                       ((struct DefineSystem *)List_Pointer(
                          RE->DefineSystem, OPE->DefineSystemIndex))
                         ->Name,
                       OPE->Case.DeformMesh.Quantity,
                       OPE->Case.DeformMesh.Name_MshFile);
      break;

    case OPERATION_GMSHREAD:
      Message::Check("      GmshRead [%s]; \n", OPE->Case.GmshRead.FileName);
      break;

    case OPERATION_GMSHMERGE:
      Message::Check("      GmshMerge [%s]; \n", OPE->Case.GmshRead.FileName);
      break;

    case OPERATION_GMSHOPEN:
      Message::Check("      GmshOpen [%s]; \n", OPE->Case.GmshRead.FileName);
      break;

    case OPERATION_GMSHWRITE:
      Message::Check("      GmshWrite [%s]; \n", OPE->Case.GmshRead.FileName);
      break;

    case OPERATION_GMSHCLEARALL:
      Message::Check("      GmshClearAll; \n");
      break;

    case OPERATION_DELETEFILE:
      Message::Check("      DeleteFile [%s]; \n",
                     OPE->Case.DeleteFile.FileName);
      break;

    case OPERATION_RENAMEFILE:
      Message::Check("      RenameFile [%s, %s]; \n",
                     OPE->Case.RenameFile.OldFileName,
                     OPE->Case.RenameFile.NewFileName);
      break;

    case OPERATION_CREATEDIR:
      Message::Check("      CreateDir [%s]; \n", OPE->Case.CreateDir.DirName);
      break;

    default: Message::Check("      ???;\n"); break;
    }
  }

  NbrBlk--;
}

void Print_Resolution()
{
  struct Resolution *RE;
  struct DefineSystem *DS;
  List_T *DS_L;
  int i, Nbr, j, Nbrj, k;

  Nbr = List_Nbr(Problem_S.Resolution);

  Message::Check("Resolution {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    Message::Check(" /* Num : %d */\n", i);

    RE = (struct Resolution *)List_Pointer(Problem_S.Resolution, i);

    Message::Check("  { Name %s\n", RE->Name);

    DS_L = RE->DefineSystem;

    Message::Check("    System {\n");
    Nbrj = List_Nbr(DS_L);
    for(j = 0; j < Nbrj; j++) {
      DS = (struct DefineSystem *)List_Pointer(DS_L, j);

      Message::Check("      { Name %s; Type %s; ", DS->Name,
                     Get_StringForDefine(DefineSystem_Type, DS->Type));

      Message::Check("NameOfFormulation {");
      for(k = 0; k < List_Nbr(DS->FormulationIndex); k++)
        Message::Check(" %s",
                       ((struct Formulation *)List_Pointer(
                          Problem_S.Formulation,
                          *((int *)List_Pointer(DS->FormulationIndex, k))))
                         ->Name);
      Message::Check(" }; ");

      if(DS->MeshName) Message::Check("NameOfMesh %s; ", DS->MeshName);

      if(DS->OriginSystemIndex) {
        Message::Check("OriginSystem {");

        for(k = 0; k < List_Nbr(DS->OriginSystemIndex); k++) {
          if(k) Message::Check(",");
          Message::Check(" %d",
                         *((int *)List_Pointer(DS->OriginSystemIndex, k)));
        }
        Message::Check(" } ;");
      }

      if(DS->Type == VAL_COMPLEX) {
        Message::Check("Frequency {");

        for(k = 0; k < List_Nbr(DS->FrequencyValue); k++) {
          if(k) Message::Check(",");
          Message::Check(" %.10g",
                         *((double *)List_Pointer(DS->FrequencyValue, k)));
        }
        Message::Check(" };");
      }

      Message::Check(" }\n");
    }
    Message::Check("    }\n");

    Message::Check("    Operation {\n");
    Print_Operation(RE, RE->Operation);
    Message::Check("    }\n");
    Message::Check("  }\n");
  }
  Message::Check("\n");
  Message::Check("}\n");
}

void Print_PostProcessing()
{
  struct PostProcessing *PP;
  struct PostQuantity *PQ;
  struct PostQuantityTerm *PQT;
  int i, Nbr, j, Nbrj, k, Nbrk;

  Nbr = List_Nbr(Problem_S.PostProcessing);

  Message::Check("PostProcessing {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    Message::Check(" /* Num : %d */\n", i);

    PP = (struct PostProcessing *)List_Pointer(Problem_S.PostProcessing, i);

    Message::Check("  { Name %s; NameOfFormulation %s; \n", PP->Name,
                   ((struct Formulation *)List_Pointer(Problem_S.Formulation,
                                                       PP->FormulationIndex))
                     ->Name);

    if(PP->NameOfSystem) Message::Check("NameOfSystem %s;", PP->NameOfSystem);

    Nbrj = List_Nbr(PP->PostQuantity);
    if(Nbrj > 0) {
      Message::Check("    Quantity {\n");
      for(j = 0; j < Nbrj; j++) {
        PQ = (struct PostQuantity *)List_Pointer(PP->PostQuantity, j);
        Message::Check("      { Name %s;\n", PQ->Name);
        Message::Check("        Value {\n");
        Nbrk = List_Nbr(PQ->PostQuantityTerm);
        for(k = 0; k < Nbrk; k++) {
          PQT =
            (struct PostQuantityTerm *)List_Pointer(PQ->PostQuantityTerm, k);
          Message::Check("          { %s { ['",
                         Get_StringForDefine(PostQuantityTerm_EvaluationType,
                                             PQT->EvaluationType));
          Print_WholeQuantity(PQT->WholeQuantity,
                              ((struct Formulation *)List_Pointer(
                                 Problem_S.Formulation, PP->FormulationIndex))
                                ->DefineQuantity);
          Message::Check(" ']; /* DefineQuantityType %s */\n",
                         Get_StringForDefine(DefineQuantity_Type, PQT->Type));

          if(PQT->InIndex > 0)
            Message::Check(
              "                    In %s;\n",
              ((struct Group *)List_Pointer(Problem_S.Group, PQT->InIndex))
                ->Name);
          if(PQT->IntegrationMethodIndex > 0)
            Message::Check(
              "                    Integration %s;\n",
              ((struct IntegrationMethod *)List_Pointer(
                 Problem_S.IntegrationMethod, PQT->IntegrationMethodIndex))
                ->Name);
          if(PQT->JacobianMethodIndex > 0)
            Message::Check(
              "                    Jacobian %s;\n",
              ((struct JacobianMethod *)List_Pointer(Problem_S.JacobianMethod,
                                                     PQT->JacobianMethodIndex))
                ->Name);
        }
        Message::Check("          } } }\n");
        Message::Check("      }\n");
      }
      Message::Check("    }\n");
    }
    Message::Check("  }\n");
  }
  Message::Check("\n}");
  Message::Check("\n");
}

void Print_PostOperation()
{
  struct PostProcessing *PP;
  struct PostOperation *PO;
  struct PostSubOperation *PSO;
  int i, Nbr, k, Nbrk;

  Nbr = List_Nbr(Problem_S.PostOperation);

  Message::Check("PostOperation {  /* nbr = %d */\n", Nbr);
  Message::Check("\n");

  for(i = 0; i < Nbr; i++) {
    PO = (struct PostOperation *)List_Pointer(Problem_S.PostOperation, i);
    PP = (struct PostProcessing *)List_Pointer(Problem_S.PostProcessing,
                                               PO->PostProcessingIndex);

    Message::Check("  { Name %s; NameOfPostProcessing %s;\n", PO->Name,
                   PP->Name);
    Message::Check("    Operation {\n");

    Nbrk = List_Nbr(PO->PostSubOperation);
    for(k = 0; k < Nbrk; k++) {
      PSO = (struct PostSubOperation *)List_Pointer(PO->PostSubOperation, k);
      switch(PSO->Type) {
      case POP_PRINT:
        Message::Check("      Print[%s",
                       ((struct PostQuantity *)List_Pointer(
                          PP->PostQuantity, PSO->PostQuantityIndex[0]))
                         ->Name);
        if(PSO->PostQuantitySupport[0] >= 0)
          Message::Check(
            " [%s]", ((struct Group *)List_Pointer(Problem_S.Group,
                                                   PSO->PostQuantitySupport[0]))
                       ->Name);
        if(PSO->PostQuantityIndex[1] >= 0) {
          Message::Check(" %s %s",
                         Get_StringForDefine(PostSubOperation_CombinationType,
                                             PSO->CombinationType),
                         ((struct PostQuantity *)List_Pointer(
                            PP->PostQuantity, PSO->PostQuantityIndex[1]))
                           ->Name);
          if(PSO->PostQuantitySupport[1] >= 0)
            Message::Check(" [%s]",
                           ((struct Group *)List_Pointer(
                              Problem_S.Group, PSO->PostQuantitySupport[1]))
                             ->Name);
        }
        switch(PSO->SubType) {
        case PRINT_ONREGION:
          if(PSO->Case.OnRegion.RegionIndex >= 0)
            Message::Check(", OnRegion %s",
                           ((struct Group *)List_Pointer(
                              Problem_S.Group, PSO->Case.OnRegion.RegionIndex))
                             ->Name);
          else
            Message::Check(", OnGlobal");
          break;
        case PRINT_ONELEMENTSOF:
          Message::Check(", OnElementsOf %s",
                         ((struct Group *)List_Pointer(
                            Problem_S.Group, PSO->Case.OnRegion.RegionIndex))
                           ->Name);
          break;
        case PRINT_ONGRID:
          Message::Check(", OnGrid %s",
                         ((struct Group *)List_Pointer(
                            Problem_S.Group, PSO->Case.OnRegion.RegionIndex))
                           ->Name);
          break;
        case PRINT_ONGRID_0D:
          Message::Check(", OnPoint {%.10g,%.10g,%.10g}", PSO->Case.OnGrid.x[0],
                         PSO->Case.OnGrid.y[0], PSO->Case.OnGrid.z[0]);
          break;
        case PRINT_ONGRID_1D:
          Message::Check(
            ", OnLine {{%.10g,%.10g,%.10g}{%.10g,%.10g,%.10g}} {%d}",
            PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0], PSO->Case.OnGrid.z[0],
            PSO->Case.OnGrid.x[1], PSO->Case.OnGrid.y[1], PSO->Case.OnGrid.z[1],
            PSO->Case.OnGrid.n[0]);
          break;
        case PRINT_ONGRID_2D:
          Message::Check(
            ", OnPlane {{%.10g,%.10g,%.10g}{%.10g,%.10g,%.10g}"
            "{%.10g,%.10g,%.10g}} {%d,%d}",
            PSO->Case.OnGrid.x[0], PSO->Case.OnGrid.y[0], PSO->Case.OnGrid.z[0],
            PSO->Case.OnGrid.x[1], PSO->Case.OnGrid.y[1], PSO->Case.OnGrid.z[1],
            PSO->Case.OnGrid.x[2], PSO->Case.OnGrid.y[2], PSO->Case.OnGrid.z[2],
            PSO->Case.OnGrid.n[0], PSO->Case.OnGrid.n[1]);
          break;
        default: /* parametric grid, ... */ break;
        }
        break;
      default: /* POP_EXPRESSION, POP_GROUP, etc. */ break;
      }

      if(PSO->Depth != 1) Message::Check(", Depth %d", PSO->Depth);

      if(PSO->Skin) Message::Check(", Skin");

      if(PSO->NoNewLine) Message::Check(", NoNewLine");

      if(PSO->Smoothing) Message::Check(", Smoothing %d", PSO->Smoothing);

      if(PSO->Dimension != DIM_ALL)
        Message::Check(", Dimension %d", PSO->Dimension);

      if(PSO->HarmonicToTime > 1)
        Message::Check(", HarmonicToTime %d", PSO->HarmonicToTime);

      if(PSO->TimeToHarmonic)
        Message::Check(", TimeToHarmonic %d", PSO->TimeToHarmonic);

      if(PSO->FourierTransform == 1) Message::Check(", FourierTransform");
      if(PSO->FourierTransform == 2) Message::Check(", CosineTransform");

      if(PSO->TimeInterval_Flag)
        Message::Check(", TimeInterval {%g, %g}", PSO->TimeInterval[0],
                       PSO->TimeInterval[1]);

      if(PSO->Sort)
        Message::Check(", Sort %s", Get_StringForDefine(
                                      PostSubOperation_SortType, PSO->Adapt));

      if(PSO->Adapt)
        Message::Check(
          ", Adapt %s",
          Get_StringForDefine(PostSubOperation_AdaptationType, PSO->Adapt));

      if(PSO->Target >= 0) Message::Check(", Target %g", PSO->Target);

      if(PSO->Iso) {
        if(PSO->Iso < 0) {
          Message::Check(", Iso {");
          for(i = 0; i < List_Nbr(PSO->Iso_L); i++) {
            if(i != List_Nbr(PSO->Iso_L) - 1)
              Message::Check("%g,", *(double *)List_Pointer(PSO->Iso_L, i));
            else
              Message::Check("%g}", *(double *)List_Pointer(PSO->Iso_L, i));
          }
        }
        else {
          Message::Check(", Iso %d", PSO->Iso);
        }
      }

      /* todo: time steps, frequencies, values, changeofcoord, ... */

      Message::Check(", Format %s",
                     Get_StringForDefine(PostSubOperation_Format, PSO->Format));

      if(PSO->FileOut) {
        Message::Check(", File %s\"%s\"",
                       (PSO->CatFile == 2) ? ">> " :
                       (PSO->CatFile == 1) ? "> " :
                                             "",
                       PSO->FileOut);
      }

      Message::Check("];\n");
    }
    Message::Check("    }\n ");
    Message::Check(" }\n");
  }
  Message::Check("\n");
  Message::Check("}\n");
}

int Print_Object(int ichoice)
{
  switch(ichoice) {
  case 0: Print_Constants(); break;
  case 1: Print_Group(); break;
  case 2: Print_Expression(); break;
  case 3: Print_Constraint(); break;
  case 4: Print_Jacobian(); break;
  case 5: Print_Integration(); break;
  case 6: Print_FunctionSpace(); break;
  case 7: Print_Formulation(); break;
  case 8: Print_Resolution(); break;
  case 9: Print_PostProcessing(); break;
  case 10: Print_PostOperation(); break;
  default: return 1;
  }
  return 0;
}

void Print_ProblemStructure()
{
  char buff[128];
  int ichoice;

  while(1) {
    Message::Info("Checking");
    Message::Direct("(1) Constants        (2) Groups          (3) Functions");
    Message::Direct(
      "(4) Constraints      (5) Jacobians       (6) Integrations");
    Message::Direct("(7) FunctionSpaces   (8) Formulations    (9) Resolutions");
    Message::Direct("(10) PostProcessings (11) PostOperations (other) Quit");
    Message::Check("Choice: ");
    if(!fgets(buff, 128, stdin)) break;
    ichoice = atoi(buff);
    if(Print_Object(ichoice ? ichoice - 1 : -1)) {
      Message::Check("E n d C h e c k i n g\n");
      return;
    }
  }
}

void Print_ListResolution(int choose, int Flag_LRES, char **name)
{
  struct Resolution *RE;
  int ichoice = 0;
  char buff[128];
  bool print = (!choose || (!Message::UseSocket() && !Message::UseOnelab()));

  std::vector<std::string> choices;
  for(int i = 0; i < List_Nbr(Problem_S.Resolution); i++) {
    RE = (struct Resolution *)List_Pointer(Problem_S.Resolution, i);
    if(!RE->Hidden) choices.push_back(RE->Name);
  }

  if(choices.size()) {
    if(Flag_LRES < 0) { ichoice = -Flag_LRES; }
    else {
      if(print) Message::Info("Available Resolutions");
      for(unsigned i = 0; i < choices.size(); i++) {
        if(print) Message::Direct("(%d) %s", i + 1, choices[i].c_str());
        if(Message::UseSocket())
          Message::SendOptionOnSocket(1, choices[i].c_str());
      }
      if(Message::UseOnelab() && choices.size()) {
        Constant c;
        c.Name = (char *)"ResolutionChoices";
        c.Type = VAR_CHAR;
        c.Value.Char = strSave(choices[0].c_str());
        std::map<std::string, std::vector<double> > floatOptions;
        // force *not* read-only here, in case the parameter already exists *as
        // read-only* in the DB, in which case we do want to keep the value
        // from the server
        floatOptions["ReadOnly"].push_back(0);
        std::map<std::string, std::vector<std::string> > charOptions;
        charOptions["Choices"] = choices;
        charOptions["Name"].push_back(Message::GetOnelabClientName() +
                                      "/1ResolutionChoices");
        charOptions["Label"].push_back("Resolution");
        Message::ExchangeOnelabParameter(&c, floatOptions, charOptions);
        if(choose) {
          *name = c.Value.Char;
          return;
        }
      }
      if(choose) {
        Message::Check("Choice: ");
        if(fgets(buff, 128, stdin)) ichoice = atoi(buff);
      }
    }
    if(ichoice > 0 && ichoice < (int)choices.size() + 1) {
      *name = strSave(choices[ichoice - 1].c_str());
      return;
    }
    else if(choose)
      Message::Error("Unknown Resolution");
  }
  else
    Message::Info("No Resolution available");
}

static std::string removeWhiteSpace(const std::string &s)
{
  std::string::size_type beg = s.find_first_not_of(' ');
  std::string::size_type end = s.find_last_not_of(' ');
  if(beg == std::string::npos || end == std::string::npos) return "";
  return s.substr(beg, end + 1 - beg);
}

void Print_ListPostOperation(int choose, int Flag_LPOS, char *name[NBR_MAX_POS])
{
  struct PostOperation *PO;
  int ichoice = 0;
  char buff[128];
  bool print = (!choose || (!Message::UseSocket() && !Message::UseOnelab()));

  std::vector<std::string> choices;
  for(int i = 0; i < List_Nbr(Problem_S.PostOperation); i++) {
    PO = (struct PostOperation *)List_Pointer(Problem_S.PostOperation, i);
    if(!PO->Hidden) choices.push_back(PO->Name);
  }

  if(choices.size()) {
    if(Flag_LPOS < 0) { ichoice = -Flag_LPOS; }
    else {
      if(print) Message::Info("Available PostOperations");
      for(unsigned i = 0; i < choices.size(); i++) {
        if(print) Message::Direct("(%d) %s", i + 1, choices[i].c_str());
        if(Message::UseSocket())
          Message::SendOptionOnSocket(2, choices[i].c_str());
      }

      if(Message::UseOnelab() && choices.size()) {
        Constant c;
        c.Name = (char *)"PostOperationChoices";
        c.Type = VAR_CHAR;
        c.Value.Char = strSave(choices[0].c_str());
        std::map<std::string, std::vector<double> > floatOptions;
        // force *not* read-only here, in case the parameter already exists *as
        // read-only* in the DB, in which case we do want to keep the value
        // from the server
        floatOptions["ReadOnly"].push_back(0);
        std::map<std::string, std::vector<std::string> > charOptions;
        charOptions["Choices"] = choices;
        charOptions["Name"].push_back(Message::GetOnelabClientName() +
                                      "/2PostOperationChoices");
        charOptions["Label"].push_back("Post-processing");
        charOptions["MultipleSelection"].push_back("0");
        Message::ExchangeOnelabParameter(&c, floatOptions, charOptions);
        if(choose) {
          std::string str(c.Value.Char);
          int i = 0;
          std::string::size_type first = 0;
          while(1) {
            std::string::size_type last = str.find_first_of(",", first);
            std::string next = str.substr(first, last - first);
            name[i++] = strSave(removeWhiteSpace(next).c_str());
            if(last == std::string::npos) break;
            first = last + 1;
            if(i == NBR_MAX_POS - 1) break;
          }
          name[i] = NULL;
          return;
        }
      }

      if(choose) {
        Message::Check("Choice: ");
        if(fgets(buff, 128, stdin)) ichoice = atoi(buff);
      }
    }
    if(ichoice > 0 && ichoice < (int)choices.size() + 1) {
      name[0] = strSave(choices[ichoice - 1].c_str());
      name[1] = NULL;
      return;
    }
    else if(choose)
      Message::Error("Unknown PostOperation");
  }
  else
    Message::Info("No PostOperation available");
}
