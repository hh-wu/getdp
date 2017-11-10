/////////////////////////////////////////
// Author : Guillaume Demesy           //
// grating2D_data_ResonantGrating.geo //
/////////////////////////////////////////

nm       = 1000.;
epsilon0 = 8.854187817e-3*nm;
mu0      = 400.*Pi*nm;
cel      = 1.0/(Sqrt[epsilon0 * mu0]);
deg2rad  = Pi/180;
pp0        = "1Geometry/0";
pp01       = "1Geometry/01Stack thicknesses/";
pp02       = "1Geometry/02Diffractive element dimensions/00";
pp1        = "2Materials/0";
pp2        = "3Incident plane wave/0";
pp2b       = StrCat[pp1,"1Custom non-dispersive materials/6Custom anisotropic rods/"];
pp3        = "4Mesh size and PMLs parameters/0";
pp4        = "5Post plot options/0";
close_menu = 0;
colorro    = "LightGrey";
colorpp    = "Ivory";
colorpp2   = "Ivory";
colorpp01  = "Ivory";
colorpp02  = "Ivory";

lambda_min = 1548.5;
lambda_max = 1551  ;
nb_lambdas =   56  ;

// lambda = 1550.04545
// 5.85 : 6.0 : 0.0025

DefineConstant[
  flag_Hparallel = {0   , Name StrCat[pp2, "2polarization case"], Choices {0="E //",1="H //"} },
	theta_deg      = {5.93, Name StrCat[pp2, "1incident plane wave angle [deg]"] , Highlight Str[colorpp2], Closed close_menu},
  nb_orders      = {2   , Name StrCat[pp2, "3number of post-processed diffraction orders"] , Highlight Str[colorpp2], Closed close_menu}
];

