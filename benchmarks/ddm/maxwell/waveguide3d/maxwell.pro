
Perpendicular = 0 ;

Group{
  TrGr = ElementsOf[Omega OnOneSideOf GammaScat];
}

Function{
  If (Perpendicular)
    dirichletHomog[] = 0 ; 
  EndIf
  If (!Perpendicular)
    dirichletHomog[] = Vector[0, 0, 0] ;
  EndIf
}

Function{
  al[] = -1/(keps[]^2);
  be[] =  1/(keps[]^2);
}



Jacobian {
  { Name JVol ; Case { { Region All ; Jacobian Vol ; } } }
  { Name JSur ; Case { { Region All ; Jacobian Sur ; } } }
  { Name JLin ; Case { { Region All ; Jacobian Lin ; } } }
}

Integration {
  { Name I1 ;
    Case { { Type Gauss ; Case { 
          { GeoElement Point ; NumberOfPoints  1 ; }
          { GeoElement Line ; NumberOfPoints  2 ; }
          { GeoElement Triangle ; NumberOfPoints  6 ; }
          { GeoElement Tetrahedron ; NumberOfPoints  4 ; }
          { GeoElement Quadrangle ; NumberOfPoints  4 ; }
          { GeoElement Hexahedron ; NumberOfPoints  6 ; }
        } } }
  }
}

Constraint{
  { Name dirichlet_e ; Case { {Region GammaScat ; Type AssignFromResolution ; NameOfResolution dirichlet_e ; } } }
  { Name dirichlet_e_homog ; Case { {Region GammaC ; Type Assign ; Value Vector[0.,0.,0.] ; } } }
}

FunctionSpace {
  If (Perpendicular)
  { Name Hcurl_e; Type Form1P ;
    BasisFunction { { Name sqe ; NameOfCoef vqe ; Function BF_PerpendicularEdge ;
	Support Region[ {Omega, GammaScat, Sigma, GammaInf} ] ; Entity NodesOf[ All ] ; } }
    Constraint { { NameOfCoef vqe ; EntityType NodesOf ; NameOfConstraint Dirichlet_uInc ; }
    }
    // Constraint { { NameOfCoef vqe ; EntityType NodesOf ; NameOfConstraint DirichletHomog ; }
    // }
  }
  EndIf
  If (!Perpendicular)
  { Name Hcurl_e; Type Form1 ;
    BasisFunction { { Name sqe ; NameOfCoef vqe ; Function BF_Edge ;
	Support Region[ {Omega, GammaScat, Sigma, GammaInf, GammaC, GammaTang} ] ; Entity EdgesOf[ All ] ; } }
    Constraint {
      If (SOURCE_DIRICHLET)
        { NameOfCoef vqe ; EntityType EdgesOf ; NameOfConstraint dirichlet_e ; }
      EndIf
      If (TM || TEM)
      	{ NameOfCoef vqe ; EntityType EdgesOf ; NameOfConstraint dirichlet_e_homog ; }
      EndIf
    }
  }

  { Name Hcurl_e_ref; Type Form1 ;
    BasisFunction { { Name sqe ; NameOfCoef vqe ; Function BF_Edge ;
	Support Region[ {Omega} ] ; Entity EdgesOf[ All ] ; } }
  }

  { Name Hcurl_h; Type Form1 ;
    BasisFunction { { Name sqh ; NameOfCoef vqh ; Function BF_Edge ;
  	Support Region[ {Omega, GammaScat, Sigma, GammaInf, GammaC, GammaTang} ] ; Entity EdgesOf[ All ] ; } }
    Constraint { { NameOfCoef vqh ; EntityType EdgesOf ; NameOfConstraint dirichlet_h ; }
    }
  }

  { Name Hcurl_e_lag; Type Form1 ;
    BasisFunction { { Name sqe ; NameOfCoef vqe ; Function BF_Edge ;
	Support Region[ {Omega, GammaScat, Sigma, GammaInf, GammaC} ] ; Entity EdgesOf[ All ] ; } }
    If (TM)
      Constraint { { NameOfCoef vqe ; EntityType EdgesOf ; NameOfConstraint dirichlet_e_homog ; } }
    EndIf
  }

  { Name Hcurl_lambda; Type Form1 ;
    BasisFunction { { Name sqh ; NameOfCoef vqh ; Function BF_Edge ;
  	Support Region[ {GammaScat} ] ; Entity EdgesOf[ All ] ; } }
    If (TM)
      Constraint { { NameOfCoef vqh ; EntityType EdgesOf ; NameOfConstraint dirichlet_e_homog ; } }
    EndIf
  }
  EndIf


    If(OSRC)
      { Name Hcurl_r; Type Form1;
	BasisFunction { { Name ser1; NameOfCoef eer1; Function BF_Edge; 
	    Support Region[{GammaInf}] ; Entity EdgesOf[All, Not {GammaScat, GammaC}]; } }
      } 
      For j In {1:NP_OSRC}
	{ Name Hgrad_rho~{j} ; Type Form0 ;
	  BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	      Support Region[{GammaInf}] ; Entity NodesOf[All, Not {GammaScat, GammaC}]; } }
	}
	{ Name Hcurl_phi~{j}; Type Form1;
	  BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
	      Support Region[{GammaInf}] ; Entity EdgesOf[All, Not {GammaScat, GammaC}]; } }
	}
      EndFor
    EndIf
    If(JFLee)
	{ Name Hgrad_rho ; Type Form0 ;
	  BasisFunction { { Name srh1; NameOfCoef erh1; Function BF_Node; 
	      Support Region[{GammaInf}] ; Entity NodesOf[All, Not {GammaScat, GammaC}]; } }
	}
	{ Name Hcurl_phi; Type Form1;
	  BasisFunction { { Name sph1; NameOfCoef eph1; Function BF_Edge; 
	      Support Region[{GammaInf}] ; Entity EdgesOf[All, Not {GammaScat, GammaC}]; } }
	}
    EndIf

}

