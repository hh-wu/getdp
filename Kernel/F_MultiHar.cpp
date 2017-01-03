// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//

#include <math.h>
#include "ProData.h"
#include "ProDefine.h"
#include "DofData.h"
#include "F.h"
#include "Get_Geometry.h"
#include "Get_FunctionValue.h"
#include "Cal_Quantity.h"
#include "MallocUtils.h"
#include "Message.h"

#define TWO_PI             6.2831853071795865

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

struct MH_InitData{
  int Case ;
  int NbrPoints, NbrPointsX;  /* number of samples per smallest and fundamental period resp. */
  struct DofData *DofData ;
  double **H, ***HH ;
  double *t, *w;
};

List_T * MH_InitData_L = NULL;

int fcmp_MH_InitData(const void * a, const void * b)
{
  int Result ;
  if ((Result = ((struct MH_InitData *)a)->DofData  - ((struct MH_InitData *)b)->DofData) != 0)
    return Result ;
  if ((Result = ((struct MH_InitData *)a)->Case  - ((struct MH_InitData *)b)->Case) != 0)
    return Result ;
  if (((struct MH_InitData *)a)->Case != 3)
    return ((struct MH_InitData *)a)->NbrPoints  - ((struct MH_InitData *)b)->NbrPoints ;
  else
    return ((struct MH_InitData *)a)->NbrPointsX - ((struct MH_InitData *)b)->NbrPointsX ;
}

int NbrValues_Type (int Type)
{
  switch (Type){
  case SCALAR : return 1 ;
  case VECTOR : case TENSOR_DIAG : return 3 ;
  case TENSOR_SYM : return 6 ;
  case TENSOR : return 9 ;
  default :
    Message::Error("Unknown type in NbrValues_Type");
    return 0;
  }
}

double Product_SCALARxSCALARxSCALAR (double *V1, double *V2, double *V3)
{
  return V1[0] * V2[0] * V3[0] ;
}

double Product_VECTORxTENSOR_SYMxVECTOR (double *V1, double *V2, double *V3)
{
  return V3[0] * (V1[0] * V2[0] + V1[1] * V2[1] + V1[2] * V2[2]) +
         V3[1] * (V1[0] * V2[1] + V1[1] * V2[3] + V1[2] * V2[4]) +
         V3[2] * (V1[0] * V2[2] + V1[1] * V2[4] + V1[2] * V2[5]) ;
}

double Product_VECTORxTENSOR_DIAGxVECTOR (double *V1, double *V2, double *V3)
{
  return V1[0] * V2[0] * V3[0] + V1[1] * V2[1] * V3[1] + V1[2] * V2[2] * V3[2] ;
}

double Product_VECTORxSCALARxVECTOR (double *V1, double *V2, double *V3)
{
  return V2[0] * (V1[0] * V3[0] + V1[1] * V3[1] + V1[2] * V3[2]) ;
}

void  *Get_RealProductFunction_Type1xType2xType1 (int Type1, int Type2)
{
  if (Type1 == SCALAR && Type2 == SCALAR) {
    return (void *)Product_SCALARxSCALARxSCALAR;
  }
  else if (Type1 == VECTOR && Type2 == TENSOR_SYM) {
    return (void *)Product_VECTORxTENSOR_SYMxVECTOR;
  }
  else if (Type1 == VECTOR && Type2 == TENSOR_DIAG) {
    return (void *)Product_VECTORxTENSOR_DIAGxVECTOR;
  }
  else if (Type1 == VECTOR && Type1 == SCALAR) {
    return (void *)Product_VECTORxSCALARxVECTOR;
  }
  else {
    Message::Error("Not allowed types in Get_RealProductFunction_Type1xType2xType1");
    return 0;
  }
}

/* ------------------------------------------------------------------------ */
/*   MH_Get_InitData                                                        */
/* ------------------------------------------------------------------------ */

/*
  Case = 1 : MHTransform       NbrPoints (samples per smallest period) is given,
                               NbrPointsX (samples per fundamental period) is derived
  Case = 2 : MHJacNL           NbrPoints given,  NbrPointsX derived
  Case = 3 : HarmonicToTime    NbrPointsX given,  NbrPoints derived
*/

