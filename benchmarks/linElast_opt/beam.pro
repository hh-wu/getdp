Include "beam_data.geo";

DefineConstant[
  Flag_testBench = {0,  
    Choices {
      0="Short Cantiler Beam", 
      1="MBB Beam",
      2="tst",
      3="cantilever+fix point"}, Visible 1,
    Name "Geo/Test Case"}
];

// primal system analysis
Include "elasticity_2D.pro";

// sensitivity analysis formulation
If(Flag_opt)
  // - Specify performance function (formula, domain)
  // - Domain of optimization (global structure -> input)

  Group {
    // TO domain
    DomainOpt = Region[{Domain}];
    DomainFunc = Region[{BLOC}];    
  }

  //Include "sensitivity.pro";

  Function {  
    // operators used for lie derivative
    velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};
    dV[] = Transpose[GradVectorField[XYZ[],0,1]{VELOCITY_FIELD}]; 
    du[] = Transpose[GradVectorField[XYZ[],0,1]{STATE_FIELD}]; 
    dlambda[] = Transpose[GradVectorField[XYZ[],0,1]{ADJOINT_FIELD}]; 
    dVdu[] = dV[]*du[]; 
    dVdlam[] = dV[]*dlambda[]; 
    d_e_u[] = Vector[ CompXX[dVdu[]#991], CompYY[#991], CompXY[#991]+CompYX[#991] ];
    d_e_lam[] = Vector[ CompXX[dVdlam[]#992], CompYY[#992], CompXY[#992]+CompYX[#992] ];
  
    // Derivative of performance function
    If(Flag_PerfType == COMPLIANCE)
      Func[] = (C[] * $1) * $1; //F = C * (D u)^2 
      dFdb[] = 2.0*C[] * $1; //dF/db = 2 * C * (D u)
      dF_adjoint_lie[] = -( C[] * d_e_u[] ) * $1 
                         -( C[] * $1 ) * d_e_u[] 
                         +( (C[] * $1) * $1 ) * TTrace[dV[]];
    EndIf
    dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];
  }

  Include "../optimization/sensitivity.pro";
EndIf


