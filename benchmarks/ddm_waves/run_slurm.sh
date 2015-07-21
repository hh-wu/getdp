#!/bin/bash

#SBATCH --job-name=GetDP_DDM
#SBATCH --output=res_%j.txt
#SBATCH --time=1000
#SBATCH --ntasks=100
#SBATCH --cpus-per-task=1
# #SBATCH --ntasks-per-node=16
#SBATCH --mem-per-cpu=4000
#SBATCH --mail-user=cgeuzaine@ulg.ac.be
#SBATCH --mail-type=ALL

OPT="-setnumber ANALYSIS 1
     -setnumber WALLS 0
     -setnumber N_DOM $SLURM_NTASKS
     -setnumber N_LAMBDA 30
     -setnumber DX 10
     -setstring SOLVER gmres
     -setstring DIR $GLOBALSCRATCH/out_$SLURM_JOB_ID/"

MPIRUN="mpirun --bind-to-core"
GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin"

DIR="$HOME/src/getdp/benchmarks/ddm_waves";
FILE="$DIR/waveguide3d"

cat $0
$MPIRUN $GMSH $FILE.geo -
$MPIRUN $GETDP $FILE.pro -solve DDM
