//=====================================================================

FunctionSpace {
  { Name H_Temp ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef tn ; Function BF_Node ;
        Support Region[ {Domain_Temp, Gamma_Convection_The} ] ; Entity NodesOf[ All ] ; }
      //Support Region[ {Domain_Temp} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef tn ; EntityType NodesOf ; NameOfConstraint BC_Temperature ; }
      { NameOfCoef tn ; EntityType NodesOf ; NameOfConstraint Init_Temperature ; }
    }
  }
  { Name H_EleKin ; Type Form0 ;
    BasisFunction {
      { Name sn ; NameOfCoef vn ; Function BF_Node ;
        Support Region[ { Domain_EleMag} ] ; Entity NodesOf[ All ] ; }
    }
    Constraint {
      { NameOfCoef vn ; EntityType NodesOf ; NameOfConstraint BC_Potential ; }
    }
  }    
}

Formulation {
  { Name ElectroThe ; Type FemEquation ;
    Quantity {
      { Name T ; Type Local ; NameOfSpace H_Temp ; }
      { Name V ; Type Local ; NameOfSpace H_EleKin; }
    }
    Equation {
      // Equations of the thermal problem
      //=================================
      Galerkin { DtDof [ rho_temp[] * cp_Temp[] * Dof{T} , {T} ];
        In Domain_Temp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ kappa_The[] * Dof{d T} , {d T} ] ;
        In Domain_Temp ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ -(sigma[] * SquNorm[ (dt_ba_E_s[] + {Grad V} ) ] ) , {T} ];
        In Domain_Temp_Tube ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ h_Conv[] * Dof{T} , {T} ];
        In Gamma_Convection_The ; Jacobian JSur; Integration GradGrad ;  }
      Galerkin { [-h_Conv[] * Temperature_Blood[] , {T} ];
        In Gamma_Convection_The ; Jacobian JSur; Integration GradGrad ;  }
      

      // Equations of the electromagnetic problem
      //=========================================
      Galerkin { [ sigma[] * Dof{d V}, {d V} ] ; 
        In Domain_EleMag ; Jacobian Vol ; Integration GradGrad ; }
      Galerkin { [ sigma[] * dt_ba_E_s[] , {d V} ] ;
        In Domain_EleMag ; Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

PostProcessing {
  { Name ElectroThe ; NameOfFormulation ElectroThe ;
    NameOfSystem ElectroThe;
    PostQuantity {          

      { Name T ; Value{ Term{ [ {T} ]; In Domain_Temp ; Jacobian Vol ; } } }
      { Name T_Conv ; Value{ Term{ [ {T}]; In Gamma_Convection_The ; Jacobian Vol ; } } }      
      { Name q_Cond ; Value{ Term{ [ -kappa_The[] * {Grad T} ]; In Domain_Temp ; Jacobian Vol ; } } }
      { Name q_Conv ; Value{ Term{ [ (h_Conv[] * ({T} - Temperature_Blood[]) * Normal[] ) ] ; In Gamma_Convection_The ; Jacobian Vol ; } } }
      { Name dt_Energy ; Value{ Term{ [ rho_temp[] * cp_Temp[] * Dt[{T}] * {T} ] ; In Domain_Temp ; Jacobian Vol ; } } }
      { Name Diffusion_Energy ; Value{ Term{ [ kappa_The[] * {Grad T} * {Grad T} ] ; In Domain_Temp ; Jacobian Vol ; } } }
      
      { Name V ; Value{ Term{ [ {V} ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name GradV ; Value{ Term{ [ -{Grad V} ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name ba_E_s ; Value{ Term{ [ ba_E_s[Vector[0.0, 0.0, 0.0] ] ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name dt_ba_E_s ; Value{ Term{ [ dt_ba_E_s[Vector[0.0, 0.0, 0.0] ] ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name n_J_dt_ba_s ; Value{ Term{ [ sigma[] * dt_ba_E_s[] ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name n_J_GradV ; Value{ Term{ [ sigma[] * {Grad V} ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name n_J_tot ; Value{ Term{ [ sigma[] * (dt_ba_E_s[] + {Grad V}) ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name e ; Value{ Term{ [ (dt_ba_E_s[] + {Grad V} ) ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name j ; Value{ Term{ [ -sigma[] * (dt_ba_E_s[] + {Grad V} ) ]; In Domain_EleMag ; Jacobian Vol ; } } }
      { Name Joule_Losses ; Value{ Term{ [ sigma[] * SquNorm[ (dt_ba_E_s[] + {Grad V} ) ] ]; In Domain_EleMag ; Jacobian Vol ; } } }
    }
  }
}
