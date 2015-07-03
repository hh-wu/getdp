Include "helix_data.pro";

mm = 1e-3;
DefineConstant[
  AirRadius = {1, Name "Radius of air domain [mm]"},
  MatrixRadius = {0.56419, Name "Radius of conductive matrix [mm]"},
  FilamentRadius = {0.1784, Name "Radius of filements [mm]"},
  TwistPitch = {4, Name "Twist pitch [mm]"},
  TwistFraction = {1/100, Min 1/16, Max 2, Step 1/4, Name "Twist fraction in model"},
  LcFilament = {FilamentRadius / 10, Name "Mesh size on filaments [mm]"},
  LcMatrix = {MatrixRadius / 5, Name "Mesh size on matrix boundary [mm]"},
  LcAir = {AirRadius / 5, Name "Mesh size on air boundary [mm]"}
];

For i In {1:NumLayers}
  DefineConstant[
    LayerRadius~{i} = {
      MatrixRadius / 2,
      //(i+1) * MatrixRadius / (NumLayers + 2) ,
      Min FilamentRadius, Max MatrixRadius, Step 1e-2,
      Name Sprintf["Radius of layer %g [mm]", i]},
    StartAngleFilament~{i} = {0, Min 0, Max 2*Pi, Step 2*Pi/100,
      Name Sprintf["Starting angle for layer %g [rad]", i]}
  ];
EndFor

Geometry.ExtrudeSplinePoints = 20;
Geometry.Points = 0;
sf[] = {}; // surfaces of all filaments
llf_0[] = {}; // line loops of bottom filament intersects
llf_1[] = {}; // line loops of top filament intersects
For i In {1:NumLayers}
  For j In {1:NumFilaments~{i}}
    theta = j * 2*Pi / NumFilaments~{i} + StartAngleFilament~{i};
    xr = LayerRadius~{i} * mm * Cos[theta];
    yr = LayerRadius~{i} * mm * Sin[theta];
    p0 = newp; Point(p0) = {xr, yr, 0, LcFilament*mm};
    p1 = newp; Point(p1) = {xr+FilamentRadius*mm, yr, 0, LcFilament*mm};
    p2 = newp; Point(p2) = {xr, yr+FilamentRadius*mm, 0, LcFilament*mm};
    p3 = newp; Point(p3) = {xr-FilamentRadius*mm, yr, 0, LcFilament*mm};
    p4 = newp; Point(p4) = {xr, yr-FilamentRadius*mm, 0, LcFilament*mm};
    l1 = newl; Circle(l1) = {p1, p0, p2};
    l2 = newl; Circle(l2) = {p2, p0, p3};
    l3 = newl; Circle(l3) = {p3, p0, p4};
    l4 = newl; Circle(l4) = {p4, p0, p1};
    ll1 = newll; Line Loop(ll1) = {l1, l2, l3, l4};
    s1 = news; Plane Surface(s1) = {ll1};
    llf_0[] += ll1;
    Physical Surface(Sprintf("Filament bottom boundary (%g in layer %g)", j, i),
                     BND_FILAMENT + 1000 * i + j) = {s1}; // bottom
    splits = (4 * TwistFraction) < 1 ? 1 : 4 * TwistFraction; // heuristics
    v[] = {};
    s[] = {};
    tmp[] = {s1};
    For k In {1:splits}
      tmp[] = Extrude {{0,0,TwistPitch*mm / splits * TwistFraction},
        {0,0,1} , {0,0,0} , 0* 2*Pi / splits * TwistFraction} {
        Surface{ tmp[0] }; Layers{1};
      };
      v[] += tmp[1];
      s[] += tmp[{2:5}];
    EndFor
    Physical Surface(Sprintf("Filament top boundary (%g in layer %g)", j, i),
                     BND_FILAMENT + 1100 * i + j) = tmp[0]; // top
    Physical Surface(Sprintf("Filament lateral boundary (%g in layer %g)", j, i),
                     BND_FILAMENT + 1200 * i + j) = s[]; // sides
    Physical Volume(Sprintf("Filament volume (%g in layer %g)", j, i),
                    FILAMENT + 1000 * i + j) = v[];
    sf[] += s[];
    ll2 = newll; Line Loop(ll2) = Boundary{ Surface{tmp[0]}; };
    llf_1[] += ll2;
  EndFor
EndFor

