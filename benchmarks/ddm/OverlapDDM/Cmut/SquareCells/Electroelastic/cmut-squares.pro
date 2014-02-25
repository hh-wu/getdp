// Set the number of subdomains, do not forget to change it in the .geo file as well
nx = 2;
ny = 2;

// The following code takes nx * ny subdomains (defined in "cmut-squares.geo") as input and solves firstly a 5000Hz-frequency electrostatic problem. As a second step the deduced electric field is used to compute the deformation due to the electrostatic forces using a 3D elasticity formulation on the union of all subdomains. Both steps are done by iterating between subdomains using a gmres accelerated DDM-with-overlap method. Elements used are linear.

// In the following code every subdomain is identified using its x and y number in space. The subdomain identified by number x and y can also alternatively be referred to by its subdomain number which is simply given by "x+nx*y+1". For every subdomain we define at least 14 DDM specific-quantities. The first quantity is "omega~{x+nx*y+1}", the region of its surface. The 4 next quantities are the borders of its surface, namely "sigma_up~{x+nx*y+1}" for the top border, "sigma_right~{x+nx*y+1}" for the right border, "sigma_down~{x+nx*y+1}" for the bottom border, "sigma_left~{x+nx*y+1}" for the left border. Dirichlet constraints will be forced on these 4 borders, be it fixed external dirichlet constraints for the borders of the global domain or constraints that vary as we iterate on the artificial borders (aka. artificial interfaces). The next 4 quantities are "g_up_mechanic~{x+nx*y+1}", "g_right_mechanic~{x+nx*y+1}", "g_down_mechanic~{x+nx*y+1}", "g_left_mechanic~{x+nx*y+1}" which correspond to the information we want to exchange between subdomains for the mechanic equations, respectively on "sigma_down~{x+nx*(y+1)+1}", "sigma_left~{(x+1)+nx*y+1}", "sigma_up~{x+nx*(y-1)+1}", "sigma_right~{(x-1)+nx*y+1}" for subdomain x+nx*y+1. The other 4 "g" fields are defined to exchange the information for the electric equations between artificial interfaces.  The last quantity is "cmut_dirichlet_boundaries~{x+nx*y+1}" which corresponds to all geometric elements that are in contact with surfaces {sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}
// There are two things left to mention: register 9 (#9) is used to select whether the physical sources should be set to 0 or not and register 10 (#10) does the same job for the artificial sources



// Group
//======

Group 	{
	For x In {-1:nx-1+1}
		For y In {-1:ny-1+1}
			// DDM specific:
			sigma_up~{x+nx*y+1} 			= Region[ (1001*nx*ny+4*x+4*nx*y+1) ];
			sigma_right~{x+nx*y+1} 			= Region[ (1001*nx*ny+4*x+4*nx*y+2) ];
			sigma_down~{x+nx*y+1} 			= Region[ (1001*nx*ny+4*x+4*nx*y+3) ];
			sigma_left~{x+nx*y+1} 			= Region[ (1001*nx*ny+4*x+4*nx*y+4) ];

			// 3 surfaces for the Cmut:
			membrane_electrode~{x+nx*y+1}		= Region[ (10000*nx*ny+3*x+3*nx*y+1) ];
			bulk_electrode~{x+nx*y+1}		= Region[ (10000*nx*ny+3*x+3*nx*y+2) ];
			bulk_clamp~{x+nx*y+1}			= Region[ (10000*nx*ny+3*x+3*nx*y+3) ];

			// The 5 volumes of the Cmut:
			bulk~{x+nx*y+1}				= Region[ (100000*nx*ny+5*x+5*nx*y+1) ];
			bulk_insulator~{x+nx*y+1}		= Region[ (100000*nx*ny+5*x+5*nx*y+2) ];
			membrane_support~{x+nx*y+1}		= Region[ (100000*nx*ny+5*x+5*nx*y+3) ];
			empty_gap~{x+nx*y+1}			= Region[ (100000*nx*ny+5*x+5*nx*y+4) ];
			membrane~{x+nx*y+1}			= Region[ (100000*nx*ny+5*x+5*nx*y+5) ];

			// Whole Cmut:
			omega~{x+nx*y+1}			= Region[ {bulk~{x+nx*y+1},bulk_insulator~{x+nx*y+1},membrane_support~{x+nx*y+1},
									empty_gap~{x+nx*y+1},membrane~{x+nx*y+1}} ];

			cmut_dirichlet_boundaries~{x+nx*y+1} 	= ElementsOf[ omega~{x+nx*y+1}, OnOneSideOf {sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, 
									sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1},
									membrane_electrode~{x+nx*y+1}, bulk_electrode~{x+nx*y+1}, bulk_clamp~{x+nx*y+1}} ];
		EndFor
	EndFor
}
 
