// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <string.h>
#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_DofOfElement.h"
#include "Pos_Formulation.h"
#include "SolvingOperations.h"
#include "MallocUtils.h"
#include "Message.h"

#define TWO_PI 6.2831853071795865

extern struct Problem Problem_S;
extern struct CurrentData Current;

extern int Flag_PRE, Flag_CAL, Flag_POS;
extern int Flag_RESTART;

extern char *Name_Generic;
extern char *Name_Resolution;
extern char *Name_PostOperation[NBR_MAX_POS];
extern char *Name_MshFile, *Name_ResFile[NBR_MAX_RES], *Name_AdaptFile;

int TreatmentStatus = 0;
List_T *GeoData_L = 0, *PreResolutionIndex_L = 0;

/* ------------------------------------------------------------------------ */
/*  I n i t _ D o f D a t a I n F u n c t i o n S p a c e                   */
/* ------------------------------------------------------------------------ */
/*! Links between FunctionSpace's and DofData's (one-to-one mapping) */

void Init_DofDataInFunctionSpace(int Nbr_DefineSystem,
                                 struct DofData *DofData_P0)
{
  struct DofData *DofData_P;
  struct FunctionSpace *FunctionSpace_P;
  int i, j;

  for(i = 0; i < Nbr_DefineSystem; i++) {
    DofData_P = DofData_P0 + i;
    for(j = 0; j < List_Nbr(DofData_P->FunctionSpaceIndex); j++) {
      FunctionSpace_P = (struct FunctionSpace *)List_Pointer(
        Problem_S.FunctionSpace,
        *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, j)));
      FunctionSpace_P->DofData = FunctionSpace_P->MainDofData = DofData_P;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ D o f D a t a I n D e f i n e Q u a n t i t y                 */
/* ------------------------------------------------------------------------ */
/*! For setting the DofData of a DefineQuantity if explicitly specified */

void Init_DofDataInDefineQuantity(struct DefineSystem *DefineSystem_P,
                                  struct DofData *DofData_P0,
                                  struct Formulation *Formulation_P)
{
  struct DefineQuantity *DefineQuantity_P;
  int i, j;

  for(i = 0; i < List_Nbr(Formulation_P->DefineQuantity); i++) {
    DefineQuantity_P =
      (struct DefineQuantity *)List_Pointer(Formulation_P->DefineQuantity, i);

    if(DefineQuantity_P->DofDataIndex >= 0) {
      if(DefineQuantity_P->DofDataIndex >=
         List_Nbr(DefineSystem_P->OriginSystemIndex)) {
        Message::Error("Invalid System index (%d) in discrete Quantity (%s)",
                       DefineQuantity_P->DofDataIndex, DefineQuantity_P->Name);
        break;
      }
      List_Read(DefineSystem_P->OriginSystemIndex,
                DefineQuantity_P->DofDataIndex, &j);
      DefineQuantity_P->DofData = DofData_P0 + j;
    }
    else
      DefineQuantity_P->DofData = NULL;
  }
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ P r e p r o c e s s i n g                           */
/* ------------------------------------------------------------------------ */
/*! For each DefineSystem:
      For each Formulation: Definition of Dof's in associated DofData */

void Treatment_Preprocessing(int Nbr_DefineSystem, struct DofData *DofData_P0,
                             struct DefineSystem *DefineSystem_P0,
                             struct GeoData *GeoData_P0)
{
  struct DefineSystem *DefineSystem_P;
  struct DofData *DofData_P;
  struct Formulation *Formulation_P;

  int i, k, Nbr_Formulation, Index_Formulation;

  for(i = 0; i < Nbr_DefineSystem; i++) {
    DefineSystem_P = DefineSystem_P0 + i;
    DofData_P = DofData_P0 + i;
    Dof_SetCurrentDofData(Current.DofData = DofData_P);

    Geo_SetCurrentGeoData(Current.GeoData =
                            GeoData_P0 + DofData_P->GeoDataIndex);

    Current.NbrHar = Current.DofData->NbrHar;

    Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex);

