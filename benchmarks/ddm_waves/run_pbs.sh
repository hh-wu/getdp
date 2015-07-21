#!/bin/sh

#  PBS -q main
#  PBS -l model=ivybridge
#PBS -q large

#PBS -W group_list=wavesddm

#PBS -l walltime=4:00:00
#PBS -r y

#  2 mpi processes, each spawning 12 threads, on each of the 5 chunks (each chunk has 63Gb of RAM); each chunk on 24 cores:
#  PBS -l select=5:ncpus=24:vmem=63000mb:mpiprocs=2:ompthreads=12
#  PBS -l pvmem=63000mb

#  1 mpi process, each spawning 1 thread, on each of the 100 chunks (each chunk has 2.6Gb of RAM); each chunk on 1 core:
#  PBS -l select=100:ncpus=1:vmem=2625mb:mpiprocs=1:ompthreads=1
#  PBS -l pvmem=2625mb

#  1 mpi process, each spawning 2 threads, on each of the 100 chunks (each chunk has 2*2.6Gb=5.25Gb of RAM); each chunk on 2 cores:
#  PBS -l select=100:ncpus=2:vmem=5250mb:mpiprocs=1:ompthreads=2
#  PBS -l pvmem=5250mb

#  1 mpi process, each spawning 8 threads, on each of the 100 chunks (each chunk has 8*2.6Gb=21Gb of RAM); each chunk on 8 cores:
#  PBS -l select=100:ncpus=8:vmem=21000mb:mpiprocs=1:ompthreads=8
#  PBS -l pvmem=21000mb

#  1 mpi process, each spawning 24 threads, on each of the 100 chunks (each chunk has 24*2.6Gb=63Gb of RAM); each chunk on 24 cores:
#PBS -l select=120:ncpus=24:vmem=63000mb:mpiprocs=1:ompthreads=24
#PBS -l pvmem=63000mb

#  12 mpi processes (each with 2 threads) on each of the 4 chunks, each chunk with 24 cores
#  PBS -l select=4:ncpus=24:vmem=63000mb:mpiprocs=12:ompthreads=2
#  PBS -l pvmem=63000mb

#PBS -m "abe"
#PBS -M cgeuzaine@ulg.ac.be
#PBS -N GetDP_DDM

MPI_PROCESSES=`cat $PBS_NODEFILE | wc -l`

OPT="-setnumber ANALYSIS 1
     -setnumber WAVENUMBER 10
     -setnumber WALLS 1
     -setnumber N_DOM $MPI_PROCESSES
     -setnumber N_LAMBDA 45
     -setnumber DX $MPI_PROCESSES
     -setnumber DY 1
     -setnumber DZ 1
     -setstring SOLVER gmres
     -setnumber MAXIT 1000
     -setnumber RESTART 1000
     -setstring DIR $SCRATCH_DIR/out_$PBS_JOBID/";

GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin";
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin";

DIR="$HOME/src/getdp/benchmarks/ddm_waves";
FILE="$DIR/waveguide3d";

exec > ${DIR}/res_${PBS_JOBID}.log

cat $0
cat $PBS_NODEFILE

mpirun $GMSH $FILE.geo -
mpirun $GETDP $FILE.pro -solve DDM -pc_factor_mat_solver_package mumps

qstat -f $PBS_JOBID
