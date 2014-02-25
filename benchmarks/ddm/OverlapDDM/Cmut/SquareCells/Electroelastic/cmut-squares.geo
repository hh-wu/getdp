overlap = 0.3;

// Set the number of subdomains, do not forget to change it in the .pro file as well
nx = 2; // Do not set nx = 1
ny = 2;

lc = 0.06;

// Length of a subdomain:
sub_domain_length = 1;

increment = sub_domain_length*overlap/(2-2*overlap);

// Geo parameters:
hbase 			= 0.1;
hbaseinsulator		= 0.01;
hairgap			= 0.05;
hmembrane		= 0.01;

// Membrane support thickness:
wall_thickness		= 0.02;


// Frontal meshing algorithm:
Mesh.Algorithm3D = 4;

// Allowing several definitions of the same entity:
Geometry.AutoCoherence = 0;


// Cmut projected on the z = 0 plane:


Point(5) = {wall_thickness/2, wall_thickness/2, 0, lc};
Point(6) = {wall_thickness/2, 1-wall_thickness/2, 0, lc};
Point(7) = {1-wall_thickness/2, 1-wall_thickness/2, 0, lc};
Point(8) = {1-wall_thickness/2, wall_thickness/2, 0, lc};
Point(9) = {0.4, 0.4, 0, lc};
Point(10) = {0.4, 0.6, 0, lc};
Point(11) = {0.6, 0.6, 0, lc};
Point(12) = {0.6, 0.4, 0, lc};
Point(13) = {-increment, -increment, 0, lc};
Point(20) = {-increment, 1+increment, 0, lc};
Point(27) = {1+increment, 1+increment, 0, lc};
Point(34) = {1+increment, -increment, 0, lc};
Point(41) = {-increment, 1-increment, 0, lc};
Point(43) = {-wall_thickness/2, 1-increment, 0, lc};
Point(44) = {wall_thickness/2, 1-increment, 0, lc};
Point(45) = {1-wall_thickness/2, 1-increment, 0, lc};
Point(46) = {1+wall_thickness/2, 1-increment, 0, lc};
Point(48) = {1+increment, 1-increment, 0, lc};
Point(49) = {1+increment, increment, 0, lc};
Point(51) = {1+wall_thickness/2, increment, 0, lc};
Point(52) = {1-wall_thickness/2, increment, 0, lc};
Point(53) = {wall_thickness/2, increment, 0, lc};
Point(54) = {-wall_thickness/2, increment, 0, lc};
Point(56) = {-increment, increment, 0, lc};
Point(57) = {increment, -increment, 0, lc};
Point(59) = {increment, -wall_thickness/2, 0, lc};
Point(60) = {increment, wall_thickness/2, 0, lc};
Point(61) = {increment, 1-wall_thickness/2, 0, lc};
Point(62) = {increment, 1+wall_thickness/2, 0, lc};
Point(64) = {increment, 1+increment, 0, lc};
Point(65) = {1-increment, 1+increment, 0, lc};
Point(67) = {1-increment, 1+wall_thickness/2, 0, lc};
Point(68) = {1-increment, 1-wall_thickness/2, 0, lc};
Point(69) = {1-increment, wall_thickness/2, 0, lc};
Point(70) = {1-increment, -wall_thickness/2, 0, lc};
Point(72) = {1-increment, -increment, 0, lc};
Point(73) = {increment, increment, 0, lc};
Point(74) = {increment, 1-increment, 0, lc};
Point(75) = {1-increment, 1-increment, 0, lc};
Point(76) = {1-increment, increment, 0, lc};
Point(95) = {wall_thickness/2, -wall_thickness/2, 0, lc};
Point(96) = {-wall_thickness/2, -wall_thickness/2, 0, lc};
Point(97) = {-wall_thickness/2, wall_thickness/2, 0, lc};
Point(98) = {-wall_thickness/2, 1+wall_thickness/2, 0, lc};
Point(99) = {-wall_thickness/2, 1-wall_thickness/2, 0, lc};
Point(100) = {wall_thickness/2, 1+wall_thickness/2, 0, lc};
Point(101) = {1+wall_thickness/2, 1+wall_thickness/2, 0, lc};
Point(102) = {1+wall_thickness/2, 1-wall_thickness/2, 0, lc};
Point(103) = {1-wall_thickness/2, 1+wall_thickness/2, 0, lc};
Point(104) = {1+wall_thickness/2, wall_thickness/2, 0, lc};
Point(105) = {1+wall_thickness/2, -wall_thickness/2, 0, lc};
Point(106) = {1-wall_thickness/2, -wall_thickness/2, 0, lc};
Point(107) = {1-wall_thickness/2, -increment, 0, lc};
Point(108) = {1+wall_thickness/2, -increment, 0, lc};
Point(109) = {1+increment, wall_thickness/2, 0, lc};
Point(110) = {1+increment, -wall_thickness/2, 0, lc};
Point(111) = {1+increment, 1-wall_thickness/2, 0, lc};
Point(112) = {1+increment, 1+wall_thickness/2, 0, lc};
Point(113) = {1+wall_thickness/2, 1+increment, 0, lc};
Point(114) = {1-wall_thickness/2, 1+increment, 0, lc};
Point(115) = {wall_thickness/2, -increment, 0, lc};
Point(116) = {-wall_thickness/2, -increment, 0, lc};
Point(117) = {-wall_thickness/2, 1+increment, 0, lc};
Point(118) = {wall_thickness/2, 1+increment, 0, lc};
Point(119) = {-increment, -wall_thickness/2, 0, lc};
Point(120) = {-increment, wall_thickness/2, 0, lc};
Point(121) = {-increment, 1-wall_thickness/2, 0, lc};
Point(122) = {-increment, 1+wall_thickness/2, 0, lc};
Line(1) = {13, 119};
Line(2) = {119, 120};
Line(3) = {120, 56};
Line(4) = {56, 41};
Line(5) = {41, 121};
Line(6) = {121, 122};
Line(7) = {122, 20};
Line(8) = {20, 117};
Line(9) = {117, 118};
Line(10) = {118, 64};
Line(11) = {64, 65};
Line(12) = {65, 114};
Line(13) = {114, 113};
Line(14) = {113, 27};
Line(15) = {27, 112};
Line(16) = {112, 111};
Line(17) = {111, 48};
Line(18) = {48, 49};
Line(19) = {49, 109};
Line(20) = {109, 110};
Line(21) = {110, 34};
Line(22) = {34, 108};
Line(23) = {108, 107};
Line(24) = {107, 72};
Line(25) = {72, 57};
Line(26) = {57, 115};
Line(27) = {115, 116};
Line(28) = {116, 13};
Line(29) = {116, 96};
Line(30) = {97, 54};
Line(31) = {54, 43};
Line(32) = {43, 99};
Line(33) = {98, 117};
Line(34) = {122, 98};
Line(35) = {100, 62};
Line(36) = {62, 67};
Line(37) = {67, 103};
Line(38) = {101, 112};
Line(39) = {113, 101};
Line(40) = {46, 102};
Line(41) = {46, 51};
Line(42) = {51, 104};
Line(43) = {105, 108};
Line(44) = {110, 105};
Line(45) = {106, 70};
Line(46) = {70, 59};
Line(47) = {59, 95};
Line(48) = {96, 119};
Line(49) = {115, 95};
Line(50) = {5, 53};
Line(51) = {53, 44};
Line(52) = {44, 6};
Line(53) = {100, 118};
Line(54) = {121, 99};
Line(55) = {6, 61};
Line(56) = {61, 68};
Line(57) = {68, 7};
Line(58) = {102, 111};
Line(59) = {114, 103};
Line(60) = {7, 45};
Line(61) = {45, 52};
Line(62) = {52, 8};
Line(64) = {106, 107};
Line(65) = {109, 104};
Line(66) = {8, 69};
Line(67) = {69, 60};
Line(68) = {60, 5};
Line(69) = {97, 120};
Line(70) = {57, 59};
Line(71) = {59, 60};
Line(72) = {60, 73};
Line(76) = {73, 74};
Line(77) = {74, 61};
Line(78) = {61, 62};
Line(79) = {62, 64};
Line(80) = {41, 43};
Line(81) = {43, 44};
Line(82) = {44, 74};
Line(85) = {74, 75};
Line(86) = {75, 45};
Line(87) = {45, 46};
Line(88) = {46, 48};
Line(89) = {65, 67};
Line(90) = {67, 68};
Line(91) = {68, 75};
Line(94) = {75, 76};
Line(95) = {76, 69};
Line(96) = {69, 70};
Line(97) = {70, 72};
Line(98) = {49, 51};
Line(99) = {51, 52};
Line(100) = {52, 76};
Line(103) = {76, 73};
Line(104) = {73, 53};
Line(105) = {53, 54};
Line(106) = {54, 56};
Line(108) = {9, 10};
Line(111) = {10, 11};
Line(114) = {11, 12};
Line(117) = {12, 9};

