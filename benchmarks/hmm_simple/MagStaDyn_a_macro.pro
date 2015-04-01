DefineConstant[ time0, timemax, dtime, theta_value, Nb_max_iter,
                stop_criterion, relaxation_factor ];

Jacobian {
  { Name JVol;
    Case {
      { Region Domain_Inf; Jacobian VolSphShell{Val_Rint, Val_Rext}; }
      { Region All; Jacobian Vol; }
    }
  }
}

Integration {
  { Name I1;
    Case {
      { Type Gauss;
        Case {
	  { GeoElement Triangle; NumberOfPoints 1; }
          { GeoElement Quadrangle; NumberOfPoints 1; }
	}
      }
    }
  }
}

Constraint {
  { Name a;
    Case {
      { Region Dirichlet_a_0; Value 0.; }
    }
  }
}

FunctionSpace {
  { Name Hcurl_a; Type Form1P;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_PerpendicularEdge;
        Support Domain; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef ae; EntityType NodesOf; NameOfConstraint a; }
    }
  }
  { Name Hcurl_a_dummy; Type Form1P;
    BasisFunction {
      { Name se; NameOfCoef ae; Function BF_PerpendicularEdge;
        Support Domain; Entity NodesOf[ All ]; }
    }
    Constraint {
      { NameOfCoef ae; EntityType NodesOf; NameOfConstraint a; }
    }
  }
}

Formulation {

  { Name MagSta_a_hmm_init_downscaling; Type FemEquation;
    Quantity {
      { Name a_dummy; Type Local; NameOfSpace Hcurl_a_dummy; }
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Galerkin { [ Dof{d a_dummy} , {d a_dummy} ];
        In Domain; Jacobian JVol; Integration I1; }
      Galerkin { [ Python[ ElementNum[], QuadraturePointIndex[],
            CompX[{a}], CompY[{a}], CompZ[{a}],
            CompX[{d a}], CompY[{d a}], CompZ[{d a}],
            CompX[Dt[{a}]], CompY[Dt[{a}]], CompZ[Dt[{a}]],
            CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], CompZ[Dt[{d a}]] ]
          {"hmm_downscale.py"} * Dof{d a_dummy} , {d a_dummy} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
    }
  }

  { Name MagSta_a_hmm; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a}, {d a} ];
        In Domain_L; Jacobian JVol; Integration I1; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[], 0]
          {"hmm_upscale.py"}, {d a} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
      Galerkin { JacNL [ Python[ElementNum[], QuadraturePointIndex[], 1]
          {"hmm_upscale.py"} * Dof{d a} , {d a} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
      Galerkin { [ -js[] , {a} ];
        In Domain_S; Jacobian JVol; Integration I1; }
    }
  }

}

Resolution {
  { Name MagStaDyn_a_hmm;
    System {
      { Name A; NameOfFormulation MagSta_a_hmm; }
      { Name Dummy; NameOfFormulation MagSta_a_hmm_init_downscaling; }
    }
    Operation {
      CreateDirectory[Dir_Macro];
      InitSolution[A];
      
      //PostOperation[ globalquantities ];

      If(!Flag_Dynamic)
        Evaluate[ Python[0, 0]{"hmm_initialize.py"} ];
        IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          Generate[Dummy];
          Evaluate[ Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 0]
            {"hmm_compute.py"} ];
          GenerateJac[A]; SolveJac[A];
        }
        SaveSolution[A];
        If(Flag_PostCuts) // compute some meso cells around points of interest
          Evaluate[ Python[0, 0]{"hmm_initialize.py"} ];
          PostOperation[ cuts ];
          Evaluate[ Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 1]
            {"hmm_compute.py"} ];
        EndIf
      EndIf

      If(Flag_Dynamic)
        TimeLoopTheta[ time0, timemax, dtime, theta_value]{
          Evaluate[ Python[$Time, $TimeStep]{"hmm_initialize.py"} ];
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            Generate[Dummy];
            Evaluate[ Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 0]
              {"hmm_compute.py"} ];
            GenerateJac[A]; SolveJac[A];
          }
          SaveSolution[A];
          PostOperation[ globalquantities ];
          If(Flag_PostCuts) // compute some meso cells around points of interest
            Evaluate[ Python[$Time, $TimeStep]{"hmm_initialize.py"} ];
            PostOperation[ cuts ];
            Evaluate[ Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 1]
              {"hmm_compute.py"} ];
          EndIf
        }
      EndIf
    }
  }

}

