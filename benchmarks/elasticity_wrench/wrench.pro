/* -------------------------------------------------------------------

  $ gmsh wrench.pro

   ------------------------------------------------------------------- */

Include "wrench_data.pro";

DefineConstant[ Mec = 1 ]; // Problem number

Young = 1e9 * 
  DefineNumber[ 200, Name "Material/Young modulus [GPa]"];
Poisson = 
  DefineNumber[ 0.3, Name "Material/Poisson coefficient []"];
AppliedForce = 
  DefineNumber[ 100, Name "Material/Applied force [N]"];

// Analytical solution: 
// Deflection = PL^3/(3EI)
// with I = Width^3*Thickness/12
Deflection = DefineNumber[
			  4*AppliedForce*((LLength-0.018)/Width)^3/(Young*Thickness)*1000, 
      Name "Geometry/Deflection (analytical) [mm]", ReadOnly 1];


Group {
  // Give explicit labels to the regions defined in the .geo file 
  Wrench = Region[ 1 ];
  Grip = Region[ 2 ];
  Force = Region[ 3 ];
  // Attribute those labels to the template (user-defined) groups
  Vol_Elast~{Mec} = Region[ { Wrench } ];
  Sur_Clamp~{Mec} = Region[ { Grip } ];
  Sur_Force~{Mec} = Region[ { Force } ];
}

Function {
  E[] = Young;
  nu[] = Poisson;

  If(Model3D)
    pressure_y[] = AppliedForce/SurfaceArea[];
  Else
    pressure_y[] = AppliedForce/(SurfaceArea[]*Thickness);
  EndIf
  pressure_x[]=0;
  pressure_z[]=0;
}


Flag_degree2 = 
  DefineNumber[ 0, Name "Geometry/Use degree 2 (hierarch.)", Choices{0,1}, Visible 1];
DefineConstant[ FE_Degree~{Mec} = Flag_degree2 ? 2 : 1,
		type_Dimension~{Mec} = Model3D ? 3 : 2,
		Flag_EPC = 1];

iP = Mec; Include "Lib_Elast_u.pro";


PostOperation {
  { Name pos; NameOfPostProcessing Elast_u;
    Operation {
      If(Flag_degree2 == 0) 
	Print[ sig_xx, OnElementsOf Wrench, File "sigxx.pos" ];
      Else
	Print[ sig_xx, OnElementsOf Wrench, File "sigxx2.pos" ];
      EndIf
      Print[ sig_yy, OnElementsOf Wrench, File "sigyy.pos" ];
      Print[ sig_xy, OnElementsOf Wrench, File "sigxy.pos" ];
      Print[ u, OnElementsOf Wrench, File "u.pos" ];
    }
  }
}


// Tell Gmsh which GetDP commands to execute when running the model.
DefineConstant[
  R_ = {"Elast_u", Name "GetDP/1ResolutionChoices", Visible 0},
  P_ = {"pos", Name "GetDP/2PostOperationChoices", Visible 0},
  C_ = {"-solve -pos -v2", Name "GetDP/9ComputeCommand", Visible 0}
];

