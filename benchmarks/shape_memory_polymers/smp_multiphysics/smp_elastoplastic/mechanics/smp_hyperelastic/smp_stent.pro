Include "smp_stent.dat";

DefineConstant[
  visu = {1, Choices{0, 1}, AutoCheck 0,
    Name "Input/Solver/Visu", Label "Real-time visualization"}
];

Group {
  Dirichlet_1 = Region[{DIRICHLET_MECHANICS_1}]; // Low line where we impose homogeneous Dirichlet condition
  Dirichlet_2 = Region[{DIRICHLET_MECHANICS_2}]; // Upper line where we impose non-homogeneous Dirichlet condition
  Domain_Mecha = Region[{DOMAIN_TUBE}]; // Mechanical domain
}

Function {
  DefineFunction[ FT_F, PK2, C_Tot_xx, C_Tot_xy, C_Tot_xz, C_Tot_yx, C_Tot_yy, C_Tot_yz, C_Tot_zx, C_Tot_zy, C_Tot_zz,  E_g, nu_g];
  
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

  //Other material properties
  //=========================
  rho_0 = 2700; // for Alu
  cp_0 = 897; // for Alu

  // Parameters used during resolution
  //==================================
  t_0 = 0.0;
  t_end = 4.0e-0;
  period = (t_end - t_0);
  Freq = 1.0/period;
  tol_abs[] = 1e-8;
  tol_rel[] = 1e-8;
  iter_max = 50;
  dt_max[] = $var_Dt_Max;
  dtime[] = $var_DTime;
  v_TS[] = $var_TS;
  num_steps = 32;
  theta_value = 1.0;
  beta = 0.25;
  gamma = 0.5;

  theta[] = ( (0.0 <= $Time) && ($Time < (t_end/4.0) ) ? 400 :
              ( (t_end/4.0 <= $Time) && ($Time < (2 * t_end/4.0) ) ? (600 - 200 * $Time) :
                ( (2 * t_end/4.0 <= $Time) && ($Time < (3 * t_end/4.0) ) ? (200) :
                  ( (3 * t_end/4.0 <= $Time) && ($Time < (4 * t_end/4.0) ) ? (200 * $Time - 400) : 400 ) ) ) );
  theta_t = 300; //350
  delta_theta = 25;//30;
  omega = 0.1;//02;
  
  // The ratio z_g
  //==============
  z_g[] = $var_Z_g;
  

  
  // Definition of parameters of the Dirichlet BCs, the dynamic problem and the external force
  //==========================================================================================
  Dirichlet_Amplitude = 18.e-3;
  Dirichlet_Fun[] = ( ( (0 <= $Time) && ($Time < t_end/4.0) ) ? (- Dirichlet_Amplitude * $Time) : - Dirichlet_Amplitude );

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

    
}

Include "smp_stent_KMat_Elasticity.pro";      

Function {
  // 5.3 Total stiffness : C_Mat_ij +  C_Geo_ij
  //===========================================
  For i In {1:3} 
    For j In {1:3}
      C_Tot~{i}~{j}[] =  C_Mat~{i}~{j}[$1] + C_Geo~{i}~{j}[$1];      
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


Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "Total_Lagrangian.pro"

Resolution {
  { Name Mec_SMP ;
    System {
      { Name Sys_Mec ; NameOfFormulation Total_Lagrangian ; }
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
        
      TimeLoopTheta[t_0, 1.0 * t_end, dtime[], theta_value]{ //TimeLoopNewmark[t_0, t_end, dtime[], beta, gamma] {

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
        
        
        // Variables used for the imposition of Dirichlet BCs
        //===================================================
        Test[ $Time <= (0.50 * period) ]{ 
          Evaluate[$var_Dirichlet_Dynamic = 1.0];
        }{
          Evaluate[$var_Dirichlet_Dynamic = 0.0];
        }

        Generate[Sys_Mec]; Solve[Sys_Mec]; Evaluate[ $syscount = $syscount + 1 ];
        Generate[Sys_Mec]; GetResidual[Sys_Mec, $res0]; Evaluate[ $res = $res0, $iter = 0 ];
        Print[{$iter, $res, $res / $res0}, Format "Residual %03g: abs %14.12e rel %14.12e"];
        While[$res > tol_abs[] && $res / $res0 > tol_rel[] && $res / $res0 <= 1 && $iter < iter_max]{
          Solve[Sys_Mec]; Evaluate[ $syscount = $syscount + 1 ];
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
        }
        {
          Evaluate[ $dt_new = $DTime/2.0 ];
          Print[{$iter, $dt_new}, Format "*** Non convergence (iter %g): recomputing with reduced step %g"];
          SetTime[$Time - $DTime];
          SetTimeStep[$TimeStep - 1];
          RemoveLastSolution[Sys_Mec];
          SetDTime[$dt_new];
          Evaluate[ $var_DTime = $dt_new ];
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

      Print[ F_tot_xx, OnElementsOf Domain_Mecha, File "res/F_tot_xx.pos"] ;
      Print[ F_tot_xy, OnElementsOf Domain_Mecha, File "res/F_tot_xy.pos"] ;
      Print[ F_tot_xz, OnElementsOf Domain_Mecha, File "res/F_tot_xz.pos"] ;
      Print[ F_tot_yx, OnElementsOf Domain_Mecha, File "res/F_tot_yx.pos"] ;
      Print[ F_tot_yy, OnElementsOf Domain_Mecha, File "res/F_tot_yy.pos"] ;
      Print[ F_tot_yz, OnElementsOf Domain_Mecha, File "res/F_tot_yz.pos"] ;
      Print[ F_tot_zx, OnElementsOf Domain_Mecha, File "res/F_tot_zx.pos"] ;
      Print[ F_tot_zy, OnElementsOf Domain_Mecha, File "res/F_tot_zy.pos"] ;
      Print[ F_tot_zz, OnElementsOf Domain_Mecha, File "res/F_tot_zz.pos"] ;
    }
  }
}

DefineConstant[
  R_ = {"Mec_SMP", Name "GetDP/1ResolutionChoices", Visible 0},
  C_ = {"-solve -bin -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = { "", Name "GetDP/2PostOperationChoices", Visible 0}
];