    for(k = 0; k < Nbr_Formulation; k++) {
      List_Read(DefineSystem_P->FormulationIndex, k, &Index_Formulation);
      Formulation_P = (struct Formulation *)List_Pointer(Problem_S.Formulation,
                                                         Index_Formulation);
      Message::Info("Treatment Formulation '%s'", Formulation_P->Name);

      Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);
      Treatment_Formulation(Formulation_P);
    }

    Dof_NumberUnknownDof();

    Message::Info(-3, "System %d/%d: %d Dofs", i + 1, Nbr_DefineSystem,
                  DofData_P->NbrDof);
  }
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ P o s t O p e r a t i o n                           */
/* ------------------------------------------------------------------------ */
/*! Prepare the treatment of a PostOperation. Then does it outside */

void Treatment_PostOperation(struct Resolution *Resolution_P,
                             struct DofData *DofData_P0,
                             struct DefineSystem *DefineSystem_P0,
                             struct GeoData *GeoData_P0,
                             struct PostProcessing *PostProcessing_P,
                             struct PostOperation *PostOperation_P)
{
  struct PostSubOperation *PostSubOperation_P;
  struct Formulation *Formulation_P;
  struct DefineSystem *DefineSystem_P;
  List_T *SaveSolutions_L = NULL;
  struct Solution *SaveCurrentSolution_P = NULL;

  int Nbr_PostSubOperation, i_POP, i;

  if(!List_Nbr(PostProcessing_P->PostQuantity)) {
    Message::Error("No Quantity available for PostProcessing '%s'",
                   PostProcessing_P->Name);
    return;
  }

  Formulation_P = (struct Formulation *)List_Pointer(
    Problem_S.Formulation, PostProcessing_P->FormulationIndex);

  if(!List_Nbr(Formulation_P->DefineQuantity)) {
    Message::Error("No discrete Quantity in Formulation '%s'",
                   Formulation_P->Name);
    return;
  }

  /* Choice of Current DofData */
  Current.DofData = 0;
  if(PostProcessing_P->NameOfSystem) {
    if((i = List_ISearchSeq(Resolution_P->DefineSystem,
                            PostProcessing_P->NameOfSystem,
                            fcmp_DefineSystem_Name)) < 0) {
      Message::Error("Unknown System name (%s) in PostProcessing (%s)",
                     PostProcessing_P->NameOfSystem, PostProcessing_P->Name);
      return;
    }
    Current.DofData = DofData_P0 + i;
    /* (Re)creation des liens entre FunctionSpace et DofData:
       seuls les FS n'intervenant pas dans le DD courant peuvent
       pointer vers un autre DD */
    Init_DofDataInFunctionSpace(1, Current.DofData);
  }
  else {
    for(i = 0; i < List_Nbr(Formulation_P->DefineQuantity); i++) {
      Current.DofData =
        ((struct FunctionSpace *)List_Pointer(
           Problem_S.FunctionSpace, ((struct DefineQuantity *)List_Pointer(
                                       Formulation_P->DefineQuantity, i))
                                      ->FunctionSpaceIndex))
          ->DofData;
      if(Current.DofData) break;
    }
    if(Current.DofData)
      Message::Info("NameOfSystem not set in PostProcessing: selected '%s'",
                    (DefineSystem_P0 + Current.DofData->Num)->Name);
  }

  if(!Current.DofData) {
    Message::Error("PostProcessing not compatible with Resolution");
    return;
  }

  DefineSystem_P = DefineSystem_P0 + Current.DofData->Num;
  Current.NbrHar = Current.DofData->NbrHar;

  Geo_SetCurrentGeoData(Current.GeoData =
                          GeoData_P0 + Current.DofData->GeoDataIndex);

  Message::Info("Selected PostProcessing '%s'", PostProcessing_P->Name);
  Message::Info("Selected Mesh '%s'", Current.GeoData->Name);

  Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);

  if(PostOperation_P->ResampleTime) {
    SaveSolutions_L = Current.DofData->Solutions;
    SaveCurrentSolution_P = Current.DofData->CurrentSolution;
    Pos_ResampleTime(PostOperation_P);
  }

