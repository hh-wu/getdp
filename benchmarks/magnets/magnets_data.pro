DefineConstant[
  NumMagnets = {2, Min 1, Max 20, Step 1, Name "Parameters/0Number of magnets"}
];
mm = 1.e-3;

For i In {1:NumMagnets}
  DefineConstant[
    X~{i} = {0, Min -100*mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/0X position [m]", i) },
    Y~{i} = { (i-1)*60*mm, Min -100*mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/0Y position [m]", i) },
    Z~{i} = {0, Min -100*mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/0Z position [m]", i) },

    M~{i} = {0, Choices{0="Cylinder",1="Cube"},
      Name Sprintf("Parameters/Magnet %g/00Shape", i)},

    R~{i} = {20*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/1Radius [m]", i),
      Visible (M~{i} == 0) },
    L~{i} = {50*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/1Length [m]", i),
      Visible (M~{i} == 0) },

    Lx~{i} = {50*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/1X length [m]", i),
      Visible (M~{i} == 1) },
    Ly~{i} = {50*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/1Y length [m]", i),
      Visible (M~{i} == 1) },
    Lz~{i} = {50*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/1Z length [m]", i),
      Visible (M~{i} == 1) },

    Rx~{i} = {0, Min -Pi, Max Pi, Step Pi/180,
      Name Sprintf("Parameters/Magnet %g/2X rotation [rad]", i) },
    Ry~{i} = {0, Min -Pi, Max Pi, Step Pi/180,
      Name Sprintf("Parameters/Magnet %g/2Y rotation [rad]", i) },
    Rz~{i} = {0, Min -Pi, Max Pi, Step Pi/180,
      Name Sprintf("Parameters/Magnet %g/2Z rotation [rad]", i) }
  ];
EndFor
