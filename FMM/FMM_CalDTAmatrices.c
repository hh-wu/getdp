#define RCSID "$Id: FMM_CalDTAmatrices.c,v 1.1 2003-03-17 16:13:08 sabarieg Exp $"


#include "Treatment_Formulation.h"
#include "Data_DefineE.h"
#include "GF_Function.h"

#include "F_FMM_DTA.h"

/* ------------------------------------------------------------------------- */ 
/* TRANSLATION in the spectral domain                                        */ 
/* ------------------------------------------------------------------------- */ 

void GF_FMMTranslationValue ( ){
   
  int FMMObs, FMMSrc, NbrGroupSrc, NbrFG, *FG ;
  int i, j, Nd, iEqu, NbrFMMEqu, jEqu, N, NbrHar ;
  double ***T ;

  struct Value TV[NBR_MAX_DIR] ;
  struct FMMData *FMMDataObs_P0,  *FMMDataSrc_P0 ;
  struct FMMGroup  FMMGroup_S ;  
  struct FMMmat *FMMmat_P0 ;
  struct Function *GFx ;
  List_T *FG_L ;


  GetDP_Begin("GF_FMMTranslationValue");

  Msg(INFO, "Creation Translation matrix (with GF_Functions)");

  Nd = Current.FMM.NbrDir ;

  /* The dimensions of the matrix depend on the case we are dealing with.
     Helmholtz -> Nd, Laplace2D -> Nd * Nd, Laplace3D -> (2*Nd-1)*(2*Nd+1) */

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  
  NbrHar = Current.NbrHar ;
  Current.NbrHar = 2 ;

  for(iEqu = 0 ; iEqu < NbrFMMEqu ; iEqu ++ ){
    FMMSrc = (FMMmat_P0+iEqu)->Src ;
    FMMObs = (FMMmat_P0+iEqu)->Obs ;
    GFx = (FMMmat_P0+iEqu)->GFx ;

    N = (GFx->NbrParameters==2) ? Nd : (((int)GFx->Para[0] == _2D) ? Nd*Nd : (2*Nd-1)*(2*Nd+1)) ; 

    jEqu = 0 ; while( jEqu<iEqu && ((FMMmat_P0+jEqu)->Src != FMMSrc || (FMMmat_P0+jEqu)->Obs != FMMObs)) jEqu ++ ;
    if (jEqu < iEqu && GFx->NbrParameters == 1 && GFx->Para[0] != _2D  )
      (FMMmat_P0 + iEqu)->T = (FMMmat_P0 + jEqu)->T ;
    else {

      List_Read(Problem_S.FMMGroup, FMMSrc, &FMMGroup_S ) ;
      NbrGroupSrc = List_Nbr(FMMGroup_S.List ) ;
      FMMDataSrc_P0 = FMMDataObs_P0 =(struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
      
      if ( FMMSrc != FMMObs ){
	List_Read(Problem_S.FMMGroup, FMMObs, &FMMGroup_S ) ;
	FMMDataObs_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List,0) ;   
      }
 
      T = (double***)Malloc(NbrGroupSrc*sizeof(double**)) ;
      for(i = 0 ; i < NbrGroupSrc ; i++){
	List_Read((FMMmat_P0+iEqu)->FG_L, i, &FG_L) ;	  
	NbrFG = List_Nbr(FG_L) ;
	T[i] = (double**)Malloc(NbrFG*sizeof(double*)) ;
	for (j = 0 ; j < NbrFG ; j++)
	    T[i][j] = (double*)Malloc(2*N*sizeof(double)) ;	
      }
      
      Current.FMM.Flag_GF = 3 ;

      for(i = 0 ; i < NbrGroupSrc ; i++){ /* i Origin */
	List_Read((FMMmat_P0+iEqu)->FG_L, i, &FG_L) ;	  
	NbrFG = List_Nbr(FG_L) ;
	if(NbrFG){
	  FG = (int*)(FG_L->array) ;
	  Current.xs = (FMMDataSrc_P0+i)->Xgc ;
	  Current.ys = (FMMDataSrc_P0+i)->Ygc ;
	  Current.zs = (FMMDataSrc_P0+i)->Zgc ;
	  Current.FMM.Rsrc = (FMMDataSrc_P0+i)->Rmax ;

	  for (j = 0 ; j < NbrFG ; j++){ /* j Destination */
	    Current.x = (FMMDataObs_P0 + FG[j])->Xgc ;
	    Current.y = (FMMDataObs_P0 + FG[j])->Ygc ;
	    Current.z = (FMMDataObs_P0 + FG[j])->Zgc ;
	    Current.FMM.Robs = (FMMDataObs_P0 + FG[j])->Rmax ;
	    ((void(*)(struct Function*, struct Value*, struct Value*))GFx->Fct)(GFx, TV, TV) ;
	    Cal_ValueArray2DoubleArray(TV, T[i][j], N) ;
	  }
	}
       	else T[i] = NULL ;
      }  
      (FMMmat_P0+iEqu)->T = T ;
    }
  }
  Current.NbrHar = NbrHar ;
  Current.FMM.Flag_GF = DIRECT ;
  GetDP_End ;
}



