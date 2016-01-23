DefineConstant[
  Scaling = {1000,
    Help Str["All geometrical dimensions are multiplied by this factor",
             "(Scaling = 1 corresponds to geometrical dimensions in meters),",
             "and material characteristics modified accordingly.",
             "Setting dimensions e.g. in mm (Scaling = 1000) will improve",
             "numerical robustness by avoiding overflows in the power law",
             "for large values of the exponent (e.g. n > 30)."],
    Name "Input/1Geometry/0Scaling factor"},
  Preset = {(TotalMemory <= 2048) ? 1 : 0, Highlight "Blue",
    Choices{
      0="None",
      1="1 round filament (AK benchmark)",
      2="2 round filaments",
      3="36 round filaments (GE benchmark)",
      4="1 rectangular tape",
      5="2 rectangular tapes"},
    Name "Input/1Geometry/0Preset configuration" },
  NumLayers = {
    (Preset == 3) ? 3 :
    1,
    ReadOnly Preset,
    Name "Input/1Geometry/Layers"}
];

For i In {1:NumLayers}
  DefineConstant[
    NumFilaments~{i} = {
      (Preset == 3 && i == 1) ? 6 :
      (Preset == 3 && i == 2) ? 12 :
      (Preset == 3 && i == 3) ? 18 :
      (Preset == 2 || Preset == 5) ? 2 :
      (Preset == 1 || Preset == 4) ? 1 :
      2 * i,
      Min 1, Max 100, Step 1, ReadOnly Preset,
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
