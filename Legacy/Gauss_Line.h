// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

/* Please change the MAX_LINE_POINTS in Quadrature.h if you extend
   this list, in order for the Gauss-Legendre rules to be
   automatically updated. */

/* 1 integration point */

static double lx1[1]={
  0.000000000000000e+00};
static double lp1[1]={
  2.000000000000000e+00};

/* 2 integration points */

static double lx2[2]={
  -5.773502691896257e-01, 5.773502691896257e-01};
static double lp2[2]={
  1.000000000000000e+00, 1.000000000000000e+00};

/* 3 integration points */

static double lx3[3]={
  -7.745966692414834e-01, 0.000000000000000e+00, 7.745966692414834e-01};
static double lp3[3]={
  5.555555555555552e-01, 8.888888888888888e-01, 5.555555555555552e-01};

/* 4 integration points */

static double lx4[4]={
  -8.611363115940526e-01,-3.399810435848563e-01, 3.399810435848563e-01, 8.611363115940526e-01};
static double lp4[4]={
  3.478548451374537e-01, 6.521451548625464e-01, 6.521451548625464e-01, 3.478548451374537e-01};

/* 5 integration points */

static double lx5[5]={
  -9.061798459386640e-01,-5.384693101056831e-01, 0.000000000000000e+00, 5.384693101056831e-01, 
  9.061798459386640e-01};
static double lp5[5]={
  2.369268850561890e-01, 4.786286704993665e-01, 5.688888888888889e-01, 4.786286704993665e-01, 
  2.369268850561890e-01};

/* 6 integration points */

static double lx6[6]={
  -9.324695142031521e-01,-6.612093864662646e-01,-2.386191860831969e-01, 2.386191860831969e-01, 
  6.612093864662646e-01, 9.324695142031521e-01};
static double lp6[6]={
  1.713244923791705e-01, 3.607615730481386e-01, 4.679139345726913e-01, 4.679139345726913e-01, 
  3.607615730481386e-01, 1.713244923791705e-01};

/* 7 integration points */

static double lx7[7]={
  -9.491079123427585e-01,-7.415311855993945e-01,-4.058451513773972e-01, 0.000000000000000e+00, 
  4.058451513773972e-01, 7.415311855993945e-01, 9.491079123427585e-01};
static double lp7[7]={
  1.294849661688697e-01, 2.797053914892767e-01, 3.818300505051190e-01, 4.179591836734694e-01, 
  3.818300505051190e-01, 2.797053914892767e-01, 1.294849661688697e-01};

/* 8 integration points */

static double lx8[8]={
  -9.602898564975363e-01,-7.966664774136268e-01,-5.255324099163290e-01,-1.834346424956498e-01, 
  1.834346424956498e-01, 5.255324099163290e-01, 7.966664774136268e-01, 9.602898564975363e-01};
static double lp8[8]={
  1.012285362903768e-01, 2.223810344533745e-01, 3.137066458778874e-01, 3.626837833783620e-01, 
  3.626837833783620e-01, 3.137066458778874e-01, 2.223810344533745e-01, 1.012285362903768e-01};

/* 9 integration points */

static double lx9[9]={
  -9.681602395076261e-01,-8.360311073266359e-01,-6.133714327005905e-01,-3.242534234038089e-01, 
  0.000000000000000e+00, 3.242534234038089e-01, 6.133714327005905e-01, 8.360311073266359e-01, 
  9.681602395076261e-01};
static double lp9[9]={
  8.127438836157463e-02, 1.806481606948576e-01, 2.606106964029355e-01, 3.123470770400029e-01, 
  3.302393550012598e-01, 3.123470770400029e-01, 2.606106964029355e-01, 1.806481606948576e-01, 
  8.127438836157463e-02};

/* 10 integration points */

static double lx10[10]={
  -9.739065285171716e-01,-8.650633666889845e-01,-6.794095682990244e-01,-4.333953941292472e-01,
  -1.488743389816312e-01, 1.488743389816312e-01, 4.333953941292472e-01, 6.794095682990244e-01, 
  8.650633666889845e-01, 9.739065285171716e-01};
static double lp10[10]={
  6.667134430868774e-02, 1.494513491505805e-01, 2.190863625159822e-01, 2.692667193099962e-01, 
  2.955242247147529e-01, 2.955242247147529e-01, 2.692667193099962e-01, 2.190863625159822e-01, 
  1.494513491505805e-01, 6.667134430868774e-02};

/* 11 integration points */

static double lx11[11]={
  -9.782286581460570e-01,-8.870625997680953e-01,-7.301520055740494e-01,-5.190961292068118e-01,
  -2.695431559523450e-01, 0.000000000000000e+00, 2.695431559523450e-01, 5.190961292068118e-01, 
  7.301520055740494e-01, 8.870625997680953e-01, 9.782286581460570e-01};
