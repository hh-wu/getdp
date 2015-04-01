// getdpOA macro_dyn.pro -msh macro.msh -sol MagDyn_a_hmm -pos Dyn_NL
Include "macro.dat" ;
Include "ListOfPoints.pro";
//=================================================================

SymmetryFactor  = 4 ;
AxialLength     = 1;
N               = n_smc * n_smc;

Group {
  Core          = Region[ CONDUCTOR ];
  Air           = Region[ AIR ];
  Inductor      = Region[ {INDUCTOR} ] ;
  Infinity      = Region[ {OMEGA_INF} ] ;

  Domain_S      = Region[ {Inductor} ] ;
  Domain_Inf    = Region[ {Infinity} ] ;
  Domain_NL     = Region[ {Core} ] ;
  Domain_L      = Region[ {Air, Domain_S, Domain_Inf} ] ;
  Domain_C      = Region[ {Core} ] ;
  Domain_CC     = Region[ {Air, Domain_S, Domain_Inf} ] ;
  Domain        = Region[ {Core, Air, Domain_S, Domain_Inf} ] ;
  Dirichlet_a0 = Region[ {GAMMA_INF} ] ;
}

Function {
  // Parameters for the electric linear law
  //=======================================
  sigmaIron         = 5e6;
  sigma[Core]       = sigmaIron;
  sigma_homog[Core] = sigmaIron;
  
  // Parameters for the magnetic linear law
  //=======================================
  mu0           = 4.e-7 * Pi;
  nu0           = 1./mu0;
  mur           = 1000 ;
  nu[Domain_L]  = 1./mu0 ;
  nuIron        = nu0/mur ;

  // Example of analytical nonlinear law
  //====================================
  aa            = 388;
  bb            = 0.3774;
  cc            = 2.97;
  nu_1a[]       = aa + bb * Exp[cc*SquNorm[$1]] ;
  dnudb2_1a[]   = bb *cc* Exp[cc*SquNorm[$1]] ;
  h_1a[]        = nu_1a[$1#1] * #1 ;
  dhdb_1a[]     = TensorDiag[1., 1., 1.] * nu_1a[$1#1] + 2*dnudb2_1a[#1] * SquDyadicProduct[#1]  ;
  dhdb_1a_NL[]  = 2*dnudb2_1a[$1#1] * SquDyadicProduct[#1]  ;

  If(Flag_NL == 0)
    nu[Domain_NL] = nuIron ;
    h[]           = nuIron * $1 ;
    dhdb[]        = TensorDiag[1., 1., 1.] * nuIron ;
    dhdb_NL[]     = TensorDiag[0., 0., 0.] ;
  EndIf
  If (Flag_NL != 0)
    h[Domain_NL]       = h_1a[$1];
    dhdb[Domain_NL]    = dhdb_1a[$1];
    nu[Domain_NL]      = nu_1a[$1];
    dhdb_NL[Domain_NL] = dhdb_1a_NL[$1];
  EndIf

  // Imposing the source
  //====================
  //Freq                = 50000;
  //Source_Amplitude    = 50e8;
  Ns[Domain_S]        = Source_Amplitude;
  js0[]               = Ns[] * Vector[-Y[], X[], 0]/SquNorm[Vector[X[], Y[], 0.0]] ;
  js[]                = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, 0.};

  // Defining temporal parameters of the problem
  //============================================
  T                   = 1./Freq;
  Omega               = 2 * Pi * Freq;
  NbT                 = 1./20.;
  time0               = 0. ;
  timemax             = T * NbT ;
  //NbSteps             = 100;
  dtime               = T/NbSteps ;
  theta_value         = 1;
  verbosity_mesh      = 0;

  // Defining criteria for the convergence of the scheme
  //====================================================
  Nb_max_iter         = 4;
  If (!Flag_NL)
    reltol            = 1e-5;
  EndIf
  If (Flag_NL)
    reltol            = 1e-5;
  EndIf  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
  stop_criterion    = reltol;
}

Jacobian {
  { Name JVol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name JSur ; Case { { Region All ; Jacobian Sur; } } }
}

Integration {
  { Name I1 ; Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle    ; NumberOfPoints  6 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  1 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
        }
      }
    }
  }
}

