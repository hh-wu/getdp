import subprocess
import sys
import os
import time
import socket

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
    ncpus = 8
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
                         "-bin", "-v", "2", "-solve", "a_NR", 
                         "-pos", "mean_1", "mean_2", "mean_3",
                         "-setnumber", "AX", str(ax_table[key]),
                         "-setnumber", "AY", str(ay_table[key]),
                         "-setnumber", "AZ", str(az_table[key]),
                         "-setnumber", "BX", str(bx_table[key]),
                         "-setnumber", "BY", str(by_table[key]),
                         "-setnumber", "BZ", str(bz_table[key]),
                         "-setnumber", "DTAX", str(ax_table[key]),
                         "-setnumber", "DTAY", str(ay_table[key]),
                         "-setnumber", "DTAZ", str(az_table[key]),
                         "-setnumber", "DTBX", str(bx_table[key]),
                         "-setnumber", "DTBY", str(by_table[key]),
                         "-setnumber", "DTBZ", str(bz_table[key]),
                         "-setnumber", "TCURRENT", str(currentTime),
                         "-setnumber", "TSCURRENT", str(currentTimeStep),
                         "-setnumber", "ELENUM", str(key[0]),
                         "-setnumber", "QPINDEX", str(key[1])])
            cpus[i] = subprocess.Popen(args)
        if len(queue) == 0:
            break
        # little sleep so we do not use 100% CPU just for polling
        time.sleep(0.01)
# wait for last jobs to finish
for i, cpu in enumerate(cpus):
    if cpu and cpu.returncode == None:
        cpus[i].wait()
    
Dir_Meso = file_dir + "res_meso/"
for key in keys:
    f = open(Dir_Meso + "h1_" + str(key[0]) + ".txt", "r")
    h1 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "h2_" + str(key[0]) + ".txt", "r")
    h2 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "h3_" + str(key[0]) + ".txt", "r")
    h3 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "b1_" + str(key[0]) + ".txt", "r")
    b1 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "b2_" + str(key[0]) + ".txt", "r")
    b2 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "b3_" + str(key[0]) + ".txt", "r")
    b3 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "JouleLosses_" + str(key[0]) + ".txt", "r")
    jl = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso + "MagneticEnergy_" + str(key[0]) + ".txt", "r")
    me = map(float, f.readline().split())
    f.close()

    hx_table[key] = h1[1]
    hy_table[key] = h1[2]
    hz_table[key] = h1[3]
    dhdbxx_table[key] = (h2[1] - h1[1]) / (b2[1] - b1[1])
    dhdbxy_table[key] = (h2[2] - h1[2]) / (b2[1] - b1[1])
    #dhdbxz_table[key] = FIXME: add perturbation along z for 3D!
    dhdbyx_table[key] = (h3[1] - h1[1]) / (b3[2] - b1[2])
    dhdbyy_table[key] = (h3[2] - h1[2]) / (b3[2] - b1[2])
    #dhdbyz_table[key] = FIXME: add perturbation along z for 3D!
    #dhdbzx_table[key] = FIXME: add perturbation along z for 3D!
    #dhdbzy_table[key] = FIXME: add perturbation along z for 3D!
    #dhdbzz_table[key] = FIXME: add perturbation along z for 3D!

    JouleLosses_table[key] = jl
    MagneticEnergy_table[key] = me

    os.remove(Dir_Meso + "h1_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "h2_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "h3_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "b1_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "b2_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "b3_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "JouleLosses_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "MagneticEnergy_" + str(key[0]) + ".txt")
