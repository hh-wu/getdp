#!/bin/bash

#SBATCH --job-name=GetDP_HMM
#SBATCH --output=res_%j.txt
#SBATCH --time=100
#SBATCH --ntasks=10
#SBATCH --cpus-per-task=1
# #SBATCH --ntasks-per-node=16
#SBATCH --mem-per-cpu=4000
#SBATCH --mail-user=cgeuzaine@ulg.ac.be
#SBATCH --mail-type=ALL

OPT="-setnumber ANALYSIS 1
     -setstring DIR $GLOBALSCRATCH/out_$SLURM_JOB_ID/"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin"

PATH="$HOME/src/getdp/benchmarks/hmm_simple/"

srun hostname > ${PATH}/nodes.txt

cat $0
$MPIRUN -np 1 $GETDP ${PATH}/macro.pro -solve MagSta_a_hmm
