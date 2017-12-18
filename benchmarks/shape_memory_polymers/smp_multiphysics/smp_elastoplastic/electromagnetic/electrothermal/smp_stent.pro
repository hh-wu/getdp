Include "smp_stent.dat";

DefineConstant[
  visu = {1, Choices{0, 1}, AutoCheck 0,
    Name "Input/Solver/Visu", Label "Real-time visualization"}
];

Group{
  Dirichlet_BC = Region[{DIRICHLET_THERMAL}]; // Outer surface in contact with the body where we body temperature
  Convection_BC = Region[{CONVECTION_THERMAL}]; // Outer surface in contact with the body where we body temperature
  Gamma_Dirichlet_The = Region[{Dirichlet_BC}]; // Outer surface in contact with the body where we body temperature
  Gamma_Convection_The = Region[{Convection_BC}]; // Inner surface where convection takes place  
  Domain_Temp_Tube = Region[{DOMAIN_TUBE}]; // Thermal domain
  Domain_Temp_Tissue = Region[{DOMAIN_TISSUE}]; // Thermal domain
  Domain_Temp = Region[{Domain_Temp_Tube, Domain_Temp_Tissue}]; // Thermal domain

  Gamma_Dirichlet_EleMag = Region[{DIRICHLET_ELEMAG}]; // a point of the domain where we impose the potential
  Gamma_AllBoundary_EleMag = Region[{ALL_BOUNDARY}]; // a point of the domain where we impose the potential
  EleMag_Cuts_1 = Region[{ELEMAG_CUTS_1}]; 
  EleMag_Cuts_2 = Region[{ELEMAG_CUTS_2}]; 
  EleMag_Cuts_3 = Region[{ELEMAG_CUTS_3}]; 
  EleMag_Cuts_4 = Region[{ELEMAG_CUTS_4}]; 
  Domain_EleMag = Region[{DOMAIN_TUBE}]; // Electromagnetic domain

}

Function {

  // 1. Parameters of the problem
  //=============================

  // Parameters used during resolution
  //==================================
  Freq = 1000.0;
  period = 1.0/Freq;
  t_0 = 0.0;
  t_end = 10 * period;

  tol_abs[] = $var_Tol_Abs;
  tol_rel[] = $var_Tol_Rel;
  iter_max = 50;
  dt_max[] = $var_Dt_Max;
  dtime[] = $var_DTime;
  num_steps = 16; // number of time steps per period
  theta_value = 1.0;
  beta = 0.25;
  gamma = 0.5;

  // Material properties for the electrothermal problem
  //====================================================

  Cos_Func[] = X[]/Sqrt[X[]*X[] + Y[]*Y[] ];
  Sin_Func[] = Y[]/Sqrt[X[]*X[] + Y[]*Y[] ];
  
  rotation_matrix[] = Tensor[Cos_Func[], -Sin_Func[], 0.0,
                             Sin_Func[],  Cos_Func[], 0.0,
                             0.0      ,  0.0      , 1.0];
  thermal_conductivity_tensor_cartesian[] = TensorDiag[1.0, 1.0, 1.0];
  thermal_conductivity_tensor_cylindrical[] =  Transpose[rotation_matrix[]] * thermal_conductivity_tensor_cartesian[] * rotation_matrix[];

  kappa_alu = 237; // for Alu
  kappa_tissue = 0.465; // for the tissue
  kappa_The[Gamma_Convection_The] = kappa_alu * thermal_conductivity_tensor_cylindrical[]; // For Alu
  kappa_The[Domain_Temp_Tube] = kappa_alu * thermal_conductivity_tensor_cylindrical[]; // For Alu
  kappa_The[Domain_Temp_Tissue] = kappa_tissue * thermal_conductivity_tensor_cylindrical[]; // For the tissue

  rho_temp[] = 2700; // For Alu;
  
  cp_Temp[Domain_Temp_Tube] = 90; // For Alu
  cp_Temp[Gamma_Convection_The] = 90; // For Alu
  cp_Temp[Domain_Temp_Tissue] = 3500; // For tissue

  sigma[] = 1.0e4; // for the SMP

  Temperature_Blood[] = 310; // for Alu

  N = 1000; L = 1; mu_0 = 4 * Pi * 1e-7; mu_rel = 20; I_s = 5000.0; bs_0[] = (N/L) * mu_0 * mu_rel * I_s;
  
  Init_Temp[Domain_Temp_Tube] = 300;
  Init_Temp[Gamma_Convection_The] = 300;
  Init_Temp[Domain_Temp_Tissue] = 310;
  h_Conv[] = 500; // For Alu

  ba_E_s0[] = Vector[(- 0.5 * bs_0[]) * (Y[]), 0.5 * bs_0[] * (X[]), 0.0];
  ba_E_s[] =  ba_E_s0[] * (0.0 * F_Sin_wt_p[]{2 * Pi * Freq, 0 } -  F_Cos_wt_p[]{2 * Pi * Freq, 0 }); 
  dt_ba_E_s[] = ba_E_s0[] * ( (2 * Pi * Freq) * (0.0 * F_Cos_wt_p[]{2 * Pi * Freq, 0 } + F_Sin_wt_p[]{2 * Pi * Freq, 0 } ) );
}