void GF_FMMTranslationValueAdaptive( ){
   
  int FMMObs, FMMSrc, NbrGroupSrc, NbrFG, *FG ;
  int i, j, is,js,iEqu, NbrFMMEqu, jEqu, N, *Nd_A, NbrDirMAX, NbrHar ;
  double ***T ;

  struct Value TV[NBR_MAX_DIR] ;
  struct FMMData *FMMDataObs_P0,  *FMMDataSrc_P0 ;
  struct FMMGroup  FMMGroup_S ;  
  struct FMMmat *FMMmat_P0 ;
  struct Function *GFx ;
  List_T *FG_L, *Nd_L ;


  GetDP_Begin("GF_FMMTranslationValueAdaptive");
  Msg(RESOURCES, "Before translation ");
  Msg(INFO, "Creation Translation matrix (with GF_Functions & Adaptive)");
 
  /* ADAPTIVE number of directions: Truncation parameter is a function of
     the precision and the ratio D/R, where D is the distance between SRC
     group and OBS group and R is the maximum radius of the circles/spheres
     enclosing the groups SRC and OBS. 
     The Aggregation and Disaggregation matrices are built for the extreme case,
     the suitable number of elements will be taken into account during the
     iterative process.
     The dimensions of the matrix depend on the case we are dealing with.
     Helmholtz -> Nd, Laplace2D -> Nd * Nd, Laplace3D -> (2*Nd-1)*(2*Nd+1) */

  NbrHar = Current.NbrHar ;
  Current.NbrHar = 2 ;
  
  NbrDirMAX = Current.FMM.NbrDir ;
  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
   


  for(iEqu = 0 ; iEqu < NbrFMMEqu ; iEqu ++ ){
    FMMSrc = (FMMmat_P0+iEqu)->Src ;
    FMMObs = (FMMmat_P0+iEqu)->Obs ;

    GFx = (FMMmat_P0+iEqu)->GFx ;

    jEqu = 0 ; while( jEqu<iEqu && ((FMMmat_P0+jEqu)->Src != FMMSrc || (FMMmat_P0+jEqu)->Obs != FMMObs)) jEqu ++ ;
    if ( jEqu < iEqu  && GFx->NbrParameters == 1 && GFx->Para[0] != _2D ){
      (FMMmat_P0 + iEqu)->T = (FMMmat_P0 + jEqu)->T ;
    }
    /* If the Source and Observation supports are the same for two Galerkin Terms, 
       the translation matrix is common */ 
    else {
      List_Read(Problem_S.FMMGroup, FMMSrc, &FMMGroup_S ) ;
      NbrGroupSrc = List_Nbr(FMMGroup_S.List ) ;
      FMMDataSrc_P0 = FMMDataObs_P0 =(struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;
      
      if ( FMMSrc != FMMObs ){
	List_Read(Problem_S.FMMGroup, FMMObs, &FMMGroup_S ) ;
	FMMDataObs_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List,0) ;   
      }
 
      T = (double***)Malloc(NbrGroupSrc*sizeof(double**)) ;
      for(i = 0 ; i < NbrGroupSrc ; i++){
	List_Read((FMMmat_P0+iEqu)->FG_L, i, &FG_L) ;	  
	NbrFG = List_Nbr(FG_L) ;
	List_Read((FMMmat_P0+iEqu)->Nd_L, i, &Nd_L) ;
	Nd_A = (int*)(Nd_L->array);
	T[i] = (double**)Malloc(NbrFG*sizeof(double*)) ;
	
	for (j = 0 ; j < NbrFG ; j++){
	  N = (GFx->NbrParameters==2) ? Nd_A[j] :
	    (((int)GFx->Para[0] == _2D) ? Nd_A[j]*Nd_A[j] : (2*Nd_A[j]-1)*(2*Nd_A[j]+1) ); 
	  T[i][j] = (double*)Malloc(2*N*sizeof(double)) ;
	}	
	
      }
      
      Current.FMM.Flag_GF = 3 ;

      for(i = 0 ; i < NbrGroupSrc ; i++){ /* i Origin */
	List_Read((FMMmat_P0+iEqu)->FG_L, i, &FG_L) ;	  
	List_Read((FMMmat_P0+iEqu)->Nd_L, i, &Nd_L) ;	  
	NbrFG = List_Nbr(FG_L) ;
	if(NbrFG){
	  FG = (int*)(FG_L->array) ;
	  Nd_A = (int*)(Nd_L->array) ;
	
	  Current.xs = (FMMDataSrc_P0+i)->Xgc ;
	  Current.ys = (FMMDataSrc_P0+i)->Ygc ;
	  Current.zs = (FMMDataSrc_P0+i)->Zgc ;
	  Current.FMM.Rsrc = (FMMDataSrc_P0+i)->Rmax ;
	  for (j = 0 ; j < NbrFG ; j++){ /* j Destination */
	    Current.FMM.NbrDir = Nd_A[j] ;
	    Current.x = (FMMDataObs_P0 + FG[j])->Xgc ;
	    Current.y = (FMMDataObs_P0 + FG[j])->Ygc ;
	    Current.z = (FMMDataObs_P0 + FG[j])->Zgc ;
	    Current.FMM.Robs = (FMMDataObs_P0 + FG[j])->Rmax ;
	    
	    ((void(*)(struct Function*, struct Value*, struct Value*)) GFx->Fct)(GFx, TV, TV) ;
	    
	    Cal_ValueArray2DoubleArray(TV, T[i][j], N) ;
	  }
	}
       	else T[i] = NULL ;
      } 
      (FMMmat_P0+iEqu)->T = T ;
    }
  }

  Current.FMM.NbrDir = NbrDirMAX ;
  Current.NbrHar = NbrHar ;
  Current.FMM.Flag_GF = DIRECT ;

  Msg(RESOURCES, "After translation ");

  GetDP_End ;
}