// Function
//=========

Function {

	For x In {0:nx-1}
		For y In {0:ny-1}

			// Mechanic:
			E[bulk~{x+nx*y+1}]			= 150e9;
			E[bulk_insulator~{x+nx*y+1}]		= 150e9;
			E[membrane_support~{x+nx*y+1}]		= 150e9;
			E[empty_gap~{x+nx*y+1}]			= 1e9;
			E[membrane~{x+nx*y+1}]			= 150e9;

			nu[bulk~{x+nx*y+1}]			= 0.3;
			nu[bulk_insulator~{x+nx*y+1}]		= 0.3;
			nu[membrane_support~{x+nx*y+1}]		= 0.3;
			nu[empty_gap~{x+nx*y+1}]		= 0.01;
			nu[membrane~{x+nx*y+1}]			= 0.3;

			rho[bulk~{x+nx*y+1}]			= 2330;
			rho[bulk_insulator~{x+nx*y+1}]		= 2330;
			rho[membrane_support~{x+nx*y+1}]	= 2330;
			rho[empty_gap~{x+nx*y+1}]		= 1.4;
			rho[membrane~{x+nx*y+1}]		= 2330;

			// Electric:
			epsilon[bulk~{x+nx*y+1}]		= 11.7* 8.854e-12;
			epsilon[bulk_insulator~{x+nx*y+1}]	= 3.9 * 8.854e-12;
			epsilon[membrane_support~{x+nx*y+1}]	= 3.9 * 8.854e-12;
			epsilon[empty_gap~{x+nx*y+1}]		= 	8.854e-12;
			epsilon[membrane~{x+nx*y+1}]		= 3.9 * 8.854e-12;

		EndFor
	EndFor


	C11[]					= E[]/(1+nu[])/(1-2*nu[])*Tensor[	1-nu[],		nu[],		nu[], 
							   		   		nu[],		1-nu[],		nu[],
							   		   		nu[],		nu[],		1-nu[]];

	C12[]					= E[]/(1+nu[])/(1-2*nu[])*Tensor[	0,		0,		0, 
							   		   		0,		0,		0,
							   		   		0,		0,		0];

	C21[]					= E[]/(1+nu[])/(1-2*nu[])*Tensor[	0,		0,		0, 
							   		   		0,		0,		0,
							   		   		0,		0,		0];

	C22[]					= E[]/(1+nu[])/(1-2*nu[])*Tensor[	(1-2*nu[])/2,	0,		0, 
							   		   		0,		(1-2*nu[])/2,	0,
							   		  		0,		0,		(1-2*nu[])/2];




	freq					= 5000;




	// DDM specific:
	For x In {0:nx-1}
		For y In {0:ny-1}

			// The mechanic g quantities are stored in 4 fields
			g_up_mechanic~{x+nx*y+1}[] 			= ComplexVectorField[XYZ[]]{100+4*x+4*nx*y+1};
			g_right_mechanic~{x+nx*y+1}[] 			= ComplexVectorField[XYZ[]]{100+4*x+4*nx*y+2};
			g_down_mechanic~{x+nx*y+1}[] 			= ComplexVectorField[XYZ[]]{100+4*x+4*nx*y+3};
			g_left_mechanic~{x+nx*y+1}[]			= ComplexVectorField[XYZ[]]{100+4*x+4*nx*y+4};

			// The electric g quantities are stored in 4 fields
			g_up_electric~{x+nx*y+1}[] 			= ComplexScalarField[XYZ[]]{100+4*(nx*ny+1)+4*x+4*nx*y+1};
			g_right_electric~{x+nx*y+1}[] 			= ComplexScalarField[XYZ[]]{100+4*(nx*ny+1)+4*x+4*nx*y+2};
			g_down_electric~{x+nx*y+1}[] 			= ComplexScalarField[XYZ[]]{100+4*(nx*ny+1)+4*x+4*nx*y+3};
			g_left_electric~{x+nx*y+1}[]			= ComplexScalarField[XYZ[]]{100+4*(nx*ny+1)+4*x+4*nx*y+4};

		EndFor
	EndFor
			
}

