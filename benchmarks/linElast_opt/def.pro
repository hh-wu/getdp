Include "def.dat";

DefineConstant[
  // Optimization type
  Flag_topopt = {1, Name "Input/OptParam/optType",Label "Optimization Type",
                 Choices {0="Structural Optimization",1="Topology Optimization"}, Visible 1},
  Flag_InterpLaw = {0, Name "Input/OptParam/InterpLaw",Label "material interpolation law",
                           Choices {0="SIMP",1="RAMP"},Visible (Flag_topopt==1)},
  degree_SIMP = {3.0, Name "OptParam/DegreeSimp",Label "Degree SIMP", 
                 Visible (Flag_topopt==1)},
  volfrac = {0.5, Name "OptParam/volfrac",Label "Initial density distribution", 
             Visible (Flag_topopt==1)},
  Flag_initOpt = {0, Name "Input/OptParam/optInit", Label "Initialize design variable", 
                  Choices {0, 1}, Visible (Flag_topopt==1)}, 
  Flag_testBench = {1, Name "Geo/Test Case", 
                    Choices {0="Short Cantiler Beam", 1="MBB Beam",2="tst"}, Visible 1},
  Flag_filterSensitivity = {0, Name "Input/OptParam/filterSens", 
                            Label "Filter sensitivities?", Choices {0, 1}, 
                            Visible (Flag_topopt==1)}, 
  Rmin = {lc*10, Name "Input/OptParam/rmin",Label "Sensitivity Filter Radius", 
          Visible (Flag_filterSensitivity==1)},
  ExtGmsh = ".pos",
  E0 = 1,//210e09,//(Acier) N/m2
  nu = 0.3,
  R_ = {"OptimStep", Name "GetDP/1ResolutionChoices", 
	Choices {"Analysis", "OptimStep"}, Visible 0},
  C_ = {"-solve -v 3 -v2", Name "GetDP/9ComputeCommand", Visible 0},
  P_ = {"", Name "GetDP/2PostOperationChoices", Visible 0}
];

//po_opt  = "Output - Optimization/";
po_opt  = "Output/";

Group {
  Bloc = #BLOC;
  //BlocForce = #POINT_5;
  If(Flag_testBench == 0) //short cantilever beam
    BlocForce = #SURF_DROITE;//force sur toute le coté de droite
  EndIf
  If(Flag_testBench == 1) //MBB-beam
    BlocForce = #POINT_4; // force sur le point 4
  EndIf
  If(Flag_testBench == 2) //MBB-beam
    BlocForce = #POINT_5; // force sur le point 5
  EndIf
  Domain_Disp = Region[{Bloc}];
  Domain_Force = Region[{BlocForce}]; 

  SurfTot = Region[{SURF_BAS, SURF_HAUT, SURF_GAUCHE, SURF_DROITE}];
}

