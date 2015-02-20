#!/bin/sh

#  PBS -q main
#  PBS -l model=ivybridge
#PBS -q large

#PBS -W group_list=getdphmm

#PBS -l walltime=1:00:00
#PBS -r y

#PBS -l select=256:ncpus=1:vmem=2625mb:mpiprocs=1:ompthreads=1
#PBS -l pvmem=2625mb

#PBS -m "abe"
#PBS -M cgeuzaine@ulg.ac.be
#PBS -N GetDP_HMM

#  PBS -r y

OPT="-setnumber Lay1 129
     -setnumber Lay3 129"

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 4 -bin";
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 4 -bin";

#DIR="${HOME}/scratch/hmm_simple";
DIR="${HOME}/src/getdp/benchmarks/hmm_simple";

exec > ${DIR}/res_${PBS_JOBID}.log

cat $0

cat $PBS_NODEFILE > ${DIR}/nodes_pbs.txt
cat $PBS_NODEFILE

cat > ${DIR}/getdp.sh << EOF
#!/bin/sh
ulimit -n 4096
ulimit -u 4096
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}
${HOME}/src/getdp/bin_seq/getdp \$*
EOF
chmod 755 ${DIR}/getdp.sh

mpirun -np 1 $GMSH ${DIR}/macro.geo -3
mpirun -np 1 $GETDP ${DIR}/macro.pro -solve MagSta_a_hmm

qstat -f $PBS_JOBID