  Nbr_PostSubOperation = List_Nbr(PostOperation_P->PostSubOperation);
  for(i_POP = 0; i_POP < Nbr_PostSubOperation; i_POP++) {
    PostSubOperation_P = (struct PostSubOperation *)List_Pointer(
      PostOperation_P->PostSubOperation, i_POP);
    Message::Info("PostOperation '%s' %d/%d", PostOperation_P->Name, i_POP + 1,
                  Nbr_PostSubOperation);
    Pos_Formulation(Formulation_P, PostProcessing_P, PostSubOperation_P);
  }

  if(PostOperation_P->ResampleTime) {
    for(int i = 0; i < List_Nbr(Current.DofData->Solutions); i++) {
      Solution *Solution_P =
        (struct Solution *)List_Pointer(Current.DofData->Solutions, i);
      LinAlg_DestroyVector(&Solution_P->x);
      Free(Solution_P->TimeFunctionValues);
    }
    List_Delete(Current.DofData->Solutions);
    Current.DofData->Solutions = SaveSolutions_L;
    Current.DofData->CurrentSolution = SaveCurrentSolution_P;
  }
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ H a r I n D o f D a t a                                       */
/* ------------------------------------------------------------------------ */
/*! For a DefineSystem: Fill harmonic data in the associated DofData */

void Init_HarInDofData(struct DefineSystem *DefineSystem_P,
                       struct DofData *DofData_P)
{
  int j;

  if(DefineSystem_P->Type == VAL_COMPLEX) {
    if(!DefineSystem_P->FrequencyValue)
      Dof_AddPulsation(DofData_P, 0.0);
    else
      for(j = 0; j < List_Nbr(DefineSystem_P->FrequencyValue); j++)
        Dof_AddPulsation(DofData_P, *((double *)List_Pointer(
                                      DefineSystem_P->FrequencyValue, j)) *
                                      TWO_PI);
  }

  if(!List_Nbr(DofData_P->Pulsation)) { DofData_P->NbrHar = 1; }
  else {
    DofData_P->NbrHar = 2 * List_Nbr(DofData_P->Pulsation);
    DofData_P->Val_Pulsation = (double *)List_Pointer(DofData_P->Pulsation, 0);
  }

  if(DofData_P->NbrHar > NBR_MAX_HARMONIC) {
    Message::Error("Too many harmonics to generate system (%d > %d)",
                   DofData_P->NbrHar / 2, NBR_MAX_HARMONIC / 2);
    return;
  }

