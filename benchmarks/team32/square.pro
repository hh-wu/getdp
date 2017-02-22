/*
//--------- with command line (faster)
// To mesh (create square.msh file):
gmsh -2 square.geo 

// To launch computation (create square.pre & square.res):
getdp square.pro -solve Analysis

// Available PostOperations :
(1) Get_LocalFields      LastTimeStepOnly
(2) Get_GlobalQuantities LastTimeStepOnly
(3) Get_AllTS            AllTimeStep
(4) az_only              AllTimeStep
(5) b_only               AllTimeStep
(6) h_only               AllTimeStep

// To do PostOp after the end of the simulation (create res/*.pos res/*dat)
// use AlltimeStep postop type  
// Example: 
getdp square.pro -pos Get_AllTS 

// To launch computation and Then
// do PostOp after the end of the simulation (create res/*.pos res/*dat)
getdp square.pro -solve Analysis -pos Get_AllTS 

//---------

//--------- with the graphical user interface (GUI) (slower)
// To do PostOp at every Time step during simulation,
// change in square_data.geo:
// Flag_LiveLocalPostOp_00 = 1 
// (or Flag_LiveGlobalPostOp_00 = 1; (not useful for square case))
// Equivalent to Check the box "Real Time visu LocalPostOp" in the GUI

// If these Flags are set to 1, launching this:
getdp square.pro -solve Analysis 
// Equivalent to Click on Run in the GUI
// will create PostOp results only from the LastTimeStep (create res/*.pos res/*dat)
//---------

// To visualize a .pos file result
gmsh res/*.pos

// To draw a plot with gnuplot from a .dat file result
gnuplot
plot "res/hb.dat" u numcol:numcol w l
0 Time x y z hx hy 0  bx by  0
1 2    3 4 5 6  7  8  9  10  11

plot "res/hbp_1_all.dat" u  6:9 w l  # to plot  bx(hx)
plot "res/hbp_1_all.dat" u  7:10 w l  # to plot  by(hy)
plot "res/hbp_1_all.dat" u  6:7 w l  # to plot  hy(hx)
plot "res/hbp_1_all.dat" u  9:10 w l  # to plot  by(bx)
*/

Include "square_data.geo";


Function {


  mu0 = 4.e-7 * Pi;

  //sigma_al = 3.72e7 ; // conductivity of aluminum [S/m] (not used here)
  //sigma_cu = 5.77e7  ; // conductivity of copper [S/m] (not used here)

  // Hysteresis parameters with Jiles-Atherton hysteresis model

  // FeSi -- data for Jiles-Atherton model from Bastos paper
  // Oxz is the lamination plane, Oy is perpendicular to the lamination
  // Ox == transverse direction (Oy taken equal to Ox, as the field is negligible)
  Msat_x = 1.31e6;
  a_x = 233.78;
  k_x = 374.975;
  c_x = 0.736;
  alpha_x = 562e-6 ;

  // Oz == rolling direction
  Msat_z = 1.33e6;
  a_z = 172.856;
  k_z = 232.652;
  c_z = 0.652;
  alpha_z = 417e-6;

  hyst_FeSi = { Msat_z, a_z, k_z, c_z, alpha_z}; // rolling direction
  //hyst_FeSi = { Msat_x, a_x, k_x, c_x, alpha_x}; // transverse direction

  sigma_core = 2.5e7/1000; 
  sigma_coil = 5.9e7;
  mur_fe     = 1000; // linear case


  // With hysteresis: Damped start necessary
  Trelax = 1/Freq/8;
  Frelax[] = ($Time < Trelax) ? 0.5 * (1. - Cos [Pi*$Time/Trelax] ) : 1. ;
  phase=phase_00;

  hx[] = Frelax[] * (  hax     * Cos[2*Pi*Freq*$Time]
                     + haharmx * Cos[2*Pi*freqharm*$Time]) ;
  hy[] = Frelax[] * (  hay0 
                     + hay     * (Cos[phase]*Cos[2*Pi*Freq*$Time] + Sin[phase]*Sin[2*Pi*Freq*$Time])
                     + haharmy * (Cos[phase]*Cos[2*Pi*freqharm*$Time] + Sin[phase]*Sin[2*Pi*freqharm*$Time]) );
/*
  hx[] = Frelax[] * (  hax     * Complex_MH[1,0]{Freq} 
                     + haharmx * Complex_MH[1,0]{freqharm}) ;
  hy[] = Frelax[] * (  hay0 
                     + hay     * Complex_MH[Cos[phase],Sin[phase]]{Freq} 
                     + haharmy * Complex_MH[Cos[phase],Sin[phase]]{freqharm});
*/
  hhh[] = Vector[hx[],hy[],0]   ;

  nxh[] = (Tangent[]*hhh[])*Vector[0,0,1] ; // Source magnetic field = current layer imposed on the outer boundary of the domain

}


Dir   = "res/";

Group {
  Corner   = Region[{11}];
  Air=Region[{}];
  AirInf=Region[{}];
  Inds = Region[{}];
  Boundary = Region[{15}];
  Core     = Region[{16}];
  //DummyR = #54321 ; // dummy group (for being able to use Store's)
}

Include "magstadyn_a.pro";