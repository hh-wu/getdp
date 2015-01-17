import subprocess
import sys
import os
import math
import time

keys = bx_table.keys()
nkeys = len(keys)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

if os.path.isfile(file_dir + "nodes_pbs.txt"):
    f = open(file_dir + "nodes_pbs.txt")
    nodes = f.readlines()
    f.close()
    ssh = "/opt/pbs/default/bin/pbs_tmrsh"
elif os.path.isfile(file_dir + "nodes_slurm.txt"):
    f = open(file_dir + "nodes_slurm.txt")
    nodes = f.readlines()
    f.close()
    ssh = "srun"
else:
    ssh = None

if ssh:
    getdp = file_dir + "getdp.sh"
    ncpus = len(nodes)
else:
    getdp = sys.argv[0] # same getdp as for macro computation
    ncpus = 8

print("Python: running {0} meso calculations on {1} CPUs".format(nkeys, ncpus))

# FIXME: should reserve 1 or 2 CPUs for master process and ssh overhead 

# launch job on a cpu as soon as it becomes available
queue = set(keys)
cpus = ['' for cpu in range(ncpus)]
while len(queue):
    for i, cpu in enumerate(cpus):
        # check if cpu is busy
        if cpu:
            cpus[i].poll()
        # if not busy, launch new calculation
        if not cpu or cpu.returncode != None:
            key = queue.pop()
            args = [];
            if ssh:
                node = nodes[i].strip()
                args.extend([ssh])
                if "srun" in ssh:
                    args.extend(["-Q", "-w", node])
                else:
                    args.extend([node])
            args.extend([getdp, file_dir + "meso", "-bin", "-v", "2", "-solve", "a_NR", 
                         "-pos", "mean_1", "mean_2", "mean_3",
                         "-setnumber", "BX", str(bx_table[key]),
                         "-setnumber", "BY", str(by_table[key]),
                         "-setnumber", "ELENUM", str(key[0]),
                         "-setnumber", "QPINDEX", str(key[1])])
            cpus[i] = subprocess.Popen(args)
        if len(queue) == 0:
            break
    # little sleep so we do not use 100% CPU just for polling
    time.sleep(0.01)
# wait for last jobs to finish
for i, cpu in enumerate(cpus):
    if cpu:
        cpus[i].wait()

Dir_Meso = file_dir + "res_meso/"
for key in keys:
    f = open(Dir_Meso + "DualField1_" + str(key[0]) + ".txt", "r")
    h1 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "DualField2_" + str(key[0]) + ".txt", "r")
    h2 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "DualField3_" + str(key[0]) + ".txt", "r")
    h3 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "PrimalField1_" + str(key[0]) + ".txt", "r")
    b1 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "PrimalField2_" + str(key[0]) + ".txt", "r")
    b2 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "PrimalField3_" + str(key[0]) + ".txt", "r")
    b3 = map(float, f.readline().split())
    f.close()
    hx_table[key] = h1[1]
    hy_table[key] = h1[2]
    dhdbxx_table[key] = (h2[1] - h1[1]) / (b2[1] - b1[1])
    dhdbxy_table[key] = (h2[2] - h1[2]) / (b2[1] - b1[1])
    dhdbyx_table[key] = (h3[1] - h1[1]) / (b3[2] - b1[2])
    dhdbyy_table[key] = (h3[2] - h1[2]) / (b3[2] - b1[2])
