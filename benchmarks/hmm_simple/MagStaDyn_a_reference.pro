
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
}


Formulation {
  // ====================================================================
  // NONLINEAR - single value b-h curve
  // ====================================================================

  { Name MagDyn_a; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
      { Name ur ; Type Local  ; NameOfSpace Hregion_u_2D ; }
      { Name I  ; Type Global ; NameOfSpace Hregion_u_2D [I] ; }
      { Name U  ; Type Global ; NameOfSpace Hregion_u_2D [U] ; }
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ]  ; In Domain ; Jacobian JVol ; Integration I ; }
      Galerkin { JacNL[ dhdb_NL[{d a}]* Dof{d a} , {d a} ] ; In DomainNL ; Jacobian JVol ; Integration I ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {a} ]   ; In DomainC ; Jacobian JVol ; Integration I ; }
      Galerkin { [      sigma[] * Dof{ur}, {a} ]   ; In DomainC ; Jacobian JVol ; Integration I ; }

      Galerkin { DtDof[ sigma[] * Dof{a} , {ur} ]  ; In DomainC ; Jacobian JVol ; Integration I ; }
      Galerkin { [      sigma[] * Dof{ur}, {ur} ]  ; In DomainC ; Jacobian JVol ; Integration I ; }
      GlobalTerm { [ Dof{I} , {U} ]                ; In DomainC ; }

      Galerkin { [ -js[] , {a} ] ; In DomainS0     ; Jacobian JVol; Integration I ; }
    }
  }
}

Resolution {
  { Name MagDyn_a ;
    System {
      { Name A ; NameOfFormulation MagDyn_a; }
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
  { Name MagDyn_a ; NameOfFormulation MagDyn_a ;
    PostQuantity {
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian JVol; } } }
      { Name az; Value { Local { [ CompZ[{a}] ]; In Domain ; Jacobian JVol; } } }
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian JVol; } } }
      { Name h ; Value { Local { [ nu[ {d a} ] * {d a} ]; In Domain  ; Jacobian JVol; } } }
      { Name j ; Value { Local { [ -sigma[] * ( Dt[ {a} ] + {ur} ) ]; In DomainC ; Jacobian JVol; } } }
      { Name jz; Value { Local { [ CompZ[ -sigma[] * ( Dt[ {a} ] + {ur} )] ]; In DomainC ; Jacobian JVol; } } }
      { Name js; Value { Local { [ js[] ]; In DomainS0 ; Jacobian JVol; } } }
      { Name U ; Value { Term { [ {U} ]; In DomainC ; } } }
      { Name I ; Value { Term { [ {I} ]; In DomainC ; } } }
      { Name JouleLossesMap ; Value { Local { [ sigma[] * SquNorm[Dt[ {a} ] + {ur} ] ]; In DomainC ; Jacobian JVol ; } } }
      { Name JouleLosses    ; Value { Integral { [ sigma[] * SquNorm[Dt[{a}] + {ur} ] ]; In DomainC ; Jacobian JVol ; Integration I ; } } }
      { Name MagEnergy      ; Value { Integral { [ nu[ {d a} ] * {d a} * Dt[ {d a} ] ]; In Domain ; Jacobian JVol ; Integration I ; } } } 
    }
  }
}

PostOperation {
  { Name maps ; NameOfPostProcessing MagDyn_a ;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["az",ExtGmsh] ] ];
      Print[ j,  OnElementsOf DomainC, File StrCat[Dir_Ref,StrCat["j" ,ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Ref,StrCat["h" ,ExtGmsh] ] ];
      Print[ JouleLossesMap,OnElementsOf DomainC , File StrCat[Dir_Ref,StrCat["JLMap",ExtGmsh] ] ];
    }
  }
  { Name globalquantities ; NameOfPostProcessing MagDyn_a ;
    Operation {
      Print[ MagEnergy[Domain], OnGlobal, Format TimeTable, File StrCat[Dir_Ref, Sprintf("MagEnergy_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ JouleLosses[Iron], OnGlobal, Format TimeTable, File StrCat[Dir_Ref, Sprintf("JL_nl%g_f%g.dat"       , Flag_NL, Freq) ] ] ;
    }
  }

  numPtsDiscret = 2000;
  { Name cuts; NameOfPostProcessing MagDyn_a ;    
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

