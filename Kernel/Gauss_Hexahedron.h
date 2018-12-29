// GetDP - Copyright (C) 1997-2019 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

/* 6 integration points (DHATT ET TOUZOT, page 299) */

#define a1   0.40824826
#define a2   0.81649658
#define b1   0.70710678
#define c1   0.57735027
#define w1   1.3333333333

static double xhex6[6] = { a1,  a1, -a1, -a1, -a2,  a2};
static double yhex6[6] = { b1, -b1,  b1, -b1,  0.,  0.};
static double zhex6[6] = {-c1, -c1,  c1,  c1, -c1,  c1};
static double phex6[6] = { w1,  w1,  w1,  w1,  w1,  w1};

#undef a1
#undef a2
#undef b1
#undef c1
#undef w1


#define b   0.795822426
#define c   0.758786911
#define wb  0.886426593 
#define wc  0.335180055 

static double xhex14[14] = {  b, -b,  0,  0,  0,  0,  c,  c,  c,  c, -c, -c, -c, -c };
static double yhex14[14] = {  0,  0,  b, -b,  0,  0,  c,  c, -c, -c,  c,  c, -c, -c };
static double zhex14[14] = {  0,  0,  0,  0,  b, -b,  c, -c,  c, -c,  c, -c,  c, -c };
static double phex14[14] = { wb, wb, wb, wb, wb, wb, wc, wc, wc, wc, wc, wc, wc, wc };

#undef b
#undef c
#undef wb
#undef wc

/* 34 integration points (DHATT ET TOUZOT, page 299) */

static double xhex34[34] = {0.9317380000,-0.9317380000,0.,
			    0.,0.,0.,
			    0.9167441779,-0.9167441779,0.9167441779,
			    -0.9167441779,0.,0.,
			    0.,0.,0.9167441779,
			    -0.9167441779,0.9167441779,-0.9167441779,
			    0.4086003800,0.4086003800,
			    0.4086003800,0.4086003800,
			    -0.4086003800,-0.4086003800,
			    -0.4086003800,-0.4086003800,
			    0.7398529500,0.7398529500,
			    0.7398529500,0.7398529500,
			    -0.7398529500,-0.7398529500,
			    -0.7398529500,-0.7398529500};
static double yhex34[34] = {0.,0.,0.9317380000,
			    -0.9317380000,0.,0.,
			    0.9167441779,0.9167441779,-0.9167441779,
			    -0.9167441779,0.9167441779,-0.9167441779,
			    0.9167441779,-0.9167441779,0.,
			    0.,0.,0.,
			    0.4086003800,0.4086003800,
			    -0.4086003800,-0.4086003800,
			    0.4086003800,0.4086003800,
			    -0.4086003800,-0.4086003800,
			    0.7398529500,0.7398529500,
			    -0.7398529500,-0.7398529500,
			    0.7398529500,0.7398529500,
			    -0.7398529500,-0.7398529500};
static double zhex34[34] = {0.,0.,0.,
			    0.,0.9317380000,-0.9317380000,
			    0.,0.,0.,
			    0.,0.9167441779,0.9167441779,
			    -0.9167441779,-0.9167441779,0.9167441779,  
			    0.9167441779,-0.9167441779,-0.9167441779,
			    0.4086003800,-0.4086003800,
			    0.4086003800,-0.4086003800,
			    0.4086003800,-0.4086003800,
			    0.4086003800,-0.4086003800,
			    0.7398529500,-0.7398529500,
			    0.7398529500,-0.7398529500,
			    0.7398529500,-0.7398529500,
			    0.7398529500,-0.7398529500};
static double phex34[34] = {0.28465447168,0.28465447168,
			    0.28465447168,0.28465447168, 
			    0.28465447168,0.28465447168,
			    0.09983142160,0.09983142160,
			    0.09983142160,0.09983142160,
			    0.09983142160,0.09983142160,
			    0.09983142160,0.09983142160,
			    0.09983142160,0.09983142160,
			    0.09983142160,0.09983142160,
			    0.42294183928,0.42294183928,
			    0.42294183928,0.42294183928,
			    0.42294183928,0.42294183928,
			    0.42294183928,0.42294183928,
			    0.21382017456,0.21382017456,  
			    0.21382017456,0.21382017456,  
			    0.21382017456,0.21382017456,  
			    0.21382017456,0.21382017456};

/* 77 integration points (STROUD, page 238) */

static double xhex77[77] = {0.,
			    0.5384693101,-0.5384693101,0.,0.,0.,0.,
			    0.9061798459,-0.9061798459,0.,0.,0.,0.,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.,0.,0.,0.,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.,0.,0.,0.,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.,0.,0.,0.,
			    0.,0.,0.,0.,
			    0.5384693101, 0.5384693101, 0.5384693101, 0.5384693101,
			    -0.5384693101,-0.5384693101,-0.5384693101,-0.5384693101,
			    0.9061798459, 0.9061798459, 0.9061798459, 0.9061798459,
			    -0.9061798459,-0.9061798459,-0.9061798459,-0.9061798459};
static double yhex77[77] = {0.,
			    0.,0.,0.5384693101,-0.5384693101,0.,0.,
			    0.,0.,0.9061798459,-0.9061798459,0.,0.,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.,0.,0.,0.,
			    0.5384693101, 0.5384693101,-0.5384693101,-0.5384693101,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.,0.,0.,0.,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.,0.,0.,0.,
			    0.,0.,0.,0.,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.5384693101,0.5384693101,-0.5384693101,-0.5384693101,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459,
			    0.9061798459,0.9061798459,-0.9061798459,-0.9061798459};
static double zhex77[77] = {0.,
			    0.,0.,0.,0.,0.5384693101,-0.5384693101,
			    0.,0.,0.,0.,0.9061798459,-0.9061798459,
			    0.,0.,0.,0.,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.,0.,0.,0.,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.,0.,0.,0.,
			    0.,0.,0.,0.,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.5384693101,-0.5384693101,0.5384693101,-0.5384693101,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459,
			    0.9061798459,-0.9061798459,0.9061798459,-0.9061798459};
static double phex77[77] = {-2.2577865569E+00,
			    1.704933503,1.704933503,1.704933503,1.704933503,
			    1.704933503,1.704933503,
			    -0.2524056575,-0.2524056575,-0.2524056575,-0.2524056575,
			    -0.2524056575,-0.2524056575,
			    -0.8069802194,-0.8069802194,-0.8069802194,-0.8069802194,
			    -0.8069802194,-0.8069802194,-0.8069802194,-0.8069802194,
			    -0.8069802194,-0.8069802194,-0.8069802194,-0.8069802194,
			    3.4187901E-02,3.4187901E-02,3.4187901E-02,3.4187901E-02,
			    3.4187901E-02,3.4187901E-02,3.4187901E-02,3.4187901E-02,
			    3.4187901E-02,3.4187901E-02,3.4187901E-02,3.4187901E-02,
			    0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,
			    0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,
			    0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,0.2268,
			    0.6325755140,0.6325755140,0.6325755140,0.6325755140,
			    0.6325755140,0.6325755140,0.6325755140,0.6325755140,
			    3.9040398E-02,3.9040398E-02,3.9040398E-02,3.9040398E-02,
			    3.9040398E-02,3.9040398E-02,3.9040398E-02,3.9040398E-02};
