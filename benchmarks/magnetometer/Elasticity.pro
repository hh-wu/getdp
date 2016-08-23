Group {
  DefineGroup[Domain_Disp] ;
  DomainTot = Region[Domain_Disp];
}

Function {
  DefineFunction[ C_xx, C_xy, C_xz, C_yx, C_yy, C_yz, C_zx, C_zy, C_zz,  E, nu, gravity ];

  If(1) // 3D, EPD
    a[] = E[]*(1.-nu[])/(1.+nu[])/(1.-2.*nu[]);
    c[] = E[]*nu[]/(1.+nu[])/(1.-2.*nu[]);
  EndIf
  If(0) // EPC
    a[] = E[]/(1.-nu[]**2);
    c[] = E[]*nu[]/(1.-nu[]**2);
  EndIf
  b[] = E[]/2./(1.+nu[]); // = mu = G

  C_xx[] = Tensor[ a[],0  ,0  ,    0  ,b[],0  ,    0  ,0  ,b[] ];
  C_xy[] = Tensor[ 0  ,c[],0  ,    b[],0  ,0  ,    0  ,0  ,0   ];
  C_xz[] = Tensor[ 0  ,0  ,c[],    0  ,0  ,0  ,    b[],0  ,0   ];

  C_yx[] = Tensor[ 0  ,b[],0  ,    c[],0  ,0  ,    0  ,0  ,0   ];
  C_yy[] = Tensor[ b[],0  ,0  ,    0  ,a[],0  ,    0  ,0  ,b[] ];
  C_yz[] = Tensor[ 0  ,0  ,0  ,    0  ,0  ,c[],    0  ,b[],0   ];

  C_zx[] = Tensor[ 0  ,0  ,b[],    0  ,0  ,0  ,    c[],0  ,0   ];
  C_zy[] = Tensor[ 0  ,0  ,0  ,    0  ,0  ,b[],    0  ,c[],0   ];
  C_zz[] = Tensor[ b[],0  ,0  ,    0  ,b[],0  ,    0  ,0  ,a[] ];
}


FunctionSpace {
  { Name H_ux_Mec ; Type Form0 ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_Node ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      If(DEGRE2)
        { Name sxn2 ; NameOfCoef uxn2 ; Function BF_Node_2E ;
          Support DomainTot ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint Displacement_x ; }
      If(DEGRE2)
        { NameOfCoef uxn2 ; EntityType EdgesOf ; NameOfConstraint Displacement_x ; }
      EndIf
    }
  }
  { Name H_uy_Mec ; Type Form0 ;
    BasisFunction {
      { Name syn ; NameOfCoef uyn ; Function BF_Node ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      If(DEGRE2)
        { Name syn2 ; NameOfCoef uyn2 ; Function BF_Node_2E ;
          Support DomainTot ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint Displacement_y ; }
      If(DEGRE2)
        { NameOfCoef uyn2 ; EntityType EdgesOf ; NameOfConstraint Displacement_y ; }
      EndIf
    }
  }
  { Name H_uz_Mec ; Type Form0 ;
    BasisFunction {
      { Name syn ; NameOfCoef uzn ; Function BF_Node ;
        Support DomainTot ; Entity NodesOf[ All ] ; }
      If(DEGRE2)
        { Name szn2 ; NameOfCoef uzn2 ; Function BF_Node_2E ;
          Support DomainTot ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint Displacement_z ; }
      If(DEGRE2)
        { NameOfCoef uzn2 ; EntityType EdgesOf ; NameOfConstraint Displacement_z ; }
      EndIf
    }
  }
}

