// getdp macro_dyn.pro -msh macro.msh -sol MagDyn_a_hmm -pos Dyn_NL
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
  Domain        = Region[ {Core, Air, Domain_S, Domain_Inf} ] ;
  Dirichlet_a_0 = Region[ {GAMMA_INF} ] ;
}

Function {
  // Parameters for the electric linear law
  //=======================================
  //sigmaIron     = 5e6;
  //sigma[Core]   = sigmaIron;

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
  Ns[Domain_S]        = -Source_Amplitude;
  js0[]               = Ns[] * Vector[0., 0., 1.] ;
  js[]                = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, 0.};

  // Defining temporal parameters of the problem 
  //============================================
  T                   = 1./Freq;
  Omega               = 2 * Pi * Freq;
  NbT                 = 1./20.;
  time0               = 0. ; 
  timemax             = T * NbT ; 
  dtime               = T/NbSteps ;
  theta_value         = 1;
  
  // Defining criteria for the convergence of the scheme
  //====================================================
  Nb_max_iter         = 15;
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
  { Name MVP  ; Type Assign ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_a ; Type Form1P ;
    BasisFunction {
      { Name se  ; NameOfCoef ae  ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf[All] ; }
     }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint MVP ; }
    }
  }
  { Name Hcurl_a_dummy ; Type Form1P ;
    BasisFunction {
      { Name se ; NameOfCoef ae ; Function BF_PerpendicularEdge ;
        Support Domain ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef ae ; EntityType NodesOf ; NameOfConstraint MVP ; }
    }
  }
}


Formulation {
  // ====================================================================
  // NONLINEAR - single value b-h curve
  // ====================================================================

  { Name MagDyn_a_NL ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ]          ; In Domain   ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL[ dhdb_NL[{d a}]* Dof{d a} , {d a} ] ; In Domain_NL ; Jacobian JVol ; Integration I1 ; }
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
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[], CompZ[{a}], CompX[{d a}], CompY[{d a}], CompX[-Dt[{a}]], CompY[-Dt[{a}] ], CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], $Time, $TimeStep ]{"hmm_downscale_b_dyn.py"} * Dof{d a_dummy} , {d a_dummy} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
    }
  }
  { Name MagDyn_a_hmm ; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a}, {d a} ] ;
        In Domain_L ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_h.py"}, {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { JacNL [ Python[ElementNum[], QuadraturePointIndex[]]{"hmm_upscale_dhdb.py"} * Dof{d a} , {d a} ] ;
        In Domain_NL ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -js[] , {a} ] ;
        In Domain_S ; Jacobian JVol ; Integration I1 ; }
    }
  }

}

Resolution {
  { Name MagDyn_a_NL ;
    System {
      { Name A ; NameOfFormulation MagDyn_a_NL; }
    }
    Operation {
      CreateDirectory[Dir_Macro];
      InitSolution[A] ; SaveSolution[A] ;
      TimeLoopTheta[ time0, timemax, dtime, theta_value]{
        IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] {
          GenerateJac[A]; SolveJac[A];
        }
        SaveSolution[A];
      }
    }
  }


  { Name MagDyn_a_hmm ;
    System {
      { Name B ; NameOfFormulation MagDyn_a_hmm_init_downscaling ; }
      { Name C ; NameOfFormulation MagDyn_a_hmm ; }
    }
    Operation {
      CreateDirectory[Dir_Macro];
      CreateDirectory[Dir_Meso_Comp];
      CreateDirectory[Dir_Meso];
      Evaluate[ Python[]{"hmm_initialize_dyn.py"} ];
      //===================================================
      // Begin: part of the code for solving local solution
      //===================================================
      Evaluate[ Python[cellSize, numPoints]{"hmm_initialize_exact_dyn.py"} ];
      For iP In {1:numPoints}
        proNum = data_num~{iP}; pointX = Position_X~{iP}; pointY = Position_Y~{iP}; pointZ = 0.0;
        Evaluate[ Python[proNum, pointX, pointY, pointZ]{"hmm_meso_addpoints.py"} ];
      EndFor  
      Evaluate[ Python[]{"hmm_meso_mesh.py"} ];        
      //===================================================
      // End: part of the code for solving local solution
      //===================================================
      //InitSolution[B]; InitSolution[C];
      InitSolution[C];
      TimeLoopTheta[ time0, timemax, dtime, theta_value]{
        Evaluate[ Python[$Time, $TimeStep]{"hmm_updateTime_dyn.py"} ];
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor[]]{
          GenerateJac[B] ;
          Evaluate[ Python[]{"hmm_compute_meso_dyn.py"} ];
          GenerateJac[C] ; SolveJac[C] ;
        }
        SaveSolution[C];
      //===================================================
      // Begin: part of the code for solving local solution
      //===================================================
      For iP In {1:numPoints}
        thisNum = data_num~{iP};
        PostOperation[MagDyn_a_proj_exact~{iP}];
        Evaluate[ Python[thisNum]{"hmm_downscale_b_exact_dyn.py"} ];
      EndFor                 
      Evaluate[ Python[]{"hmm_compute_meso_exact_dyn.py"} ];
      //===================================================
      // End: part of the code for solving local solution
      //===================================================
      }
    }
  }
}


