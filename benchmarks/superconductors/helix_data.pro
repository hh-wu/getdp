DefineConstant[
  NumLayers = {1,
    Name "Input/Geometry/Layers"}
];

For i In {1:NumLayers}
  DefineConstant[
    NumFilaments~{i} = {2, Min 1, Max 100, Step 1,
      Name Sprintf["Input/Geometry/{Layer %g/Filaments", i]}
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

scaling = 1;
