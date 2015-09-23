Jacobian {
  { Name Vol; Case { { Region All; Jacobian Vol; } } }
  { Name Sur; Case { { Region All; Jacobian Sur; } } }
}

Integration {
  { Name II; Case {
      {Type Gauss;
        Case {
	  { GeoElement Line; NumberOfPoints 4; }
          { GeoElement Triangle; NumberOfPoints 4; }
          { GeoElement Quadrangle; NumberOfPoints 4; }
        }
      }
    }
  }
}

Group {
  If(!Flag_Dynamic)
    Surf_a_NoGauge = Region [ {GammaLeft, GammaRight, GammaUp, GammaDown} ];
  EndIf
  If(Flag_Dynamic)
    Surf_a_NoGauge = Region [ {GammaLeft, GammaRight, GammaUp, GammaDown,
        Skin_Omega_C} ] ;
  EndIf
}

Constraint {
  { Name GaugeCondition_a ; Type Assign ;
    Case {
      If(!Flag_Dynamic)
        { Region Omega ; SubRegion Surf_a_NoGauge ; Value 0. ; }
      EndIf
      If(Flag_Dynamic)
        { Region Omega_CC ; SubRegion Surf_a_NoGauge ; Value 0. ; }
      EndIf
    }
  }
}
FunctionSpace{
    If(!Flag_3D)
      { Name Hcurl_a_Meso; Type Form1P;
        BasisFunction{
          { Name sn; NameOfCoef an; Function BF_PerpendicularEdge;
            Support Omega; Entity NodesOf[ All ]; }
        }
        Constraint {
          { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso; }
          { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso_Init; }
        }
      }
      // Gradient of Electric scalar potential (2D)
      { Name Hregion_u_2D; Type Form1P;
        BasisFunction {
          { Name sr; NameOfCoef ur; Function BF_RegionZ;
            Support Omega_C; Entity Omega_C; }
        }
        GlobalQuantity {
          { Name U; Type AliasOf; NameOfCoef ur; }
          { Name I; Type AssociatedWith; NameOfCoef ur; }
        }
        Constraint {
          { NameOfCoef U;
            EntityType Region; NameOfConstraint Voltage_2D; }
          { NameOfCoef I;
            EntityType Region; NameOfConstraint Current_2D; }
        }
      }
    EndIf
    If(Flag_3D && !Flag_Dynamic)
      { Name Hcurl_a_Meso; Type Form1;
        BasisFunction {
          { Name se;  NameOfCoef ae;  Function BF_Edge; Support Omega ;
            Entity EdgesOf[ All ]; }
        }
        Constraint {
          { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a_Meso; }
          { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
            NameOfConstraint GaugeCondition_a ; }
        }
      }
    EndIf
    If(Flag_3D && Flag_Dynamic)
      { Name Hcurl_a_Meso; Type Form1;
        BasisFunction {
          { Name se;  NameOfCoef ae;  Function BF_Edge; Support Omega ;
            Entity EdgesOf[ All, Not Omega_C ]; }
          { Name sec;  NameOfCoef aec;  Function BF_Edge; Support Omega ;
            Entity EdgesOf[ Omega_C ]; }
        }
        Constraint {
          { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a_Meso; }
          { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a_Meso; }
          { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a_Meso_Init; }
          { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a_Meso_Init; }
          { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
            NameOfConstraint GaugeCondition_a ; }
        }
      }
    EndIf
}