static double lp11[11]={
  5.566856711617354e-02, 1.255803694649047e-01, 1.862902109277343e-01, 2.331937645919903e-01, 
  2.628045445102466e-01, 2.729250867779006e-01, 2.628045445102466e-01, 2.331937645919903e-01, 
  1.862902109277343e-01, 1.255803694649047e-01, 5.566856711617354e-02};

/* 12 integration points */

static double lx12[12]={
  -9.815606342467192e-01,-9.041172563704748e-01,-7.699026741943047e-01,-5.873179542866175e-01,
  -3.678314989981802e-01,-1.252334085114689e-01, 1.252334085114689e-01, 3.678314989981802e-01, 
  5.873179542866175e-01, 7.699026741943047e-01, 9.041172563704748e-01, 9.815606342467192e-01};
static double lp12[12]={
  4.717533638651183e-02, 1.069393259953182e-01, 1.600783285433463e-01, 2.031674267230658e-01, 
  2.334925365383548e-01, 2.491470458134029e-01, 2.491470458134029e-01, 2.334925365383548e-01, 
  2.031674267230658e-01, 1.600783285433463e-01, 1.069393259953182e-01, 4.717533638651183e-02};

/* 13 integration points */

static double lx13[13]={
  -9.841830547185881e-01,-9.175983992229780e-01,-8.015780907333099e-01,-6.423493394403402e-01,
  -4.484927510364468e-01,-2.304583159551348e-01, 1.232595164407831e-32, 2.304583159551348e-01, 
  4.484927510364468e-01, 6.423493394403402e-01, 8.015780907333099e-01, 9.175983992229780e-01, 
  9.841830547185881e-01};
static double lp13[13]={
  4.048400476531581e-02, 9.212149983772838e-02, 1.388735102197872e-01, 1.781459807619457e-01, 
  2.078160475368884e-01, 2.262831802628971e-01, 2.325515532308739e-01, 2.262831802628971e-01, 
  2.078160475368884e-01, 1.781459807619457e-01, 1.388735102197872e-01, 9.212149983772838e-02, 
  4.048400476531581e-02};

/* 14 integration points */

static double lx14[14]={
  -9.862838086968123e-01,-9.284348836635736e-01,-8.272013150697650e-01,-6.872929048116855e-01,
  -5.152486363581541e-01,-3.191123689278897e-01,-1.080549487073437e-01, 1.080549487073437e-01, 
  3.191123689278897e-01, 5.152486363581541e-01, 6.872929048116855e-01, 8.272013150697650e-01, 
  9.284348836635736e-01, 9.862838086968123e-01};
static double lp14[14]={
  3.511946033175199e-02, 8.015808715976037e-02, 1.215185706879031e-01, 1.572031671581936e-01, 
  1.855383974779378e-01, 2.051984637212955e-01, 2.152638534631578e-01, 2.152638534631578e-01, 
  2.051984637212955e-01, 1.855383974779378e-01, 1.572031671581936e-01, 1.215185706879031e-01, 
  8.015808715976037e-02, 3.511946033175199e-02};

/* 15 integration points */

static double lx15[15]={
  -9.879925180204854e-01,-9.372733924007060e-01,-8.482065834104272e-01,-7.244177313601701e-01,
  -5.709721726085388e-01,-3.941513470775634e-01,-2.011940939974345e-01, 1.232595164407831e-32, 
  2.011940939974345e-01, 3.941513470775634e-01, 5.709721726085388e-01, 7.244177313601701e-01, 
  8.482065834104272e-01, 9.372733924007060e-01, 9.879925180204854e-01};
static double lp15[15]={
  3.075324199611663e-02, 7.036604748810814e-02, 1.071592204671720e-01, 1.395706779261543e-01, 
  1.662692058169940e-01, 1.861610000155622e-01, 1.984314853271116e-01, 2.025782419255613e-01, 
  1.984314853271116e-01, 1.861610000155622e-01, 1.662692058169940e-01, 1.395706779261543e-01, 
  1.071592204671720e-01, 7.036604748810814e-02, 3.075324199611663e-02};

/* 16 integration points */

static double lx16[16]={
  -9.894009349916499e-01,-9.445750230732326e-01,-8.656312023878318e-01,-7.554044083550030e-01,
  -6.178762444026438e-01,-4.580167776572274e-01,-2.816035507792589e-01,-9.501250983763744e-02, 
  9.501250983763744e-02, 2.816035507792589e-01, 4.580167776572274e-01, 6.178762444026438e-01, 
  7.554044083550030e-01, 8.656312023878318e-01, 9.445750230732326e-01, 9.894009349916499e-01};
static double lp16[16]={
  2.715245941175406e-02, 6.225352393864778e-02, 9.515851168249290e-02, 1.246289712555339e-01, 
  1.495959888165768e-01, 1.691565193950026e-01, 1.826034150449236e-01, 1.894506104550685e-01, 
  1.894506104550685e-01, 1.826034150449236e-01, 1.691565193950026e-01, 1.495959888165768e-01, 
  1.246289712555339e-01, 9.515851168249290e-02, 6.225352393864778e-02, 2.715245941175406e-02};

