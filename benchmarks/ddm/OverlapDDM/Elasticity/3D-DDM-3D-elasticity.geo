overlap = 0.1;

nx = 4;
ny = 2;

tc = 0.1;

Point(1) 	= {-0.5 - overlap, 0.5 + overlap, 0, tc};
Point(2) 	= {-0.5 + overlap, 0.5 + overlap, 0, tc};
Point(3) 	= {0.5 - overlap, 0.5 + overlap, 0, tc};
Point(4) 	= {0.5 + overlap, 0.5 + overlap, 0, tc};
Point(5) 	= {0.5 + overlap, 0.5 - overlap, 0, tc};
Point(6) 	= {0.5 + overlap, -0.5 + overlap, 0, tc};
Point(7) 	= {0.5 + overlap, -0.5 - overlap, 0, tc};
Point(8) 	= {0.5 - overlap, -0.5 - overlap, 0, tc};
Point(9) 	= {-0.5 + overlap, -0.5 - overlap, 0, tc};
Point(10) 	= {-0.5 - overlap, -0.5 - overlap, 0, tc};
Point(11) 	= {-0.5 - overlap, -0.5 + overlap, 0, tc};
Point(12) 	= {-0.5 - overlap, 0.5 - overlap, 0, tc};

Point(13) 	= {-0.5 + overlap, 0.5 - overlap, 0, tc};
Point(14) 	= {0.5 - overlap, 0.5 - overlap, 0, tc};
Point(15) 	= {0.5 - overlap, -0.5 + overlap, 0, tc};
Point(16) 	= {-0.5 + overlap, -0.5 + overlap, 0, tc};


Line(1)  	= {1,2};
Line(2)  	= {2,3};
Line(3)  	= {3,4};
Line(4)  	= {4,5};
Line(5)  	= {5,6};
Line(6)  	= {6,7};
Line(7)  	= {7,8};
Line(8)  	= {8,9};
Line(9)  	= {9,10};
Line(10)  	= {10,11};
Line(11)  	= {11,12};
Line(12)  	= {12,1};

Line(13)  	= {13,14};
Line(14)  	= {14,15};
Line(15)  	= {15,16};
Line(16)  	= {16,13};
Line(17)  	= {2,13};
Line(18)  	= {13,12};
Line(19)  	= {5,14};
Line(20)  	= {14,3};
Line(21)  	= {8,15};
Line(22)  	= {15,6};
Line(23)  	= {11,16};
Line(24)  	= {16,9};

Line Loop(1)	= {1,17,18,12};
Line Loop(2)	= {2,-20,-13,-17};
Line Loop(3)	= {3,4,19,20};
Line Loop(4)	= {-19,5,-22,-14};
Line Loop(5)	= {22,6,7,21};
Line Loop(6)	= {-15,-21,8,-24};
Line Loop(7)	= {23,24,9,10};
Line Loop(8)	= {11,-18,-16,-23};
Line Loop(9)	= {13,14,15,16};

Plane Surface(1)= {1};
Plane Surface(2)= {2};
Plane Surface(3)= {3};
Plane Surface(4)= {4};
Plane Surface(5)= {5};
Plane Surface(6)= {6};
Plane Surface(7)= {7};
Plane Surface(8)= {8};
Plane Surface(9)= {9};

Extrude{0,0,0.1}{ Surface{1}; }
Extrude{0,0,0.1}{ Surface{2}; }
Extrude{0,0,0.1}{ Surface{3}; }
Extrude{0,0,0.1}{ Surface{4}; }
Extrude{0,0,0.1}{ Surface{5}; }
Extrude{0,0,0.1}{ Surface{6}; }
Extrude{0,0,0.1}{ Surface{7}; }
Extrude{0,0,0.1}{ Surface{8}; }
Extrude{0,0,0.1}{ Surface{9}; }



For x In {0:nx-1}
	For y In {0:ny-1}

		sigma_up~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+1;
		sigma_right~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+2;
		sigma_down~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+3;
		sigma_left~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+4;

		omega~{x+nx*y+1} 	= 1000*nx*ny+x+nx*y+1;

	EndFor
EndFor