  if(DofData_P->NbrHar > 1) {
    for(j = 0; j < DofData_P->NbrHar / 2; j++)
      Message::Info("System dd '%s' : Complex, Frequency = %.8g Hz",
                    DefineSystem_P->Name, DofData_P->Val_Pulsation[j] / TWO_PI);
  }
  else {
    Message::Info("System '%s' : Real", DefineSystem_P->Name);
  }
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ R e s o l u t i o n                                 */
/* ------------------------------------------------------------------------ */
/*! For each DefineSystem: Init the associated DofData */

void Treatment_Resolution(int ResolutionIndex, int *Nbr_DefineSystem,
                          int *Nbr_OtherSystem,
                          struct Resolution **Resolution_P,
                          struct DefineSystem **DefineSystem_P0,
                          struct DofData **DofData_P0, List_T **DofData_L,
                          List_T *GeoData_L, struct GeoData **GeoData_P0)
{
  struct DefineSystem *DefineSystem_P;
  struct DofData DofData_S;
  int i;

  *Resolution_P =
    (struct Resolution *)List_Pointer(Problem_S.Resolution, ResolutionIndex);

  Message::Info("Selected Resolution '%s'", (*Resolution_P)->Name);

  *Nbr_DefineSystem = List_Nbr((*Resolution_P)->DefineSystem);
  if(!*Nbr_DefineSystem) {
    Message::Error("No System exists for Resolution '%s'",
                   (*Resolution_P)->Name);
    return;
  }

  if(*Nbr_OtherSystem) *Nbr_OtherSystem -= *Nbr_DefineSystem;

  *DofData_L = List_Create(*Nbr_DefineSystem + *Nbr_OtherSystem, 6,
                           sizeof(struct DofData));

  *DefineSystem_P0 =
    (struct DefineSystem *)List_Pointer((*Resolution_P)->DefineSystem, 0);

  for(i = 0; i < *Nbr_DefineSystem; i++) {
    DefineSystem_P = *DefineSystem_P0 + i;
    Dof_InitDofData(&DofData_S, i, ResolutionIndex, i,
                    DefineSystem_P->SolverDataFileName);
    DofData_S.GeoDataIndex =
      Geo_AddGeoData(GeoData_L, DefineSystem_P->MeshName, Name_MshFile,
                     DefineSystem_P->AdaptName, Name_AdaptFile);
    Init_HarInDofData(DefineSystem_P, &DofData_S);
    List_Add(*DofData_L, &DofData_S);
  }

  for(i = 0; i < *Nbr_OtherSystem; i++) {
    Dof_InitDofData(&DofData_S, i + *Nbr_DefineSystem, -1, -1, NULL);
    List_Add(*DofData_L, &DofData_S);
  }

  *DofData_P0 = (struct DofData *)List_Pointer(*DofData_L, 0);
  *GeoData_P0 = (struct GeoData *)List_Pointer(GeoData_L, 0);
}

/* ------------------------------------------------------------------------ */
/*  G e t _ T i m e F u n c t i o n V a l u e s                             */
/* ------------------------------------------------------------------------ */
/*! For a DofData: Fill the vector of the considered time function values */

double *Get_TimeFunctionValues(struct DofData *DofData_P)
{
  int Nbr_Expression, Nbr_TimeFunction, i, Index;
  double *Values;
  struct Value Val_Expression;

  Nbr_Expression = List_Nbr(Problem_S.Expression);
  Values = (double *)Malloc((Nbr_Expression + 1) * sizeof(double));

  Nbr_TimeFunction = List_Nbr(DofData_P->TimeFunctionIndex);

  for(i = 0; i < Nbr_TimeFunction; i++) {
    List_Read(DofData_P->TimeFunctionIndex, i, &Index);
    if((DofData_P->NbrHar == 1) && (Index > 0)) {
      Get_ValueOfExpressionByIndex(Index - 1, NULL, 0., 0., 0.,
                                   &Val_Expression);
      Values[Index] = Val_Expression.Val[0];
    }
    else
      Values[Index] = 1.;
  }

  return (Values);
}

/* ------------------------------------------------------------------------ */
/*  S o l v i n g A n a l y s e                                             */
/* ------------------------------------------------------------------------ */
/*! Global analyse of a problem */

void SolvingAnalyse()
{
  struct Resolution *Resolution_P, *Resolution2_P;
  struct DefineSystem *DefineSystem_P0, *DefineSystem2_P0, *DefineSystem_P;
  struct Solution *Solution_P, Solution_S;
  struct GeoData *GeoData_P0;
  struct DofData *DofData_P0, *DofData2_P0;
  List_T *DofData_L, *DofData2_L;

  int Num_Resolution = 0, Num_Resolution2;
  int Nbr_DefineSystem, Nbr_DefineSystem2;
  int Nbr_Solution;

  struct DofData *DofData_P;
  struct Dof *Dof_P;
  struct PostOperation *PostOperation_P[NBR_MAX_POS];
  struct PostProcessing *PostProcessing_P[NBR_MAX_POS];
  struct PreResolutionInfo PreResolutionInfo_S;

  double d;
  int i, j;
  int Num, Nbr_GeoData = 0;
  int Nbr_PreResolution, Nbr_OtherSystem;

  DofData_L = 0; // in case of errors before it is created
  GeoData_L = List_Create(1, 5, sizeof(struct GeoData));

  /* -------------------- */
  /* Treatment Resolution */
  /* -------------------- */

  if(Flag_PRE) {
    Nbr_OtherSystem = 0;
    if(Name_Resolution)
      Num_Resolution = List_ISearchSeq(Problem_S.Resolution, Name_Resolution,
                                       fcmp_Resolution_Name);
    else {
      Message::Error("Missing Resolution");
      goto end;
    }
  }
  else if(Flag_CAL || Flag_POS) {
    Dof_OpenFile(DOF_PRE, Name_Generic, "r");
    Dof_ReadFilePRE0(&Num_Resolution, &Nbr_DefineSystem);
    Nbr_OtherSystem = Nbr_DefineSystem;
  }

  if(Num_Resolution < 0 ||
     Num_Resolution + 1 > List_Nbr(Problem_S.Resolution)) {
    Message::Error("Unknown Resolution (%s)", Name_Resolution);
    goto end;
  }

  Treatment_Resolution(Num_Resolution, &Nbr_DefineSystem, &Nbr_OtherSystem,
                       &Resolution_P, &DefineSystem_P0, &DofData_P0, &DofData_L,
                       GeoData_L, &GeoData_P0);

  if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount()) goto end;

