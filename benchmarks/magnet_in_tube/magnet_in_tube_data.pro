// falling magnet
mm = 1e-3;

geop ='{0Geometrical data/';
femp ='{1FEM data/';

DefineConstant[
  r = {5,  Name StrCat[geop,'00magnet radius'], Units 'mm', Closed }
  h = {10, Name StrCat[geop,'00magnet height'], Units 'mm'}
  density = {7400, Name StrCat[femp,'00magnet density'], Units 'kg/m³'}
  BR = {1.4, Name StrCat[femp,'01remanent flux density'], Units 'T'}
  ri = {6, Name StrCat[geop,'10tube outer radius'], Units 'mm'}
  ro = {8, Name  StrCat[geop,'11tube inner radius'], Units 'mm'}
  ht = {h*5, Name StrCat[geop,'12length tube (infinite)'], Units 'mm'}
  rext0 = {20, Name StrCat[geop,'20outer boundary radius'], Units 'mm'}
];

r = r*mm;  h=h*mm;
ri= ri*mm; ro=ro*mm;
ht= ht*mm; rext0=rext0*mm;

gravity=9.8;
mass = density*(Pi*r^2*h);

// Characteristic lengths
lcm = r/5;
lct = (ro-ri)/5;
lca = lcm*4;

str_disp = '2d_y'; // vertical displacement [m]
str_vel  = '3v_y'; // vertical velocity [m\s]
str_acc  = '4a_y'; // vertical acceleration [m\s^2]
str_for  = '40F_y'; // vertical magnetic force [N]

color_time_var="Ivory";

displacementY = 0.;

//==============================
// Physical numbers
//==============================

MAGNET =1000;
SKINMAGNET=1001;

TUBE = 2000;
AIR = 3000;

AXIS = 111;
OUT_BND = 222;
