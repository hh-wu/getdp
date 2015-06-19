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
  { Name Hcurl_a_Meso; Type Form1P;
    BasisFunction{
      { Name sn; NameOfCoef an; Function BF_PerpendicularEdge;
        Support Omega; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso; }
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso_Init; }
      { NameOfCoef an; EntityType NodesOf; NameOfConstraint a_Meso_WR; }
    }
  }
}

Formulation {
    { Name a_NR_WR; Type FemEquation;
      Quantity{
        { Name a; Type Local; NameOfSpace Hcurl_a_Meso; }
      }
      Equation{
        Galerkin { [ Dof{a} , {a} ]; In Omega; Jacobian Vol; Integration II; }
        Galerkin { [ -a_pert[], {a} ]; In Omega; Jacobian Vol; Integration II; }
      }
    }
}

Resolution {
  { Name a_NR_WR;
    System {
      { Name Meso_1; NameOfFormulation a_NR_WR; }
    }
    Operation {
      //CreateDirectory[Dir_Meso];
      //GmshRead[Sprintf("res_meso/a_pert_Prob1_Elenum%g.pos", ELENUM)] ;
      InitSolution[Meso_1 ];
      SaveSolution[Meso_1 ];
      //TimeLoopTheta[time0, timemax, dt_Macro, theta_value]{
      TimeLoopTheta[time0, timemax, dt_Meso, theta_value]{
        IterativeLoop[NbrMaxIter, Eps, Relax]{
          //Generate[Meso_1]; Solve[Meso_1];
        }
        //SaveSolution[Meso_1 ];
        PostOperation[mean_WR];
      }
    }
  }
}
PostProcessing {
  { Name a_Meso_NR_WR; NameOfFormulation a_NR_WR; NameOfSystem Meso_1;
    PostQuantity {
      { Name vol; Value { // stored in register #12
          Integral { [ 1. ]; In Omega; Jacobian Vol; Integration II; } } }
      { Name a_pert; Value {
          Term { [ {a} ]; In Omega; Jacobian Vol; } } }
      { Name b_pert; Value { Term { [ {d a} ]; In Omega; Jacobian Vol;  } } }
      { Name h_mean; Value {// stored in #22
          Integral { [ nu[ {d a} + bM[]] * ({d a} + bM[])/#12 ];
            In Omega; Jacobian Vol; Integration II; } } }
      { Name dhdb_mean; Value {// stored in #22
          Integral { [ dhdb[ {d a} + bM[]]/#12 ];
            In Omega; Jacobian Vol; Integration II; } } }
    }
  }
}

PostOperation {
  { Name mean_WR; NameOfPostProcessing a_Meso_NR_WR;
    Format Table;
    //LastTimeStepOnly; Format Table;
    Operation{
      Print[ vol[Omega] , OnGlobal, Store 12,
             File StrCat[Dir_Meso, "vol.txt"] ];
      Print[ h_mean[Omega], OnGlobal, Store 22,
             File StrCat[Dir_Meso, Sprintf("h_%g.txt", ELENUM) ]];
      Print[ dhdb_mean[Omega], OnGlobal, Store 21,
             File StrCat[Dir_Meso, Sprintf("dhdb_%g.txt", ELENUM) ]];
    }
  }
  
  { Name map_field_WR; NameOfPostProcessing a_Meso_NR_WR;
    Format Gmsh;
    //LastTimeStepOnly; Format Gmsh;
    Operation {
      Print[ a_pert,  OnElementsOf Omega,
             File StrCat[Dir_Meso, Sprintf("a_pert_Prob1_Elenum_%g.pos", ELENUM) ] ];
      Print[ b_pert,  OnElementsOf Omega,
             File StrCat[Dir_Meso, Sprintf("b_pert_Prob1_Elenum_%g.pos", ELENUM) ] ];
    }
  }
}