Formulation {
  { Name Init_PreviousTimeStep; Type FemEquation;
    Quantity{
      { Name a; Type Local; NameOfSpace Hcurl_a_Meso; }
    }
    Equation{
      Galerkin { [ Dof{a} , {a} ]; In Omega; Jacobian Vol; Integration II; }
      Galerkin { [ -a_tprevious[], {a} ]; In Omega; Jacobian Vol; Integration II; }
    }
  }
  
  { Name a_NR; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a_Meso; }
      If(Flag_Dynamic && !Flag_3D)
        { Name ur; Type Local; NameOfSpace Hregion_u_2D; }
        { Name I; Type Global; NameOfSpace Hregion_u_2D[I]; }
        { Name U; Type Global; NameOfSpace Hregion_u_2D[U]; }
      EndIf
    } 
    Equation {
      Galerkin { [ nu[ {d a}+bM[] ] * Dof{d a} , {d a} ];
        In Omega; Jacobian Vol; Integration II; }
      Galerkin { [ nu[ {d a}+bM[] ] * bM[], {d a} ];
        In Omega; Jacobian Vol; Integration II; }
      Galerkin { JacNL[ dhdb_NL[{d a}+bM[] ] * Dof{d a}, {d a} ];
        In Omega_NL; Jacobian Vol; Integration II; }
      
      If(Flag_Dynamic)
        Galerkin { DtDof[ sigma[] * Dof{a} , {a} ];
          In Omega_C; Jacobian Vol; Integration II; }
        Galerkin { [ - 0 * sigma[] * eM[] , {a} ];
          In Omega_C; Jacobian Vol; Integration II; }
        Galerkin { [ sigma[] * ( factor * dt_bM[] /\ XYZ[] ) , {a} ];
          In Omega_C; Jacobian Vol; Integration II; }
        
        If(!Flag_3D)
          Galerkin { [ sigma[] * Dof{ur} , {a} ];
            In Omega_C; Jacobian Vol; Integration II; }
          Galerkin { DtDof [ sigma[] * Dof{a} , {ur} ];
            In Omega_C; Jacobian Vol; Integration II; }
          Galerkin { [ sigma[] * Dof{ur} , {ur} ];
            In Omega_C; Jacobian Vol; Integration II; }
          Galerkin { [ - 0 * sigma[] * eM[] , {ur} ];
            In Omega_C; Jacobian Vol; Integration II; }
          Galerkin { [ sigma[] * ( factor * dt_bM[] /\ XYZ[] ) , {ur} ];
            In Omega_C; Jacobian Vol; Integration II; }
          GlobalTerm { [ Dof{I} , {U} ];
            In Omega_C; }
        EndIf
      EndIf
    }
  }
}

Resolution {
    { Name a_Init; Hidden 1;
    System {
      { Name AH; NameOfFormulation Init_PreviousTimeStep;
        DestinationSystem Meso; }
    }
    Operation {
      Generate[AH]; Solve[AH]; TransferSolution[AH];
    }
  }
  
  { Name a_NR;
    System {
      { Name Meso; NameOfFormulation a_NR; }
    }
    Operation {
        CreateDirectory[Dir_Meso];
        InitSolution[Meso]; SaveSolution[Meso];
        TimeLoopTheta[time0, timemax, dt_Meso, theta_value]{
          IterativeLoop[NbrMaxIter, Eps, Relax]{
            GenerateJac[Meso]; SolveJac[Meso];
          }
          SaveSolution[Meso];
          If (which_wr_iteration == num_waveform_iterations)
             PostOperation[ map_field ];
             PostOperation[ map_field_Init ];
          EndIf
        }
    }
  }
}

