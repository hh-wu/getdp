#!/bin/sh

# #PBS -q main
#PBS -q large
#PBS -l model=ivybridge
#PBS -l walltime=4:00:00
#PBS -l select=800:ncpus=1:vmem=2500mb:mpiprocs=1:ompthreads=1
#PBS -l pvmem=2500mb
#PBS -m "abe"
#PBS -M cgeuzaine@ulg.ac.be
#PBS -N GetDP_DDM

# #PBS -r y

OPT="-setnumber ANALYSIS 0
     -setnumber N_DOM 800
     -setnumber N_LAMBDA 100
     -setnumber DX 20
     -setstring DIR $SCRATCH_DIR/out_$PBS_JOBID/"

MPIRUN="mpirun"
GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin"

FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/waveguide3d"
LOG=${FILE}_${PBS_JOBID}.log

$MPIRUN $GMSH $FILE.geo - >& $LOG
$MPIRUN $GETDP $FILE.pro -solve DDM >& $LOG