  /* -------------- */
  /* Pre-processing */
  /* -------------- */

  TreatmentStatus = STATUS_PRE;

  Message::Direct("P r e - P r o c e s s i n g . . .");
  Message::ProgressMeter(0, 0, "Pre-processing");

  if(Flag_PRE) {
    PreResolutionIndex_L =
      List_Create(10, 10, sizeof(struct PreResolutionInfo));

    Treatment_Preprocessing(Nbr_DefineSystem, DofData_P0, DefineSystem_P0,
                            GeoData_P0);

    Nbr_PreResolution = List_Nbr(PreResolutionIndex_L);

    for(i = 0; i < Nbr_PreResolution; i++) {
      Message::Direct("P r e - R e s o l u t i o n  (%d/%d) . . .", i + 1,
                      Nbr_PreResolution);

      List_Read(PreResolutionIndex_L, i, &PreResolutionInfo_S);
      Num_Resolution2 = PreResolutionInfo_S.Index;

      Nbr_OtherSystem = 0;
      Treatment_Resolution(Num_Resolution2, &Nbr_DefineSystem2,
                           &Nbr_OtherSystem, &Resolution2_P, &DefineSystem2_P0,
                           &DofData2_P0, &DofData2_L, GeoData_L, &GeoData_P0);

      TreatmentStatus = STATUS_PRE;
      Treatment_Preprocessing(Nbr_DefineSystem2, DofData2_P0, DefineSystem2_P0,
                              GeoData_P0);

      for(j = 0; j < Nbr_DefineSystem2; j++)
        Dof_TransferDofTreeToList(DofData2_P0 + j);

      Init_DofDataInFunctionSpace(Nbr_DefineSystem2, DofData2_P0);

      Current.TypeTime = TIME_STATIC;
      Current.Time = 0.;
      Current.TimeImag = 0.;
      Current.TimeStep = 0.;
      Current.Iteration = 0;
      Current.Residual = 0;
      Current.RelativeDifference = 0.;
      Current.RelaxationFactor = 1.;
      Current.Breakpoint = -1;
      Current.Frequency = 0.;

      TreatmentStatus = STATUS_CAL;

      Current.NbrSystem = Nbr_DefineSystem2; /* Attention: init for Dt[] */
      Current.DofData_P0 = DofData2_P0;

      Treatment_Operation(Resolution2_P, Resolution2_P->Operation, DofData2_P0,
                          GeoData_P0, Resolution_P, DofData_P0);

      if(PreResolutionInfo_S.Type == PR_GLOBALBASISFUNCTION) {
        for(j = 0; j < Nbr_DefineSystem2; j++) {
          DofData_P = DofData2_P0 + j;
          Dof_TransferSolutionToConstraint(DofData_P);
          DofData_P->Num += Nbr_DefineSystem;
          List_Add(DofData_L, DofData_P);
        }
        Nbr_DefineSystem = List_Nbr(DofData_L); /* New Value ... */
        DofData_P0 =
          (struct DofData *)List_Pointer(DofData_L, 0); /* New Value ... */
      }

      Message::Direct("E n d   P r e - R e s o l u t i o n  (%d/%d)", i + 1,
                      Nbr_PreResolution);
    }

    Dof_OpenFile(DOF_PRE, Name_Generic, "w+");
    Dof_WriteFilePRE0(Num_Resolution, Resolution_P->Name, Nbr_DefineSystem);

    for(i = 0; i < Nbr_DefineSystem; i++) { Dof_WriteFilePRE(DofData_P0 + i); }
    Nbr_GeoData = List_Nbr(GeoData_L);
    for(i = 0; i < Nbr_GeoData; i++)
      Geo_WriteFilePRE(GeoData_P0 + i, Problem_S.Group);

    Dof_CloseFile(DOF_PRE);

    if(Flag_CAL || Flag_POS)
      for(i = 0; i < Nbr_DefineSystem; i++)
        Dof_TransferDofTreeToList(DofData_P0 + i);
  }