PostProcessing {
    { Name a_Meso_NR; NameOfFormulation a_NR; NameOfSystem Meso;
      PostQuantity {
        { Name vol; Value { // stored in register #12
            Integral { [ 1. ]; In Omega; Jacobian Vol; Integration II; } } }
        { Name a_pert; Value {
            Term { [ {a} ]; In Omega; Jacobian Vol; } } }
        { Name az_pert; Value {
            Term { [ CompZ[{a}] ]; In Omega; Jacobian Vol; } } }
        { Name a_proj; Value {
            Term { [ ( aM[] ) ]; In Omega; Jacobian Vol; }
            Term { [ ( - factor * (XYZ[]) /\ bM[] ) ]; In Omega; Jacobian Vol; } } }
        { Name a; Value {
            Term { [ {a} ]; In Omega; Jacobian Vol; }
            Term { [ aM[] ]; In Omega; Jacobian Vol; }
            Term { [ ( - factor * (XYZ[]) /\ bM[] ) ]; In Omega; Jacobian Vol; } } }
        { Name b_pert; Value { Term { [ {d a} ]; In Omega; Jacobian Vol;  } } }
        { Name b_proj; Value { Term { [ bM[] ]; In Omega; Jacobian Vol;  } } }
        { Name b; Value {
            Term { [ {d a} ]; In Omega; Jacobian Vol; }
            Term { [ bM[] ]; In Omega; Jacobian Vol; } } }
        { Name b_mean; Value {
            Integral { [ ({d a} + bM[])/#12 ];
              In Omega; Jacobian Vol; Integration II; } } }
        { Name h; Value {
            Term { [ nu[{d a} + bM[]] * ({d a} + bM[]) ];
              In Omega; Jacobian Vol;} } }
        { Name h_mean; Value {// stored in #22
            Integral { [ nu[ {d a} + bM[]] * ({d a} + bM[] )/#12 ];
              In Omega; Jacobian Vol; Integration II; } } }

        If(!Flag_Dynamic)
          { Name JouleLosses_mean; Value{ // stored in #25
              Integral { [ 0. ];
                In Omega_C; Jacobian Vol; Integration II; } } }
          { Name MagneticEnergy_mean; Value{
              // stored in #27. Contribution of the current time step to the
              // integral \oint (h db)
              Integral { [ ( nu[ {d a} + bM[]] *
                    ({d a} + bM[] ) * ({d a} + bM[]) )/#12 ];
                In Omega; Jacobian Vol; Integration II; } } }
        EndIf

        If(Flag_Dynamic)
          { Name e_proj; Value {
              Term { [ factor * ( XYZ[] /\ dt_bM[] ) ]; In Omega_C; Jacobian Vol;  } } }
          { Name j_proj; Value { Term { [ factor * sigma[] * ( XYZ[] /\ dt_bM[] ) ];
                In Omega_C; Jacobian Vol;  } } }

          If(!Flag_3D)
            { Name e_pert; Value {
                Term { [ -Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
                Term { [ - {ur} ]; In Omega_C; Jacobian Vol;  }
              } }
            { Name e; Value {
                Term { [ - Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
                Term { [ - {ur} ]; In Omega_C; Jacobian Vol;  }
                Term { [ factor * ( XYZ[] /\ dt_bM[] ) ]; In Omega_C; Jacobian Vol;} } }
            { Name j_pert; Value {
                Term { [ - sigma[] * Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
                Term { [ - sigma[] * {ur} ]; In Omega_C; Jacobian Vol;  } } }
            { Name j; Value {
                Term { [ - sigma[] * Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
                Term { [ - sigma[] * {ur} ]; In Omega_C; Jacobian Vol;  }
                Term { [   factor * sigma[] * ( XYZ[] /\ dt_bM[] ) ];
                  In Omega_C; Jacobian Vol;  } } }
            { Name JouleLosses_mean; Value{ // stored in #25
                Integral { [ ( sigma[] * SquNorm[ Dt[{a}] + {ur} -
                        factor * ( XYZ[] /\ dt_bM[] ) ] )/#12 ];
                  In Omega_C; Jacobian Vol; Integration II; } } }
          EndIf
          If(Flag_3D)
            { Name e_pert; Value {
                Term { [ -Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
              } }
            { Name e; Value {
                Term { [ - Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
                Term { [ factor * ( XYZ[] /\ dt_bM[] ) ]; In Omega_C; Jacobian Vol;} } }
            { Name j_pert; Value {
                Term { [ - sigma[] * Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
              } }
            { Name j; Value {
                Term { [ - sigma[] * Dt[{a}] ]; In Omega_C; Jacobian Vol;  }
                Term { [   factor * sigma[] * ( XYZ[] /\ dt_bM[] ) ];
                  In Omega_C; Jacobian Vol;  } } }
            { Name JouleLosses_mean; Value{ // stored in #25
                Integral { [ ( sigma[] * SquNorm[ Dt[{a}] -
                        factor * ( XYZ[] /\ dt_bM[] ) ] )/#12 ];
                  In Omega_C; Jacobian Vol; Integration II; } } }
          EndIf

          { Name MagneticPower_mean; Value{
              // stored in #27. Contribution of the current time step to the
              // integral \oint (h db)
              Integral { [ ( nu[ {d a} + bM[] ] *
                    ({d a} + bM[]  ) * (Dt[{d a}] + dt_bM[]) )/#12 ];
                In Omega; Jacobian Vol; Integration II; } } }
          { Name MagneticEnergy_mean; Value{
              // stored in #27. Contribution of the current time step to the
              // integral \oint (h db)
              Integral { [ ( nu[ {d a} + bM[] ] *
                    ({d a} + bM[]  ) * ({d a} + bM[]) )/#12 ];
                In Omega; Jacobian Vol; Integration II; } } }
        EndIf
      }
    }
}


PostOperation {
    { Name mean; NameOfPostProcessing a_Meso_NR;
      Format Table;
      //LastTimeStepOnly; Format Table;
      Operation{
        Print[ vol[Omega] , OnGlobal, Store 12,
               File StrCat[Dir_Meso, "vol.txt"] ];
        Print[ h_mean[Omega], OnGlobal, Store 22,
               File StrCat[Dir_Meso, Sprintf("h_%g.txt", ELENUM) ]];
        Print[ b_mean[Omega], OnGlobal, Store 21,
               File StrCat[Dir_Meso, Sprintf("b_%g.txt", ELENUM) ]];
        Print[ JouleLosses_mean[Omega_C], OnGlobal, Store 25,
               File StrCat[Dir_Meso, Sprintf("JouleLosses_%g.txt", ELENUM) ]];
        Print[ MagneticPower_mean[Omega], OnGlobal, Store 28,
               File StrCat[Dir_Meso, Sprintf("MagneticPower_%g.txt", ELENUM) ] ];
        Print[ MagneticEnergy_mean[Omega], OnGlobal, Store 33,
               File StrCat[Dir_Meso, Sprintf("MagneticEnergy_%g.txt", ELENUM) ] ];
      }
    }
    
    { Name map_field; NameOfPostProcessing a_Meso_NR;
      //Format Gmsh; LastTimeStepOnly; 
      Format Gmsh; 
      Operation {
        If(!Flag_Dynamic)
          Print[ a_pert, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_pert_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ a_proj, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_proj_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ a , OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ b_pert, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_pert_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ b , OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ b_proj, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_proj_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ h , OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("h_Prob_Elenum%g.pos", ELENUM) ] ];
        EndIf
        If(Flag_Dynamic)
          Print[ a_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ a_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_proj_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ a,       OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_Prob_Elenum%g.pos", ELENUM) ] ];
          //
          //Print[ a,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_Prob%g_Elenum%g_Pilote.pos" , iP, ELENUM) ],
          //       AppendToExistingFile (which_time_window > 1 ? 1 : 0), NoMesh (which_time_window > 1 ? 1 : 0)];
          //Print[ a,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_Prob%g_Elenum%g_Pilote.pos" , iP, ELENUM) ],
          //  AppendToExistingFile (TSCURRENT > 1 ? 1 : 0), NoMesh (TSCURRENT > 1 ? 1 : 0), OverrideTimeStepValue TSCURRENT ];
          //Print[ a,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_Prob%g_Elenum%g_Init.pos", iP, ELENUM) ],
          //       AppendToExistingFile (1), OverrideTimeStepValue 0, LastTimeStepOnly];
                 //LastTimeStepOnly, AppendToExistingFile (which_time_window > 1 ? 1 : 0), NoMesh (which_time_window > 1 ? 1 : 0)];
                 //LastTimeStepOnly,  OverrideTimeStepValue 0];          
          //
          Print[ b_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_pert_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ b_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_proj_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ b,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("b_Prob_Elenum%g.pos", ELENUM) ] ];
          
          Print[ e_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("e_pert_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ e_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("e_proj_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ e,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("e_Prob_Elenum%g.pos", ELENUM) ] ];
          
          Print[ j_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("j_pert_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ j_proj,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("j_proj_Prob_Elenum%g.pos", ELENUM) ] ];
          Print[ j,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("j_Prob_Elenum%g.pos", ELENUM) ] ];
          
          Print[ h,  OnElementsOf Omega,
                 File StrCat[Dir_Meso, Sprintf("h_Prob_Elenum%g.pos", ELENUM) ] ];
        EndIf
      }
    }
    
    { Name map_field_Init; NameOfPostProcessing a_Meso_NR;
      Operation {
        Print[ a_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob_Elenum%g_Init.pos", ELENUM) ], LastTimeStepOnly ];
        Print[ az_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("az_pert_Prob_Elenum%g_Init.pos", ELENUM) ], LastTimeStepOnly ];
        Print[ a_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob_Elenum%g_TW%g_Yose.pos", ELENUM, which_time_window) ] ]; 
        Print[ az_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("az_pert_Prob_Elenum%g_TW%g_Yose.pos", ELENUM, which_time_window) ] ]; 

        Print[ a_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_pert_Prob_Elenum%g_TW%g_Init.pos", ELENUM, which_time_window) ], LastTimeStepOnly ];
        Print[ az_pert,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("az_pert_Prob_Elenum%g_TW%g_Init.pos", ELENUM, which_time_window) ], LastTimeStepOnly ];
        Print[ a,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_Prob_Elenum%g_Proj.pos", ELENUM) ] ];
        Print[ a,  OnElementsOf Omega, File StrCat[Dir_Meso, Sprintf("a_Prob_Elenum%g_TW%g_Proj.pos", ELENUM, which_time_window) ] ]; 
      }
    }
}