void MH_Get_InitData(int Case, int NbrPoints, int *NbrPointsX_P,
		     double ***H_P, double ****HH_P, double **t_P, double **w_P)
{
  int NbrHar, iPul, iTime, iHar, jHar, NbrPointsX ;
  double *Val_Pulsation, MaxPuls, MinPuls ;
  double **H, ***HH = 0, *t, *w ;
  struct MH_InitData MH_InitData_S, *MH_InitData_P ;

  MH_InitData_S.Case       = Case;
  MH_InitData_S.DofData    = Current.DofData;
  MH_InitData_S.NbrPoints  = NbrPoints;
  MH_InitData_S.NbrPointsX = NbrPointsX = *NbrPointsX_P;

  if (MH_InitData_L == NULL)
    MH_InitData_L = List_Create(1, 1, sizeof(struct MH_InitData)) ;

  if ((MH_InitData_P = (struct MH_InitData *)
       List_PQuery(MH_InitData_L, &MH_InitData_S, fcmp_MH_InitData))){
    *H_P  = MH_InitData_P->H;
    *HH_P = MH_InitData_P->HH;
    *t_P  = MH_InitData_P->t;
    *w_P  = MH_InitData_P->w;
    *NbrPointsX_P = MH_InitData_P->NbrPointsX;
    return;
  }

  NbrHar = Current.NbrHar;

  Val_Pulsation = Current.DofData->Val_Pulsation;
  MaxPuls = 0. ; MinPuls = 1.e99 ;

  for (iPul = 0 ; iPul < NbrHar/2 ; iPul++) {
    if (Val_Pulsation[iPul]){
      MinPuls = std::min(Val_Pulsation[iPul], MinPuls);
      MaxPuls = std::max(Val_Pulsation[iPul], MaxPuls);
    }
    /*
    // Ruth: Previous implementation
    if (Val_Pulsation[iPul] &&  Val_Pulsation[iPul] < MinPuls)
      MinPuls = Val_Pulsation[iPul] ;
    if (Val_Pulsation[iPul] &&  Val_Pulsation[iPul] > MaxPuls)
      MaxPuls = Val_Pulsation[iPul] ;
    */
  }

  if (Case != 3)
    NbrPointsX = (int)((MaxPuls/MinPuls*(double)NbrPoints));
  else
    NbrPoints  = (int)((MinPuls/MaxPuls*(double)NbrPointsX));

  if(Case==1)
    Message::Info("MH_Get_InitData (MHTransform) => NbrHar = %d  NbrPoints = %d|%d",
                  NbrHar, NbrPoints, NbrPointsX);
  if(Case==2)
    Message::Info("MH_Get_InitData (MHJacNL) => NbrHar = %d  NbrPoints = %d|%d",
                  NbrHar, NbrPoints, NbrPointsX);
  if(Case==3)
    Message::Info("MH_Get_InitData (HarmonicToTime) => NbrHar = %d  NbrPoints = %d|%d",
                  NbrHar, NbrPoints, NbrPointsX);


  t = (double *)Malloc(sizeof(double)*NbrPointsX) ;

  if (Case != 3)
    for (iTime = 0 ; iTime < NbrPointsX ; iTime++)
      t[iTime] = (double)iTime/(double)NbrPointsX/(MinPuls/TWO_PI) ;
  else
    for (iTime = 0 ; iTime < NbrPointsX ; iTime++)
      t[iTime] = (double)iTime/((double)NbrPointsX-1.)/(MinPuls/TWO_PI) ;

  w = (double *)Malloc(sizeof(double)*NbrHar) ;
  for (iPul = 0 ; iPul < NbrHar/2 ; iPul++)
    if (Val_Pulsation[iPul]){
      w[2*iPul  ] = 2. / (double)NbrPointsX ;
      w[2*iPul+1] = 2. / (double)NbrPointsX ;
    }
    else{
      w[2*iPul  ] = 1. / (double)NbrPointsX ;
      w[2*iPul+1] = 1. / (double)NbrPointsX ;
    }

  H = (double **)Malloc(sizeof(double *)*NbrPointsX) ;
  for (iTime = 0 ; iTime < NbrPointsX ; iTime++){
    H[iTime] = (double *)Malloc(sizeof(double)*NbrHar) ;
    for (iPul = 0 ; iPul < NbrHar/2 ; iPul++) {
	H[iTime][2*iPul  ] =   cos(Val_Pulsation[iPul] * t[iTime]) ;
	H[iTime][2*iPul+1] = - sin(Val_Pulsation[iPul] * t[iTime]) ;
    }
  }

 /*
   for (iHar = 0 ; iHar < NbrHar ; iHar++)
     for (jHar = iHar ; jHar < NbrHar ; jHar++){
       sum = 0.;
       for (iTime = 0 ; iTime < NbrPointsX ; iTime++)
  	 sum += w[iTime] * H[iTime][iHar] * H[iTime][jHar] ;
         sum -= (iHar==jHar)? 1. : 0. ;
         printf("iHar %d jHar %d sum %e\n", iHar, jHar, sum);
     }
 */


  if (Case == 2) {
    if(Current.DofData->Flag_Init[0] < 2)
      Message::Error("Jacobian system not initialized (missing GenerateJac?)");

    HH = (double ***)Malloc(sizeof(double **)*NbrPointsX) ;
    for (iTime = 0 ; iTime < NbrPointsX ; iTime++){
      HH[iTime] = (double **)Malloc(sizeof(double *)*NbrHar) ;
      for (iHar = 0 ; iHar < NbrHar ; iHar++){
	HH[iTime][iHar] = (double *)Malloc(sizeof(double)*NbrHar) ;
	for (jHar = 0 ; jHar < NbrHar ; jHar++){
	  if (Val_Pulsation [iHar/2] && Val_Pulsation [jHar/2] )
	    HH[iTime][iHar][jHar] = 2. / (double)NbrPointsX * H[iTime][iHar] * H[iTime][jHar] ;
	  else
	    HH[iTime][iHar][jHar] = 1. / (double)NbrPointsX * H[iTime][iHar] * H[iTime][jHar] ;
	}
      }
    }
  }

  *H_P  = MH_InitData_S.H  = H;
  *t_P  = MH_InitData_S.t  = t;
  *w_P  = MH_InitData_S.w  = w;
  *HH_P = MH_InitData_S.HH = HH;
  *NbrPointsX_P = MH_InitData_S.NbrPointsX = NbrPointsX;
  List_Add (MH_InitData_L, &MH_InitData_S);
}

