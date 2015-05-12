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
  mur                 = 1000 ;
  nuIron              = nu0/mur ;

  // Example of analytical nonlinear law
  //====================================
  aa                  = 388; 
  bb                  = 0.3774; 
  cc                  = 2.97;
  nu_1a[]             = aa + bb * Exp[cc*SquNorm[$1]] ; // $1 => b ={d a}
  dnudb2_1a[]         = bb *cc* Exp[cc*SquNorm[$1]] ;
  h_1a[]              = nu_1a[$1#1] * #1 ;
  dhdb_1a[]           = TensorDiag[1,1,1] * nu_1a[$1#1] + 2*dnudb2_1a[#1] * SquDyadicProduct[#1]  ;
  dhdb_1a_NL[]        = 2*dnudb2_1a[$1#1] * SquDyadicProduct[#1]  ;

  //Defining the magnetic law
  //=========================
  nu[DomainL] = 1./mu0 ;
  If(Flag_NL==0) // For testing purposes
    nu[DomainNL]       = nuIron ;
    h[]               = nu[] * $1 ;
    dhdb[]            = nu[] * TensorDiag[1., 1., 1.] ;
    dhdb_NL[]         = nu[] * TensorDiag[0., 0., 0.] ;
  EndIf
  
  If (Flag_NL==1)
    h[]               = h_1a[$1];
    dhdb[]            = dhdb_1a[$1];
    nu[#{Iron}]       = nu_1a[$1];
    dhdb_NL[]         = dhdb_1a_NL[$1];
  EndIf

  // Imposing the source
  //====================
  //Freq                = 50000;
  //Source_Amplitude    = 50e8;
  Ns[#{Ind}]          = Source_Amplitude;
  js0[]               = Ns[] * Vector[-Y[], X[], 0]/SquNorm[Vector[X[], Y[], 0.0]] ;
  js[]                = js0[] * F_Sin_wt_p[]{2 * Pi * Freq, 0.};

  // Defining temporal parameters of the problem 
  //============================================
  T                   = 1./Freq ;
  Omega               = 2 * Pi * Freq ;
  NbT                 = 1./20. ;
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

  { Name Gauge; Type Assign;
    Case {
      { Region DomainCC; SubRegion OuterBnd; Value 0.; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_a ; Type Form1 ;
    BasisFunction {
      { Name se  ; NameOfCoef ae  ; Function BF_Edge ;
        Support Domain ; Entity EdgesOf[All, Not OuterBnd] ; }
     }
    Constraint {
      //{ NameOfCoef ae; EntityType EdgesOf; NameOfConstraint a; }
      { NameOfCoef ae; EntityType EdgesOfTreeIn; EntitySubType StartingOn; NameOfConstraint Gauge; }
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
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ]  ; In Domain ; Jacobian JVol ; Integration I ; }
      Galerkin { JacNL[ dhdb_NL[{d a}]* Dof{d a} , {d a} ] ; In DomainNL ; Jacobian JVol ; Integration I ; }
      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ]   ; In DomainC ; Jacobian JVol ; Integration I ; }
      Galerkin { [ -js[] , {a} ] ; In DomainS0     ; Jacobian JVol; Integration I ; }
    }
  }
}

Resolution {
  { Name MagDyn_a_NL ;
    System {
      { Name A ; NameOfFormulation MagDyn_a_NL ; }
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
  { Name MagDyn_a_NL ; NameOfFormulation MagDyn_a_NL ;
    PostQuantity {
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian JVol; } } }
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian JVol; } } }
      { Name h ; Value { Local { [ nu[ {d a} ] * {d a} ]; In Domain  ; Jacobian JVol; } } }
      { Name j ; Value { Local { [ -sigma[] * ( Dt[ {a} ] ) ]; In DomainC ; Jacobian JVol; } } }
      { Name js; Value { Local { [ js[] ]; In DomainS0 ; Jacobian JVol; } } }
      { Name sigma; Value { Local { [ sigma[] ]; In Domain ; Jacobian JVol; } } }
      { Name JouleLossesMap ; Value { Local { [ sigma[] * SquNorm[Dt[ {a} ] ] ]; In DomainC ; Jacobian JVol ; } } }
      { Name JouleLosses    ; Value { Integral { [ sigma[] * SquNorm[Dt[{a}] ] ]; In DomainC ; Jacobian JVol ; Integration I ; } } }
      { Name MagEnergy      ; Value { Integral { [ nu[ {d a} ] * {d a} * Dt[ {d a} ] ]; In Domain ; Jacobian JVol ; Integration I ; } } } 
    }
  }
}

PostOperation {
  { Name MagDyn_a_NL_LocalFields ; NameOfPostProcessing MagDyn_a_NL ;
    Operation {
      Print[ a,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["a",ExtGmsh] ] ];
      Print[ j,  OnElementsOf DomainC, File StrCat[Dir_Ref,StrCat["j" ,ExtGmsh] ] ];
      Print[ js, OnElementsOf DomainS0, File StrCat[Dir_Ref,StrCat["js" ,ExtGmsh] ] ];
      Print[ sigma, OnElementsOf Domain, File StrCat[Dir_Ref,StrCat["sigma" ,ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["h" ,ExtGmsh] ] ];
      Print[ JouleLossesMap,OnElementsOf DomainC , File StrCat[Dir_Ref,StrCat["JLMap",ExtGmsh] ] ];
    }
  }
  { Name MagDyn_a_NL_GlobalQuantities ; NameOfPostProcessing MagDyn_a_NL ;
    Operation {
      Print[ MagEnergy[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Ref, Sprintf("MagEnergy_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ JouleLosses[Iron], OnGlobal, Format TimeTable, File StrCat[Dir_Ref, Sprintf("JL_nl%g_f%g.dat"       , Flag_NL, Freq) ] ] ;
    }
  }

  numPtsDiscret = 2000;
  { Name MagDyn_a_NL_LocalCuts; NameOfPostProcessing MagDyn_a_NL ;    
    Operation {
      For iTS In {1:nTS}
      TS = listOfTS~{iTS};
      Print[ a, OnLine{ {25e-6 , 0., 0.}{25e-6 , 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["a_ref_cut1_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ a, OnLine{ {175e-6, 0., 0.}{175e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["a_ref_cut2_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ a, OnLine{ {325e-6, 0., 0.}{325e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["a_ref_cut3_TS%g", TS], ExtData ] ], TimeStep{TS} ];
      Print[ a, OnLine{ {475e-6, 0., 0.}{475e-6, 500e-6, 0.} } {numPtsDiscret}, Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["a_ref_cut4_TS%g", TS], ExtData ] ], TimeStep{TS} ];

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

