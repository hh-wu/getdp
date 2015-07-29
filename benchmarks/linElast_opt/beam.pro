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
  // - Specify performance function (formula, domain) in input file
  // - Domain of optimization (global structure -> input) in input file

  Group {
    // TO and function domain
    DomainOpt = Region[{Domain}];
    DomainFunc = Region[{BLOC}];    
  }

  Function {  
    DefineFunction[dFdb,dF_adjoint_lie];

    sigma[] = C[]*$1; //[sigma_11,sigma_22,sigma_12]
    sigmaVM[]=(CompX[sigma[$1]#2]^2.0-CompX[#2]*CompY[#2]
              + CompY[#2]^2.0 + 3.0*CompZ[#2])^1.0;//vm^2

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
    If(!StrCmp[Flag_PerfType,"Compliance"])
      Func[] = (C[] * $1) * $1; //F = C * (D u)^2 
      dFdb[] = 2.0*C[] * $1; //dF/db = 2 * C * (D u)
      dF_adjoint_lie[] = -( C[] * d_e_u[] ) * $1 
                         -( C[] * $1 ) * d_e_u[] 
                         +( (C[] * $1) * $1 ) * TTrace[dV[]];
    EndIf
    If(!StrCmp[Flag_PerfType,"vonMises"])
      Func[] = sigmaVM[$1]^2.0; //F = Sqrt[s11^2-s11*s22+s22^2+3*s12^2] 
      dFdb[] = Vector[2.0*CompX[sigma[$1]#3]-CompY[#3],
                      2.0*CompY[#3]-CompX[#3],
                      6.0*CompZ[#3]];///(2.0 * Sqrt[sigmaVM[$1]]); 
      dF_adjoint_lie[] = dFdb[$1]*(C[] * d_e_u[]); 
    EndIf
    dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];
  }

  Include "../optimization/sensitivity.pro";
EndIf


