// getdp square2d_dyn_nlin.pro -msh square2d_.msh -sol MagDyn_a_t_NL -pos Dyn_NL -v 1
// getdp square2d_dyn_nlin.pro -msh square2d_.msh -sol MagDyn_a_t_Hyst -pos Dyn_Hyst -v 1

Include "reference.dat" ;

SymmetryFactor = 4 ;
AxialLength    = 1; 
N              = n_smc * n_smc;

Group {
  For k In {1:N}
    Iron~{k}          = #{(IRON+k-1)};
    Iron              += Region[{Iron~{k}}];
    SkinIron          += Region[{(SKINIRON+k-1)}];
  EndFor

  Isolation           = #ISOL;
  Ind                 = #IND;
  Air                 = #AIR;
  OuterBnd            = #OUTERBND;
  Omega_Inf           = #OMEGA_INF;

  SurfaceGe0          = #{MIDDLE, MIDDLE_IND};
  SurfaceSym          = #SYMMETRY_X0;
  SurfacesDirichletBC = Region[{SurfaceGe0, OuterBnd, SurfaceSym}];
  DomainS0            = Region[ {Ind} ];
  DomainL             = Region[ {Air, Ind, Isolation, Omega_Inf} ] ;
  DomainNL            = Region[ {Iron} ];
  DomainCC            = Region[ {Air, Ind, Isolation, Omega_Inf} ] ;
  DomainC             = Region[ {Iron} ];
  Domain              = Region[ {DomainC, DomainCC}] ;
}

Function {
  // Parameters for the electric linear law
  //=======================================
  sigmaIron           = 5e6;
  sigma[]             = sigmaIron;

  // Parameters for the magnetic linear law
  //=======================================
  mu0                 = 4.e-7*Pi;
  nu0                 = 1./mu0;
  nu[DomainL]         = nu0 ;
  
  // Parameters for Jiles-Atherton hysteresis model Gyselinks paper: Incorporation
  // of a Jiles-Atherton vector hysteresis model in 2D FE magnetic field computation
  //================================================================================
  Msat                = 1145220;
  aaa                 = 59.5;
  kkk                 = 99.2;
  ccc                 = 0.54;
  alpha                = 1.3e-4 ;
  hyst_FeSi           = { Msat, aaa, kkk, ccc, alpha};

  // Imposing the source
  //====================
  //Freq                = 50000;
  //Source_Amplitude    = 50e8;
  Ns[#{Ind}]          = Source_Amplitude;
  js0[]               = Ns[] * Vector[0, 0, 1] ;
  js[]                = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, 0.};

  // Defining temporal parameters of the problem 
  //============================================
  T                   = 1./Freq ;
  Omega               = 2 * Pi * Freq ;
  NbT                 = 1./5. ;
  time0               = 0. ; 
  timemax             = T * NbT ; 
  //NbSteps             = 100;
  dtime               = T/NbSteps ;
  theta_value         = 1;
  
  // Defining criteria for the convergence of the scheme
  //====================================================
  Nb_max_iter         = 30;
  reltol              = 1e-9;
  abstol              = 1e-9;
  relaxation_factor[] = ($Iteration < Nb_max_iter/2) ? 1: 0.3;
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
  { Name I ; Case {
      { Type Gauss ;
        Case {
          { GeoElement Triangle    ; NumberOfPoints  6 ; }
          { GeoElement Quadrangle  ; NumberOfPoints  7 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
        }
      }
    }
  }
}

Constraint {

  { Name MVP  ; Type Assign ;
    Case {
      { Region SurfacesDirichletBC ; Value 0. ; }
    }
  }

  { Name MVP_aux  ; Type Assign ;
    Case {
      { Region SurfacesDirichletBC ; Value 0. ; }
    }
  }


  { Name Current_2D  ; Type Assign ; // Zero net current in each lamination
    Case {
      For k In {1:N}
        { Region Iron~{k} ; Value 0. ; }
      EndFor
    }
  }

  { Name Voltage_2D  ; Type Assign ;
    Case {
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
  // Gradient of Electric scalar potential (2D)
  //===========================================
  { Name Hregion_u_2D ; Type Form1P ;
    BasisFunction {
      { Name sr ; NameOfCoef ur ; Function BF_RegionZ ;
        Support DomainC ; Entity DomainC ; }
    }
    GlobalQuantity {
      { Name U ; Type AliasOf        ; NameOfCoef ur ; }
      { Name I ; Type AssociatedWith ; NameOfCoef ur ; }
    }
    Constraint {
      { NameOfCoef U ; EntityType Region ; NameOfConstraint Voltage_2D ; }
      { NameOfCoef I ; EntityType Region ; NameOfConstraint Current_2D ; }
    }
  }
  { Name H_hysteresis ; Type Vector;
    BasisFunction {
      { Name sex ; NameOfCoef aex ; Function BF_VolumeX ; Support DomainNL ; Entity VolumesOf[ All ] ; }
      { Name sey ; NameOfCoef aey ; Function BF_VolumeY ; Support DomainNL ; Entity VolumesOf[ All ] ; }
      { Name sez ; NameOfCoef aez ; Function BF_VolumeZ ; Support DomainNL ; Entity VolumesOf[ All ] ; }
    }
  }
}


Formulation {

  // NONLINEAR - single value b-h curve
  // ====================================================================
  { Name MagDyn_a; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_2D ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_2D [I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_2D [U] ; }
      { Name h  ; Type Local  ; NameOfSpace H_hysteresis ; }

    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ]  ; In DomainL ; Jacobian JVol ; Integration I ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ]   ; In DomainC ; Jacobian JVol ; Integration I ; }
      Galerkin { [      sigma[] * Dof{ur}, {a} ]   ; In DomainC ; Jacobian JVol ; Integration I ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {ur} ]  ; In DomainC ; Jacobian JVol ; Integration I ; }
      Galerkin { [      sigma[] * Dof{ur}, {ur} ]  ; In DomainC ; Jacobian JVol ; Integration I ; }
      GlobalTerm { [ Dof{I} , {U} ]                ; In DomainC ; }

      Galerkin { [ -js[] , {a} ] ; In DomainS0     ; Jacobian JVol; Integration I ; }

      Galerkin { [ h_Jiles[ {h}[1], {d a}[1], {d a} ]{List[hyst_FeSi]}#7, {d a} ] ;
        In DomainNL ; Jacobian JVol ; Integration I ; }
      Galerkin { JacNL[ dhdb_Jiles[{h}, {d a}, {h}-{h}[1] ]{List[hyst_FeSi]} * Dof{d a} , {d a} ] ;
        In DomainNL ; Jacobian JVol ; Integration I ; }

      Galerkin { [ Dof{h}, {h} ]                   ; In DomainNL ; Jacobian JVol ; Integration I ; }
      Galerkin { [    -#7, {h} ]                   ; In DomainNL ; Jacobian JVol ; Integration I ; }

    }
  }
}

Resolution {
  { Name MagDyn_a ;
    System {
      { Name A; NameOfFormulation MagDyn_a; }
    }
    Operation {
      CreateDirectory[Dir_Ref];
      InitSolution[A] ; SaveSolution[A] ;
      TimeLoopTheta[ time0, timemax, dtime, theta_value]{
        IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] {
          GenerateJac[A]; SolveJac[A];
        }
        SaveSolution[A];
      }
    }
  }
}


