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

OPT="-setnumber Lay1 5
     -setnumber Lay3 5"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin"

DIR="$HOME/src/getdp/benchmarks/hmm_simple/"

cat $0
srun hostname > ${DIR}/nodes_slurm.txt
cat > ${DIR}/getdp_seq.sh <<EOF
#!/bin/sh
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}
/home/ulg/ace/geuzaine/src/getdp/bin_seq/getdp \$*
EOF
chmod 755 ${DIR}/getdp_seq.sh

mpirun -np 1 $GMSH ${DIR}/macro.geo -3
mpirun -np 1 $GETDP ${DIR}/macro.pro -solve MagSta_a_hmm
