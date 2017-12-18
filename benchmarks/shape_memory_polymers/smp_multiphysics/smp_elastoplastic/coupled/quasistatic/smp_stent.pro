Include "smp_stent.dat";

DefineConstant[
  visu = {1, Choices{0, 1}, AutoCheck 0,
    Name "Input/Solver/Visu", Label "Real-time visualization"}
];

Group {
  Dirichlet_1 = Region[{DIRICHLET_MECHANICS_1}]; // Low line where we impose homogeneous Dirichlet condition
  Dirichlet_2 = Region[{DIRICHLET_MECHANICS_2}]; // Upper line where we impose non-homogeneous Dirichlet condition
  Domain_Mecha = Region[{DOMAIN_TUBE}]; // Mechanical domain

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
  DefineFunction[ FT_F, PK2, C_Tot_xx, C_Tot_xy, C_Tot_xz, C_Tot_yx, C_Tot_yy, C_Tot_yz, C_Tot_zx, C_Tot_zy, C_Tot_zz,  E_g, nu_g];
  DefineFunction[ Theta_Previous, F_f_Previous, F_p_Previous, F_pg_Previous, F_current, Theta_Current, F_f_Current, F_p_Current, F_pg_Current];
  
  // 1. Parameters of the problem
  //=============================
  E_r  = 0.9E6; // Young's modulus of the rubbery state
  nu_r = 0.49; // Poisson ratio of the rubbery state
  E_g  = 771.0e6; // Young's modulus of the glassy state
  nu_g = 0.29; // Poisson ratio of the glassy state
  c_f = 1.0;
  
  //Lame parameters
  //===============
  lambda_r = E_r/(2.0 * (1.0 + nu_r)); // First Lame parameter
  mu_r = (nu_r * E_r)/((1.0 + nu_r) * (1.0 - 2 * nu_r)); // Second Lame parameter
  lambda_g = E_g/(2.0 * (1.0 + nu_g)); // First Lame parameter
  mu_g = (nu_g * E_g)/((1.0 + nu_g) * (1.0 - 2 * nu_g)); // Second Lame parameter

  // Parameters used during resolution
  //==================================
  /*
    t_0 = 0.0;
    t_end = 4.0e-0;
    period = (t_end - t_0);
    Freq = 1.0/period;
  */  
  Freq = 1000.0;
  period = 1.0/Freq;
  t_0 = 0.0;
  t_end = 4.0 * period;
  
  tol_abs[] = $var_Tol_Abs;
  tol_rel[] = $var_Tol_Rel;
  iter_max = 50;
  dt_max[] = $var_Dt_Max;
  dtime[] = $var_DTime;
  v_TS[] = $var_TS;
  TS_Glassy = (1.375/4.00) * t_end;
  num_steps = 32;
  theta_value = 1.0;
  beta = 0.25;
  gamma = 0.5;
  theta[] = ( (0.0 <= $Time) && ($Time < (t_end/4.0) ) ? 400 :
              ( (t_end/4.0 <= $Time) && ($Time < (2 * t_end/4.0) ) ? (600 - 200 * $Time) :
                ( (2 * t_end/4.0 <= $Time) && ($Time < (3 * t_end/4.0) ) ? (200) :
                  ( (3 * t_end/4.0 <= $Time) && ($Time < (4 * t_end/4.0) ) ? (200 * $Time - 400) : 400 ) ) ) );
  /*
    If(0)
    theta[] = ( (0.0 <= $Time) && ($Time < (t_end/4.0) ) ? 400 :
    ( (t_end/4.0 <= $Time) && ($Time < (2 * t_end/4.0) ) ? (600 - 200 * $Time) :
    ( (2 * t_end/4.0 <= $Time) && ($Time < (3 * t_end/4.0) ) ? (200) :
    ( (3 * t_end/4.0 <= $Time) && ($Time < (4 * t_end/4.0) ) ? (200 * $Time - 400) : 400 ) ) ) );
    Else
    theta[] = ( (0.0 <= $Time) && ($Time < (t_end/4.0) ) ? 200 :
    ( (t_end/4.0 <= $Time) && ($Time < (2 * t_end/4.0) ) ? 200 :
    ( (2 * t_end/4.0 <= $Time) && ($Time < (3 * t_end/4.0) ) ? (200) :
    ( (3 * t_end/4.0 <= $Time) && ($Time < (4 * t_end/4.0) ) ? (200 * $Time - 400) : 400 ) ) ) );
    EndIf
  */
  theta_t = 300; //350
  delta_theta = 50;//30;
  omega = 0.2;//02;

  // Initialization of internal variables
  //=====================================
  Theta_Previous[] = 400.0;
  Theta_Current[] = theta[];
  
  F_f_Previous[] = Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0];
  F_p_Previous[] = Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0];
  F_pg_Previous[] = Tensor[1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0];

  F_tot_Current[] = $1#1;
  F_f_Current[] = (c_f * ($1 - TensorDiag[1.0, 1.0, 1.0]) + TensorDiag[1.0, 1.0, 1.0])#2; 
  F_pg_Current[] = $1#3; 
  F_p_Current[] = $1#4; 
  Flag_PlasticStep_Current[] = ($1)#21; 
  
  // The ratio z_g
  //==============
  z_g[] = $var_Z_g;

  // Definition of parameters of the Dirichlet BCs, the dynamic problem and the external force
  //==========================================================================================
  Dirichlet_Amplitude = 18.e-3;
  Dirichlet_Fun[] = ( ( (0 <= $Time) && ($Time < t_end/4.0) ) ? (- Dirichlet_Amplitude * $Time/(t_end/4.0)) : - Dirichlet_Amplitude );

  If(Flag_LagrangeMultiplier)  
    u_Dirichlet_Static~{1}[] = 0.0; u_Dirichlet_Static~{2}[] = 0.0; u_Dirichlet_Static~{3}[] = 0.0;
    u_Dirichlet_Dynamic~{1}[] = 0.0; u_Dirichlet_Dynamic~{2}[] = Dirichlet_Fun[]; u_Dirichlet_Dynamic~{3}[] = 0.0;
  EndIf
  If (Flag_Dynamic)
    rho[] = rho_0;
    C_Damping[] = 10;
    Const_Damping = 0;
  EndIf
  If (Flag_ExternalForce)
    force_amplitude = 1.8e03;
    force_ext[] = Vector[0., force_amplitude, 0.0];
  EndIf
    
  // Material properties for the electrothermal problem
  //====================================================

  Cos_Func[] = X[]/Sqrt[X[]*X[] + Y[]*Y[] ];
  Sin_Func[] = Y[]/Sqrt[X[]*X[] + Y[]*Y[] ];
  
  rotation_matrix[] = Tensor[Cos_Func[], -Sin_Func[], 0.0,
                             Sin_Func[],  Cos_Func[], 0.0,
                             0.0       ,  0.0       , 1.0];
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

  Init_Temp[Gamma_Convection_The] = 310;  
  Init_Temp[Domain_Temp_Tube] = 310;
  Init_Temp[Domain_Temp_Tissue] = 310;
  h_Conv[] = 500; // For Alu

  ba_E_s0[] = Vector[(- 0.5 * bs_0[]) * (Y[] + CompY[$1]), 0.5 * bs_0[] * (X[] + CompX[$1]), 0.0];
  ba_E_s[] =  ba_E_s0[$1] * (0.0 * F_Sin_wt_p[]{2 * Pi * Freq, 0 } - F_Cos_wt_p[]{2 * Pi * Freq, 0 }); 
  dt_ba_E_s[] = ba_E_s0[$1] * ( (2 * Pi * Freq) * (0.0 * F_Cos_wt_p[]{2 * Pi * Freq, 0 } + F_Sin_wt_p[]{2 * Pi * Freq, 0 } ) );
   
}
If(Flag_Plasticity)
    Include "smp_stent_KMat_Plasticity_Full.pro"; 
