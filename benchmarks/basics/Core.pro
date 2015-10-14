/* -------------------------------------------------------------------
   File "Core.pro"

   This file defines the problem dependent data structures for the
   static core-inductor problem.
   The ferromagnetic core can be modelled with a linear or a saturable
   constitutive rlationship (Flag_NL).
   
   To compute the solution: 
       getdp Core -msh Core.msh -solve Magsta_a

   To compute post-results: 
       getdp Core -msh Core.msh -pos Postpro

   Interactively run the model with Onelab:
       gmsh Core.pro
   ------------------------------------------------------------------- */

Include "Core_data.pro";

// Onelab (external) model parameters are defined
// with DefineNumber[] and DefineString[] statements.
// Internal parameters are defined with a plain "Name = Value;" statement. 

Flag_Axisymmetry = 
  DefineNumber[ 1, Name "Geometry/11Axial symmetry", 
		Choices{0,1}];
Flag_Infinity = 
  DefineNumber[ 1, Name "Geometry/12Use infinite transformation",
		Choices{0,1}];
Flag_Degree = 
  DefineNumber[ 0, Name "Geometry/13Use degree 2 (hierarch.)",
                Choices{0,1}];

Current = 
  DefineNumber[10, Name "Input/Source/Current [A]", Min 10, Max 100, Step 10];
NbrTurns = 
  DefineNumber[1000, Name "Input/Source/Number of turns"];


Flag_NL = 
  DefineNumber[ 1, Name "Input/Materials/Saturable core", Choices{0,1}];
n = DefineNumber[3, Name "Input/Materials/n"];
tolerance_NL = 
  DefineNumber[1e-6, Name "Input/Materials/Tolerance", Visible Flag_NL];

Group {
  // Give explicit labels to the regions defined in the .geo file 
  Core   = Region[ 102 ];
  Ind    = Region[ 103 ];
  AirInf = Region[ 111 ];
  Air    = Region[ 101 ];   
  AirInf = Region[ 111 ];

  Ht0 = Region[ 1100 ];  
  Bn0 = Region[ 1101 ];
  Inf = Region[ 1102 ];

  // Attribute those labels to the template (user-defined) groups
  // This attribution might appear a bit tautological in tutorial this case
  // where there is nearly a 1-1 correspondence between template groups
  // and geometrical regions.
  // It will not be the case in general.

  DomainSource_Mag  = Region[ { Ind } ];
  If(!Flag_NL)
    DomainLinCore_Mag = Region[ { Core } ];
    DomainSaturCore_Mag = Region[ {} ];
  EndIf
  If(Flag_NL)
    DomainLinCore_Mag = Region[ {} ];
    DomainSaturCore_Mag = Region[ { Core } ];
  EndIf

  DomainAir_Mag     = Region[ { Air, AirInf, Ind } ];
  BoundaryInf       = Region[ { Inf } ];
  BoundaryBn0       = Region[ { Bn0 } ];

  DomainInf = Region[ {} ];
  If (Flag_Infinity)
    DomainInf += Region[ { AirInf } ];
  EndIf
}

Function {
  mu0 = 4.e-7 * Pi;
  murCore = 100.;
  If (!Flag_NL)
    nu[ Core ]  = 1. / (murCore * mu0);
  EndIf
  If (Flag_NL)
    // saturation law h(b) = ( 1 + coef * mod(b)^2n )/(mu0 mur) * b
    nu[ Core ] = ( 1. + SquNorm[$1]^n)/(mu0 * murCore)  ;
    dhdb[ Core ] = 
      ( 1. + SquNorm[$1]^n)/(mu0 * murCore) * TensorDiag[1, 1, 1]
      + 2./(mu0 * murCore) * n * SquNorm[$1]^(n-1) * SquDyadicProduct[$1] ;
    dhdb_NL[ Core ] = 
      2./(mu0 * murCore) * n * SquNorm[$1]^(n-1) * SquDyadicProduct[$1] ;
  EndIf

  SurfCoil[ Ind ] = SurfaceArea[]{103} ;
  Current[ Ind ] = Current; //this function for the PostOperation "Inductance"
  js[ Ind ] = Vector[ 0, 0, Current*NbrTurns/SurfCoil[] ];
}

templateDir = "./templates/"; // path to getDP basics/template directory
Include StrCat[templateDir, "MagSta_a.pro"];

e = 1.e-6;
p1 = {e,0.02,0};
p2 = {0.12,0.02,0};

PostOperation {
  { Name Postpro; NameOfPostProcessing MagSta_a;
    Operation {
      Print[ modb,  OnElementsOf Domain_Mag, File "modb.pos"];
      //Print[ nu,  OnElementsOf Core, File "nu.pos" ];
      Print[ az, OnElementsOf Domain_Mag, File "a.pos" ];
      Print[ modjs, OnPoint{ dxCore + dist + e,e,0}, 
	     SendToServer "Results/1Current density",  Color "Red"];
      Print[ modb, OnPoint{e,e,0}, 
	     SendToServer "Results/2Bmax",  Color "Red"];
      Print[ Inductance[Ind], OnGlobal, Format TimeTable,
	     SendToServer "Results/3Inductance",  Color "Red",
	     StoreInVariable $Flux];
      //Print[ b, OnLine{{List[p1]}{List[p2]}} {1000}, File "k_a.pos" ];
    }
  }
}

// Tell Gmsh which GetDP commands to execute when running the metamodel.
DefineConstant[
  R_ = {"MagSta_a", Name "GetDP/1ResolutionChoices", Visible 0},
  P_ = {"Postpro", Name "GetDP/2PostOperationChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0}
];