//Jacobian
//========

Jacobian {
  	  { Name JVol;
    		Case { { Region All; Jacobian Vol; } }
  	}
	  { Name JSur;
    		Case { { Region All; Jacobian Sur; } }
  	}
	 { Name JLin;
    		Case { { Region All; Jacobian Lin; } }
  	}
}
 
//Integration (parameters)
//=======================

Integration {
	{ Name I1 ;
	Case {
	{ Type Gauss ;
	Case {
		  { GeoElement Point       ; NumberOfPoints  1 ; }
		  { GeoElement Line        ; NumberOfPoints  4 ; }
		  { GeoElement Triangle    ; NumberOfPoints  7 ; }
		  { GeoElement Quadrangle  ; NumberOfPoints  4 ; }
		  { GeoElement Tetrahedron ; NumberOfPoints  16 ; }
		  { GeoElement Hexahedron  ; NumberOfPoints  6 ; }
		  { GeoElement Prism       ; NumberOfPoints  9 ; }
        }
      }
    }
  }
}

//Constraint
//==========

Constraint	{
	For x In {0:nx-1}
		For y In {0:ny-1}

			For i In {0:2}

				// Mechanic constraint. {0} corresponds to the x component, {1} to y and {2} to z:

				{ Name mechanic_constraint_comp~{i}~{x+nx*y+1} ; 
					Case {
						// Constraint on sigma_up~{x+nx*y+1}
						If (y < ny-1)	
			      				{ Region sigma_up~{x+nx*y+1}; Value (#10 > 0 ? Comp[g_up_mechanic~{x+nx*y+1}[]]{i} : 0 ); }	
						EndIf
						// Constraint on sigma_right~{x+nx*y+1}
						If (x < nx-1)			
			      				{ Region sigma_right~{x+nx*y+1}; Value (#10 > 0 ? Comp[g_right_mechanic~{x+nx*y+1}[]]{i} : 0 ); }
						EndIf
						// Constraint on sigma_down~{x+nx*y+1}
						If (y > 0)			
							{ Region sigma_down~{x+nx*y+1}; Value (#10 > 0 ? Comp[g_down_mechanic~{x+nx*y+1}[]]{i} : 0 ); }
						EndIf
						// Constraint on sigma_left~{x+nx*y+1}
						If (x > 0)			
							{ Region sigma_left~{x+nx*y+1}; Value (#10 > 0 ? Comp[g_left_mechanic~{x+nx*y+1}[]]{i} : 0 ); }
						EndIf

						{ Region bulk_clamp~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0 ); }
					     }		
				}
			EndFor

			// Electric:

			{ Name electric_constraint~{x+nx*y+1} ; 
				Case {
					// Constraint on sigma_up~{x+nx*y+1}
					If (y < ny-1)	
		      				{ Region sigma_up~{x+nx*y+1}; Value (#10 > 0 ? g_up_electric~{x+nx*y+1}[] : 0 ); }	
					EndIf
					// Constraint on sigma_right~{x+nx*y+1}
					If (x < nx-1)			
		      				{ Region sigma_right~{x+nx*y+1}; Value (#10 > 0 ? g_right_electric~{x+nx*y+1}[] : 0 ); }
					EndIf
					// Constraint on sigma_down~{x+nx*y+1}
					If (y > 0)			
						{ Region sigma_down~{x+nx*y+1}; Value (#10 > 0 ? g_down_electric~{x+nx*y+1}[] : 0 ); }
					EndIf
					// Constraint on sigma_left~{x+nx*y+1}
					If (x > 0)			
						{ Region sigma_left~{x+nx*y+1}; Value (#10 > 0 ? g_left_electric~{x+nx*y+1}[] : 0 ); }
					EndIf

					{ Region bulk_electrode~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0 ); }

					// We apply a voltage only on one cmut cell to visualise the crosstalk:
					If (x == 0 && y == 0)			
						{ Region membrane_electrode~{x+nx*y+1}; Value (#9 > 0 ? 5 : 0 ); }
					EndIf
					If (x > 0 || y > 0)			
						{ Region membrane_electrode~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0 ); }
					EndIf
				     }		
			}

			///// Something special for electrostatic force computation - This might change in the future:
			  { Name Displacement_dum~{x+nx*y+1} ; Type Assign ;
			    Case {
			     { Region Region[{omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}}]; Value 1. ; }
			    }
			  }
			//////

		EndFor
	EndFor	
}

//FunctionSpace
//=============

FunctionSpace	{
	For x In {0:nx-1}
		For y In {0:ny-1}
			// Dummy space for the electrostatic forces computation - This might change in the future:
			  { Name H_u_Mec3D_dummy~{x+nx*y+1} ; Type Vector ;
			    BasisFunction {
			      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
				Support Region[{omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}}]; Entity NodesOf[All] ; }
			      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
				Support Region[{omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}}]; Entity NodesOf[All] ; }
			      { Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
				Support Region[{omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}}]; Entity NodesOf[All] ; }
			    }
			    SubSpace{
			       { Name ud_x ; NameOfBasisFunction sxn ; }
			       { Name ud_y ; NameOfBasisFunction syn ; }
			       { Name ud_z ; NameOfBasisFunction szn ; }
			     }
			     Constraint {
			       { NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint Displacement_dum~{x+nx*y+1} ; }
			       { NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint Displacement_dum~{x+nx*y+1} ; }
			       { NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint Displacement_dum~{x+nx*y+1} ; }
			     }
			  }
			// End


			{ Name mechanic_function_space~{x+nx*y+1}; Type Vector; 
				BasisFunction{
					{Name wxn; NameOfCoef uxn; Function BF_NodeX;
						Support Region[ {omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}} ]; Entity NodesOf[All];}
					{Name wyn; NameOfCoef uyn; Function BF_NodeY;
						Support Region[ {omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}} ]; Entity NodesOf[All];}
					{Name wzn; NameOfCoef uzn; Function BF_NodeZ;
						Support Region[ {omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}} ]; Entity NodesOf[All];}
				}
				// Subspace for the electrostatic force computation - This might change in the future:
				    SubSpace{
				       { Name u_x ; NameOfBasisFunction wxn ; }
				       { Name u_y ; NameOfBasisFunction wyn ; }
				       { Name u_z ; NameOfBasisFunction wzn ; }
				     }
				// End
    				Constraint{
    					{NameOfCoef uxn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_0~{x+nx*y+1};}
    					{NameOfCoef uyn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_1~{x+nx*y+1};}
    					{NameOfCoef uzn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_2~{x+nx*y+1};}
     				}
			}

			{ Name electric_function_space~{x+nx*y+1}; Type Form0; 
				BasisFunction{
					{Name wn; NameOfCoef vn; Function BF_Node;
						Support Region[ {omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}} ]; Entity NodesOf[All];}
				}
    				Constraint{
    					{NameOfCoef vn; EntityType NodesOf; NameOfConstraint electric_constraint~{x+nx*y+1};}
     				}
			}
		EndFor
	EndFor
}
  
//(Weak) Formulations
//==================
 
Formulation	{
	For x In {0:nx-1}
		For y In {0:ny-1}		
			{ Name mechanic_formulation~{x+nx*y+1}; Type FemEquation; Quantity{
				{Name u_omega~{x+nx*y+1}; Type Local; NameOfSpace mechanic_function_space~{x+nx*y+1};}
				{Name v_omega~{x+nx*y+1}; Type Local; NameOfSpace electric_function_space~{x+nx*y+1};}
				// Electrostatic force computation needs the following:
				{ Name u_x ; Type Local ; NameOfSpace  mechanic_function_space~{x+nx*y+1}[u_x] ;}
				{ Name u_y ; Type Local ; NameOfSpace  mechanic_function_space~{x+nx*y+1}[u_y] ;}
				{ Name u_z ; Type Local ; NameOfSpace  mechanic_function_space~{x+nx*y+1}[u_z] ;}

				{ Name ud ;   Type Local ; NameOfSpace H_u_Mec3D_dummy~{x+nx*y+1} ; }
				{ Name ud_x ; Type Local ; NameOfSpace  H_u_Mec3D_dummy~{x+nx*y+1}[ud_x] ;}
				{ Name ud_y ; Type Local ; NameOfSpace  H_u_Mec3D_dummy~{x+nx*y+1}[ud_y] ;}
				{ Name ud_z ; Type Local ; NameOfSpace  H_u_Mec3D_dummy~{x+nx*y+1}[ud_z] ;}
				// End
				}
				Equation{
				       Galerkin { [ C11[] * Dof{D1 u_omega~{x+nx*y+1}} , {D1 u_omega~{x+nx*y+1}} ] ;
					 In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       Galerkin { [ C12[] * Dof{D2 u_omega~{x+nx*y+1}} , {D1 u_omega~{x+nx*y+1}} ] ;
					 In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       Galerkin { [ C21[] * Dof{D1 u_omega~{x+nx*y+1}} , {D2 u_omega~{x+nx*y+1}} ] ;
					 In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       Galerkin { [ C22[] * Dof{D2 u_omega~{x+nx*y+1}} , {D2 u_omega~{x+nx*y+1}} ] ;
					 In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

 				       Galerkin { DtDtDof [ rho[] * Dof{u_omega~{x+nx*y+1}} , {u_omega~{x+nx*y+1}} ];
					 In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				      // Direct computation of force ... not very elegant (trick for assembling only the diagonal elements)
				      Galerkin {[ -0.5*epsilon[]* VirtualWork[Dof{ud_x}*0 + {d v_omega~{x+nx*y+1}}], Unit[{u_x}] ] ;
					In Region[omega~{x+nx*y+1}]; Jacobian JVol; Integration I1;}
				      Galerkin {[ -0.5*epsilon[]* VirtualWork[Dof{ud_y}*0 + {d v_omega~{x+nx*y+1}}], Unit[{u_y}] ] ;
					In Region[omega~{x+nx*y+1}]; Jacobian JVol; Integration I1;}
				      Galerkin {[ -0.5*epsilon[]* VirtualWork[Dof{ud_z}*0 + {d v_omega~{x+nx*y+1}}], Unit[{u_z}] ] ;
					In Region[omega~{x+nx*y+1}]; Jacobian JVol; Integration I1;}
					// End
				}
			}

			{ Name electric_formulation~{x+nx*y+1}; Type FemEquation; Quantity{
				{Name v_omega~{x+nx*y+1}; Type Local; NameOfSpace electric_function_space~{x+nx*y+1};}}
				Equation{
					Galerkin { [ epsilon[] * Dof{d v_omega~{x+nx*y+1}} , {d v_omega~{x+nx*y+1}} ] ; 
						In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }
				}
			}
		EndFor
	EndFor
}

// Resolution
//===========
 
Resolution	{
		{Name res; 
			System	{
				For x In {0:nx-1}
					For y In {0:ny-1}
						{Name mechanic_resolution~{x+nx*y+1}; NameOfFormulation mechanic_formulation~{x+nx*y+1}; Type Complex; Frequency freq;}
						{Name electric_resolution~{x+nx*y+1}; NameOfFormulation electric_formulation~{x+nx*y+1}; Type Complex; Frequency freq;}
					EndFor
				EndFor
				}
			Operation{

				CreateDir["Results/"];


				PostOperation[init_fields_mechanic];
				PostOperation[init_fields_electric];




				// ELECTRICAL SECTION:

				////////////////////// Let the DDM game begin!

			
				////////// Step 1: Solving for the physical sources by forcing 0 on the artificial interfaces and not 0 on the physical boundaries

				Evaluate[1. #9]; Evaluate[0. #10];	

				For x In {0:nx-1}
					For y In {0:ny-1}

						// Updating the constraints:
     						UpdateConstraint[electric_resolution~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}, membrane_electrode~{x+nx*y+1}, 
								bulk_electrode~{x+nx*y+1}}], Assign];

						Generate[electric_resolution~{x+nx*y+1}]; Solve[electric_resolution~{x+nx*y+1}];
					EndFor
				EndFor

				For x In {0:nx-1}
					For y In {0:ny-1}
						PostOperation[update_g_up_electric~{x+nx*y+1}];
						PostOperation[update_g_right_electric~{x+nx*y+1}];
						PostOperation[update_g_down_electric~{x+nx*y+1}];
						PostOperation[update_g_left_electric~{x+nx*y+1}];
					EndFor
				EndFor

      				// A barrier is mandatory in parallel execution to ensure that every process has completed the initialization
      				Barrier;		


				////////// Done with step 1

				////////// Step 2: Solving for the non physical sources
				
				// Keeping the previous g on the artificial interfaces and setting g = 0 physical boundaries 		
				Evaluate[0. #9]; Evaluate[1. #10];

				SetCommWorld;

				// In iterativeLinearSolver we have to give "b" of "Fg = b" via a list of fields which is here the set of 
				// registers {100+0+nx*0+1:100+nx*ny}. This set will contain the g at iteration k when iterating
				// Inside "IterativeLinearSolver" one has to specify the operator "A" and not "F = I-A" when using "I-A" as first argument
				IterativeLinearSolver["I-A", "gmres", 1e-3, 200, 200, {(100+4*(nx*ny+1)+1):(100+4*(nx*ny+1)+4*(nx-1)+4*nx*(ny-1)+4)}, {}, {}]
					{
					SetCommSelf;
					For x In {0:nx-1}
						For y In {0:ny-1}
	     						UpdateConstraint[electric_resolution~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}, membrane_electrode~{x+nx*y+1}, 
								bulk_electrode~{x+nx*y+1}}], Assign];
			
							// We have to regenerate the RHS in the vicinity of sigma since we force dirichlet on sigma:
      							GenerateRHSGroup[electric_resolution~{x+nx*y+1}, cmut_dirichlet_boundaries~{x+nx*y+1}];
							// We solve "again", i.e. without recomputing the LU decomposition in mumps
							SolveAgain[electric_resolution~{x+nx*y+1}];					
						EndFor
					EndFor

					For x In {0:nx-1}
						For y In {0:ny-1}
							PostOperation[update_g_up_electric~{x+nx*y+1}];
							PostOperation[update_g_right_electric~{x+nx*y+1}];
							PostOperation[update_g_down_electric~{x+nx*y+1}];
							PostOperation[update_g_left_electric~{x+nx*y+1}];						
						EndFor
					EndFor


					SetCommWorld;
					}{}	

				// End iterative linear solver

				////////// Done with step 2: "g" is now accurate enough, let us deduce the final solution:

				// Keeping the accurately computed g on the artificial interfaces and adding the physical constraints: 		
				Evaluate[1. #9]; Evaluate[1. #10];


				For x In {0:nx-1}
					For y In {0:ny-1}

     						UpdateConstraint[electric_resolution~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}, membrane_electrode~{x+nx*y+1}, 
								bulk_electrode~{x+nx*y+1}}], Assign];
      						GenerateRHSGroup[electric_resolution~{x+nx*y+1}, cmut_dirichlet_boundaries~{x+nx*y+1}];
						SolveAgain[electric_resolution~{x+nx*y+1}]; 

						// We now want to store the final solution:
						PostOperation[save_v~{x+nx*y+1}];

					EndFor
				EndFor


				// MECHANICAL SECTION:

				////////////////////// Let the DDM game begin!

				// Parallel mode:
				SetCommSelf;
				
				////////// Step 1: Solving for the physical sources by forcing 0 on the artificial interfaces and not 0 on the physical boundaries

				Evaluate[1. #9]; Evaluate[0. #10];	

				For x In {0:nx-1}
					For y In {0:ny-1}

						// Updating the constraints:
     						UpdateConstraint[mechanic_resolution~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}, membrane_electrode~{x+nx*y+1}, 
								bulk_electrode~{x+nx*y+1}, bulk_clamp~{x+nx*y+1}}], Assign];

						Generate[mechanic_resolution~{x+nx*y+1}]; Solve[mechanic_resolution~{x+nx*y+1}];
					EndFor
				EndFor

				For x In {0:nx-1}
					For y In {0:ny-1}
						PostOperation[update_g_up_mechanic~{x+nx*y+1}];
						PostOperation[update_g_right_mechanic~{x+nx*y+1}];
						PostOperation[update_g_down_mechanic~{x+nx*y+1}];
						PostOperation[update_g_left_mechanic~{x+nx*y+1}];
					EndFor
				EndFor

      				// A barrier is mandatory in parallel execution to ensure that every process has completed the initialization
      				Barrier;		


				////////// Done with step 1

				////////// Step 2: Solving for the non physical sources
				
				// Keeping the previous g on the artificial interfaces and setting g = 0 physical boundaries 		
				Evaluate[0. #9]; Evaluate[1. #10];

				SetCommWorld;

				// In iterativeLinearSolver we have to give "b" of "Fg = b" via a list of fields which is here the set of 
				// registers {100+0+nx*0+1:100+nx*ny}. This set will contain the g at iteration k when iterating
				// Inside "IterativeLinearSolver" one has to specify the operator "A" and not "F = I-A" when using "I-A" as first argument
				IterativeLinearSolver["I-A", "gmres", 1e-3, 200, 200, {101:100+4*nx*ny}, {}, {}]////GET THE LIST OF USED G's!!!!!!!!
					{
					SetCommSelf;
					For x In {0:nx-1}
						For y In {0:ny-1}
     						UpdateConstraint[mechanic_resolution~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}, membrane_electrode~{x+nx*y+1}, 
								bulk_electrode~{x+nx*y+1}, bulk_clamp~{x+nx*y+1}}], Assign];
			
							// We have to regenerate the RHS in the vicinity of sigma since we force dirichlet on sigma:
      							GenerateRHSGroup[mechanic_resolution~{x+nx*y+1}, cmut_dirichlet_boundaries~{x+nx*y+1}];
							// We solve "again", i.e. without recomputing the LU decomposition in mumps
							SolveAgain[mechanic_resolution~{x+nx*y+1}];					
						EndFor
					EndFor

					For x In {0:nx-1}
						For y In {0:ny-1}
							PostOperation[update_g_up_mechanic~{x+nx*y+1}];
							PostOperation[update_g_right_mechanic~{x+nx*y+1}];
							PostOperation[update_g_down_mechanic~{x+nx*y+1}];
							PostOperation[update_g_left_mechanic~{x+nx*y+1}];						
						EndFor
					EndFor


					SetCommWorld;
					}{}	

				// End iterative linear solver

				////////// Done with step 2: "g" is now accurate enough, let us deduce the final solution:

				// Keeping the accurately computed g on the artificial interfaces and adding the physical constraints: 		
				Evaluate[1. #9]; Evaluate[1. #10];


				For x In {0:nx-1}
					For y In {0:ny-1}

     						UpdateConstraint[mechanic_resolution~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}, membrane_electrode~{x+nx*y+1}, 
								bulk_electrode~{x+nx*y+1}, bulk_clamp~{x+nx*y+1}}], Assign];
      						GenerateRHSGroup[mechanic_resolution~{x+nx*y+1}, cmut_dirichlet_boundaries~{x+nx*y+1}];
						SolveAgain[mechanic_resolution~{x+nx*y+1}]; 

						// We now want to store the final solution:
						PostOperation[save_u~{x+nx*y+1}];

					EndFor
				EndFor
			}
		}
}
 
