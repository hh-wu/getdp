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
  For iP In {1:Nbr_SubProblems}

    If(!Flag_3D)
      { Name Hcurl_a_Meso~{iP}; Type Form1P;
        BasisFunction{
          { Name sn; NameOfCoef an; Function BF_PerpendicularEdge;
            Support Omega; Entity NodesOf[ All ]; }
        }
        Constraint {
          { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso; }
          { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso_Init; }
          If ((Flag_WR == 0) && (Flag_WR_meso == 0))
            { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso_WR; }
          EndIf
        }
      }
      // Gradient of Electric scalar potential (2D)
      { Name Hregion_u_2D~{iP}; Type Form1P;
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
      { Name Hcurl_a_Meso~{iP}; Type Form1;
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
      { Name Hcurl_a_Meso~{iP}; Type Form1;
        BasisFunction {
          { Name se;  NameOfCoef ae;  Function BF_Edge; Support Omega ;
            Entity EdgesOf[ All, Not Omega_C ]; }
          { Name sec;  NameOfCoef aec;  Function BF_Edge; Support Omega ;
            Entity EdgesOf[ Omega_C ]; }
        }
        Constraint {
          { NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a_Meso; }
          { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a_Meso; }
          //{ NameOfCoef ae;  EntityType EdgesOf ; NameOfConstraint a_Meso_Init; }
          { NameOfCoef aec; EntityType EdgesOf ; NameOfConstraint a_Meso_Init; }
          { NameOfCoef ae;  EntityType EdgesOfTreeIn ; EntitySubType StartingOn ;
            NameOfConstraint GaugeCondition_a ; }
           If ((Flag_WR == 0) && (Flag_WR_meso == 0))
            { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso_WR; }
          EndIf
        }
      }
    EndIf
  EndFor
}

Formulation {
  For iP In {1:Nbr_SubProblems}

    { Name a_NR~{iP}; Type FemEquation;
      Quantity {
        { Name a; Type Local; NameOfSpace Hcurl_a_Meso~{iP}; }
        If(Flag_Dynamic && !Flag_3D)
          { Name ur; Type Local; NameOfSpace Hregion_u_2D~{iP}; }
          { Name I; Type Global; NameOfSpace Hregion_u_2D~{iP}[I]; }
          { Name U; Type Global; NameOfSpace Hregion_u_2D~{iP}[U]; }
        EndIf
      }
      Equation {
        Galerkin { [ nu[ {d a}+bM[]+Pert~{iP}[] ] * Dof{d a} , {d a} ];
          In Omega; Jacobian Vol; Integration II; }
        Galerkin { [ nu[ {d a}+bM[]+Pert~{iP}[] ] * bM[], {d a} ];
          In Omega; Jacobian Vol; Integration II; }
        Galerkin { [ nu[ {d a}+bM[]+Pert~{iP}[] ] * Pert~{iP}[] , {d a} ];
          In Omega; Jacobian Vol; Integration II; }
        Galerkin { JacNL[ dhdb_NL[{d a}+bM[]+Pert~{iP}[] ] * Dof{d a}, {d a} ];
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
  EndFor
}

Resolution {
  { Name a_NR;
    System {
      For iP In {1:Nbr_SubProblems}
        { Name Meso~{iP}; NameOfFormulation a_NR~{iP}; }
      EndFor
    }
    Operation {
      If ((Flag_WR != 0) || (Flag_WR_meso != 0))
        CreateDirectory[Dir_Meso];
        //==============================================================================================
        For iP In {1:Nbr_SubProblems}
          InitSolution[Meso~{iP} ];
        EndFor
        TimeLoopTheta[time0, timemax, dt_Meso, theta_value]{
          IterativeLoop[NbrMaxIter, Eps, Relax]{
            GenerateJac[Meso_1]; SolveJac[Meso_1];
            //Test[ ((Fmod[($Time - time0), dt_Macro]##111) < 1e-14) || ((Fmod[dt_Macro, ($Time - time0)]##222) < 1e-14)]{
            Test[ (Fabs[Ceil[($Time - time0)/dt_Macro] - ($Time - time0)/dt_Macro] < 5e-14) ||
                  (Fabs[($Time - time0)/dt_Macro - Floor[($Time - time0)/dt_Macro]] < 5e-14) ]{
              For iP In {2:Nbr_SubProblems}
                GenerateJac[Meso~{iP}]; SolveJac[Meso~{iP}];
              EndFor
            } 
          }
          SaveSolution[Meso_1];
          Test[ (Fabs[Ceil[($Time - time0)/dt_Macro] - ($Time - time0)/dt_Macro] < 5e-14) ||
                (Fabs[($Time - time0)/dt_Macro - Floor[($Time - time0)/dt_Macro]] < 5e-14) ]{
            For iP In {2:Nbr_SubProblems}
              SaveSolution[Meso~{iP}];
            EndFor
          }
        }
      //==============================================================================================      
      EndIf
      If ((Flag_WR == 0) && (Flag_WR_meso == 0))
        //============================================================================================
        GmshRead[Sprintf("res_meso/b_pert_Prob1_Elenum%g.pos", ELENUM)] ;
        InitSolution[Meso_1 ];
        TimeLoopTheta[time0, timemax, dt_Macro, theta_value]{
          PostOperation[Compute_Material_Law];
        }
      //==============================================================================================      
      EndIf
        
        
    }
  }
}

PostProcessing {
  For iP In {1:Nbr_SubProblems}
    { Name a_Meso_NR~{iP}; NameOfFormulation a_NR~{iP}; NameOfSystem Meso~{iP};
      PostQuantity {
        { Name vol; Value { // stored in register #12
            Integral { [ 1. ]; In Omega; Jacobian Vol; Integration II; } } }
        { Name a_pert; Value {
            Term { [ {a} ]; In Omega; Jacobian Vol; } } }
        { Name a_proj; Value {
            Term { [ CompZ[ ( aM[] ) ] ]; In Omega; Jacobian Vol; }
            Term { [ CompZ[ ( - factor * (XYZ[]) /\ bM[] ) ] ]; In Omega; Jacobian Vol; } } }
        { Name a; Value {
            Term { [ CompZ[ {a}] ]; In Omega; Jacobian Vol; }
            Term { [ CompZ[ aM[] ] ]; In Omega; Jacobian Vol; }
            Term { [ CompZ[ ( - factor * (XYZ[]) /\ bM[] ) ] ]; In Omega; Jacobian Vol; } } }
        { Name b_pert; Value { Term { [ {d a} ]; In Omega; Jacobian Vol;  } } }
        { Name b_proj; Value { Term { [ bM[] ]; In Omega; Jacobian Vol;  } } }
        { Name b; Value {
            Term { [ {d a} ]; In Omega; Jacobian Vol; }
            Term { [ bM[] ]; In Omega; Jacobian Vol; }
            Term { [ Pert~{iP}[] ]; In Omega; Jacobian Vol; } } }
        { Name b_mean; Value {
            Integral { [ ({d a} + bM[] + Pert~{iP}[])/#12 ];
              In Omega; Jacobian Vol; Integration II; } } }
        { Name h; Value {
            Term { [ nu[{d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[]) ];
              In Omega; Jacobian Vol;} } }
        { Name h_mean; Value {// stored in #22
            Integral { [ nu[ {d a} + bM[] + Pert~{iP}[]] * ({d a} + bM[] + Pert~{iP}[])/#12 ];
              In Omega; Jacobian Vol; Integration II; } } }

        If(!Flag_Dynamic)
          { Name JouleLosses_mean; Value{ // stored in #25
              Integral { [ 0. ];
                In Omega_C; Jacobian Vol; Integration II; } } }
          { Name MagneticEnergy_mean; Value{
              // stored in #27. Contribution of the current time step to the
              // integral \oint (h db)
              Integral { [ ( nu[ {d a} + bM[] + Pert~{iP}[]] *
                    ({d a} + bM[] + Pert~{iP}[] ) * ({d a} + bM[]) )/#12 ];
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

          { Name MagneticEnergy_mean; Value{
              // stored in #27. Contribution of the current time step to the
              // integral \oint (h db)
              Integral { [ ( nu[ {d a} + bM[] + Pert~{iP}[]] *
                    ({d a} + bM[] + Pert~{iP}[] ) * (Dt[{d a}] + dt_bM[]) )/#12 ];
                In Omega; Jacobian Vol; Integration II; } } }
        EndIf
      }
    }
  EndFor
}


PostOperation {
  For iP In {1:Nbr_SubProblems}
    { Name mean~{iP}; NameOfPostProcessing a_Meso_NR~{iP};
      Format Table;
      //LastTimeStepOnly; Format Table;
      Operation{
        Print[ vol[Omega] , OnGlobal, Store 12,
          File StrCat[Dir_Meso, "vol.txt"] ];
        Print[ h_mean[Omega], OnGlobal, Store 22,
          File StrCat[Dir_Meso, Sprintf("h%g_%g.txt", iP, ELENUM) ]];
        Print[ b_mean[Omega], OnGlobal, Store 21,
          File StrCat[Dir_Meso, Sprintf("b%g_%g.txt", iP, ELENUM) ]];
        If(iP == 1)
          Print[ JouleLosses_mean[Omega_C], OnGlobal, Store 25,
            File StrCat[Dir_Meso, Sprintf("JouleLosses_%g.txt", ELENUM) ]];
          Print[ MagneticEnergy_mean[Omega], OnGlobal, Store 28,
            File StrCat[Dir_Meso, Sprintf("MagneticEnergy_%g.txt", ELENUM) ] ];
        EndIf
      }
    }
    
    { Name map_field~{iP}; NameOfPostProcessing a_Meso_NR~{iP};
      Format Gmsh;
      //LastTimeStepOnly; Format Gmsh;
      Operation {
        If(!Flag_Dynamic)
          Print[ a_pert, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ a_proj, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ a , OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_Prob%g_Elenum%g.pos"  , iP, ELENUM) ] ];
          Print[ b_pert, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ b , OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_Prob%g_Elenum%g.pos"  , iP, ELENUM) ] ];
          Print[ b_proj, OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ h , OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("h_Prob%g_Elenum%g.pos"  , iP, ELENUM) ] ];
        EndIf
        If(Flag_Dynamic)
        Print[ a_pert,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ a_proj,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ a,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("a_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];

          Print[ b_pert,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ b_proj,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ b,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("b_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];

          Print[ e_pert,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("e_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ e_proj,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("e_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ e,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("e_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];

          Print[ j_pert,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("j_pert_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ j_proj,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("j_proj_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
          Print[ j,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("j_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];

          Print[ h,  OnElementsOf Omega,
            File StrCat[Dir_Meso, Sprintf("h_Prob%g_Elenum%g.pos" , iP, ELENUM) ] ];
        EndIf
      }
    }
  EndFor
}

