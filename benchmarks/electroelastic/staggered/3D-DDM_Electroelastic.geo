nx = 1;
ny = 1;

tc = 0.01;


// Allowing several definitions of the same entity:
Geometry.AutoCoherence = 0;

// Membrane length:
length = 50e-6;

// Support thickness
esupport = 2e-6;

// Membrane thickness
emembrane = 0.3e-6;

// Height
h = 4e-6/2;


overlap = 0.4*length;



Point(1) 	= {-length/2 - overlap, h, 0, tc};
Point(2) 	= {-length/2 + overlap, h, 0, tc};
Point(3) 	= {length/2 - overlap, h, 0, tc};
Point(4) 	= {length/2 + overlap, h, 0, tc};
Point(5) 	= {length/2 + overlap, h, 0, tc};
Point(6) 	= {length/2 + overlap, -h, 0, tc};
Point(8) 	= {length/2 - overlap, -h, 0, tc};
Point(9) 	= {-length/2 + overlap, -h, 0, tc};
Point(10) 	= {-length/2 - overlap, -h, 0, tc};
Point(11) 	= {-length/2 - overlap, -h, 0, tc};
Point(12) 	= {-length/2 - overlap, h, 0, tc};
Point(13) 	= {-length/2 + overlap, h, 0, tc};
Point(14) 	= {length/2 - overlap, h, 0, tc};
Point(15) 	= {length/2 - overlap, -h, 0, tc};
Point(16) 	= {-length/2 + overlap, -h, 0, tc};
Point(17) 	= {-length/2-esupport, h-emembrane, 0, tc};
Point(18) 	= {-length/2+esupport, h-emembrane, 0, tc};
Point(19) 	= {-length/2-overlap, h-emembrane, 0, tc};
Point(21) 	= {-length/2+overlap, h-emembrane, 0, tc};
Point(22) 	= {-length/2+overlap, -h+emembrane, 0, tc};
Point(23) 	= {-length/2+esupport, -h+emembrane, 0, tc};
Point(24) 	= {-length/2-esupport, -h+emembrane, 0, tc};
Point(25) 	= {-length/2-overlap, -h+emembrane, 0, tc};
Point(26) 	= {length/2-overlap, -h+emembrane, 0, tc};
Point(27) 	= {length/2+overlap, -h+emembrane, 0, tc};
Point(28) 	= {length/2+esupport, -h+emembrane, 0, tc};
Point(29) 	= {length/2-esupport, -h+emembrane, 0, tc};
Point(30) 	= {length/2-esupport, h-emembrane, 0, tc};
Point(31) 	= {length/2+esupport, h-emembrane, 0, tc};
Point(32) 	= {length/2+overlap, h-emembrane, 0, tc};
Point(33) 	= {length/2-overlap, h-emembrane, 0, tc};
Point(34) 	= {-length/2-esupport, h, 0, tc};
Point(35) 	= {-length/2-esupport, -h, 0, tc};
Point(36) 	= {-length/2+esupport, h, 0, tc};
Point(37) 	= {-length/2+esupport, -h, 0, tc};
Point(38) 	= {length/2-esupport, h, 0, tc};
Point(39) 	= {length/2-esupport, -h, 0, tc};
Point(40) 	= {length/2+esupport, h, 0, tc};
Point(41) 	= {length/2+esupport, -h, 0, tc};