Else
  Include "smp_stent_KMat_Elasticity.pro";      
EndIf
Function {
  // 5.3 Total stiffness : C_Mat_ij +  C_Geo_ij
  //===========================================
  For i In {1:3} 
    For j In {1:3}
      If(Flag_Plasticity)
        C_Tot~{i}~{j}[] =  C_Mat~{i}~{j}[$1, $2, $3, $4, $5] + C_Geo~{i}~{j}[$1, $2, $3, $4];
      Else
        C_Tot~{i}~{j}[] =  C_Mat~{i}~{j}[$1] + C_Geo~{i}~{j}[$1];      
      EndIf
    EndFor
  EndFor
}

Constraint {
  { Name Displacement_1 ; // x
    Case {
      { Region Dirichlet_1; Value 0.0 ; }
      { Region Dirichlet_2; Value 0.0 ; }
    }
  }
  { Name Displacement_2 ; // y
    Case {
      { Region Dirichlet_1; Value 0.0 ; }
      If (!Flag_ExternalForce)
        { Region Dirichlet_2; Value 1.0; TimeFunction Dirichlet_Fun[$Time]  ; }
      EndIf
    }
  }
  { Name Displacement_3 ; // z
    Case {
      { Region Dirichlet_1; Value 0.0 ; }
      { Region Dirichlet_2; Value 0.0 ; }
    }
  }
  For i In {1:3}
    { Name Displacement0~{i} ;
      Case {
        { Region Dirichlet_1; Value 0.0 ; }
        { Region Dirichlet_2; Value 0.0 ; }
      }
    } 
  EndFor
}


