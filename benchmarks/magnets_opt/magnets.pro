Include "magnets_data.geo"

DefineConstant[
  primal_sys = {0,
    Choices{
      0="MagSta_a",
      1="MagSta_phi"
    },Name "Input/system"}
];

Group{
  // Primal problem
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
  
  // Optimization problem
  DomainOpt = Region[{DomainM}];
  DomainFunc = Region[{DomainM}];    
}

Function{
  DefineFunction[dFdb,dF_adjoint_lie];

  /* ----------------------------------------------------------------- 
     Primal problem: 
     ----------------------------------------------------------------- */
  // coercive field of magnets
  mu0 = 4*Pi*1e-7;
  mu[] = mu0;
  nu[] = 1.0/mu[];
  For i In {1:NumMagnets}
    DefineConstant[
      HC~{i} = {800e3,
        Name Sprintf("Parameters/Magnet %g/0Coercive magnetic field [Am^-1]", i)},
      BR~{i} = {mu0 * HC~{i},
        Name Sprintf("Parameters/Magnet %g/0Remnent magnetic flux density [T]", i),
        ReadOnly 1}
    ];
    hc[Magnet~{i}] = Rotate[Vector[0, HC~{i}, 0], Rx~{i}, Ry~{i}, Rz~{i}];
    br[Magnet~{i}] = Rotate[Vector[0, BR~{i}, 0], Rx~{i}, Ry~{i}, Rz~{i}];
  EndFor

  // Maxwell stress tensor
  TM[] = ( SquDyadicProduct[$1] - SquNorm[$1] * TensorDiag[0.5, 0.5, 0.5] ) / mu[] ;

  /* ----------------------------------------------------------------- 
     Optimization problem: 
     ----------------------------------------------------------------- */
  If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
    velocityField[] = VectorField[XYZ[],0,1]{VELOCITY_FIELD};
    dV[] = Transpose[ GradVectorField[XYZ[], 0 , 1]{VELOCITY_FIELD} ];
    ETA[] = dV[]#1 + Transpose [ #1 ] - TTrace [ #1 ] * TensorDiag[1,1,1];//(1,2)-form
    LV1[] = dV[] * $1 ;
    LV2[] = TTrace [ dV[]#1 ] * $1 - Transpose [ #1 ] * $1 ;
    
    // system differentiation
    d_bilin_lie[] = nu[$1] * $1 * ( ETA[] * $2 ) ; 
    d_M_lie[] = nu[$1] * ( LV1[ br[] ] ) * $2 ;
    
    // optimization function differentiation
    If(!StrCmp[Flag_PerfType,"Compliance"])
      Func[] = nu[$1] * SquNorm[$1]; //F = nu*B^2, alpha=nu*{d a},beta={d a} 
      dFdb[] = 2. * nu[$1] * $1; //dF/db = 2*nu*B
      dF_adjoint_lie[] = nu[$1#2] * #2 * ( ETA[] * #2 ) ;//fixme #1 != #2 !!!
    EndIf
    dF_direct_lie[] = dFdb[$1#1]*$2 + dF_adjoint_lie[#1];
  EndIf
}

Constraint {
  { Name phi ;
    Case {
      { Region Dirichlet_phi_0 ; Value 0. ; }
    }
  }
  { Name a ;
    Case {
      { Region Dirichlet_a_0 ; Value 0. ; }
    }
  }
  { Name GaugeCondition_a ; Type Assign ;
    Case {
      { Region Domain ; SubRegion Dirichlet_a_0 ; Value 0. ; }
    }
  }
  For i In {1:NumMagnets}
    { Name Magnet~{i} ;
      Case {
        { Region SkinMagnet~{i} ; Value 1. ; }
      }
    }
  EndFor
}


// Primal system analysis and sensitivity analysis
Include "magsta3D.pro";
Include "magnets_post.pro"

If(!StrCmp(Flag_optType,"shape") || !StrCmp(Flag_optType,"topology"))
  //Include "../optimization/sensitivity.pro";
  Include "magnets_sensPost.pro";
EndIf