Constraint {

  { Name Gauge; Type Assign;
    Case {
      { Region Domain_CC; SubRegion Dirichlet_a0; Value 0.; }
    }
  }
} 

FunctionSpace {
  { Name Hcurl_a ; Type Form1 ;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_Edge; Support Domain; Entity EdgesOf[All, Not Dirichlet_a0]; }
     }
    Constraint {
      { NameOfCoef ae; EntityType EdgesOfTreeIn; EntitySubType StartingOn; NameOfConstraint Gauge; } 
    }
  }
  { Name Hcurl_a_dummy ; Type Form1 ;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_Edge; Support Domain; Entity NodesOf[All]; }
    }
    // Constraint { { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint MVP ; } }
  }
  { Name Hgrad_v_JL; Type Form0;
    BasisFunction { { Name sn; NameOfCoef vn; Function BF_Node; Support Domain; Entity NodesOf[All]; }
    }
  }
  { Name Hgrad_v_ML; Type Form0;
    BasisFunction { { Name sn; NameOfCoef vn; Function BF_Node; Support Domain; Entity NodesOf[All]; }
    }
  }
  { Name Hgrad_v_ME; Type Form0;
    BasisFunction { { Name sn; NameOfCoef vn; Function BF_Node; Support Domain; Entity NodesOf[All]; }
    }
  }
  { Name Hgrad_v_TE; Type Form0;
    BasisFunction { { Name sn; NameOfCoef vn; Function BF_Node; Support Domain; Entity NodesOf[All]; }
    }
  }
  { Name Hgrad_v_TED; Type Form0;
    BasisFunction { { Name sn; NameOfCoef vn; Function BF_Node; Support Domain; Entity NodesOf[All]; }
    }
  } 
}


Formulation {

  // NONLINEAR - single value b-h curve
  // ====================================================================

  { Name MagDyn_a_NL ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ]           ; In Domain_C ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ]          ; In Domain   ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL[ dhdb_NL[{d a}]* Dof{d a} , {d a} ] ; In Domain_NL; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ]                           ; In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
  { Name MagDyn_a_hmm_init_downscaling ; Type FemEquation ;
    Quantity {
      { Name a_dummy  ; Type Local ; NameOfSpace Hcurl_a_dummy ; }
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ Dof{d a_dummy} , {d a_dummy} ] ; In Domain ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[], CompX[{a}], CompY[{a}], CompZ[{a}], CompX[{d a}], CompY[{d a}], CompZ[{d a}], CompX[-Dt[{a}]], CompY[-Dt[{a}]], CompZ[-Dt[{a}]], CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], CompZ[Dt[{d a}]], $Time, $TimeStep ]{"hmm_downscale_b.py"} * Dof{d a_dummy} , {d a_dummy} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
    }
  }
  { Name MagDyn_a_hmm ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { DtDof[ sigma_homog[] * Dof{a} , {a} ]; In Domain_C; Jacobian JVol; Integration I1; }
      Galerkin { [ nu[] * Dof{d a}, {d a} ]; In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_h.py"}, {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_dhdb.py"} * Dof{d a} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }
  { Name MagDyn_a_hmm_GQ ; Type FemEquation ;
    Quantity {
      { Name JL_Interpolated  ; Type Local ; NameOfSpace Hgrad_v_JL; }
      { Name ML_Interpolated  ; Type Local ; NameOfSpace Hgrad_v_ML; }
      { Name ME_Interpolated  ; Type Local ; NameOfSpace Hgrad_v_ME; }
      { Name TE_Interpolated  ; Type Local ; NameOfSpace Hgrad_v_TE; }
      { Name TED_Interpolated  ; Type Local ; NameOfSpace Hgrad_v_TED; }
    }
    Equation {
      Galerkin { [ Dof{JL_Interpolated} , {JL_Interpolated } ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -CompXX[Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_joulelosses.py"}] , {JL_Interpolated } ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Dof{ML_Interpolated} , {ML_Interpolated } ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -CompXX[Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_magneticlosses.py"}] , {ML_Interpolated } ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Dof{ME_Interpolated} , {ME_Interpolated } ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -CompXX[Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_magneticenergy.py"}] , {ME_Interpolated } ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Dof{TE_Interpolated} , {TE_Interpolated } ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -CompXX[Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_totalenergy.py"}] , {TE_Interpolated } ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Dof{TED_Interpolated} , {TED_Interpolated } ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -CompXX[Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_totalenergydifference.py"}] , {TED_Interpolated } ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
    }
  } 
}