// Defining surfaces for the cmut base:

Line Loop(119) = {1, -48, -29, 28};
Plane Surface(1) = {119};
Line Loop(121) = {3, -106, -30, 69};
Plane Surface(2) = {121};
Line Loop(123) = {4, 80, -31, 106};
Plane Surface(3) = {123};
Line Loop(125) = {80, 32, -54, -5};
Plane Surface(4) = {125};
Line Loop(127) = {7, 8, -33, -34};
Plane Surface(5) = {127};
Line Loop(129) = {53, 10, -79, -35};
Plane Surface(6) = {129};
Line Loop(131) = {79, 11, 89, -36};
Plane Surface(7) = {131};
Line Loop(133) = {89, 37, -59, -12};
Plane Surface(8) = {133};
Line Loop(135) = {39, 38, -15, -14};
Plane Surface(9) = {135};
Line Loop(137) = {40, 58, 17, -88};
Plane Surface(10) = {137};
Line Loop(139) = {41, -98, -18, -88};
Plane Surface(11) = {139};
Line Loop(141) = {42, -65, -19, 98};
Plane Surface(12) = {141};
Line Loop(143) = {44, 43, -22, -21};
Plane Surface(13) = {143};
Line Loop(145) = {64, 24, -97, -45};
Plane Surface(14) = {145};
Line Loop(147) = {97, 25, 70, -46};
Plane Surface(15) = {147};
Line Loop(149) = {70, 47, -49, -26};
Plane Surface(16) = {149};
Line Loop(151) = {29, 48, 2, -69, 30, -105, -50, -68, -71, 47, -49, 27};
Plane Surface(17) = {151};
Line Loop(153) = {105, 31, 81, -51};
Plane Surface(18) = {153};
Line Loop(155) = {32, -54, 6, 34, 33, 9, -53, 35, -78, -55, -52, -81};
Plane Surface(19) = {155};
Line Loop(157) = {78, 36, 90, -56};
Plane Surface(20) = {157};
Line Loop(159) = {90, 57, 60, 87, 40, 58, -16, -38, -39, -13, 59, -37};
Plane Surface(21) = {159};
Line Loop(161) = {61, -99, -41, -87};
Plane Surface(22) = {161};
Line Loop(163) = {62, 66, 96, -45, 64, -23, -43, -44, -20, 65, -42, 99};
Plane Surface(23) = {163};
Line Loop(165) = {96, 46, 71, -67};
Plane Surface(24) = {165};
Line Loop(167) = {68, 50, -104, -72};
Plane Surface(25) = {167};
Line Loop(169) = {104, 51, 82, -76};
Plane Surface(26) = {169};
Line Loop(171) = {82, 77, -55, -52};
Plane Surface(27) = {171};
Line Loop(173) = {77, 56, 91, -85};
Plane Surface(28) = {173};
Line Loop(175) = {91, 86, -60, -57};
Plane Surface(29) = {175};
Line Loop(177) = {94, -100, -61, -86};
Plane Surface(30) = {177};
Line Loop(179) = {62, 66, -95, -100};
Plane Surface(31) = {179};
Line Loop(181) = {67, 72, -103, 95};
Plane Surface(32) = {181};
Line Loop(182) = {76, 85, 94, 103};
Line Loop(183) = {117, 108, 111, 114};
Plane Surface(33) = {182, 183};
Line Loop(199) = {108, 111, 114, 117};
Plane Surface(34) = {199};