Constraint {
  { Name BC_Temperature; // x
    Case {
      { Region Dirichlet_BC ; Type Assign ; Value 310 ; }
      //{ Region Convection_BC ; Type Assign ; Value 350 ; }
    }
  }
  { Name Init_Temperature; // x
    Case {
      { Region Domain_Temp ; Type Init ; Value Init_Temp[] ; }
    }
  }
}
Constraint {
  { Name BC_Potential; // x
    Case {
      { Region Gamma_Dirichlet_EleMag ; Type Assign ; Value 0.0 ; }
    }
  }
}

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "ElectroThe.pro"

Resolution {
  { Name ElectroThe ;
    System {
      { Name ElectroThe ; NameOfFormulation ElectroThe ; }
    }
    Operation {
      If(Flag_DEGRE2)
        SetGlobalSolverOptions["-petsc_prealloc 400"];
      EndIf
      CreateDir["res/"];
      Evaluate[ $syscount = 0 ];
      InitSolution[ElectroThe];
      Evaluate[ $var_DTime = period/(num_steps)];
      Evaluate[ $var_Dt_Max = period/(num_steps)];
      Evaluate[$var_Tol_Abs = 1.0e-8];
      Evaluate[$var_Tol_Rel = 1.0e-8];
      
      TimeLoopTheta[t_0, 1.25, dtime[], theta_value]{
                
        Generate[ElectroThe]; Solve[ElectroThe]; Evaluate[ $syscount = $syscount + 1 ];
        Generate[ElectroThe]; GetResidual[ElectroThe, $res0]; Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > tol_abs[] && $res / $res0 > tol_rel[] && $res / $res0 <= 1 && $iter < iter_max]{
          Solve[ElectroThe]; Evaluate[ $syscount = $syscount + 1 ];
          Generate[ElectroThe]; GetResidual[ElectroThe, $res]; Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
        Test[ ($iter < iter_max) && ($res / $res0 <= 1) ]{
          SaveSolution[ElectroThe];
          Test[ GetNumberRunTime[visu]{"Input/Solver/Visu"} ]{
            PostOperation[ElectroThe_Fields];
          }
          Test[ ($iter < iter_max / 10) && ($DTime < dt_max[]) ]{
            Evaluate[ $dt_new = Min[$DTime * 2.0, dt_max[]] ];
            Print[{$dt_new}, Format "*** Fast convergence: increasing time step to %g"];
            SetDTime[$dt_new];
          }
        }
        {
          Evaluate[ $dt_new = $DTime/2.0 ];
          Print[{$iter, $dt_new}, Format "*** Non convergence (iter %g): recomputing with reduced step %g"];
          SetTime[$Time - $DTime];
          SetTimeStep[$TimeStep - 1];
          RemoveLastSolution[ElectroThe];
          SetDTime[$dt_new];
          Evaluate[ $var_DTime = $dt_new ];
        }
      }
      Print[{$syscount}, Format "Total number of linear systems solved: %g"];
    }
  }
}

