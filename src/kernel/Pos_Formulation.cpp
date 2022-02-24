// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <string.h>
#include <math.h>
#include "ProData.h"
#include "DofData.h"
#include "GeoData.h"
#include "Get_DofOfElement.h"
#include "Cal_Quantity.h"
#include "Pos_Print.h"
#include "Pos_Format.h"
#include "ListUtils.h"
#include "Message.h"
#include "OS.h"
#if defined(HAVE_GMSH)
#include <gmsh/GmshGlobal.h>
#include <gmsh/MVertex.h>
#include <gmsh/GModel.h>
#include <gmsh/PView.h>
#include <gmsh/PViewData.h>
#endif
#include "MallocUtils.h"
#include "SolvingAnalyse.h"
#if defined(HAVE_GSL)
#include <gsl/gsl_errno.h>
#include <gsl/gsl_spline.h>
#endif

#define TWO_PI 6.2831853071795865

extern struct Problem Problem_S;
extern struct CurrentData Current;
extern int Flag_BIN, Flag_GMSH_VERSION;
extern char *Name_Path;

FILE *PostStream = stdout;
char PostFileName[256];

/* ------------------------------------------------------------------------ */
/*  P o s _ F e m F o r m u l a t i o n                                     */
/* ------------------------------------------------------------------------ */

void Pos_FemFormulation(struct Formulation *Formulation_P,
                        struct PostQuantity *NCPQ_P, struct PostQuantity *CPQ_P,
                        int Order, struct PostSubOperation *PostSubOperation_P)
{
  struct Element Element;
  struct DefineQuantity *DefineQuantity_P0;
  struct QuantityStorage *QuantityStorage_P0, QuantityStorage;

  List_T *QuantityStorage_L;
  int i;

  Get_InitDofOfElement(&Element);

  DefineQuantity_P0 =
    (struct DefineQuantity *)List_Pointer(Formulation_P->DefineQuantity, 0);
  QuantityStorage_L = List_Create(List_Nbr(Formulation_P->DefineQuantity), 1,
                                  sizeof(struct QuantityStorage));

  for(i = 0; i < List_Nbr(Formulation_P->DefineQuantity); i++) {
    QuantityStorage.DefineQuantity = DefineQuantity_P0 + i;

    if(QuantityStorage.DefineQuantity->Type == INTEGRALQUANTITY &&
       QuantityStorage.DefineQuantity->IntegralQuantity.DefineQuantityIndexDof <
         0) {
      QuantityStorage.TypeQuantity = VECTOR; /* on ne sait pas... */
    }
    else {
      QuantityStorage.TypeQuantity =
        ((struct FunctionSpace *)List_Pointer(
           Problem_S.FunctionSpace,
           (DefineQuantity_P0 + i)->FunctionSpaceIndex))
          ->Type;
    }

    QuantityStorage.NumLastElementForFunctionSpace = 0;
    List_Add(QuantityStorage_L, &QuantityStorage);
  }

  QuantityStorage_P0 =
    (struct QuantityStorage *)List_Pointer(QuantityStorage_L, 0);

  switch(PostSubOperation_P->Type) {
  case POP_PRINT:
    switch(PostSubOperation_P->SubType) {
    case PRINT_ONREGION:
      Pos_PrintOnRegion(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
                        QuantityStorage_P0, PostSubOperation_P);
      break;
    case PRINT_ONELEMENTSOF:
    case PRINT_ONGRID:
      Pos_PrintOnElementsOf(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
                            QuantityStorage_P0, PostSubOperation_P);
      break;
    case PRINT_ONSECTION_1D:
    case PRINT_ONSECTION_2D:
      Pos_PrintOnSection(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
                         QuantityStorage_P0, PostSubOperation_P);
      break;
    case PRINT_ONGRID_0D:
    case PRINT_ONGRID_1D:
    case PRINT_ONGRID_2D:
    case PRINT_ONGRID_3D:
    case PRINT_ONGRID_PARAM:
      Pos_PrintOnGrid(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
                      QuantityStorage_P0, PostSubOperation_P);
      break;
    case PRINT_WITHARGUMENT:
      Pos_PrintWithArgument(NCPQ_P, CPQ_P, Order, DefineQuantity_P0,
                            QuantityStorage_P0, PostSubOperation_P);
      break;
    default: Message::Error("Unknown Operation type for Print"); break;
    }
    break;

  case POP_EXPRESSION: Pos_PrintExpression(PostSubOperation_P); break;

  case POP_GROUP: Pos_PrintGroup(PostSubOperation_P); break;

  default: Message::Error("Unknown PostSubOperation type"); break;
  }

  List_Delete(QuantityStorage_L);
}

