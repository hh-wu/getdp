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
/*
#define FLAG_WARNING_INFO_INV         1
#define FLAG_WARNING_INFO_ROOTFINDING 2
#define FLAG_WARNING_INFO_MIN         3
#define FLAG_WARNING_DISP_INV         11
#define FLAG_WARNING_DISP_ROOTFINDING 12
#define FLAG_WARNING_STOP_INV         101
#define FLAG_WARNING_STOP_ROOTFINDING 102
#define FLAG_WARNING_ITER             100
*/
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
  FLAG_HOMO    = FLAG_HOMO00;

  If(FLAG_TANORLANG==1)
  // Material M25050A
    Ja   = 1.22;
    ha   = 65;
    Jb   = 0.;
    hb   = 0.;   
  EndIf
  If(FLAG_TANORLANG==2)
/* 
    // Material M23535A 
    Ja   = 0.595;
    ha   = 4100;
    Jb   = 1.375;
    hb   = 17.5;
/*/
/*    //team32_RD_z_anhyshift (abstract ISEM 2017)
    Ja   = 1.03838;  
    ha   = 16.9403; 
    Jb   = 0.600978; 
    hb   = 240.578; 
//*/
/*    //Double Langevin for team32_RD_z_anhyFab (new try)
    Ja=1.03643 ;
    ha=14.0374 ;
    Jb=0.549518 ; 
    hb=188.516; 
//*/
///*   //FH(xini=400) // NEW 1/9/2017
    Ja   = 0.792234;  
    ha   = 9.082095; 
    Jb   = 0.790993; 
    hb   = 137.121351; 
//*/
/* //TD
Ja   = 1.08427393613
ha   = 29.1025536684
Jb   = 0.572282990517
hb   = 399.474553851
*/
  EndIf
  If(N==3)
///*
  // Material M25050A
    Js_1  = 0.11;
    Js_2  = 0.8;
    Js_3  = 0.31;
    chi_1 = 0;
    chi_2 = 16;
    chi_3 = 47;
    w_1   = 0.090163934426230;
    w_2   = 0.655737704918033;
    w_3   = 0.254098360655738;
/*/

/*    //team32_RD_z_anhyshift (abstract ISEM 2017)
    chi_1 = 0*11.6413;
    chi_2 = 50.1413;
    chi_3 = 107.518;
    w_1   = 0.173524;
    w_2   = 0.591535;
    w_3   = 0.234941;
    Js_1  = w_1*(Ja+Jb);
    Js_2  = w_2*(Ja+Jb);
    Js_3  = w_3*(Ja+Jb);
//*/ 
/*    //FH(xini=400) // THIS IS PROBLEMATIC (CONVERGENCE PROBLEM ok now) (new try)
    chi_1 = 0.;
    chi_2 = 53.779614004;
    chi_3 = 233.384447699;
    w_1   = 0.1048; //+0.1 to converge
    w_2   = 0.817943263499; // -0.1 to converge
    w_3   = 0.0772371911006;
    Js_1  = w_1*(Ja+Jb);
    Js_2  = w_2*(Ja+Jb);
    Js_3  = w_3*(Ja+Jb);
//*/
/*    //FH(xini=400) // NEW 1/9/2017 (chamonix)
    chi_1 = 0.;
    chi_2 = 53.789872;
    chi_3 = 233.910892;
    w_1   = 0.0280702473932;
    w_2   = 0.896565361832;
    w_3   = 0.0753643907746;
    Js_1  = w_1*(Ja+Jb);
    Js_2  = w_2*(Ja+Jb);
    Js_3  = w_3*(Ja+Jb);
//*/
/*//FH(xini=400) TD // NEW 1/9/2017 (chamonix)
0 0.0565084014449 0.0
1 0.839372763961 65.418004
2 0.104118834594 246.564466
*/
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
  If(N==5)   //FH(xini=400) // NEW 1/9/2017
    chi_1 = 0.;
    chi_2 = 14.81413;
    chi_3 = 52.317547;
    chi_4 = 102.345013;
    chi_5 = 247.012801;
    w_1   = 0.028258057159;
    w_2   = 0.087100091228;
    w_3   = 0.702372713403;
    w_4   = 0.134380357677;
    w_5   = 0.0478887805338;
    Js_1  = w_1*(Ja+Jb);
    Js_2  = w_2*(Ja+Jb);
    Js_3  = w_3*(Ja+Jb);   
    Js_4  = w_4*(Ja+Jb);
    Js_5  = w_5*(Ja+Jb);

  /*//FH(xini=400) TD // NEW 1/9/2017
  0 0.0574009326857 0.0
  1 0.111924243476 16.835878
  2 0.576936798861 62.494953
  3 0.189127398303 123.191766
  4 0.0646106266745 259.419756*/
  EndIf

  If (N==3)
  param_EnergHyst={ dim, N,  
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
                    DELTA_0,
                    FLAG_HOMO
                   };
  EndIf

  If (N==5)
  param_EnergHyst={ dim, N,  
                    Ja, ha, Jb, hb, 
                    w_1, chi_1,
                    w_2, chi_2,
                    w_3, chi_3,
                    w_4, chi_4,
                    w_5, chi_5,
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
                    DELTA_0,
                    FLAG_HOMO
                   };
  EndIf

                   
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
  Label_FLAG_VARORDIFF="FLAG_VARORDIFF=2     --> full differential approach (hrk)";
  Label_FLAG_MINMETHOD ="...";
  EndIf
  If (FLAG_MINMETHOD == 1 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=1     --> steepest descent (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 11 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW steepest descent naive (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 22 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW conjugate Fletcher-Reeves (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 33 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW conjugate Polak-Ribiere (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 333 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW conjugate Polak-Ribiere+ (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 1999 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW conjugate Dai Yuan 1999 (p.85) (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 2005 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW conjugate Hager Zhang 2005 (p.161) (homemade)";
  EndIf
  If (FLAG_MINMETHOD == 77 && FLAG_VARORDIFF==1)
  Label_FLAG_MINMETHOD ="FLAG_MINMETHOD=11    --> NEW newton (homemade)";
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
  Printf["Dimension            --> %g",dim];
  Printf["Number of cells      --> %g",N];
  Printf["k   omega    kappa    "];
  For iSub In {1:N}
    Printf["%g   %g   %g   ",iSub,w~{iSub},chi~{iSub}];
  EndFor
  Printf[""];
  Printf[StrCat[Label_FLAG_TANORLANG]];
  Printf["Ja   ha   Jb   hb"];
  Printf["%g   %g   %g   %g",Ja,ha,Jb,hb];
  Printf[""];
  Printf[StrCat[Label_FLAG_VARORDIFF]];
  Printf[StrCat[Label_FLAG_INVMETHOD]];
  Printf[StrCat[Label_FLAG_ROOTFINDING1D]];
  Printf[StrCat[Label_FLAG_MINMETHOD]];
  Printf[StrCat[Label_FLAG_ANA]];
  Printf["FLAG_HOMO            --> %g",FLAG_HOMO];
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