For x In {0:nx-1}
	For y In {0:ny-1}

		IDList~{100*x+100*nx*y+1} = Translate {x+2, y+2, 0} { Duplicata{ Surface{33}; } };
		IDList~{100*x+100*nx*y+2} = Translate {x+2, y+2, 0} { Duplicata{ Surface{55}; } };
		IDList~{100*x+100*nx*y+3} = Translate {x+2, y+2, 0} { Duplicata{ Surface{77}; } };
		IDList~{100*x+100*nx*y+4} = Translate {x+2, y+2, 0} { Duplicata{ Surface{81}; } };
		IDList~{100*x+100*nx*y+5} = Translate {x+2, y+2, 0} { Duplicata{ Surface{103}; } };
		IDList~{100*x+100*nx*y+6} = Translate {x+2, y+2, 0} { Duplicata{ Surface{125}; } };
		IDList~{100*x+100*nx*y+7} = Translate {x+2, y+2, 0} { Duplicata{ Surface{129}; } };
		IDList~{100*x+100*nx*y+8} = Translate {x+2, y+2, 0} { Duplicata{ Surface{151}; } };
		IDList~{100*x+100*nx*y+9} = Translate {x+2, y+2, 0} { Duplicata{ Surface{173}; } };
		IDList~{100*x+100*nx*y+10} = Translate {x+2, y+2, 0} { Duplicata{ Surface{177}; } };
		IDList~{100*x+100*nx*y+11} = Translate {x+2, y+2, 0} { Duplicata{ Surface{187}; } };
		IDList~{100*x+100*nx*y+12} = Translate {x+2, y+2, 0} { Duplicata{ Surface{45}; } };


		If (x == 0 && y == 0)

			Physical Surface(sigma_up~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+1},IDList~{100*x+100*nx*y+2},IDList~{100*x+100*nx*y+3}};
			Physical Surface(sigma_right~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+4},IDList~{100*x+100*nx*y+5},IDList~{100*x+100*nx*y+6}};
			Physical Surface(sigma_down~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+7},IDList~{100*x+100*nx*y+8},IDList~{100*x+100*nx*y+9}};
			Physical Surface(sigma_left~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+10},IDList~{100*x+100*nx*y+11},IDList~{100*x+100*nx*y+12}};

		EndIf
		If (x > 0 && y > 0)

			Physical Surface(sigma_up~{x+nx*y+1}) = {IDList~{100*(x-1)+100*nx*y+3},IDList~{100*x+100*nx*y+2},IDList~{100*x+100*nx*y+3}};
			Physical Surface(sigma_right~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+4},IDList~{100*x+100*nx*y+5},IDList~{100*x+100*nx*(y-1)+4}};
			Physical Surface(sigma_down~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+7},IDList~{100*x+100*nx*y+8},IDList~{100*(x-1)+100*nx*y+7}};
			Physical Surface(sigma_left~{x+nx*y+1}) = {IDList~{100*x+100*nx*(y-1)+12},IDList~{100*x+100*nx*y+11},IDList~{100*x+100*nx*y+12}};

		EndIf
		If (x == 0 && y > 0)

			Physical Surface(sigma_up~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+1},IDList~{100*x+100*nx*y+2},IDList~{100*x+100*nx*y+3}};
			Physical Surface(sigma_right~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+4},IDList~{100*x+100*nx*y+5},IDList~{100*x+100*nx*(y-1)+4}};
			Physical Surface(sigma_down~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+7},IDList~{100*x+100*nx*y+8},IDList~{100*x+100*nx*y+9}};
			Physical Surface(sigma_left~{x+nx*y+1}) = {IDList~{100*x+100*nx*(y-1)+12},IDList~{100*x+100*nx*y+11},IDList~{100*x+100*nx*y+12}};

		EndIf
		If (y == 0 && x > 0)

			Physical Surface(sigma_up~{x+nx*y+1}) = {IDList~{100*(x-1)+100*nx*y+3},IDList~{100*x+100*nx*y+2},IDList~{100*x+100*nx*y+3}};
			Physical Surface(sigma_right~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+4},IDList~{100*x+100*nx*y+5},IDList~{100*x+100*nx*y+6}};
			Physical Surface(sigma_down~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+7},IDList~{100*x+100*nx*y+8},IDList~{100*(x-1)+100*nx*y+7}};
			Physical Surface(sigma_left~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+10},IDList~{100*x+100*nx*y+11},IDList~{100*x+100*nx*y+12}};

	
		EndIf

	EndFor