#define CAST3V    void(*)(struct Value*, struct Value*, struct Value*)
#define CASTF2V   void(*)(struct Function*, struct Value*, struct Value*)

/*-------------------------------------------------------------------------------*/
/*           C a l _ F M M G a l e r k i n D i s a g g r e g a t i o n           */
/*-------------------------------------------------------------------------------*/

void  Cal_FMMGalerkinDisaggregation(struct EquationTerm     * EquationTerm_P0,
				    struct QuantityStorage  * QuantityStorage_P0) {
  
  struct EquationTerm       * EquationTerm_P ;
  struct FemLocalTermActive * FI ;
  struct QuantityStorage    * QuantityStorageEqu_P, * QuantityStorageDof_P;
  struct IntegrationCase    * IntegrationCase_P ;
  struct Quadrature         * Quadrature_P ;
  struct Value                vBFxEquV ;
  struct Value                TermFct ;
  struct Value                GFValue [NBR_MAX_DIR],  BFGFValue [NBR_MAX_DIR] ;
  struct Element              Element ;
  struct FMMData            * FMMData_P0, * FMMData_P ; 
  struct FMMGroup             FMMGroup_S ;  
  struct FMMmat             * FMMmat_P0 , * FMMmat_P ;
  double                   ** Disagg_M ;
  List_T                    * NumEqu_L ;

  int     Nbr_Equ,  FMMObs, NbrFMMEqu, i_FMMEqu, NbrDir, i_FMM ;
  int     Nbr_Group, i_Group, Nbr_ElmsInGroup, i_Element, *ElmtsGr ;
  int     i, j, Type_Dimension, Nbr_IntPoints, i_IntPoint ;
  int     Nbr_EquList, NbrHar ;
  
  double  weight, Factor ;
  double  vBFuEqu [MAX_DIM], vBFxEqu [MAX_DIM] ;


  void (*xFunctionBFEqu[NBR_MAX_BASISFUNCTIONS])
    (struct Element * Element, int NumEntity, 
     double u, double v, double w, double Value[] ) ;
  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;
  void (*Get_IntPoint)(int,int,double*,double*,double*,double*);

  List_T * FMMIntegrationCaseEqu_L ;
  int      FMMCriterionIndexEqu ;


  GetDP_Begin("Cal_FMMGalerkinDisaggregation");

  Msg(INFO, "Creation Disaggregation matrices");

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  NbrDir = Current.FMM.N ; 
  NbrHar = Current.NbrHar ;

  Current.FMM.Type = SCALAR ;

  /* Watch out, the equations in the profile should be
     written so as to obtained a SCALAR, 
     the VECTOR possibility has not yet been implemented */

  Current.NbrHar = 2 ; /* FMM requires complex numbers, even with Laplace equation */

  for ( i_FMMEqu = 0 ; i_FMMEqu < NbrFMMEqu ; i_FMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + i_FMMEqu ;
    FMMmat_P->NbrCom = 1 ; 
    FMMObs = FMMmat_P->Obs ;
        
    EquationTerm_P = EquationTerm_P0 + FMMmat_P->EquTermIndex ;    
    FI = EquationTerm_P->Case.LocalTerm.Active ;

    QuantityStorageEqu_P = FI->QuantityStorageEqu_P ;
    QuantityStorageDof_P = FI->QuantityStorageDof_P ;

    if( EquationTerm_P->Case.LocalTerm.FMMIntegrationMethodIndex == -1 )
      EquationTerm_P->Case.LocalTerm.FMMIntegrationMethodIndex = EquationTerm_P->Case.LocalTerm.IntegrationMethodIndex ;

    FMMIntegrationCaseEqu_L = 
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
		    EquationTerm_P->Case.LocalTerm.FMMIntegrationMethodIndex))
      ->IntegrationCase ;

    FMMCriterionIndexEqu = 
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
		    EquationTerm_P->Case.LocalTerm.FMMIntegrationMethodIndex))
      ->CriterionIndex ;

    List_Read(Problem_S.FMMGroup, FMMObs, &FMMGroup_S ) ;   
    Nbr_Group  = List_Nbr(FMMGroup_S.List ) ;
   
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;   

    for ( i_Group = 0 ; i_Group < Nbr_Group ; i_Group++ ) {
      FMMData_P =  FMMData_P0 + i_Group ;
      Nbr_ElmsInGroup = List_Nbr(FMMData_P->Element);

      ElmtsGr = (int*)(FMMData_P->Element->array) ;

      List_Read(FMMmat_P->D_L, i_Group, &Disagg_M) ;
      List_Read(FMMmat_P->NumEqu, i_Group, &NumEqu_L) ;
      Nbr_EquList = List_Nbr(NumEqu_L) ;

      /* Initializing Disaggregation matrices */
      if (Disagg_M == NULL){
	Disagg_M = (double**)Malloc(Nbr_EquList*sizeof(double*)) ;
	for (j = 0 ; j < Nbr_EquList ; j++)
	  Disagg_M[j] = (double*)Calloc(2 * FMMmat_P->NbrCom * NbrDir, sizeof(double)) ;
      }

      Current.FMM.Xgc  = FMMData_P->Xgc ; /* FMM group center */
      Current.FMM.Ygc  = FMMData_P->Ygc ;
      Current.FMM.Zgc  = FMMData_P->Zgc ;
      Current.FMM.Robs = FMMData_P->Rmax ;

      for (i_Element = 0 ; i_Element < Nbr_ElmsInGroup ; i_Element++) {
	Element.GeoElement = Geo_GetGeoElementOfNum(ElmtsGr[i_Element]) ;
	Element.Num    = Element.GeoElement->Num ;
	Element.Type   = Element.GeoElement->Type ;
	Current.Region = Element.Region = Element.GeoElement->Region ;
	if (Element.GeoElement->FMMGroup != i_Group) Msg(ERROR, "Element.GeoElement->FMMGroup != i_Group");
	Element.FMMGroup = i_Group ;

	
	
	QuantityStorageEqu_P->NumLastElementForFunctionSpace = Element.Num ;
	Get_DofOfElement
	  (&Element, QuantityStorageEqu_P->FunctionSpace, QuantityStorageEqu_P,
 	   NULL) ;

	Get_NodesCoordinatesOfElement(&Element) ;
	Nbr_Equ = QuantityStorageEqu_P->NbrElementaryBasisFunction ;
	Get_FunctionValue(Nbr_Equ, (void (**)())xFunctionBFEqu,
			  EquationTerm_P->Case.LocalTerm.Term.TypeOperatorEqu,
			  QuantityStorageEqu_P, &FI->Type_FormEqu) ;
	
	Current.Element = &Element ; 
	Element.ElementSource = &Element ;
	Current.ElementSource = Element.ElementSource ;

	FI->xChangeOfCoordinatesEqu = 
	  (void (*)())Get_ChangeOfCoordinates(FI->Flag_ChangeCoord, FI->Type_FormEqu) ;

	i = 0 ;
	while ((i < FI->NbrJacobianCase) &&
	       ((j = (FI->JacobianCase_P0 + i)->RegionIndex) >= 0) &&
	       !List_Search
	       (((struct Group *)List_Pointer(Problem_S.Group, j))
		->InitialList, &Element.Region, fcmp_int) )  i++ ;

	if (i == FI->NbrJacobianCase)
	  Msg(ERROR, "Undefined Jacobian in Region %d", Element.Region);
	
	Element.JacobianCase = FI->JacobianCase_P0 + i ;
	
	Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
	  Get_JacobianFunction(Element.JacobianCase->TypeJacobian,
			       Element.Type, &Type_Dimension) ;

	if (FI->Flag_ChangeCoord)
	  Get_NodesCoordinatesOfElement(&Element) ;

	IntegrationCase_P =
	  Get_IntegrationCase(&Element, FMMIntegrationCaseEqu_L, FMMCriterionIndexEqu);

	switch (IntegrationCase_P->Type) {
	case GAUSS :  
	case GAUSSLEGENDRE :
	case NEWTONCOTES :
	  Quadrature_P = (struct Quadrature*)
	    List_PQuery(IntegrationCase_P->Case, &Element.Type, fcmp_int);
      
	  if(!Quadrature_P)
	    Msg(ERROR, "Unknown type of Element (%s) for Integration method (%s)",
		Get_StringForDefine(Element_Type, Element.Type),
		((struct IntegrationMethod *)
		 List_Pointer(Problem_S.IntegrationMethod,
			      EquationTerm_P->Case.LocalTerm.FMMIntegrationMethodIndex))->Name);
	  
	  Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
	  Get_IntPoint  = (void(*)(int,int,double*,double*,double*,double*))
	    Quadrature_P->Function ;
                 
	  for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {
	    Get_IntPoint(Nbr_IntPoints, i_IntPoint, 
			 &Current.u, &Current.v, &Current.w, &weight) ;
	
	    if (FI->Flag_ChangeCoord) {
	      Get_BFGeoElement(&Element, Current.u, Current.v, Current.w) ;

	      Element.DetJac = Get_Jacobian(&Element, &Element.Jac) ;
	      
	      if (FI->Flag_InvJac)
		Get_InverseMatrix(Type_Dimension, Element.Type, Element.DetJac,
				  &Element.Jac, &Element.InvJac) ;
	    }/* ChangeCoord */
	    
	    Current.x = Current.y = Current.z = 0. ;

	    for (i = 0 ; i < Element.GeoElement->NbrNodes ; i++) {
	      Current.x += Element.x[i] * Element.n[i] ;
	      Current.y += Element.y[i] * Element.n[i] ;
	      Current.z += Element.z[i] * Element.n[i] ;
	    }
	
	    Factor = (FI->Flag_ChangeCoord) ? weight * fabs(Element.DetJac) : weight ;

	    Current.FMM.Flag_GF = DISAGGREGATION ;
	    ((CASTF2V)QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FunctionForFMM.Fct)
	      (&QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FunctionForFMM, GFValue, GFValue ) ;
	    
	    Cal_ZeroValue(&TermFct);
	    Cal_TermsforDisaggregation( EquationTerm_P, QuantityStorage_P0, &TermFct ) ;
	    
	    /* Test Functions */		

	    for (i = 0 ; i < Nbr_Equ ; i++) {
	      if (QuantityStorageEqu_P->BasisFunction[i].Dof->Type == DOF_UNKNOWN){
		
		xFunctionBFEqu[i]
		  (&Element,
		   QuantityStorageEqu_P->BasisFunction[i].NumEntityInElement+1,
		   Current.u, Current.v, Current.w, vBFuEqu) ;
		
		((void (*)(struct Element*, double*, double*))
		 FI->xChangeOfCoordinatesEqu) (&Element, vBFuEqu, vBFxEqu) ;
		
		vBFxEquV.Type = Get_ValueFromForm(FI->Type_FormEqu) ;
		vBFxEquV.Val[0]         = vBFxEqu[0] * Factor ;
		vBFxEquV.Val[1]         = vBFxEqu[1] * Factor ;
		vBFxEquV.Val[2]         = vBFxEqu[2] * Factor ;
		vBFxEquV.Val[MAX_DIM]   = 0. ;
		vBFxEquV.Val[MAX_DIM+1] = 0. ;
		vBFxEquV.Val[MAX_DIM+2] = 0. ;
		
		switch(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity ){
		case CWQ_EXP_TIME_DOF :
		case CWQ_FCT_TIME_DOF :
		  Cal_ProductValue(&TermFct, &vBFxEquV, &vBFxEquV) ;
		  break ;
		case CWQ_FCT_PVEC_DOF :
		  Cal_CrossProductValue(&TermFct, &vBFxEquV, &vBFxEquV) ;
		  break ;
		default:
		  break ;
		}
		
		for (i_FMM = 0 ; i_FMM < NbrDir ; i_FMM++) 		
		  Cal_ProductValue(&vBFxEquV, &GFValue[i_FMM], &BFGFValue[i_FMM]);
	   
		j = List_ISearch(NumEqu_L, 
				 &QuantityStorageEqu_P->BasisFunction[i].Dof->Case.Unknown.NumDof, fcmp_int) ;
		
		if (j != -1) Cal_AddValueArray2DoubleArray(BFGFValue, Disagg_M[j], NbrDir) ; 
		else  Msg(ERROR, "Wrong NumEqu %d for Disagg",
			  QuantityStorageEqu_P->BasisFunction[i].Dof->Case.Unknown.NumDof) ;
		
	      }/* if DOF_UNKNOWN */      
	    } /* for i Nbr_Equ */
	  } /* for i_IntPoint ... */            
	  break ; /* case GAUSS/NEWTONCOTES */

	case ANALYTIC :
	  Current.FMM.Flag_GF = DISAGGREGATION ;
	  Cal_ZeroValue(&TermFct);
	  Cal_TermsforDisaggregation( EquationTerm_P, QuantityStorage_P0, &TermFct ) ;
	  GF_FMMLaplacexForm( &Element, QuantityStorageEqu_P, Nbr_Equ, (void (*)())xFunctionBFEqu, NumEqu_L, TermFct, Disagg_M );
	  break;
	}/*switch Integration_Case */	
      } /* i_Element */
      List_Write(FMMmat_P->D_L, i_Group, &Disagg_M) ;
    }/* i_Group */
 
  }/* i_FMMEqu */

  Current.FMM.Flag_GF = DIRECT ;
  Current.NbrHar = NbrHar ;

  GetDP_End ;
}