/* ------------------------------------------------------------------------ */
/*  F_MHToTime0    (HarmonicToTime in PostOperation)                        */
/* ------------------------------------------------------------------------ */

void F_MHToTime0(int init, struct Value * A, struct Value * V,
		 int iTime, int NbrPointsX, double * TimeMH)
{
  static double **H, ***HH, *t, *weight;
  int iVal, nVal, iHar;

  if (Current.NbrHar == 1) return;

  if (!init) MH_Get_InitData(3, 0, &NbrPointsX, &H, &HH, &t, &weight);

  *TimeMH = t[iTime] ;
  V->Type = A->Type ;
  nVal = NbrValues_Type (A->Type) ;

  for (iVal = 0 ; iVal < nVal ; iVal++){
    V->Val[iVal] = 0;
    for (iHar = 0 ; iHar < Current.NbrHar ; iHar++)
      V->Val[iVal] += H[iTime][iHar] * A->Val[iHar*MAX_DIM+iVal] ;
  }

}



/* ---------------------------------------------------------------------- */
/*  F_MHToTime                                                            */
/* ---------------------------------------------------------------------- */

void  F_MHToTime (struct Function * Fct, struct Value * A, struct Value * V) {
  int iHar, iVal, nVal ;
  double time, H[NBR_MAX_HARMONIC];
  struct Value Vtemp;

  if (Current.NbrHar == 1) Message::Error("'F_MHToTime' only for Multi-Harmonic stuff") ;
  if((A+1)->Type != SCALAR)
    Message::Error("'F_MHToTime' requires second scalar argument (time)");
  time = (A+1)->Val[0] ;

  for (iHar = 0 ; iHar < Current.NbrHar/2 ; iHar++) {
    /* if (Current.DofData->Val_Pulsation [iHar]){ */
      H[2*iHar  ] =   cos(Current.DofData->Val_Pulsation[iHar] * time) ;
      H[2*iHar+1] = - sin(Current.DofData->Val_Pulsation[iHar] * time) ;
    /*
    }
    else {
      H[2*iHar  ] = 0.5 ;
      H[2*iHar+1] = 0 ;
    }
    */
  }

  nVal = NbrValues_Type (A->Type) ;

  for (iVal = 0 ; iVal < MAX_DIM ; iVal++)
    for (iHar = 0 ; iHar < Current.NbrHar ; iHar++)
      Vtemp.Val[iHar*MAX_DIM+iVal] = 0.;

  for (iVal = 0 ; iVal < nVal ; iVal++)
    for (iHar = 0 ; iHar < Current.NbrHar ; iHar++)
      Vtemp.Val[iVal] += H[iHar] * A->Val[iHar*MAX_DIM+iVal] ;

  V->Type = A->Type ;
  for (iVal = 0 ; iVal < MAX_DIM ; iVal++)
    for (iHar = 0 ; iHar < Current.NbrHar ; iHar++)
      V->Val[iHar*MAX_DIM+iVal] = Vtemp.Val[iHar*MAX_DIM+iVal] ;
}