For x In {0:nx-1}
	For y In {0:ny-1}
		// NOTE: Chaneg the factors 4, 3 and 5 when defining a new physical entity!
		sigma_up~{x+nx*y+1} 		= 1001*nx*ny+4*x+4*nx*y+1;
		sigma_right~{x+nx*y+1} 		= 1001*nx*ny+4*x+4*nx*y+2;
		sigma_down~{x+nx*y+1} 		= 1001*nx*ny+4*x+4*nx*y+3;
		sigma_left~{x+nx*y+1} 		= 1001*nx*ny+4*x+4*nx*y+4;


		membrane_electrode~{x+nx*y+1}	= 10000*nx*ny+3*x+3*nx*y+1;
		bulk_electrode~{x+nx*y+1}	= 10000*nx*ny+3*x+3*nx*y+2;
		bulk_clamp~{x+nx*y+1}		= 10000*nx*ny+3*x+3*nx*y+3;

		bulk~{x+nx*y+1}			= 100000*nx*ny+5*x+5*nx*y+1;
		bulk_insulator~{x+nx*y+1}	= 100000*nx*ny+5*x+5*nx*y+2;
		membrane_support~{x+nx*y+1}	= 100000*nx*ny+5*x+5*nx*y+3;
		empty_gap~{x+nx*y+1}		= 100000*nx*ny+5*x+5*nx*y+4;
		membrane~{x+nx*y+1}		= 100000*nx*ny+5*x+5*nx*y+5;


	EndFor