Resolution {
  { Name MagDyn_a_NL ;
    System {
      { Name AAA ; NameOfFormulation MagDyn_a_NL; }
    }
    Operation {
      CreateDirectory[Dir_Macro];
      InitSolution[AAA] ; SaveSolution[AAA] ;
      TimeLoopTheta[ time0, timemax, dtime, theta_value]{
        IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] {
          GenerateJac[AAA]; SolveJac[AAA];
        }
        SaveSolution[AAA];
      }
    }
  }


  { Name MagDyn_a_hmm ;
    System {
      { Name A ; NameOfFormulation MagDyn_a_hmm_init_downscaling ; }
      { Name B ; NameOfFormulation MagDyn_a_hmm_GQ ; }
      { Name C ; NameOfFormulation MagDyn_a_hmm ; }
    }
    Operation {
      CreateDirectory[Dir_Macro];
      CreateDirectory[Dir_Meso_Mesh];
      CreateDirectory[Dir_Meso_Comp];
      CreateDirectory[Dir_Meso];
      Evaluate[ Python[]{"hmm_initialize.py"} ];
      //===================================================
      // Begin: part of the code for solving local solution
      //===================================================
      For iP In {1:numPoints}
        proNum = data_num~{iP}; pointX = Position_X~{iP}; pointY = Position_Y~{iP}; pointZ = 0.0;
        Evaluate[ Python[proNum, pointX, pointY, pointZ]{"hmm_meso_addpoints.py"} ];
      EndFor
      Evaluate[ Python[verbosity_mesh]{"hmm_meso_mesh.py"} ];
      //===================================================
      // End: part of the code for solving local solution
      //===================================================
      //InitSolution[B];
      InitSolution[C];
      TimeLoopTheta[ time0, timemax, dtime, theta_value]{
        Evaluate[ Python[$Time, $TimeStep]{"hmm_updateTime.py"} ];
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor[]]{
          GenerateJac[A] ;
          Evaluate[ Python[1]{"hmm_compute_meso.py"} ];
          Evaluate[ Python[]{"hmm_print_JL.py"} ];
          Evaluate[ Python[]{"hmm_print_ME.py"} ];
          //GenerateJac[B] ; SolveJac[B] ;
          GenerateJac[C] ; SolveJac[C] ;
        }
        //SaveSolution[B];
        SaveSolution[C];
      //===================================================
      // Begin: part of the code for solving local solution
      //===================================================
        PostOperation[MagDyn_a_proj_exact];
        For iP In {1:numPoints}
          thisNum = data_num~{iP};
          Evaluate[ Python[thisNum, -1]{"hmm_downscale_b.py"} ];
        EndFor
        Evaluate[ Python[0]{"hmm_compute_meso.py"} ];
        //=================================================
        // End: part of the code for solving local solution
        //=================================================
      }
    }
  }
}


