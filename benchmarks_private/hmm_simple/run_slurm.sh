#!/bin/bash

#SBATCH --job-name=GetDP_HMM
#SBATCH --output=res_%j.txt
#SBATCH --time=04:00:00
#SBATCH --ntasks=64
#SBATCH --cpus-per-task=1
# #SBATCH --ntasks-per-node=16
#SBATCH --mem-per-cpu=2000
#SBATCH --mail-user=cgeuzaine@ulg.ac.be
#SBATCH --mail-type=ALL

OPT="-setnumber Lay_X 33
     -setnumber Lay_Y 33
     -setnumber Flag_Dynamic 1
     -setnumber NbT 1
     -setnumber Flag_PostCuts 1"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin"
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin"

DIR="$HOME/src/getdp/benchmarks/hmm_simple/"

cat $0

rm ${DIR}/nodes_slurm.txt
srun hostname >> ${DIR}/nodes_slurm.txt
wait
cat ${DIR}/nodes_slurm.txt

cat > ${DIR}/getdp.sh << EOF
#!/bin/sh
${HOME}/src/getdp/bin_seq/getdp \$*
EOF
chmod 755 ${DIR}/getdp.sh

mpirun -np 1 $GMSH ${DIR}/smc_macro.geo -3
mpirun -np 1 $GETDP ${DIR}/smc_macro.pro -solve MagStaDyn_a_hmm
