DefineConstant[
  model = {2, Choices{2="2D", 3="3D"}, GmshOption "Reset",
    Name "Parameters/0Model"}
];

If(model == 2)
  Include "2d.geo";
EndIf

If(model == 3)
  Include "3d.geo";
EndIf
