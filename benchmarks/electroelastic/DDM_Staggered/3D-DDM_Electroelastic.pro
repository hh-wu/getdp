// THE FOLLOWING CODE SOLVES A WEAKLY COUPLED (AKA. STAGGERED) ELECTROELASTIC FORMULATION ON THE DEFORMED OR UNDEFORMED MECHANIC DOMAIN.
// IT SOLVES THE NON-LINEAR COUPLING BY ALTERNATING BETWEEN THE ELASTIC AND THE ELECTROSTATIC FORMULATION UNTIL CONVERGENCE USING AN EXTERNAL 'ITERATIVELOOP' LOOP.
// FOR EVERY ITERATION OF THE ITERATIVE LOOP THE ELECTROSTATIC FORMULATION IS FIRST SOLVED ON ALL DOMAINS USING DDM WITH OVERLAP AND GMRES, 
// THEN THE ELECTROSTATIC FORCES ARE DEDUCED EVERYWHERE BEFORE FINALLY COMPUTING THE ELASTIC FORMULATION ON ALL DOMAINS USING DDM WITH OVERLAP AND GMRES.
// ELEMENTS USED ARE LINEAR.


// Set the number of subdomains, do not forget to change it in the .geo file as well
nx = 2;
ny = 1;

// The following code takes nx * ny subdomains (defined in the .geo) as input.
// In the following code every subdomain is identified using its x and y number in space. The subdomain identified by number x and y can also alternatively be referred to by its subdomain number which is simply given by "x+nx*y+1". For every subdomain we define DDM specific-quantities. The first quantity is "omega~{x+nx*y+1}", the whole subdomain. The 4 next quantities are the borders of its surface, namely "sigma_up~{x+nx*y+1}" for the top border, "sigma_right~{x+nx*y+1}" for the right border, "sigma_down~{x+nx*y+1}" for the bottom border, "sigma_left~{x+nx*y+1}" for the left border. Dirichlet constraints will be forced on these 4 borders, be it fixed external dirichlet constraints for the borders of the global domain or constraints that vary as we iterate on the artificial borders (aka. artificial interfaces). The next 4 quantities are "g_up_mechanic~{x+nx*y+1}", "g_right_mechanic~{x+nx*y+1}", "g_down_mechanic~{x+nx*y+1}", "g_left_mechanic~{x+nx*y+1}" which correspond to the information we want to exchange between subdomains, respectively on "sigma_down~{x+nx*(y+1)+1}", "sigma_left~{(x+1)+nx*y+1}", "sigma_up~{x+nx*(y-1)+1}", "sigma_right~{(x-1)+nx*y+1}" for subdomain x+nx*y+1. The last quantity is "skin_electric_force~{x+nx*y+1}" which corresponds to all geometric elements that are in contact with surfaces {sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}
// There are two things left to mention: register 9 (#9) is used to select whether the physical sources should be set to 0 or not and register 10 (#10) does the same job for the artificial sources


// Constant
//======

DefineConstant[

	freq		= {500000, Name "freq"},
	Velectrode 	= {600, Name "Velectrode"}

];


// Group
//======

Group 	{
	For x In {-1:nx-1+1}
		For y In {-1:ny-1+1}
			// Defining the 4 artificial boundaries for DDM:
			sigma_up~{x+nx*y+1} 			= Region[ (10001*nx*ny+4*x+4*nx*y+1) ];
			sigma_right~{x+nx*y+1} 			= Region[ (10001*nx*ny+4*x+4*nx*y+2) ];
			sigma_down~{x+nx*y+1} 			= Region[ (10001*nx*ny+4*x+4*nx*y+3) ];
			sigma_left~{x+nx*y+1} 			= Region[ (10001*nx*ny+4*x+4*nx*y+4) ];

			// The electrode can either be the whole membrane surface or an area in the middle:
			electrode~{x+nx*y+1}			= Region[ (100000*nx*ny+3*x+3*nx*y+1) ]; // Choose (100000*nx*ny+3*x+3*nx*y+1) or sigma_up~{x+nx*y+1}

			// The air boundaries are the borders of the air gap under the membrane.
			// It might be used in the code to solve a Laplacian formulation on the air region to smoothly deform it
			air_boundaries~{x+nx*y+1} 		= Region[ (100000*nx*ny+3*x+3*nx*y+3) ];

			// Define the region where an electrostatic force could possibly appear:
			force_interface~{x+nx*y+1}		= Region[ {air_boundaries~{x+nx*y+1}, sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, 
										sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}} ];

			// The following regions are needed to deform the mesh:
			solid_overlap_left~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+6) ];
			solid_overlap_right~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+7) ];
			solid_no_overlap~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+8) ];
			air_overlap_left~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+9) ];
			air_overlap_right~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+10) ];
			air_no_overlap~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+11) ];

			// The following is needed to compute the forces:
			solid_deformed_no_overlap~{x+nx*y+1}	= Region[ (1000*nx*ny+20*x+nx*20*y+4) ];
			solid_deformed_overlap_left~{x+nx*y+1}	= Region[ (1000*nx*ny+20*x+nx*20*y+12) ];
			solid_deformed_overlap_right~{x+nx*y+1}	= Region[ (1000*nx*ny+20*x+nx*20*y+13) ];

			no_overlap_deformed~{x+nx*y+1}		= Region[ {solid_deformed_no_overlap~{x+nx*y+1}, air_no_overlap~{x+nx*y+1}} ];
			overlap_left_deformed~{x+nx*y+1}	= Region[ {solid_deformed_overlap_left~{x+nx*y+1}, air_overlap_left~{x+nx*y+1}} ];
			overlap_right_deformed~{x+nx*y+1}	= Region[ {solid_deformed_overlap_right~{x+nx*y+1}, air_overlap_right~{x+nx*y+1}} ];

			solid~{x+nx*y+1}			= Region[ {solid_no_overlap~{x+nx*y+1}, solid_overlap_left~{x+nx*y+1}, solid_overlap_right~{x+nx*y+1}} ];
			solid_deformed~{x+nx*y+1}		= Region[ {solid_deformed_no_overlap~{x+nx*y+1}, solid_deformed_overlap_left~{x+nx*y+1},
									solid_deformed_overlap_right~{x+nx*y+1}} ];
			air~{x+nx*y+1}				= Region[ {air_no_overlap~{x+nx*y+1}, air_overlap_left~{x+nx*y+1}, air_overlap_right~{x+nx*y+1}} ];

		EndFor
	EndFor
}
 