Line(1) = {34, 36};
Line(2) = {2, 3};
Line(3) = {38, 40};
Line(4) = {4, 32};
Line(5) = {32, 27};
Line(6) = {27, 6};
Line(7) = {39, 41};
Line(8) = {8, 9};
Line(9) = {35, 37};
Line(10) = {10, 25};
Line(11) = {25, 19};
Line(12) = {19, 1};
Line(13) = {19, 17};
Line(14) = {17, 24};
Line(15) = {24, 25};
Line(16) = {22, 23};
Line(17) = {23, 18};
Line(18) = {18, 21};
Line(19) = {21, 22};
Line(20) = {22, 9};
Line(21) = {2, 21};
Line(22) = {3, 33};
Line(23) = {33, 26};
Line(24) = {26, 8};
Line(25) = {26, 29};
Line(26) = {29, 30};
Line(27) = {30, 33};
Line(28) = {32, 31};
Line(29) = {31, 28};
Line(30) = {28, 27};
Line(31) = {26, 22};
Line(32) = {21, 33};
Line(33) = {34, 17};
Line(34) = {24, 35};
Line(35) = {36, 18};
Line(36) = {23, 37};
Line(37) = {38, 30};
Line(38) = {29, 39};
Line(39) = {40, 31};
Line(40) = {28, 41};
Line(41) = {1, 34};
Line(42) = {10, 35};
Line(43) = {36, 2};
Line(44) = {37, 9};
Line(45) = {3, 38};
Line(46) = {8, 39};
Line(47) = {40, 4};
Line(48) = {41, 6};
Line(49) = {17, 18};
Line(50) = {24, 23};
Line(51) = {30, 31};
Line(52) = {29, 28};


Line Loop(33) = {11, 13, 14, 15};
Plane Surface(1) = {33};
Line Loop(35) = {17, 18, 19, 16};
Plane Surface(2) = {35};
Line Loop(37) = {19, -31, -23, -32};
Plane Surface(3) = {37};
Line Loop(39) = {23, 25, 26, 27};
Plane Surface(4) = {39};
Line Loop(41) = {29, 30, -5, 28};
Plane Surface(5) = {41};
Line Loop(43) = {14, 50, 17, -49};
Plane Surface(6) = {43};
Line Loop(45) = {26, 51, 29, -52};
Plane Surface(7) = {45};
Line Loop(47) = {12, 41, 33, -13};
Plane Surface(8) = {47};
Line Loop(49) = {10, -15, 34, -42};
Plane Surface(9) = {49};
Line Loop(51) = {33, 49, -35, -1};
Plane Surface(10) = {51};
Line Loop(53) = {34, 9, -36, -50};
Plane Surface(11) = {53};
Line Loop(57) = {35, 18, -21, -43};
Plane Surface(12) = {57};
Line Loop(59) = {20, -44, -36, -16};
Plane Surface(13) = {59};
Line Loop(60) = {2, 22, -32, -21};
Plane Surface(14) = {60};
Line Loop(62) = {24, 8, -20, -31};
Plane Surface(15) = {62};
Line Loop(63) = {22, -27, -37, -45};
Plane Surface(16) = {63};
Line Loop(64) = {24, 46, -38, -25};
Plane Surface(17) = {64};
Line Loop(65) = {37, 51, -39, -3};
Plane Surface(18) = {65};
Line Loop(67) = {38, 7, -40, -52};
Plane Surface(19) = {67};
Line Loop(69) = {39, -28, -4, -47};
Plane Surface(20) = {69};
Line Loop(71) = {40, 48, -6, -30};
Plane Surface(21) = {71};



// Structured rectangular mesh:
Geometry.CopyMeshingMethod = 1;

n_air_vertical = 6;
n_air_horizontal = 18; 

n_membrane_vertical = 2;

Transfinite Line {11} = n_air_vertical;
Transfinite Line {13} = n_air_horizontal;
Transfinite Line {14} = n_air_vertical;
Transfinite Line {15} = n_air_horizontal;
Transfinite Surface {1} = {19,17,24,25};
Recombine Surface {1};

Transfinite Line {17} = n_air_vertical;
Transfinite Line {18} = n_air_horizontal;
Transfinite Line {19} = n_air_vertical;
Transfinite Line {16} = n_air_horizontal;
Transfinite Surface {2} = {18,21,22,23};
Recombine Surface {2};

Transfinite Line {19} = n_air_vertical;
Transfinite Line {32} = n_air_horizontal/2;
Transfinite Line {23} = n_air_vertical;
Transfinite Line {31} = n_air_horizontal/2;
Transfinite Surface {3} = {21,33,26,22};
Recombine Surface {3};

