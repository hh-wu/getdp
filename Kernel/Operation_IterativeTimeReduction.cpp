// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ProData.h"
#include "DofData.h"
#include "SolvingOperations.h"
#include "Message.h"
#include "MallocUtils.h"
#include "Cal_Quantity.h"
#include "Get_DofOfElement.h"

#define TWO_PI     6.2831853071795865

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int  Flag_NextThetaFixed ;

/* ------------------------------------------------------------------------ */
/*  C a l _ S o l u t i o n E r r o r X                                     */
/* ------------------------------------------------------------------------ */

void Cal_SolutionErrorX(int Nbr, double * xNew, double * x, double * MeanError)
{
  int i;
  double errsqr = 0., xmoy = 0., dxmoy = 0., tol ;

  if(0 && gSCALAR_SIZE == 2)
    Message::Error("FIXME: Cal_SolutionErrorX might return strange results"
                   " in complex arithmetic");

  for (i = 0 ; i < Nbr ; i++) {
    xmoy  += fabs( x[i])/(double)Nbr ;
    dxmoy += fabs(xNew[i]-x[i])/(double)Nbr ;
  }

  if (xmoy > 1.e-30) {
    tol = xmoy*1.e-10 ;

    for (i = 0 ; i < Nbr ; i++)
      if ( fabs(x[i]) > tol ) errsqr += fabs((xNew[i]-x[i]) / x[i]) ;
      else                    errsqr += fabs(xNew[i]-x[i]) ;

    *MeanError = errsqr / (double)Nbr ;
  }
  else
    if (dxmoy > 1.e-30)  *MeanError = 1. ;
    else                 *MeanError = 0. ;
}

/* ------------------------------------------------------------------------ */
/*  C a l _ C o m p a r e G l o b a l Q u a n t i t y                       */
/* ------------------------------------------------------------------------ */

#define COMPARE_CHANGE        1
#define COMPARE_CONVERGENCE   2