Constraint {
  { Name BC_Temperature; // x
    Case {
      { Region Gamma_Dirichlet_The ; Type Assign ; Value 310.00 ; }
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
Include "Total_Lagrangian.pro"

Resolution {
  { Name Mec_SMP ;
    System {
      { Name Sys_Mec ; NameOfFormulation Total_Lagrangian ; }
      If(Flag_Plasticity)
        { Name Sys_Mec_Initialize_IV ; NameOfFormulation Total_Lagrangian_Initialize_IV ; }
        { Name Sys_Mec_set_IV_CurrentTimeStep ; NameOfFormulation Total_Lagrangian_set_IV_CurrentTimeStep ; }
        { Name Sys_Mec_get_IV_CurrentTimeStep ; NameOfFormulation Total_Lagrangian_get_IV_CurrentTimeStep ; }
      EndIf
    }
    Operation {
      If(Flag_DEGRE2)
        SetGlobalSolverOptions["-petsc_prealloc 400"];
      EndIf
      CreateDir["res/"];
      Evaluate[ $syscount = 0 ];
      InitSolution[Sys_Mec];
      If(Flag_Dynamic)// Initilization of the velocity and use of initial fine time step for dynamic problem
        InitSolution[Sys_Mec];
        Evaluate[ $var_DTime = period/(64 * num_steps)];
        Evaluate[ $var_Dt_Max = period/(64 * num_steps)];
      Else
        Evaluate[ $var_DTime = period/(num_steps)];
        Evaluate[ $var_Dt_Max = period/(num_steps)];
      EndIf
      Evaluate[ $var_TS = 0];
      If(Flag_Plasticity)
        Evaluate[ $var_InitIV = 0 ]; // Used for initilization of IV at current TS. "0": initilization at the begining. 1: setting IV at current TS. 2 : if TS has not converged.
      EndIf
      Evaluate[$var_Tol_Abs = 1.0e-8];
      Evaluate[$var_Tol_Rel = 1.0e-8];
      
      TimeLoopTheta[t_0, t_end/4, dtime[], theta_value]{ //TimeLoopNewmark[t_0, t_end, dtime[], beta, gamma]{
                
        // Variable used to update the ratio "z_g" of the glassy state
        //============================================================
        Test[ (theta[] > (theta_t - delta_theta) ) ]{
          Test[ (theta[] >= (theta_t + delta_theta) ) ]{ 
            Evaluate[$var_Z_g = 0.0]; // rubbery state
          }{
            Evaluate[$var_Z_g = (1.0/(1.0 + Exp[2 * omega * ( theta[] - theta_t) ] ) ) ]; // mix of both
          }
        }{
          Evaluate[$var_Z_g = 1.0]; // glassy state
        }
        
        // Variable used for the imposition of Dirichlet BCs
        //==================================================
        Test[ $Time <= (0.50 * period) ]{ 
          Evaluate[$var_Dirichlet_Dynamic = 1.0];
        }{
          Evaluate[$var_Dirichlet_Dynamic = 0.0];
        }

        // Initialization of the IV for the current time step
        //===================================================
        If(Flag_Plasticity)
          Test[ ($Time >= t_0) ]{
            Test[ ($var_InitIV == 0) ]{
              Evaluate[ Python[$var_InitIV]{"smp_stent_initializeIV.py"} ];
              Generate[Sys_Mec_Initialize_IV];
              Generate[Sys_Mec_set_IV_CurrentTimeStep];
              Evaluate[ Python[]{"smp_stent_updateIV.py"} ];
              Generate[Sys_Mec_get_IV_CurrentTimeStep];
            }{
              Evaluate[ Python[$var_InitIV]{"smp_stent_initializeIV.py"} ];
              Generate[Sys_Mec_set_IV_CurrentTimeStep];
              Evaluate[ Python[]{"smp_stent_updateIV.py"} ];
              Generate[Sys_Mec_get_IV_CurrentTimeStep];
            }
          }
        EndIf
        Generate[Sys_Mec]; Solve[Sys_Mec]; Evaluate[ $syscount = $syscount + 1 ];
        If(Flag_Plasticity)
          Test[ ($Time >= t_0 ) ]{ 
            Generate[Sys_Mec_set_IV_CurrentTimeStep];
            Evaluate[ Python[]{"smp_stent_updateIV.py"} ];
            Generate[Sys_Mec_get_IV_CurrentTimeStep];
          }
        EndIf

        // Variable used in the update of "F_f"
        //=====================================
        Test[ $Time > TS_Glassy ]{ 
          Evaluate[$var_TS = $var_TS + 1]; // variable used to track the TS at the end of the first stage. used for the update of the IV "F_f" 
        }
        Print[{$var_TS}, Format "var_TS =  %d"];

          
        Generate[Sys_Mec]; GetResidual[Sys_Mec, $res0]; Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > tol_abs[] && $res / $res0 > tol_rel[] && $res / $res0 <= 1 && $iter < iter_max]{
          Solve[Sys_Mec]; Evaluate[ $syscount = $syscount + 1 ];
          If(Flag_Plasticity)
            Test[ ($Time >= t_0 )]{ 
              Generate[Sys_Mec_set_IV_CurrentTimeStep];
              Evaluate[ Python[]{"smp_stent_updateIV.py"} ];
              Generate[Sys_Mec_get_IV_CurrentTimeStep];
            }
          EndIf
          Generate[Sys_Mec]; GetResidual[Sys_Mec, $res]; Evaluate[ $iter = $iter + 1 ];
          Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        }
        Test[ ($iter < iter_max) && ($res / $res0 <= 1) ]{
          SaveSolution[Sys_Mec];
          Test[ GetNumberRunTime[visu]{"Input/Solver/Visu"} ]{
            PostOperation[Mec];
          }
          Test[ ($iter < iter_max / 10) && ($DTime < dt_max[]) ]{
            Evaluate[ $dt_new = Min[$DTime * 2.0, dt_max[]] ];
            Print[{$dt_new}, Format "*** Fast convergence: increasing time step to %g"];
            SetDTime[$dt_new];
          }
          If(Flag_Plasticity)
            Evaluate[ $var_InitIV = 1 ];
          EndIf
        }
        {
          Evaluate[ $dt_new = $DTime/2.0 ];
          Print[{$iter, $dt_new}, Format "*** Non convergence (iter %g): recomputing with reduced step %g"];
          SetTime[$Time - $DTime];
          SetTimeStep[$TimeStep - 1];
          RemoveLastSolution[Sys_Mec];
          SetDTime[$dt_new];
          Evaluate[ $var_DTime = $dt_new ];
          If(Flag_Plasticity)
            Evaluate[ $var_InitIV = 2 ];
            Test[ $Time > TS_Glassy ]{ 
              Evaluate[$var_TS = $var_TS - 1]; // variable used to track the TS at the end of the first stage. used for the update of the IV "F_f" 
            }
          EndIf
        }
        
        // Variables used for adaptive absolute tolerance
        //===============================================
        Test[ $Time <= ((3.625/4.0) * t_end) ]{ 
          Test[ $Time < ((1.375/4.0) * t_end) ]{ 
            Evaluate[$var_Tol_Abs = 1.0e-8];
            Evaluate[$var_Tol_Rel = 1.0e-8];
          }{ 
            Evaluate[$var_Tol_Abs = 1.0e-6];
            Evaluate[$var_Tol_Rel = 1.0e-6];
          }
        }{
          Evaluate[$var_Tol_Abs = 1.0e-8];
          Evaluate[$var_Tol_Rel = 1.0e-8];
        }

        // Adaptive maximum time steps
        //==================z_g[]==========
        Test[ $Time >= ((3.0/4.0) * t_end) ]{
          Evaluate[$var_Dt_Max = period/(4 * num_steps)];
        }{
          Evaluate[$var_Dt_Max = period/num_steps];
        }
        // Adaptive time-stepping
        //=======================                
        Test[ ($DTime <= $var_Dt_Max) ]{ 
          Evaluate[$var_DTime = $DTime];
        }{
          Evaluate[$var_DTime = $var_Dt_Max];
        }
      }
      Print[{$syscount}, Format "Total number of linear systems solved: %g"];
    }
  }
}

PostOperation {
  { Name Mec ; NameOfPostProcessing Total_Lagrangian; 
    Operation {
      Print[ u, OnElementsOf Domain_Mecha, File "res/u.pos"] ;
      Print[ PK2_xx, OnElementsOf Domain_Mecha, File "res/PK2_xx.pos"] ;
      Print[ PK2_xy, OnElementsOf Domain_Mecha, File "res/PK2_xy.pos"] ;
      Print[ PK2_xz, OnElementsOf Domain_Mecha, File "res/PK2_xz.pos"] ;
      Print[ PK2_yx, OnElementsOf Domain_Mecha, File "res/PK2_yx.pos"] ;
      Print[ PK2_yy, OnElementsOf Domain_Mecha, File "res/PK2_yy.pos"] ;
      Print[ PK2_yz, OnElementsOf Domain_Mecha, File "res/PK2_yz.pos"] ;
      Print[ PK2_zx, OnElementsOf Domain_Mecha, File "res/PK2_zx.pos"] ;
      Print[ PK2_zy, OnElementsOf Domain_Mecha, File "res/PK2_zy.pos"] ;
      Print[ PK2_zz, OnElementsOf Domain_Mecha, File "res/PK2_zz.pos"] ;

      If(1)
        If(Flag_Plasticity)
          Print[ F_f_xx, OnElementsOf Domain_Mecha, File "res/F_f_xx.pos"] ;
          Print[ F_f_xy, OnElementsOf Domain_Mecha, File "res/F_f_xy.pos"] ;
          Print[ F_f_xz, OnElementsOf Domain_Mecha, File "res/F_f_xz.pos"] ;
          Print[ F_f_yx, OnElementsOf Domain_Mecha, File "res/F_f_yx.pos"] ;
          Print[ F_f_yy, OnElementsOf Domain_Mecha, File "res/F_f_yy.pos"] ;
          Print[ F_f_yz, OnElementsOf Domain_Mecha, File "res/F_f_yz.pos"] ;
          Print[ F_f_zx, OnElementsOf Domain_Mecha, File "res/F_f_zx.pos"] ;
          Print[ F_f_zy, OnElementsOf Domain_Mecha, File "res/F_f_zy.pos"] ;
          Print[ F_f_zz, OnElementsOf Domain_Mecha, File "res/F_f_zz.pos"] ;

          Print[ F_f_Current_xx, OnElementsOf Domain_Mecha, File "res/F_f_xx_Current.pos"] ;
          Print[ F_f_Current_xy, OnElementsOf Domain_Mecha, File "res/F_f_xy_Current.pos"] ;
          Print[ F_f_Current_xz, OnElementsOf Domain_Mecha, File "res/F_f_xz_Current.pos"] ;
          Print[ F_f_Current_yx, OnElementsOf Domain_Mecha, File "res/F_f_yx_Current.pos"] ;
          Print[ F_f_Current_yy, OnElementsOf Domain_Mecha, File "res/F_f_yy_Current.pos"] ;
          Print[ F_f_Current_yz, OnElementsOf Domain_Mecha, File "res/F_f_yz_Current.pos"] ;
          Print[ F_f_Current_zx, OnElementsOf Domain_Mecha, File "res/F_f_zx_Current.pos"] ;
          Print[ F_f_Current_zy, OnElementsOf Domain_Mecha, File "res/F_f_zy_Current.pos"] ;
          Print[ F_f_Current_zz, OnElementsOf Domain_Mecha, File "res/F_f_zz_Current.pos"] ;
        EndIf        
        Print[ F_tot_xx, OnElementsOf Domain_Mecha, File "res/F_tot_xx.pos"] ;
        Print[ F_tot_xy, OnElementsOf Domain_Mecha, File "res/F_tot_xy.pos"] ;
        Print[ F_tot_xz, OnElementsOf Domain_Mecha, File "res/F_tot_xz.pos"] ;
        Print[ F_tot_yx, OnElementsOf Domain_Mecha, File "res/F_tot_yx.pos"] ;
        Print[ F_tot_yy, OnElementsOf Domain_Mecha, File "res/F_tot_yy.pos"] ;
        Print[ F_tot_yz, OnElementsOf Domain_Mecha, File "res/F_tot_yz.pos"] ;
        Print[ F_tot_zx, OnElementsOf Domain_Mecha, File "res/F_tot_zx.pos"] ;
        Print[ F_tot_zy, OnElementsOf Domain_Mecha, File "res/F_tot_zy.pos"] ;
        Print[ F_tot_zz, OnElementsOf Domain_Mecha, File "res/F_tot_zz.pos"] ;
      EndIf

      Print[ T, OnElementsOf Domain_Temp, File "res/T.pos"] ;
      Print[ q_Cond, OnElementsOf Domain_Temp, File "res/q_Cond.pos"] ;
      Print[ q_Conv, OnElementsOf Gamma_Convection_The, File "res/q_Conv.pos"] ;
      Print[ T_Conv, OnElementsOf Gamma_Convection_The, File "res/T_Conv.pos"] ;

      Print[ V, OnElementsOf Domain_EleMag, File "res/V.pos"] ;
      Print[ ba_E_s, OnElementsOf Domain_EleMag, File "res/ba_E_s.pos"] ;
      Print[ dt_ba_E_s, OnElementsOf Domain_EleMag, File "res/dt_ba_E_s.pos"] ;
      Print[ GradV, OnElementsOf Domain_EleMag, File "res/GradV.pos"] ;
      Print[ n_J_dt_ba_s, OnElementsOf Domain_EleMag, File "res/n_J_dt_ba_s.pos"] ;
      Print[ n_J_GradV, OnElementsOf Domain_EleMag, File "res/n_J_GradV.pos"] ;
      Print[ n_J_tot, OnElementsOf Domain_EleMag, File "res/n_J_tot.pos"] ;
      Print[ e, OnElementsOf Domain_EleMag, File "res/e.pos"] ;
      Print[ j, OnElementsOf Domain_EleMag, File "res/j.pos"] ;
      Print[ Joule_Losses, OnElementsOf Domain_EleMag, File "res/JouleLosses.pos"] ;
      Print[ Joule_Losses_J, OnElementsOf Domain_EleMag, File "res/JouleLosses_J.pos"] ;
      Print[ residual_dt_ba, OnElementsOf Domain_EleMag, File "res/residual_dt_ba.pos"] ;
      Print[ residual_GradV, OnElementsOf Domain_EleMag, File "res/residual_GradV.pos"] ;
      Print[ residual_tot, OnElementsOf Domain_EleMag, File "res/residual_tot.pos"] ;
      Print[ J_Mean_Surf1[EleMag_Cuts_1], OnGlobal, Format TimeTable, File "res/J_Mean_Surf1.txt"] ;
      Print[ J_Mean_Surf2[EleMag_Cuts_2], OnGlobal, Format TimeTable, File "res/J_Mean_Surf2.txt"] ;
      Print[ J_Mean_Surf3[EleMag_Cuts_3], OnGlobal, Format TimeTable, File "res/J_Mean_Surf3.txt"] ;
      Print[ J_Mean_Surf4[EleMag_Cuts_4], OnGlobal, Format TimeTable, File "res/J_Mean_Surf4.txt"] ;
    }
  }
  { Name Mec_Test ; NameOfPostProcessing Total_Lagrangian; LastTimeStepOnly visu;
    Operation {
      Print[ u, OnElementsOf Domain_Mecha, File > "res/u_Test.pos"] ;
      Print[ PK2_xx, OnElementsOf Domain_Mecha, File > "res/PK2_xx_Test.pos"] ;
      Print[ PK2_xy, OnElementsOf Domain_Mecha, File > "res/PK2_xy_Test.pos"] ;
      Print[ PK2_xz, OnElementsOf Domain_Mecha, File > "res/PK2_xz_Test.pos"] ;
      Print[ PK2_yx, OnElementsOf Domain_Mecha, File > "res/PK2_yx_Test.pos"] ;
      Print[ PK2_yy, OnElementsOf Domain_Mecha, File > "res/PK2_yy_Test.pos"] ;
      Print[ PK2_yz, OnElementsOf Domain_Mecha, File > "res/PK2_yz_Test.pos"] ;
      Print[ PK2_zx, OnElementsOf Domain_Mecha, File > "res/PK2_zx_Test.pos"] ;
      Print[ PK2_zy, OnElementsOf Domain_Mecha, File > "res/PK2_zy_Test.pos"] ;
      Print[ PK2_zz, OnElementsOf Domain_Mecha, File > "res/PK2_zz_Test.pos"] ;
      
      If(Flag_Plasticity)
        Print[ F_f_xx, OnElementsOf Domain_Mecha, File > "res/F_f_xx_Test.pos"] ;
        Print[ F_f_xy, OnElementsOf Domain_Mecha, File > "res/F_f_xy_Test.pos"] ;
        Print[ F_f_xz, OnElementsOf Domain_Mecha, File > "res/F_f_xz_Test.pos"] ;
        Print[ F_f_yx, OnElementsOf Domain_Mecha, File > "res/F_f_yx_Test.pos"] ;
        Print[ F_f_yy, OnElementsOf Domain_Mecha, File > "res/F_f_yy_Test.pos"] ;
        Print[ F_f_yz, OnElementsOf Domain_Mecha, File > "res/F_f_yz_Test.pos"] ;
        Print[ F_f_zx, OnElementsOf Domain_Mecha, File > "res/F_f_zx_Test.pos"] ;
        Print[ F_f_zy, OnElementsOf Domain_Mecha, File > "res/F_f_zy_Test.pos"] ;
        Print[ F_f_zz, OnElementsOf Domain_Mecha, File > "res/F_f_zz_Test.pos"] ;
      EndIf
        
      Print[ F_tot_xx, OnElementsOf Domain_Mecha, File > "res/F_tot_xx_Test.pos"] ;
      Print[ F_tot_xy, OnElementsOf Domain_Mecha, File > "res/F_tot_xy_Test.pos"] ;
      Print[ F_tot_xz, OnElementsOf Domain_Mecha, File > "res/F_tot_xz_Test.pos"] ;
      Print[ F_tot_yx, OnElementsOf Domain_Mecha, File > "res/F_tot_yx_Test.pos"] ;
      Print[ F_tot_yy, OnElementsOf Domain_Mecha, File > "res/F_tot_yy_Test.pos"] ;
      Print[ F_tot_yz, OnElementsOf Domain_Mecha, File > "res/F_tot_yz_Test.pos"] ;
      Print[ F_tot_zx, OnElementsOf Domain_Mecha, File > "res/F_tot_zx_Test.pos"] ;
      Print[ F_tot_zy, OnElementsOf Domain_Mecha, File > "res/F_tot_zy_Test.pos"] ;
      Print[ F_tot_zz, OnElementsOf Domain_Mecha, File > "res/F_tot_zz_Test.pos"] ;
      
      Print[ T, OnElementsOf Domain_Temp, File > "res/T_Test.pos"] ;
      Print[ q_Cond, OnElementsOf Domain_Temp, File > "res/q_Cond_Test.pos"] ;
      Print[ q_Conv, OnElementsOf Gamma_Convection_The, File > "res/q_Conv_Test.pos"] ;
      Print[ T_Conv, OnElementsOf Gamma_Convection_The, File > "res/T_Conv_Test.pos"] ;
      
      Print[ V, OnElementsOf Domain_EleMag, File > "res/V_Test.pos"] ;
      Print[ GradV, OnElementsOf Domain_EleMag, File > "res/GradV_Test.pos"] ;
      Print[ n_J_GradV, OnElementsOf Domain_EleMag, File > "res/n_J_GradV_Test.pos"] ;
      Print[ ba_E_s, OnElementsOf Domain_EleMag, File > "res/ba_E_s_Test.pos"] ;
      Print[ dt_ba_E_s, OnElementsOf Domain_EleMag, File > "res/dt_ba_E_s_Test.pos"] ;
      Print[ n_J_dt_ba_s, OnElementsOf Domain_EleMag, File > "res/n_J_dt_ba_s_Test.pos"] ;
      Print[ n_J_tot, OnElementsOf Domain_EleMag, File > "res/n_J_tot_Test.pos"] ;
      Print[ e, OnElementsOf Domain_EleMag, File > "res/e_Test.pos"] ;
      Print[ j, OnElementsOf Domain_EleMag, File > "res/j_Test.pos"] ;
      Print[ Joule_Losses, OnElementsOf Domain_EleMag, File > "res/JouleLosses_Test.pos"] ;
      Print[ Joule_Losses_J, OnElementsOf Domain_EleMag, File > "res/JouleLosses_J_Test.pos"] ;
      Print[ residual_dt_ba, OnElementsOf Domain_EleMag, File > "res/residual_dt_ba_Test.pos"] ;
      Print[ residual_GradV, OnElementsOf Domain_EleMag, File > "res/residual_GradV_Test.pos"] ;
      Print[ residual_tot, OnElementsOf Domain_EleMag, File > "res/residual_tot_Test.pos"] ;
      Print[ J_Mean_Surf1[EleMag_Cuts_1], OnGlobal, Format TimeTable, File > "res/J_Mean_Surf1_Test.txt"] ;
      Print[ J_Mean_Surf2[EleMag_Cuts_2], OnGlobal, Format TimeTable, File > "res/J_Mean_Surf2_Test.txt"] ;
      Print[ J_Mean_Surf3[EleMag_Cuts_3], OnGlobal, Format TimeTable, File > "res/J_Mean_Surf3_Test.txt"] ;
      Print[ J_Mean_Surf4[EleMag_Cuts_4], OnGlobal, Format TimeTable, File > "res/J_Mean_Surf4_Test.txt"] ;
    }
  }
  { Name Mec_Last ; NameOfPostProcessing Total_Lagrangian; 
    Operation {
      Print[ u, OnElementsOf Domain_Mecha, File "res/u_tot.pos"] ;
      
      Print[ PK2_xx, OnElementsOf Domain_Mecha, File "res/PK2_tot_xx.pos"] ;
      Print[ PK2_xy, OnElementsOf Domain_Mecha, File "res/PK2_tot_xy.pos"] ;
      Print[ PK2_xz, OnElementsOf Domain_Mecha, File "res/PK2_tot_xz.pos"] ;
      Print[ PK2_yx, OnElementsOf Domain_Mecha, File "res/PK2_tot_yx.pos"] ;
      Print[ PK2_yy, OnElementsOf Domain_Mecha, File "res/PK2_tot_yy.pos"] ;
      Print[ PK2_yz, OnElementsOf Domain_Mecha, File "res/PK2_tot_yz.pos"] ;
      Print[ PK2_zx, OnElementsOf Domain_Mecha, File "res/PK2_tot_zx.pos"] ;
      Print[ PK2_zy, OnElementsOf Domain_Mecha, File "res/PK2_tot_zy.pos"] ;
      Print[ PK2_zz, OnElementsOf Domain_Mecha, File "res/PK2_tot_zz.pos"] ;
    }
  }
}

DefineConstant[
  R_ = {"Mec_SMP", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { "", Name "GetDP/2PostOperationChoices", Visible 0}
];