Function {

	For x In {0:nx-1}
		For y In {0:ny-1}

			// Mechanic:
			E[solid~{x+nx*y+1}]				= 150e9;
			nu[solid~{x+nx*y+1}]				= 0.3;
			rho[solid~{x+nx*y+1}]				= 2330;

			// Electric:
			epsilon[solid_deformed~{x+nx*y+1}]		= 3.9* 8.854e-12;
			epsilon[air~{x+nx*y+1}]				= 1* 8.854e-12;

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


	// DDM specific:
	For x In {0:nx-1}
		For y In {0:ny-1}
			// Deformation on solid is stored in u:
			// This might be used in a constraint if one wants to deform the air with a Laplacian formulation: 
			u~{x+nx*y+1}[]					= ComplexVectorField[XYZ[]]{10000+x+nx*y+1};

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
		  { GeoElement Quadrangle  ; NumberOfPoints  7 ; }
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

						{ Region sigma_down~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0 ); }
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

					// Only the first CMUT is excited with an electric voltage:
					If (x == 0)
						{ Region electrode~{x+nx*y+1}; Value (#9 > 0 ? Velectrode : 0 ); }
					EndIf
						{ Region sigma_down~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0 ); }
				     }		
			}

			// Mesh deformation constraint on solid that might be used to deform the air using a Laplacian formulation:
			For i In {0:2}

				{ Name mesh_deform_comp~{i}~{x+nx*y+1} ; 
					Case {	
			      			{ Region solid~{x+nx*y+1}; Value (#11 > 0 ? Comp[u~{x+nx*y+1}[]]{i} : 0); }	
					     }		
				}
			EndFor

			// Dummy displacements needed by getdp to know to which node the computed nodal forces belong 
			// (set to 1 to keep the nodal forces untouched in the equations --> f_nodal = u_dummy_node_n * force_elec = 1 * force_elec):
			  { Name Displacement_dum~{x+nx*y+1} ; Type Assign ;
			    Case {
			     { Region NodesOf[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}]; Value 1 ; }
			    }
			  }
			//

		EndFor
	EndFor	
}

//FunctionSpace
//=============

