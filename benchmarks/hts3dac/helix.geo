
mm = 1e-3;
DefineConstant[
  MatrixRadius = {0.4*mm, Name "Radius of conductive matrix"},
  NumLayers = {2, Name "Number of filament layers"},
  FilamentRadius = {0.04*mm, Name "Radius of filements"},
  TwistPitch = {5*mm, Name "Twist pitch"}
];

For i In {1:NumLayers}
  DefineConstant[
    LayerRadius~{i} = { (i+1) * MatrixRadius / (NumLayers + 1) ,
      Name Sprintf["Radius of layer %g", i]},
    NumFilaments~{i} = {4, Name Sprintf["Number of filaments in layer %g", i]}
  ];
EndFor

For i In {1:NumLayers}
  For j In {1:NumFilaments~{i}}
    theta = 2*Pi / NumFilaments~{i};

    p1 = newp; Point(p1) = { LayerRadius~{i} * Cos[] };

  EndFor
EndFor
