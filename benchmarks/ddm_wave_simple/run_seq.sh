#!/bin/sh

OPT="-setnumber ANALYSIS 0
     -setnumber N_DOM 4
     -setnumber N_LAMBDA 10
     -setnumber DX 4"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin"

FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/waveguide3d"

$GMSH $FILE.geo -
$GETDP $FILE.pro -solve DDM
$GMSH ${FILE}_visu.geo