For i In {0:1}
  z = i*TwistPitch*mm * TwistFraction;
  p0~{i} = newp; Point(p0~{i}) = {0, 0, z, LcMatrix*mm};
  p1~{i} = newp; Point(p1~{i}) = {MatrixRadius*mm, 0, z, LcMatrix*mm};
  p2~{i} = newp; Point(p2~{i}) = {0, MatrixRadius*mm, z, LcMatrix*mm};
  p3~{i} = newp; Point(p3~{i}) = {-MatrixRadius*mm, 0, z, LcMatrix*mm};
  p4~{i} = newp; Point(p4~{i}) = {0, -MatrixRadius*mm, z, LcMatrix*mm};
  l1~{i} = newl; Circle(l1~{i}) = {p1~{i}, p0~{i}, p2~{i}};
  l2~{i} = newl; Circle(l2~{i}) = {p2~{i}, p0~{i}, p3~{i}};
  l3~{i} = newl; Circle(l3~{i}) = {p3~{i}, p0~{i}, p4~{i}};
  l4~{i} = newl; Circle(l4~{i}) = {p4~{i}, p0~{i}, p1~{i}};
  ll1~{i} = newll; Line Loop(ll1~{i}) = {l1~{i}, l2~{i}, l3~{i}, l4~{i}};
  s1~{i} = news; Plane Surface(s1~{i}) = {ll1~{i}, llf~{i}[]};

  p11~{i} = newp; Point(p11~{i}) = {AirRadius*mm, 0, z, LcAir*mm};
  p12~{i} = newp; Point(p12~{i}) = {0, AirRadius*mm, z, LcAir*mm};
  p13~{i} = newp; Point(p13~{i}) = {-AirRadius*mm, 0, z, LcAir*mm};
  p14~{i} = newp; Point(p14~{i}) = {0, -AirRadius*mm, z, LcAir*mm};
  l11~{i} = newl; Circle(l11~{i}) = {p11~{i}, p0~{i}, p12~{i}};
  l12~{i} = newl; Circle(l12~{i}) = {p12~{i}, p0~{i}, p13~{i}};
  l13~{i} = newl; Circle(l13~{i}) = {p13~{i}, p0~{i}, p14~{i}};
  l14~{i} = newl; Circle(l14~{i}) = {p14~{i}, p0~{i}, p11~{i}};
  ll11~{i} = newll; Line Loop(ll11~{i}) = {l11~{i}, l12~{i}, l13~{i}, l14~{i}};
  s11~{i} = news; Plane Surface(s11~{i}) = {ll11~{i}, ll1~{i}};
EndFor
l1 = newl; Line(l1) = {p1_0, p1_1};
l2 = newl; Line(l2) = {p2_0, p2_1};
l3 = newl; Line(l3) = {p3_0, p3_1};
l4 = newl; Line(l4) = {p4_0, p4_1};
ll1 = newll; Line Loop(ll1) = {l1_0, l2, -l1_1, -l1};
s1 = news; Ruled Surface(s1) = {ll1};
ll2 = newll; Line Loop(ll2) = {l2_0, l3, -l2_1, -l2};
s2 = news; Ruled Surface(s2) = {ll2};
ll3 = newll; Line Loop(ll3) = {l3_0, l4, -l3_1, -l3};
s3 = news; Ruled Surface(s3) = {ll3};
ll4 = newll; Line Loop(ll4) = {l4_0, l1, -l4_1, -l4};
s4 = news; Ruled Surface(s4) = {ll4};
sl1 = newsl; Surface Loop(sl1) = {s1, s2, s3, s4, s1_0, s1_1, sf[]};
v1 = newv; Volume(v1) = {sl1};

Physical Volume("Matrix", MATRIX) = v1;
Physical Surface("Matrix lateral boundary",  BND_MATRIX) = {s1, s2, s3, s4};
Physical Surface("Matrix bottom boundary", BND_MATRIX + 1) = {s1_0};
Physical Surface("Matrix top boundary", BND_MATRIX + 2) = {s1_1};

l11 = newl; Line(l11) = {p11_0, p11_1};
l12 = newl; Line(l12) = {p12_0, p12_1};
l13 = newl; Line(l13) = {p13_0, p13_1};
l14 = newl; Line(l14) = {p14_0, p14_1};
ll11 = newll; Line Loop(ll11) = {l11_0, l12, -l11_1, -l11};
s11 = news; Ruled Surface(s11) = {ll11};
ll12 = newll; Line Loop(ll12) = {l12_0, l13, -l12_1, -l12};
s12 = news; Ruled Surface(s12) = {ll12};
ll13 = newll; Line Loop(ll13) = {l13_0, l14, -l13_1, -l13};
s13 = news; Ruled Surface(s13) = {ll13};
ll14 = newll; Line Loop(ll14) = {l14_0, l11, -l14_1, -l14};
s14 = news; Ruled Surface(s14) = {ll14};
sl11 = newsl; Surface Loop(sl11) = {s11, s12, s13, s14, s11_0, s11_1, s1, s2, s3, s4};
v11 = newv; Volume(v11) = {sl11};

Physical Volume("Air", AIR) = v11;
Physical Surface("Air lateral boundary", BND_AIR) = {s11, s12, s13, s14};
Physical Surface("Air bottom boundary", BND_AIR + 1) = {s11_0};
Physical Surface("Air top boundary", BND_AIR + 2) = {s11_1};

// Cohomology computation for the T-Omega method
Cohomology(1) {{AIR, BND_MATRIX},{}};

General.ExpertMode = 1;
Mesh.Optimize = 1;