Transfinite Line {23} = n_air_vertical;
Transfinite Line {27} = n_air_horizontal;
Transfinite Line {26} = n_air_vertical;
Transfinite Line {25} = n_air_horizontal;
Transfinite Surface {4} = {33,30,29,26};
Recombine Surface {4};

Transfinite Line {29} = n_air_vertical;
Transfinite Line {28} = n_air_horizontal;
Transfinite Line {5} = n_air_vertical;
Transfinite Line {30} = n_air_horizontal;
Transfinite Surface {5} = {31,32,27,28};
Recombine Surface {5};

Transfinite Line {14} = n_air_vertical;
Transfinite Line {49} = n_air_horizontal/3;
Transfinite Line {17} = n_air_vertical;
Transfinite Line {50} = n_air_horizontal/3;
Transfinite Surface {6} = {17,18,23,24};
Recombine Surface {6};

Transfinite Line {26} = n_air_vertical;
Transfinite Line {51} = n_air_horizontal/3;
Transfinite Line {29} = n_air_vertical;
Transfinite Line {52} = n_air_horizontal/3;
Transfinite Surface {7} = {30,31,28,29};
Recombine Surface {7};

Transfinite Line {12} = n_membrane_vertical;
Transfinite Line {41} = n_air_horizontal;
Transfinite Line {33} = n_membrane_vertical;
Transfinite Line {13} = n_air_horizontal;
Transfinite Surface {8} = {1,34,17,19};
Recombine Surface {8};

Transfinite Line {10} = n_membrane_vertical;
Transfinite Line {15} = n_air_horizontal;
Transfinite Line {34} = n_membrane_vertical;
Transfinite Line {42} = n_air_horizontal;
Transfinite Surface {9} = {25,24,35,10};
Recombine Surface {9};

Transfinite Line {33} = n_membrane_vertical;
Transfinite Line {1} = n_air_horizontal/3;
Transfinite Line {35} = n_membrane_vertical;
Transfinite Line {49} = n_air_horizontal/3;
Transfinite Surface {10} = {34,36,18,17};
Recombine Surface {10};

Transfinite Line {34} = n_membrane_vertical;
Transfinite Line {50} = n_air_horizontal/3;
Transfinite Line {36} = n_membrane_vertical;
Transfinite Line {9} = n_air_horizontal/3;
Transfinite Surface {11} = {24,23,37,35};
Recombine Surface {11};

Transfinite Line {35} = n_membrane_vertical;
Transfinite Line {43} = n_air_horizontal;
Transfinite Line {21} = n_membrane_vertical;
Transfinite Line {18} = n_air_horizontal;
Transfinite Surface {12} = {36,2,21,18};
Recombine Surface {12};

Transfinite Line {36} = n_membrane_vertical;
Transfinite Line {16} = n_air_horizontal;
Transfinite Line {20} = n_membrane_vertical;
Transfinite Line {44} = n_air_horizontal;
Transfinite Surface {13} = {23,22,9,37};
Recombine Surface {13};

Transfinite Line {21} = n_membrane_vertical;
Transfinite Line {2} = n_air_horizontal/2;
Transfinite Line {22} = n_membrane_vertical;
Transfinite Line {32} = n_air_horizontal/2;
Transfinite Surface {14} = {2,3,33,21};
Recombine Surface {14};

Transfinite Line {20} = n_membrane_vertical;
Transfinite Line {31} = n_air_horizontal/2;
Transfinite Line {24} = n_membrane_vertical;
Transfinite Line {8} = n_air_horizontal/2;
Transfinite Surface {15} = {22,26,8,9};
Recombine Surface {15};

Transfinite Line {22} = n_membrane_vertical;
Transfinite Line {45} = n_air_horizontal;
Transfinite Line {37} = n_membrane_vertical;
Transfinite Line {27} = n_air_horizontal;
Transfinite Surface {16} = {3,38,30,33};
Recombine Surface {16};

Transfinite Line {24} = n_membrane_vertical;
Transfinite Line {25} = n_air_horizontal;
Transfinite Line {38} = n_membrane_vertical;
Transfinite Line {46} = n_air_horizontal;
Transfinite Surface {17} = {26,29,39,8};
Recombine Surface {17};

