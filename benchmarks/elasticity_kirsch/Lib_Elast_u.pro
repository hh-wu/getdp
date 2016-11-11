/*
  Elast_u
    Displacement formulation of linear isotropic elasticity 
    Plain gradients are used in the formulation,
    symmetrization (to obtain the strain tensor) 
    being made by the constitutive relationship.
*/

/* I N P U T
   ---------
  A problem index ~{.} is systematically associated to all group names
  to allow including several templates in multiphysics problems. 

  Groups :
  ------
  Vol_Elast       Elastic domain      
  Vol_Force    Volume with imposed volumic force
  Sur_Force    Surface with imposed surface traction
  Sur_Clamp       Surface with imposed zero displacements (all components)
  Sur_Dispx       Surface with imposed displacement in x direction
  Sur_Dispy       Surface with imposed displacement in y direction 
  Sur_Dispz       Surface with imposed displacement in z direction  
*/



DefineConstant[ iP = 1 ];
DefineConstant[ FE_Degree~{iP} = 1,
		type_Dimension~{iP} = 2,
		Flag_EPC = 0
];


Group {
  DefineGroup[ Vol_Elast~{iP},
	       Vol_Force~{iP},
	       Sur_Force~{iP}, 
	       Sur_Clamp~{iP}, 
	       Sur_Disp_x~{iP}, 
	       Sur_Disp_y~{iP}, 
	       Sur_Disp_z~{iP} ];

  Domain~{iP} = Region[ { Vol_Elast~{iP}, 
			  Vol_Force~{iP}, 
			  Sur_Force~{iP}, 
			  Sur_Clamp~{iP}, 
			  Sur_Disp_x~{iP}, 
			  Sur_Disp_y~{iP}, 
			  Sur_Disp_z~{iP} } ];
}

/*
3D   a[] = lambda + 2 mu     b[] = mu     c[] = lambda
EPD  a[] = lambda + 2 mu     b[] = mu     c[] = lambda
EPC  a[] = E/(1-nu^2)        b[] = mu     c[] = E nu/(1-nu^2) 
*/

Function {
  DefineFunction[ pressure_x, pressure_y, pressure_z, force_x, force_y, force_z, displacement_x, displacement_y, displacement_z, E, nu ] ;

  If(Flag_EPC) // Plane stress
    a[] = E[]/(1.-nu[]^2);
    c[] = E[]*nu[]/(1.-nu[]^2);
  Else // Plane strain or 3D
    a[] = E[]*(1.-nu[])/(1.+nu[])/(1.-2.*nu[]);
    c[] = E[]*nu[]/(1.+nu[])/(1.-2.*nu[]);
  EndIf
  b[] = E[]/2./(1.+nu[]);

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

Constraint {
  { Name Displacement_x;
    Case {
      { Region Sur_Clamp~{iP} ; Type Assign ; Value 0; }
      { Region Sur_Disp_x~{iP} ; Type Assign ; Value displacement_x[] ; }
    }
  }
  { Name Displacement_y;
    Case {
       { Region Sur_Clamp~{iP} ; Type Assign ; Value 0; }
       { Region Sur_Disp_y~{iP} ; Type Assign ; Value displacement_y[] ; }
    }
  }
  { Name Displacement_z;
    Case {
       { Region Sur_Clamp~{iP} ; Type Assign ; Value 0; }
       { Region Sur_Disp_z~{iP} ; Type Assign ; Value displacement_z[] ; }
    }
  }
}

FunctionSpace {
  { Name H_ux_Mec ; Type Form0 ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_Node ;
        Support Domain~{iP} ; Entity NodesOf[ All ] ; }
     If ( FE_Degree~{iP} == 2 )
        { Name sxn2 ; NameOfCoef uxn2 ; Function BF_Node_2E ;
          Support Domain~{iP}; Entity EdgesOf[ All ] ; }
     EndIf
    }
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint Displacement_x ; }
      If ( FE_Degree~{iP} == 2 )
         { NameOfCoef uxn2 ;
	   EntityType EdgesOf ; NameOfConstraint Displacement_x ; }
     EndIf
    }
  }
  { Name H_uy_Mec ; Type Form0 ;
    BasisFunction {
      { Name syn ; NameOfCoef uyn ; Function BF_Node ;
        Support Domain~{iP} ; Entity NodesOf[ All ] ; }
     If ( FE_Degree~{iP} == 2 )
        { Name syn2 ; NameOfCoef uyn2 ; Function BF_Node_2E ;
          Support Domain~{iP}; Entity EdgesOf[ All ] ; }
     EndIf
    }
    Constraint {
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint Displacement_y ; }
      If ( FE_Degree~{iP} == 2 )
      { NameOfCoef uyn2 ;
        EntityType EdgesOf ; NameOfConstraint Displacement_y ; }
      EndIf
    }
  }
  { Name H_uz_Mec ; Type Form0 ;
    BasisFunction {
      { Name szn ; NameOfCoef uzn ; Function BF_Node ;
        Support Domain~{iP} ; Entity NodesOf[ All ] ; }
      If ( FE_Degree~{iP} == 2 )
         { Name szn2 ; NameOfCoef uzn2 ; Function BF_Node_2E ;
	   Support Domain~{iP}; Entity EdgesOf[ All ] ; }
      EndIf
    }
    Constraint {
      { NameOfCoef uzn ;
        EntityType NodesOf ; NameOfConstraint Displacement_z ; }
      If ( FE_Degree~{iP} == 2 )
        { NameOfCoef uzn2 ;
	  EntityType EdgesOf ; NameOfConstraint Displacement_z ; }
      EndIf
    }
  }
}

