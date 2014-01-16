// Set the number of subdomains, do not forget to change it in the .geo file as well
nx = 4;
ny = 3;

// The following code takes nx * ny subdomains (defined in "2D-DDM-Fg=b.geo") as input and solves an electrostatic formulation on the union of all subdomains. It does so by iterating between subdomains using a gmres accelerated DDM-with-overlap method.

// In the following code every subdomain is identified using its x and y number in space. The subdomain identified by number x and y can also alternatively be referred to by its subdomain number which is simply given by "x+nx*y+1". For every subdomain we define 10 quantities. The first quantity is "omega~{x+nx*y+1}", the region of its surface. The 4 next quantities are the borders of its surface, namely "sigma_up~{x+nx*y+1}" for the top border, "sigma_right~{x+nx*y+1}" for the right border, "sigma_down~{x+nx*y+1}" for the bottom border, "sigma_left~{x+nx*y+1}" for the left border. Dirichlet constraints will be forced on these 4 borders, be it fixed external dirichlet constraints for the borders of the global domain or constraints that vary as we iterate on the artificial borders (aka. artificial interfaces). The next 4 quantities are "g_up~{x+nx*y+1}", "g_right~{x+nx*y+1}", "g_down~{x+nx*y+1}", "g_left~{x+nx*y+1}" which correspond to the information we want to exchange between subdomains, respectively on "sigma_down~{x+nx*(y+1)+1}", "sigma_left~{(x+1)+nx*y+1}", "sigma_up~{x+nx*(y-1)+1}", "sigma_right~{(x-1)+nx*y+1}" for subdomain x+nx*y+1. The last quantity is "skin~{x+nx*y+1}" which corresponds to all geometric elements that are in contact with surfaces {sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}
// There are two things left to mention: register 9 (#9) is used to select whether the physical sources should be set to 0 or not and register 10 (#10) does the same job for the artificial sources




// Group
//======

Group 	{
	For x In {-1:nx-1+1}
		For y In {-1:ny-1+1}
			sigma_up~{x+nx*y+1} 	= Region[ (1001*nx*ny+4*x+4*nx*y+1) ];
			sigma_right~{x+nx*y+1} 	= Region[ (1001*nx*ny+4*x+4*nx*y+2) ];
			sigma_down~{x+nx*y+1} 	= Region[ (1001*nx*ny+4*x+4*nx*y+3) ];
			sigma_left~{x+nx*y+1} 	= Region[ (1001*nx*ny+4*x+4*nx*y+4) ];
			
			omega~{x+nx*y+1} 	= Region[ (1000*nx*ny+x+nx*y+1) ];

			skin~{x+nx*y+1} 	= ElementsOf[ omega~{x+nx*y+1}, OnOneSideOf {sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1}, 
												sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}} ];
		EndFor
	EndFor
}
 
// Function
//=========