EndFor


//////////////////// Defining CMUT array:


////////// Cmut bulk clamp surface:
For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, 0} { Duplicata{ Surface{1:34}; } };

		Physical Surface(bulk_clamp~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// Cmut Si bulk volume:
ExtrudeID1[] = Extrude{0,0,hbase}{ Surface{1:34}; Layers{2};};

For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, 0} { Duplicata{ Volume{ExtrudeID1[{1,7,13,19,25,31,37,43,49,55,61,67,73,79,85,91,97,111,117,131,137,151,157,171,177,183,189,195,201,207,213,219,225,235}]}; } };

		Physical Volume(bulk~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// Cmut bulk electrode surface:
For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, hbase} { Duplicata{ Surface{1:34}; } };

		Physical Surface(bulk_electrode~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// Cmut bulk insulator volume:
ExtrudeID2[] = Extrude{0,0,hbaseinsulator}{ Surface{1:34}; Layers{2};};

For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, hbase} { Duplicata{ Volume{ExtrudeID2[{1,7,13,19,25,31,37,43,49,55,61,67,73,79,85,91,97,111,117,131,137,151,157,171,177,183,189,195,201,207,213,219,225,235}]}; } };

		Physical Volume(bulk_insulator~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor



////////// Cmut membrane support volume:
ExtrudeID3[] = Extrude{0,0,hairgap}{ Surface{1:34}; Layers{2};};

For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, hbase+hbaseinsulator} { Duplicata{ Volume{ExtrudeID3[{97,111,117,131,137,151,157,171}]}; } };

		Physical Volume(membrane_support~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// Cmut empty gap volume:
ExtrudeID4[] = Extrude{0,0,hairgap}{ Surface{1:34}; Layers{2};};

For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, hbase+hbaseinsulator} { Duplicata{ Volume{ExtrudeID4[{1,7,13,19,25,31,37,43,49,55,61,67,73,79,85,177,183,189,195,201,207,213,219,225,235}]}; } };

		Physical Volume(empty_gap~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// Cmut membrane volume:
ExtrudeID5[] = Extrude{0,0,hmembrane}{ Surface{1:34}; Layers{2};};

For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, hbase+hbaseinsulator+hairgap} { Duplicata{ Volume{ExtrudeID5[{1,7,13,19,25,31,37,43,49,55,61,67,73,79,85,91,97,111,117,131,137,151,157,171,177,183,189,195,201,207,213,219,225,235}]}; } };

		Physical Volume(membrane~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// Cmut membrane electrode surface:
For x In {0:nx-1}
	For y In {0:ny-1}

		ID[] = Translate {x+2, y+2, hbase+hbaseinsulator+hairgap+hmembrane} { Duplicata{ Surface{34}; } };

		Physical Surface(membrane_electrode~{x+nx*y+1}) = {ID[]};

	EndFor
EndFor


////////// DDM SPECIFIC - Defining the 4 artificial interfaces:
For x In {0:nx-1}
	For y In {0:ny-1}

		// Up interface:
		ID1[] = Translate {x+2, y+2, 0} { Duplicata{ Surface{ExtrudeID1[{27,33,39,47,53,123,147}]}; } };
		ID2[] = Translate {x+2, y+2, hbase} { Duplicata{ Surface{ExtrudeID2[{27,33,39,47,53,123,147}]}; } };
		ID3[] = Translate {x+2, y+2, hbase+hbaseinsulator} { Duplicata{ Surface{ExtrudeID3[{27,33,39,47,53,123,147}]}; } };
		ID5[] = Translate {x+2, y+2, hbase+hbaseinsulator+hairgap} { Duplicata{ Surface{ExtrudeID5[{27,33,39,47,53,123,147}]}; } };

		Physical Surface(sigma_up~{x+nx*y+1}) = {ID1[],ID2[],ID3[],ID5[]};

		// Right interface:
		ID1[] = Translate {x+2, y+2, 0} { Duplicata{ Surface{ExtrudeID1[{52,58,64,70,77,144,166}]}; } };
		ID2[] = Translate {x+2, y+2, hbase} { Duplicata{ Surface{ExtrudeID2[{52,58,64,70,77,144,166}]}; } };
		ID3[] = Translate {x+2, y+2, hbase+hbaseinsulator} { Duplicata{ Surface{ExtrudeID3[{52,58,64,70,77,144,166}]}; } };
		ID5[] = Translate {x+2, y+2, hbase+hbaseinsulator+hairgap} { Duplicata{ Surface{ExtrudeID5[{52,58,64,70,77,144,166}]}; } };

		Physical Surface(sigma_right~{x+nx*y+1}) = {ID1[],ID2[],ID3[],ID5[]};

		// Down interface:
		ID1[] = Translate {x+2, y+2, 0} { Duplicata{ Surface{ExtrudeID1[{5,76,81,87,95,109,163}]}; } };
		ID2[] = Translate {x+2, y+2, hbase} { Duplicata{ Surface{ExtrudeID2[{5,76,81,87,95,109,163}]}; } };
		ID3[] = Translate {x+2, y+2, hbase+hbaseinsulator} { Duplicata{ Surface{ExtrudeID3[{5,76,81,87,95,109,163}]}; } };
		ID5[] = Translate {x+2, y+2, hbase+hbaseinsulator+hairgap} { Duplicata{ Surface{ExtrudeID5[{5,76,81,87,95,109,163}]}; } };

		Physical Surface(sigma_down~{x+nx*y+1}) = {ID1[],ID2[],ID3[],ID5[]};

		// Left interface:
		ID1[] = Translate {x+2, y+2, 0} { Duplicata{ Surface{ExtrudeID1[{2,8,14,23,26,100,120}]}; } };
		ID2[] = Translate {x+2, y+2, hbase} { Duplicata{ Surface{ExtrudeID2[{2,8,14,23,26,100,120}]}; } };
		ID3[] = Translate {x+2, y+2, hbase+hbaseinsulator} { Duplicata{ Surface{ExtrudeID3[{2,8,14,23,26,100,120}]}; } };
		ID5[] = Translate {x+2, y+2, hbase+hbaseinsulator+hairgap} { Duplicata{ Surface{ExtrudeID5[{2,8,14,23,26,100,120}]}; } };

		Physical Surface(sigma_left~{x+nx*y+1}) = {ID1[],ID2[],ID3[],ID5[]};

	EndFor
EndFor




// Removing different definitions of the same entity:
Coherence;