Include "../../templates/lib/Lib_JacInt.pro";

Formulation {
  { Name Elast_u ; Type FemEquation ;
    If ( type_Dimension~{iP} == 2 )
    Quantity {
      { Name ux  ; Type Local ; NameOfSpace H_ux_Mec ; }
      { Name uy  ; Type Local ; NameOfSpace H_uy_Mec ; }
    }
    Equation {
      Galerkin { [ -C_xx[] * Dof{d ux}, {d ux} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_xy[] * Dof{d uy}, {d ux} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_yx[] * Dof{d ux}, {d uy} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_yy[] * Dof{d uy}, {d uy} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      //Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
      //  In Vol_Elast ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }

      Galerkin { [ force_x[] , {ux} ];
        In Vol_Force~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ force_y[] , {uy} ];
        In Vol_Force~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      
      Galerkin { [ pressure_x[] , {ux} ];
        In Sur_Force~{iP} ; Jacobian Sur~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ pressure_y[] , {uy} ];
        In Sur_Force~{iP} ; Jacobian Sur~{iP} ; Integration Gauss_v~{iP} ; }
    }
    EndIf

    If ( type_Dimension~{iP} == 3 )
    Quantity {
      { Name ux  ; Type Local ; NameOfSpace H_ux_Mec ; }
      { Name uy  ; Type Local ; NameOfSpace H_uy_Mec ; }
      { Name uz  ; Type Local ; NameOfSpace H_uz_Mec ; }
    }
    Equation {
      Galerkin { [ -C_xx[] * Dof{d ux}, {d ux} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_xy[] * Dof{d uy}, {d ux} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_xz[] * Dof{d uz}, {d ux} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }

      Galerkin { [ -C_yx[] * Dof{d ux}, {d uy} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_yy[] * Dof{d uy}, {d uy} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_yz[] * Dof{d uz}, {d uy} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }

      Galerkin { [ -C_zx[] * Dof{d ux}, {d uz} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_zy[] * Dof{d uy}, {d uz} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ -C_zz[] * Dof{d uz}, {d uz} ] ;
        In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }

      //Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
      //  In Vol_Elast ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }

      Galerkin { [ force_x[] , {ux} ];
        In Vol_Force~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ force_y[] , {uy} ];
        In Vol_Force~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ force_z[] , {uy} ];
        In Vol_Force~{iP} ; Jacobian Vol~{iP} ; Integration Gauss_v~{iP} ; }

      Galerkin { [ pressure_x[] , {ux} ];
        In Sur_Force~{iP} ; Jacobian Sur~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ pressure_y[] , {uy} ];
        In Sur_Force~{iP} ; Jacobian Sur~{iP} ; Integration Gauss_v~{iP} ; }
      Galerkin { [ pressure_z[] , {uz} ];
        In Sur_Force~{iP} ; Jacobian Sur~{iP} ; Integration Gauss_v~{iP} ; }
    }
    EndIf
  }
}

Resolution {
  { Name Elast_u ;
    System {
      { Name Sys_Mec ; NameOfFormulation Elast_u; }
    }
    Operation {
      InitSolution [Sys_Mec];
      Generate[Sys_Mec];
      Solve[Sys_Mec];
      SaveSolution[Sys_Mec] ;
    }
  }
}

PostProcessing {
  { Name Elast_u ; NameOfFormulation Elast_u ;
    PostQuantity {
      { Name u ; Value { Term { [ Vector[ {ux}, {uy}, 0. ]]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
      { Name sig_xx ; Value { Term { 
	    [ CompX[  C_xx[]*{d ux} + C_xy[]*{d uy} ] ]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
      { Name sig_xy ; Value { Term { 
	    [ CompY[  C_xx[]*{d ux} + C_xy[]*{d uy} ] ]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
      { Name sig_yy ; Value { Term { 
	    [  CompY [ C_yx[]*{d ux} + C_yy[]*{d uy} ] ]; 
	    In Vol_Elast~{iP} ; Jacobian Vol~{iP} ; } } }
    }
  }
}