PostProcessing {
  //=================================================
  // NONLINEAR
  //=================================================
  { Name MagDyn_a; NameOfFormulation MagDyn_a;
    PostQuantity {
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian JVol; } } }
      { Name az; Value { Local { [ CompZ[{a}] ]; In Domain ; Jacobian JVol; } } }
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian JVol; } } }
      { Name h ; Value {
          Local { [ nu[ {d a} ] * {d a} ]; In DomainL  ; Jacobian JVol; }
          Local { [ {h} ] ; In DomainNL ; Jacobian JVol ; } } }
      { Name j ; Value { Local { [ -sigma[] * ( Dt[ {a} ] + {ur} ) ]; In DomainC ; Jacobian JVol; } } }
      { Name jz; Value { Local { [ CompZ[ -sigma[] * ( Dt[ {a} ] + {ur} )] ]; In DomainC ; Jacobian JVol; } } }
      { Name js; Value { Local { [ js[] ]; In DomainS0 ; Jacobian JVol; } } }
      { Name U ; Value { Term { [ {U} ]; In DomainC ; } } }
      { Name I ; Value { Term { [ {I} ]; In DomainC ; } } }
      { Name JouleLossesMap; Value { Local { [ sigma[] * SquNorm[Dt[ {a} ] + {ur} ] ]; In DomainC ; Jacobian JVol ; } } }
      { Name JouleLosses; Value { Integral { [ sigma[] * SquNorm[Dt[{a}] + {ur} ] ]; In DomainC ; Jacobian JVol ; Integration I ; } } }
      { Name MagEnergy; Value {
          Integral { [ nu[ {d a} ] * {d a} * Dt[ {d a} ] ]; In DomainL ; Jacobian JVol ; Integration I ; }
          Integral { [ {h} * Dt[ {d a} ] ] ; In DomainNL ; Jacobian JVol ; Integration I ; } } } 
    }
  }
}

PostOperation {
  { Name MagDyn_a_LocalFields ; NameOfPostProcessing MagDyn_a;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["az",ExtGmsh] ] ];
      Print[ j,  OnElementsOf DomainC, File StrCat[Dir_Ref,StrCat["j" ,ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Ref,StrCat["h" ,ExtGmsh] ] ];
      Print[ JouleLossesMap,OnElementsOf DomainC , File StrCat[Dir_Ref,StrCat["JLMap",ExtGmsh] ] ];
    }
  }
  { Name MagDyn_a_GlobalQuantities ; NameOfPostProcessing MagDyn_a;
    Operation {
      Print[ MagEnergy[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Ref, Sprintf("MagEnergy_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ JouleLosses[Iron], OnGlobal, Format TimeTable, File StrCat[Dir_Ref, Sprintf("JL_nl%g_f%g.dat"       , Flag_NL, Freq) ] ] ;
    }
  }

  numPtsDiscret = 2000;
  { Name MagDyn_a_LocalCuts; NameOfPostProcessing MagDyn_a;    
    Operation {
      For iTS In {1:nTS}
      TS = listOfTS~{iTS};
      Print[ az, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["az_ref_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ az, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["az_ref_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ az, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["az_ref_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ az, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["az_ref_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ b, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["b_ref_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["b_ref_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["b_ref_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ b, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["b_ref_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

      Print[ h, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["h_ref_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["h_ref_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["h_ref_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ h, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["h_ref_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      EndFor
    }
  }
}