PostProcessing {
  //=================================================
  // NONLINEAR
  //=================================================
  { Name MagDyn_a_NL ; NameOfFormulation MagDyn_a_NL ;
    PostQuantity {
      { Name a  ; Value { Local { [ {a} ]            ; In Domain ; Jacobian JVol; } } }
      { Name az ; Value { Local { [ CompZ[{a}] ]     ; In Domain ; Jacobian JVol; } } }

      { Name b ; Value { Local { [ {d a} ]           ; In Domain ; Jacobian JVol; } } }
      { Name h ; Value { Local { [ nu[{d a}]*{d a} ] ; In Domain  ; Jacobian JVol; } } }

      { Name MagEnergy ; Value {
          Integral { [ nu[{d a}] * {d a} * Dt[{d a}] ] ; In Domain ; Jacobian JVol ; Integration I1 ; } } }
    }
  }
  { Name MagDyn_a_hmm ; NameOfFormulation MagDyn_a_hmm ;
    Quantity {
      { Name az   ; Value { Local { [ CompZ[{a}] ]        ; In Domain   ; Jacobian JVol ; } } }
      { Name a    ; Value { Local { [ {a} ]               ; In Domain   ; Jacobian JVol ; } } }

      { Name b    ; Value { Local { [ {d a} ]             ; In Domain   ; Jacobian JVol ; } } }
      { Name dt_b ; Value { Local { [ Dt[ {d a} ] ]       ; In Domain   ; Jacobian JVol ; } } }
      { Name h    ; Value { Local { [ nu[] * {d a} ] ; In Domain_L ; Jacobian JVol ; }
                          Local { [ h[ {d a}] ]         ; In Domain_NL; Jacobian JVol ; } } }

      { Name MagEnergy ; Value {
          Integral { [ nu[{d a}] * {d a} * Dt[{d a}] ] ; In Domain ; Jacobian JVol ; Integration I1 ; } } }
    }
  }
}

PostOperation {
  { Name MagDyn_a_NL ; NameOfPostProcessing MagDyn_a_NL ;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["az_hmm",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["b_hmm" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["h_hmm" ,ExtGmsh] ] ];
      Print[ MagEnergy[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("MagEnergy_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
    }
  }

  { Name MagDyn_a_hmm_LocalFields ; NameOfPostProcessing MagDyn_a_hmm;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["az",ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Macro,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Macro,StrCat["h" ,ExtGmsh] ] ];
    }
  }

  { Name MagDyn_a_hmm_GlobalQuantites ; NameOfPostProcessing MagDyn_a_hmm ;
    Operation {
      Print[ MagEnergy[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Macro, Sprintf("MagEnergy_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
    }
  }

  For iTS In {1:nTS}
  TS = listOfTS~{iTS};
  { Name MagDyn_a_hmm_LocalCuts~{iTS} ; NameOfPostProcessing MagDyn_a_hmm;
    Operation {
      Print[ az, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["az_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ az, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["az_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ az, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["az_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ az, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["az_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ b, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ h, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {200}, Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_hmm_macro_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];
    }
  }
  EndFor
  For iP In {1:numPoints}
  { Name MagDyn_a_proj_exact~{iP} ; NameOfPostProcessing MagDyn_a_hmm;
    Operation {
      Print[ az, OnPoint {Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("az_hmm_macro_cut%g", data_num~{iP}), ".txt" ] ], LastTimeStepOnly ];
      Print[ b , OnPoint {Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("b_hmm_macro_cut%g" , data_num~{iP}), ".txt" ] ], LastTimeStepOnly  ];
      Print[ dt_b , OnPoint {Position_X~{iP}, Position_Y~{iP}, 0.0}, Format Table, File StrCat[Dir_Meso_Comp, StrCat[Sprintf("dt_b_hmm_macro_cut%g" , data_num~{iP}), ".txt" ] ], LastTimeStepOnly  ];
    }
  }
  EndFor
}

