mm = 1e-3;

Include "square.dat";

DefineConstant[ THICKNESS = {THICKNESS_00, Min 0.25*mm, Max 1*mm, Step 0.25*mm, Name "Lamination thickness (mm)"} ];
DefineConstant[ NumEle = {NumEle_00, Min 20, Max 200, Step 60, Name "Number of elements"} ];

//d = THICKNESS * mm;
d = THICKNESS;
lc = 1;

Point(1) = {0,0,0,lc};
Point(2) = {d,0,0,lc};
Point(3) = {d,d,0,lc};
Point(4) = {0,d,0,lc};

//Point(5) = {d/2,d/2,0,lc};

Line(1) = {1,2};
Line(2)= {2,3};
Line(3)={3,4};
Line(4)={4,1};

Line Loop(5)={1,2,3,4};

Plane Surface(6)={5} ;

//Transfinite Line{1} = NumEle Using Progression 0.955;
Transfinite Line{1} = NumEle;
Transfinite Line{2} = NumEle;
Transfinite Line{3} = NumEle;
Transfinite Line{4} = NumEle;


Physical Point(11) = {1};

//Physical Point(12) = {2};
//Physical Point(13) = {3};
//Physical Point(14) = {4};


Physical Line(15) = {1,2,3,4};

Physical Surface(16)={6};