Function {

	epsilon[]				= 3.9 * 8.854e-12;

	For x In {0:nx-1}
		For y In {0:ny-1}
			// The g quantities are stored in 4 fields
			g_up~{x+nx*y+1}[] 	= ComplexScalarField[XYZ[]]{100+4*x+4*nx*y+1};
			g_right~{x+nx*y+1}[] 	= ComplexScalarField[XYZ[]]{100+4*x+4*nx*y+2};
			g_down~{x+nx*y+1}[] 	= ComplexScalarField[XYZ[]]{100+4*x+4*nx*y+3};
			g_left~{x+nx*y+1}[]	= ComplexScalarField[XYZ[]]{100+4*x+4*nx*y+4};
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
		{ GeoElement Point ; NumberOfPoints  1 ; }
		{ GeoElement Line ; NumberOfPoints  4 ; }
		{ GeoElement Triangle ; NumberOfPoints  6 ; }
		{ GeoElement Quadrangle ; NumberOfPoints 7 ; }
		{ GeoElement Tetrahedron ; NumberOfPoints 15 ; }
		{ GeoElement Hexahedron ; NumberOfPoints 34 ; }
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
			{ Name forced_constraints~{x+nx*y+1} ; 
				Case {
					// Constraint on sigma_up~{x+nx*y+1}
					If (y < ny-1)	
		      				{ Region sigma_up~{x+nx*y+1}; Value (#10 > 0 ? g_up~{x+nx*y+1}[] : 0. ); }	
					EndIf
					If (y == ny-1)			
		      				{ Region sigma_up~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0. ); }
					EndIf
					// Constraint on sigma_right~{x+nx*y+1}
					If (x < nx-1)			
		      				{ Region sigma_right~{x+nx*y+1}; Value (#10 > 0 ? g_right~{x+nx*y+1}[] : 0. ); }
					EndIf
					If (x == nx-1)			
						{ Region sigma_right~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0. ); }
					EndIf
					// Constraint on sigma_down~{x+nx*y+1}
					If (y > 0)			
						{ Region sigma_down~{x+nx*y+1}; Value (#10 > 0 ? g_down~{x+nx*y+1}[] : 0. ); }
					EndIf
					If (y == 0)			
						{ Region sigma_down~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0. ); }
					EndIf
					// Constraint on sigma_left~{x+nx*y+1}
					If (x > 0)			
						{ Region sigma_left~{x+nx*y+1}; Value (#10 > 0 ? g_left~{x+nx*y+1}[] : 0. ); }
					EndIf
					If (x == 0)			
						{ Region sigma_left~{x+nx*y+1}; Value (#9 > 0 ? 0 : 0. ); }
					EndIf
				     }		
			}
		EndFor
	EndFor
}

//FunctionSpace
//=============

FunctionSpace	{
	For x In {0:nx-1}
		For y In {0:ny-1}
			{ Name omega~{x+nx*y+1}; Type Form0; 
				BasisFunction{
					{Name wn; NameOfCoef vn; Function BF_Node;
						Support Region[ {omega~{x+nx*y+1}, sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}, sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}, sigma_down~{x+nx*(y+1)+1}, 
								sigma_left~{(x+1)+nx*y+1}} ]; Entity NodesOf[All];}
				}
    				Constraint{
    					{NameOfCoef vn; EntityType NodesOf; NameOfConstraint forced_constraints~{x+nx*y+1};}
     				}
			}

			{ Name g~{x+nx*y+1}; Type Form0; 
				BasisFunction{
					{Name wn; NameOfCoef vn; Function BF_Node;
						Support Region[ {sigma_up~{x+nx*y+1},	sigma_right~{x+nx*y+1}, sigma_left~{x+nx*y+1}, 
								sigma_down~{x+nx*y+1}} ]; Entity NodesOf[All];}
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
			{ Name omega~{x+nx*y+1}; Type FemEquation; Quantity{
				{Name v_omega~{x+nx*y+1}; Type Local; NameOfSpace omega~{x+nx*y+1};}}
				Equation{
					Galerkin { [ epsilon[] * Dof{d v_omega~{x+nx*y+1}} , {d v_omega~{x+nx*y+1}} ] ; 
						In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; Integration I1 ; }
					// Put a volume term if you wish, do not forget to multiply it by #9:
					Galerkin { [ 1e-9 * #9 , {v_omega~{x+nx*y+1}} ] ; 
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
						{Name resolution_omega~{x+nx*y+1}; NameOfFormulation omega~{x+nx*y+1};}
					EndFor
				EndFor
				}
			Operation{

				PostOperation[init_fields];

				////////////////////// Let the DDM game begin!

				// Parallel mode:
				SetCommSelf;
				
				////////// Step 1: Solving for the physical sources by forcing 0 on the artificial interfaces and not 0 on the physical boundaries

				Evaluate[1. #9]; Evaluate[0. #10];	

				For x In {0:nx-1}
					For y In {0:ny-1}

						// Updating the constraints:
     						UpdateConstraint[resolution_omega~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
												sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];

						Generate[resolution_omega~{x+nx*y+1}]; Solve[resolution_omega~{x+nx*y+1}];
					EndFor
				EndFor

				For x In {0:nx-1}
					For y In {0:ny-1}
						PostOperation[update_g_up~{x+nx*y+1}];
						PostOperation[update_g_right~{x+nx*y+1}];
						PostOperation[update_g_down~{x+nx*y+1}];
						PostOperation[update_g_left~{x+nx*y+1}];
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
				IterativeLinearSolver["I-A", "gmres", 1e-6, 200, 200, {101:100+4*nx*ny}, {}, {}]
					{
					SetCommSelf;
					For x In {0:nx-1}
						For y In {0:ny-1}
	     						UpdateConstraint[resolution_omega~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
													sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];
			
							// We have to regenerate the RHS in the vicinity of sigma since we force dirichlet on sigma:
      							GenerateRHSGroup[resolution_omega~{x+nx*y+1}, skin~{x+nx*y+1}];
							// We solve "again", i.e. without recomputing the LU decomposition in mumps
							SolveAgain[resolution_omega~{x+nx*y+1}];					
						EndFor
					EndFor

					For x In {0:nx-1}
						For y In {0:ny-1}
							PostOperation[update_g_up~{x+nx*y+1}];
							PostOperation[update_g_right~{x+nx*y+1}];
							PostOperation[update_g_down~{x+nx*y+1}];
							PostOperation[update_g_left~{x+nx*y+1}];						
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

     						UpdateConstraint[resolution_omega~{x+nx*y+1}, Region[{sigma_up~{x+nx*y+1}, sigma_right~{x+nx*y+1},
												sigma_down~{x+nx*y+1}, sigma_left~{x+nx*y+1}}], Assign];
      						GenerateRHSGroup[resolution_omega~{x+nx*y+1}, skin~{x+nx*y+1}];
						SolveAgain[resolution_omega~{x+nx*y+1}]; 

						// We now want to store the final solution:
						PostOperation[save_omega~{x+nx*y+1}];

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

  				{ Name v_omega~{x+nx*y+1}; NameOfFormulation omega~{x+nx*y+1};
    					Quantity {
      						{ Name v_omega~{x+nx*y+1} ; Value { Local { [ {v_omega~{x+nx*y+1}} ]; 
							In Region[omega~{x+nx*y+1}] ; Jacobian JVol ; } } }
						

      						{ Name g~{x+nx*y+1} ; Value { Local { [ {v_omega~{x+nx*y+1}} ]; 
							In Region[{sigma_down~{x+nx*(y+1)+1}, sigma_left~{(x+1)+nx*y+1}, 
								sigma_up~{x+nx*(y-1)+1}, sigma_right~{(x-1)+nx*y+1}}] ; Jacobian JVol ; } } }
						}
				}

			EndFor
		EndFor

		{ Name init_fields; NameOfFormulation omega~{x+nx*y+1};
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

				{ Name update_g_up~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g~{x+nx*y+1}, OnElementsOf sigma_down~{x+nx*(y+1)+1}, 
							StoreInField 100+4*x+4*nx*(y+1)+3] ;	
						}
				}
				{ Name update_g_right~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g~{x+nx*y+1}, OnElementsOf sigma_left~{(x+1)+nx*y+1}, 
							StoreInField 100+4*(x+1)+4*nx*y+4] ;	
						}
				}
				{ Name update_g_down~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g~{x+nx*y+1}, OnElementsOf sigma_up~{x+nx*(y-1)+1}, 
							StoreInField 100+4*x+4*nx*(y-1)+1] ;	
						}
				}
				{ Name update_g_left~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ g~{x+nx*y+1}, OnElementsOf sigma_right~{(x-1)+nx*y+1}, 
							StoreInField 100+4*(x-1)+4*nx*y+2] ;	
						}
				}


				{ Name save_omega~{x+nx*y+1} ; NameOfPostProcessing v_omega~{x+nx*y+1}; 
					Operation {
						Print[ v_omega~{x+nx*y+1}, OnElementsOf omega~{x+nx*y+1}, 
							File Sprintf("v%g.pos",x+nx*y+1)] ;						
						}
				}

			EndFor
		EndFor

		{ Name init_fields ; NameOfPostProcessing init_fields; 
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

}
