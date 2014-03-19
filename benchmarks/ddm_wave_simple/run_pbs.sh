#!/bin/sh

#PBS -q main
#PBS -l walltime=1:00:00
#PBS -l select=32:ncpus=1:vmem=2500mb:mpiprocs=1:ompthreads=1
#PBS -l pvmem=2500mb
#PBS -r y

echo "------------------ Job Info --------------------"
echo "job id: " $PBS_JOBID
echo "num CPUs: " $NCPUS
echo "------------------ $PBS_NODEFILE ---------------"

OPT="-setnumber ANALYSIS 0
     -setnumber N_DOM $NCPUS
     -setnumber N_LAMBDA 40
     -setnumber DX 4
     -setstring DIR /SCRATCH/out_$PBS_JOB_ID/"

#MPIRUN="mpirun --bind-to-core -np $NCPUS -machinefile $PBS_NODEFILE"
MPIRUN="mpirun --bind-to-core"
GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin"

FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/waveguide3d"

$MPIRUN $GMSH $FILE.geo -
$MPIRUN $GETDP $FILE.pro -solve DDM
