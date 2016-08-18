Include "magnetometer_data.geo";

Solver.AutoShowLastStep=0;

DefineConstant[ s = {1, Name "Input/Geometry/00Mesh size factor",
                     Min 0.1, Max 2, Step 0.1} ];
n1_1 = (10*s >= 1) ? 10*s : 1;
n1_2 = (3*s >= 1) ? 3*s : 1;
n1_3 = (20*s >= 1) ? 20*s : 1;
n2 = (3*s >= 1) ? 3*s : 1; // contacts
n3 = (10*s >= 1) ? 10*s : 1; // beam
n5 = (3*s >= 1) ? 3*s : 1; // along thickness

Point(1) = {0, 0, 0};
Point(2) = {d, 0, 0};
Point(3) = {d + e2, 0, 0};
Point(4) = {d + e2 + l - 2*d - 2 * e2, 0, 0};
Point(5) = {l - d, 0, 0};
Point(6) = {l, 0, 0};
Line(1) = {1, 2};
Line(2) = {2, 3};
Line(3) = {3, 4};
Line(4) = {4, 5};
Line(5) = {5, 6};

Transfinite Line{1,5} = n1_1;
Transfinite Line{2,4} = n1_2;
Transfinite Line{3  } = n1_3;

l1[] = Extrude {0, -f, 0} { Line{2,4}; Layers{n2}; Recombine;          };
l2[] = Extrude {0, a, 0} { Line{1:5}; Layers{n3}; Recombine;           };
l3[] = Extrude {0, f, 0} { Line{l2[4], l2[12]}; Layers{n2}; Recombine; };

Extrude {0, 0, b}
{
  Surface{17, 21, 25, 29, 33}; Layers{n5}; Recombine;
}

Extrude {0, 0, b}
{
  Surface{9, 37, 41, 13}; Layers{n5}; Recombine;
}

Physical Volume(BEAM) = {1, 2, 3, 4, 5};
Physical Volume(CONDUCTOR_LEFT) = {6, 7};
Physical Volume(CONDUCTOR_RIGHT) = {8, 9};
Physical Surface(VOLTAGE_LEFT) = {168, 190};
Physical Surface(VOLTAGE_RIGHT) = {234, 212};

/* FIXME: show how we could select the mode ti visuzalize interactively without
   going through the whole option menu
DefineConstant[
  ts = { View.TimeStep, Name "Selected mode", Choices {0="Eigen mode 0", 1="Eigen mode 1"},
    AutoCheck 0, GmshOption "View.TimeStep"
  }
];
*/

// test for sensitivity analysis
DefineConstant[
  SensitivityParameter = {"Input/Geometry/0Beam length [m]",
    Choices{
      "Input/Geometry/1Beam width [m]",
      "Input/Geometry/2Beam thickness [m]",
      "Input/Geometry/3Support length [m]",
      "Input/Geometry/4Support width [m]",
      "Input/Geometry/5Support position [m]"
    },
    Name StrCat(pInOpt, "Parameter to perturb")},
  StructuredGrid = {1,
    Name StrCat(pInOpt,"Structured grid?"),Visible 0}
];
Merge "perturb.geo";