/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t T i m e S t e p s                                       */
/* ------------------------------------------------------------------------ */

int Pos_InitTimeSteps(struct PostSubOperation *PostSubOperation_P)
{
  int iTime, NbTimeStep;
  double TOL = 1.e-15;

  // last time step only
  if(PostSubOperation_P->LastTimeStepOnly ||
     PostSubOperation_P->AppendTimeStepToFileName) {
    iTime = List_Nbr(Current.DofData->Solutions) - 1;
    List_Reset(PostSubOperation_P->TimeStep_L);
    List_Add(PostSubOperation_P->TimeStep_L, &iTime);
    return 1;
  }

  // specific time values or time interval
  if(PostSubOperation_P->TimeInterval_Flag ||
     List_Nbr(PostSubOperation_P->TimeValue_L) ||
     List_Nbr(PostSubOperation_P->TimeImagValue_L)) {
    List_Reset(PostSubOperation_P->TimeStep_L);
    for(int i = 0; i < List_Nbr(Current.DofData->Solutions); i++) {
      Solution *s =
        (struct Solution *)List_Pointer(Current.DofData->Solutions, i);
      int step = s->TimeStep;
      double time = s->Time, timeImag = s->TimeImag;
      if(PostSubOperation_P->TimeInterval_Flag) {
        if((time >= PostSubOperation_P->TimeInterval[0] - TOL) &&
           (time <= PostSubOperation_P->TimeInterval[1] + TOL)) {
          List_Insert(PostSubOperation_P->TimeStep_L, &step, fcmp_int);
        }
      }
      else {
        for(int j = 0; j < List_Nbr(PostSubOperation_P->TimeValue_L); j++) {
          double t;
          List_Read(PostSubOperation_P->TimeValue_L, j, &t);
          if(fabs(t - time) < TOL) {
            List_Insert(PostSubOperation_P->TimeStep_L, &step, fcmp_int);
          }
        }
        for(int j = 0; j < List_Nbr(PostSubOperation_P->TimeImagValue_L); j++) {
          double t;
          List_Read(PostSubOperation_P->TimeImagValue_L, j, &t);
          if(fabs(t - timeImag) < TOL)
            List_Insert(PostSubOperation_P->TimeStep_L, &step, fcmp_int);
        }
      }
    }
    NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L);
    if(NbTimeStep) return NbTimeStep;
  }

  // specific time steps
  NbTimeStep = List_Nbr(PostSubOperation_P->TimeStep_L);

  if(!NbTimeStep || !PostSubOperation_P->FrozenTimeStepList) {
    NbTimeStep = List_Nbr(Current.DofData->Solutions);
    List_Reset(PostSubOperation_P->TimeStep_L);
    for(iTime = 0; iTime < NbTimeStep; iTime++)
      List_Add(PostSubOperation_P->TimeStep_L, &iTime);
  }

  return NbTimeStep;
}

/* ------------------------------------------------------------------------ */
/*  P o s _ I n i t A l l S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Pos_InitAllSolutions(List_T *TimeStep_L, int Index_TimeStep)
{
  int TimeStepIndex, k, Num_Solution;

  List_Read(TimeStep_L, Index_TimeStep, &TimeStepIndex);

  for(k = 0; k < Current.NbrSystem; k++)
    if((Num_Solution =
          std::min(List_Nbr((Current.DofData_P0 + k)->Solutions) - 1,
                   TimeStepIndex)) >= 0)
      (Current.DofData_P0 + k)->CurrentSolution =
        (struct Solution *)List_Pointer((Current.DofData_P0 + k)->Solutions,
                                        Num_Solution);

  if(TimeStepIndex >= 0 &&
     TimeStepIndex < List_Nbr(Current.DofData->Solutions)) {
    Solution *Solution_P = ((struct Solution *)List_Pointer(
      Current.DofData->Solutions, TimeStepIndex));
    Current.TimeStep = Solution_P->TimeStep;
    Current.Time = Solution_P->Time;
    Current.TimeImag = Solution_P->TimeImag;
    Current.Frequency = Solution_P->Frequency;
  }
  else { // Warning: this can be wrong
    Current.TimeStep = TimeStepIndex;
    if(Current.DofData->CurrentSolution) {
      Current.Time = Current.DofData->CurrentSolution->Time;
      Current.TimeImag = Current.DofData->CurrentSolution->TimeImag;
      Current.Frequency = Current.DofData->CurrentSolution->Frequency;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  P o s _ R e s a m p l e T i m e                                         */
