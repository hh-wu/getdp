#!/usr/bin/env python

import subprocess
import sys
import os
import time

pool = sys.argv[1]
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

exec(open(file_dir + "pool" + pool + ".py").read())

ncpus = len(nodes)
nkeys = len(keys)

print("Python: pool {0} running {1} meso calculations on {2} CPUs".
      format(pool, nkeys, ncpus))

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
                if "pbsdsh" in ssh:
                    args.extend(["-n", str(i), "--"])
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
            cpus[i] = subprocess.Popen(args)
        if len(queue) == 0:
            break
    # little sleep so we do not use 100% CPU just for polling
    time.sleep(0.01)
# wait for last jobs to finish
for i, cpu in enumerate(cpus):
    if cpu and cpu.returncode == None:
        cpus[i].wait()