/*-------------------------------------------------------------------------------*/
/*           C a l _ T e r m s f o r D i s a g g r e g a t i o n                 */
/*-------------------------------------------------------------------------------*/

void Cal_TermsforDisaggregation( struct EquationTerm * EquationTerm_P,
				 struct QuantityStorage * QuantityStorage_P0,
				 struct Value *TermFct ){

  GetDP_Begin("Cal_TermsforDisaggregation") ;

  switch(EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity){
  case CWQ_EXP_TIME_DOF:
    Get_ValueOfExpression
      (Problem_Expression0 +
       EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical,
       QuantityStorage_P0, 0., 0., 0., 
       TermFct) ;
    break;
  case CWQ_FCT_TIME_DOF:
  case CWQ_FCT_PVEC_DOF:
    ((CASTF2V)EquationTerm_P->Case.LocalTerm.Term.FunctionForCanonical.Fct)
      (&EquationTerm_P->Case.LocalTerm.Term.FunctionForCanonical, TermFct, TermFct) ;
    break;
  default: break ; 
  }

  GetDP_End ;

}


/*-------------------------------------------------------------------------------*/
/*           C a l _ F M M G a l e r k i n A g g r e g a t i o n           */
/*-------------------------------------------------------------------------------*/

void  Cal_FMMGalerkinAggregation(struct EquationTerm     * EquationTerm_P0,
				 struct QuantityStorage  * QuantityStorage_P0) {
  
  struct EquationTerm       * EquationTerm_P ;
  struct FemLocalTermActive * FI ;
  struct QuantityStorage    * QuantityStorageEqu_P, * QuantityStorageDof_P ;
  struct IntegrationCase    * IntegrationCase_P ;
  struct Quadrature         * Quadrature_P ;
  struct Value                vBFxDofV ;
  struct Value                Val0 ;
  struct Value                GFValue [NBR_MAX_DIR],  BFGFValue [NBR_MAX_DIR] ;
  struct Element              Element ;
  struct FMMData            * FMMData_P0, * FMMData_P ; 
  struct FMMGroup             FMMGroup_S ;  
  struct FMMmat             * FMMmat_P0 , * FMMmat_P ;
  double                    ** Aggreg_M ;
  List_T                    * NumDof_L ;

  int     Nbr_Dof ;
  int     Nbr_Group, i_Group, Nbr_ElmsInGroup, i_Element, *ElmtsGr ;
  int     FMMSrc, NbrFMMEqu, i_FMMEqu, NbrDir, i_FMM ;
  int     i, j, k, Type_Dimension, Nbr_IntPoints, i_IntPoint ;
  int     Nbr_DofList, NbrHar ;
  
  double  weight, Factor ;
  double  vBFuDof [MAX_DIM], vBFxDof [MAX_DIM] ;


  void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
    (struct Element * Element, int NumEntity, 
     double u, double v, double w, double Value[] ) ;
  double (*Get_Jacobian)(struct Element*, MATRIX3x3*) ;
  void (*Get_IntPoint)(int,int,double*,double*,double*,double*);
  void   (*FunctionProd)() ;

  List_T * FMMIntegrationCaseDof_L ;
  int      FMMCriterionIndexDof ;


  GetDP_Begin("Cal_FMMGalerkinAggregation");

  Msg(INFO, "Creation Aggregation matrices");

  NbrFMMEqu = List_Nbr(Current.DofData->FMM_Matrix) ;
  FMMmat_P0 = (struct FMMmat*)List_Pointer(Current.DofData->FMM_Matrix, 0 ) ;
  NbrDir = Current.FMM.N ; 
  NbrHar = Current.NbrHar ;

  Current.FMM.Type = SCALAR ;

  /* Watch out, the equations in the profile should be
     written so as to obtained a SCALAR, 
     the VECTOR possibility has not yet been implemented */

  Current.NbrHar = 2 ; /* FMM requires complex numbers, even with Laplace equation */

  for ( i_FMMEqu = 0 ; i_FMMEqu < NbrFMMEqu ; i_FMMEqu ++ ){
    FMMmat_P = FMMmat_P0 + i_FMMEqu ;
    FMMmat_P->NbrCom = 1 ; 
    FMMSrc = FMMmat_P->Src ;
        
    EquationTerm_P = EquationTerm_P0 + FMMmat_P->EquTermIndex ;    
    FI = EquationTerm_P->Case.LocalTerm.Active ;

    QuantityStorageDof_P = FI->QuantityStorageDof_P ;

    if( FI->QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FMMIntegrationMethodIndex == -1 )
      FI->QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FMMIntegrationMethodIndex =
	FI->QuantityStorageDof_P->DefineQuantity->IntegralQuantity.IntegrationMethodIndex ;

    FMMIntegrationCaseDof_L= 
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
		    FI->QuantityStorageDof_P->DefineQuantity->
		    IntegralQuantity.FMMIntegrationMethodIndex)) ->IntegrationCase ;
      
    FMMCriterionIndexDof =
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
		    FI->QuantityStorageDof_P->DefineQuantity->
		    IntegralQuantity.FMMIntegrationMethodIndex)) ->CriterionIndex ;
    
      
    List_Read(Problem_S.FMMGroup, FMMSrc, &FMMGroup_S ) ;   
    Nbr_Group  = List_Nbr(FMMGroup_S.List ) ;
    FMMData_P0 = (struct FMMData*)List_Pointer(FMMGroup_S.List, 0) ;   

    for ( i_Group = 0 ; i_Group < Nbr_Group ; i_Group++ ) {
      FMMData_P =  FMMData_P0 + i_Group ;
      Nbr_ElmsInGroup = List_Nbr(FMMData_P->Element) ;
      
      ElmtsGr = (int*)(FMMData_P->Element->array) ;
      
      List_Read(FMMmat_P->A_L, i_Group, &Aggreg_M) ;
      List_Read(FMMmat_P->NumDof, i_Group, &NumDof_L) ;
      Nbr_DofList = List_Nbr(NumDof_L) ;
	
      if (Aggreg_M == NULL){		  
	Aggreg_M = (double**)Malloc(Nbr_DofList*sizeof(double*)) ;
	for (j = 0 ; j < Nbr_DofList ; j++)
	  Aggreg_M[j] = (double*)Calloc(2 * FMMmat_P->NbrCom * NbrDir, sizeof(double)) ;
      }
      
      Current.FMM.Xgc  = FMMData_P->Xgc ; /* FMM group center */
      Current.FMM.Ygc  = FMMData_P->Ygc ;
      Current.FMM.Zgc  = FMMData_P->Zgc ;
      Current.FMM.Rsrc = FMMData_P->Rmax ;

      for (i_Element = 0 ; i_Element < Nbr_ElmsInGroup ; i_Element++) {
	Element.GeoElement = Geo_GetGeoElementOfNum(ElmtsGr[i_Element]) ;
	Element.Num    = Element.GeoElement->Num ;
	Element.Type   = Element.GeoElement->Type ;
	Current.Region = Element.Region = Element.GeoElement->Region ;
	if (Element.GeoElement->FMMGroup != i_Group) Msg(ERROR, "Element.GeoElement->FMMGroup != i_Group");
	Element.FMMGroup = i_Group ;
	
	Current.Element = &Element ;
	Element.ElementSource = &Element ;
	Current.ElementSource = Element.ElementSource;
	
	QuantityStorageDof_P->NumLastElementForFunctionSpace = Element.Num ; 
	Get_DofOfElement
	  (&Element, QuantityStorageDof_P->FunctionSpace, QuantityStorageDof_P,
	   NULL) ;
	  
	Nbr_Dof = QuantityStorageDof_P->NbrElementaryBasisFunction ;
	  
	Get_FunctionValue(Nbr_Dof, (void (**)())xFunctionBFDof,
			  EquationTerm_P->Case.LocalTerm.Term.TypeOperatorDof,
			  QuantityStorageDof_P, &FI->Type_FormDof) ;
	  
	FI->xChangeOfCoordinatesDof =
	  (void (*)())Get_ChangeOfCoordinates(FI->Flag_ChangeCoord, FI->Type_FormDof) ;
	  
	i = 0 ;
	while ((i < FI->NbrJacobianCase) &&
	       ((j = (FI->JacobianCase_P0 + i)->RegionIndex) >= 0) &&
	       !List_Search
	       (((struct Group *)List_Pointer(Problem_S.Group, j))
		->InitialList, &Element.Region, fcmp_int) )  i++ ;
	
	if (i == FI->NbrJacobianCase)
	  Msg(ERROR, "Undefined Jacobian in Region %d", Element.Region);
	
	Element.JacobianCase = FI->JacobianCase_P0 + i ;
	
	Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
	  Get_JacobianFunction(Element.JacobianCase->TypeJacobian,
			       Element.Type, &Type_Dimension) ;
	
	if (FI->Flag_ChangeCoord)
	  Get_NodesCoordinatesOfElement(&Element) ;
	
	IntegrationCase_P =
	  Get_IntegrationCase(&Element, FMMIntegrationCaseDof_L, FMMCriterionIndexDof);
	  
	switch (IntegrationCase_P->Type) {
	case GAUSS :  
	case GAUSSLEGENDRE :
	case NEWTONCOTES :
	  Quadrature_P = (struct Quadrature*)
	    List_PQuery(IntegrationCase_P->Case, &Element.Type, fcmp_int);
	  
	  if(!Quadrature_P)
	    Msg(ERROR, "Unknown type of Element (%s) for Integration method (%s)",
		Get_StringForDefine(Element_Type, Element.Type),
		((struct IntegrationMethod *)
		 List_Pointer(Problem_S.IntegrationMethod,
			      FI->QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FMMIntegrationMethodIndex))->Name);
	  
	  Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
	  Get_IntPoint  = (void(*)(int,int,double*,double*,double*,double*))
	    Quadrature_P->Function ;
	  
	  for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {
	    Get_IntPoint(Nbr_IntPoints, i_IntPoint, 
			 &Current.us, &Current.vs, &Current.ws, &weight) ;
	    
	    if (FI->Flag_ChangeCoord) {
	      Get_BFGeoElement(&Element, Current.us, Current.vs, Current.ws) ;
	      
	      Element.DetJac = Get_Jacobian(&Element, &Element.Jac) ;
	      
	      if (FI->Flag_InvJac)
		Get_InverseMatrix(Type_Dimension, Element.Type, Element.DetJac,
				  &Element.Jac, &Element.InvJac) ;
	    }/* ChangeCoord */
	    
	    Current.xs = Current.ys = Current.zs = 0. ;
	    for (i = 0 ; i < Element.GeoElement->NbrNodes ; i++) {
	      Current.xs += Element.x[i] * Element.n[i] ;
	      Current.ys += Element.y[i] * Element.n[i] ;
	      Current.zs += Element.z[i] * Element.n[i] ;
	    }
	  

	    Factor = (FI->Flag_ChangeCoord) ? weight * fabs(Element.DetJac) : weight ;
	    
	    Cal_TermsforAggregation( QuantityStorageDof_P, Val0, &FunctionProd );
	    
	    Current.FMM.Flag_GF = AGGREGATION ;	
	    ((CASTF2V)QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FunctionForFMM.Fct)
	      (&QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FunctionForFMM, GFValue, GFValue ) ;
	    
	    for (i = 0 ; i < Nbr_Dof ; i++) {
	      if (QuantityStorageDof_P->BasisFunction[i].Dof->Type == DOF_UNKNOWN){
		xFunctionBFDof[i]
		  (&Element,
		   QuantityStorageDof_P->BasisFunction[i].NumEntityInElement+1,
		   Current.us, Current.vs, Current.ws, vBFuDof) ;
		
		((void (*)(struct Element*, double*, double*))
		 FI->xChangeOfCoordinatesDof) (&Element, vBFuDof, vBFxDof) ;
		
		vBFxDofV.Type = Get_ValueFromForm(FI->Type_FormDof) ;
		vBFxDofV.Val[0]         = vBFxDof[0] * Factor ;
		vBFxDofV.Val[1]         = vBFxDof[1] * Factor ;
		vBFxDofV.Val[2]         = vBFxDof[2] * Factor ;
		vBFxDofV.Val[MAX_DIM]   = 0. ;
		vBFxDofV.Val[MAX_DIM+1] = 0. ;
		vBFxDofV.Val[MAX_DIM+2] = 0. ;
		
		Apply_ConstantFactor(QuantityStorageDof_P, &vBFxDofV, &Val0) ;
		
		for (i_FMM = 0 ; i_FMM < NbrDir ; i_FMM++) 		
		  ((CAST3V)FunctionProd)(&vBFxDofV, &GFValue[i_FMM], &BFGFValue[i_FMM]) ;
		
		j = List_ISearch(NumDof_L, 
				 &QuantityStorageDof_P->BasisFunction[i].Dof->Case.Unknown.NumDof, fcmp_int) ;
		
		if (j != -1) Cal_AddValueArray2DoubleArray(BFGFValue, Aggreg_M[j], NbrDir) ; 
		else  Msg(ERROR, "Wrong NumEqu %d for Aggreg",
			  QuantityStorageDof_P->BasisFunction[i].Dof->Case.Unknown.NumDof) ;
		
	      }/* if DOF_UNKNOWN */      
	    } /* for i Nbr_Dof */
	    
	  } /* for i_IntPoint ... */
	  break ; /* case GAUSS/NEWTONCOTES */
	    
	case ANALYTIC :
	  Current.FMM.Flag_GF = AGGREGATION ;
	  Current.FMM.Flag_Normal = 0;
	  if(((CASTF2V)QuantityStorageDof_P->DefineQuantity->IntegralQuantity.FunctionForFMM.Fct)
	     == ((CASTF2V)GF_NPxGradLaplace))	   
	    Current.FMM.Flag_Normal = 1 ;
	  
	  
	  Cal_ZeroValue(&Val0);
	  Cal_TermsforAggregation( QuantityStorageDof_P, Val0, &FunctionProd );
	  GF_FMMLaplacexForm( &Element, QuantityStorageDof_P, Nbr_Dof, (void (*)())xFunctionBFDof, NumDof_L, Val0, Aggreg_M );
	  break;
	}/*switch Integration_Case */	 
	
      } /* i_Element */
      List_Write(FMMmat_P->A_L, i_Group, &Aggreg_M) ;
    }/* i_Group */

  }/* i_FMMEqu */

  Current.FMM.Flag_GF = DIRECT ;
  Current.NbrHar = NbrHar ;
  
  
  GetDP_End ;
}