/* ------------------------------------------------------------------------ */

#if !defined(HAVE_GSL)

void Pos_ResampleTime(struct PostOperation *PostOperation_P)
{
  Message::Error("ResampleTime requires the GSL");
}

#else

void Pos_ResampleTime(struct PostOperation *PostOperation_P)
{
  double ResampleTimeStart, ResampleTimeStop, ResampleTimeStep;
  double OriginalStopTime, *OriginalTime_P, *OriginalValueR_P,
    *OriginalValueI_P;
  double InterpValueRe, InterpValueIm;
  int OriginalNbrOfSolutions, NewNbrOfSolutions, xLength;
  Solution *Solution_P, Solution_S;
  List_T *NewSolutions_L;

  ResampleTimeStart = PostOperation_P->ResampleTimeStart;
  ResampleTimeStop = PostOperation_P->ResampleTimeStop;
  ResampleTimeStep = PostOperation_P->ResampleTimeStep;
  OriginalNbrOfSolutions = List_Nbr(Current.DofData->Solutions);

  OriginalTime_P = (double *)Malloc(OriginalNbrOfSolutions * sizeof(double));
  OriginalValueR_P = (double *)Malloc(OriginalNbrOfSolutions * sizeof(double));
  if(gSCALAR_SIZE == 2)
    OriginalValueI_P =
      (double *)Malloc(OriginalNbrOfSolutions * sizeof(double));
  else
    OriginalValueI_P = NULL;

  Solution_P = (struct Solution *)List_Pointer(Current.DofData->Solutions,
                                               OriginalNbrOfSolutions - 1);
  OriginalStopTime = Solution_P->Time;
  ResampleTimeStop =
    (OriginalStopTime < ResampleTimeStop) ? OriginalStopTime : ResampleTimeStop;
  for(int i = 0; i < OriginalNbrOfSolutions; i++) {
    Solution_P = (struct Solution *)List_Pointer(Current.DofData->Solutions, i);
    if(!Solution_P->SolutionExist) Message::Error("Empty solution(s) found");
    OriginalTime_P[i] = Solution_P->Time;
  }

  LinAlg_GetVectorSize(&Solution_P->x, &xLength);

  NewNbrOfSolutions =
    floor((ResampleTimeStop - ResampleTimeStart) / ResampleTimeStep) + 1;
  if(NewNbrOfSolutions < 1)
    Message::Error(
      "Invalid ResampleTime settings - t_start: %.6g  t_stop: %.6g  "
      "t_sample: %.6g",
      ResampleTimeStart, ResampleTimeStop, ResampleTimeStep);
  NewSolutions_L = List_Create(NewNbrOfSolutions, 1, sizeof(Solution));
  for(int i = 0; i < NewNbrOfSolutions; i++) {
    // Create new Solutions list
    Solution_S.TimeStep = i;
    Solution_S.Time = ResampleTimeStart + i * ResampleTimeStep;
    Solution_S.TimeImag = 0.0;
    Solution_S.SolutionExist = 1;
    LinAlg_CreateVector(&Solution_S.x, &Current.DofData->Solver, xLength);
    List_Add(NewSolutions_L, &Solution_S);
  }

  for(int i = 0; i < xLength; i++) {
    if(gSCALAR_SIZE == 1) {
      for(int j = 0; j < OriginalNbrOfSolutions; j++) {
        Solution_P =
          (struct Solution *)List_Pointer(Current.DofData->Solutions, j);
        LinAlg_GetDoubleInVector(&OriginalValueR_P[j], &Solution_P->x, i);
      }
      gsl_interp_accel *acc = gsl_interp_accel_alloc();
      gsl_spline *spline =
        gsl_spline_alloc(gsl_interp_cspline, OriginalNbrOfSolutions);
      gsl_spline_init(spline, OriginalTime_P, OriginalValueR_P,
                      OriginalNbrOfSolutions);

      for(int j = 0; j < NewNbrOfSolutions; j++) {
        Solution_P = (struct Solution *)List_Pointer(NewSolutions_L, j);
        InterpValueRe = gsl_spline_eval(spline, Solution_P->Time, acc);
        LinAlg_SetDoubleInVector(InterpValueRe, &Solution_P->x, i);
      }

      gsl_spline_free(spline);
      gsl_interp_accel_free(acc);
    }
    if(gSCALAR_SIZE == 2) {
      for(int j = 0; j < OriginalNbrOfSolutions; j++) {
        Solution_P =
          (struct Solution *)List_Pointer(Current.DofData->Solutions, j);
        LinAlg_GetComplexInVector(&OriginalValueR_P[j], &OriginalValueI_P[j],
                                  &Solution_P->x, i, -1);
      }
      gsl_interp_accel *accRe = gsl_interp_accel_alloc();
      gsl_interp_accel *accIm = gsl_interp_accel_alloc();
      gsl_spline *splineRe =
        gsl_spline_alloc(gsl_interp_cspline, OriginalNbrOfSolutions);
      gsl_spline *splineIm =
        gsl_spline_alloc(gsl_interp_cspline, OriginalNbrOfSolutions);
      gsl_spline_init(splineRe, OriginalTime_P, OriginalValueR_P,
                      OriginalNbrOfSolutions);
      gsl_spline_init(splineIm, OriginalTime_P, OriginalValueI_P,
                      OriginalNbrOfSolutions);

      for(int j = 0; j < NewNbrOfSolutions; j++) {
        Solution_P = (struct Solution *)List_Pointer(NewSolutions_L, j);
        InterpValueRe = gsl_spline_eval(splineRe, Solution_P->Time, accRe);
        InterpValueIm = gsl_spline_eval(splineIm, Solution_P->Time, accIm);
        LinAlg_SetComplexInVector(InterpValueRe, InterpValueIm, &Solution_P->x,
                                  i, -1);
      }

      gsl_spline_free(splineRe);
      gsl_spline_free(splineIm);
      gsl_interp_accel_free(accRe);
      gsl_interp_accel_free(accIm);
    }
  }
  Current.DofData->Solutions = NewSolutions_L;
  Current.DofData->CurrentSolution = (struct Solution *)List_Pointer(
    NewSolutions_L, List_Nbr(NewSolutions_L) - 1);
  for(int j = 0; j < NewNbrOfSolutions; j++) {
    Solution_P = (struct Solution *)List_Pointer(Current.DofData->Solutions, j);
    Solution_P->TimeFunctionValues = Get_TimeFunctionValues(Current.DofData);
  }

  Free(OriginalTime_P);
  Free(OriginalValueR_P);
  Free(OriginalValueI_P);
}
#endif

