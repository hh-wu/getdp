DefineConstant[
  Scaling = {1e3,
    Help Str["All geometrical dimensions are multiplied by this factor",
             "(Scaling = 1 corresponds to geometrical dimensions in meters),",
             "and material characteristics modified accordingly.",
             "Setting dimensions e.g. in mm (Scaling = 1e3) will improve",
             "numerical robustness by avoiding overflows in the power law",
             "for large values of the exponent (e.g. n > 30)."],
    Name "Input/1Geometry/0Scaling factor"},
  NumLayers = {1,
    Name "Input/1Geometry/Layers"}
];

For i In {1:NumLayers}
  DefineConstant[
    NumFilaments~{i} = {2 * i, Min 1, Max 100, Step 1,
      Name Sprintf["Input/1Geometry/{Layer %g/Filaments", i]}
  ];
EndFor

// i = layer, j = filament in layer
FILAMENT = 30000; // + 1000 * i + j
BND_FILAMENT = 20000; // + 1000 * i + j for bottom
                      // + 1100 * i + j for top
                      // + 1200 * i + j for sides
MATRIX = 300000;
BND_MATRIX = 200000;
AIR = 310001;
BND_AIR = 210001;