PostOperation {
  { Name ElectroThe_Fields ; NameOfPostProcessing ElectroThe;
    Operation {
      Print[ T, OnElementsOf Domain_Temp, File "res/T.pos"] ;
      Print[ T_Conv, OnElementsOf Gamma_Convection_The, File "res/T_Conv.pos"] ;
      Print[ q_Cond, OnElementsOf Domain_Temp, File "res/q_Cond.pos"] ;
      Print[ q_Conv, OnElementsOf Gamma_Convection_The, File "res/q_Conv.pos"] ;
      Print[ dt_Energy, OnElementsOf Domain_Temp, File "res/dt_Energy.pos"] ;
      Print[ Diffusion_Energy, OnElementsOf Domain_Temp, File "res/Diffusion_Energy.pos"] ;

      Print[ V, OnElementsOf Domain_EleMag, File "res/V.pos"] ;
      Print[ GradV, OnElementsOf Domain_EleMag, File "res/GradV.pos"] ;
      Print[ ba_E_s, OnElementsOf Domain_EleMag, File "res/ba_E_s.pos"] ;
      Print[ dt_ba_E_s, OnElementsOf Domain_EleMag, File "res/dt_ba_E_s.pos"] ;
      Print[ n_J_dt_ba_s, OnElementsOf Domain_EleMag, File "res/n_J_dt_ba_s.pos"] ;
      Print[ n_J_GradV, OnElementsOf Domain_EleMag, File "res/n_J_GradV.pos"] ;
      Print[ n_J_tot, OnElementsOf Domain_EleMag, File "res/n_J_tot.pos"] ;
      Print[ e, OnElementsOf Domain_EleMag, File "res/e.pos"] ;
      Print[ j, OnElementsOf Domain_EleMag, File "res/j.pos"] ;
      Print[ Joule_Losses, OnElementsOf Domain_EleMag, File "res/JouleLosses.pos"] ;
    }
  }
  /*
  { Name ElectroThe_Test ; NameOfPostProcessing ElectroThe; LastTimeStepOnly visu;
    Operation {
      Print[ T, OnElementsOf Domain_Temp, File > "res/T_Test.pos"] ;
      Print[ T_Conv, OnElementsOf Gamma_Convection_The, File > "res/T_Conv_Test.pos"] ;
      Print[ q_Cond, OnElementsOf Domain_Temp, File > "res/q_Cond_Test.pos"] ;
      Print[ q_Conv, OnElementsOf Gamma_Convection_The, File > "res/q_Conv_Test.pos"] ;
      Print[ dt_Energy, OnElementsOf Domain_Temp, File > "res/dt_Energy_Test.pos"] ;
      Print[ Diffusion_Energy, OnElementsOf Domain_Temp, File > "res/Diffusion_Energy_Test.pos"] ;


      Print[ V, OnElementsOf Domain_EleMag, File > "res/V_Test.pos"] ;
      Print[ GradV, OnElementsOf Domain_EleMag, File > "res/GradV_Test.pos"] ;
      Print[ ba_E_s, OnElementsOf Domain_EleMag, File > "res/ba_E_s_Test.pos"] ;
      Print[ dt_ba_E_s, OnElementsOf Domain_EleMag, File > "res/dt_ba_E_s_Test.pos"] ;
      Print[ n_J_GradV, OnElementsOf Domain_EleMag, File > "res/n_J_GradV_Test.pos"] ;
      Print[ n_J_dt_ba_s, OnElementsOf Domain_EleMag, File > "res/n_J_dt_ba_s_Test.pos"] ;
      Print[ n_J_tot, OnElementsOf Domain_EleMag, File > "res/n_J_tot_Test.pos"] ;
      Print[ e, OnElementsOf Domain_EleMag, File > "res/e_Test.pos"] ;
      Print[ j, OnElementsOf Domain_EleMag, File > "res/j_Test.pos"] ;
      Print[ Joule_Losses, OnElementsOf Domain_EleMag, File > "res/JouleLosses_Test.pos"] ;
    }
  }
  */
  { Name ElectroThermal_Fields_Last ; NameOfPostProcessing ElectroThe; 
    Operation {
      Print[ T, OnElementsOf Domain_Temp, File "res/T_Last.pos"] ;
      Print[ T_Conv, OnElementsOf Gamma_Convection_The, File "res/T_Conv_Last.pos"] ;
      Print[ q_Cond, OnElementsOf Domain_Temp, File "res/q_Cond_Last.pos"] ;
      Print[ q_Conv, OnElementsOf Gamma_Convection_The, File "res/q_Conv_Last.pos"] ;

      Print[ V, OnElementsOf Domain_EleMag, File "res/V_Last.pos"] ;
      Print[ GradV, OnElementsOf Domain_EleMag, File "res/GradV_Last.pos"] ;
      Print[ ba_E_s, OnElementsOf Domain_EleMag, File "res/ba_E_s_Last.pos"] ;
      Print[ dt_ba_E_s, OnElementsOf Domain_EleMag, File "res/dt_ba_E_s_Last.pos"] ;
      Print[ n_J_dt_ba_s, OnElementsOf Domain_EleMag, File "res/n_J_dt_ba_s_Last.pos"] ;
      Print[ n_J_GradV, OnElementsOf Domain_EleMag, File "res/n_J_GradV_Last.pos"] ;
      Print[ n_J_tot, OnElementsOf Domain_EleMag, File "res/n_J_tot_Last.pos"] ;
      Print[ e, OnElementsOf Domain_EleMag, File "res/e_Last.pos"] ;
      Print[ j, OnElementsOf Domain_EleMag, File "res/j_Last.pos"] ;
      Print[ Joule_Losses, OnElementsOf Domain_EleMag, File "res/JouleLosses_Last.pos"] ;
    }
  }
}

DefineConstant[
  R_ = {"Mec_SMP", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { "", Name "GetDP/2PostOperationChoices", Visible 0}
];
