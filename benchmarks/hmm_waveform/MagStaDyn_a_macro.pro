DefineConstant[ time0, timemax, dtime, theta_value, Nb_max_iter,
                stop_criterion, relaxation_factor, Flag_Init_Step];
                //stop_criterion, relaxation_factor, Flag_Init_Step];

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

Group {
  Surf_a_NoGauge = Region [ {Dirichlet_a_0} ] ;
}

Constraint {
  { Name a;
    Case {
      { Region Dirichlet_a_0; Value 0.; }
    }
  }
  { Name GaugeCondition_a ; Type Assign ;
    Case {
      { Region Domain ; SubRegion Surf_a_NoGauge ; Value 0. ; }
    }
  }
}

FunctionSpace {
  If(!Flag_3D)
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
  EndIf
  If(Flag_3D)
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
    { Name Hcurl_a_dummy; Type Form1;
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
      Galerkin { [ Python[ ElementNum[], QuadraturePointIndex[], $Time,
                           CompX[{a}], CompY[{a}], CompZ[{a}],
                           CompX[{d a}], CompY[{d a}], CompZ[{d a}],
                           CompX[Dt[{a}]], CompY[Dt[{a}]], CompZ[Dt[{a}]],
                           CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], CompZ[Dt[{d a}]] ]
          {"hmm_downscale_waveform.py"} * Dof{d a_dummy} , {d a_dummy} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
    }
  }

  { Name MagSta_a_hmm_init; Type FemEquation;
    Quantity {
      { Name a_Init_TW; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
        Galerkin { [ nu[] * Dof{d a_Init_TW}, {d a_Init_TW} ];
            In Domain_L; Jacobian JVol; Integration I1; }            
        Galerkin { [ nu[{d a_Init_TW}] * Dof{d a_init_TW}, {d a_Init_TW} ];
          In Domain_NL; Jacobian JVol; Integration I1; }
        Galerkin { [ -js[] , {a_Init_TW} ];
          In Domain_S; Jacobian JVol; Integration I1; }
    }
  }

    { Name MagSta_a_hmm; Type FemEquation;
    Quantity {
      { Name a; Type Local; NameOfSpace Hcurl_a; }
    }
    Equation {
      Galerkin { [ nu[] * Dof{d a}, {d a} ];
        In Domain_L; Jacobian JVol; Integration I1; }
      Galerkin { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 0] {"hmm_upscale_waveform.py"}, {d a} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
      Galerkin { JacNL [ Python[ElementNum[], QuadraturePointIndex[], $Time, 1]{"hmm_upscale_waveform.py"} * Dof{d a} , {d a} ];
        In Domain_NL; Jacobian JVol; Integration I1; }
      Galerkin { [ -js[] , {a} ]; In Domain_S; Jacobian JVol; Integration I1; }
    }
  }

}

Resolution {
  { Name MagStaDyn_a_hmm;
    System {
      { Name A_Init; NameOfFormulation MagSta_a_hmm_init;}
      { Name A; NameOfFormulation MagSta_a_hmm; }
      { Name Dummy; NameOfFormulation MagSta_a_hmm_init_downscaling; }
    }
    Operation {
      CreateDirectory[Dir_Macro];      
      If(Flag_Dynamic)
        // 1. Setting data and initialization of Python dictionaries
        //==========================================================
        tolerance_waveform = 1.0e-14;
        error = 10 * tolerance_waveform;

        // 1. A. Loop over time windows
        //=============================
        For j In {1:num_time_windows}
        time0_j = time0 + (j - 1) * time_window;
        timemax_j = time0 + j * time_window;
        Evaluate[ Python[0, j]{"hmm_initialize_waveform.py"} ];
        
        // 1. B. Waveform relaxation loop
        //===============================
        
        // 2. First computation fr time window TW. Homogenized law is not available.
        // Solve system "A_init" to initialize values of the dictionaries 
        //==========================================================================
        SetTime[time0_j];
        InitSolution[A_Init]; SaveSolution[A_Init];
        Evaluate[ Python[tolerance_waveform, 0]{"hmm_error_waveform.py"} ];
        If (j != 1)
          // Delete the table of time steps before starting computations for the next time window 
          //=====================================================================================
          Evaluate[ Python[$TimeStep]{"hmm_delete_time_table.py"} ];
        EndIf
        // Compute initial macroscale solution for each time window using system "A_init".
        //================================================================================
        TimeLoopTheta[ time0_j, timemax_j, dtime, theta_value]{
          If (j == 1) // write the able of true time steps from the macroscale
            Evaluate[ Python[$Time, $TimeStep, dtime, 0]{"hmm_first_macro_resolution.py"} ];
          EndIf
          If (j != 1) // time steps for the mesoscale problems are written module the first element
            Evaluate[ Python[$Time, $TimeStep, dtime, 1]{"hmm_first_macro_resolution.py"} ];
          EndIf
          IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
            GenerateJac[A_Init]; SolveJac[A_Init];
          }
          Generate[Dummy]; // Downscaling for the first mesoscale computation
        }
        Evaluate[Python[1]{"hmm_print_time.py"}];

        // 3. Waveform relaxation iterations. Homogenized law is now available
        //====================================================================
        For i In {1:num_waveform_iterations}

        // 3.1.  Compute ML until convergence
        //===================================
        If (i == 1)
          Evaluate[ Python[tolerance_waveform, i]{"hmm_error_waveform.py"} ];

          // 3. 1. 1. Parallel mesoscale computations
          //=========================================
          Evaluate[Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 0, time0_j,
                          timemax_j, dtime, 1, 0, j, i, $TimeStep, $Time]{"hmm_compute_waveform.py"}];
          Evaluate[Python[1]{"hmm_print_time.py"}];
          Evaluate[Python[0]{"hmm_sort_tables_waveform.py"}];
          Evaluate[Python[1]{"hmm_swap_tables_waveform.py"}];
          If (j == 1)
            InitSolution[A]; SaveSolution[A];
          EndIf
          If (j != 1)
            SetTime[time0_j];
            CreateSolution[A, (Floor[(time_window + epsilon_t)/dtime] * num_wr_iterations * (j - 1) ) ];
          EndIf
          TimeLoopTheta[ time0_j, timemax_j, dtime, theta_value]{
            IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
                // 3. 1. 2. Parallel evaluation of the material law followed by downscaling.
                //==========================================================================
              Generate[Dummy]; // downscaling of the macroscale fields for update of "b"
              Evaluate[Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 0, time0_j,
                              timemax_j, dtime, 0, 0, j, i, $TimeStep, $Time]{"hmm_compute_waveform.py"}];
              GenerateJac[A]; SolveJac[A];
            }
            Generate[Dummy]; // downscaling
            PostOperation[ globalquantities~{ ((j - 1) * num_wr_iterations + i) } ];
            PostOperation[ maps~{ ((j - 1) * num_wr_iterations + i) } ];
          }  
        EndIf // (i == 1)
        If ( (i != 1) )
          Evaluate[Python[1]{"hmm_sort_tables_waveform.py"}];
          Test[ Python[tolerance_waveform, i]{"hmm_error_waveform.py"} ] {
            // 3. 1. 1. Mesoscale computations (in parallel)
            //==============================================
            Evaluate[Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 0, time0_j,
                            timemax_j, dtime, 1, 0, j, i, $TimeStep, $Time]{"hmm_compute_waveform.py"}];
            Evaluate[Python[0]{"hmm_sort_tables_waveform.py"}];
            Evaluate[Python[1]{"hmm_swap_tables_waveform.py"}];
            If (j == 1)
              SetTime[time0_j];
              CreateSolution[A, (Floor[(time_window + epsilon_t)/dtime] * num_wr_iterations * (j - 1) ) ];
            EndIf
            TimeLoopTheta[ time0_j, timemax_j, dtime, theta_value]{
              IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
                // 3. 1. 2. Parallel evaluation of the material law followed by downscaling
                //=========================================================================
                Generate[Dummy]; // downscaling of the macroscale fields for update of "b"
                Evaluate[Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 0, time0_j,
                                timemax_j, dtime, 0, 0, j, i, $TimeStep, $Time]{"hmm_compute_waveform.py"}];
                GenerateJac[A]; SolveJac[A];
              }
              //Generate[Dummy]; // downscaling
              PostOperation[ maps~{ ((j - 1) * num_wr_iterations + i) } ];
              If(Flag_WR_Iterations)
                PostOperation[ globalquantities~{ ((j - 1) * num_wr_iterations + i) } ];
                If(0)
                  Evaluate[ Python[Nbr_SubProblems, Flag_Dynamic, Freq, NbSteps, 1, time0_j,
                                   timemax_j, dtime, 1, 1, j, i, $TimeStep, $Time]{"hmm_compute_waveform.py"} ];
                EndIf
              EndIf
              If(i == num_waveform_iterations)
                  PostOperation[ writeInitialSolutionForNextTimeWindow ];
              EndIf
              
            }
          } //Test...
        EndIf// (!1)
        EndFor //(WR iterations)

        /*
        // 3.2. Compute if convergence has been attained
        //==============================================
        //If(j == 1)
        SetTime[time0_j];
        //CreateSolution[A, (Floor[(time_window + epsilon_t)/dtime] * (num_wr_iterations + 1) * (j - 1) ) ];
        CreateSolution[A, (Floor[(time_window + epsilon_t)/dtime] * num_wr_iterations * (j - 1) ) ];
        //InitSolution[A]; SaveSolution[A];
        //EndIf
        Evaluate[ Python[1, j]{"hmm_initialize_waveform.py"} ];
        TimeLoopTheta[ time0_j, timemax_j, dtime, theta_value]{
          //IterativeLoop[Nb_max_iter, stop_criterion, relaxation_factor]{
          Generate[Dummy];
          //GenerateJac[A]; SolveJac[A];
          //}
          //SaveSolution[A];
          PostOperation[ globalquantities ];
          If(Flag_PostCuts)
            PostOperation[ meso_computations ];
          EndIf
        }
        Evaluate[ Python[Nbr_SubProblems, Flag_Dynamic, Freq,
                         NbSteps, 1, time0_j, timemax_j, dtime, 1, 0, j, (num_waveform_iterations + 1), $TimeStep, $Time]{"hmm_compute_waveform.py"} ];
        */
        EndFor // num_time_window
      EndIf //(Flag_Dynamic)          
    }
  }  
}

