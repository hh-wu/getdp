
u = 1.e-6;
DefineConstant[
 l = {500 *u, Name "Input/Geometry/0Beam length [m]"},
 a = {50 *u, Name "Input/Geometry/1Beam width [m]"},
 b = {3 *u, Name "Input/Geometry/2Beam thickness [m]"},
 f = {15 *u, Name "Input/Geometry/3Support length [m]"},
 e2 = {2 *u, Name "Input/Geometry/4Support width [m]"},
 d = {0.224 * l - 0.5 * e2, Name "Input/Geometry/5Support position [m]"},
 pInOpt = "Optimization/"
];

BEAM=1;
CONDUCTOR_LEFT=2;
CONDUCTOR_RIGHT=3;
VOLTAGE_LEFT=4;
VOLTAGE_RIGHT=5;
