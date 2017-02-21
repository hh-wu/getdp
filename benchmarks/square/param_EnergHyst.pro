Include "param_EnergHyst.dat";

Function {
 
  dim = dim00;
  N   = N00; //nbr de cercle

  FLAG_TANORLANG = FLAG_TANORLANG00; 
/* 
FLAG_TANORLANG = 1 --> hyperbolic tangent
FLAG_TANORLANG = 2 --> double langevin function
*/
  FLAG_VARORDIFF = FLAG_VARORDIFF00; 
/*
FLAG_VARORDIFF = 1 --> variational approach (Jk)
FLAG_VARORDIFF = 2 --> simple differential approach (hrk)
FLAG_VARORDIFF = 3 --> full differential approach (hrk)
*/
  FLAG_INVMETHOD = FLAG_INVMETHOD00; 
/*
FLAG_INVMETHOD = 1 --> NR_ana (homemade)
FLAG_INVMETHOD = 2 --> NR_num (homemade)
FLAG_INVMETHOD = 3 --> bfgs (homemade)
FLAG_INVMETHOD = 4 --> hybridsj (gsl)
FLAG_INVMETHOD = 5 --> hybridj (gsl)
FLAG_INVMETHOD = 6 --> newton (gsl)
FLAG_INVMETHOD = 7 --> gnewton (gsl)
*/
  FLAG_ROOTFINDING1D = FLAG_ROOTFINDING1D00; 
/*
FLAG_ROOTFINDING1D  = 0 --> Not done
FLAG_ROOTFINDING1D  = 1 --> (1D minimization) golden section (gsl)
FLAG_ROOTFINDING1D  = 2 --> (1D minimization) brent (gsl)
FLAG_ROOTFINDING1D  = 3 --> (1D minimization) quad golden (gsl)
FLAG_ROOTFINDING1D  = 4 --> (1D root bracketing) bisection (gsl)
FLAG_ROOTFINDING1D  = 5 --> (1D root bracketing) brent (gsl)
FLAG_ROOTFINDING1D  = 6 --> (1D root bracketing) falsepos (gsl)
FLAG_ROOTFINDING1D  = 7 --> (1D root finding with derivatives) newton (gsl)
FLAG_ROOTFINDING1D  = 8 --> (1D root finding with derivatives) secant (gsl)
FLAG_ROOTFINDING1D  = 9 --> (1D root finding with derivatives) steffenson (gsl)
*/
  FLAG_MINMETHOD = FLAG_MINMETHOD00; 
/*
FLAG_MINMETHOD = 1 --> steepest descent (homemade)
FLAG_MINMETHOD = 2 --> conjugate fr (gsl)
FLAG_MINMETHOD = 3 --> conjugate pr (gsl)
FLAG_MINMETHOD = 4 --> bfgs2 (gsl)
FLAG_MINMETHOD = 5 --> bfgs (gsl)
FLAG_MINMETHOD = 6 --> steepest descent (gsl)
*/

  FLAG_WARNING = FLAG_WARNING00 ;     // SHOW WARNING 
  TOLERANCE_JS = TOLERANCE_JS00;  // SENSITIVE_PARAM (1.e-3) // 1.e-4 
  TOLERANCE_0  = TOLERANCE_000;  // SENSITIVE_PARAM (1.e-7)
  TOLERANCE_NR = TOLERANCE_NR00;  // SENSITIVE_PARAM (1.e-7) // 1.e-8 needed for diff with NR,1.e-5  
  MAX_ITER_NR  = MAX_ITER_NR00;    // SENSITIVE_PARAM (200)
  TOLERANCE_OM = TOLERANCE_OM00; // SENSITIVE_PARAM (1.e-11)// 1.e-15 allows to work for square if TOLERANCE_NJ=1.e-3 & DELTA_0=1.e-5 for numjac)
  MAX_ITER_OM  = MAX_ITER_OM00;    // SENSITIVE_PARAM (700)
  FLAG_ANA     = FLAG_ANA00;      // SENSITIVE_PARAM (0='only numerical jacobian')
  TOLERANCE_NJ = TOLERANCE_NJ00;  // SENSITIVE_PARAM (1.e-5 for square;
                        //                  1.e-3 for VinchT.pro & transfo.pro)
  DELTA_0      = DELTA_000;  // SENSITIVE_PARAM (1.e-3 for square; 
                        //                  1.e0 for VinchT & transfo)

  If(FLAG_TANORLANG==1)
    Ja   = 1.22;
    ha   = 65;
    Jb   = 0.;
    hb   = 0.;   
  EndIf
  If(FLAG_TANORLANG==2)
    Ja   = 0.595;
    ha   = 4100;
    Jb   = 1.375;
    hb   = 17.5;
  EndIf


  If(N==3)
    Js_1  = 0.11;
    Js_2  = 0.8;
    Js_3  = 0.31;
    chi_1 = 0;
    chi_2 = 16;
    chi_3 = 47;
    w_1   = 0.090163934426230;
    w_2   = 0.655737704918033;
    w_3   = 0.254098360655738;
  EndIf
  If(N==1)
    Js_1  = 1;
    Js_2  = 0.;
    Js_3  = 0.;    
    chi_1 = 0.;
    chi_2 = 0.;
    chi_3 = 0.;
    w_1   = 1.;
    w_2   = 0.;
    w_3   = 0.;
  EndIf

  param_EnergHyst={ dim,N,  
                    Ja, ha, Jb, hb, 
                    w_1, chi_1,
                    w_2, chi_2,
                    w_3, chi_3,
                    FLAG_INVMETHOD,
                    FLAG_ROOTFINDING1D, 
                    FLAG_VARORDIFF, 
                    FLAG_MINMETHOD,
                    FLAG_TANORLANG,
                    FLAG_WARNING,
                    TOLERANCE_JS,
                    TOLERANCE_0,
                    TOLERANCE_NR,
                    MAX_ITER_NR,
                    TOLERANCE_OM,
                    MAX_ITER_OM,
                    FLAG_ANA,
                    TOLERANCE_NJ,
                    DELTA_0
                   };
                   
//*******************************************************************
// DISPLAY PARAMETERS SETTING
//*******************************************************************
Label_FLAG_INVMETHOD="...";
Label_FLAG_ROOTFINDING1D="...";
Label_FLAG_TANORLANG="...";
Label_FLAG_VARORDIFF="...";
Label_FLAG_MINMETHOD="...";
Label_FLAG_ANA="...";
  If (FLAG_INVMETHOD == 1)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=1     --> NR_ana (homemade)";
  EndIf
  If (FLAG_INVMETHOD == 2)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=2     --> NR_num (homemade)";
  EndIf
  If (FLAG_INVMETHOD == 3)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=3     --> bfgs (homemade)";
  EndIf
  If (FLAG_INVMETHOD == 4)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=4     --> hybridsj (gsl)";
  EndIf
  If (FLAG_INVMETHOD == 5)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=5     --> hybridj (gsl)";
  EndIf
  If (FLAG_INVMETHOD == 6)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=6     --> newton (gsl)";
  EndIf
  If (FLAG_INVMETHOD == 7)
  Label_FLAG_INVMETHOD="FLAG_INVMETHOD=7     --> gnewton (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 0 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=0 --> not done";
  EndIf
  If(FLAG_ROOTFINDING1D == 1 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=1 --> (1D minimization) golden section (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 2 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=2 --> (1D minimization) brent (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 3 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=3 --> (1D minimization) quad golden (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 4 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=4 --> (1D root bracketing) bisection (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 5 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=5 --> (1D root bracketing) brent (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 6 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=6 --> (1D root bracketing) falsepos (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 7 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=7 --> (1D root finding with derivatives) newton (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 8 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=8 --> (1D root finding with derivatives) secant (gsl)";
  EndIf
  If(FLAG_ROOTFINDING1D == 9 && FLAG_INVMETHOD != 0)
  Label_FLAG_ROOTFINDING1D="FLAG_ROOTFINDING1D=9 --> (1D root finding with derivatives) steffenson (gsl)";
  EndIf
  If (FLAG_TANORLANG == 1)
  Label_FLAG_TANORLANG="FLAG_TANORLANG=1     --> tangent hyperbolic";
  EndIf
  If (FLAG_TANORLANG == 2)
  Label_FLAG_TANORLANG="FLAG_TANORLANG=2     --> double langevin function";
  EndIf
  If (FLAG_VARORDIFF == 1)
  Label_FLAG_VARORDIFF="FLAG_VARORDIFF=1     --> variational approach (Jk)";
  EndIf
  If (FLAG_VARORDIFF == 2)
  Label_FLAG_VARORDIFF="FLAG_VARORDIFF=2     --> simple differential approach (hrk)";
  Label_FLAG_MINMETHOD ="...";
  EndIf
  If (FLAG_VARORDIFF == 3)
  Label_FLAG_VARORDIFF="FLAG_VARORDIFF=3     --> full differential approach (hrk)";
  Label_FLAG_MINMETHOD ="...";
  EndIf
  If (FLAG_MINMETHOD == 1 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=1     --> steepest descent (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 2 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=2     --> conjugate fr (gsl)";
  EndIf
  If (FLAG_MINMETHOD == 3 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=3     --> conjugate pr (gsl)";
  EndIf
  If (FLAG_MINMETHOD == 4 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=4     --> bfgs2 (gsl)";
  EndIf
  If (FLAG_MINMETHOD == 5 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=5     --> bfgs (gsl)";
  EndIf
  If (FLAG_MINMETHOD == 6 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=6     --> steepest descent (gsl)";
  EndIf
  If (FLAG_ANA ==0)
  Label_FLAG_ANA ="FLAG_ANA=0           --> dJkdh computed numerically";
  EndIf
  If (FLAG_ANA ==1)
  Label_FLAG_ANA ="...";
  EndIf

Printf["------------------------------------------------------------"];
Printf["Number of cells      --> %g",N];
Printf[""];
Printf[StrCat[Label_FLAG_TANORLANG]];
Printf[StrCat[Label_FLAG_VARORDIFF]];
Printf[StrCat[Label_FLAG_INVMETHOD]];
Printf[StrCat[Label_FLAG_ROOTFINDING1D]];
Printf[StrCat[Label_FLAG_MINMETHOD]];
Printf[StrCat[Label_FLAG_ANA]];
Printf[""];
Printf["TOLERANCE_JS         --> %g",TOLERANCE_JS];
Printf["TOLERANCE_0          --> %g",TOLERANCE_0];
Printf[""];
Printf["TOLERANCE_NR         --> %g",TOLERANCE_NR];
Printf["MAX_ITER_NR          --> %g",MAX_ITER_NR];
If(FLAG_VARORDIFF==1)
Printf["TOLERANCE_NJ         --> %g",TOLERANCE_NJ];
Printf["DELTA_0              --> %g",DELTA_0];
Printf[""];
Printf["TOLERANCE_OM         --> %g",TOLERANCE_OM];
Printf["MAX_ITER_OM          --> %g",MAX_ITER_OM];
EndIf
Printf["------------------------------------------------------------"];
}