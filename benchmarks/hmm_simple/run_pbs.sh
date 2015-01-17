#!/bin/sh

#  PBS -q main_ivy
#PBS -q large
#PBS -W group_list=getdphmm

#PBS -l walltime=1:00:00
#PBS -r y

#PBS -l select=96:ncpus=1:vmem=2625mb:mpiprocs=1:ompthreads=1
#PBS -l pvmem=2625mb

#PBS -m "abe"
#PBS -M cgeuzaine@ulg.ac.be
#PBS -N GetDP_HMM

#  PBS -r y

OPT="-setnumber Lay1 33
     -setnumber Lay3 33"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin";
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin";

DIR="${HOME}/scratch/hmm_simple";

LOG="$DIR/out_${PBS_JOBID}.log";

cat $0 > $LOG;
cat $PBS_NODEFILE > ${DIR}/nodes_pbs.txt
cat $PBS_NODEFILE >> $LOG
cat > ${DIR}/getdp.sh << EOF
#!/bin/sh
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}
${HOME}/src/getdp/bin_seq/getdp \$*
EOF
chmod 755 ${DIR}/getdp.sh

mpirun -np 1 $GMSH ${DIR}/macro.geo -3 2>&1 >> $LOG;
mpirun -np 1 $GETDP ${DIR}/macro.pro -solve MagSta_a_hmm 2>&1 >> $LOG;