FunctionSpace	{
	For x In {0:nx-1}
		For y In {0:ny-1}
			// Dummy displacements needed by getdp to know to which node the computed nodal forces belong:
			{ Name H_u_Mec3D_dummy~{x+nx*y+1} ; Type Vector ;
				BasisFunction {
					{ Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
						Support Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}]; 
						Entity NodesOf[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1},
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}]; }
					{ Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
						Support Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}]; 
						Entity NodesOf[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1},
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}]; }
					{ Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
						Support Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}]; 
						Entity NodesOf[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1},
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}]; }
				}
				Constraint {
					{ NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint Displacement_dum~{x+nx*y+1} ; }
					{ NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint Displacement_dum~{x+nx*y+1} ; }
					{ NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint Displacement_dum~{x+nx*y+1} ; }
				}
			}

			// Mechanic function space - Need to have non zero base functions on the overlap interfaces to copy u on it:
			{ Name mechanic_function_space~{x+nx*y+1}; Type Vector; 
				BasisFunction{
					{Name wxn; NameOfCoef uxn; Function BF_NodeX; dFunction {BF_NodeX_D1, BF_NodeX_D2, BF_GradNodeRealCoord};
						Support Region[ {solid~{x+nx*y+1}, solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1},
							sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}}];
 						Entity NodesOf[solid~{x+nx*y+1}];}
					{Name wyn; NameOfCoef uyn; Function BF_NodeY; dFunction {BF_NodeY_D1, BF_NodeY_D2, BF_GradNodeRealCoord};
						Support Region[ {solid~{x+nx*y+1}, solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1},
							sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}}];
 						Entity NodesOf[solid~{x+nx*y+1}];}
					{Name wzn; NameOfCoef uzn; Function BF_NodeZ; dFunction {BF_NodeZ_D1, BF_NodeZ_D2, BF_GradNodeRealCoord};
						Support Region[ {solid~{x+nx*y+1}, solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
							no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1},
							sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}}];
 						Entity NodesOf[solid~{x+nx*y+1}];}
				}
				SubSpace{
					{ Name u_x ; NameOfBasisFunction wxn ; }
					{ Name u_y ; NameOfBasisFunction wyn ; }
					{ Name u_z ; NameOfBasisFunction wzn ; }
				}
    				Constraint{
    					{NameOfCoef uxn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_0~{x+nx*y+1};}
    					{NameOfCoef uyn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_1~{x+nx*y+1};}
    					{NameOfCoef uzn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_2~{x+nx*y+1};}
     				}
			}

			// Force computation only for display:
			{ Name force_Elec~{x+nx*y+1} ; Type Vector ;
			  BasisFunction {
				{ Name sxn ; NameOfCoef fxn ; Function BF_NodeX ;
				 		Support Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, no_overlap_deformed~{(x-1)+nx*y+1}, 
							no_overlap_deformed~{(x+1)+nx*y+1}}]; Entity NodesOf[{solid~{x+nx*y+1}, air~{x+nx*y+1}}] ; }
				{ Name syn ; NameOfCoef fyn ; Function BF_NodeY ;
				 		Support Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, no_overlap_deformed~{(x-1)+nx*y+1}, 
							no_overlap_deformed~{(x+1)+nx*y+1}}]; Entity NodesOf[{solid~{x+nx*y+1}, air~{x+nx*y+1}}] ; }
				{ Name szn ; NameOfCoef fzn ; Function BF_NodeZ ;
				 		Support Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, no_overlap_deformed~{(x-1)+nx*y+1}, 
							no_overlap_deformed~{(x+1)+nx*y+1}}]; Entity NodesOf[{solid~{x+nx*y+1}, air~{x+nx*y+1}}] ; }
			 		}
			}


			{ Name electric_function_space~{x+nx*y+1}; Type Form0; 
				BasisFunction{
					{Name wn; NameOfCoef vn; Function BF_Node;
						Support Region[ {solid_deformed~{x+nx*y+1}, air~{x+nx*y+1},
							sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}} ]; 
						Entity NodesOf[ {solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}} ];}
				}
    				Constraint{
    					{NameOfCoef vn; EntityType NodesOf; NameOfConstraint electric_constraint~{x+nx*y+1};}
     				}
			}

			// Used to deform the mesh on solid and possibly on the air as well with a Laplacian formulation:
			{ Name mesh_deform~{x+nx*y+1}; Type Vector; 
				BasisFunction{
					{Name wxn; NameOfCoef uxn; Function BF_NodeX; dFunction {BF_GradNode, BF_Zero}; 
					// D1 is now equal to grad_node, trick needed else getdp will not know how to use component  X of grad on a bf_nodeX 
						Support Region[{solid~{x+nx*y+1}, air~{x+nx*y+1}}]; Entity NodesOf[{solid~{x+nx*y+1}, air~{x+nx*y+1}}];}
					{Name wyn; NameOfCoef uyn; Function BF_NodeY; dFunction {BF_GradNode, BF_Zero};
						Support Region[{solid~{x+nx*y+1}, air~{x+nx*y+1}}]; Entity NodesOf[{solid~{x+nx*y+1}, air~{x+nx*y+1}}];}
					{Name wzn; NameOfCoef uzn; Function BF_NodeZ; dFunction {BF_GradNode, BF_Zero};
						Support Region[{solid~{x+nx*y+1}, air~{x+nx*y+1}}]; Entity NodesOf[{solid~{x+nx*y+1}, air~{x+nx*y+1}}];}
				}
				    SubSpace{
				       { Name u_x ; NameOfBasisFunction wxn ; }
				       { Name u_y ; NameOfBasisFunction wyn ; }
				       { Name u_z ; NameOfBasisFunction wzn ; }
				     }
    				Constraint{
					// Constraints deactivated since we do not want in our implementation to deform the air using a Laplacian formulation:
    					{NameOfCoef uxn; EntityType NodesOf; NameOfConstraint mesh_deform_comp_0~{x+nx*y+1};}
    					{NameOfCoef uyn; EntityType NodesOf; NameOfConstraint mesh_deform_comp_1~{x+nx*y+1};}
    					{NameOfCoef uzn; EntityType NodesOf; NameOfConstraint mesh_deform_comp_2~{x+nx*y+1};}
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
				{Name u; Type Local; NameOfSpace mechanic_function_space~{x+nx*y+1};}
				{Name u_x; Type Local; NameOfSpace mechanic_function_space~{x+nx*y+1}[u_x];}
				{Name u_y; Type Local; NameOfSpace mechanic_function_space~{x+nx*y+1}[u_y];}
				{Name u_z; Type Local; NameOfSpace mechanic_function_space~{x+nx*y+1}[u_z];}

				// U dummy needed for the force compuation:
				{ Name ud~{x+nx*y+1} ; Type Local ; NameOfSpace H_u_Mec3D_dummy~{x+nx*y+1} ; }

				{Name v~{x+nx*y+1}; Type Local; NameOfSpace electric_function_space~{x+nx*y+1};}
			        If (x > 0)
					{Name v~{(x-1)+nx*y+1}; Type Local; NameOfSpace electric_function_space~{(x-1)+nx*y+1};}
				EndIf
				If (x < nx-1)
					{Name v~{(x+1)+nx*y+1}; Type Local; NameOfSpace electric_function_space~{(x+1)+nx*y+1};}
				EndIf
				}
				Equation{
				       Galerkin { [ C11[] * Dof{D1 u} , {D1 u} ] ;
					 In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       Galerkin { [ C12[] * Dof{D2 u} , {D1 u} ] ;
					 In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       Galerkin { [ C21[] * Dof{D1 u} , {D2 u} ] ;
					 In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       Galerkin { [ C22[] * Dof{D2 u} , {D2 u} ] ;
					 In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

 				       Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
					 In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

				       // Do not forget to multiply the force term (physical source) by #9:
				       Galerkin {[ #9 * -epsilon[]* Felec[Dof{ud~{x+nx*y+1}}*0 + {d v~{x+nx*y+1}}], Unit[{u}] ] ;
					  In Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}] ; 
						Jacobian JVol ; Integration I1 ;}
				       If (x > 0)
					       Galerkin {[ #9 * -epsilon[]* Felec[Dof{ud~{x+nx*y+1}}*0 + {d v~{(x-1)+nx*y+1}}], Unit[{u}] ] ;
						  In Region[{no_overlap_deformed~{(x-1)+nx*y+1}}] ; 
							Jacobian JVol ; Integration I1 ;}
				       EndIf
				       If (x < nx-1)
					       Galerkin {[ #9 * -epsilon[]* Felec[Dof{ud~{x+nx*y+1}}*0 + {d v~{(x+1)+nx*y+1}}], Unit[{u}] ] ;
						  In Region[{no_overlap_deformed~{(x+1)+nx*y+1}}] ; 
							Jacobian JVol ; Integration I1 ;}
				       EndIf

				}
			}

			{ Name electric_formulation~{x+nx*y+1}; Type FemEquation; Quantity{
				{Name v; Type Local; NameOfSpace electric_function_space~{x+nx*y+1};}
				}
				Equation{
					Galerkin { [ epsilon[] * Dof{d v} , {d v} ] ; 
						In Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}] ; Jacobian JVol ; Integration I1 ; }
				}
			}

			// Computing the electrostatic forces for display:
			{ Name force_Elec~{x+nx*y+1} ; Type FemEquation ; Quantity {
				{ Name f ; Type Local ; NameOfSpace force_Elec~{x+nx*y+1} ; }

				{ Name ud~{x+nx*y+1} ; Type Local ; NameOfSpace H_u_Mec3D_dummy~{x+nx*y+1} ; }

				{Name v~{x+nx*y+1}; Type Local; NameOfSpace electric_function_space~{x+nx*y+1};}
			        If (x > 0)
					{Name v~{(x-1)+nx*y+1}; Type Local; NameOfSpace electric_function_space~{(x-1)+nx*y+1};}
				EndIf
				If (x < nx-1)
					{Name v~{(x+1)+nx*y+1}; Type Local; NameOfSpace electric_function_space~{(x+1)+nx*y+1};}
				EndIf
				}

				Equation {
					Galerkin { [ AssDiag[]{2} * Dof{f}, {f}] ;
					  In Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}, 
						no_overlap_deformed~{(x-1)+nx*y+1}, no_overlap_deformed~{(x+1)+nx*y+1}}] ; 
						Jacobian JVol ; Integration I1 ;}

					// A minus is missing for some reason...
				       Galerkin {[ epsilon[]* Felec[Dof{ud~{x+nx*y+1}}*0 + {d v~{x+nx*y+1}}], Unit[{f}] ] ;
					  In Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}] ; 
						Jacobian JVol ; Integration I1 ;}
				       If (x > 0)
					       Galerkin {[ epsilon[]* Felec[Dof{ud~{x+nx*y+1}}*0 + {d v~{(x-1)+nx*y+1}}], Unit[{f}] ] ;
						  In Region[{no_overlap_deformed~{(x-1)+nx*y+1}}] ; 
							Jacobian JVol ; Integration I1 ;}
				       EndIf
				       If (x < nx-1)
					       Galerkin {[ epsilon[]* Felec[Dof{ud~{x+nx*y+1}}*0 + {d v~{(x+1)+nx*y+1}}], Unit[{f}] ] ;
						  In Region[{no_overlap_deformed~{(x+1)+nx*y+1}}] ; 
							Jacobian JVol ; Integration I1 ;}
				       EndIf
				}
			}

			// Laplacian formulation for the air and solid deformation or only for the solid deformation:
			{ Name mesh_deform~{x+nx*y+1}; Type FemEquation; Quantity{

				{Name u_mesh_deform; Type Local; NameOfSpace mesh_deform~{x+nx*y+1};}
				{Name u_x ; Type Local ; NameOfSpace  mesh_deform~{x+nx*y+1}[u_x] ;}
				{Name u_y ; Type Local ; NameOfSpace  mesh_deform~{x+nx*y+1}[u_y] ;}
				{Name u_z ; Type Local ; NameOfSpace  mesh_deform~{x+nx*y+1}[u_z] ;}

				{Name u; Type Local; NameOfSpace mechanic_function_space~{x+nx*y+1};}
				}
				Equation{

					       // This is needed otherwise the constraints on solid will not be taken into account:
					       Galerkin { [ 0*Dof{u_mesh_deform} , {u_mesh_deform} ] ;
						 In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }

					       // Laplacian formulation in the air:
					       Galerkin { [ Dof{D1 u_x} , {D1 u_x} ] ;
						 In Region[air~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }
					       Galerkin { [ Dof{D1 u_y} , {D1 u_y} ] ;
						 In Region[air~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }
					       Galerkin { [ Dof{D1 u_z} , {D1 u_z} ] ;
						 In Region[air~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }
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
						{Name mechanic_res~{x+nx*y+1}; NameOfFormulation mechanic_formulation~{x+nx*y+1}; Type Complex; Frequency freq;}
						{Name electric_res~{x+nx*y+1}; NameOfFormulation electric_formulation~{x+nx*y+1}; Type Complex; Frequency freq;}
						{Name force_Elec~{x+nx*y+1}; NameOfFormulation force_Elec~{x+nx*y+1}; Type Complex; Frequency freq;}
						{Name mesh_deform~{x+nx*y+1}; NameOfFormulation mesh_deform~{x+nx*y+1}; Type Complex; Frequency freq;}
					EndFor
				EndFor
				}
			Operation{

				CreateDir["Results/"];


				For x In {0:nx-1}
					For y In {0:ny-1}
						// Init vector for Newton iteration:
						InitSolution[mechanic_res~{x+nx*y+1}];
						InitSolution[electric_res~{x+nx*y+1}];

						// Getdp first needs to have an init solution before initialising fields:
						PostOperation[init_fields_mechanic~{x+nx*y+1}];
						PostOperation[init_fields_electric~{x+nx*y+1}];
					EndFor
				EndFor



			///// NON LINEAR ITERATIVE LOOP:
				IterativeLoop[50, 1e-6, 1] 
					{	
					For x In {0:nx-1}
						For y In {0:ny-1}

						// We first deform the mesh:

							// Save u on solid:
							PostOperation[save_u_field~{x+nx*y+1}];

							// We use u as a constraint for the Laplacian formulation on the air:
							Evaluate[1. #11];
	     						UpdateConstraint[mesh_deform~{x+nx*y+1}, Region[solid~{x+nx*y+1}], Assign];

							// Compute the solid deformation and/or the air deformation based on the solid 
							// deformation constraints with a Laplacian formulation:
	      						Generate[mesh_deform~{x+nx*y+1}]; Solve[mesh_deform~{x+nx*y+1}]; 


						// Deform the solid body and/or the air mesh:
							If (x == 0)
								// The first CMUT is treated differently - deformed on its whole domain at once:
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, 1];
							EndIf
							If (x > 0)
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, 1, NodesOf[{no_overlap_deformed~{x+nx*y+1}, 
									solid_overlap_right~{x+nx*y+1}, air_overlap_right~{x+nx*y+1}}, 
									Not sigma_right~{(x-1)+nx*y+1}]];
							EndIf

						EndFor
					EndFor	

					For x In {0:nx-1}
						For y In {0:ny-1}

						////////// Step 1: Solving for the physical sources (to get the b in Fg = b) by forcing 0 on the artificial interfaces 
						// and not 0 on the physical boundaries
							Evaluate[1. #9]; Evaluate[1. #10];

							UpdateConstraint[electric_res~{x+nx*y+1}, Region[{electrode~{x+nx*y+1}, sigma_up~{x+nx*y+1}, 
								sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];

						// We now compute the electric resolution:
							If (x < 1)
		      						GenerateJac[electric_res~{x+nx*y+1}];
								SolveJac[electric_res~{x+nx*y+1}]; 
							EndIf
							If (x > 0)
		      						Generate[electric_res~{x+nx*y+1}];
								Solve[electric_res~{x+nx*y+1}]; 
							EndIf

						EndFor
					EndFor	



			////////////////////// Let the DDM game begin for the ELECTRIC FORMULATION!

					For x In {0:nx-1}
						For y In {0:ny-1}

						////////// Step 1: Solving for the physical sources (to get the b in Fg = b) by forcing 0 on the artificial interfaces 
						// and not 0 on the physical boundaries
							Evaluate[1. #9]; Evaluate[0. #10];

							UpdateConstraint[electric_res~{x+nx*y+1}, Region[{electrode~{x+nx*y+1}, sigma_up~{x+nx*y+1}, 
								sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];

						// We now compute the electric resolution:
	      						Generate[electric_res~{x+nx*y+1}];
							Solve[electric_res~{x+nx*y+1}]; 

						EndFor
					EndFor	

					For x In {0:nx-1}
						For y In {0:ny-1}

						// We set the potential on the artificial interfaces:
							PostOperation[update_g_up_electric~{x+nx*y+1}];
							PostOperation[update_g_right_electric~{x+nx*y+1}];
							PostOperation[update_g_down_electric~{x+nx*y+1}];
							PostOperation[update_g_left_electric~{x+nx*y+1}];

						EndFor
					EndFor	

					////////// Done with step 1

					////////// Step 2: Solving for the non physical sources
				
					// Keeping the previous g on the artificial interfaces and setting g = 0 on the physical boundaries 		
					Evaluate[0. #9]; Evaluate[1. #10];


					// In iterativeLinearSolver we have to give "b" of "Fg = b" via a list of fields which is here the set of 
					// registers in the list. This set will contain b initially then Fb then FFb etc. 
					// Inside "IterativeLinearSolver" one has to specify the operator "A" and not "F = I-A" when using "I-A" as first argument
					IterativeLinearSolver["I-A", "gmres", 1e-10, 200, 200, {100+4*(nx*ny+1)+1:100+4*(nx*ny+1)+4*nx*ny}, {}, {}]
						{
						For x In {0:nx-1}
							For y In {0:ny-1}

									UpdateConstraint[electric_res~{x+nx*y+1}, Region[{electrode~{x+nx*y+1}, sigma_up~{x+nx*y+1}, 
										sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];
			
								// We have to regenerate the RHS in the vicinity of sigma since we force dirichlet on sigma:
	      								GenerateRHSGroup[electric_res~{x+nx*y+1}, Region[{electrode~{x+nx*y+1}, sigma_up~{x+nx*y+1}, 
										sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}]];
								// We solve "again", i.e. without recomputing the LU decomposition in mumps
									SolveAgain[electric_res~{x+nx*y+1}];			
				
							EndFor
						EndFor

						For x In {0:nx-1}
							For y In {0:ny-1}

								// We set the potential on the artificial interfaces:
									PostOperation[update_g_up_electric~{x+nx*y+1}];
									PostOperation[update_g_right_electric~{x+nx*y+1}];
									PostOperation[update_g_down_electric~{x+nx*y+1}];
									PostOperation[update_g_left_electric~{x+nx*y+1}];

							EndFor
						EndFor


					}{}	

					////////// Done with step 2: "g" is now accurate enough, let us deduce the final solution:

					// Keeping the accurately computed g on the artificial interfaces and superposing the physical constraints: 		
					Evaluate[1. #9]; Evaluate[1. #10];


					For x In {0:nx-1}
						For y In {0:ny-1}

								UpdateConstraint[electric_res~{x+nx*y+1}, Region[{electrode~{x+nx*y+1}, sigma_up~{x+nx*y+1}, 
									sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];
		
							// We have to regenerate the RHS in the vicinity of sigma since we force dirichlet on sigma:
      								GenerateRHSGroup[electric_res~{x+nx*y+1}, Region[{electrode~{x+nx*y+1}, sigma_up~{x+nx*y+1}, 
									sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}]];
							// We solve "again", i.e. without recomputing the LU decomposition in mumps
								SolveAgain[electric_res~{x+nx*y+1}];

							// We store the solution:
								PostOperation[save_e~{x+nx*y+1}];

						EndFor
					EndFor

					For x In {0:nx-1}
						For y In {0:ny-1}

						// We compute the electrostatic force for display:
	      						Generate[force_Elec~{x+nx*y+1}];
							Solve[force_Elec~{x+nx*y+1}]; 

							PostOperation[save_f~{x+nx*y+1}];

						EndFor
					EndFor

					// Bringing back the mesh:
					For x In {0:nx-1}
						For y In {0:ny-1}

						// Deform the solid body and/or the air mesh:
							If (x == 0)
								// The first CMUT is treated differently - deformed on its whole domain at once:
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, -1];
							EndIf
							If (x > 0)
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, 1, NodesOf[{no_overlap_deformed~{x+nx*y+1}, 
									solid_overlap_right~{x+nx*y+1}, air_overlap_right~{x+nx*y+1}}, 
									Not sigma_right~{(x-1)+nx*y+1}]];
							EndIf
						EndFor
					EndFor


			////////////////////// Let the DDM game begin for the MECHANIC FORMULATION!

					For x In {0:nx-1}
						For y In {0:ny-1}

						////////// Step 1: Solving for the physical sources (to get the b in Fg = b) by forcing 0 on the artificial interfaces 
						// and not 0 on the physical boundaries
							Evaluate[1. #9]; Evaluate[0. #10];

							UpdateConstraint[mechanic_res~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, 
								sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];

						// We now compute the mechanic resolution:

							// Deform the solid body and/or the air mesh:
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, 1];

							// Computing the force on the deformed mesh - resets matrix A:
		      						GenerateGroup[mechanic_res~{x+nx*y+1}, Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}]];

							// Bringing back the mesh:
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, -1];	

							// Generating the remaining terms on the undeformed mesh:
		      						GenerateGroupCumulative[mechanic_res~{x+nx*y+1}, solid~{x+nx*y+1}];
	

							// We now compute the mechanic resolution:
								Solve[mechanic_res~{x+nx*y+1}]; 

						EndFor
					EndFor	

					For x In {0:nx-1}
						For y In {0:ny-1}

						// We set the displacements on the artificial interfaces:
							PostOperation[update_g_up_mechanic~{x+nx*y+1}];
							PostOperation[update_g_right_mechanic~{x+nx*y+1}];
							PostOperation[update_g_down_mechanic~{x+nx*y+1}];
							PostOperation[update_g_left_mechanic~{x+nx*y+1}];

						EndFor
					EndFor	

					////////// Done with step 1

					////////// Step 2: Solving for the non physical sources
				
					// Keeping the previous g on the artificial interfaces and setting g = 0 on the physical boundaries 		
					Evaluate[0. #9]; Evaluate[1. #10];


					// In iterativeLinearSolver we have to give "b" of "Fg = b" via a list of fields which is here the set of 
					// registers in the list. This set will contain b initially then Fb then FFb etc. 
					// Inside "IterativeLinearSolver" one has to specify the operator "A" and not "F = I-A" when using "I-A" as first argument
					IterativeLinearSolver["I-A", "gmres", 1e-10, 200, 200, {100+1:100+4*nx*ny}, {}, {}]
						{
						For x In {0:nx-1}
							For y In {0:ny-1}

									UpdateConstraint[mechanic_res~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, 
										sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];

								// We can just regenerate the right hand side since the electric force here is set to 0:
		      							GenerateRHSGroup[mechanic_res~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, 
										sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}]];

								// We solve "again", i.e. without recomputing the LU decomposition in mumps
									SolveAgain[mechanic_res~{x+nx*y+1}];
				
							EndFor
						EndFor

						For x In {0:nx-1}
							For y In {0:ny-1}
								// We set the displacements on the artificial interfaces:
									PostOperation[update_g_up_mechanic~{x+nx*y+1}];
									PostOperation[update_g_right_mechanic~{x+nx*y+1}];
									PostOperation[update_g_down_mechanic~{x+nx*y+1}];
									PostOperation[update_g_left_mechanic~{x+nx*y+1}];						
							EndFor
						EndFor


					}{}	

					////////// Done with step 2: "g" is now accurate enough, let us deduce the final solution:

					// Keeping the accurately computed g on the artificial interfaces and superposing the physical constraints: 		
					Evaluate[1. #9]; Evaluate[1. #10];


					For x In {0:nx-1}
						For y In {0:ny-1}

							UpdateConstraint[mechanic_res~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, 
								sigma_right~{x+nx*y+1},	sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];

							// Deform the solid body and/or the air mesh:
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, 1];

							// Computing the force on the deformed mesh - resets matrix A:
		      						GenerateGroup[mechanic_res~{x+nx*y+1}, Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}]];

							// Bringing back the mesh:
								DeformMesh[mesh_deform~{x+nx*y+1}, u_mesh_deform, -1];	

							// Generating the remaining terms on the undeformed mesh:
		      						GenerateGroupCumulative[mechanic_res~{x+nx*y+1}, solid~{x+nx*y+1}];

							// We solve "again", i.e. without recomputing the LU decomposition in mumps
								Solve[mechanic_res~{x+nx*y+1}];

							// We store the solution:
								PostOperation[save_u~{x+nx*y+1}];	

						EndFor
					EndFor

				}
				///// END NON LINEAR ITERATIVE LOOP

				
			}
		}
}
 
// Post Processing
//================
 
PostProcessing 	{
		For x In {0:nx-1}
			For y In {0:ny-1}

  				{ Name u~{x+nx*y+1}; NameOfFormulation mechanic_formulation~{x+nx*y+1};
    					Quantity {
      						{ Name u ; Value { Local { [ {u} ]; 
							In Region[solid~{x+nx*y+1}] ; Jacobian JVol ; } } }
						

      						{ Name g_mechanic~{x+nx*y+1} ; Value { Local { [ {u} ]; 
							In Region[{sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}, 
								sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}}] ; Jacobian JSur ; } } }
						}

				}

  				{ Name v~{x+nx*y+1}; NameOfFormulation electric_formulation~{x+nx*y+1};
    					Quantity {
      						{ Name e~{x+nx*y+1} ; Value { Local { [ -{d v} ]; 
							In Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}] ; Jacobian JVol ; } } }
						

      						{ Name g_electric~{x+nx*y+1} ; Value { Local { [ {v} ]; 
							In Region[{sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}, 
								sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}}] ; Jacobian JSur ; } } }
						}
				}

  				{ Name f~{x+nx*y+1}; NameOfFormulation force_Elec~{x+nx*y+1};
    					Quantity {
      						{ Name f~{x+nx*y+1} ; Value { Local { [ {f} ]; 
							In Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}] ; Jacobian JVol ; } } }
						}
				}

				{ Name init_fields_mechanic~{x+nx*y+1}; NameOfFormulation mechanic_formulation~{x+nx*y+1};
					Quantity {
				      		{ Name init ; Value { Local { [ 0 ]; 
							In Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}] ; Jacobian JSur ; } } }
						}
				}

				{ Name init_fields_electric~{x+nx*y+1}; NameOfFormulation electric_formulation~{x+nx*y+1};
					Quantity {
				      		{ Name init ; Value { Local { [ 0 ]; 
							In Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}] ; Jacobian JSur ; } } }
						}
				}


			EndFor
		EndFor

}

