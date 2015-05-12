// Switched Reluctance Motor Gmsh geometry file (2D)

Include "srm_data.geo" ;

Solver.AutoShowLastStep = 1;
Mesh.Algorithm = 1 ;

// Some general settings
Lc = 7.5e-4/2; // base characteristic length

If(TotalMemory <= 1024)
  Lc *= 2;
EndIf


//------------------------------------------------------------
//------------------------------------------------------------

// Create origin
pAxe = newp ; Point(pAxe) = { 0. , 0. , 0., 3*Lc} ;


Include "srm_stator.geo";
Include "srm_rotor.geo";

//-------------------------------------------------------------------------------
// For nice visualization
//-------------------------------------------------------------------------------

Hide { Point{ Point '*' }; }
Hide { Line{ Line '*' }; }
Show { Line{ linStator[], linRotor[] }; }

Physical Line(NICEPOS) = {linStator[],linRotor[] } ;

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

// test for sensitivity analysis
DefineConstant[
  SensitivityParameter = { StrCat[pp, "1Stator/Pole opening angle [deg]"],
    Choices{
      StrCat[pp, "1Stator/Pole opening angle [deg]"],
      StrCat[pp, "1Stator/Outer radius [m]"],
      StrCat[pp, "1Stator/Inner radius [m]"],
      StrCat[pp, "1Stator/Yoke width [m]"],
      StrCat[pp, "2Rotor/Pole opening angle [deg]"],
      StrCat[pp, "2Rotor/Inner radius [m]"],
      StrCat[pp, "2Rotor/Shaft radius [m]"]
    },
    Name "Sensitivity/Parameter to perturb" }
];
Merge "perturb.geo";