// Post Processing
//================
 
PostProcessing 	{
		For x In {0:nx-1}
			For y In {0:ny-1}

  				{ Name u_omega~{x+nx*y+1}; NameOfFormulation mechanic_formulation~{x+nx*y+1};
    					Quantity {
      						{ Name u_omega~{x+nx*y+1} ; Value { Local { [ {u_omega~{x+nx*y+1}} ]; 
							In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; } } }
						

      						{ Name g_mechanic~{x+nx*y+1} ; Value { Local { [ {u_omega~{x+nx*y+1}} ]; 
							In Region[{sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}, 
								sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}}] ; Jacobian JVol ; } } }
						}
				}
  				{ Name v_omega~{x+nx*y+1}; NameOfFormulation electric_formulation~{x+nx*y+1};
    					Quantity {
      						{ Name v_omega~{x+nx*y+1} ; Value { Local { [ {v_omega~{x+nx*y+1}} ]; 
							In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; } } }
						

      						{ Name g_electric~{x+nx*y+1} ; Value { Local { [ {v_omega~{x+nx*y+1}} ]; 
							In Region[{sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}, 
								sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}}] ; Jacobian JVol ; } } }
						}
				}



			EndFor
		EndFor



		{ Name init_fields_mechanic; NameOfFormulation mechanic_formulation~{x+nx*y+1};
			Quantity {
		      		{ Name init ; Value { Local { [ 0 ]; 
					In Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}] ; Jacobian JVol ; } } }
				}
		}
		{ Name init_fields_electric; NameOfFormulation electric_formulation~{x+nx*y+1};
			Quantity {
		      		{ Name init ; Value { Local { [ 0 ]; 
					In Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}] ; Jacobian JVol ; } } }
				}
		}

}

