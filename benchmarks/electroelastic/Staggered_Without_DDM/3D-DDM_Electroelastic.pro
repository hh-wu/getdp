// THE FOLLOWING CODE SOLVES A WEAKLY COUPLED (AKA. STAGGERED) ELECTROELASTIC FORMULATION ON THE UNDEFORMED MECHANIC DOMAIN. IT DOES NOT USE DDM.


// Set the number of subdomains, do not forget to change it in the .geo file as well
nx = 2;
ny = 1;

// The following code takes nx * ny subdomains (defined in the .geo) as input and solves a non linear electroelastic formulation on the union of all subdomains.

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

			solid~{x+nx*y+1}			= Region[ (1000*nx*ny+20*x+nx*20*y+2) ];
			// The following region is a copy of the "solid" region. It is needed by getdp for computing the force terms
			// on the deformed mesh in the mechanic formulation:
			solid_deformed~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+5) ];
			air~{x+nx*y+1}				= Region[ (1000*nx*ny+20*x+nx*20*y+3) ];

			electric_domain~{x+nx*y+1}		= Region[ {solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}} ];
			omega~{x+nx*y+1}			= Region[ {solid~{x+nx*y+1}, solid_deformed~{x+nx*y+1}, air~{x+nx*y+1}} ];

			// The following regions are needed to deform the mesh:
			solid_overlap_left~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+6) ];
			solid_overlap_right~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+7) ];
			solid_no_overlap~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+8) ];
			air_overlap_left~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+9) ];
			air_overlap_right~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+10) ];
			air_no_overlap~{x+nx*y+1}		= Region[ (1000*nx*ny+20*x+nx*20*y+11) ];

			// The following is needed to compute the forces:
			solid_deformed_no_overlap~{x+nx*y+1}	= Region[ (1000*nx*ny+20*x+nx*20*y+4) ];
			no_overlap~{x+nx*y+1}			= Region[ {solid_deformed_no_overlap~{x+nx*y+1}, air_no_overlap~{x+nx*y+1}} ];
			solid_deformed_overlap_left~{x+nx*y+1}	= Region[ (1000*nx*ny+20*x+nx*20*y+12) ];
			solid_deformed_overlap_right~{x+nx*y+1}	= Region[ (1000*nx*ny+20*x+nx*20*y+13) ];

			//  The elec. forces have to be computed only on the following skin region: 
			// !!!!!!!!!! NOT USED RIGHT NOW since right now getdp solves on the whole electric_domain when given the skin region
			skin_electric_force~{x+nx*y+1} 		= ElementsOf[ electric_domain~{x+nx*y+1}, OnOneSideOf {force_interface~{x+nx*y+1}} ];
		EndFor
	EndFor

	// DEFINING THE WHOLE DOMAIN AS 'WHOLEDOMAIN':
	wholesolid = Region[{solid_overlap_left_1, solid_no_overlap_1, solid_overlap_right_1, solid_no_overlap_2, solid_overlap_right_2}];
	wholesoliddeformed = Region[{solid_deformed_overlap_left_1, solid_deformed_no_overlap_1, solid_deformed_overlap_right_1, solid_deformed_no_overlap_2,
				solid_deformed_overlap_right_2}];
	wholeair = Region[{air_overlap_left_1, air_no_overlap_1, air_overlap_right_1, air_no_overlap_2, air_overlap_right_2}];
	wholeelectric = Region[{wholesoliddeformed, wholeair}];
	wholesigmadown = Region[{sigma_down_1, sigma_down_2}];
}
 