/* 17 integration points */

static double lx17[17]={
  -9.905754753144174e-01,-9.506755217687678e-01,-8.802391537269859e-01,-7.815140038968014e-01,
  -6.576711592166907e-01,-5.126905370864769e-01,-3.512317634538763e-01,-1.784841814958479e-01, 
  1.232595164407831e-32, 1.784841814958479e-01, 3.512317634538763e-01, 5.126905370864769e-01, 
  6.576711592166907e-01, 7.815140038968014e-01, 8.802391537269859e-01, 9.506755217687678e-01, 
  9.905754753144174e-01};
static double lp17[17]={
  2.414830286854792e-02, 5.545952937398713e-02, 8.503614831717915e-02, 1.118838471934039e-01, 
  1.351363684685256e-01, 1.540457610768104e-01, 1.680041021564499e-01, 1.765627053669926e-01, 
  1.794464703562065e-01, 1.765627053669926e-01, 1.680041021564499e-01, 1.540457610768104e-01, 
  1.351363684685256e-01, 1.118838471934039e-01, 8.503614831717915e-02, 5.545952937398713e-02, 
  2.414830286854792e-02};

/* 18 integration points */

static double lx18[18]={
  -9.915651684209310e-01,-9.558239495713977e-01,-8.926024664975557e-01,-8.037049589725231e-01,
  -6.916870430603532e-01,-5.597708310739475e-01,-4.117511614628426e-01,-2.518862256915055e-01,
  -8.477501304173531e-02, 8.477501304173531e-02, 2.518862256915055e-01, 4.117511614628426e-01, 
  5.597708310739475e-01, 6.916870430603532e-01, 8.037049589725231e-01, 8.926024664975557e-01, 
  9.558239495713977e-01, 9.915651684209310e-01};
static double lp18[18]={
  2.161601352648315e-02, 4.971454889496984e-02, 7.642573025488918e-02, 1.009420441062872e-01, 
  1.225552067114784e-01, 1.406429146706506e-01, 1.546846751262652e-01, 1.642764837458327e-01, 
  1.691423829631435e-01, 1.691423829631435e-01, 1.642764837458327e-01, 1.546846751262652e-01, 
  1.406429146706506e-01, 1.225552067114784e-01, 1.009420441062872e-01, 7.642573025488918e-02, 
  4.971454889496984e-02, 2.161601352648315e-02};

/* 19 integration points */

static double lx19[19]={
  -9.924068438435844e-01,-9.602081521348300e-01,-9.031559036148179e-01,-8.227146565371428e-01,
  -7.209661773352294e-01,-6.005453046616810e-01,-4.645707413759609e-01,-3.165640999636298e-01,
  -1.603586456402254e-01, 1.232595164407831e-32, 1.603586456402254e-01, 3.165640999636298e-01, 
  4.645707413759609e-01, 6.005453046616810e-01, 7.209661773352294e-01, 8.227146565371428e-01, 
  9.031559036148179e-01, 9.602081521348300e-01, 9.924068438435844e-01};
static double lp19[19]={
  1.946178822972643e-02, 4.481422676569959e-02, 6.904454273764125e-02, 9.149002162245014e-02, 
  1.115666455473341e-01, 1.287539625393363e-01, 1.426067021736066e-01, 1.527660420658597e-01, 
  1.589688433939544e-01, 1.610544498487837e-01, 1.589688433939544e-01, 1.527660420658597e-01, 
  1.426067021736066e-01, 1.287539625393363e-01, 1.115666455473341e-01, 9.149002162245014e-02, 
  6.904454273764125e-02, 4.481422676569959e-02, 1.946178822972643e-02};

/* 20 integration points */

static double lx20[20]={
  -9.931285991850949e-01,-9.639719272779138e-01,-9.122344282513259e-01,-8.391169718222189e-01,
  -7.463319064601508e-01,-6.360536807265150e-01,-5.108670019508271e-01,-3.737060887154195e-01,
  -2.277858511416451e-01,-7.652652113349734e-02, 7.652652113349734e-02, 2.277858511416451e-01,
  3.737060887154195e-01, 5.108670019508271e-01, 6.360536807265150e-01, 7.463319064601508e-01, 
  8.391169718222189e-01, 9.122344282513259e-01, 9.639719272779138e-01, 9.931285991850949e-01};
static double lp20[20]={
  1.761400713915226e-02, 4.060142980038705e-02, 6.267204833410904e-02, 8.327674157670474e-02,
  1.019301198172405e-01, 1.181945319615183e-01, 1.316886384491766e-01, 1.420961093183819e-01, 
  1.491729864726038e-01, 1.527533871307260e-01, 1.527533871307260e-01, 1.491729864726038e-01, 
  1.420961093183819e-01, 1.316886384491766e-01, 1.181945319615183e-01, 1.019301198172405e-01, 
  8.327674157670474e-02, 6.267204833410904e-02, 4.060142980038705e-02, 1.761400713915226e-02};

