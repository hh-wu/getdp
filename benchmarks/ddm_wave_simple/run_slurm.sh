#!/bin/bash

#SBATCH --job-name=GetDP_DDM
#SBATCH --output=res_%j.txt
#SBATCH --time=1000
#SBATCH --ntasks=20
#SBATCH --cpus-per-task=1
# #SBATCH --ntasks-per-node=16
#SBATCH --mem-per-cpu=4000
#SBATCH --mail-user=cgeuzaine@ulg.ac.be
#SBATCH --mail-type=ALL

OPT="-setnumber ANALYSIS 0
     -setnumber N_DOM $SLURM_NTASKS
     -setnumber N_LAMBDA 40
     -setnumber DX 4
     -setstring DIR $GLOBALSCRATCH/out_$SLURM_JOB_ID/"

MPIRUN="mpirun --bind-to-core"
GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin"

FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/waveguide3d"

$MPIRUN $GMSH $FILE.geo -
$MPIRUN $GETDP $FILE.pro -solve DDM