/* ------------------------------------------------------------------------ */
/*  MHTransform                                                             */
/* ------------------------------------------------------------------------ */

void MHTransform(struct Element * Element, struct QuantityStorage * QuantityStorage_P0,
		 double u, double v, double w, struct Value *MH_Value,
		 struct Expression * Expression_P, int NbrPoints)
{
  double **H, ***HH, *t, *weight ;
  int NbrHar;
  struct Value t_Value, MH_Value_Tr;
  int NbrPointsX, iVal, nVal1, nVal2 = 0, iHar, iTime;

  MH_Get_InitData(1, NbrPoints, &NbrPointsX, &H, &HH, &t, &weight);

  nVal1 = NbrValues_Type (MH_Value->Type) ;
  t_Value.Type = MH_Value_Tr.Type = MH_Value->Type;

  NbrHar = Current.NbrHar;   /* save NbrHar */
  Current.NbrHar = 1;        /* evaluation in time domain ! */

  for (iVal = 0 ; iVal < MAX_DIM ; iVal++)  for (iHar = 0 ; iHar < NbrHar ; iHar++)
    MH_Value_Tr.Val[iHar*MAX_DIM+iVal] = 0. ;

  for (iTime = 0 ; iTime < NbrPointsX ; iTime++) {

    for (iVal = 0 ; iVal < nVal1 ; iVal++){ /* evaluation of MH_Value at iTime-th time point */
      t_Value.Val[iVal] = 0;
      for (iHar = 0 ; iHar < NbrHar ; iHar++)
	t_Value.Val[iVal] += H[iTime][iHar] * MH_Value->Val[iHar*MAX_DIM+iVal] ;
    }

    /* evaluation of the function */
    Get_ValueOfExpression(Expression_P, QuantityStorage_P0, u, v, w, &t_Value, 1);
    //To generalize: Function in MHTransform (e.g. h[{d a}]) has 1 argument

    if (!iTime) nVal2 = NbrValues_Type (t_Value.Type) ;

    for (iVal = 0 ; iVal < nVal2 ; iVal++)
      for (iHar = 0 ; iHar < NbrHar ; iHar++)
        MH_Value_Tr.Val[iHar*MAX_DIM+iVal] +=
          weight[iHar] * H[iTime][iHar] * t_Value.Val[iVal] ;
    /* weight[iTime] * H[iTime][iHar] * t_Value.Val[iVal] ; */

  } /*  for iTime  */

  for (iVal = 0 ; iVal < nVal2 ; iVal++)  for (iHar = 0 ; iHar < NbrHar ; iHar++)
    MH_Value->Val[iHar*MAX_DIM+iVal] = MH_Value_Tr.Val[iHar*MAX_DIM+iVal] ;
  MH_Value->Type = t_Value.Type ;

  Current.NbrHar = NbrHar ;
}

/* ----------------------------------------------------------------------------------- */
/*  C a l _ I n i t G a l e r k i n T e r m O f F e m E q u a t i o n _ M H J a c N L  */
/* ----------------------------------------------------------------------------------- */