Function {


	// Mechanic:
	E[wholesolid]			= 150e9;
	nu[wholesolid]			= 0.3;
	rho[wholesolid]			= 2330;

	// Electric:
	epsilon[wholesoliddeformed]	= 3.9* 8.854e-12;
	epsilon[wholeair]		= 1* 8.854e-12;


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


	// Deformation on solid is stored in u:
	// This might be used in a constraint if one wants to deform the air with a Laplacian formulation: 
	u[]					= ComplexVectorField[XYZ[]]{10000+1};

			
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

	For i In {0:2}

		// Mechanic constraint. {0} corresponds to the x component, {1} to y and {2} to z:

		{ Name mechanic_constraint_comp~{i} ; 
			Case {

				{ Region wholesigmadown; Value 0; }

			     }		
		}
	EndFor

	// Electric:

	{ Name electric_constraint ; 
		Case {

			{ Region electrode_1; Value Velectrode; }
			{ Region wholesigmadown; Value 0; }

		     }		
	}

	// Mesh deformation constraint on solid that might be used to deform the air using a Laplacian formulation:
	For i In {0:2}

		{ Name mesh_deform_comp~{i} ; 
			Case {	

				{ Region wholesolid; Value (#11 > 0 ? Comp[u[]]{i} : 0); }

			     }		
		}
	EndFor

	// Dummy displacements needed by getdp to know to which node the computed nodal forces belong 
	// (set to 1 to keep the nodal forces untouched in the equations --> f_nodal = u_dummy_node_n * force_elec = 1 * force_elec):
	  { Name Displacement_dum ; Type Assign ;
	    Case {
	     { Region NodesOf[{wholesoliddeformed, wholeair}]; Value 1 ; }
	    }
	  }
	//

}

//FunctionSpace
//=============

FunctionSpace	{

	// Dummy displacements needed by getdp to know to which node the computed nodal forces belong:
	{ Name H_u_Mec3D_dummy ; Type Vector ;
		BasisFunction {
			{ Name sxn ; NameOfCoef uxn ; Function BF_NodeX ;
				Support Region[{wholesoliddeformed, wholeair}]; Entity NodesOf[{wholesoliddeformed, wholeair}] ; }
			{ Name syn ; NameOfCoef uyn ; Function BF_NodeY ;
				Support Region[{wholesoliddeformed, wholeair}]; Entity NodesOf[{wholesoliddeformed, wholeair}] ; }
			{ Name szn ; NameOfCoef uzn ; Function BF_NodeZ ;
				Support Region[{wholesoliddeformed, wholeair}]; Entity NodesOf[{wholesoliddeformed, wholeair}] ; }
		}
		Constraint {
			{ NameOfCoef uxn ; EntityType NodesOf ; NameOfConstraint Displacement_dum ; }
			{ NameOfCoef uyn ; EntityType NodesOf ; NameOfConstraint Displacement_dum ; }
			{ NameOfCoef uzn ; EntityType NodesOf ; NameOfConstraint Displacement_dum ; }
		}
	}

	// Mechanic function space - Need to have non zero base functions on the overlap interfaces to copy u on it:
	{ Name mechanic_function_space; Type Vector; 
		BasisFunction{
			{Name wxn; NameOfCoef uxn; Function BF_NodeX; dFunction {BF_NodeX_D1, BF_NodeX_D2, BF_GradNodeRealCoord};
				Support Region[ {wholesoliddeformed, wholeair, wholesolid} ]; Entity NodesOf[wholesolid];}
			{Name wyn; NameOfCoef uyn; Function BF_NodeY; dFunction {BF_NodeY_D1, BF_NodeY_D2, BF_GradNodeRealCoord};
				Support Region[ {wholesoliddeformed, wholeair, wholesolid} ]; Entity NodesOf[wholesolid];}
			{Name wzn; NameOfCoef uzn; Function BF_NodeZ; dFunction {BF_NodeZ_D1, BF_NodeZ_D2, BF_GradNodeRealCoord};
				Support Region[ {wholesoliddeformed, wholeair, wholesolid} ]; Entity NodesOf[wholesolid];}
		}
		SubSpace{
			{ Name u_x ; NameOfBasisFunction wxn ; }
			{ Name u_y ; NameOfBasisFunction wyn ; }
			{ Name u_z ; NameOfBasisFunction wzn ; }
		}
		Constraint{
			{NameOfCoef uxn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_0;}
			{NameOfCoef uyn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_1;}
			{NameOfCoef uzn; EntityType NodesOf; NameOfConstraint mechanic_constraint_comp_2;}
		}
	}

	{ Name electric_function_space; Type Form0; 
		BasisFunction{
			{Name wn; NameOfCoef vn; Function BF_Node;
				Support Region[ {wholesoliddeformed, wholeair} ]; Entity NodesOf[{wholesoliddeformed, wholeair}];}
		}
		Constraint{
			{NameOfCoef vn; EntityType NodesOf; NameOfConstraint electric_constraint;}
		}
	}

	// Force computation only for display:
	{ Name force_Elec ; Type Vector ;
	  BasisFunction {
		{ Name sxn ; NameOfCoef fxn ; Function BF_NodeX ;
		 		Support Region[{wholesoliddeformed, wholeair}];	Entity NodesOf[{wholesoliddeformed, wholeair}] ; }
		{ Name syn ; NameOfCoef fyn ; Function BF_NodeY ;
		 		Support Region[{wholesoliddeformed, wholeair}];	Entity NodesOf[{wholesoliddeformed, wholeair}] ; }
		{ Name szn ; NameOfCoef fzn ; Function BF_NodeZ ;
		 		Support Region[{wholesoliddeformed, wholeair}];	Entity NodesOf[{wholesoliddeformed, wholeair}] ; }
	 		}
	}

	// Used to deform the mesh on solid and possibly on the air as well with a Laplacian formulation:
	{ Name mesh_deform; Type Vector; 
		BasisFunction{
			{Name wxn; NameOfCoef uxn; Function BF_NodeX; dFunction {BF_GradNode, BF_Zero}; 
			// D1 is now equal to grad_node, trick needed else getdp will not know how to use component  X of grad on a bf_nodeX 
				Support Region[{wholesolid, wholeair}]; Entity NodesOf[{wholesolid, wholeair}];}
			{Name wyn; NameOfCoef uyn; Function BF_NodeY; dFunction {BF_GradNode, BF_Zero};
				Support Region[{wholesolid, wholeair}]; Entity NodesOf[{wholesolid, wholeair}];}
			{Name wzn; NameOfCoef uzn; Function BF_NodeZ; dFunction {BF_GradNode, BF_Zero};
				Support Region[{wholesolid, wholeair}]; Entity NodesOf[{wholesolid, wholeair}];}
		}
		    SubSpace{
		       { Name u_x ; NameOfBasisFunction wxn ; }
		       { Name u_y ; NameOfBasisFunction wyn ; }
		       { Name u_z ; NameOfBasisFunction wzn ; }
		     }
		Constraint{
			{NameOfCoef uxn; EntityType NodesOf; NameOfConstraint mesh_deform_comp_0;}
			{NameOfCoef uyn; EntityType NodesOf; NameOfConstraint mesh_deform_comp_1;}
			{NameOfCoef uzn; EntityType NodesOf; NameOfConstraint mesh_deform_comp_2;}
		}
	}


}
  
//(Weak) Formulations
//==================
 
Formulation	{
		
	{ Name mechanic_formulation; Type FemEquation; Quantity{
		{Name u; Type Local; NameOfSpace mechanic_function_space;}
		{Name u_x; Type Local; NameOfSpace mechanic_function_space[u_x];}
		{Name u_y; Type Local; NameOfSpace mechanic_function_space[u_y];}
		{Name u_z; Type Local; NameOfSpace mechanic_function_space[u_z];}

		// U dummy needed for the force compuation:
		{ Name ud ; Type Local ; NameOfSpace H_u_Mec3D_dummy ; }

		{Name v; Type Local; NameOfSpace electric_function_space;}
		}
		Equation{
		       Galerkin { [ C11[] * Dof{D1 u} , {D1 u} ] ;
			 In Region[wholesolid] ; Jacobian JVol ; Integration I1 ; }

		       Galerkin { [ C12[] * Dof{D2 u} , {D1 u} ] ;
			 In Region[wholesolid] ; Jacobian JVol ; Integration I1 ; }

		       Galerkin { [ C21[] * Dof{D1 u} , {D2 u} ] ;
			 In Region[wholesolid] ; Jacobian JVol ; Integration I1 ; }

		       Galerkin { [ C22[] * Dof{D2 u} , {D2 u} ] ;
			 In Region[wholesolid] ; Jacobian JVol ; Integration I1 ; }

		       Galerkin { DtDtDof [ rho[] * Dof{u} , {u} ];
			 In Region[wholesolid] ; Jacobian JVol ; Integration I1 ; }


		       Galerkin {[ -epsilon[]* Felec[Dof{ud}*0 + {d v}], Unit[{u}] ] ;
		         In Region[{wholesoliddeformed, wholeair}] ; Jacobian JVol ; Integration I1;}


		}
	}

	{ Name electric_formulation; Type FemEquation; Quantity{
		{Name v; Type Local; NameOfSpace electric_function_space;}
		}
		Equation{
			Galerkin { [ epsilon[] * Dof{d v} , {d v} ] ; 
				In Region[{wholesoliddeformed, wholeair}] ; Jacobian JVol ; Integration I1 ; }
		}
	}


	// Computing the electrostatic forces for display:
	{ Name force_Elec ; Type FemEquation ; Quantity {
		{ Name f ; Type Local ; NameOfSpace force_Elec ; }

		{ Name ud ; Type Local ; NameOfSpace H_u_Mec3D_dummy ; }

		{Name v ; Type Local; NameOfSpace electric_function_space;}
		}

		Equation {
			Galerkin { [ AssDiag[]{2} * Dof{f}, {f}] ;
			  In Region[{wholesoliddeformed, wholeair}] ; 
				Jacobian JVol ; Integration I1 ;}

			// A minus is missing for some reason...
		       Galerkin {[ epsilon[]* Felec[Dof{ud}*0 + {d v}], Unit[{f}] ] ;
			  In Region[{wholesoliddeformed, wholeair}] ; 
				Jacobian JVol ; Integration I1 ;}
		}
	}


	// Laplacian formulation for the air and solid deformation or only for the solid deformation:
	{ Name mesh_deform; Type FemEquation; Quantity{

		{Name u_mesh_deform; Type Local; NameOfSpace mesh_deform;}
		{Name u_x ; Type Local ; NameOfSpace  mesh_deform[u_x] ;}
		{Name u_y ; Type Local ; NameOfSpace  mesh_deform[u_y] ;}
		{Name u_z ; Type Local ; NameOfSpace  mesh_deform[u_z] ;}

		{Name u; Type Local; NameOfSpace mechanic_function_space;}
		}
		Equation{

			       // This is needed otherwise the constraints on solid will not be taken into account:
			       Galerkin { [ 0*Dof{u_mesh_deform} , {u_mesh_deform} ] ;
				 In Region[{wholesolid}] ; Jacobian JVol ; Integration I1 ; }

			       // Laplacian formulation in the air:
			       Galerkin { [ Dof{D1 u_x} , {D1 u_x} ] ;
				 In Region[{wholeair}] ; Jacobian JVol ; Integration I1 ; }
			       Galerkin { [ Dof{D1 u_y} , {D1 u_y} ] ;
				 In Region[{wholeair}] ; Jacobian JVol ; Integration I1 ; }
			       Galerkin { [ Dof{D1 u_z} , {D1 u_z} ] ;
				 In Region[{wholeair}] ; Jacobian JVol ; Integration I1 ; }
		}
	}

}

// Resolution
//===========
 
Resolution	{
		{Name res; 
			System	{

				{Name mechanic_res; NameOfFormulation mechanic_formulation; Type Complex; Frequency freq;}
				{Name electric_res; NameOfFormulation electric_formulation; Type Complex; Frequency freq;}
				{Name mesh_deform; NameOfFormulation mesh_deform; Type Complex; Frequency freq;}
				{Name force_Elec; NameOfFormulation force_Elec; Type Complex; Frequency freq;}

				}
			Operation{

				CreateDir["Results/"];


				///// NON LINEAR ITERATIVE LOOP:
				IterativeLoop{NbrMaxIteration 50; Criterion 1e-6; RelaxationFactor 1; 
				Operation {


					// This is for the mechanic computation on the undeformed mesh - resets matrix A:
						GenerateJacGroup[mechanic_res, wholesolid];	
						

					// We first deform the mesh:

						// Save u on solid:
						PostOperation[save_u_field];

						// We use u as a constraint for the Laplacian formulation on the air:
						Evaluate[1. #11];
						UpdateConstraint[mesh_deform, Region[wholesolid], Assign];

						// Compute the solid deformation and/or the air deformation based on the solid 
						// deformation constraints with a Laplacian formulation:
						Generate[mesh_deform];
						Solve[mesh_deform]; 

						// Deform the solid body and/or the air accordingly:
						DeformMesh[mesh_deform, u_mesh_deform];



					// We now compute the electric resolution:
						Generate[electric_res];
						Solve[electric_res]; 

					// We store the solution:
						PostOperation[save_e];

					// We compute the electrostatic force for display:
      						Generate[force_Elec];
						Solve[force_Elec]; 

						PostOperation[save_f];

					// This is for the mechanic computation on the undeformed mesh:
						GenerateJacGroupCumulative[mechanic_res, wholeelectric];


						DeformMesh[mesh_deform, u_mesh_deform, -1];

					// We now compute the mechanic resolution:
						SolveJac[mechanic_res]; 

					// We store the solution:
						PostOperation[save_u];

				}}
				///// END NON LINEAR ITERATIVE LOOP
				

			}
		}
}
 
// Post Processing
//================
 
PostProcessing 	{

		{ Name u; NameOfFormulation mechanic_formulation;
			Quantity {
				{ Name u ; Value { Local { [ {u} ]; 
					In Region[wholesolid] ; Jacobian JVol ; } } }
				
				}

		}

		{ Name v; NameOfFormulation electric_formulation;
			Quantity {
				{ Name e ; Value { Local { [ -{d v} ]; 
					In Region[{wholesoliddeformed, wholeair}] ; Jacobian JVol ; } } }
				
				}
		}

		{ Name f; NameOfFormulation force_Elec;
			Quantity {
				{ Name f ; Value { Local { [ {f} ]; 
					In Region[{wholesoliddeformed, wholeair}] ; Jacobian JVol ; } } }
				}
		}


}

// Post Operation
//===============

PostOperation	{
				
		{ Name save_u ; NameOfPostProcessing u; 
			Operation {
				Print[ u, OnElementsOf wholesolid, 
					File Sprintf("Results/u.pos")] ;	
				// The following enables to automatically set view options, e.g. displacement view for displacements:
				Echo["View[PostProcessing.NbViews-1].RangeType=3; View[PostProcessing.NbViews-1].TimeStep=0; 
					View[PostProcessing.NbViews-1].VectorType=5;", File Sprintf("Results/u.pos")];	
			
				}
		}

		{ Name save_e ; NameOfPostProcessing v; 
			Operation {
				Print[ e, OnElementsOf Region[{wholesoliddeformed, wholeair}], 
					File Sprintf("Results/e.pos")] ;
				Echo["View[PostProcessing.NbViews-1].RangeType=3; View[PostProcessing.NbViews-1].TimeStep=0;", 
					File Sprintf("Results/e.pos")];							
				}
		}

		{ Name save_f ; NameOfPostProcessing f; 
			Operation {
				Print[ f, OnElementsOf Region[{wholesoliddeformed, wholeair}], 
					File Sprintf("Results/f.pos")] ;
				Echo["View[PostProcessing.NbViews-1].RangeType=3; View[PostProcessing.NbViews-1].TimeStep=0;", 
					File Sprintf("Results/f.pos")];							
				}
		}
				
		{ Name save_u_field ; NameOfPostProcessing u; 
			Operation {
				Print[ u, OnElementsOf wholesolid, 
					StoreInField 10000+1] ; 													
				}
		}
		
}