EndFor

For x In {0:nx-1}
	For y In {0:ny-1}


		IDList~{10*x+10*nx*y+1} = Translate {x+2, y+2, 0} { Duplicata{ Volume{1}; } };
		IDList~{10*x+10*nx*y+2} = Translate {x+2, y+2, 0} { Duplicata{ Volume{2}; } };
		IDList~{10*x+10*nx*y+3} = Translate {x+2, y+2, 0} { Duplicata{ Volume{3}; } };
		IDList~{10*x+10*nx*y+4} = Translate {x+2, y+2, 0} { Duplicata{ Volume{4}; } };
		IDList~{10*x+10*nx*y+5} = Translate {x+2, y+2, 0} { Duplicata{ Volume{5}; } };
		IDList~{10*x+10*nx*y+6} = Translate {x+2, y+2, 0} { Duplicata{ Volume{6}; } };
		IDList~{10*x+10*nx*y+7} = Translate {x+2, y+2, 0} { Duplicata{ Volume{7}; } };
		IDList~{10*x+10*nx*y+8} = Translate {x+2, y+2, 0} { Duplicata{ Volume{8}; } };
		IDList~{10*x+10*nx*y+9} = Translate {x+2, y+2, 0} { Duplicata{ Volume{9}; } };



		If (x == 0 && y == 0)
			Physical Volume(omega~{x+nx*y+1}) = {IDList~{10*x+10*nx*y+1},IDList~{10*x+10*nx*y+2},IDList~{10*x+10*nx*y+3},
								IDList~{10*x+10*nx*y+4},IDList~{10*x+10*nx*y+5},IDList~{10*x+10*nx*y+6},
								IDList~{10*x+10*nx*y+7},IDList~{10*x+10*nx*y+8},IDList~{10*x+10*nx*y+9}};

		EndIf
		If (x > 0 && y > 0)
			Physical Volume(omega~{x+nx*y+1}) = {IDList~{10*x+10*nx*y+1},IDList~{10*x+10*nx*y+2},IDList~{10*x+10*nx*y+3},
								IDList~{10*x+10*nx*y+4},IDList~{10*x+10*nx*y+5},IDList~{10*x+10*nx*y+6},
								IDList~{10*x+10*nx*y+7},IDList~{10*x+10*nx*y+8},IDList~{10*x+10*nx*y+9},
								IDList~{10*x+10*nx*(y-1)+2},IDList~{10*x+10*nx*(y-1)+3},
								IDList~{10*(x-1)+10*nx*y+3},IDList~{10*(x-1)+10*nx*y+4},IDList~{10*(x-1)+10*nx*(y-1)+3}};
		EndIf
		If (x == 0 && y > 0)
			Physical Volume(omega~{x+nx*y+1}) = {IDList~{10*x+10*nx*y+1},IDList~{10*x+10*nx*y+2},IDList~{10*x+10*nx*y+3},
								IDList~{10*x+10*nx*y+4},IDList~{10*x+10*nx*y+5},IDList~{10*x+10*nx*y+6},
								IDList~{10*x+10*nx*y+7},IDList~{10*x+10*nx*y+8},IDList~{10*x+10*nx*y+9},
								IDList~{10*x+10*nx*(y-1)+1}, IDList~{10*x+10*nx*(y-1)+2},IDList~{10*x+10*nx*(y-1)+3}};
		EndIf
		If (y == 0 && x > 0)
			Physical Volume(omega~{x+nx*y+1}) = {IDList~{10*x+10*nx*y+1},IDList~{10*x+10*nx*y+2},IDList~{10*x+10*nx*y+3},
								IDList~{10*x+10*nx*y+4},IDList~{10*x+10*nx*y+5},IDList~{10*x+10*nx*y+6},
								IDList~{10*x+10*nx*y+7},IDList~{10*x+10*nx*y+8},IDList~{10*x+10*nx*y+9},
								IDList~{10*(x-1)+10*nx*y+3},IDList~{10*(x-1)+10*nx*y+4},IDList~{10*(x-1)+10*nx*y+5}};
		EndIf

	EndFor
EndFor