//ncuts = n_smc;
ncuts = 1;
ndeltacuts_x = 3;
ndeltacuts_y = 3;
numPtsDiscret = 2000;

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

      { Name MagneticPower_Upscaled_Local; Value {
          If(!Flag_Dynamic)
            Local { [ nu[] * SquNorm[{d a}] ]; In Domain_L; Jacobian JVol; }
          EndIf
          If(Flag_Dynamic)
            Local { [ nu[] * {d a} * Dt[{d a}]  ]; In Domain_L; Jacobian JVol; }
          EndIf
            Local { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 2]{"hmm_upscale_waveform.py"} ];
            In Domain_NL; Jacobian JVol; }
        } }

      { Name MagneticPower_Upscaled; Value {
          If(!Flag_Dynamic)
            Integral { [ nu[] * SquNorm[{d a}] ];
              In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          If(Flag_Dynamic)
            Integral { [ nu[] * {d a} * Dt[{d a}] ];
              In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          Integral { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 2]{"hmm_upscale_waveform.py"} ];
            In Domain_NL; Jacobian JVol; Integration I1; }
        } }
      { Name MagneticEnergy_Upscaled_Local; Value {
          If(!Flag_Dynamic)
            Local { [ nu[] * SquNorm[{d a}] ]; In Domain_L; Jacobian JVol; }
          EndIf
          If(Flag_Dynamic)
            Local { [ nu[] * {d a} * {d a}  ]; In Domain_L; Jacobian JVol; }
          EndIf
            Local { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 3]{"hmm_upscale_waveform.py"} ];
            In Domain_NL; Jacobian JVol; }
        } }

      { Name MagneticEnergy_Upscaled; Value {
          If(!Flag_Dynamic)
            Integral { [ nu[] * SquNorm[{d a}] ];
              In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          If(Flag_Dynamic)
            Integral { [ nu[] * {d a} * {d a} ];
              In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          Integral { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 3]{"hmm_upscale_waveform.py"} ];
            In Domain_NL; Jacobian JVol; Integration I1; }
        } }

      { Name JouleLosses_Upscaled_Local; Value {
          If(!Flag_Dynamic)
            Local { [ 0.0 ]; In Domain_L; Jacobian JVol; }
          EndIf
          If(Flag_Dynamic)
            Local { [ 0.0 ]; In Domain_L; Jacobian JVol; }
            Local { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 4]{"hmm_upscale_waveform_waveform.py"} ];
              In Domain_NL; Jacobian JVol; }
          EndIf
        } }

      { Name JouleLosses_Upscaled; Value {
          If(!Flag_Dynamic)
            Integral { [ 0.0 ]; In Domain_L; Jacobian JVol; Integration I1; }
          EndIf
          If(Flag_Dynamic)
            Integral { [ 0.0 ]; In Domain_L; Jacobian JVol; Integration I1; }
            Integral { [ Python[ElementNum[], QuadraturePointIndex[], $Time, 4]{"hmm_upscale_waveform.py"} ];
              In Domain_NL; Jacobian JVol; Integration I1; }
          EndIf
        } }

      For i In {1:ncuts:ndeltacuts_x}
        For j In {1:ncuts:ndeltacuts_y}
          k = (i-1)*ncuts + j;
          { Name data~{k}; Value {
              Local { [ 0*Python[ k, 0, $Time, 
                    CompX[{a}], CompY[{a}], CompZ[{a}],
                    CompX[{d a}], CompY[{d a}], CompZ[{d a}],
                    CompX[Dt[{a}]], CompY[Dt[{a}]], CompZ[Dt[{a}]],
                    CompX[Dt[{d a}] ], CompY[Dt[{d a}] ], CompZ[Dt[{d a}]] ]
                  {"hmm_downscale_waveform.py"} ];
                In Domain; Jacobian JVol; }
            } }
        EndFor
      EndFor
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
    }
  }

  For iTW In {1:num_time_windows}
    For iWR In {1:num_waveform_iterations}
    { Name maps~{((iTW - 1) * num_waveform_iterations + iWR)}; NameOfPostProcessing MagStaDyn_a_hmm;
        Operation {
          Print[ az, OnElementsOf Domain, File > StrCat[Dir_Macro,Sprintf("az_hmm_TW%g_WR%g.pos", iTW, iWR) ], LastTimeStepOnly ];
          Print[ a,  OnElementsOf Domain, File > StrCat[Dir_Macro,Sprintf("a_hmm_TW%g_WR%g.pos",  iTW, iWR) ], LastTimeStepOnly  ];
          Print[ b,  OnElementsOf Domain, File > StrCat[Dir_Macro,Sprintf("b_hmm_TW%g_WR%g.pos",  iTW, iWR) ], LastTimeStepOnly  ];
          Print[ h,  OnElementsOf Domain, File > StrCat[Dir_Macro,Sprintf("h_hmm_TW%g_WR%g.pos",  iTW, iWR) ], LastTimeStepOnly  ];
          Print[ js, OnElementsOf Domain, File > StrCat[Dir_Macro,Sprintf("js_hmm_TW%g_WR%g.pos", iTW, iWR) ], LastTimeStepOnly  ];
        }
      }
    EndFor
  EndFor
  
  For iTW In {1:num_time_windows}
    For iWR In {1:num_waveform_iterations}
    { Name globalquantities~{((iTW - 1) * num_waveform_iterations + iWR)}; NameOfPostProcessing MagStaDyn_a_hmm;
        Operation {
          Print[ MagneticEnergy_Macro[Domain], OnGlobal, Format TimeTable,
                 File > StrCat[Dir_Macro, Sprintf("MagneticEnergy_Macro_TW%g_WR%g.dat", iTW, iWR) ], LastTimeStepOnly ] ;
          Print[ MagneticEnergy_Upscaled[Domain], OnGlobal, Format TimeTable,
                 File > StrCat[Dir_Macro, Sprintf("MagneticEnergy_Upscaled_TW%g_WR%g.dat", iTW, iWR) ], LastTimeStepOnly ] ;
          Print[ MagneticPower_Upscaled[Domain], OnGlobal, Format TimeTable,
                 File > StrCat[Dir_Macro, Sprintf("MagneticPower_Upscaled_TW%g_WR%g.dat", iTW, iWR) ], LastTimeStepOnly ] ;
          Print[ JouleLosses_Upscaled[Domain_NL], OnGlobal, Format TimeTable,
                 File > StrCat[Dir_Macro, Sprintf("JouleLosses_Upscaled_TW%g_WR%g.dat", iTW, iWR) ], LastTimeStepOnly ] ;
        }
      }
    EndFor
  EndFor
      
  { Name writeInitialSolutionForNextTimeWindow; NameOfPostProcessing MagStaDyn_a_hmm;
    LastTimeStepOnly;
    Operation {
      Print[ a, OnElementsOf Domain, File StrCat[Dir_Macro,"a_hmm_Init.pos"] ];
    }
  }
    
  { Name globalquantities; NameOfPostProcessing MagStaDyn_a_hmm;
    //LastTimeStepOnly;
    Operation {
      Print[ MagneticEnergy_Macro[Domain], OnGlobal, Format TimeTable,
        File > StrCat[Dir_Macro, "MagneticEnergy_Macro.dat" ], LastTimeStepOnly ] ;
      Print[ MagneticEnergy_Upscaled[Domain], OnGlobal, Format TimeTable,
        File > StrCat[Dir_Macro, "MagneticEnergy_Upscaled.dat" ], LastTimeStepOnly ] ;
      Print[ MagneticPower_Upscaled[Domain], OnGlobal, Format TimeTable,
        File > StrCat[Dir_Macro, "MagneticPower_Upscaled.dat" ], LastTimeStepOnly ] ;
      Print[ JouleLosses_Upscaled[Domain_NL], OnGlobal, Format TimeTable,
        File > StrCat[Dir_Macro, "JouleLosses_Upscaled.dat" ], LastTimeStepOnly ] ;
    }
  }

  { Name meso_computations; NameOfPostProcessing MagStaDyn_a_hmm;
    //LastTimeStepOnly;
    Operation {
      For i In {1:ncuts:ndeltacuts_x}
        For j In {1:ncuts:ndeltacuts_y}
          k = (i-1)*ncuts + j;
          Print[ data~{k}, OnPoint {i*e-0.5*e, j*e-e/2, 0.},
             File StrCat[Dir_Macro,"dummy.pos"] , LastTimeStepOnly ];
        EndFor
      EndFor
    }
  }

  { Name cuts; NameOfPostProcessing MagStaDyn_a_hmm ;
    Operation {
      For iTS In {1:nTS}
        TS = listOfTS~{iTS};
        For i In {1:ncuts:ndeltacuts_x}
          Print[ az, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
            Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["az_ref_cut%g_TS%g", i, TS], ExtData ] ],
            TimeStep{TS}];
          Print[ a, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
            Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["a_ref_cut%g_TS%g", i, TS], ExtData ] ],
            TimeStep{TS} ];
          Print[ b, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
            Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["b_ref_cut%g_TS%g", i, TS], ExtData ] ],
            TimeStep{TS} ];
          Print[ h, OnLine{ {(i-0.5)*e , 0., 0.}{(i-0.5)*e , 500e-6, 0.} } {numPtsDiscret},
            Format Table, File StrCat[Dir_Macro, StrCat[Sprintf["h_ref_cut%g_TS%g", i, TS], ExtData ] ],
            TimeStep{TS} ];
        EndFor
      EndFor
    }
  }
}