  else if(Flag_CAL || Flag_POS) {
    Message::Info("Loading Pre-Processing data '%s.pre'", Name_Generic);

    for(i = 0; i < Nbr_DefineSystem; i++) Dof_ReadFilePRE(DofData_P0 + i);
    for(i = 0; i < Nbr_OtherSystem; i++) {
      DofData_P = DofData_P0 + Nbr_DefineSystem + i;
      Dof_ReadFilePRE(DofData_P);
      DefineSystem_P = (struct DefineSystem *)List_Pointer(
        (((struct Resolution *)List_Pointer(Problem_S.Resolution,
                                            DofData_P->ResolutionIndex))
           ->DefineSystem),
        DofData_P->SystemIndex);
      DofData_P->GeoDataIndex =
        Geo_AddGeoData(GeoData_L, DefineSystem_P->MeshName, Name_MshFile,
                       DefineSystem_P->AdaptName, Name_AdaptFile);
      Init_HarInDofData(DefineSystem_P, DofData_P);
    }
    Nbr_DefineSystem = List_Nbr(DofData_L); /* New Value ... */

    Nbr_GeoData = List_Nbr(GeoData_L);

    Geo_ReadFilePRE(GeoData_P0, Nbr_GeoData, Problem_S.Group);

    Dof_CloseFile(DOF_PRE);
  }

  Message::Cpu("");
  Message::Direct("E n d   P r e - P r o c e s s i n g");

  if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount()) goto end;

  /* ---------- */
  /* Processing */
  /* ---------- */

  if(Flag_CAL) {
    TreatmentStatus = STATUS_CAL;
    Message::Direct("P r o c e s s i n g . . .");
    Message::ProgressMeter(0, 0, "Processing");

    Init_DofDataInFunctionSpace(Nbr_DefineSystem, DofData_P0);

    if(Flag_RESTART) {
      i = 0;
      while(Name_ResFile[i]) {
        Message::Info("Loading Processing data '%s'", Name_ResFile[i]);
        Dof_OpenFile(DOF_RES, Name_ResFile[i], "rb");
        Dof_ReadFileRES(DofData_L, NULL, -1, &Current.Time, &Current.TimeImag,
                        &Current.TimeStep);
        Dof_CloseFile(DOF_RES);
        i++;
      }
      Message::Info("Restarting computation (time = %g) s (TimeStep %g)",
                    Current.Time, Current.TimeStep);
    }
    else {
      Current.Time = Current.TimeImag = Current.TimeStep = 0.;
    }

    // FIXME: BUG: Current.NbrHar might not be initialized if -cal is called
    // without -pre and we evaluate expressions without initizing a system
    Current.NbrHar = 1;
    Current.TypeTime = TIME_STATIC;
    Current.RelativeDifference = 0.;
    Current.RelaxationFactor = 1.;
    Current.NbrSystem = Nbr_DefineSystem; /* Attention: init for Dt[] */
    Current.DofData_P0 = DofData_P0;
    Current.Breakpoint = -1;

    Treatment_Operation(Resolution_P, Resolution_P->Operation, DofData_P0,
                        GeoData_P0, NULL, NULL);

    Message::Cpu("");
    Message::Direct("E n d   P r o c e s s i n g");
  }

