// include parameters common to geometry and solver
Include "magnets_data.geo"

DefineConstant[ 
  Flag_Analysis = {1,
    Choices { 0 = "H-formulation",
              1 = "A-formulation"},
    Name "Parameters/0Formulation" },
  Flag_Degree = {1,
    Choices {0,1},Name "Input/OptParam/degree",Label "degree 2?"}
];
 
Group{
  DomainM = Region[{}];
  For i In {1:NumMagnets}
    Magnet~{i} = Region[i]; // volume of magnet i
    SkinMagnet~{i} = Region[(100+i)]; // boundary of magnet i
    DomainM += Region[{Magnet~{i}}]; // all the magnet volumes
  EndFor
  Air = Region[(NumMagnets + 1)];
  Domain = Region[{Air, DomainM}];
  Dirichlet_phi_0 = Region[(NumMagnets + 2)]; // boundary of air box
  Dirichlet_a_0 = Region[(NumMagnets + 2)]; // boundary of air box
}
If(Flag_opt)
  Group {
    If(!StrCmp(Flag_optType,"shape"))
      DomainOpt = Region[{}];
    EndIf
    If(!StrCmp(Flag_optType,"topology"))
      If(regionVar == 0)
        DomainOpt = Region[{Rotor_Fe}];
        DomainOptFix = Region[{}];
        DomainOptMV = Region[{Rotor_Fe}];
      EndIf 
      If(regionVar == 1)
        DomainOpt = Region[{Stator_Fe}];
        DomainOptFix = Region[{Stator_Fe}];
        DomainOptMV = Region[{}];
      EndIf
      If(regionVar == 2)
        DomainOpt = Region[{Rotor_Fe,Stator_Fe}];
        DomainOptFix = Region[{Stator_Fe}];
        DomainOptMV = Region[{Rotor_Fe}];
      EndIf
    EndIf  

    DomainFunc = Region[{DomainM}];    


}

// primal system formulation
Include "magsta3D.pro";

// sensitivity analysis formulation
If(Flag_opt)
  Function {
    DefineFunction[dFdb,dF_adjoint_lie];

    // lie derivative
    velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};
    dV[] = Transpose[ GradVectorField[XYZ[], 0 , 1]{VELOCITY_FIELD} ];
    ETA[] = dV[]#1 + Transpose [ #1 ] - TTrace [ #1 ] * TensorDiag[1,1,1];//(1,2)-form
    LV1[] = dV[] * $1 ;
    LV2[] = TTrace [ dV[]#1 ] * $1 - Transpose [ #1 ] * $1 ;
    If(!StrCmp[Flag_PerfType,"Compliance"])
      Func[] = nu[$1] * SquNorm[$1]; //F = nu*B^2, alpha=nu*{d a},beta={d a} 
      dFdb[] = 2. * nu[$1] * $1; //dF/db = 2*nu*B
      dF_adjoint_lie[] = nu[$1#2] * #2 * ( ETA[] * #2 ) ;//fixme #1 != #2 !!!
    EndIf
    dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];
  }
  
  Include "../optimization/sensitivity.pro";
EndIf