Transfinite Line {37} = n_membrane_vertical;
Transfinite Line {3} = n_air_horizontal/3;
Transfinite Line {39} = n_membrane_vertical;
Transfinite Line {51} = n_air_horizontal/3;
Transfinite Surface {18} = {38,40,31,30};
Recombine Surface {18};

Transfinite Line {38} = n_membrane_vertical;
Transfinite Line {52} = n_air_horizontal/3;
Transfinite Line {40} = n_membrane_vertical;
Transfinite Line {7} = n_air_horizontal/3;
Transfinite Surface {19} = {29,28,41,39};
Recombine Surface {19};

Transfinite Line {39} = n_membrane_vertical;
Transfinite Line {47} = n_air_horizontal;
Transfinite Line {4} = n_membrane_vertical;
Transfinite Line {28} = n_air_horizontal;
Transfinite Surface {20} = {40,4,32,31};
Recombine Surface {20};

Transfinite Line {40} = n_membrane_vertical;
Transfinite Line {30} = n_air_horizontal;
Transfinite Line {6} = n_membrane_vertical;
Transfinite Line {48} = n_air_horizontal;
Transfinite Surface {21} = {28,27,6,41};
Recombine Surface {21};

// End structured mesh definition




For x In {0:nx-1}
	For y In {0:ny-1}

		sigma_up~{x+nx*y+1} 				= 10001*nx*ny+4*x+4*nx*y+1;
		sigma_right~{x+nx*y+1} 				= 10001*nx*ny+4*x+4*nx*y+2;
		sigma_down~{x+nx*y+1} 				= 10001*nx*ny+4*x+4*nx*y+3;
		sigma_left~{x+nx*y+1} 				= 10001*nx*ny+4*x+4*nx*y+4;

		omega~{x+nx*y+1} 				= 1000*nx*ny+3*x+nx*3*y+1;
		solid~{x+nx*y+1}				= 1000*nx*ny+3*x+nx*3*y+2;
		solid_deformed~{x+nx*y+1}			= 1000*nx*ny+5*x+nx*5*y+5;
		air~{x+nx*y+1}					= 1000*nx*ny+3*x+nx*3*y+3;

		electrode~{x+nx*y+1} 				= 100000*nx*ny+3*x+3*nx*y+1;
		epsilon_variation_interfaces~{x+nx*y+1} 	= 100000*nx*ny+3*x+3*nx*y+2;
		air_boundaries~{x+nx*y+1} 			= 100000*nx*ny+3*x+3*nx*y+3;

	EndFor
EndFor


For x In {0:nx-1}
	For y In {0:ny-1}

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{2}; } };
		Physical Line(electrode~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{41,1,43,2,45,3,47,4,6,48,7,46,8,44,9,42,10,12,13,14,15,16,17,18,31,32,25,26,27,28,29,30}; } };
		Physical Line(epsilon_variation_interfaces~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{13,14,15,16,17,18,31,32,25,26,27,28,29,30}; } };
		Physical Line(air_boundaries~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{41,1,43,2,45,3,47}; } };
		Physical Line(sigma_up~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{4,5,6}; } };
		Physical Line(sigma_right~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{48,7,46,8,44,9,42}; } };
		Physical Line(sigma_down~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Line{10,11,12}; } };
		Physical Line(sigma_left~{x+nx*y+1}) = {IDList[]};

	EndFor
EndFor

For x In {0:nx-1}
	For y In {0:ny-1}

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Surface{1,2,3,4,5}; } };
		Physical Surface(air~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Surface{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}; } };
		Physical Surface(solid~{x+nx*y+1}) = {IDList[]};

		IDList[] = Translate {(x+2)*length, 2*length, 0} { Duplicata{ Surface{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}; } };
		Physical Surface(solid_deformed~{x+nx*y+1}) = {IDList[]};

	EndFor
EndFor


// Removing different definitions of the same entity:
Coherence;




