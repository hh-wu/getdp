import subprocess
import sys
import os
import time
import socket

npools = input[0]
keys = bx_table.keys()
nkeys = len(keys)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

if os.path.isfile(file_dir + "nodes_pbs.txt"):
    filename = file_dir + "nodes_pbs"
    #ssh = "/opt/pbs/default/bin/pbs_tmrsh"
    #ssh = "pbsdsh"
    ssh = "ssh"
elif os.path.isfile(file_dir + "nodes_slurm.txt"):
    filename = file_dir + "nodes_slurm"
    ssh = "srun"
    #ssh = "ssh"
else:
    filename = None
    ssh = None

if filename:
    # read list of compute nodes
    f = open(filename + ".txt")
    nodes = f.readlines()
    ncpus = len(nodes)
    f.close()
else:
    ncpus = 8
    nodes = ["localhost" for x in range(ncpus)]
    f = open(file_dir + "python.sh", "w")
    f.write("#!/bin/sh\n/usr/bin/env python $*\n")
    f.close()
    os.chmod(file_dir + "python.sh", 0755)
    f = open(file_dir + "getdp.sh", "w")
    f.write("#!/bin/sh\n{0} $*\n".format(sys.argv[0])) # same getdp as for macro computation
    f.close()
    os.chmod(file_dir + "getdp.sh", 0755)

usePools = False
#usePools = True

if usePools:
    # split data in pools (a single pool can trigger system limits if ncpus is large)
    for p in range(npools):
        f = open(file_dir + "pool" + str(p) + ".py", "w")
        if ssh:
            f.write("ssh = \"" + ssh + "\"\n")
        else:
            f.write("ssh = None\n")
        f.write("nodes = " + str(nodes[p*ncpus/npools:(p+1)*ncpus/npools]) + "\n")
        f.write("node0 = " + str(p*ncpus/npools) + "\n")
        pkeys = keys[p*nkeys/npools:(p+1)*nkeys/npools]
        f.write("bx_table = " + str({x:bx_table[x] for x in pkeys}) + "\n")
        f.write("by_table = " + str({x:by_table[x] for x in pkeys}) + "\n")
        f.close()
    print("Python: running {0} meso computations on {1} CPUs, in {2} pools".
          format(nkeys, ncpus, npools))
    # launch all pools asynchronously
    pools = {}
    for p in range(npools):
        args = [];
        if ssh:
            i = p * ncpus/npools
            node = nodes[i].strip()
            args.extend([ssh])
            if "pbsdsh" in ssh:
                args.extend(["-n", str(i), "--"])
            elif "srun" in ssh:
                args.extend(["-Q", "-w", node])
            else:
                args.extend([node])
        args.extend([file_dir + "python.sh", file_dir + "hmm_compute_meso_pool.py", str(p)])
        pools[p] = subprocess.Popen(args)
    # wait for pools to finish
    for p in range(npools):
        pools[p].wait()
else:
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
                    if(node != socket.gethostname()):
                        args.extend([ssh])
                        if "pbsdsh" in ssh:
                            args.extend(["-n", str(node0 + i), "--"])
                        elif "srun" in ssh:
                            args.extend(["-Q", "-w", node])
                        else:
                            args.extend([node])
                args.extend([file_dir + "getdp.sh", file_dir + "meso", 
                             "-bin", "-v", "2", "-solve", "a_NR", 
                             "-pos", "mean_1", "mean_2", "mean_3",
                             "-setnumber", "BX", str(bx_table[key]),
                             "-setnumber", "BY", str(by_table[key]),
                             "-setnumber", "ELENUM", str(key[0]),
                             "-setnumber", "QPINDEX", str(key[1])])
                # print(args)
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
    os.remove(Dir_Meso + "DualField1_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "DualField2_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "DualField3_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "PrimalField1_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "PrimalField2_" + str(key[0]) + ".txt")
    os.remove(Dir_Meso + "PrimalField3_" + str(key[0]) + ".txt")
