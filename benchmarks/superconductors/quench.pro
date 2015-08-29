// Basic quenching model from "Basics of Stability Analysis of Superconductors –
// What is it There Behind the Numerical Approaches and How They Can Be Utilized
// to Aid the Complete Superconducting Systems Engineering?", by Antti Stenvall,
// Tiina Salmi and Erkki Haro, Tampere University of Technology, Tampere,
// Finland, May 29, 2015.
//
// This is a preliminary implementation:
//  - results have not yet been validated
//  - an automatic loop to detect the quench should be added

Include "quench_data.pro";

Group {
  Source = Region[2001];
  Omega = Region[{2001,2002}];
}

Function {
  // density of copper
  gamma[] = 8960;

  constant = 1;

  // specific heat ($1: temperature)
  Cv_const = {-1.91844,-0.15973,8.61013,-18.996,21.9661,-12.7328,3.54322,-0.3797};
  Cv[] = (gamma[] * 10^(Cv_const(0)+
    Cv_const(1)*(Log[$1])#0+
    Cv_const(2)*(#0*Log[$1])#1+
    Cv_const(3)*(#1*Log[$1])#2+
    Cv_const(4)*(#2*Log[$1])#3+
    Cv_const(5)*(#3*Log[$1])#4+
    Cv_const(6)*(#4*Log[$1])#5+
    Cv_const(7)*(#5*Log[$1]))
  ) ;
  // resistivity of copper ($1: temperature, $2: magnetic flux density)
  // (cannot really change RRR, because then the coefficients for the thermal
  // conductivity must then be changed)
  RRR = 100;
  rho[] = ((1.67e-8 / RRR + 5*1e-11*Norm[$2])#6*0 +
          (5.9e-11*$1-1e-9)#7*0 +
          (#6 < #7) ? #7 : #6) ##33;
  // thermal conductivity ($1: temperature)
  lambda_const = {2.215,-0.88068,0.29505,-0.04831,0.003207,-0.47461,
    0.13871,-0.02043,0.001281};
  lambda[] = ( 10^(
    (lambda_const(0) + lambda_const(1)*(Sqrt[$1])#8 + lambda_const(2)*$1 +
      lambda_const(3)*(Sqrt[$1]*$1)#9 + lambda_const(4)*($1*$1)#10) /
    (1 + lambda_const(5)*#8 + lambda_const(6)*$1 +
      lambda_const(7)*#9 + lambda_const(8)*#10)
  ) ) ;

  //Cv[] = 0.09;
  //rho[] = 0.35e-9;
  //lambda[] = 260;

  // critical current ($1: temperature)
  I_c[] = 500 * ( 1 - ($1 - 4.2) / (20 - 4.2) );

  // default operating current (can be changed): I_op = 0.7 I_c(4.2) = 350 A
  I_op = 350;

  // heat source ($1: temperature)
  A_tot = Pi*(0.5e-3)^2;
  B = 1;
  alpha = 0.7;
  Q[] = (I_op < (I_c[$1#1]#2)) ? 0 : (rho[#1, B] * (I_op - #2) * I_op / (alpha*A_tot^2))##11 ;
  MQE[] = ($Time < 10e-3) ? 21000e-3 / A_tot / lengthPart1 : 0.;

  // perturbation
  time0t = 0;
  time1t = 2;
  dtimet = 1e-3;
  theta = 1;
  NL_NbrMax = 50;
  NL_Eps = 1.e-6;
  NL_Relax = 1;
}

Jacobian {
  { Name Vol ;
    Case { { Region All ; Jacobian Vol ; } }
  }
  { Name Sur ;
    Case { { Region All ; Jacobian Sur ; } }
  }
  { Name Lin ;
    Case { { Region All ; Jacobian Lin ; } }
  }
}

Integration {
  { Name Int ;
    Case { { Type Gauss ;
	Case {
	  { GeoElement Point       ; NumberOfPoints  1 ; }
	  { GeoElement Line        ; NumberOfPoints  3 ; }
	  { GeoElement Triangle    ; NumberOfPoints  4 ; }
	  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
	  { GeoElement Tetrahedron ; NumberOfPoints  5 ; }
	  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
	  { GeoElement Prism       ; NumberOfPoints  6 ; }
	}
      } }
  }
}

Constraint {
  { Name InitTemp ;
    Case {
      { Region Omega ; Type Init; Value 4.2 ; }
    }
  }
}

FunctionSpace {
  { Name TSpace; Type Form0;
    BasisFunction {
      { Name sn; NameOfCoef Tn; Function BF_Node;
        Support Omega; Entity NodesOf[All]; }
    }
    Constraint {
      { NameOfCoef Tn; EntityType NodesOf ; NameOfConstraint InitTemp; }
    }
  }

}

Formulation {
  { Name TheDyn; Type FemEquation;
    Quantity {
      { Name T; Type Local; NameOfSpace TSpace; }
    }
    Equation {
      Galerkin { [ - lambda[{T}] * Dof{d T} , {d T} ];
	In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { DtDof [ - Cv[{T}] * Dof{T} , {T} ];
	In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { [ Q[{T}], {T} ];
        In Omega; Integration Int; Jacobian Vol;  }
      Galerkin { [ MQE[], {T} ];
	In Source; Integration Int; Jacobian Vol;  }
    }
  }
}

Resolution {
  { Name TheDyn;
    System {
      { Name A; NameOfFormulation TheDyn; }
    }
    Operation {
      InitSolution[A];
      TimeLoopTheta[time0t, time1t, dtimet, theta] {
	IterativeLoop[NL_NbrMax, NL_Eps, NL_Relax] {
	  GenerateJac[A]; SolveJac[A];
	}
	SaveSolution[A];
      }
    }
  }

}

PostProcessing {
  { Name TheDyn; NameOfFormulation TheDyn;
    Quantity {
      { Name T; Value{ Local{ [ {T} ] ;
            In Omega; Jacobian Vol; } } }
      { Name q; Value{ Local{ [ - lambda[{T}] * {d T} ] ;
	    In Omega; Jacobian Vol; } } }
    }
  }
}

PostOperation {
  { Name TheDyn ; NameOfPostProcessing TheDyn ;
    Operation {
      Print[ T, OnElementsOf Omega , File "tThe.pos"] ;
      Print[ q, OnElementsOf Omega , File "qThe.pos"] ;
    }
  }
}