PostProcessing {

  // NONLINEAR
  //=================================================
  { Name MagDyn_a_NL ; NameOfFormulation MagDyn_a_NL ;
    PostQuantity {
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian JVol; } } }
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian JVol; } } }
      { Name h ; Value { Local { [ nu[] * {d a} ]; In Domain_L  ; Jacobian JVol; }
                         Local { [ nu[{d a}] * {d a} ]; In Domain_NL  ; Jacobian JVol; } } }
      { Name e ; Value { Local { [ -Dt[{a}] ]; In Domain_C ; Jacobian JVol; } } }
      { Name j ; Value { Local { [ -sigma[] * ( Dt[{a}] ) ]; In Domain_C ; Jacobian JVol; } } }
      { Name js; Value { Local { [ js[] ]; In Domain_S ; Jacobian JVol; } } }
      { Name sigma; Value { Local { [ sigma[] ]; In Domain_C ; Jacobian JVol; } } }
      { Name JouleLosses_Local ; Value { Local { [ sigma[] * SquNorm[Dt[{a}] ] ]; In Domain_C ; Jacobian JVol ; } } }
      { Name JouleLosses_Global; Value { Integral { [ sigma[] * SquNorm[Dt[{a}] ] ]; In Domain_C ; Jacobian JVol ; Integration I1 ; } } }
      { Name MagneticEnergy_Local; Value {
          Local { [ nu[] * {d a} * Dt[{d a}] ]; In Domain_L; Jacobian JVol; }
          Local { [ nu[{d a}] * {d a} * Dt[{d a}] ]; In Domain_NL; Jacobian JVol; } } }
      { Name MagneticEnergy_Global; Value {
          Integral { [ nu[] * {d a} * Dt[{d a}] ]; In Domain_L ; Jacobian JVol ; Integration I1 ; }
          Integral { [ nu[{d a}] * {d a} * Dt[{d a}] ]; In Domain_NL ; Jacobian JVol ; Integration I1 ; } } }        
    }
  }
  { Name MagDyn_a_hmm ; NameOfFormulation MagDyn_a_hmm ;
    Quantity {
      { Name a; Value { Local { [ {a} ]; In Domain; Jacobian JVol; } } }
      { Name b; Value { Local { [ {d a} ]; In Domain; Jacobian JVol; } } }
      { Name dt_b; Value { Local { [ Dt[{d a}] ]; In Domain; Jacobian JVol; } } }
      { Name h; Value { Local { [ nu[] * {d a} ]; In Domain_L; Jacobian JVol; }
                           Local { [ h [] ]; In Domain_NL; Jacobian JVol; } } }
      { Name e; Value { Local { [ -Dt[{a}] ]; In Domain_C; Jacobian JVol ; } } }
      { Name j; Value { Local { [ -sigma_homog[] * ( Dt[ {a} ] ) ]; In Domain_C ; Jacobian JVol; } } }
      { Name js; Value { Local { [ js[] ]; In Domain_S ; Jacobian JVol; } } }
      { Name sigma_homog; Value { Local { [ sigma_homog[] ]; In Domain_NL ; Jacobian JVol; } } }
      { Name JouleLosses_Macro_Local; Value { Local { [ sigma_homog[] * SquNorm[Dt[ {a} ] ] ]; In Domain_C ; Jacobian JVol ; } } }
      { Name JouleLosses_Macro_Global; Value { Integral { [ sigma_homog[] * SquNorm[Dt[{a}] ] ]; In Domain_C ; Jacobian JVol ; Integration I1 ; } } }
      { Name MagneticEnergy_Macro_Local; Value {
          Local { [ nu[] * {d a} * Dt[{d a}] ]; In Domain_L ; Jacobian JVol; }
          Local { [ nu[{d a}] * {d a} * Dt[{d a}] ]; In Domain_NL; Jacobian JVol; } } }
      { Name MagneticEnergy_Macro_Global; Value {
          Integral { [ nu[] * {d a} * Dt[{d a}] ]; In Domain_L ; Jacobian JVol; Integration I1; }
          Integral { [ nu[{d a}] * {d a} * Dt[{d a}] ]; In Domain_NL; Jacobian JVol; Integration I1; } } } 
    }
  }
  
  { Name MagDyn_a_hmm_GQ_upscaled ; NameOfFormulation MagDyn_a_hmm;
    Quantity {
      { Name MagneticEnergy_upscaled; Value {
          Integral { [ nu[] * {d a} * Dt[{d a}] ]; In Domain_L ; Jacobian JVol; Integration I1; }
          Integral { [ Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_magneticenergy.py"} ]; In Domain_NL; Jacobian JVol; Integration I1; } } }
      { Name JouleLosses_upscaled; Value {
          Integral { [ Python[ElementNum[], QuadraturePointIndex[] ]{"hmm_upscale_joulelosses.py"} ]; In Domain_NL; Jacobian JVol; Integration I1; } } }
    }
  }
  /*
  { Name MagDyn_a_hmm_GQ_upscaled ; NameOfFormulation MagDyn_a_hmm_GQ ;
    Quantity {
      { Name JL_Map_upscaled    ; Value { Local { [ {JL_Interpolated} ]    ; In Domain_NL ; Jacobian JVol ; } } }
      { Name ML_Map_upscaled    ; Value {
          Local { [ nu[{d a}] * {d a} * Dt[{d a}] ] ; In Domain_L  ; Jacobian JVol ; }
          Local { [ {ML_Interpolated} ]             ; In Domain_NL ; Jacobian JVol ; } } }
      { Name ME_Map_upscaled    ; Value { Local { [ {ME_Interpolated} ]    ; In Domain_NL ; Jacobian JVol ; } } }
      { Name TE_Map_upscaled    ; Value { Local { [ {TE_Interpolated} ]    ; In Domain_NL ; Jacobian JVol ; } } }
      { Name TED_Map_upscaled   ; Value { Local { [ {TED_Interpolated} ]   ; In Domain_NL ; Jacobian JVol ; } } }
      { Name JL_Homog_upscaled  ; Value { Integral { [ {JL_Interpolated} ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; } } }
      { Name ML_Homog_upscaled  ; Value { Integral { [ {ML_Interpolated} ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; } } }
      { Name ME_Homog_upscaled  ; Value { Integral { [ {JL_Interpolated} ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; } } }
      { Name TE_Homog_upscaled  ; Value { Integral { [ {JL_Interpolated} ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; } } }
      { Name TED_Homog_upscaled ; Value { Integral { [ {JL_Interpolated} ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; } } } 
    }
  }
  */
}

PostOperation {
  { Name MagDyn_a_NL ; NameOfPostProcessing MagDyn_a_NL ;
    Operation {
      Print[ a,  OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["a",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["h" ,ExtGmsh] ] ];
      Print[ e,  OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["e" ,ExtGmsh] ] ];
      Print[ j,  OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["j" ,ExtGmsh] ] ];
      Print[ js, OnElementsOf Domain_S, File StrCat[Dir_Macro,StrCat["js" ,ExtGmsh] ] ];
      Print[ sigma, OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["sigma" ,ExtGmsh] ] ];
      Print[ JouleLosses_Local,OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["JouleLosses_Local",ExtGmsh] ] ];
      Print[ JouleLosses_Global[Domain_C],OnGlobal, Format TimeTable, File StrCat[Dir_Macro,Sprintf("JouleLosses_Global_nl%g_f%g.dat", Flag_NL, Freq) ] ];
      Print[ MagneticEnergy_Local,OnElementsOf Domain, File StrCat[Dir_Macro,StrCat["MagneticEnergy_Local",ExtGmsh] ] ];
      Print[ MagneticEnergy_Global[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("MagneticEnergy_Global_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
    }
  }
  { Name MagDyn_a_hmm_LocalFields ; NameOfPostProcessing MagDyn_a_hmm;
    Operation {
      Print[ a,  OnElementsOf Domain, File StrCat[Dir_Macro,StrCat["a_hmm",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain, File StrCat[Dir_Macro,StrCat["b_hmm" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain, File StrCat[Dir_Macro,StrCat["h_hmm" ,ExtGmsh] ] ];
      Print[ e,  OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["e_hmm" ,ExtGmsh] ] ];
      Print[ j,  OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["j_hmm" ,ExtGmsh] ] ];
      Print[ js, OnElementsOf Domain_S, File StrCat[Dir_Macro,StrCat["js_hmm" ,ExtGmsh] ] ];
      Print[ sigma_homog, OnElementsOf Domain, File StrCat[Dir_Macro,StrCat["sigma_homog" ,ExtGmsh] ] ];
      Print[ JouleLosses_Macro_Local,OnElementsOf Domain_C, File StrCat[Dir_Macro,StrCat["JouleLosses_Macro_Local",ExtGmsh] ] ];
      Print[ JouleLosses_Macro_Global[Domain_C], OnGlobal, Format TimeTable, File StrCat[Dir_Macro,Sprintf("JouleLosses_Macro_Global_nl%g_f%g.dat", Flag_NL, Freq) ] ];
      Print[ MagneticEnergy_Macro_Local,OnElementsOf Domain, File StrCat[Dir_Macro,StrCat["MagneticEnergy_Macro_Local",ExtGmsh] ] ];
      Print[ MagneticEnergy_Macro_Global[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("MagneticEnergy_Macro_Global_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
    }
  }
  /*
  { Name MagDyn_a_hmm_GQ_upscaled ; NameOfPostProcessing MagDyn_a_hmm_GQ_upscaled ;
    Operation {
      Print[ JL_Map_upscaled, OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["JL_Homog" ,ExtGmsh] ] ]; 
      Print[ JL_Homog_upscaled[Domain_NL], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("JL_Homog%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ ML_Map_upscaled, OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["ML_Homog" ,ExtGmsh] ] ];
      Print[ ML_Homog_upscaled[Domain_NL], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("ML_Homog%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ ME_Map_upscaled, OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["ME_Homog" ,ExtGmsh] ] ];
      Print[ ME_Homog_upscaled[Domain_NL], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("ME_Homog%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ TE_Map_upscaled, OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["TE_Homog" ,ExtGmsh] ] ];
      Print[ TE_Homog_upscaled[Domain_NL], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("TE_Homog%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ TED_Map_upscaled, OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["TED_Homog" ,ExtGmsh] ] ];
      Print[ TED_Homog_upscaled[Domain_NL], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("TED_Homog%g_f%g.dat", Flag_NL, Freq) ] ] ;
    }
  } 
  */  
  { Name MagDyn_a_hmm_GQ ; NameOfPostProcessing MagDyn_a_hmm_GQ_upscaled ;
    Operation {
      Print[ MagneticEnergy_upscaled[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("MagneticEnergy_upscaled_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ JouleLosses_upscaled[Domain_C], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("JouleLosses_upscaled_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
    }
  }

  { Name MagDyn_a_hmm_LocalCuts; NameOfPostProcessing MagDyn_a_hmm;
    Operation {
      For iTS In {1:nTS}
      TS = listOfTS~{iTS};

      Print[ a, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["a_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ a, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["a_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ a, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["a_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ a, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["a_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ b, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ h, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ e, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["e_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ e, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["e_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ e, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["e_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ e, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["e_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      EndFor
    }
  }

  { Name MagDyn_a_proj_exact; NameOfPostProcessing MagDyn_a_hmm;
    Operation {
      For iP In {1:numPoints}
      Print[a   , OnPoint{Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("a_hmm_macro_cut%g", data_num~{iP}), ".txt"]], LastTimeStepOnly];
      Print[b   , OnPoint{Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("b_hmm_macro_cut%g", data_num~{iP}), ".txt"]], LastTimeStepOnly];
      Print[e   , OnPoint{Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("e_hmm_macro_cut%g", data_num~{iP}), ".txt"]], LastTimeStepOnly];
      Print[dt_b, OnPoint{Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("dt_b_hmm_macro_cut%g", data_num~{iP}), ".txt"]], LastTimeStepOnly];
      EndFor
    }
  }
}
