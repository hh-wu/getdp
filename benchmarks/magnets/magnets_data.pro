// Model created on Feb 25 2015 by C. Geuzaine

DefineConstant[
  NumMagnets = {2, Name "Parameters/0Number of magnets"}
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
    R~{i} = {20*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/0Radius [m]", i) },
    L~{i} = {50*mm, Min mm, Max 100*mm, Step mm,
      Name Sprintf("Parameters/Magnet %g/0Length [m]", i) },
    Rx~{i} = {0, Min -Pi, Max Pi, Step Pi/180,
      Name Sprintf("Parameters/Magnet %g/1X rotation [rad]", i) },
    Ry~{i} = {0, Min -Pi, Max Pi, Step Pi/180,
      Name Sprintf("Parameters/Magnet %g/1Y rotation [rad]", i) },
    Rz~{i} = {0, Min -Pi, Max Pi, Step Pi/180,
      Name Sprintf("Parameters/Magnet %g/1Z rotation [rad]", i) }
  ];
EndFor
