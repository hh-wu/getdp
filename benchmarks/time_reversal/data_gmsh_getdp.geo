//constant parameters

// PML
//====

// Max value of absorbing coefficient
// AlphaX = k_w + i SigmaX
SigmaXmax = 100;
SigmaYmax = 100;

SizeInteriorDomainX = X_Omega_max - X_Omega_min;
SizeInteriorDomainY = Y_Omega_max - Y_Omega_min;

// Coordinate of the center of the domain
//XF = (XS + 1.15*L)/2;
XF = (X_Omega_max + X_Omega_min)/2;
YF = (Y_Omega_max + Y_Omega_min)/2;
ZF = ZS;

// Width and Height of the absorbing layer
SizePMLX = 10*lcIntern_Bound;
SizePMLY = 10*lcIntern_Bound;




