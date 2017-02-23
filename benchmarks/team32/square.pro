/*
//-------------------------------------------------------------------------
// Info
//-------------------------------------------------------------------------
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
plot "res/hbp_*.dat" u numcol:numcol w l
0 Time x y z hx hy 0  bx by  0
1 2    3 4 5 6  7  8  9  10  11

Examples:
plot "res/hbp_1_all.dat" u  6:9 w l   # to plot  bx(hx)
plot "res/hbp_1_all.dat" u  7:10 w l  # to plot  by(hy)
plot "res/hbp_1_all.dat" u  6:7 w l   # to plot  hy(hx)
plot "res/hbp_1_all.dat" u  9:10 w l  # to plot  by(bx)
*/

//-------------------------------------------------------------------------
// Include Data
//-------------------------------------------------------------------------

Include "square_data.geo";

//-------------------------------------------------------------------------
// Output Directory
//-------------------------------------------------------------------------
Dir   = "res/";

//-------------------------------------------------------------------------
// Physical Groups
//-------------------------------------------------------------------------
Group {
  Corner   = Region[{11}];
  Air      = Region[{}];
  AirInf   = Region[{}];
  Inds     = Region[{}];
  Boundary = Region[{15}];
  Core     = Region[{16}];
  //DummyR = #54321 ; // dummy group (for being able to use Store's)
}

//-------------------------------------------------------------------------
// Imposed Source Function
//-------------------------------------------------------------------------
Function {
  If (Flag_TestCase==0)
  // CAS 0 (default)
    hax     = hax_00; 
    haharmx = haharmx_00;       
    hay0    = hay0_00;  
    hay     = hay_00;      
    haharmy = haharmy_00;       
    freqharm= freqharm_00;         
    phase   = phase_00;
  EndIf
  If (Flag_TestCase==1)
  // CAS 1 (1Dx)
  hax = ha_00; haharmx = 0;       hay0 = 0;  hay = 0;      haharmy = 0;       freqharm = 0;         phase = 0;
  EndIf
  If (Flag_TestCase==2)
  // CAS 2 (1Dx+harm)
  hax = ha_00; haharmx = ha_00/2; hay0 = 0;  hay = 0;      haharmy = 0;       freqharm = 5*freq_00; phase = 0;
  EndIf
  If (Flag_TestCase==3)
  // CAS 3 (1Dxy)
  hax = ha_00; haharmx = 0;       hay0 = 0;  hay = ha_00;  haharmy = 0;       freqharm = 0;         phase = 0;
  EndIf
  If (Flag_TestCase==4)
  // CAS 4 (1Dxy+harm)
  hax = ha_00; haharmx = ha_00/2; hay0 = 0;  hay = ha_00;  haharmy = ha_00/2; freqharm = 5*freq_00; phase = 0;
  EndIf
  If (Flag_TestCase==5)
  // CAS 5 (2D)
  hax = ha_00; haharmx = 0;       hay0 = 0;  hay = ha_00;  haharmy = 0;       freqharm = 0;         phase = Pi/2;//(90/180)*3.141592653589793;
  EndIf
  If (Flag_TestCase==6)
  // CAS 6 (2D+harm)
  hax = ha_00; haharmx = ha_00/2; hay0 = 0;  hay = ha_00;  haharmy = ha_00/2; freqharm = 5*freq_00; phase = Pi/2;//(90/180)*3.141592653589793;
  EndIf

  // With hysteresis: Damped start necessary
  Trelax = 1/Freq/8;
  Frelax[] = ($Time < Trelax) ? 0.5 * (1. - Cos [Pi*$Time/Trelax] ) : 1. ;

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

//-------------------------------------------------------------------------
// Include Formulation, Resolution, PostOperations, ... 
//-------------------------------------------------------------------------

Include "magstadyn_a.pro";