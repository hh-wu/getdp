#!/bin/bash

#SBATCH --job-name=GetDP_HMM
#SBATCH --output=res_%j.txt
#SBATCH --time=60
#SBATCH --ntasks=32
#SBATCH --cpus-per-task=1
# #SBATCH --ntasks-per-node=16
#SBATCH --mem-per-cpu=2000
#SBATCH --mail-user=cgeuzaine@ulg.ac.be
#SBATCH --mail-type=ALL

OPT="-setnumber Lay1 15
     -setnumber Lay3 15"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin"

DIR="$HOME/src/getdp/benchmarks/hmm_simple/"

cat $0
srun hostname > ${DIR}/nodes.txt
mpirun -np 1 $GMSH ${DIR}/macro.geo -3
mpirun -np 1 $GETDP ${DIR}/macro.pro -solve MagSta_a_hmm
