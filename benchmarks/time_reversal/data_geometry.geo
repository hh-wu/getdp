// Parameters

// Frequency, wavelength
// k_geo : "k" used to build geometry (gmsh)
// k_w : "true wavenumber", used in the Helmholtz equation (getdp)
// k_w and k_geo are given in :
//Include "param_frequence.geo";

/*======================================================
Parameters of the TRM
L : distance from the mirror to the source (x-direction)
Dx : Size in the x-direction 
Dy : Size in the y-direction 
Dz : Size in the z-direction
======================================================*/

L = lambda_geo*20;
Dx = lambda_geo*0.2;
Dy = lambda_geo*15;
Dz = lambda_geo*0;

//Coordinate of the source :
XS = 0;
YS = 0;
ZS = 0;

// TRM
//=========
X_TRM_min = L;
X_TRM_max = L + Dx;
Y_TRM_min = -Dy/2;
Y_TRM_max = Dy/2;
// Domaine d'etude
//=========
X_Omega_min = - L - Dx;
X_Omega_max = X_TRM_max + Dy/4;
Y_Omega_min = Y_TRM_min - Dy/5;
Y_Omega_max = Y_TRM_max + Dy/5;

//=====================
// Discretization
//TRM
lcTRM = lambda_dis/15;
//Source (small open subset surrounding the source)
lcSourceExt = lambda_dis/15;
//Interne boundary separating propagation and absorbing domains
lcIntern_Bound = lambda_dis/10;
//Extern boundary of the PML (truncation)
lcExtern_Bound = lambda_dis/10;
//source
lcSourceInt = lcIntern_Bound;