void  Cal_CompareGlobalQuantity(struct Operation * Operation_P,
				int Type_Analyse, int * Type_ChangeOfState,
				int * FlagIndex, int Flag_First)
{
  List_T  *Region_L = NULL ;
  int      i, Nbr_Region = 0, Num_Region ;
  int      Nbr_ChangeOfState, i_COS ;

  struct ChangeOfState     *ChangeOfState_P = NULL;
  struct Formulation       *Formulation_P ;
  struct FunctionSpace     *FunctionSpace_P ;
  struct GlobalQuantity    *GlobalQuantity_P ;
  struct DefineQuantity    *DefineQuantity_P ;
  struct QuantityStorage   QuantityStorage_S ;

  double  Val0_Dof, Val1_Dof ;
  double  *val0 = NULL, *val1 = NULL, MeanError, v0, v1 ;
  struct  Value  Value ;

  double  Val1_E, Val0_E, Val_S, Val0_Ref, Val1_Ref, v_fz, v_k, v_ke, v_sat ;
  double  Save_Time ;

  if(0 && gSCALAR_SIZE == 2)
    Message::Error("FIXME: Cal_CompareGlobalQuantity might return strange results"
                   " in complex arithmetic");

  /* test */
  v_k  = 1./27.2836 ;  v_ke = 18.518519 ;
  v_fz = 1. / (5.e3 * 1.5e-9) ;  v_sat = 6. ;


  *Type_ChangeOfState = CHANGEOFSTATE_NOCHANGE ;

  Nbr_ChangeOfState =
    List_Nbr(Operation_P->Case.IterativeTimeReduction.ChangeOfState) ;

  for (i_COS = 0 ; i_COS < Nbr_ChangeOfState ; i_COS++) {

    ChangeOfState_P = (struct ChangeOfState *)
      List_Pointer(Operation_P->Case.IterativeTimeReduction.ChangeOfState, i_COS) ;

    Region_L =
      ((struct Group *)List_Pointer(Problem_S.Group, ChangeOfState_P->InIndex))
      ->InitialList ;
    List_Sort(Region_L, fcmp_int) ;

    Nbr_Region = List_Nbr(Region_L) ;

    if (Nbr_Region > 0) {

      Formulation_P = (struct Formulation *)
	List_Pointer(Problem_S.Formulation, ChangeOfState_P->FormulationIndex) ;
      DefineQuantity_P = (struct DefineQuantity *)
	List_Pointer(Formulation_P->DefineQuantity, ChangeOfState_P->QuantityIndex) ;

      QuantityStorage_S.FunctionSpace = FunctionSpace_P =
	(struct FunctionSpace*)List_Pointer(Problem_S.FunctionSpace,
					    DefineQuantity_P->FunctionSpaceIndex) ;
      GlobalQuantity_P = (struct GlobalQuantity*)
	List_Pointer(FunctionSpace_P->GlobalQuantity,
		     *(int *)List_Pointer(DefineQuantity_P->IndexInFunctionSpace, 0)) ;

      if (!ChangeOfState_P->ActiveList[0]) {
	ChangeOfState_P->ActiveList[0] =(double *)Malloc(Nbr_Region * sizeof(double)) ;
	ChangeOfState_P->ActiveList[1] =(double *)Malloc(Nbr_Region * sizeof(double)) ;
      }
      val0 = ChangeOfState_P->ActiveList[0] ; val1 = ChangeOfState_P->ActiveList[1] ;

      /* debug */

      if (Type_Analyse == 999 && i_COS == 0 &&
	  ChangeOfState_P->Type == CHANGEOFSTATE_CHANGEREFERENCE2) {

	List_Read(Region_L, 0, &Num_Region) ;
	Current.Region = Num_Region ;

	Get_DofOfRegion(Current.Region, GlobalQuantity_P,
			FunctionSpace_P, &QuantityStorage_S) ;


	QuantityStorage_S.FunctionSpace->DofData->CurrentSolution -- ;
	Save_Time = Current.Time ;
	Current.Time =
	  QuantityStorage_S.FunctionSpace->DofData->CurrentSolution->Time ;
	Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
			    QuantityStorage_S.BasisFunction[0].Dof, &Val0_Dof) ;

	Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
				     NULL, 0., 0., 0., &Value) ;
	Val0_Ref = Value.Val[0] ;

	Current.Time = Save_Time ;
	QuantityStorage_S.FunctionSpace->DofData->CurrentSolution ++ ;

	Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
			    QuantityStorage_S.BasisFunction[0].Dof, &Val1_Dof) ;

	Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
				     NULL, 0., 0., 0., &Value) ;
	Val1_Ref = Value.Val[0] ;

	Val1_E = (Val1_Ref - v_k * Val1_Dof) * v_ke ;
	Val0_E = (Val0_Ref - v_k * Val0_Dof) * v_ke ;

	Val_S = Val1_E + (Val1_E-Val0_E)/Current.DTime / (TWO_PI*v_fz) ;
	/*
	  fprintf(FilePWM, "%.16g %g %g", Current.Time, Val1_E, Val_S) ;
	*/
	Val_S += Val1_Ref ;
	if      (Val_S >  v_sat)  Val_S =  v_sat ;
	else if (Val_S < -v_sat)  Val_S = -v_sat ;
	/*
	  fprintf(FilePWM, " %g %g\n", Val_S,
	  ((struct Expression *)
	  List_Pointer(Problem_S.Expression, ChangeOfState_P->FlagIndex))
	  ->Case.Constant
	  ) ;

	  fflush(FilePWM) ;
	*/
	break ;
      }
      /* else if (Type_Analyse == 999 && i_COS > 0) break ; */

      /* ----- */

      /*  C a l c u l   v a l e u r s   . . .  */

      for (i = 0 ; i < Nbr_Region ; i++) {

	List_Read(Region_L, i, &Num_Region) ;
	Current.Region = Num_Region ;

	if (DefineQuantity_P->Type == GLOBALQUANTITY) {
	  Get_DofOfRegion(Current.Region, GlobalQuantity_P,
			  FunctionSpace_P, &QuantityStorage_S) ;
	  switch (Type_Analyse) {
	  case COMPARE_CHANGE :  /* Compare values at times t-dt and t */
	    Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				QuantityStorage_S.BasisFunction[0].Dof, &Val1_Dof) ;

	    switch (ChangeOfState_P->Type) {
	    case CHANGEOFSTATE_CHANGESIGN :
	    case CHANGEOFSTATE_CHANGELEVEL :
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution -- ;
	      Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				  QuantityStorage_S.BasisFunction[0].Dof, &Val0_Dof) ;
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution ++ ;
	      break ;

	    case CHANGEOFSTATE_CHANGEREFERENCE :
	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
					   NULL, 0., 0., 0., &Value) ;
	      Val0_Dof = Value.Val[0] ;

	      break ;

	    case CHANGEOFSTATE_CHANGEREFERENCE2 :
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution -- ;
	      Save_Time = Current.Time ;
	      Current.Time =
		QuantityStorage_S.FunctionSpace->DofData->CurrentSolution->Time ;
	      Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				  QuantityStorage_S.BasisFunction[0].Dof, &Val0_Dof) ;
	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
					   NULL, 0., 0., 0., &Value) ;
	      Val0_Ref = Value.Val[0] ;
	      Current.Time = Save_Time ;
	      QuantityStorage_S.FunctionSpace->DofData->CurrentSolution ++ ;

	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex,
					   NULL, 0., 0., 0., &Value) ;
	      Val1_Ref = Value.Val[0] ;

	      Val1_E = (Val1_Ref - v_k * Val1_Dof) * v_ke ;
	      Val0_E = (Val0_Ref - v_k * Val0_Dof) * v_ke ;

	      Val_S = Val1_E + (Val1_E-Val0_E)/Current.DTime / (TWO_PI*v_fz) ;
	      Val_S += Val1_Ref ;
	      if      (Val_S >  v_sat)  Val_S =  v_sat ;
	      else if (Val_S < -v_sat)  Val_S = -v_sat ;

	      Val1_Dof = Val_S ;

	      Get_ValueOfExpressionByIndex(ChangeOfState_P->ExpressionIndex2,
					   NULL, 0., 0., 0., &Value) ;
	      Val0_Dof = Value.Val[0] ;

	      break ;
	    }
	    break ;

	  case COMPARE_CONVERGENCE :  /* Compare values at time t, for 2 iterations */
	    Val0_Dof = val1[i] ;
	    Dof_GetRealDofValue(QuantityStorage_S.FunctionSpace->DofData,
				QuantityStorage_S.BasisFunction[0].Dof, &Val1_Dof) ;
	    break ;
	  }
	}
	else
	  Val0_Dof = Val1_Dof = 0. ;

	val0[i] = Val0_Dof ;  val1[i] = Val1_Dof ;
      }  /* for i -> Nbr_Region ... */


      /*  A n a l y s e   v a l e u r s   . . .  */

      switch (Type_Analyse) {

      case COMPARE_CHANGE :

	switch (ChangeOfState_P->Type) {
	case CHANGEOFSTATE_CHANGESIGN :
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    if (val0[i] * val1[i] <= 0.)
	      { *Type_ChangeOfState = CHANGEOFSTATE_CHANGESIGN ;  break ; }
	  }
	  break ;

	case CHANGEOFSTATE_CHANGELEVEL :
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    if (ChangeOfState_P->Criterion > 0) {
	      v0 = fabs(val0[i]) ; v1 = fabs(val1[i]) ;
	      if (((v0 < v1) && (v0*ChangeOfState_P->Criterion < v1)) ||
		  ((v0 > v1) && (v1*ChangeOfState_P->Criterion < v0)))
		{ *Type_ChangeOfState = CHANGEOFSTATE_CHANGELEVEL ;  break ; }
	    }
	    else {  /* New: Absolute change (Criterion < 0) */
	      v0 = (val0[i]) ; v1 = (val1[i]) ;
	      if ( fabs(v1-v0) > fabs(ChangeOfState_P->Criterion) )
		{ *Type_ChangeOfState = CHANGEOFSTATE_CHANGELEVEL ;  break ; }
	    }
	  }  /* Attention: test a affiner ... choix du Criterion ... */
	  break ;

	case CHANGEOFSTATE_CHANGEREFERENCE :
	  if (Nbr_Region != 1)
	    Message::Error("More than 1 Region for ChangeReference not done yet") ;
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    if (fabs(val1[i] - val0[i]) >
		fabs(ChangeOfState_P->Criterion) *
		((ChangeOfState_P->Criterion > 0.)? fabs(val0[i]) : 1.)) {
	      *Type_ChangeOfState = ChangeOfState_P->Type ;
	      *FlagIndex = ChangeOfState_P->FlagIndex ;
	      if (val1[i] > val0[i])  *FlagIndex *= -1 ;
	      break ;
	    }
	  }
	  break ;

	case CHANGEOFSTATE_CHANGEREFERENCE2 :
	  if (Nbr_Region != 1)
	    Message::Error("More than 1 Region for ChangeReference2 not done yet") ;
	  for (i = 0 ; i < Nbr_Region ; i++) {
	    *FlagIndex = ChangeOfState_P->FlagIndex ;
	    if (val1[i] > val0[i])  *FlagIndex *= -1 ;
	    if (((struct Expression *)
		 List_Pointer(Problem_S.Expression, abs(*FlagIndex)))
		->Case.Constant != (*FlagIndex > 0)? 1. : 0. ) {
	      *Type_ChangeOfState = ChangeOfState_P->Type ;
	      break ;
	    }
	  }
	  break ;
	}

	break ;

      case COMPARE_CONVERGENCE :
	Cal_SolutionErrorX(Nbr_Region, val1, val0, &MeanError) ;
	if (MeanError > 1.e-8)  *Type_ChangeOfState = !CHANGEOFSTATE_NOCHANGE ;
	break ; /* critere a revoir, avant 1.e-14 */

      }

      if (*Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE)  break ;

    }  /* if Nbr_Region > 0 ... */
  }  /* for i_COS ... */

  /* Attention: d e b u g  (fprintf)*/

  if ((Type_Analyse == COMPARE_CHANGE &&
       (*Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE || !Flag_First)) ||
      (Type_Analyse == COMPARE_CONVERGENCE)) {
    if (Flag_First) {
      for (i = 0 ; i < Nbr_Region ; i++) {
	List_Read(Region_L, i, &Num_Region) ; Message::Debug(" %10d",Num_Region) ;
      }
      for (i = 0 ; i < Nbr_Region ; i++)  Message::Debug(" %.8g", val0[i]) ;
    }
    for (i = 0 ; i < Nbr_Region ; i++)  Message::Debug(" %.8g", val1[i]) ;
    Message::Debug(" t = %.16g, dt = %.16g", Current.Time, Current.DTime) ;
    if      (*Type_ChangeOfState == CHANGEOFSTATE_CHANGESIGN)
      Message::Debug(" *Sign") ;
    else if (*Type_ChangeOfState == CHANGEOFSTATE_CHANGELEVEL)
      Message::Debug(" *Level") ;
    else if (*Type_ChangeOfState == CHANGEOFSTATE_CHANGEREFERENCE)
      Message::Debug(" *Ref (%g %g)",
	  val0[0]-fabs(ChangeOfState_P->Criterion),
	  val0[0]+fabs(ChangeOfState_P->Criterion)) ;
    else if (*Type_ChangeOfState == CHANGEOFSTATE_CHANGEREFERENCE2)
      Message::Debug(" *Ref2 (%g)", val0[0]) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ I t e r a t i v e T i m e R e d u c t i o n         */
/* ------------------------------------------------------------------------ */

void  Operation_IterativeTimeReduction(struct Resolution  * Resolution_P,
				       struct Operation   * Operation_P,
				       struct DofData     * DofData_P0,
				       struct GeoData     * GeoData_P0)
{
  int     Num_Iteration, i ;
  int     Type_ChangeOfState, Flag_TimeLimLo, Type_LimitHi, FlagIndex ;
  double  Time_Previous, DTime0, DTime1 ;
  double  Time_LimitLo, DTime_LimitLo, Time_LimitHi ;

  struct Solution   * Solution_P ;
  struct Expression * Expression_P ;

#define TIMELO_OLD   0
#define TIMELO_NEW   1

  Time_Previous = Current.Time - Current.DTime ;
  DTime0 = 0. ;  DTime1 = Current.DTime ;

  Flag_TimeLimLo = TIMELO_OLD ;
  Time_LimitLo = Time_Previous ;  DTime_LimitLo = Current.DTime ;

  Message::Debug("T I M E   %g (TS #%d, DT %g, Theta %g)",
                 Current.Time, (int)Current.TimeStep, Current.DTime, Current.Theta) ;

  Current.SubTimeStep = 0 ;
  Treatment_Operation(Resolution_P,
		      Operation_P->Case.IterativeTimeReduction.Operation,
		      DofData_P0, GeoData_P0, NULL, NULL) ;
  Cal_CompareGlobalQuantity(Operation_P, COMPARE_CHANGE, &Type_ChangeOfState,
			    &FlagIndex, 1) ;

  if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE) {
    Treatment_Operation(Resolution_P,
			Operation_P->Case.IterativeTimeReduction.OperationEnd,
			DofData_P0, GeoData_P0, NULL, NULL) ;
    /* debug */
    Cal_CompareGlobalQuantity
      (Operation_P, 999, &Type_ChangeOfState, &FlagIndex, 1) ;

    return ;
  }

  Time_LimitHi = Current.Time ; /* Sera initialise correctement par apres. */
  Type_LimitHi = Type_ChangeOfState ; /* Mais boin, c'est pour la rigueur */

  /* Recherche de l'intervalle de temps [Time_LimitLo, Time_LimitHi] < Criterion
     sur lequel un changement d'etat de grandeurs globales specifiees a lieu
     (e.g. utilisation pour les circuits avec diodes et thyristors)
  */

  for (Num_Iteration = 1 ;
       Num_Iteration <= Operation_P->Case.IterativeTimeReduction.NbrMaxIteration ;
       Num_Iteration++) {

    if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE) {
      Flag_TimeLimLo = TIMELO_NEW ;
      Time_LimitLo  = Current.Time ;  DTime_LimitLo = Current.DTime ;
    }
    else {
      Time_LimitHi = Current.Time ;
      Type_LimitHi = Type_ChangeOfState ;
    }

    if (Time_LimitHi - Time_LimitLo <
	Operation_P->Case.IterativeTimeReduction.Criterion) {

      if (Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE) {

	if (!(Flag_TimeLimLo == TIMELO_OLD &&
	      Type_ChangeOfState == CHANGEOFSTATE_CHANGELEVEL) &&
	    !(Flag_TimeLimLo == TIMELO_OLD)) {
	  Solution_P = (struct Solution *)
	    List_Pointer(Current.DofData->Solutions,
			 List_Nbr(Current.DofData->Solutions)-1) ;
	  LinAlg_DestroyVector(&Solution_P->x) ;
	  Free(Solution_P->TimeFunctionValues) ;
	  Solution_P->SolutionExist = 0 ;
	  List_Pop(Current.DofData->Solutions) ;  /* Attention: a changer ! */
	}

	if (Flag_TimeLimLo == TIMELO_NEW) {
	  /* Recalcul en Time_LimitLo */
	  /* Attention: a changer... plutot recuperer solution en Time_LimitLo... */
	  Message::Debug("==> Re-calculation at Time_LimitLo ... (%.16g)",
                         Time_LimitLo) ;
	  Current.Time  = Time_LimitLo ;  Current.DTime = DTime_LimitLo ;
	  Current.SubTimeStep++ ;

	  Treatment_Operation(Resolution_P,
			      Operation_P->Case.IterativeTimeReduction.Operation,
			      DofData_P0, GeoData_P0, NULL, NULL) ;
	}
      }

      if (Flag_TimeLimLo == TIMELO_NEW ||
	  (Flag_TimeLimLo == TIMELO_OLD &&
	   Type_ChangeOfState == CHANGEOFSTATE_CHANGELEVEL)) {
	Treatment_Operation(Resolution_P,
			    Operation_P->Case.IterativeTimeReduction.OperationEnd,
			    DofData_P0, GeoData_P0, NULL, NULL) ;
	/* debug */
	Cal_CompareGlobalQuantity
	  (Operation_P, 999, &Type_ChangeOfState, &FlagIndex, 1) ;
      }

      if (Type_LimitHi == CHANGEOFSTATE_CHANGESIGN ||
	  Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE ||
	  Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE2) {

	if (Flag_TimeLimLo == TIMELO_NEW)  Current.TimeStep += 1. ;

	if (Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE ||
	    Type_LimitHi == CHANGEOFSTATE_CHANGEREFERENCE2) {
	  Expression_P = (struct Expression *)
	    List_Pointer(Problem_S.Expression, abs(FlagIndex)) ;
	  Expression_P->Case.Constant = (FlagIndex > 0)? 1. : 0. ;
	  /*
	    Expression_P->Case.Constant =
	    (double)(!((int)Expression_P->Case.Constant)) ;
	  */
	  Message::Debug("===> Flag -> %g", Expression_P->Case.Constant) ;
	}

	if (Operation_P->Case.IterativeTimeReduction.Flag)
	  Current.Theta = 1. ;
	/* New: Theta is also changed for this time !
	   OK because dt is then very small also in this case ! */
	Current.Time  = Time_LimitHi ;
	Current.DTime = Time_LimitHi - Time_LimitLo ;
	Current.SubTimeStep++ ;

	Message::Debug("==> iterations for TimeHi ...") ;

	i = 0 ;
	do {
	  i ++ ;
	  Treatment_Operation(Resolution_P,
			      Operation_P->Case.IterativeTimeReduction.Operation,
			      DofData_P0, GeoData_P0, NULL, NULL) ;
	  Cal_CompareGlobalQuantity
	    (Operation_P, COMPARE_CONVERGENCE, &Type_ChangeOfState, &FlagIndex, 0) ;
	} while ((Flag_TimeLimLo == TIMELO_NEW && i == 1) ||
		 (Type_ChangeOfState != CHANGEOFSTATE_NOCHANGE && i < 9)) ;
	/* Attention: critere (NbrMax 9) a revoir */

	Treatment_Operation(Resolution_P,
			    Operation_P->Case.IterativeTimeReduction.OperationEnd,
			    DofData_P0, GeoData_P0, NULL, NULL) ;
	/* debug */
	Cal_CompareGlobalQuantity
	  (Operation_P, 999, &Type_ChangeOfState, &FlagIndex, 1) ;

	if (Operation_P->Case.IterativeTimeReduction.Flag) { /* Attention: Test */
	  Message::Debug("=====> Theta = %g -> 1.", Current.Theta) ;
	  Flag_NextThetaFixed = 1 ;
	  Current.Theta = 1. ;
	  if (Operation_P->Case.IterativeTimeReduction.Flag > 0) {
	    Current.DTime *= (double)Operation_P->Case.IterativeTimeReduction.Flag ;
	    Flag_NextThetaFixed = 2 ;  /* Theta is fixed, DTime is also fixed */
	  }
	}
      }

      break ;  /* Out of loop 'for Num_Iteration' */
    }  /* if Time_LimitHi - Time_LimitLo << ... */


    if (Operation_P->Case.IterativeTimeReduction.DivisionCoefficient > 0.) {
      if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE)  DTime0 += DTime1 ;
      DTime1 /= Operation_P->Case.IterativeTimeReduction.DivisionCoefficient ;
    }
    else { /* Technique de Pkp ... "un peu trop prudente" */
      if (Type_ChangeOfState == CHANGEOFSTATE_NOCHANGE)  DTime0 += DTime1 ;
      else  DTime1 /=
	      fabs(Operation_P->Case.IterativeTimeReduction.DivisionCoefficient) ;
    }

    Current.DTime = DTime0 + DTime1 ;
    Current.Time = Time_Previous + Current.DTime ;
    Current.SubTimeStep++ ;

    Solution_P = (struct Solution *)
      List_Pointer(Current.DofData->Solutions,
		   List_Nbr(Current.DofData->Solutions)-1) ;
    LinAlg_DestroyVector(&Solution_P->x) ;
    Free(Solution_P->TimeFunctionValues) ;
    Solution_P->SolutionExist = 0 ;
    List_Pop(Current.DofData->Solutions) ;  /* Attention: a changer ! */

    Treatment_Operation(Resolution_P,
			Operation_P->Case.IterativeTimeReduction.Operation,
			DofData_P0, GeoData_P0, NULL, NULL) ;
    Cal_CompareGlobalQuantity(Operation_P, COMPARE_CHANGE, &Type_ChangeOfState,
			      &FlagIndex, 0) ;
  }  /* for Num_Iteration ... */
}