/* ------------------------------------------------------------------------ */
/*  P o s _ F o r m u l a t i o n                                           */
/* ------------------------------------------------------------------------ */

void Pos_Formulation(struct Formulation *Formulation_P,
                     struct PostProcessing *PostProcessing_P,
                     struct PostSubOperation *PostSubOperation_P)
{
  struct PostQuantity *NCPQ_P = NULL, *CPQ_P = NULL;
  double Pulsation;
  int i, Order = 0;

  if(PostSubOperation_P->Type == POP_MERGE) {
    Message::SendMergeFileRequest(PostSubOperation_P->FileOut);
    return;
  }

  if(PostSubOperation_P->Type == POP_DELETEFILE) {
    Message::Info("DeleteFile[%s]", PostSubOperation_P->FileOut);
    RemoveFile(PostSubOperation_P->FileOut);
    return;
  }

  if(PostSubOperation_P->Type == POP_CREATEDIR) {
    Message::Info("CreateDir[%s]", PostSubOperation_P->FileOut);
    CreateDirs(PostSubOperation_P->FileOut);
    return;
  }

  if(PostSubOperation_P->FileOut) {
    strcpy(PostFileName,
           Fix_RelativePath(PostSubOperation_P->FileOut, Name_Path).c_str());

    if(PostSubOperation_P->AppendExpressionToFileName >= 0) {
      struct Value Value;
      Get_ValueOfExpressionByIndex(
        PostSubOperation_P->AppendExpressionToFileName, NULL, 0., 0., 0.,
        &Value);
      char AddExt[100];
      if(PostSubOperation_P->AppendExpressionFormat)
        sprintf(AddExt, PostSubOperation_P->AppendExpressionFormat,
                Value.Val[0]);
      else
        sprintf(AddExt, "%.16g", Value.Val[0]);
      strcat(PostFileName, AddExt);
    }

    if(PostSubOperation_P->AppendTimeStepToFileName) {
      char AddExt[100];
      sprintf(AddExt, "_%03d",
              (PostSubOperation_P->OverrideTimeStepValue >= 0) ?
                PostSubOperation_P->OverrideTimeStepValue :
                (int)Current.TimeStep);
      strcat(PostFileName, AddExt);
    }

    if(PostSubOperation_P->AppendStringToFileName) {
      strcat(PostFileName, PostSubOperation_P->AppendStringToFileName);
    }

    if(!strlen(PostFileName) ||
       (Message::GetIsCommWorld() && Message::GetCommRank())) {
      // in parallel mode (SetCommWorld), only rank 0 prints output
      PostStream = NULL;
    }
    else if(!PostSubOperation_P->CatFile) {
      if((PostStream = FOpen(PostFileName, Flag_BIN ? "wb" : "w")))
        Message::Direct(4, "          > '%s'", PostFileName);
      else {
        Message::Error("Unable to open file '%s'", PostFileName);
        PostStream = stdout;
      }
    }
    else {
      if((PostStream = FOpen(
            PostFileName,
            Flag_BIN ?
              (PostSubOperation_P->Format == FORMAT_NXUNV ? "r+b" : "ab") :
              "a")))
        Message::Direct(4, "          >> '%s'", PostFileName);
      else {
        Message::Error("Unable to open file '%s'", PostFileName);
        PostStream = stdout;
      }
    }
  }
  else {
    PostStream = stdout;
  }

