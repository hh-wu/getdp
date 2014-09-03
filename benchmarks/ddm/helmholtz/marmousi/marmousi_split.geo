Include "params.geo";

lc=LC;

Ddom = D/N_DOM;
iPoint = Ceil(xSource/Ddom);
// Printf("iPoint: %g",iPoint);

For i In {1:N_DOM}
If (i!=iPoint)

Delete Model;

Point(1) = {(i-1)*Ddom,-d,0,lc};
Point(2) = {i*Ddom,-d,0,lc};
Point(3) = {i*Ddom,0,0,lc};
Point(4) = {(i-1)*Ddom,0,0,lc};

Line(10) = {1,2};
Line(11) = {2,3};
Line(12) = {3,4};
Line(13) = {4,1};

Line Loop(40) = {10:13};
Plane Surface(100) = {40};

Transfinite Line{10,12} = Ddom/lc+1 Using Progression 1;
Transfinite Line{11,13} = d/lc+1 Using Progression 1;

Transfinite Surface{100};
Recombine Surface{100};

Mesh 2;

If (i==1)
Physical Line((1000+i)) = {10};
Physical Line((5000)) = {11};
Physical Line((3000+i)) = {12};
Physical Line(4001) = {13};
Physical Surface(6000+i) = {100};
EndIf
If (i==N_DOM)
Physical Line((1000+i)) = {10};
Physical Line((2000+N_DOM)) = {11};
Physical Line((3000+i)) = {12};
Physical Line(((3+i)*1000)) = {13};
Physical Surface(6000+i) = {100};
EndIf
If (i>1 && i<N_DOM)
Physical Line((1000+i)) = {10};
Physical Line(((4+i)*1000)) = {11};
Physical Line((3000+i)) = {12};
Physical Line(((3+i)*1000)) = {13};
Physical Surface(6000+i) = {100};
EndIf


Save Sprintf("marmousi_mshcut%g.msh", i-1);


EndIf
EndFor


Delete Model;
i = iPoint;


Point(1) = {(i-1)*Ddom,-d,0,lc};
Point(2) = {i*Ddom,-d,0,lc};
Point(3) = {i*Ddom,0,0,lc};
Point(4) = {(i-1)*Ddom,0,0,lc};

Point(5) = {xSource,ySource,0,lc};

Point(6) = {xSource,-d,0,lc};
Point(7) = {i*Ddom,ySource,0,lc};
Point(8) = {xSource,0,0,lc};
Point(9) = {(i-1)*Ddom,ySource,0,lc};

Line(10) = {1,6};
Line(11) = {6,2};
Line(12) = {2,7};
Line(13) = {7,3};
Line(14) = {3,8};
Line(15) = {8,4};
Line(16) = {4,9};
Line(17) = {9,1};
Line(18) = {6,5};
Line(19) = {7,5};
Line(20) = {8,5};
Line(21) = {9,5};

Line Loop(40) = {10,18,-21,17};
Plane Surface(100) = {40};
Line Loop(50) = {11,12,19,-18};
Plane Surface(101) = {50};
Line Loop(60) = {-19,13,14,20};
Plane Surface(102) = {60};
Line Loop(70) = {21,-20,15,16};
Plane Surface(103) = {70};

Transfinite Line{10,15,21} = (xSource-(i-1)*Ddom)/lc+1 Using Progression 1;
Transfinite Line{11,14,19} = (i*Ddom-xSource)/lc+1 Using Progression 1;
Transfinite Line{12,17,18} = (d+ySource)/lc+1 Using Progression 1;
Transfinite Line{13,16,20} = (-ySource)/lc+1 Using Progression 1;
Transfinite Surface{100:103};
Recombine Surface{100:103};

Mesh 2;

Physical Point(1) = {5};
Physical Line((1000+i)) = {10:11};
Physical Line(((4+i)*1000)) = {12:13};
Physical Line((3000+i)) = {14:15};
Physical Line(((3+i)*1000)) = {16:17};
Physical Surface(6000+i) = {100:103};


Save Sprintf("marmousi_mshcut%g.msh", i-1);
