overlap = 0.1;

// Set the number of subdomains, do not forget to change it in the .pro file as well
nx = 4; // Do not set nx = 1
ny = 3;

// Length of a subdomain:
sub_domain_length = 1;

// l gives the mesh size
l = 0.1;



increment = sub_domain_length*overlap/(2-2*overlap);


Point(1) 	= {-sub_domain_length/2 - increment, sub_domain_length/2 + increment, 0, l};
Point(2) 	= {-sub_domain_length/2 + increment, sub_domain_length/2 + increment, 0, l};
Point(3) 	= {sub_domain_length/2 - increment, sub_domain_length/2 + increment, 0, l};
Point(4) 	= {sub_domain_length/2 + increment, sub_domain_length/2 + increment, 0, l};
Point(5) 	= {sub_domain_length/2 + increment, sub_domain_length/2 - increment, 0, l};
Point(6) 	= {sub_domain_length/2 + increment, -sub_domain_length/2 + increment, 0, l};
Point(7) 	= {sub_domain_length/2 + increment, -sub_domain_length/2 - increment, 0, l};
Point(8) 	= {sub_domain_length/2 - increment, -sub_domain_length/2 - increment, 0, l};
Point(9) 	= {-sub_domain_length/2 + increment, -sub_domain_length/2 - increment, 0, l};
Point(10) 	= {-sub_domain_length/2 - increment, -sub_domain_length/2 - increment, 0, l};
Point(11) 	= {-sub_domain_length/2 - increment, -sub_domain_length/2 + increment, 0, l};
Point(12) 	= {-sub_domain_length/2 - increment, sub_domain_length/2 - increment, 0, l};

Point(13) 	= {-sub_domain_length/2 + increment, sub_domain_length/2 - increment, 0, l};
Point(14) 	= {sub_domain_length/2 - increment, sub_domain_length/2 - increment, 0, l};
Point(15) 	= {sub_domain_length/2 - increment, -sub_domain_length/2 + increment, 0, l};
Point(16) 	= {-sub_domain_length/2 + increment, -sub_domain_length/2 + increment, 0, l};


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



For x In {0:nx-1}
	For y In {0:ny-1}

		sigma_up~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+1;
		sigma_right~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+2;
		sigma_down~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+3;
		sigma_left~{x+nx*y+1} 	= 1001*nx*ny+4*x+4*nx*y+4;

		omega~{x+nx*y+1} 	= 1000*nx*ny+x+nx*y+1;

	EndFor
EndFor


Geometry.AutoCoherence = 0;

For x In {0:nx-1}
	For y In {0:ny-1}

		IDList~{100*x+100*nx*y+1} = Translate {x+10, y+10, 0} { Duplicata{ Line{1}; } };
		IDList~{100*x+100*nx*y+2} = Translate {x+10, y+10, 0} { Duplicata{ Line{2}; } };
		IDList~{100*x+100*nx*y+3} = Translate {x+10, y+10, 0} { Duplicata{ Line{3}; } };
		IDList~{100*x+100*nx*y+4} = Translate {x+10, y+10, 0} { Duplicata{ Line{4}; } };
		IDList~{100*x+100*nx*y+5} = Translate {x+10, y+10, 0} { Duplicata{ Line{5}; } };
		IDList~{100*x+100*nx*y+6} = Translate {x+10, y+10, 0} { Duplicata{ Line{6}; } };
		IDList~{100*x+100*nx*y+7} = Translate {x+10, y+10, 0} { Duplicata{ Line{7}; } };
		IDList~{100*x+100*nx*y+8} = Translate {x+10, y+10, 0} { Duplicata{ Line{8}; } };
		IDList~{100*x+100*nx*y+9} = Translate {x+10, y+10, 0} { Duplicata{ Line{9}; } };
		IDList~{100*x+100*nx*y+10} = Translate {x+10, y+10, 0} { Duplicata{ Line{10}; } };
		IDList~{100*x+100*nx*y+11} = Translate {x+10, y+10, 0} { Duplicata{ Line{11}; } };
		IDList~{100*x+100*nx*y+12} = Translate {x+10, y+10, 0} { Duplicata{ Line{12}; } };



		Physical Line(sigma_up~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+1},IDList~{100*x+100*nx*y+2},IDList~{100*x+100*nx*y+3}};
		Physical Line(sigma_right~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+4},IDList~{100*x+100*nx*y+5},IDList~{100*x+100*nx*y+6}};
		Physical Line(sigma_down~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+7},IDList~{100*x+100*nx*y+8},IDList~{100*x+100*nx*y+9}};
		Physical Line(sigma_left~{x+nx*y+1}) = {IDList~{100*x+100*nx*y+10},IDList~{100*x+100*nx*y+11},IDList~{100*x+100*nx*y+12}};


		IDList~{10*x+10*nx*y+1} = Translate {x+10, y+10, 0} { Duplicata{ Surface{1}; } };
		IDList~{10*x+10*nx*y+2} = Translate {x+10, y+10, 0} { Duplicata{ Surface{2}; } };
		IDList~{10*x+10*nx*y+3} = Translate {x+10, y+10, 0} { Duplicata{ Surface{3}; } };
		IDList~{10*x+10*nx*y+4} = Translate {x+10, y+10, 0} { Duplicata{ Surface{4}; } };
		IDList~{10*x+10*nx*y+5} = Translate {x+10, y+10, 0} { Duplicata{ Surface{5}; } };
		IDList~{10*x+10*nx*y+6} = Translate {x+10, y+10, 0} { Duplicata{ Surface{6}; } };
		IDList~{10*x+10*nx*y+7} = Translate {x+10, y+10, 0} { Duplicata{ Surface{7}; } };
		IDList~{10*x+10*nx*y+8} = Translate {x+10, y+10, 0} { Duplicata{ Surface{8}; } };
		IDList~{10*x+10*nx*y+9} = Translate {x+10, y+10, 0} { Duplicata{ Surface{9}; } };


		Physical Surface(omega~{x+nx*y+1}) = {IDList~{10*x+10*nx*y+1},IDList~{10*x+10*nx*y+2},IDList~{10*x+10*nx*y+3},
							IDList~{10*x+10*nx*y+4},IDList~{10*x+10*nx*y+5},IDList~{10*x+10*nx*y+6},
							IDList~{10*x+10*nx*y+7},IDList~{10*x+10*nx*y+8},IDList~{10*x+10*nx*y+9}};


	EndFor
EndFor


Coherence;





