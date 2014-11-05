#!/bin/bash

#SBATCH --job-name=GetDP_HMM
#SBATCH --output=res_%j.txt
#SBATCH --time=100
#SBATCH --ntasks=40
#SBATCH --cpus-per-task=1
# #SBATCH --ntasks-per-node=16
#SBATCH --mem-per-cpu=1000
#SBATCH --mail-user=cgeuzaine@ulg.ac.be
#SBATCH --mail-type=ALL

OPT="-setnumber ANALYSIS 1
     -setstring DIR $GLOBALSCRATCH/out_$SLURM_JOB_ID/"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin"

FILEPATH="$HOME/src/getdp/benchmarks/hmm_simple/"

cat $0
srun hostname > ${FILEPATH}/nodes.txt
mpirun -np 1 $GETDP ${FILEPATH}/macro.pro -solve MagSta_a_hmm
