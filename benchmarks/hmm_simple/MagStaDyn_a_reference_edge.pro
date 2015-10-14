DefineConstant[
  R_ = {"MagStaDyn_a_ref", Name "GetDP/1ResolutionChoices", Visible 1}
  C_ = {"-solve -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 1}
  P_ = {"maps", Name "GetDP/2PostOperationChoices", Visible 1}

  T = 1./Freq, // period
  Omega = 2 * Pi * Freq, // pulsation
  time0 = 0, // initial time
  timemax = T * NbT,
  dtime   = T/NbSteps,
  theta_value = 1, // implicit Euler
  reltol = 1e-6,
  tol_abs  = {1e-6,
    Name "Input/Absolute tolerance on nonlinear residual"},
  tol_rel = {1e-6,
    Name "Input/Relative tolerance on nonlinear residual"},
  visu = {0, Choices{0, 1}, AutoCheck 0,
    Name "Input/Visu", Label "Real-time visualization"}
];




Jacobian {
  { Name JVol ;
    Case {
      { Region Domain_Inf; Jacobian VolSphShell{Val_Rint, Val_Rext}; }
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name JSur;
    Case { { Region All ; Jacobian Sur; }
    }
  }
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

Group {
  If(!Flag_Dynamic)
    Surf_a_NoGauge = Region [ {Dirichlet_a_0} ] ;
  EndIf
  If(Flag_Dynamic)
    Surf_a_NoGauge = Region [ {Dirichlet_a_0, Skin_DomainC} ] ;
  EndIf
}

Constraint {
  { Name GaugeCondition_a ; Type Assign ;
    Case {
     If(Flag_TreeCotreeGauge==1)
       If(!Flag_Dynamic)
         { Region Domain ; SubRegion Surf_a_NoGauge ; Value 0. ; }
       EndIf
       If(Flag_Dynamic)
         { Region DomainCC ; SubRegion Surf_a_NoGauge ; Value 0. ; }
       EndIf
     EndIf
    }
  }
}

FunctionSpace {
  If(!Flag_3D)
    { Name Hcurl_a ; Type Form1P ;
      BasisFunction {
        { Name se; NameOfCoef ae ; Function BF_PerpendicularEdge; Support Domain ; Entity NodesOf[All] ; }
      }
      Constraint {
        { NameOfCoef ae; EntityType NodesOf; NameOfConstraint a; }
      }
    }
    // Gradient of Electric scalar potential (2D)
    { Name Hregion_u_2D; Type Form1P;
      BasisFunction {
        { Name sr; NameOfCoef ur; Function BF_RegionZ; Support DomainC; Entity DomainC; }
      }
      GlobalQuantity {
        { Name U; Type AliasOf       ; NameOfCoef ur; }
        { Name I; Type AssociatedWith; NameOfCoef ur; }
      }
      Constraint {
        { NameOfCoef U; EntityType Region; NameOfConstraint Voltage_2D; }
        { NameOfCoef I; EntityType Region; NameOfConstraint Current_2D; }
      }
    }
  EndIf

    //=======================================================================
    
  If(Flag_3D && Flag_TreeCotreeGauge)
    If(!Flag_Dynamic)
      { Name Hcurl_a; Type Form1;
        BasisFunction {
          { Name se;  NameOfCoef ae;  Function BF_Edge; Support Domain ;
            Entity EdgesOf[ All ]; }
        }
        Constraint {
          { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
          { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
            NameOfConstraint GaugeCondition_a ; }
        }
      }
    EndIf
    If(Flag_Dynamic)
      /*
      { Name Hcurl_a; Type Form1;
        BasisFunction {
          { Name se;  NameOfCoef ae;  Function BF_Edge; Support Domain; Entity EdgesOf[ All, Not DomainC ]; }
          { Name sec;  NameOfCoef aec;  Function BF_Edge; Support Domain; Entity EdgesOf[ DomainC ]; }
        }
        Constraint {
          { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
          { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a; }
          { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
            NameOfConstraint GaugeCondition_a ; }
        }
      }
      */
    { Name Hcurl_a; Type Form1;
    BasisFunction {
      { Name se;  NameOfCoef ae;  Function BF_Edge; Support Domain; Entity EdgesOf[ All, Not Skin_DomainC ]; }
      { Name sec;  NameOfCoef aec;  Function BF_Edge; Support Domain; Entity EdgesOf[ Skin_DomainC ]; }
    }
    Constraint {
      { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_a ; }
    }
  }
    EndIf
  EndIf


  If(Flag_3D && (Flag_TreeCotreeGauge == 0))
    { Name Hgrad_phi ; Type Form0 ;
      BasisFunction {
        { Name sn; NameOfCoef phin; Function BF_Node;
          Support Domain; Entity NodesOf[All, Not Skin_DomainC]; }
      }
      Constraint {
        { NameOfCoef phin; EntityType NodesOf; NameOfConstraint phi; }
      }
    }

    { Name Hcurl_a; Type Form1;
    BasisFunction {
      { Name se;  NameOfCoef ae;  Function BF_Edge; Support Domain ;
        Entity EdgesOf[ All, Not Skin_DomainC ]; }
      { Name sec;  NameOfCoef aec;  Function BF_Edge; Support Domain ;
        Entity EdgesOf[ Skin_DomainC ]; }
    }
    Constraint {
      { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a; }
      { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
        NameOfConstraint GaugeCondition_a ; }
    }
  }
  EndIf
}

Formulation {
  { Name MagStaDyn_a_ref; Type FemEquation ;
    Quantity {
      { Name a  ; Type Local  ; NameOfSpace Hcurl_a ; }
      If( (Flag_3D == 0) && Flag_Dynamic)
        { Name ur ; Type Local  ; NameOfSpace Hregion_u_2D ; }
        { Name I  ; Type Global ; NameOfSpace Hregion_u_2D [I] ; }
        { Name U  ; Type Global ; NameOfSpace Hregion_u_2D [U] ; }
      EndIf
      If(Flag_3D && (Flag_TreeCotreeGauge == 0))
        { Name phi ; Type Local  ; NameOfSpace Hgrad_phi ; }        
      EndIf
    }
    Equation {
      Galerkin { [ nu[{d a}] * Dof{d a} , {d a} ] ;
        In Domain ; Jacobian JVol ; Integration I ; }
      //Galerkin { JacNL[ dhdb_NL[{d a}]* Dof{d a} , {d a} ] ;
      //  In DomainNL ; Jacobian JVol ; Integration I ; }

      If(Flag_Dynamic)
        Galerkin { DtDof[ sigma[] * Dof{a} , {a} ] ;
          In DomainC ; Jacobian JVol ; Integration I ; }

        If(Flag_3D == 0)
          Galerkin { [ sigma[] * Dof{ur}, {a} ] ;
            In DomainC ; Jacobian JVol ; Integration I ; }
          Galerkin { DtDof[ sigma[] * Dof{a} , {ur} ] ;
            In DomainC ; Jacobian JVol ; Integration I ; }
          Galerkin { [ sigma[] * Dof{ur}, {ur} ] ;
            In DomainC ; Jacobian JVol ; Integration I ; }
          GlobalTerm { [ Dof{I} , {U} ] ;
            In DomainC ; }
        EndIf
        
        If( Flag_3D && (Flag_TreeCotreeGauge == 0))
          Galerkin { [ Dof{d phi} , {a} ];
            In DomainCC ; Jacobian JVol ; Integration I ; }
          Galerkin { [ Dof{a} , {d phi} ];
            In DomainCC ; Jacobian JVol ; Integration I ; }
        EndIf
        Galerkin { [ -js[], {a} ]; In DomainS0; Jacobian JVol; Integration I ; }
      EndIf
    }
  }
}

Resolution {
  { Name MagStaDyn_a_ref ;
    System {
      //{ Name J ; NameOfFormulation Projection_J; }
      { Name A ; NameOfFormulation MagStaDyn_a_ref; }
    }
    Operation {
      CreateDirectory[Dir_Ref];
      //=============================================================

      /*InitSolution[J] ; SaveSolution[J] ;
      TimeLoopTheta[ time0, timemax, dtime, theta_value]{
        //IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] {
        //  GenerateJac[J]; SolveJac[J];
        //}
        Generate[J]; Solve[J]; SaveSolution[J];
      }
      */
      //==============================================================
      If(Flag_Dynamic == 0)
        IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] {
          GenerateJac[A]; SolveJac[A];
        }
        SaveSolution[A];
      EndIf

      If(Flag_Dynamic)
        InitSolution[A] ; SaveSolution[A] ;
        TimeLoopTheta[ time0, timemax, dtime, theta_value]{
          IterativeLoop[Nb_max_iter, reltol, relaxation_factor[]] { //111 and 113
          //IterativeLoopN[Nb_max_iter, relaxation_factor[], System{ {A, reltol, reltol, Solution  MeanL2Norm } } ] { //112

            GenerateJac[A];
            //SolveJac[A]; // 111 and 112
            SolveJac_AdaptRelax[A, List[RelaxFac_Lin], TestAllFactors]; //113
          }
          SaveSolution[A];
          Test[ GetNumber[visu]{"Input/Visu"} ]{ PostOperation[maps]; }         
        }
      EndIf
    }
  }
}


PostProcessing {
  { Name MagStaDyn_a_ref ; NameOfFormulation MagStaDyn_a_ref ;
    PostQuantity {
      { Name a ; Value { Local { [ {a} ]; In Domain ; Jacobian JVol; } } }
      { Name a_nc ; Value { Local { [ {a} ]; In DomainCC ; Jacobian JVol; } } }
      { Name az; Value { Local { [ CompZ[{a}] ]; In Domain ; Jacobian JVol; } } }
      { Name sigma; Value { Local { [ sigma[] ]; In DomainC ; Jacobian JVol; } } }
      { Name b ; Value { Local { [ {d a} ]; In Domain ; Jacobian JVol; } } }
      { Name h ; Value { Local { [ nu[ {d a} ] * {d a} ]; In Domain  ; Jacobian JVol; } } }
      { Name js; Value {
          Local { [ js[] ]; In DomainS0 ; Jacobian JVol; } } }
      { Name MagEnergy ; Value { Integral { [ nu[ {d a} ] * {d a} * Dt[ {d a} ] ];
            In Domain ; Jacobian JVol ; Integration I ; } } }
      If(!Flag_3D)
        { Name j ; Value { Local { [ -sigma[] * ( Dt[ {a} ] + {ur} ) ];
              In DomainC ; Jacobian JVol; } } }
        { Name jz; Value { Local { [ CompZ[ -sigma[] * ( Dt[ {a} ] + {ur} )] ];
              In DomainC ; Jacobian JVol; } } }
        { Name U ; Value { Term { [ {U} ]; In DomainC ; } } }
        { Name I ; Value { Term { [ {I} ]; In DomainC ; } } }
        { Name JouleLossesMap ; Value { Local { [ sigma[] * SquNorm[Dt[ {a} ] + {ur} ] ];
              In DomainC ; Jacobian JVol ; } } }
        { Name JouleLosses    ; Value { Integral { [ sigma[] * SquNorm[Dt[{a}] + {ur} ] ];
              In DomainC ; Jacobian JVol ; Integration I ; } } }
      EndIf
      If(Flag_3D)
        { Name j ; Value { Local { [ -sigma[] * Dt[ {a} ] ]; In DomainC ; Jacobian JVol; } } }
        { Name JouleLossesMap ; Value { Local { [ sigma[] * SquNorm[Dt[ {a} ] ] ];
              In DomainC ; Jacobian JVol ; } } }
        { Name JouleLosses    ; Value { Integral { [ sigma[] * SquNorm[Dt[{a}]] ];
              In DomainC ; Jacobian JVol ; Integration I ; } } }
      EndIf
        If(Flag_3D && (!Flag_TreeCotreeGauge))
        { Name phi ; Value { Local { [ {phi} ]; In DomainC ; Jacobian JVol; } } }
        { Name dphi ; Value { Local { [ {d phi} ]; In DomainC ; Jacobian JVol; } } }
      EndIf
    }
  }
}

ncuts = n_smc;
ndeltacuts_x = 3;
numPtsDiscret = 2000;
PostOperation {
  { Name maps ; NameOfPostProcessing MagStaDyn_a_ref ;
    Operation {
      Print[ az, OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["az",ExtGmsh] ] ];
      Print[ a,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["a" ,ExtGmsh] ] ];
      Print[ a_nc,  OnElementsOf DomainCC,  File StrCat[Dir_Ref,StrCat["a_nc" ,ExtGmsh] ] ];
      Print[ sigma,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["sigma" ,ExtGmsh] ] ];
      Print[ b,  OnElementsOf Domain,  File StrCat[Dir_Ref,StrCat["b" ,ExtGmsh] ] ];
      Print[ h,  OnElementsOf Domain , File StrCat[Dir_Ref,StrCat["h" ,ExtGmsh] ] ];
      Print[ js,  OnElementsOf DomainS0 , File StrCat[Dir_Ref,StrCat["js" ,ExtGmsh] ] ];
      Print[ j,  OnElementsOf DomainC, File StrCat[Dir_Ref,StrCat["j" ,ExtGmsh] ] ];
      Print[ JouleLossesMap,OnElementsOf DomainC , File StrCat[Dir_Ref,StrCat["JLMap",ExtGmsh] ] ];
    }
  }

  { Name globalquantities ; NameOfPostProcessing MagStaDyn_a_ref ;
    Operation {
      Print[ MagEnergy[Domain], OnGlobal, Format TimeTable,
        File StrCat[Dir_Ref, Sprintf("MagEnergy_nl%g_f%g.dat", Flag_NL, Freq) ] ] ;
      Print[ JouleLosses[Iron], OnGlobal, Format TimeTable,
        File StrCat[Dir_Ref, Sprintf("JL_nl%g_f%g.dat"       , Flag_NL, Freq) ] ] ;
    }
  }

  { Name cuts; NameOfPostProcessing MagStaDyn_a_ref ;
    Operation {
      For iTS In {1:nTS}
      TS = listOfTS~{iTS};
      For i In {1:ncuts:ndeltacuts_x}
      Print[ az, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
        Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["az_ref_cut%g_TS%g", i, TS], ExtData ] ],
        TimeStep{TS}];
      Print[ a, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
        Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["a_ref_cut%g_TS%g", i, TS], ExtData ] ],
        TimeStep{TS}];
      Print[ a_nc, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
        Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["a_nc_ref_cut%g_TS%g", i, TS], ExtData ] ],
        TimeStep{TS}];
      Print[ b, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
        Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["b_ref_cut%g_TS%g", i, TS], ExtData ] ],
        TimeStep{TS}];
      Print[ h, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
        Format Table, File StrCat[Dir_Ref, StrCat[Sprintf["h_ref_cut%g_TS%g", i, TS], ExtData ] ],
        TimeStep{TS}];
      EndFor
      EndFor
    }
  }
}