// Post Operation
//===============

PostOperation	{
		For x In {0:nx-1}
			For y In {0:ny-1}

				// g mechanic:
				{ Name update_g_up_mechanic~{x+nx*y+1} ; NameOfPostProcessing u_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_down~{x+nx*(y+1)+1}, 
							StoreInField 100+4*x+4*nx*(y+1)+3] ;	
						}
				}
				{ Name update_g_right_mechanic~{x+nx*y+1} ; NameOfPostProcessing u_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_left~{(x+1)+nx*y+1}, 
							StoreInField 100+4*(x+1)+4*nx*y+4] ;	
						}
				}
				{ Name update_g_down_mechanic~{x+nx*y+1} ; NameOfPostProcessing u_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_up~{x+nx*(y-1)+1}, 
							StoreInField 100+4*x+4*nx*(y-1)+1] ;	
						}
				}
				{ Name update_g_left_mechanic~{x+nx*y+1} ; NameOfPostProcessing u_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_right~{(x-1)+nx*y+1}, 
							StoreInField 100+4*(x-1)+4*nx*y+2] ;	
						}
				}
				// g electric:
				{ Name update_g_up_electric~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_down~{x+nx*(y+1)+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*(y+1)+3] ;	
						}
				}
				{ Name update_g_right_electric~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_left~{(x+1)+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*(x+1)+4*nx*y+4] ;	
						}
				}
				{ Name update_g_down_electric~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_up~{x+nx*(y-1)+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*(y-1)+1] ;	
						}
				}
				{ Name update_g_left_electric~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_right~{(x-1)+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*(x-1)+4*nx*y+2] ;	
						}
				}



				{ Name save_u~{x+nx*y+1} ; NameOfPostProcessing u_omega~{x+nx*y+1}; 
					Operation {
						Print[ u_omega~{x+nx*y+1}, OnElementsOf omega~{x+nx*y+1}, 
							File Sprintf("Results/u%g.pos",x+nx*y+1)] ;						
						}
				}
				{ Name save_v~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ v_omega~{x+nx*y+1}, OnElementsOf omega~{x+nx*y+1}, 
							File Sprintf("Results/v%g.pos",x+nx*y+1)] ;						
						}
				}

			EndFor
		EndFor



		{ Name init_fields_mechanic ; NameOfPostProcessing init_fields_mechanic; 
			Operation {
				For x In {0:nx-1}
					For y In {0:ny-1}
						Print[ init, OnElementsOf sigma_up~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+1] ;						
						Print[ init, OnElementsOf sigma_right~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+2] ;						
						Print[ init, OnElementsOf sigma_down~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+3] ;						
						Print[ init, OnElementsOf sigma_left~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+4] ;						
					EndFor
				EndFor
				}
		}

		{ Name init_fields_electric ; NameOfPostProcessing init_fields_electric; 
			Operation {
				For x In {0:nx-1}
					For y In {0:ny-1}
						Print[ init, OnElementsOf sigma_up~{x+nx*y+1},
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+1] ;						
						Print[ init, OnElementsOf sigma_right~{x+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+2] ;						
						Print[ init, OnElementsOf sigma_down~{x+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+3] ;						
						Print[ init, OnElementsOf sigma_left~{x+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+4] ;						
					EndFor
				EndFor
				}
		}

}