  // force Gmsh version 1 for anything else than OnElementsOf, or if we store in
  // memory (which requires old-style list ordering)
  int oldVersion = Flag_GMSH_VERSION;
  if(PostSubOperation_P->Type != POP_PRINT ||
     PostSubOperation_P->SubType != PRINT_ONELEMENTSOF ||
     PostSubOperation_P->Depth != 1 || PostSubOperation_P->StoreInField >= 0)
    Flag_GMSH_VERSION = 1;

  if(PostSubOperation_P->StoreInField >= 0 &&
     PostSubOperation_P->Format != FORMAT_GMSH)
    Message::Warning("StoreInField only available with Gmsh output format");

  if(PostSubOperation_P->StoreInMeshBasedField >= 0) {
    Flag_GMSH_VERSION = 2;
    if(PostSubOperation_P->SubType != PRINT_ONELEMENTSOF ||
       PostSubOperation_P->Depth != 1)
      Message::Error(
        "StoreInMeshBasedField not compatible with selected options");
  }

  if(PostStream && PostSubOperation_P->CatFile == 2)
    fprintf(PostStream, "\n\n");
  /*  two blanks lines for -index in gnuplot  */

  Format_PostFormat(PostSubOperation_P);

  if(PostSubOperation_P->PostQuantityIndex[0] >= 0) {
    if(PostSubOperation_P->PostQuantitySupport[0] < 0) { /* Noncumulative */
      NCPQ_P = (struct PostQuantity *)List_Pointer(
        PostProcessing_P->PostQuantity,
        PostSubOperation_P->PostQuantityIndex[0]);
      CPQ_P = (PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
                (struct PostQuantity *)List_Pointer(
                  PostProcessing_P->PostQuantity,
                  PostSubOperation_P->PostQuantityIndex[1]) :
                NULL;
      Order = 1;
    }
    else {
      CPQ_P = (struct PostQuantity *)List_Pointer(
        PostProcessing_P->PostQuantity,
        PostSubOperation_P->PostQuantityIndex[0]);
      NCPQ_P = (PostSubOperation_P->PostQuantityIndex[1] >= 0) ?
                 (struct PostQuantity *)List_Pointer(
                   PostProcessing_P->PostQuantity,
                   PostSubOperation_P->PostQuantityIndex[1]) :
                 NULL;
      Order = 0;
    }
  }

  if(List_Nbr(PostSubOperation_P->Frequency_L)) {
    if(List_Nbr(PostSubOperation_P->Frequency_L) >
       List_Nbr(Current.DofData->Pulsation))
      Message::Error("Too many frequencies specified in PostOperation");
    else {
      for(i = 0; i < List_Nbr(PostSubOperation_P->Frequency_L); i++) {
        Pulsation =
          *((double *)List_Pointer(PostSubOperation_P->Frequency_L, i)) *
          TWO_PI;
        List_Write(Current.DofData->Pulsation, i, &Pulsation);
      }
    }
  }

  switch(Formulation_P->Type) {
  case FEMEQUATION:
    Pos_FemFormulation(Formulation_P, NCPQ_P, CPQ_P, Order, PostSubOperation_P);
    break;

  case GLOBALEQUATION: break;

  default:
    Message::Error("Unknown Type for Formulation (%s)", Formulation_P->Name);
    break;
  }

  Flag_GMSH_VERSION = oldVersion;

  if(PostStream && PostSubOperation_P->FileOut) {
    fclose(PostStream);

    if(PostSubOperation_P->SendToServer == NULL ||
       strcmp(PostSubOperation_P->SendToServer, "No")) {
      if(PostSubOperation_P->Format == FORMAT_GMSH_PARSED ||
         PostSubOperation_P->Format == FORMAT_GMSH) {
        // send merge request
        Message::SendMergeFileRequest(PostFileName);
      }
      // Add link to file
      Message::AddOnelabStringChoice(Message::GetOnelabClientName() +
                                       "/{Output files",
                                     "file", PostFileName, true, true);
    }

    /* NewCoordinates print option: write a new mesh */
    if(PostSubOperation_P->NewCoordinates) {
#if defined(HAVE_GMSH)

      GmshMergeFile(std::string(PostFileName));
      int iview = PView::list.size() - 1;
      PViewData *data = PView::list[iview]->getData();

      GModel *m = new GModel();
      m->readMSH(std::string(Current.GeoData->Name));

      std::vector<GEntity *> entities;
      m->getEntities(entities);
      std::map<MVertex *, std::vector<double>, MVertexPtrLessThan> newcoords;
      for(unsigned int i = 0; i < entities.size(); i++) {
        for(unsigned int j = 0; j < entities[i]->mesh_vertices.size(); j++) {
          MVertex *v = entities[i]->mesh_vertices[j];
          std::vector<double> xyz(3);
          if(!data->searchVector(v->x(), v->y(), v->z(), &xyz[0]))
            Message::Error(
              "Did not find new coordinate Vector at point (%g,%g,%g) "
              "from file %s",
              v->x(), v->y(), v->z(), PostFileName);
          newcoords[v] = xyz;
        }
      }

      for(std::map<MVertex *, std::vector<double>, MVertexPtrLessThan>::iterator
            it = newcoords.begin();
          it != newcoords.end(); it++) {
        it->first->x() = it->second[0];
        it->first->y() = it->second[1];
        it->first->z() = it->second[2];
      }

      char NewCoordsFileName[256];
      strcpy(NewCoordsFileName,
             Fix_RelativePath(PostSubOperation_P->NewCoordinatesFile, Name_Path)
               .c_str());
      m->writeMSH(NewCoordsFileName);
      Message::Info("Wrote new coordinates in file %s", NewCoordsFileName);
      delete m;
      delete PView::list[iview];
      PView::list.pop_back();

#else
      Message::Error(
        "You need to compile GetDP with Gmsh support to use 'NewCoordinates'");
#endif
    }
  }
}
