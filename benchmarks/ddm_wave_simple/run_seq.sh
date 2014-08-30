#!/bin/bash

#PROBLEM="waveguide3D"
#PROBLEM="circle_pie"
#PROBLEM="circle_concentric"
PROBLEM="cylinder_concentric"
#PROBLEM="sphere_concentric"

OPT="-setnumber ANALYSIS 1
     -setnumber N_DOM 5
     -setnumber WAVENUMBER 10
     -setnumber N_LAMBDA 20
     -setnumber TC_TYPE 2
     -setnumber NP_OSRC 8"

OPT_waveguide3D="-setnumber WALLS 0
                 -setnumber DX 4
                 -setnumber DY 1
                 -setnumber DZ 1"

OPT_circle_pie="-setnumber R_INT 1
                -setnumber R_EXT 5"

OPT_circle_concentric=$OPT_circle_pie

OPT_cylinder_concentric="-setnumber R_INT 1
                         -setnumber R_EXT 5
                         -setnumber POLARISATION 0"

OPT_sphere_concentric="-setnumber R_INT 1
                       -setnumber R_EXT 2"

OPT_PB=OPT_$PROBLEM

GMSH="$HOME/src/gmsh/bin/gmsh $OPT ${!OPT_PB} -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT ${!OPT_PB} -v 5 -bin"

FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/${PROBLEM}"

$GMSH $FILE.geo -
$GETDP $FILE.pro -solve DDM -petsc_prealloc 200
$GMSH ${FILE}_visu.geo