ncuts = n_smc;

PostProcessing {
  { Name MagStaDyn_a_hmm; NameOfFormulation MagSta_a_hmm;
    Quantity {
      { Name az; Value { Local { [ CompZ[{a}] ]; In Domain; Jacobian JVol; } } }
      { Name a; Value { Local { [ {a} ]; In Domain; Jacobian JVol; } } }
      { Name b; Value { Local { [ {d a} ]; In Domain; Jacobian JVol; } } }
      { Name h; Value {
          Local { [ nu[] * {d a} ]; In Domain_L; Jacobian JVol; }
          Local { [ h[ {d a}] ]; In Domain_NL; Jacobian JVol; } } }
      { Name dt_b; Value { Local { [ Dt[{d a}] ]; In Domain; Jacobian JVol; } } }
      { Name e; Value { Local { [ -Dt[{d a}] ]; In Domain_NL; Jacobian JVol; } } }
      { Name js; Value { Local { [ js[] ]; In Domain_S; Jacobian JVol; } } }

      { Name MagneticEnergy_Macro_Local; Value {
          Local { [ nu[] * {d a} * Dt[{d a}] ]; In Domain_L; Jacobian JVol; }
          // does not make sense unless we have an approximate homogenized h[]
          Local { [ h[{d a}] * Dt[{d a}] ]; In Domain_NL; Jacobian JVol; } } }
      { Name MagneticEnergy_Macro; Value {
          Integral { [ nu[] * {d a} * Dt[{d a}] ];
            In Domain_L; Jacobian JVol; Integration I1; }
          Integral { [ h[{d a}] * Dt[{d a}] ];
            In Domain_NL; Jacobian JVol; Integration I1; } // makes no sense 
        } }

      { Name MagneticEnergy_Upscaled_Local; Value {
          If(!Flag_Dynamic)
            Local { [ nu[] * SquNorm[{d a}] ]; In Domain_L; Jacobian JVol; }
          EndIf
          If(Flag_Dynamic)
            Local { [ nu[] * {d a} * Dt[{d a}]  ]; In Domain_L; Jacobian JVol; }
          EndIf
            Local { [ Python[ElementNum[], QuadraturePointIndex[], 2]{"hmm_upscale.py"} ];
            In Domain_NL; Jacobian JVol; }
        } }
      
      { Name MagneticEnergy_Upscaled; Value {
          If(!Flag_Dynamic)
            Integral { [ nu[] * SquNorm[{d a}] ];
            In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          If(Flag_Dynamic)
            Integral { [ nu[] * {d a} * Dt[{d a}] ];
            In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
            Integral { [ Python[ElementNum[], QuadraturePointIndex[], 2]{"hmm_upscale.py"} ];
            In Domain_NL; Jacobian JVol; Integration I1; }
        } }
      
      { Name JouleLosses_Upscaled_Local; Value {
          If(!Flag_Dynamic)
            Local { [ 0.0 ]; In Domain_L; Jacobian JVol; }
          EndIf
          If(Flag_Dynamic)
            Local { [ 0.0 ]; In Domain_L; Jacobian JVol; }
            Local { [ CompZ[Python[ElementNum[], QuadraturePointIndex[], 3]{"hmm_upscale.py"}] ];
              In Domain_NL; Jacobian JVol; }
          EndIf
       } }
      
      { Name JouleLosses_Upscaled; Value {
          If(!Flag_Dynamic)
            Integral { [ 0.0 ]; In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          If(Flag_Dynamic)
            Integral { [ 0.0 ]; In Domain_L; Jacobian JVol; Integration I1; }
            Integral { [ Python[ElementNum[], QuadraturePointIndex[], 3]{"hmm_upscale.py"} ];
              In Domain_NL; Jacobian JVol; Integration I1; }
          EndIf
       } }
      
      For j In {1:ncuts}
      { Name data~{j}; Value {
          Local { [ 0*Python[ j, 0,
                              CompX[{a}], CompY[{a}], CompZ[{a}],
                              CompX[{d a}], CompY[{d a}], CompZ[{d a}],
                              CompX[Dt[{a}]], CompY[Dt[{a}]], CompZ[Dt[{a}]],
                              CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], CompZ[Dt[{d a}]] ]
                    {"hmm_downscale.py"} ];
            In Domain; Jacobian JVol; }
        } }
      EndFor
        /*
        For i In{}
      For j In {1:ncuts}
      { Name data~{j}; Value {
          Local { [ 0*Python[ j, 0,
                  CompX[{a}], CompY[{a}], CompZ[{a}],
                  CompX[{d a}], CompY[{d a}], CompZ[{d a}],
                  CompX[Dt[{a}]], CompY[Dt[{a}]], CompZ[Dt[{a}]],
                  CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], CompZ[Dt[{d a}]] ]
                    {"hmm_downscale.py"} ];
            In Domain; Jacobian JVol; } } }
      EndFor 
*/
    }
  }
}

PostOperation {
  { Name maps; NameOfPostProcessing MagStaDyn_a_hmm;
    Operation {
      Print[ az, OnElementsOf Domain, File StrCat[Dir_Macro,"az_hmm.pos"] ];
      Print[ a, OnElementsOf Domain, File StrCat[Dir_Macro,"a_hmm.pos"] ];
      Print[ b, OnElementsOf Domain, File StrCat[Dir_Macro,"b_hmm.pos"] ];
      Print[ h, OnElementsOf Domain, File StrCat[Dir_Macro,"h_hmm.pos"] ];
      Print[ js, OnElementsOf Domain_S, File StrCat[Dir_Macro,"js.pos"] ];
      //Print[ MagneticEnergy_Macro_Local, OnElementsOf Domain, File StrCat[Dir_Macro,"MagneticEnergy_Macro_Local.pos"] ];
      //Print[ MagneticEnergy_Upscaled_Local, OnElementsOf Domain, File StrCat[Dir_Macro,"MagneticEnergy_Upscaled_Local.pos"] ];
      //Print[ JouleLosses_Upscaled_Local, OnElementsOf Domain_NL, File StrCat[Dir_Macro,"JouleLosses_Upscaled_Local.pos"] ];
    }
  }

  { Name globalquantities; NameOfPostProcessing MagStaDyn_a_hmm;
    Operation {

      //Print[ MagneticEnergy_Macro_Local, OnElementsOf Domain, File > StrCat[Dir_Macro,"MagneticEnergy_Macro_Local.pos"] ];
      //Print[ MagneticEnergy_Upscaled_Local, OnElementsOf Domain, File > StrCat[Dir_Macro,"MagneticEnergy_Upscaled_Local.pos"] ];
      //Print[ JouleLosses_Upscaled_Local, OnElementsOf Domain_NL, File > StrCat[Dir_Macro,"JouleLosses_Upscaled_Local.pos"] ]; 
      
      Print[ MagneticEnergy_Macro[Domain], OnGlobal, Format TimeTable, File > StrCat[Dir_Macro, "MagneticEnergy_Macro.dat" ], LastTimeStepOnly ] ;
      Print[ MagneticEnergy_Upscaled[Domain], OnGlobal, Format TimeTable, File > StrCat[Dir_Macro, "MagneticEnergy_Upscaled.dat" ], LastTimeStepOnly ] ;
      Print[ JouleLosses_Upscaled[Domain_NL], OnGlobal, Format TimeTable, File > StrCat[Dir_Macro, "JouleLosses_Upscaled.dat" ], LastTimeStepOnly ] ;
    }
  } 
  
  { Name cuts; NameOfPostProcessing MagStaDyn_a_hmm;
    Operation {
      For j In {1:ncuts:3}
        Print[ data~{j}, OnPoint {e-0.5*e, j*e-e/2, 0.},
          File StrCat[Dir_Macro,"dummy.pos"] , LastTimeStepOnly ];
      EndFor
    }
  }
}