DefineConstant[
  d           = {971 , Name StrCat[pp0  , "0grating period [nm]"]          , Highlight Str[colorpp]  , Closed close_menu} , 
  h_sub  		  = {400  , Name StrCat[pp01 , "1substrate thickness [nm]"]     , Highlight Str[colorpp01], Closed close_menu},
  h_layer_dep	= {300 , Name StrCat[pp01 , "2deposit layer thickness [nm]"] , Highlight Str[colorpp01], Closed close_menu},
  h_layer_cov	= {100 , Name StrCat[pp01 , "3cover layer thickness [nm]"]   , Highlight Str[colorpp01], Closed close_menu},
  h_sup  		  = {100 , Name StrCat[pp01 , "4superstrate thickness [nm]"]   , Highlight Str[colorpp01], Closed close_menu},

  Flag_glue_rod_subs   = {  1 , Name StrCat[pp02, "0glue rod to substrate?"] , Choices {0,1} } ,
  Shape_rod            = {  0 , Name StrCat[pp02, "1rod section shape"]             , Choices {0="Trapezoidal",1="Ellipsoidal"} } ,
  N_rods   	           = {  1 , Name StrCat[pp02, "2number of rods [-]"]     , Highlight Str[colorpp02], Closed close_menu},    
  w_rod_bot   	       = { 721, Name StrCat[pp02, "3bottom rod width if trapz rod OR x-diameter if elliptic rod [nm]"]         , Highlight Str[colorpp02], Closed close_menu},
  w_rod_top	           = { 721, Name StrCat[pp02, "4top rod width if trapz rod [nm]"]         , Highlight Str[colorpp02], Closed close_menu},
  h_rod                = {  20, Name StrCat[pp02 ,"5rod thickness if trapz rod OR y-diameter if elliptic rod [nm]"]     , Highlight Str[colorpp02], Closed close_menu},
  dy        	         = { 200, Name StrCat[pp02 ,"6embedding layer thickness OR 'period' along y if number of rods >1, [nm]"]    , Highlight Str[colorpp02], Closed close_menu},    
  Rot_rod 	           = {  0 , Name StrCat[pp02, "7rotate rod [deg]"]       , Highlight Str[colorpp02], Closed close_menu},
  Flag_chirp_rod_angle = {  0 , Name StrCat[pp02, "8chirp angle?"]             , Choices {0,1} } ,
  Flag_chirp_rod_size  = {  0 , Name StrCat[pp02, "9chirp size?"]              , Choices {0,1} } ,
  Chirp_rod            = { 90 , Name StrCat[pp02, "91chirp size factor [%]"]    , Highlight Str[colorpp02], Closed close_menu},
	
  flag_mat_1  = {13, Name StrCat[pp1, "0Dispersive materials/0material substrate"]     , Choices {0="Air",1="SiO2",2="Ag (palik)",3="Al (palik)",4="Au (johnson)",5="Nb2O5",6="ZnSe",7="MgF2",8="TiO2",9="PMMA",10="Si",11="ITO",12="Cu (palik)",13="custom 1 (lossless)",14="custom 2",15="custom 3"} },
  flag_mat_2  = {14, Name StrCat[pp1, "0Dispersive materials/1material deposit layer"] , Choices {0="Air",1="SiO2",2="Ag (palik)",3="Al (palik)",4="Au (johnson)",5="Nb2O5",6="ZnSe",7="MgF2",8="TiO2",9="PMMA",10="Si",11="ITO",12="Cu (palik)",13="custom 1 (lossless)",14="custom 2",15="custom 3"} },
  flag_mat_3  = {0 , Name StrCat[pp1, "0Dispersive materials/2material embedding rod"] , Choices {0="Air",1="SiO2",2="Ag (palik)",3="Al (palik)",4="Au (johnson)",5="Nb2O5",6="ZnSe",7="MgF2",8="TiO2",9="PMMA",10="Si",11="ITO",12="Cu (palik)",13="custom 1 (lossless)",14="custom 2",15="custom 3"} },
  flag_mat_4  = {14, Name StrCat[pp1, "0Dispersive materials/3material rods"]          , Choices {0="Air",1="SiO2",2="Ag (palik)",3="Al (palik)",4="Au (johnson)",5="Nb2O5",6="ZnSe",7="MgF2",8="TiO2",9="PMMA",10="Si",11="ITO",12="Cu (palik)",13="custom 1 (lossless)",14="custom 2",15="custom 3"} },
  flag_mat_5  = {0 , Name StrCat[pp1, "0Dispersive materials/4material cover layer"]  , Choices {0="Air",1="SiO2",2="Ag (palik)",3="Al (palik)",4="Au (johnson)",5="Nb2O5",6="ZnSe",7="MgF2",8="TiO2",9="PMMA",10="Si",11="ITO",12="Cu (palik)",13="custom 1 (lossless)",14="custom 2",15="custom 3"} },
  flag_mat_6  = {0 , Name StrCat[pp1, "0Dispersive materials/5material superstrate"]  , Choices {0="Air",1="SiO2",6="ZnSe",7="MgF2",8="TiO2",9="PMMA",13="custom 1 (lossless)"} },

  epsr_custom_1_re  = { 2.096704 , Name StrCat[pp1 , "1Custom non-dispersive materials/0custom relative permittivity 1 (real part)"] , Highlight Str[colorpp]  , Closed 1} , 
  epsr_custom_1_im  = { 0        , Name StrCat[pp1 , "1Custom non-dispersive materials/1custom relative permittivity 1 (imag part)"] , ReadOnly 1, Highlight Str[colorro]  , Closed 1} ,
  epsr_custom_2_re  = { 4.2849   , Name StrCat[pp1 , "1Custom non-dispersive materials/2custom relative permittivity 2 (real part)"] , Highlight Str[colorpp]  , Closed 1} , 
  epsr_custom_2_im  = { 0        , Name StrCat[pp1 , "1Custom non-dispersive materials/3custom relative permittivity 2 (imag part)"] , Highlight Str[colorpp]  , Closed 1} , 
  epsr_custom_3_re  = { 3        , Name StrCat[pp1 , "1Custom non-dispersive materials/4custom relative permittivity 3 (real part)"] , Highlight Str[colorpp]  , Closed 1} , 
  epsr_custom_3_im  = { -0.3     , Name StrCat[pp1 , "1Custom non-dispersive materials/5custom relative permittivity 3 (imag part)"] , Highlight Str[colorpp]  , Closed 1} , 

  Flag_aniso              = {       0 , Name StrCat[pp2b , "0Enable anisotropy for rods? (overrides material rods above)"] , Choices {0,1} , Closed 1} ,
  epsr_custom_anisoXX_re  = {   2.592 , Name StrCat[pp2b , "1 epsilonr XX re"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoXX_im  = {   0     , Name StrCat[pp2b , "2 epsilonr XX im"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoYY_re  = {   2.592 , Name StrCat[pp2b , "3 epsilonr YY re"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoYY_im  = {   0     , Name StrCat[pp2b , "4 epsilonr YY im"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoZZ_re  = {   2.829 , Name StrCat[pp2b , "5 epsilonr ZZ re"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoZZ_im  = {   0     , Name StrCat[pp2b , "6 epsilonr ZZ im"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoXY_re  = {   0.251 , Name StrCat[pp2b , "7 epsilonr XY re"] , Highlight Str[colorpp]                                   , Closed 1} , 
  epsr_custom_anisoXY_im  = {   0     , Name StrCat[pp2b , "8 epsilonr XY im"] , Highlight Str[colorpp]                                   , Closed 1} , 

  h_pmltop                    = {0.8*1500, Name StrCat[pp3, "0top PML size [nm]"] ,  ReadOnly 1, Highlight Str[colorro]},
  h_pmlbot                    = {0.8*1500, Name StrCat[pp3, "1bottom PML size [nm]"] ,  ReadOnly 1, Highlight Str[colorro]}  
  paramaille                  = {25, Name StrCat[pp3, "2nb of mesh elements per wavelength [-]"   ] , ReadOnly 0, Highlight Str[colorpp]},
  paramaille_scale_sub        = {1 , Name StrCat[pp3, "3Custom mesh parameters/refine substrate [-]"    ] , ReadOnly 0, Highlight Str[colorpp], Closed 1},
  paramaille_scale_layer_dep  = {1 , Name StrCat[pp3, "3Custom mesh parameters/refine deposit layer [-]"] , ReadOnly 0, Highlight Str[colorpp], Closed 1},
  paramaille_scale_rod_out    = {1 , Name StrCat[pp3, "3Custom mesh parameters/refine embedding [-]"    ] , ReadOnly 0, Highlight Str[colorpp], Closed 1},
  paramaille_scale_rods       = {9 , Name StrCat[pp3, "3Custom mesh parameters/refine rods [-]"       ] , ReadOnly 0, Highlight Str[colorpp], Closed 1},
  paramaille_scale_layer_cov  = {1 , Name StrCat[pp3, "3Custom mesh parameters/refine cover layer [-]"  ] , ReadOnly 0, Highlight Str[colorpp], Closed 1},
  paramaille_scale_sup        = {1 , Name StrCat[pp3, "3Custom mesh parameters/refine superstrate [-]"  ] , ReadOnly 0, Highlight Str[colorpp], Closed 1},

  multiplot    = {0, Choices{0,1}, Name StrCat[pp4, "Plot solution on multiple periods"]},
  plotRTgraphs = {1, Choices{0,1}, Name StrCat[pp4, "Plot R and T"]}
] ;

d              = d            * nm;
dy             = dy           * nm;
h_sup  		     = h_sup  		  * nm;
h_sub  		     = h_sub  		  * nm;
h_layer_dep	   = h_layer_dep	* nm;
h_layer_cov	   = h_layer_cov	* nm;
w_rod_bot      = w_rod_bot    * nm;
w_rod_top      = w_rod_top    * nm;
h_rod          = h_rod        * nm;
h_pmltop       = h_pmltop     * nm;
h_pmlbot       = h_pmlbot     * nm;
paramaille_pml = 0.6667*paramaille;

PMLBOT   = 1000;
SUB      = 2000;
LAYERDEP = 3000;
RODOUT = 4000;
For k2 In {0:N_rods-1:1}
  ROD~{k2}=5000+1+k2;
EndFor
LAYERCOV = 6000;
SUP      = 7000;
PMLTOP   = 8000;

SURF_BLOCH_X_LEFT  = 101;
SURF_BLOCH_X_RIGHT = 102;
SURF_INTEG_SUP1    = 121;
SURF_INTEG_SUB1    = 131;
SURF_INTEG_SUP2    = 122;
SURF_INTEG_SUB2    = 132;
SURF_PLOT          = 141;
PRINT_POINT        = 10000;
