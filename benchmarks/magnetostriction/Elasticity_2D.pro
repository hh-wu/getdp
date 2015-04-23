// Elasticity - Displacement ux, uy formulation

Group {
  DefineGroup[Domain_Disp, Domain_Force, Domain_Force_Sur, Domain_Force_Lin] ;
  DomainTot = Region[ {Domain_Disp, Domain_Force} ];
}

Group {
  DefineGroup[ DomainInf ] ;
  DefineVariable[ Val_Rint, Val_Rext ] ;
}

Function {

  // Mecanical

  c11[] = 1;
  c12[] = poisson[];
  c22[] = 1;
  c33[]= (1-poisson[])/2;

  C_m[] = young[]/(1-poisson[]^2)*TensorSym[ c11[], c12[],  0  ,
                                                    c22[],  0  ,
                                                            c33[] ];

  // Magnetostrictif Tensor
  // $1=[Bx By Bz]

  lamb[]=Vector[lambdap[Norm[$1]],lambdaper[Norm[$1]],0];

  sig_vect[]=C_m[]*lamb[$1];

  sig_mat[]=Tensor[CompX[sig_vect[$1]], CompZ[sig_vect[$1]]  ,   0,
                   CompZ[sig_vect[$1]], CompY[sig_vect[$1]]  ,   0,
                             0          ,          0          ,  0 ];

  // Change of basis
  P[]=Tensor[ CompX[$1]/Norm[$1]  ,   -CompY[$1]/Norm[$1] , 0,
              CompY[$1]/Norm[$1]  ,    CompX[$1]/Norm[$1] , 0,
                        0         ,             0         , 1 ];

  PP[]=Transpose[P[$1]];

  sig_PPP[]=P[$1]*sig_mat[$1]*PP[$1];

  If(is_Magnetostriction==0)
    sig_magnetostriction[]=Vector[0,0,0];
  EndIf
  If(is_Magnetostriction==1)
    sig_magnetostriction[]=Vector[CompXX[sig_PPP[$1]],CompYY[sig_PPP[$1]],CompXY[sig_PPP[$1]]];
  EndIf

  // Maxwell stress Tensor $1=[Bx By Bz]

  If(is_Maxwell==0)
    sig_maxwell[]=Vector[ 0,
                          0,
                          0];
  EndIf
  If(is_Maxwell==1)
    sig_maxwell[]=nu[]*Vector[ CompX[$1]*CompX[$1]-Norm[$1]*Norm[$1]/2,
                               CompY[$1]*CompY[$1]-Norm[$1]*Norm[$1]/2,
                               CompX[$1]*CompY[$1]];
    // [Bx²-B²/2, By²-B²/2 , Bx.By]
  EndIf
}

Constraint {
  { Name DeplacementX;
    Case {
      { Region Ground ; Type Assign ; Value 0; }
    }
  }
  { Name DeplacementY;
    Case {
       { Region Ground ; Type Assign ; Value 0; }
    }
  }
}

FunctionSpace {
  { Name H_u_Mec2D ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
        dFunction {BF_NodeX_D12, BF_Zero} ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
        dFunction {BF_NodeY_D12, BF_Zero} ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint DeplacementX ; }
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint DeplacementY ; }
    }
  }
}

/////////////////// Formulation /////////////////

Formulation {
  { Name Mec_Mag_dyn_2D ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local ; NameOfSpace H_u_Mec2D ; }
      { Name a  ; Type Local ; NameOfSpace Hcurl_a ; }
    }
    Equation {
      Galerkin { [ C_m[] * Dof{D1 u}, {D1 u} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ sig_maxwell[ {d a} ] , {D1 u} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ -sig_magnetostriction[ {d a} ]  , {D1 u} ] ;
        In Domain_Force; Jacobian Vol; Integration GradGrad; }

      Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
    }
  }
  { Name Mec_eigen ; Type FemEquation ;
    Quantity {
      { Name u  ; Type Local ; NameOfSpace H_u_Mec2D ; }
    }
    Equation {
      Galerkin { [ C_m[] * Dof{D1 u}, {D1 u} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

Resolution {
  { Name Mec_Mag_dyn_2D ;
    System {
      { Name A ; NameOfFormulation MagSta_a ; }
      { Name Sys_Mec ; NameOfFormulation Mec_Mag_dyn_2D;  Frequency {freq}; }
    }
    Operation {
      Generate[A] ; Solve[A] ; SaveSolution[A];
      InitSolution [Sys_Mec];
      IterativeLoop[1, NL_Eps, NL_Relax] { GenerateJac[Sys_Mec]; SolveJac[Sys_Mec]; }
    }
  }
  { Name Mec_eigen ;
    System {
      { Name Sys_Mec_eigen; NameOfFormulation Mec_eigen; Type Complex; }
    }
    Operation {
      GenerateSeparate[Sys_Mec_eigen];
      EigenSolve[Sys_Mec_eigen, 40, 0, 0];
      SaveSolutions[Sys_Mec_eigen] ;
    }
  }
}

PostProcessing {
  { Name Mec2D_u ; NameOfFormulation Mec_Mag_dyn_2D ;
    PostQuantity {
      { Name u ; Value { Term { [ {u} ] ; In Domain_Disp ; Jacobian Vol ; } } }
      { Name u_N ; Value { Term { [Norm[ {u} ]] ; In Domain_Disp ; Jacobian Vol ; } } }
      { Name u_x ; Value { Term { [Norm[CompX[ {u} ]]]; In Domain_Disp ; Jacobian Vol ; } } }
      { Name u_y ; Value { Term { [Norm[CompY[ {u} ]]]; In Domain_Disp ; Jacobian Vol ; } } }
      { Name eps ; Value { Term { [ {D1 u} ] ; In Domain_Disp ; Jacobian Vol ; } } }
      { Name eps_N ; Value { Term { [ Norm[{D1 u}]] ; In Domain_Disp ; Jacobian Vol ; } } }
      { Name Fmaxwell ; Value {
          Term {[ nu[{d a}]* Tensor [CompX[sig_maxwell[ {d a} ]],CompZ[sig_maxwell[ {d a} ]],0,
                CompZ[sig_maxwell[ {d a} ]],CompY[sig_maxwell[ {d a} ]],0,
                0,0,0]] ; In Domain_Disp ; Jacobian Vol ; Jacobian Vol ;  } } }
      { Name az ; Value { Local { [ CompZ[{a}] ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name b ; Value { Local { [ {d a} ] ; In Domain_Mag ; Jacobian Vol ; } } }
      { Name bn ; Value { Local { [ Norm[{d a} ]] ; In Domain_Mag ; Jacobian Vol ; } } }
    }
  }
  { Name Mec_eigen ; NameOfFormulation Mec_eigen ;
    PostQuantity {
      { Name u ; Value { Term { [ {u} ] ; In Domain_Disp ; Jacobian Vol ; } } }
    }
  }
}
