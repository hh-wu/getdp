#!/bin/sh

#  PBS -q main
#PBS -q large
#PBS -W group_list=getdphmm

#PBS -l walltime=4:00:00

#PBS -l select=256:ncpus=1:vmem=2625mb:mpiprocs=1:ompthreads=1
#PBS -l pvmem=2625mb

#PBS -m "abe"
#PBS -M cgeuzaine@ulg.ac.be
#PBS -N GetDP_HMM

#  PBS -r y

OPT="-setnumber Lay1 50
     -setnumber Lay3 50"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin";
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin";

DIR="$HOME/src/getdp/benchmarks/hmm_simple";

LOG="$DIR/out_${PBS_JOBID}.log";

cat $0 2>&1 >> $LOG;
cat $PBS_NODEFILE 2>1 >> $LOG
cp $PBS_NODEFILE ${DIR}/nodes.txt
mpirun -np 1 $GMSH ${DIR}/macro.geo -3 2>&1 >> $LOG;
mpirun -np 1 $GETDP ${DIR}/macro.pro -solve MagSta_a_hmm 2>&1 >> $LOG;