////////////////////////
Formulation {

  { Name dirichlet_e ; Type FemEquation ;
    Quantity { 
      { Name e_aux ; Type Local ; NameOfSpace Hcurl_e; }
    }
    Equation {
      Galerkin { [ Dof{e_aux} , {e_aux} ] ;  
      	In GammaScat; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ -einc[], {e_aux} ] ;  
      	In GammaScat; Jacobian JSur ; Integration I1 ; }
    }
  }

  { Name dirichlet_e_ref ; Type FemEquation ;
    Quantity { 
      { Name e ; Type Local ; NameOfSpace Hcurl_e_ref; }
    }
    Equation {
      Galerkin { [ Dof{e} , {e} ] ; // Dummy formulation
      	In Omega ; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -eRef[], {e} ] ;  
      	In Omega ; Jacobian JVol ; Integration I1 ; }
    }
  }

  { Name maxwell_e ; Type FemEquation ;
    Quantity { 
      { Name e ; Type Local ; NameOfSpace Hcurl_e; }
      { Name lambda ; Type Local ; NameOfSpace Hcurl_lambda; }
      If(OSRC)
        { Name r; Type Local; NameOfSpace Hcurl_r;}
        For j In {1:NP_OSRC}
          { Name rho~{j}; Type Local; NameOfSpace  Hgrad_rho~{j};}
          { Name phi~{j}; Type Local; NameOfSpace  Hcurl_phi~{j};}
        EndFor
      EndIf
    }
    Equation {
      Galerkin { [ Dof{Curl e} , {Curl e} ] ;  
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k[]^2 * Dof{e} , {e} ] ;
	In Omega; Jacobian JVol ; Integration I1 ; }

      If (SILVER_MULLER)
        If (!Perpendicular)
	  If (TM || TE)
	    If (!SOURCE_DIRICHLET)
              Galerkin { [  -I[] * kInf[] * N[] /\ ( N[] /\ Dof{e} ) , {e} ]; // TM or TE -- FIXME: sign ?
	        In GammaScat; Jacobian JSur ; Integration I1 ; }
	      Galerkin { [ gIn[] , {e} ];
	        In GammaScat; Jacobian JSur ; Integration I1 ; }
	    EndIf

	    Galerkin { [  -I[]* kInf[] * N[] /\ ( N[] /\ Dof{e} ) , {e} ]; // TM or TE -- FIXME: sign ?
	      In GammaInf; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [ gOut[] , {e} ];
	      In GammaInf; Jacobian JSur ; Integration I1 ; }
          EndIf
        EndIf
      EndIf

	If(OSRC)
	  Galerkin { [ -Dof{r} , {e} ];
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [ gOut[] , {r} ];
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [ (Dof{e}), {r} ];
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [ al[]*Dof{d e} , {d r} ]; 
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [(I[] / k)*OSRC_C0[]{NP_OSRC,theta_branch}*Dof{r} , {r} ] ;
	    In GammaInf; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ (I[] / k )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}} , {d r} ] ;
	      In GammaInf ; Jacobian JSur; Integration I1; }
	    Galerkin { [ (I[] / k)*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}} , {r} ] ;
	      In GammaInf ; Integration I1; Jacobian JSur; }
	    Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}} , {d phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}} , {phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian  JSur; }
	    Galerkin { [ Dof{phi~{j}} , {phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [  - Dof{r} , {phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ Dof{rho~{j}} , {rho~{j}} ]; 
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ Dof{phi~{j}} , {d rho~{j}} ]; 
	      In GammaInf; Integration I1; Jacobian JSur; }
	  EndFor 
	EndIf

    }
  }

  mySign = -1;

  { Name maxwell_e_lag ; Type FemEquation ;
    Quantity { 
      { Name e ; Type Local ; NameOfSpace Hcurl_e_lag; }
      { Name lambda ; Type Local ; NameOfSpace Hcurl_lambda; }
      If(OSRC)
        { Name r; Type Local; NameOfSpace Hcurl_r;}
        For j In {1:NP_OSRC}
          { Name rho~{j}; Type Local; NameOfSpace  Hgrad_rho~{j};}
          { Name phi~{j}; Type Local; NameOfSpace  Hcurl_phi~{j};}
        EndFor
      EndIf
	If(JFLee)
	    { Name rho; Type Local; NameOfSpace  Hgrad_rho;}
	    { Name phi; Type Local; NameOfSpace  Hcurl_phi;}
	EndIf


    }
    Equation {
      Galerkin { [ Dof{Curl e} , {Curl e} ] ;  
	In Omega; Jacobian JVol ; Integration I1 ; }
      Galerkin { [ -k[]^2 * Dof{e} , {e} ] ;  
	In Omega; Jacobian JVol ; Integration I1 ; }


      If (SILVER_MULLER)
      If (!Perpendicular)
	If (TM || TE)
	  If (!SOURCE_DIRICHLET)
            Galerkin { [  -I[]* kDtN[] * N[] /\ ( N[] /\ Dof{e} ) , {e} ]; // TM or TE 
	      In GammaScat; Jacobian JSur ; Integration I1 ; }
	    Galerkin { [ gIn[] , {e} ];
	      In GammaScat; Jacobian JSur ; Integration I1 ; }
	  EndIf

	  Galerkin { [  -I[]* kDtN[] * N[] /\ ( N[] /\ Dof{e} ) , {e} ]; // TM or TE 
	    In GammaInf; Jacobian JSur ; Integration I1 ; }
	  Galerkin { [ gOut[] , {e} ];
	    In GammaInf; Jacobian JSur ; Integration I1 ; }
        EndIf
      EndIf
      EndIf

	If(OSRC)
	  Galerkin { [ -Dof{r} , {e} ];
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [ gOut[] , {r} ];
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [ (Dof{e}), {r} ];
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [ al[]*Dof{d e} , {d r} ]; 
	    In GammaInf; Integration I1; Jacobian JSur; }
	  Galerkin { [(I[] / kOsrc[])*OSRC_C0[]{NP_OSRC,theta_branch}*Dof{r} , {r} ] ;
	    In GammaInf; Integration I1; Jacobian JSur; }
	  For j In{1:NP_OSRC}
	    Galerkin { [ (I[] / kOsrc[] )*OSRC_Aj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}} , {d r} ] ;
	      In GammaInf ; Jacobian JSur; Integration I1; }
	    Galerkin { [ (I[] / kOsrc[])*OSRC_Aj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}} , {r} ] ;
	      In GammaInf ; Integration I1; Jacobian JSur; }
	    Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*al[]*Dof{d phi~{j}} , {d phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ OSRC_Bj[]{j,NP_OSRC,theta_branch}*be[]*Dof{d rho~{j}} , {phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian  JSur; }
	    Galerkin { [ Dof{phi~{j}} , {phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [  - Dof{r} , {phi~{j}} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ Dof{rho~{j}} , {rho~{j}} ]; 
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ Dof{phi~{j}} , {d rho~{j}} ]; 
	      In GammaInf; Integration I1; Jacobian JSur; }
	  EndFor 
	EndIf

	If(JFLee)
	    Galerkin { [  -mySign*I[]*kLee[]*Dof{phi} , {e} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
      
	    Galerkin { [ -mySign*Coef_Lee2[]*Dof{d rho} , {phi} ] ;
	      In GammaInf; Integration I1; Jacobian  JSur; }
	    Galerkin { [mySign*(kLee[]^2)*Dof{phi} , {phi} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [-mySign*(kLee[]^2)*Dof{e} , {phi} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ mySign*Coef_Lee1[]*Dof{d e} , {d phi} ] ;
	      In GammaInf; Integration I1; Jacobian JSur; }
    
	    Galerkin { [ mySign*Dof{rho} , {rho} ]; 
	      In GammaInf; Integration I1; Jacobian JSur; }
	    Galerkin { [ mySign*Dof{phi} , {d rho} ]; 
	      In GammaInf; Integration I1; Jacobian JSur; }
        EndIf


      If (SOURCE_DIRICHLET)
      // BC -- Lagrange
      Galerkin { [ Dof{lambda} , {e} ] ;  
	In GammaScat ; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ Dof{e} , {lambda} ] ;  
	In GammaScat ; Jacobian JSur ; Integration I1 ; }
      Galerkin { [ einc[] , {lambda} ] ;  
	In GammaScat ; Jacobian JSur ; Integration I1 ; }
      EndIf
    }
  }
}

Resolution {
  {Name maxwell;
    System { { Name A ; NameOfFormulation maxwell_e ; Type Complex; NameOfMesh "waveguide3d_simple.msh" ;} }
    // System { { Name B ; NameOfFormulation maxwell_g_source ; Type Complex; NameOfMesh "waveguide2d_simple.msh" ;} }
    Operation {
      // Generate[B] ; Solve[B] ;
      Generate[A] ; Solve[A] ;
      PostOperation[Full] ;
    }
  }

  {Name dirichlet_e;
    System { { Name B ; NameOfFormulation dirichlet_e ; DestinationSystem A ; Type Complex; NameOfMesh "waveguide3d_simple.msh" ;} }
    Operation { 
      Generate[B] ; Solve[B] ; TransferSolution[B] ;
    }
  }

  {Name maxwell_lag;
    System { { Name L ; NameOfFormulation maxwell_e_lag ; Type Complex; NameOfMesh "waveguide3d_simple.msh" ;} }
    Operation {
      Generate[L] ; Solve[L] ;
      PostOperation[Full_lag] ;

      If (SILVER_MULLER)
	Printf[" ****** Using SILVER-MULLER as ABC"];
      EndIf
      If (OSRC)
	Printf[" ****** Using OSRC as ABC"];
      EndIf
      If (JFLee)
	Printf[" ****** Using JFLee as ABC"];
      EndIf

    }
  }

  {Name maxwellRef;
    System { { Name A ; NameOfFormulation dirichlet_e_ref ; Type Complex; NameOfMesh "waveguide3d_simple.msh" ;} }
    Operation {
      Generate[A] ; Solve[A] ;
      PostOperation[Full_ref] ;
    }
  }
}

PostProcessing {
  { Name Full ; NameOfFormulation maxwell_e ;
    PostQuantity {
      If (TEM || TM)
	{ Name e ; Value { Term { [ {e} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      EndIf
      If (TE)
	{ Name h ; Value { Term { [ {e} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      EndIf
    }
  }
  { Name Full_ref ; NameOfFormulation dirichlet_e_ref ;
    PostQuantity {
      If (TEM || TM)
	{ Name e_ref ; Value { Term { [ {e} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      EndIf
      If (TE)
	{ Name h_ref ; Value { Term { [ {e} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
      EndIf
    }
  }
  { Name Full_lag ; NameOfFormulation maxwell_e_lag ;
    PostQuantity {
      { Name u_lag ; Value { Term { [ {e} ] ; In Region[ {Omega} ]; Jacobian JVol ; } } }
    }
  }
}

If (SILVER_MULLER)
fname = "u_SM.pos";
EndIf
If (OSRC)
fname = "u_OSRC.pos";
EndIf
If (JFLee)
fname = "u_JFLee.pos";
EndIf

PostOperation {
  { Name Full ; NameOfPostProcessing Full;
    Operation {
      If (TEM || TM)
	Print[ e, OnElementsOf Omega, File "u.pos"] ;
      EndIf
      If (TE)
	Print[ h, OnElementsOf Omega, File "u.pos"] ;
      EndIf
    }
  }
  { Name Full_ref ; NameOfPostProcessing Full_ref;
    Operation {
      If (TEM || TM)
	Print[ e_ref, OnElementsOf Omega, File "u_ref.pos"] ;
      EndIf
      If (TE)
	Print[ h_ref, OnElementsOf Omega, File "u_ref.pos"] ;
      EndIf
    }
  }
  { Name Full_lag ; NameOfPostProcessing Full_lag;
    Operation {
      Print[ u_lag, OnElementsOf Omega, File fname] ;
    }
  }
}