Function {

  //E  = 7.7e10; 
  //nu =  0.346;//Alu
  If(!Flag_topopt)
    E[] = E0;
  EndIf
  If(Flag_topopt)
     //design variables (read from view of .pos)
     //designVar[] = ScalarField[XYZ[]]{1};
     designVar[] = ScalarField[XYZ[],0,1]{1};//0 = pas de temps;1 = "match elements"
     If(Flag_InterpLaw == 0.0) //SIMP
       E[] = (E0 - 1.0e-03)*designVar[]^degree_SIMP + 1.0e-03;
       E_prime[] = degree_SIMP*(E0 - 1.0e-03)*designVar[]^(degree_SIMP-1.0);
     EndIf
     If(Flag_InterpLaw == 1.0) // RAMP
       E[] = ( designVar[]/(1.0 + degree_SIMP*(1 - designVar[])) )*E0 ;
       E_prime[] = ( (1.0 + degree_SIMP)/( 1.0 + degree_SIMP*(1-designVar[]) )^2.0 )*E0 ;
     EndIf
     If(Flag_InterpLaw == 1.0) // alpha-law
       alpha = 1.6;
       E[] = (((1.0-alpha)/alpha)*designVar[]^degree_SIMP + designVar[]/alpha)*E0 ;
       E_prime[] = ( ( (1.0-alpha)/alpha)*degree_SIMP*designVar[]^(degree_SIMP-1) 
                       + 1.0/alpha)*E0 ;
     EndIf
  EndIf

  f[]  = E[]/(1-nu*nu);

  If(Flag_topopt) 
    f_prime[]  = E_prime[]/(1-nu*nu);
  EndIf

  c11  = 1 ;
  c12  = nu ;
  c22  = 1  ;
  c33  = (1-nu)/2 ; 
  C[ Bloc ]  = f[]*TensorSym[ c11, c12, 0, c22, 0, c33 ];

  If(Flag_topopt)
    C_prime[ Bloc ]  = f_prime[]*TensorSym[ c11, c12, 0, c22, 0, c33 ];
  EndIf
  s_disp = 1;

  Flag_Disp = 2; // 1: point, 2: line

//  u_fixed[] = Vector[dy/8, dy/8*2, 0] * s_disp;
  u_fixed[] = Vector[0, 0, 0] * s_disp;

  u_fixed_line[] = u_fixed[]; // * Y[]/dy;

  force_node[] = Vector[0, -1.0e-02/*1e6*/, 1]; //???
  //force_density[] = Vector[0,-9.81,0]; //???

  If(Flag_filterSensitivity)
    rmin2[] = Rmin*Rmin;
    //sensitivityMap[] = ScalarField[XYZ[]]{2}; 
    sensitivityMap[] = ScalarField[XYZ[],0,1]{2};//0 = pas de temps;1 = "match elements"
    prod_x_dC[] = designVar[] * sensitivityMap[];
  EndIf

  // densité [kg/m3]
  volDensity[Bloc] = 7874; //acier
}

Group {
  Domain_Disp_Tot = Region[{Domain_Disp, Domain_Force}];
}

