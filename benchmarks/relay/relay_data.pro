// p_init = 7.7e-3 ; // initial position (this is our limit with airlayer)

p_init = 7.5e-3 ; // initial position
p_mid  = 3e-3 ;

d = 0.2e-3 ; // Width of air layer around plungerForce calculation

e1 = 3.5e-2; // Half width  of plunger (Moving part)
h1 = 8e-2 ;  // Half height of plunger (Moving part)


dmin = 0;
dmax = 2*p_init ; //15.4e-3;

displacementX = 0;
displacementZ = 0;

Flag_Kinetics = 1 ;

If(Flag_Kinetics)
    Flag_Circuit = 1 ;
    DefineConstant[ step = {0, Min 0, Max 5000, Step 1, Loop "1",
                            Path "Parameters/1"} ];
    DefineConstant[ displacementY = {0., Path "Parameters/2"} ];
    tmin = 0. ;
    tmax = 50e-3 ;
    dt = .4e-3*2 ;
EndIf

If(!Flag_Kinetics)
    Flag_Circuit = 0 ;
    tmin = 0;
    tmax = 15e-3;
    dt = 1e-3;
    nstep = (tmax - tmin) / dt;

    DefineConstant[ step = {0, Min 0, Max nstep, Step 1,
                Path "Parameters/1", ShortHelp "Iteration"} ];
    displacementY = - step * (dmax - dmin) / nstep ;
EndIf