  if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount()) goto end;

  /* --------------- */
  /* Post-processing */
  /* --------------- */

  if(Flag_POS) {
    TreatmentStatus = STATUS_POS;

    Message::Direct("P o s t - P r o c e s s i n g . . .");
    Message::ProgressMeter(0, 0, "Post-processing");

    i = 0;
    while(Name_PostOperation[i] && strlen(Name_PostOperation[i])) {
      if((Num = List_ISearchSeq(Problem_S.PostOperation, Name_PostOperation[i],
                                fcmp_PostOperation_Name)) < 0) {
        Message::Error("Unknown PostOperation (%s)", Name_PostOperation[i]);
        goto end;
      }
      PostOperation_P[i] =
        (struct PostOperation *)List_Pointer(Problem_S.PostOperation, Num);
      PostProcessing_P[i] = (struct PostProcessing *)List_Pointer(
        Problem_S.PostProcessing, PostOperation_P[i]->PostProcessingIndex);
      i++;
    }
    PostProcessing_P[i] = NULL;

    if(!Flag_CAL) {
      i = 0;
      while(Name_ResFile[i]) {
        Message::Info("Loading Processing data '%s'", Name_ResFile[i]);
        Dof_OpenFile(DOF_RES, Name_ResFile[i], "rb");
        Dof_ReadFileRES(DofData_L, NULL, -1, &d, &d, &d);
        Dof_CloseFile(DOF_RES);
        i++;
      }
    }

    for(i = 0; i < Nbr_DefineSystem; i++) {
      Current.DofData = DofData_P = DofData_P0 + i;

      for(j = 0; j < DofData_P->NbrAnyDof; j++) {
        Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, j);
        if(Dof_P->Type == DOF_UNKNOWN_INIT) {
          Dof_P->Type = DOF_UNKNOWN;
          LinAlg_ZeroScalar(&Dof_P->Val);
        }
      }

      Current.NbrHar = Current.DofData->NbrHar;
      Nbr_Solution = List_Nbr(DofData_P->Solutions);
      if(Nbr_Solution == 0) { /* en cas de pos sans cal, apres calcul de
                                 function de base globale... a reorganiser */
        if(DofData_P->Solutions == NULL)
          DofData_P->Solutions = List_Create(1, 1, sizeof(struct Solution));
        Solution_S.Time = 0.;
        Solution_S.SolutionExist = 0;
        Solution_S.TimeFunctionValues = NULL;
        List_Add(DofData_P->Solutions, &Solution_S);
        Nbr_Solution = 1;
      }
      if(!Flag_CAL) { /* Pas necessaire si Flag_CAL */
        for(j = 0; j < Nbr_Solution; j++) {
          Solution_P = (struct Solution *)List_Pointer(DofData_P->Solutions, j);
          Current.Time = Solution_P->Time;
          Current.TimeImag = Solution_P->TimeImag;
          Current.TimeStep = 0.;
          Current.Frequency = Solution_P->Frequency;
          Current.Breakpoint = -1;
          Free(Solution_P->TimeFunctionValues);
          Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
        }
      }
      DofData_P->CurrentSolution =
        (Nbr_Solution) ?
          (struct Solution *)List_Pointer(DofData_P->Solutions, 0) :
          NULL;
      /* La solution courante est la 1ere. A mieux gerer ? */
    }
    Init_DofDataInFunctionSpace(Nbr_DefineSystem, DofData_P0);

    Current.NbrSystem = Nbr_DefineSystem; /* Attention: init for Dt[] */
    Current.DofData_P0 = DofData_P0;

    i = 0;
    while(PostProcessing_P[i]) {
      Treatment_PostOperation(Resolution_P, DofData_P0, DefineSystem_P0,
                              GeoData_P0, PostProcessing_P[i],
                              PostOperation_P[i]);
      i++;
    }

    Message::Cpu("");
    Message::Direct("E n d   P o s t - P r o c e s s i n g");
  }

end:
  for(int i = 0; i < List_Nbr(DofData_L); i++)
    Dof_FreeDofData((DofData *)List_Pointer(DofData_L, i));
  List_Delete(DofData_L);

  for(int i = 0; i < List_Nbr(GeoData_L); i++)
    Geo_FreeGeoData((GeoData *)List_Pointer(GeoData_L, i));
  List_Delete(GeoData_L);
}