Constraint {
  { Name dummy ; // [rad/s]
    Case {
      { Region Domain_Disp_Tot ; Value 1. ; }
    }
  }
}
Constraint {

 // Dirichlet constraint for Elasticity problem
 { Name DisplacementX_Mec ; Type Assign ;
  Case {
//   If (Flag_Disp == 1)
//    { Region #POINT_3;  Value CompX[u_fixed[]]; }
//   EndIf
//    //    { Region #POINT_1;  Value 0.; }
//   If (Flag_Disp == 2)
//    { Region #SURF_DROITE;  Value CompX[u_fixed_line[]]; } //on impose déplacement sur surf_droite
//   EndIf
    //    { Region #POINT_1;  Value 0.; }
    If(Flag_testBench == 0)
      { Region #SURF_GAUCHE;  Value 0.; }
    EndIf
    If(Flag_testBench == 1)
      { Region #SURF_GAUCHE;  Value 0.; } //bloquer déplacement selon x du coté gauche
    EndIf
    If(Flag_testBench == 2)
      { Region #POINT_1;  Value 0.; } //bloquer déplacement selon x du coté gauche
      { Region #POINT_4;  Value 0.; } //bloquer déplacement selon x du coté gauche
    EndIf
  }
 }
 { Name DisplacementY_Mec; Type Assign ;
   Case {
//    If (Flag_Disp == 1)
//     { Region #POINT_3;  Value CompY[u_fixed[]]; }
//    EndIf
//    If (Flag_Disp == 2)
//     { Region #SURF_DROITE;  Value CompY[u_fixed_line[]]; }
//    EndIf
    //    { Region #POINT_1;  Value 0.; }
    If(Flag_testBench == 0) //short beam
      { Region #SURF_GAUCHE;  Value 0.; } //bloquer déplacement selon y
    EndIf
    If(Flag_testBench == 1) //mbb beam
      { Region #POINT_2;  Value 0.; } //bloquer déplacement selon y du point en bas à droite
    EndIf
    If(Flag_testBench == 2)
      { Region #POINT_1;  Value 0.; } //bloquer déplacement selon x du coté gauche
      { Region #POINT_4;  Value 0.; } //bloquer déplacement selon x du coté gauche
    EndIf

  }
 }

 { Name DisplacementX_Mec_d2 ; Type Assign ;
  Case {
    //    { Region SurfTot;  Value 0.; }
  }
 }
 { Name DisplacementY_Mec_d2; Type Assign ;
   Case {
     //    { Region SurfTot;  Value 0.; }
  }
 }

}


Integration {
  { Name GradGrad ;
    Case { {Type Gauss ;
            Case {
              { GeoElement Point        ; NumberOfPoints  2 ; }
	      { GeoElement Line         ; NumberOfPoints  4 ; }
	      { GeoElement Triangle     ; NumberOfPoints  3 ; }
	      { GeoElement Quadrangle   ; NumberOfPoints  4 ; }
           }
         }
    }
  }
}

Jacobian {
  { Name Vol ;
    Case {
      { Region All ; Jacobian Vol ; }
    }
  }
  { Name Sur ;
    Case {
      { Region All ; Jacobian Sur ; }
    }
  }
}

Group {
  DefineGroup[Domain_Disp, Domain_Force];
}
Function {
  DefineFunction[ C, force_density, force_node ] ;
  DefineFunction[ rmin2, prod_x_dC, designVar ] ;
}



//Group {
//  Domain_Disp_Tot = Region[{Domain_Disp, Domain_Force}];
//}


FunctionSpace{
  { Name H_psi ; Type Form0 ;
    BasisFunction {
      { Name sPsi ; NameOfCoef psi ; Function BF_Node ;
        Support Domain_Disp ; Entity NodesOf[ All ] ; }
    }
  }
  //----------------------------------------------
  { Name H_Mec2D_u ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      If (Flag_degree == 2)
       { Name sxn2 ; NameOfCoef uxn2 ; Function BF_NodeX_2E ; dFunction {BF_NodeX_D12_2E, BF_Zero};
         Support Domain_Disp_Tot ; Entity EdgesOf[ All ] ; }
       { Name syn2 ; NameOfCoef uyn2 ; Function BF_NodeY_2E ; dFunction {BF_NodeY_D12_2E, BF_Zero};
         Support Domain_Disp_Tot ; Entity EdgesOf[ All ] ; }
      EndIf
    }
    If (Flag_degree == 1)
      SubSpace {
        { Name u_x ; NameOfBasisFunction { sxn } ; }
        { Name u_y ; NameOfBasisFunction { syn } ; }
      }
    EndIf
    If (Flag_degree == 2)
      SubSpace {
        { Name u_x ; NameOfBasisFunction { sxn, sxn2 } ; }
        { Name u_y ; NameOfBasisFunction { syn, syn2 } ; }
      }
    EndIf
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint DisplacementX_Mec ; }
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint DisplacementY_Mec ; }
      If (Flag_degree == 2)
       { NameOfCoef uxn2 ;
         EntityType EdgesOf ; NameOfConstraint DisplacementX_Mec_d2 ; }
       { NameOfCoef uyn2 ;
         EntityType EdgesOf ; NameOfConstraint DisplacementY_Mec_d2 ; }
      EndIf
    }
  }
}

// +++ for dummy space
Constraint {
  { Name Displacement_Mec_dum ; Type Assign ;
    Case {
      { Region Domain_Disp_Tot ; Value 1; }
    }
  }
}

FunctionSpace{
  { Name H_Mec2D_u_dum ; Type Vector ;
    BasisFunction {
      { Name sxn ; NameOfCoef uxn ; Function BF_NodeX ; dFunction {BF_NodeX_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
      { Name syn ; NameOfCoef uyn ; Function BF_NodeY ; dFunction {BF_NodeY_D12, BF_Zero};
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
    }
    SubSpace {
      { Name u_dum_x ; NameOfBasisFunction { sxn } ; }
      { Name u_dum_y ; NameOfBasisFunction { syn } ; }
    }
    Constraint {
      { NameOfCoef uxn ;
        EntityType NodesOf ; NameOfConstraint Displacement_Mec_dum ; }
      { NameOfCoef uyn ;
        EntityType NodesOf ; NameOfConstraint Displacement_Mec_dum ; }
    }
  }
}

FunctionSpace{
{ Name dummy ; Type Form1P ;
    BasisFunction {
      { Name s_dummy ; NameOfCoef s_dummy1 ; Function BF_RegionZ;
        Support Domain_Disp_Tot ; Entity NodesOf[ All ] ; }
   }
    Constraint {
      { NameOfCoef s_dummy1 ; EntityType NodesOf ; NameOfConstraint dummy ; }
    }
  }
}

Formulation {
  { Name Mec2D_u ; Type FemEquation ;
    Quantity {
       { Name u ; Type Local ; NameOfSpace H_Mec2D_u ;}
       { Name u_x ; Type Local ; NameOfSpace H_Mec2D_u[u_x] ;}
       { Name u_y ; Type Local ; NameOfSpace H_Mec2D_u[u_y] ;}
       { Name u_dum_x ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_x] ;}
       { Name u_dum_y ; Type Local ; NameOfSpace H_Mec2D_u_dum[u_dum_y] ;}
    }
    Equation {
       // u formulation
      Galerkin { [ C[]*Dof{D1 u}, {D1 u}] ; //D1 --> grad ??
                 In Domain_Disp; Jacobian Vol ; Integration GradGrad ; }

      // densite de force imposee
      If (0)
      Galerkin { [ force_density[], {u}] ;
                 In Domain_Force ; Jacobian Vol ; Integration GradGrad; }
      EndIf

      // Pour forces nodales imposees
      If (1)
        Galerkin { [ -AssDiag[]{1} * CompX[force_node[]] * Unit[Dof{u_dum_x}], Unit[{u_x}] ] ;
                   In Domain_Force ; Jacobian Sur ; Integration GradGrad; }
        Galerkin { [ -AssDiag[]{1} * CompY[force_node[]] * Unit[Dof{u_dum_y}], Unit[{u_y}] ] ;
                   In Domain_Force ; Jacobian Sur ; Integration GradGrad; }
      EndIf
    }
   }
  // Filter of objective function sensitivities
  { Name Filt_sens ; Type FemEquation ;
    Quantity {
       { Name psi ; Type Local ; NameOfSpace H_psi;}
       //{ Name dummy  ; Type Local  ; NameOfSpace dummy ; }
      }
    Equation {
      Galerkin{ [rmin2[]*Dof{Grad psi}, {Grad psi}];
        In Domain_Disp; Jacobian Vol; Integration GradGrad;}
 
      Galerkin{ [  Dof{psi}, {psi}];
       In Domain_Disp; Jacobian Vol; Integration GradGrad;}
 
      Galerkin{ [-prod_x_dC[], {psi}];
        In Domain_Disp; Jacobian Vol; Integration GradGrad;}
/*
       Galerkin { [ rmin2[] * Dof{d psi}, {d psi} ] ; 
                   In Domain_Disp; Jacobian Vol ; Integration GradGrad ; }

       Galerkin { [ Dof{psi}, {psi} ] ; 
                   In Domain_Disp; Jacobian Vol; Integration GradGrad; }
       Galerkin { [ -prod_x_dC[], {psi} ] ; 
                   In Domain_Disp; Jacobian Vol; Integration GradGrad; }
*/
      }
  }

  // Direct method sensitivity formulation --> compute du/dx
  { Name DirectSystem ; Type FemEquation ;
    Quantity {
	{ Name u ; Type Local ; NameOfSpace H_Mec2D_u ;}
	{ Name u_prime ; Type Local ; NameOfSpace H_Mec2D_u ;}	
    }
    Equation {
     //écriture correcte??
     Galerkin { [ C[]*Dof{D1 u_prime}, {D1 u_prime}] ; 
                 In Domain_Disp; Jacobian Vol ; Integration GradGrad ; }
     Galerkin { [ C_prime[]*{D1 u}, {D1 u_prime}] ; 
                 In Domain_Disp; Jacobian Vol ; Integration GradGrad ; }
    }
  }
}

Resolution {
  { Name OptimStep ;
    System {
      If(!Flag_filterSensitivity)
        { Name Sys_Mec ; NameOfFormulation Mec2D_u ; }
      EndIf
      If(Flag_filterSensitivity)     
        { Name Sys_Filt ; NameOfFormulation Filt_sens ; }
      EndIf
    }
    Operation { 
      CreateDir["res"];
      If(!Flag_filterSensitivity)
        If(Flag_topopt)
	  // Load the Design Variables (.pos file)
          // --> The view can be used in a dynamic way during the resolution step  
          GmshRead["res/designVar.pos", 1]; //!!!!!!!!!!!!! Change to ResDir
        EndIf
        // Solve mechanical problem --> u & dc/dx (self-adjoint system)
        Generate[Sys_Mec]; 
        //Print[Sys_Mec,File "testStif3"];//pas besoin de résoudre tout le système!!!
        Solve[Sys_Mec]; 
        SaveSolution[Sys_Mec];
        PostOperation[Map_u] ;
        //PostOperation[Map_direct] ;
      EndIf

      If(Flag_filterSensitivity)
	// Load the sensitivity view (.pos file)
        GmshRead["res/designVar.pos", 1]; 

        // Load the density view
        GmshRead["res/SensitivityPerf_AdjointMethod.pos", 2]; 

        // Filter dc/dx 
        Generate[Sys_Filt]; 
        Solve[Sys_Filt]; 
        SaveSolution[Sys_Filt];

        // Plot filtered sensitivity
        PostOperation[FilteredSens];
      EndIf
    }
  }
}

PostProcessing {

  { Name Mec2D_u ; NameOfFormulation  Mec2D_u ;
    Quantity {
      { Name u ; Value { Term { [ {u} ] ; In Domain_Disp ; Jacobian Vol; } } }
      { Name ux ; Value { Term { [ CompX[{u}] ] ; In Domain_Disp ; Jacobian Vol; } } }
      { Name uy ; Value { Term { [ CompY[{u}] ] ; In Domain_Disp ; Jacobian Vol; } } }
      { Name force ; Value { Term { [ force_node[] ] ; In Domain_Force ; Jacobian Vol; } } }
      
      If(Flag_topopt)
           { Name DesignVar; Value { Term { [ designVar[] ] ; 
              In Domain_Disp ; Jacobian Vol ; } } }
           { Name E; Value { Term { [ E[] ] ; 
              In Domain_Disp ; Jacobian Vol ; } } }
           { Name Compliance2 ; Value { Integral { [force_node[]*{u}]; 
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}
           { Name Compliance ; Value { Integral { [(C[]*{u})*{u}]; 
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}

	   { Name Volume ; Value { Integral { [1.0/*designVar[]*/]; 
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}

	   { Name VolumeElem ; Value { Integral { [designVar[]]; 
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}

	   { Name massElem ; Value { Integral { [volDensity[]/ElementVol[]]; //[kg/m3]
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}

	   { Name Mass ; Value { Integral { [volDensity[]*designVar[]]; 
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}

           { Name SensitivityPerf_AdjointMethod ; Value { Integral { [(-1.0*C_prime[]*{D1 u})*{D1 u}]; 
              In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}
           { Name SensitivityConstr_AdjointMethod; Value { Term { [ 1. ] ; 
              In Domain_Disp ; Jacobian Vol ; } } }
     
      EndIf
    }
  }
  { Name Map_u_direct ; NameOfFormulation DirectSystem ;
    PostQuantity {
      // Field quantities
      { Name u_prime  ; Value { Term { [ {u_prime} ] ; In Domain_Disp ; Jacobian Vol ; }}}
      { Name SensitivityObjective_DirectMethod ; Value { Integral { [(C[]*{u})*{u_prime}]; In Domain_Disp ; Jacobian Vol  ; Integration GradGrad; }}}
    }
  }
  { Name FilteredSens; NameOfFormulation Filt_sens ;
    PostQuantity {
      // Field quantities
      { Name psi0_moy; Value { Integral { [ prod_x_dC[]/ElementVol[] ] ; In Domain_Disp ; Jacobian Vol ; Integration GradGrad; }}}
      { Name psi0; Value { Term { [ prod_x_dC[] ] ; In Domain_Disp ; Jacobian Vol ; }}}
      { Name psi; Value { Term { [ {psi} ] ; In Domain_Disp ; Jacobian Vol ; }}}
      { Name SensitivityFiltered_timesDesVar; Value { Term { [ {psi}/*/designVar[]*/ ] ; In Domain_Disp ; Jacobian Vol ; }}}
      { Name dV; Value { Term { [ designVar[] ] ; In Domain_Disp ; Jacobian Vol ; }}}
    }
  }
}

PostOperation {
  { Name Map_u; NameOfPostProcessing Mec2D_u;
    Operation {
      /*Print [ u, OnElementsOf Domain_Disp, File StrCat["res/u",".pos"] ];*/
      /*Print [ force, OnElementsOf Domain_Force, File StrCat["res/force",".pos"] ];*/
      //Print [ ux, OnElementsOf Domain_Disp, File StrCat["res/ux",".pos"] ];
      //Print [ uy, OnElementsOf Domain_Disp, File StrCat["res/uy",".pos"] ];
      If(Flag_topopt)
         //Print[ DesignVar, OnElementsOf Domain_Disp, 
         //        File StrCat["res/designVar",ExtGmsh], LastTimeStepOnly] ;

         //Print[ DesignVar, OnElementsOf Domain_Disp, 
         //        File "res/designVar.png", LastTimeStepOnly];

          // Generate the map of nu
	  /*
          Print[ E,  OnElementsOf Domain_Disp, 
                 File StrCat["res/E",ExtGmsh], LastTimeStepOnly] ;
  	  */
          // Compliance
          Print[ Compliance[Domain_Disp],OnGlobal, Format TimeTable, 
                 File StrCat["res/Compliance",ExtGmsh], LastTimeStepOnly, 
                 SendToServer StrCat[po_opt,"Compliance"], Color "LightYellow" ] ;
	  /*
	  Print[ Compliance2[Domain_Disp],OnGlobal, Format TimeTable, 
                 File StrCat["res/Compliance2",ExtGmsh], LastTimeStepOnly, 
                 SendToServer StrCat[po_opt,"Compliance2"], Color "LightYellow" ] ;
	  */

	  // Volume
          Print[ Volume[Domain_Disp], OnGlobal, Format TimeTable, 
                 File StrCat["res/Volume",ExtGmsh], LastTimeStepOnly, 
                 SendToServer StrCat[po_opt,"Volume"], Color "LightYellow"] ;

          Print[ Volume, OnElementsOf Domain_Disp, 
                 File StrCat["res/VolumeElem",ExtGmsh], LastTimeStepOnly] ;

          Print[ massElem, OnElementsOf Domain_Disp, 
                 File StrCat["res/MassElem",ExtGmsh], LastTimeStepOnly] ;

	  Print[ Mass[Domain_Disp], OnGlobal, Format TimeTable, 
                 File StrCat["res/Mass",ExtGmsh], LastTimeStepOnly,
                 SendToServer StrCat[po_opt,"Mass"], Color "LightYellow"] ;

	  // Generate the sensitivity of objective function map
          Print[ SensitivityPerf_AdjointMethod,  OnElementsOf Domain_Disp, 
                 File StrCat["res/SensitivityPerf_AdjointMethod",ExtGmsh], LastTimeStepOnly] ;

          // Generate the sensitivity of volume constraint map
          //Print[ SensitivityConstr_AdjointMethod,  OnElementsOf Domain_Disp, 
          //       File StrCat["res/SensitivityConstr_AdjointMethod",ExtGmsh], LastTimeStepOnly] ;
        
      EndIf
    }
  }
}

PostOperation {
  { Name Map_direct; NameOfPostProcessing Map_u_direct;
    Operation {
	  Print [ u_prime, OnElementsOf Domain_Disp, File StrCat["res/u_prime",".pos"] ];
          // Generate the sensitivity of objective function map
          Print[ SensitivityObjective_DirectMethod,  OnElementsOf Domain_Disp, 
                 File StrCat["res/SensitivityObj_DirectMethod",ExtGmsh], LastTimeStepOnly] ;
    }
  }
}

PostOperation {
  { Name FilteredSens; NameOfPostProcessing FilteredSens;
    Operation {
	  Print [ SensitivityFiltered_timesDesVar, OnElementsOf Domain_Disp, 
		File StrCat["res/SensitivityFiltered_timesDesVar",".pos"] ];      
          /*Print [ dV, OnElementsOf Domain_Disp, File StrCat["res/dV",".pos"] ];*/          
	  /*Print [ psi0_moy, OnElementsOf Domain_Disp, File StrCat["res/psi0",".pos"] ];*/          
	  /*Print [ psi, OnElementsOf Domain_Disp, File StrCat["res/psi",".pos"] ]; */         
    }
  }
}


