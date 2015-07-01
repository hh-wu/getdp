// This is template for generating 1-D modelling domain for MQE analysis

// Following parameters must be given in quench_data.pro
// lengthPart1
// lengthPart2
// charLengthStart
// charLengthMid
// charLengthEnd

// Load parameters
Include "quench_data.pro";

// Points
Point(1) = {0, 0, 0, charLengthStart};
Point(2) = {lengthPart1, 0, 0, charLengthMid};
Point(3) = {lengthPart1+lengthPart2, 0, 0, charLengthEnd};

// Lines
Line(1) = {1,2};
Line(2) = {2,3};

// Physical domains
Physical Point(1001) = {1}; // Start
Physical Point(1002) = {2}; // Mid (if needed for some reason)
Physical Point(1003) = {3}; // End

Physical Line(2001) = {1}; // First part
Physical Line(2002) = {2}; // Second part