Formulation {
  { Name Elasticity3D_u_coupled_static ; Type FemEquation ;
    Quantity {
      { Name ux  ; Type Local ; NameOfSpace H_ux_Mec ; }
      { Name uy  ; Type Local ; NameOfSpace H_uy_Mec ; }
      { Name uz  ; Type Local ; NameOfSpace H_uz_Mec ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {
      Galerkin { [ C_xx[] * Dof{d ux}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_xy[] * Dof{d uy}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_xz[] * Dof{d uz}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ C_yx[] * Dof{d ux}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_yy[] * Dof{d uy}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_yz[] * Dof{d uz}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ C_zx[] * Dof{d ux}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_zy[] * Dof{d uy}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_zz[] * Dof{d uz}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ - CompX[ -sigma[] * {d v} /\ bext[] ] , {ux} ] ;
	In Domain_Force; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ - CompY[ -sigma[] * {d v} /\ bext[] ] , {uy} ] ;
	In Domain_Force; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ - CompZ[ -sigma[] * {d v} /\ bext[] ] , {uz} ] ;
	In Domain_Force; Jacobian Vol; Integration GradGrad; }

      Galerkin { [ gravity[] , {uz} ];
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; } // gravity
     }
  }
  { Name Elasticity3D_u_coupled_transient ; Type FemEquation ;
    Quantity {
      { Name ux  ; Type Local ; NameOfSpace H_ux_Mec ; }
      { Name uy  ; Type Local ; NameOfSpace H_uy_Mec ; }
      { Name uz  ; Type Local ; NameOfSpace H_uz_Mec ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {
      Galerkin { [ C_xx[] * Dof{d ux}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_xy[] * Dof{d uy}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_xz[] * Dof{d uz}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ C_yx[] * Dof{d ux}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_yy[] * Dof{d uy}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_yz[] * Dof{d uz}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ C_zx[] * Dof{d ux}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_zy[] * Dof{d uy}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_zz[] * Dof{d uz}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { DtDtDof [ rho[] * Dof{ux} , {ux} ];
	In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { DtDtDof [ rho[] * Dof{uy} , {uy} ];
	In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { DtDtDof [ rho[] * Dof{uy} , {uy} ];
	In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ - CompX[ -sigma[] * {d v} /\ bext[] ] , {ux} ] ;
	In Domain_Force; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ - CompY[ -sigma[] * {d v} /\ bext[] ] , {uy} ] ;
	In Domain_Force; Jacobian Vol; Integration GradGrad; }
      Galerkin { [ - CompZ[ -sigma[] * {d v} /\ bext[] ] , {uz} ] ;
	In Domain_Force; Jacobian Vol; Integration GradGrad; }
    }
  }
  { Name Elasticity3D_u_modal ; Type FemEquation ;
    Quantity {
      { Name ux  ; Type Local ; NameOfSpace H_ux_Mec ; }
      { Name uy  ; Type Local ; NameOfSpace H_uy_Mec ; }
      { Name uz  ; Type Local ; NameOfSpace H_uz_Mec ; }
      { Name v ; Type Local ; NameOfSpace Hgrad_v_EleKin ; }
    }
    Equation {
      Galerkin { [ C_xx[] * Dof{d ux}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_xy[] * Dof{d uy}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_xz[] * Dof{d uz}, {d ux} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ C_yx[] * Dof{d ux}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_yy[] * Dof{d uy}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_yz[] * Dof{d uz}, {d uy} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { [ C_zx[] * Dof{d ux}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_zy[] * Dof{d uy}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ C_zz[] * Dof{d uz}, {d uz} ] ;
        In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }

      Galerkin { DtDtDof [ rho[] * Dof{ux} , {ux} ];
	In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { DtDtDof [ rho[] * Dof{uy} , {uy} ];
	In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { DtDtDof [ rho[] * Dof{uz} , {uz} ];
	In Domain_Disp ; Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

PostProcessing {
  { Name Elasticity3D ; NameOfFormulation Elasticity3D_u_coupled_transient ;
    NameOfSystem Sys_Mec;
    PostQuantity {
      { Name u ; Value { Term { [ Vector[ {ux}, {uy}, {uz} ]];
	    In Domain_Disp ; Jacobian Vol ; } } }
      { Name um ; Value { Term { [ Norm[ Vector[ {ux}, {uy}, {uz} ] ] ] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name ux  ; Value { Term { [ {ux} ] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name uy  ; Value { Term { [ {uy} ] ;
            In Domain_Disp  ; Jacobian Vol; } } }
      { Name uz  ; Value { Term { [ {uz} ] ;
            In Domain_Disp  ; Jacobian Vol; } } }

      { Name epsxx ; Value { Term { [ CompX [ {d ux} ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsyy ; Value { Term { [ CompY [ {d uy} ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epszz ; Value { Term { [ CompZ [ {d uz} ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsxy ; Value { Term { [ CompX [ {d uy} ] + CompY [ {d ux} ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epsyz ; Value { Term { [ CompY [ {d uz} ] + CompZ [ {d uy} ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }
      { Name epszx ; Value { Term { [ CompZ [ {d ux} ] + CompX [ {d uz} ] ] ;
            In Domain_Disp ; Jacobian Vol; } } }

      { Name y ; Value { Term { [ Y[] ] ;
            In Domain_Disp ; Jacobian Vol; } } }

      { Name eigenFrequency ; Value { Term { Type Global; [ $EigenvalueReal / (2*Pi) ] ;
            In Domain_Disp  ; } } }

      { Name objective ; Value { Term { Type Global; [ objective[] ];
	    In Domain_Disp  ; } } }

      { Name eigenFrequency1; Value { Term { Type Global;
	    [ $EigenvalueReal^2 + $EigenvalueImag^2] ;
            In Domain_Disp  ; } } }
    }
  }
}
