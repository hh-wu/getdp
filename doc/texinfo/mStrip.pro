/* -------------------------------------------------------------------
   File "mStrip.pro"

   This file defines the problem dependent data structures for the
   microstrip problem.
   
   To compute the solution: 
       getdp mStrip -solve EleSta_v

   To compute post-results:
       getdp mStrip -pos Map
    or getdp mStrip -pos Cut
   ------------------------------------------------------------------- */

Group {
   
  /* Let's start by defining the interface (i.e. elementary groups)
     between the mesh file and GetDP (no mesh object is defined, so 
     the default mesh will be assumed to be in GMSH format and located 
     in "mStrip.msh") */

  Air = Region[101]; Diel1 = Region[111];
  Ground = Region[120]; Line = Region[121]; 
  SurfInf = Region[130];

  /* We can then define a global group (used in "EleSta_v.pro",
     the file containing the function spaces and formulations) */

  DomainCC_Ele = Region[{Air, Diel1}];

}

Function {

  /* The relative permittivity (needed in the formulation) is piecewise
     defined in elementary groups */

  epsr[Air] = 1.;
  epsr[Diel1] = 9.8;

}

Constraint {

  /* Now, some Dirichlet conditions are defined. The name 
     'ElectricScalarPotential' refers to the constraint name given in
     the function space */

  { Name ElectricScalarPotential; Type Assign;
    Case {
      { Region Region[{Ground, SurfInf}]; Value 0.; }
      { Region Line; Value 1.e-3; }
    }
  }

}

/* The formulation used and its tools, considered as being 
   in a black box, can now be included */

Include "Jacobian_Lib.pro"
Include "Integration_Lib.pro"
Include "EleSta_v.pro"

/* Finally, we can define some operations to output results */

e = 1.e-7;

PostOperation {
  { Name Map; NameOfPostProcessing EleSta_v;
     Operation {
       Print [ v, OnElementsOf DomainCC_Ele, File "mStrip_v.pos" ];
       Print [ e, OnElementsOf DomainCC_Ele, File "mStrip_e.pos" ];
     }
  }
  { Name Cut; NameOfPostProcessing EleSta_v;
     Operation {
       Print [ e, OnLine {{e,e,0}{10.e-3,e,0}} {500}, File "Cut_e" ];
     }
  }

}
