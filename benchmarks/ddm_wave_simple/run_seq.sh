#!/bin/sh

#PROBLEM="waveguide3D"
#PROBLEM="circle_pie"
PROBLEM="circle_concentric"

OPT="-setnumber ANALYSIS 0
     -setnumber N_DOM 10
     -setnumber N_LAMBDA 10"

#for waveguide
OPT_waveguide3D="
     -setnumber WALLS 0
     -setnumber DX 4"
#for circle domain with a "pie-type" decomposition
OPT_circle_pie="
     -setnumber R_INT 1
     -setnumber R_EXT 5"
#for circle domain with a concentric circles decomposition
OPT_circle_concentric=$OPT_circle_pie

GMSH="$HOME/src/gmsh/bin/gmsh $OPT $OPT_${PROBLEM} -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT $OPT_${PROBLEM} -v 3 -bin"

FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/${PROBLEM}"

$GMSH $FILE.geo -
$GETDP $FILE.pro -solve DDM
$GMSH ${FILE}_visu.geo
