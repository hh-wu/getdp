
u = 1.e-6;
DefineConstant[
 l = {500 *u, Label "Beam length [m]", Path "Input/Geometry/0"},
 a = {50 *u, Label "Beam width [m]", Path "Input/Geometry/1"},
 b = {3 *u, Label "Beam thickness [m]", Path "Input/Geometry/2"},
 f = {15 *u, Label "Support length [m]", Path "Input/Geometry/3"},
 e2 = {2 *u, Label "Support width [m]", Path "Input/Geometry/4"},
 d = {0.224 * l - 0.5 * e2, Label "Support position [m]", Path "Input/Geometry/5"}
];

BEAM=1;
CONDUCTOR_LEFT=2;
CONDUCTOR_RIGHT=3;
VOLTAGE_LEFT=4;
VOLTAGE_RIGHT=5;
CLAMP_LEFT=6;
CLAMP_RIGHT=7;
