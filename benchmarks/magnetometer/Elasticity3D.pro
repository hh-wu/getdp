Group {
  DefineGroup[Domain_Disp] ;
  DomainTot = #{Domain_Disp};
}

Function {
}

FunctionSpace {
  { Name H_u_Mec3D ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      { Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
        Support DomainTot ; Entity NodesOf[ All ] ; }

      If(DEGRE2)
      { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ;
        Support DomainTot ; Entity EdgesOf[ All ] ; }
      { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ;
        Support DomainTot ; Entity EdgesOf[ All ] ; }
      { Name szn2 ; NameOfCoef uzn2 ; Function BF_NodeZ_2E ;
        Support DomainTot ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint DeplacementX ; }
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint DeplacementY ; }
      { NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint DeplacementZ ; }

      If(DEGRE2)
      { NameOfCoef uxn2 ; EntityType EdgesOf ; NameOfConstraint DeplacementX ; }
      { NameOfCoef uyn2 ; EntityType EdgesOf ; NameOfConstraint DeplacementY ; }
      { NameOfCoef uzn2 ; EntityType EdgesOf ; NameOfConstraint DeplacementZ ; }
      EndIf
    }
  }
}

Formulation {
  { Name Elasticity3D_u_coupled_static ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace H_u_Mec3D ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }

    Equation {
       Galerkin { [ C_11[] * Dof{D1 u} , {D1 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ C_22[] * Dof{D2 u} , {D2 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ C_12[] * Dof{D2 u} , {D1 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ C_21[] * Dof{D1 u} , {D2 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       //Galerkin { [ -F[] , {u} ] ;
       Galerkin { [ - (-sigma[] * {d v} /\ bext[]) , {u} ] ;
         In Domain_Force;
         Jacobian Vol; Integration GradGrad; }
     }
  }
  { Name Elasticity3D_u_coupled_transient ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace H_u_Mec3D ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {
                                                    //      11
       Galerkin { [ C_11[] * Dof{D1 u} , {D1 u} ] ; // --> K
         In Domain_Disp ;                           //       u u
         Jacobian Vol ; Integration GradGrad ; }
                                                     //     22
       Galerkin { [ C_22[] * Dof{D2 u} , {D2 u} ] ;  // --> K
         In Domain_Disp ;                            //       u u
         Jacobian Vol ; Integration GradGrad ; }
                                                     //     12
       Galerkin { [ C_12[] * Dof{D2 u} , {D1 u} ] ;  // --> K
         In Domain_Disp ;                            //       u u
         Jacobian Vol ; Integration GradGrad ; }
                                                     //     21
       Galerkin { [ C_21[] * Dof{D1 u} , {D2 u} ] ;  // --> K
         In Domain_Disp ;                            //       u u
         Jacobian Vol ; Integration GradGrad ; }
       Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
         In Domain_Disp ;                            // --> rho*omega^2*u u
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { DtDof [ coef_alpha * C_11[] * Dof{D1 u} , {D1 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { DtDof [ coef_alpha * C_22[] * Dof{D2 u} , {D2 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { DtDof [ coef_alpha * C_12[] * Dof{D2 u} , {D1 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { DtDof [ coef_alpha * C_21[] * Dof{D1 u} , {D2 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { DtDof [ coef_beta * rho[] * Dof{u} , {u} ];
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ - (-sigma[] * {d v} /\ bext[]) , {u} ] ;
         In Domain_Force;
         Jacobian Vol; Integration GradGrad; }

    }
  }
  { Name Elasticity3D_u_modal ; Type FemEquation ;
    Quantity {
      { Name u ; Type Local ; NameOfSpace H_u_Mec3D ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {
       Galerkin { [ C_11[] * Dof{D1 u} , {D1 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ C_22[] * Dof{D2 u} , {D2 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ C_12[] * Dof{D2 u} , {D1 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ C_21[] * Dof{D1 u} , {D2 u} ] ;
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }

       Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
         In Domain_Disp ;
         Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

PostProcessing {

  { Name Elasticity3D ; NameOfFormulation Elasticity3D_u_coupled_transient ;
    NameOfSystem Sys_Mec;
    PostQuantity {
      { Name u  ; Value { Term { [ {u} ] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name ux  ; Value { Term { [CompX[{u}]] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name uy  ; Value { Term { [CompY[{u}]] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name uz  ; Value { Term { [CompZ[{u}]] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name epsI ; Value { Term { [ {D1 u} ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsII ; Value { Term { [ {D2 u} ] ;
            In Domain_Disp ; Jacobian Vol; } } }

      { Name epsx ; Value { Term { [Vector [CompX[{D1 u}],0,0 ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsy ; Value { Term { [Vector [0, CompY[{D1 u}],0 ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsz ; Value { Term { [Vector [0, 0, CompZ[{D1 u}] ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }

      { Name epsxy ; Value { Term { [Vector [CompX[{D2 u}],0,0 ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsyz ; Value { Term { [Vector [0, CompY[{D2 u}],0 ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epszx ; Value { Term { [Vector [0, 0, CompZ[{D2 u}] ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }

      { Name y ; Value { Term { [ Y[] ] ;
            In Domain_Disp ; Jacobian Vol; } } }

      { Name um ; Value { Term { [Norm[{u}]] ;
            In Domain_Disp  ; Jacobian Vol; } } }

      { Name eigenFrequency ; Value { Term { Type Global; [ $EigenvalueReal / (2*Pi) ] ;
            In Domain_Disp  ; } } }

      { Name eigenFrequencyObj ; Value { Term { Type Global; [ obj[] ]; 
	    In Domain_Disp  ; } } }

      { Name eigenFrequency1; Value { Term { Type Global; 
	    [ $EigenvalueReal^2 + $EigenvalueImag^2] ;
            In Domain_Disp  ; } } }
    }
  }
}
