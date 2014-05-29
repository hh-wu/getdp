#!/bin/sh

# #PBS -q main
#PBS -q large
#PBS -l model=ivybridge
#PBS -l walltime=4:00:00

# 2 mpi processes, each spawning 12 threads, on each of the 5 chunks (each chunk has 63Gb of RAM); each chunk on 24 cores:
# PBS -l select=5:ncpus=24:vmem=63000mb:mpiprocs=2:ompthreads=12
# PBS -l pvmem=63000mb

# 1 mpi process, each spawning 1 thread, on each of the 100 chunks (each chunk has 2.6Gb of RAM); each chunk on 1 core:
# PBS -l select=100:ncpus=1:vmem=2625mb:mpiprocs=1:ompthreads=1
# PBS -l pvmem=2625mb

# 12 mpi processes (each with 2 threads) on each of the 4 chunks, each chunk with 24 cores
# PBS -l select=4:ncpus=24:vmem=63000mb:mpiprocs=12:ompthreads=2
# PBS -l pvmem=63000mb


#PBS -l select=80:ncpus=24:vmem=63000mb:mpiprocs=6:ompthreads=4
#PBS -l pvmem=63000mb


#PBS -m "abe"
#PBS -M cgeuzaine@ulg.ac.be
#PBS -N GetDP_DDM

#  PBS -r y

MPI_PROCESSES=`cat $PBS_NODEFILE | wc -l`

OPT="-setnumber ANALYSIS 1
     -setnumber WAVENUMBER 10
     -setnumber WALLS 0
     -setnumber N_DOM $MPI_PROCESSES
     -setnumber N_LAMBDA 25
     -setnumber DX $MPI_PROCESSES
     -setnumber DY 1
     -setnumber DZ 1
     -setstring SOLVER gmres
     -setnumber MAXIT 1000
     -setnumber RESTART 1000
     -setstring DIR $SCRATCH_DIR/out_$PBS_JOBID/";

MPIRUN="mpirun";
GMSH="$HOME/src/gmsh/bin/gmsh $OPT -v 3 -bin";
GETDP="$HOME/src/getdp/bin/getdp $OPT -v 3 -bin";
FILE="$HOME/src/getdp/benchmarks/ddm_wave_simple/waveguide3d";
LOG=${FILE}_${PBS_JOBID}.log;

cat $0 2>&1 >> $LOG;
cat $PBS_NODEFILE 2>1 >> $LOG
$MPIRUN $GMSH $FILE.geo - 2>&1 >> $LOG;
$MPIRUN $GETDP $FILE.pro -solve DDM 2>&1 >> $LOG;