void Cal_InitGalerkinTermOfFemEquation_MHJacNL(struct EquationTerm  * EquationTerm_P)
{
  struct FemLocalTermActive  * FI ;
  List_T * WholeQuantity_L;
  struct WholeQuantity   *WholeQuantity_P0 ;
  int i_WQ ;

  FI = EquationTerm_P->Case.LocalTerm.Active ;
  FI->MHJacNL = 0 ;

  /* search for MHJacNL-term(s) */
  WholeQuantity_L  = EquationTerm_P->Case.LocalTerm.Term.WholeQuantity ;
  WholeQuantity_P0 = (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) ;
  i_WQ = 0 ; while ( i_WQ < List_Nbr(WholeQuantity_L) &&
		     (WholeQuantity_P0 + i_WQ)->Type != WQ_MHJACNL) i_WQ++ ;

  if (i_WQ == List_Nbr(WholeQuantity_L) )
    return;   /* no MHJacNL stuff, let's get the hell out of here ! */

  /* check if Galerkin term produces symmetrical contribution to system matrix */
  if (!FI->SymmetricalMatrix)
     Message::Error("Galerkin term with MHJacNL must be symmetrical");

  if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ != CWQ_NONE)
    Message::Error("Not allowed expression in Galerkin term with MHJacNL");
  if(EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative != JACNL_)
    Message::Error("MHJacNL can only be used with JACNL") ;

  if (List_Nbr(WholeQuantity_L) == 4){
    if (i_WQ != 1 ||
	EquationTerm_P->Case.LocalTerm.Term.DofIndexInWholeQuantity != 2 ||
	(WholeQuantity_P0 + 3)->Type != WQ_BINARYOPERATOR ||
	(WholeQuantity_P0 + 3)->Case.Operator.TypeOperator != OP_TIME)
      Message::Error("Not allowed expression in Galerkin term with MHJacNL");
    FI->MHJacNL_Factor = 1.;
  } else if (List_Nbr(WholeQuantity_L) == 6){
    if ((WholeQuantity_P0 + 0)->Type != WQ_CONSTANT ||
	i_WQ != 2 ||
	(WholeQuantity_P0 + 3)->Type != WQ_BINARYOPERATOR ||
	(WholeQuantity_P0 + 3)->Case.Operator.TypeOperator != OP_TIME ||
	EquationTerm_P->Case.LocalTerm.Term.DofIndexInWholeQuantity != 3 ||
	(WholeQuantity_P0 + 5)->Type != WQ_BINARYOPERATOR ||
	(WholeQuantity_P0 + 5)->Case.Operator.TypeOperator != OP_TIME)
      Message::Error("Not allowed expression in Galerkin term with MHJacNL");
    FI->MHJacNL_Factor = WholeQuantity_P0->Case.Constant ;
    /* printf(" Factor = %e \n" , FI->MHJacNL_Factor); */
  } else {
    Message::Error("Not allowed expression in Galerkin term with MHJacNL (%d terms) ",
                   List_Nbr(WholeQuantity_L));
  }
  /*
  // Moving this check up...
  if(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity_Equ != CWQ_NONE)
    Message::Error("Not allowed expression in Galerkin term with MHJacNL");

  if (EquationTerm_P->Case.LocalTerm.Term.TypeTimeDerivative != JACNL_)
    Message::Error("MHJacNL can only be used with JACNL") ;
  */

  FI->MHJacNL = 1 ;
  FI->MHJacNL_Index  = (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.Index ; /* index of function for jacobian, e.g. dhdb[{d a}] */
  FI->MHJacNL_NbrArguments = (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.NbrArguments ; /* number of arguments of function for jacobian */

  if(Message::GetVerbosity() == 10)
    Message::Info("FreqOffSet in 'MHJacNL' == %d ", (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.FreqOffSet) ;

  FI->MHJacNL_HarOffSet = 2 * (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.FreqOffSet ;
  if (FI->MHJacNL_HarOffSet > Current.NbrHar-2){
    Message::Warning("FreqOffSet in 'MHJacNL' cannot exceed %d => set to %d ",
                     Current.NbrHar/2-1, Current.NbrHar/2-1) ;
    FI->MHJacNL_HarOffSet = Current.NbrHar-2 ;
  }

  MH_Get_InitData(2, (WholeQuantity_P0 + i_WQ)->Case.MHJacNL.NbrPoints,
		  &FI->MHJacNL_NbrPointsX, &FI->MHJacNL_H, &FI->MHJacNL_HH,
		  &FI->MHJacNL_t, &FI->MHJacNL_w) ;
}

#define OFFSET (iHar < NbrHar-OffSet)? 0 : iHar-NbrHar+OffSet+2-iHar%2

/* --------------------------------------------------------------------------- */
/*  C a l _ G a l e r k i n T e r m O f F e m E q u a t i o n _ M H J a c N L  */
/* --------------------------------------------------------------------------- */

void  Cal_GalerkinTermOfFemEquation_MHJacNL(struct Element          * Element,
					    struct EquationTerm     * EquationTerm_P,
					    struct QuantityStorage  * QuantityStorage_P0) {

  struct FemLocalTermActive * FI ;
  struct QuantityStorage    * QuantityStorage_P;
  struct IntegrationCase    * IntegrationCase_P ;
  struct Quadrature         * Quadrature_P ;

  int     Nbr_Dof, NbrHar ;
  double  vBFuDof [NBR_MAX_BASISFUNCTIONS][MAX_DIM] ;
  double  vBFxDof [NBR_MAX_BASISFUNCTIONS][MAX_DIM] ;
  double  Val_Dof [NBR_MAX_BASISFUNCTIONS][NBR_MAX_HARMONIC] ;
  double  Val     [3*NBR_MAX_BASISFUNCTIONS];

  int     i, j, k, Type_Dimension,  Nbr_IntPoints, i_IntPoint ;
  int     iTime, iDof, jDof, iHar, jHar, nVal1, nVal2 = 0, iVal1, iVal2, Type1;
  double **H, ***HH, Factor, plus, plus0, weightIntPoint;
  int NbrPointsX, OffSet;
  struct Expression * Expression_P;
  struct Dof * Dofi, *Dofj;
  struct Value t_Value;
  gMatrix * Jac;

  double one=1.0 ;
  int iPul, ZeroHarmonic, DcHarmonic;

  // test!
  //double E_MH[NBR_MAX_BASISFUNCTIONS][NBR_MAX_BASISFUNCTIONS][NBR_MAX_HARMONIC][NBR_MAX_HARMONIC];
  double E_D[NBR_MAX_HARMONIC][NBR_MAX_HARMONIC][MAX_DIM];

  void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
    (struct Element * Element, int NumEntity,
     double u, double v, double w, double Value[] ) ;
  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;
  void (*Get_IntPoint)(int,int,double*,double*,double*,double*);
  double (*Get_Product)(double*,double*,double*) = 0;

  FI = EquationTerm_P->Case.LocalTerm.Active ;
  QuantityStorage_P = FI->QuantityStorageDof_P ;

  /*  ----------------------------------------------------------------------  */
  /*  G e t   F u n c t i o n V a l u e  f o r  t e s t  f u n c t i o n s    */
  /*  ----------------------------------------------------------------------  */

  if (!(Nbr_Dof = QuantityStorage_P->NbrElementaryBasisFunction)){
    return;
  }

  // test!
  std::vector<std::vector<std::vector<std::vector<double> > > > E_MH(Nbr_Dof);
  for(unsigned int i = 0; i < E_MH.size(); i++){
    E_MH[i].resize(Nbr_Dof);
    for(unsigned int j = 0; j < E_MH[i].size(); j++){
      E_MH[i][j].resize(Current.NbrHar);
      for(unsigned int k = 0; k < E_MH[i][j].size(); k++){
        E_MH[i][j][k].resize(Current.NbrHar, 0.);
      }
    }
  }

  Get_FunctionValue(Nbr_Dof, (void (**)())xFunctionBFDof,
		    EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof,
		    QuantityStorage_P, &FI->Type_FormDof) ;


  for (j = 0 ; j < Nbr_Dof ; j++)
    for (k = 0 ; k < Current.NbrHar ; k+=2)
      Dof_GetComplexDofValue
	(QuantityStorage_P->FunctionSpace->DofData,
	 QuantityStorage_P->BasisFunction[j].Dof + k/2*gCOMPLEX_INCREMENT,
	 &Val_Dof[j][k], &Val_Dof[j][k+1]) ;

  /* printf("Type1 = %d\n",  FI->Type_FormDof); */
  nVal1 = NbrValues_Type (Type1 = Get_ValueFromForm(FI->Type_FormDof)) ;



  /*  -------------------------------------------------------------------  */
  /*  G e t   J a c o b i a n   M e t h o d                                */
  /*  -------------------------------------------------------------------  */

  i = 0 ; while ((i < FI->NbrJacobianCase) &&
		 ((j = (FI->JacobianCase_P0 + i)->RegionIndex) >= 0) &&
		 !List_Search
		 (((struct Group *)List_Pointer(Problem_S.Group, j))
		  ->InitialList, &Element->Region, fcmp_int) ) i++ ;

  if (i == FI->NbrJacobianCase)
    Message::Error("Undefined Jacobian in Region %d", Element->Region);

  Element->JacobianCase = FI->JacobianCase_P0 + i ;

  Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
    Get_JacobianFunction(Element->JacobianCase->TypeJacobian,
			 Element->Type, &Type_Dimension) ;

  if (FI->Flag_ChangeCoord) Get_NodesCoordinatesOfElement(Element) ;



  /*  integration in space  */

  IntegrationCase_P =
    Get_IntegrationCase(Element, FI->IntegrationCase_L, FI->CriterionIndex);

  switch (IntegrationCase_P->Type) {
  case ANALYTIC :
    Message::Error("Analytical integration not implemented for MHJacNL");
  }

  Quadrature_P = (struct Quadrature*)
    List_PQuery(IntegrationCase_P->Case, &Element->Type, fcmp_int);

  if(!Quadrature_P)
    Message::Error("Unknown type of Element (%s) for Integration method (%s)",
                   Get_StringForDefine(Element_Type, Element->Type),
                   ((struct IntegrationMethod *)
                    List_Pointer(Problem_S.IntegrationMethod,
                                 EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex))->Name);

  Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
  Get_IntPoint  = (void(*)(int,int,double*,double*,double*,double*))
    Quadrature_P->Function ;

  /*  integration in fundamental time period  */

  NbrPointsX   = FI->MHJacNL_NbrPointsX;
  HH           = FI->MHJacNL_HH;
  H            = FI->MHJacNL_H ;
  Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, FI->MHJacNL_Index);
  OffSet       = FI->MHJacNL_HarOffSet;
  Factor       = FI->MHJacNL_Factor;



  /*  ------------------------------------------------------------------------  */
  /*  ------------------------------------------------------------------------  */
  /*  C o m p u t a t i o n   o f   E l e m e n t a r y   m a t r i x           */
  /*  ------------------------------------------------------------------------  */
  /*  ------------------------------------------------------------------------  */

  NbrHar = Current.NbrHar ;

  /* special treatment of DC-term and associated dummy sinus-term */
  DcHarmonic = NbrHar;
  ZeroHarmonic = 0;
  for (iPul = 0 ; iPul < NbrHar/2 ; iPul++)
    if (!Current.DofData->Val_Pulsation[iPul]){
      DcHarmonic   = 2*iPul ;
      ZeroHarmonic = 2*iPul+1 ;
      break;
    }

  /* volume integration over element */
  for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {

    Get_IntPoint(Nbr_IntPoints, i_IntPoint,
		 &Current.u, &Current.v, &Current.w, &weightIntPoint) ;

    if (FI->Flag_ChangeCoord) {
      Get_BFGeoElement(Element, Current.u, Current.v, Current.w) ;

      Element->DetJac = Get_Jacobian(Element, &Element->Jac) ;
      weightIntPoint *= fabs(Element->DetJac) ;

      if (FI->Flag_InvJac)
	Get_InverseMatrix(Type_Dimension, Element->Type, Element->DetJac,
			  &Element->Jac, &Element->InvJac) ;
    }

    /* Test and shape Functions (are the same) */

    for (i = 0 ; i < Nbr_Dof ; i++) {
      xFunctionBFDof[i]
	(Element,
	 QuantityStorage_P->BasisFunction[i].NumEntityInElement+1,
	 Current.u, Current.v, Current.w, vBFuDof[i]) ;
      ((void (*)(struct Element*, double*, double*))
       FI->xChangeOfCoordinatesEqu) (Element, vBFuDof[i], vBFxDof[i]) ;
    }

    switch (Type1) {
    case SCALAR :
      for (k = 0 ; k < NbrHar ; k++){
	Val[k] = 0.;
	for (j = 0 ; j < Nbr_Dof ; j++)
	  Val[k] += vBFxDof[j][0] * Val_Dof[j][k] ;
      }
      break ;
    case VECTOR :
      for (k = 0 ; k < NbrHar ; k++){
	Val[3*k] = Val[3*k+1] = Val[3*k+2] = 0.;
	for (j = 0 ; j < Nbr_Dof ; j++){
	  Val[3*k  ] += vBFxDof[j][0] * Val_Dof[j][k] ;
	  Val[3*k+1] += vBFxDof[j][1] * Val_Dof[j][k] ;
	  Val[3*k+2] += vBFxDof[j][2] * Val_Dof[j][k] ;
	}
      }
      break ;
    }


    Current.NbrHar = 1;  /* evaluation in time domain */

    /* time integration over fundamental period */
    for (iTime = 0 ; iTime < NbrPointsX ; iTime++) {

      t_Value.Type = Type1 ;
      for (iVal1 = 0 ; iVal1 < nVal1 ; iVal1++){
	t_Value.Val[iVal1] = 0;
	for (iHar = 0 ; iHar < NbrHar ; iHar++)
	  t_Value.Val[iVal1] += H[iTime][iHar] * Val[iHar*nVal1+iVal1] ;
      }

      Get_ValueOfExpression(Expression_P, QuantityStorage_P0,
                            Current.u, Current.v, Current.w, &t_Value,
                            FI->MHJacNL_NbrArguments);
      //Current.u, Current.v, Current.w, &t_Value, 1); //To generalize: Function in MHJacNL has 1 argument (e.g. dhdb[{d a}])

      if (!iTime){
	if (!i_IntPoint){
	  nVal2 = NbrValues_Type (t_Value.Type) ;
	  Get_Product = (double(*)(double*,double*,double*))
	    Get_RealProductFunction_Type1xType2xType1 (Type1, t_Value.Type) ;
	}
	for (iHar = 0 ; iHar < NbrHar ; iHar++)
	  for (jHar = OFFSET ; jHar <= iHar ; jHar++)
	    for (iVal2 = 0 ; iVal2 < nVal2 ; iVal2++)
	      E_D[iHar][jHar][iVal2] = 0. ;
      }

      for (iHar = 0 ; iHar < NbrHar ; iHar++)
	for (jHar = OFFSET  ; jHar <= iHar ; jHar++){
	  for (iVal2 = 0 ; iVal2 < nVal2 ; iVal2++)
	    E_D[iHar][jHar][iVal2] += HH[iTime][iHar][jHar] * t_Value.Val[iVal2] ;
	}

    } /* for iTime ... */

    for (iDof = 0 ; iDof < Nbr_Dof ; iDof++)
      for (jDof = 0 ; jDof <= iDof ; jDof++)
	for (iHar = 0 ; iHar < NbrHar ; iHar++)
	  for (jHar = OFFSET  ; jHar <= iHar ; jHar++){
	    E_MH[iDof][jDof][iHar][jHar] += weightIntPoint *
	      Get_Product(vBFxDof[iDof], E_D[iHar][jHar], vBFxDof[jDof]) ;
            Message::Debug("E_MH[%d][%d][%d][%d] = %e",
                           iDof, jDof, iHar, jHar, E_MH[iDof][jDof][iHar][jHar]) ;
	  }

    Current.NbrHar = NbrHar ;

  }  /* for i_IntPoint ... */


  /*  --------------------------------------------------------------------  */
  /*  A d d   c o n t r i b u t i o n   t o  J a c o b i a n   M a t r i x  */
  /*  --------------------------------------------------------------------  */

  Jac = &Current.DofData->Jac;

  for (iDof = 0 ; iDof < Nbr_Dof ; iDof++){
    Dofi = QuantityStorage_P->BasisFunction[iDof].Dof ;
    for (jDof = 0 ; jDof <= iDof ; jDof++){
      Dofj = QuantityStorage_P->BasisFunction[jDof].Dof ;

      for (iHar = 0 ; iHar < NbrHar ; iHar++)
	for (jHar = OFFSET ; jHar <= iHar ; jHar++){
	  plus = plus0 = Factor * E_MH[iDof][jDof][iHar][jHar] ;

	  if(jHar==DcHarmonic && iHar!=DcHarmonic) { plus0 *= 1. ; plus *= 2. ;}
          // FIXME: this cannot work in complex arithmetic: AssembleInMat will
          // need to assemble both real and imaginary parts at once -- See
          // Cal_AssembleTerm for an example
          Dof_AssembleInMat(Dofi+iHar, Dofj+jHar, 1, &plus, Jac, NULL) ;
	  if(iHar != jHar)
	      Dof_AssembleInMat(Dofi+jHar, Dofj+iHar, 1, &plus0, Jac, NULL) ;
	  if(iDof != jDof){
	      Dof_AssembleInMat(Dofj+iHar, Dofi+jHar, 1, &plus, Jac, NULL) ;
	      if(iHar != jHar)
		Dof_AssembleInMat(Dofj+jHar, Dofi+iHar, 1, &plus0, Jac, NULL) ;
	  }
	}
    }
  }


  /* dummy 1's on the diagonal for sinus-term of dc-component */

  if (ZeroHarmonic) {
    for (iDof = 0 ; iDof < Nbr_Dof ; iDof++){
      Dofi = QuantityStorage_P->BasisFunction[iDof].Dof + ZeroHarmonic ;
      // FIXME: this cannot work in complex arithmetic: AssembleInMat will
      // need to assemble both real and imaginary parts at once -- See
      // Cal_AssembleTerm for an example
      Dof_AssembleInMat(Dofi, Dofi, 1, &one, Jac, NULL) ;
    }
  }
}


#undef OFFSET
