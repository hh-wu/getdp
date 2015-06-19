import subprocess
import sys
import os
import time
import socket

nbr_subproblems = input[0]
flag_dynamic = input[1]
freq = input[2]
nb_steps = input[3]
postpro_cuts = input[4]

keys = bx_table.keys()
nkeys = len(keys)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

if os.path.isfile(file_dir + "nodes_pbs.txt"):
    filename = file_dir + "nodes_pbs"
    ssh = "pbsdsh"
elif os.path.isfile(file_dir + "nodes_slurm.txt"):
    filename = file_dir + "nodes_slurm"
    ssh = "srun"
elif os.path.isfile(file_dir + "nodes_ssh.txt"):
    filename = file_dir + "nodes_ssh"
    ssh = "ssh"
else:
    filename = None
    ssh = None

if filename:
    f = open(filename + ".txt")
    nodes = f.readlines()
    ncpus = len(nodes)
    f.close()
else:
    ncpus = 4
    nodes = ["localhost" for x in range(ncpus)]
    f = open(file_dir + "getdp.sh", "w")
    f.write("#!/bin/sh\n{0} $*\n".format(sys.argv[0])) # same getdp as for macro computation
    f.close()
    os.chmod(file_dir + "getdp.sh", 0755)

print("Python: running {0} meso calculations on {1} CPUs".format(nkeys, ncpus))
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
                if "pbsdsh" in ssh:
                    args.extend(["-n", str(i), "--"])
                elif "srun" in ssh:
                    args.extend(["-N", "1", "-n", "1", "-w", node])
                else:
                    args.extend([node])
            args.extend([file_dir + "getdp.sh", file_dir + "smc_meso", 
                         "-bin", "-v", "4", "-v2", "-solve", "a_NR", 
                         "-pos", "mean_1", "mean_2", "mean_3", 
                         "mean_4" if nbr_subproblems == 4 else "",
                         "map_field_1" if postpro_cuts else "",
                         "-setnumber", "Flag_Dynamic", str(flag_dynamic),
                         "-setnumber", "Freq", str(freq),
                         "-setnumber", "NbSteps", str(nb_steps),
                         "-setnumber", "AX", str(ax_table[key]),
                         "-setnumber", "AY", str(ay_table[key]),
                         "-setnumber", "AZ", str(az_table[key]),
                         "-setnumber", "BX", str(bx_table[key]),
                         "-setnumber", "BY", str(by_table[key]),
                         "-setnumber", "BZ", str(bz_table[key]),
                         "-setnumber", "DTAX", str(dtax_table[key]),
                         "-setnumber", "DTAY", str(dtay_table[key]),
                         "-setnumber", "DTAZ", str(dtaz_table[key]),
                         "-setnumber", "DTBX", str(dtbx_table[key]),
                         "-setnumber", "DTBY", str(dtby_table[key]),
                         "-setnumber", "DTBZ", str(dtbz_table[key]),
                         "-setnumber", "TCURRENT", str(currentTime),
                         "-setnumber", "TSCURRENT", str(currentTimeStep),
                         "-setnumber", "ELENUM", str(key[0]),
                         "-setnumber", "QPINDEX", str(key[1])])
            cpus[i] = subprocess.Popen(args)
        if len(queue) == 0:
            break
    # little sleep so we do not use 100% CPU just for polling
    time.sleep(0.001)

# wait for last jobs to finish (simply poll() and don't use wait() synchronously
# to avoid having zombie processes triggering the clusters' warning systems)
done = False
while not done:
    done = True
    for i, cpu in enumerate(cpus):
        if cpu and cpu.returncode == None:
            done = False
            cpus[i].poll()
    # little sleep so we do not use 100% CPU just for polling
    time.sleep(0.001)

Dir_Meso = file_dir + "res_meso/" 
#Dir_Meso = file_dir + "../../../../project/results/res_meso/"
for key in keys:
    h = {}
    b = {}
    for i in range(nbr_subproblems):
        f = open(Dir_Meso + "h" + str(i + 1) + "_" + str(key[0]) + ".txt", "r")
        h[i + 1] = map(float, f.readline().split())
        f.close()
        f = open(Dir_Meso + "b" + str(i + 1) + "_" + str(key[0]) + ".txt", "r")
        b[i + 1] = map(float, f.readline().split())
        f.close()
    f = open(Dir_Meso + "JouleLosses_" + str(key[0]) + ".txt", "r")
    jl = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "MagneticEnergy_" + str(key[0]) + ".txt", "r")
    me = map(float, f.readline().split())
    f.close()

    
    
    hx_table[key] = h[1][1]
    hy_table[key] = h[1][2]
    hz_table[key] = h[1][3]
    dhdbxx_table[key] = (h[2][1] - h[1][1]) / (b[2][1] - b[1][1])
    dhdbxy_table[key] = (h[2][2] - h[1][2]) / (b[2][1] - b[1][1])
    dhdbyx_table[key] = (h[3][1] - h[1][1]) / (b[3][2] - b[1][2])
    dhdbyy_table[key] = (h[3][2] - h[1][2]) / (b[3][2] - b[1][2])   

    if nbr_subproblems == 4: # perturbation along z in 3D case
        dhdbxz_table[key] = (h[2][3] - h[1][3]) / (b[2][1] - b[1][1])
        dhdbyz_table[key] = (h[3][3] - h[1][3]) / (b[3][2] - b[1][2])
        dhdbzx_table[key] = (h[4][1] - h[1][1]) / (b[4][3] - b[1][3])
        dhdbzy_table[key] = (h[4][2] - h[1][2]) / (b[4][3] - b[1][3])
        dhdbzz_table[key] = (h[4][3] - h[1][3]) / (b[4][3] - b[1][3])
    else:
        dhdbxz_table[key] = 0
        dhdbyz_table[key] = 0
        dhdbzx_table[key] = 0
        dhdbzy_table[key] = 0
        dhdbzz_table[key] = 0


    JouleLosses_table[key] = jl[1]
    MagneticEnergy_table[key] = me[1]

    # for i in range(nbr_subproblems):
    #     os.remove(Dir_Meso + "h" + str(i + 1) + "_" + str(key[0]) + ".txt")
    #     os.remove(Dir_Meso + "b" + str(i + 1) + "_" + str(key[0]) + ".txt")
    # os.remove(Dir_Meso + "JouleLosses_" + str(key[0]) + ".txt")
    # os.remove(Dir_Meso + "MagneticEnergy_" + str(key[0]) + ".txt")