/*-------------------------------------------------------------------------------*/
/*           C a l _ T e r m s f o r A g g r e g a t i o n                 */
/*-------------------------------------------------------------------------------*/

void Cal_TermsforAggregation( struct QuantityStorage * QuantityStorageDof_P,
			      struct Value Val0, void(**FunctionProd)()){

  struct WholeQuantity      * WholeQuantity_P0 ;


  GetDP_Begin("Cal_TermsForAggregation") ;


  WholeQuantity_P0 =
		(struct WholeQuantity*)List_Pointer(QuantityStorageDof_P->DefineQuantity->IntegralQuantity.WholeQuantity, 0) ;

  switch(QuantityStorageDof_P->DefineQuantity->IntegralQuantity.CanonicalWholeQuantity){
  case CWQ_GF :
    break ;
  case CWQ_GF_PSCA_DOF :
  case CWQ_GF_PVEC_DOF :
  case CWQ_DOF_PVEC_GF :	
    *FunctionProd = (WholeQuantity_P0+2)->Case.Operator.Function ;
    break ;
  case CWQ_GF_PSCA_EXP :
  case CWQ_GF_PVEC_EXP :
  case CWQ_EXP_PVEC_GF :
    *FunctionProd = (WholeQuantity_P0+2)->Case.Operator.Function ;
    Get_ValueOfExpression((struct Expression *)
			  List_Pointer(Problem_S.Expression,
				       QuantityStorageDof_P->DefineQuantity->IntegralQuantity.
				       ExpressionIndexForCanonical),
			  NULL, 0., 0., 0., &Val0) ;
    break ;
  case CWQ_EXP_TIME_GF_PSCA_DOF :
  case CWQ_EXP_TIME_GF_PVEC_DOF :
  case CWQ_EXP_PVEC_GF_PSCA_DOF :
  case CWQ_EXP_PVEC_GF_PVEC_DOF :
    *FunctionProd = (WholeQuantity_P0+4)->Case.Operator.Function ;
    Get_ValueOfExpression((struct Expression *)
			  List_Pointer(Problem_S.Expression,
				       QuantityStorageDof_P->DefineQuantity->IntegralQuantity.
				       ExpressionIndexForCanonical),
			  NULL, 0., 0., 0., &Val0) ;
    break;
  case CWQ_FCT_TIME_GF_PSCA_DOF :
  case CWQ_FCT_TIME_GF_PVEC_DOF :
  case CWQ_FCT_PVEC_GF_PSCA_DOF :
  case CWQ_FCT_PVEC_GF_PVEC_DOF :
    *FunctionProd = (WholeQuantity_P0+4)->Case.Operator.Function ;
    ((CASTF2V)QuantityStorageDof_P->DefineQuantity->IntegralQuantity.AnyFunction.Fct)
      (&QuantityStorageDof_P->DefineQuantity->IntegralQuantity.AnyFunction, &Val0, &Val0) ;	 
    break;
  default: Msg(ERROR, "Unknown type of Integral Quantity for FMM");
  }
  
  
  GetDP_End ;
  
} 



#undef CAST3V 
#undef CASTF2V