// Post Operation
//===============

PostOperation	{
		For x In {0:nx-1}
			For y In {0:ny-1}

				// g mechanic:
				{ Name update_g_up_mechanic~{x+nx*y+1} ; NameOfPostProcessing u~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_down~{x+nx*(y+1)+1}, 
							StoreInField 100+4*x+4*nx*(y+1)+3] ;	
						}
				}
				{ Name update_g_right_mechanic~{x+nx*y+1} ; NameOfPostProcessing u~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_left~{(x+1)+nx*y+1}, 
							StoreInField 100+4*(x+1)+4*nx*y+4] ;	
						}
				}
				{ Name update_g_down_mechanic~{x+nx*y+1} ; NameOfPostProcessing u~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_up~{x+nx*(y-1)+1}, 
							StoreInField 100+4*x+4*nx*(y-1)+1] ;	
						}
				}
				{ Name update_g_left_mechanic~{x+nx*y+1} ; NameOfPostProcessing u~{x+nx*y+1}; 
					Operation {
						Print[ g_mechanic~{x+nx*y+1}, OnElementsOf sigma_right~{(x-1)+nx*y+1}, 
							StoreInField 100+4*(x-1)+4*nx*y+2] ;	
						}
				}
				// g electric:
				{ Name update_g_up_electric~{x+nx*y+1} ; NameOfPostProcessing v~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_down~{x+nx*(y+1)+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*(y+1)+3] ;	
						}
				}
				{ Name update_g_right_electric~{x+nx*y+1} ; NameOfPostProcessing v~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_left~{(x+1)+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*(x+1)+4*nx*y+4] ;	
						}
				}
				{ Name update_g_down_electric~{x+nx*y+1} ; NameOfPostProcessing v~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_up~{x+nx*(y-1)+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*(y-1)+1] ;	
						}
				}
				{ Name update_g_left_electric~{x+nx*y+1} ; NameOfPostProcessing v~{x+nx*y+1}; 
					Operation {
						Print[ g_electric~{x+nx*y+1}, OnElementsOf sigma_right~{(x-1)+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*(x-1)+4*nx*y+2] ;	
						}
				}

				{ Name save_u~{x+nx*y+1} ; NameOfPostProcessing u~{x+nx*y+1}; 
					Operation {
						Print[ u, OnElementsOf solid~{x+nx*y+1}, 
							File Sprintf("Results/u%g.pos",x+nx*y+1)] ;	
						// The following enables to automatically set view options, e.g. displacement view for displacements:
						Echo["View[PostProcessing.NbViews-1].RangeType=3; View[PostProcessing.NbViews-1].TimeStep=0; 
							View[PostProcessing.NbViews-1].VectorType=5;", File Sprintf("Results/u%g.pos",x+nx*y+1)];	
					
						}
				}

				{ Name save_e~{x+nx*y+1} ; NameOfPostProcessing v~{x+nx*y+1}; 
					Operation {
						Print[ e~{x+nx*y+1}, OnElementsOf Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}], 
							File Sprintf("Results/e%g.pos",x+nx*y+1)] ;
						Echo["View[PostProcessing.NbViews-1].RangeType=3; View[PostProcessing.NbViews-1].TimeStep=0;", 
							File Sprintf("Results/e%g.pos",x+nx*y+1)];							
						}
				}

				{ Name save_f~{x+nx*y+1} ; NameOfPostProcessing f~{x+nx*y+1}; 
					Operation {
						Print[ f~{x+nx*y+1}, OnElementsOf Region[{solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}}], 
							File Sprintf("Results/f%g.pos",x+nx*y+1)] ;
						Echo["View[PostProcessing.NbViews-1].RangeType=3; View[PostProcessing.NbViews-1].TimeStep=0;", 
							File Sprintf("Results/f%g.pos",x+nx*y+1)];							
						}
				}

				{ Name save_u_field~{x+nx*y+1} ; NameOfPostProcessing u~{x+nx*y+1}; 
					Operation {
						Print[ u, OnElementsOf solid~{x+nx*y+1}, 
							StoreInField 10000+x+nx*y+1] ; 													
						}
				}

				{ Name init_fields_mechanic~{x+nx*y+1} ; NameOfPostProcessing init_fields_mechanic~{x+nx*y+1}; 
					Operation {
						Print[ init, OnElementsOf sigma_up~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+1] ;						
						Print[ init, OnElementsOf sigma_right~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+2] ;						
						Print[ init, OnElementsOf sigma_down~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+3] ;						
						Print[ init, OnElementsOf sigma_left~{x+nx*y+1}, 
							StoreInField 100+4*x+4*nx*y+4] ;						
						}
				}

				{ Name init_fields_electric~{x+nx*y+1} ; NameOfPostProcessing init_fields_electric~{x+nx*y+1}; 
					Operation {
						Print[ init, OnElementsOf sigma_up~{x+nx*y+1},
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+1] ;						
						Print[ init, OnElementsOf sigma_right~{x+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+2] ;						
						Print[ init, OnElementsOf sigma_down~{x+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+3] ;						
						Print[ init, OnElementsOf sigma_left~{x+nx*y+1}, 
							StoreInField 100+4*(nx*ny+1)+4*x+4*nx*y+4] ;						
						}
				}


			EndFor
		EndFor

		
}
