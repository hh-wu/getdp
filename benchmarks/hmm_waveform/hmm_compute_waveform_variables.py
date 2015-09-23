import subprocess
import sys
import os
import time
import socket
import math

# 1.1 Definition of variables
#============================
nbr_subproblems    = input[0]
flag_dynamic       = input[1]
freq               = input[2]
nb_steps           = input[3]
postpro_cuts       = input[4]
t_0                = input[5]
t_end              = input[6]
dt_Macro           = input[7]
Flag_WR_meso       = input[8]
Flag_meso_comp     = input[9]
which_time_window  = input[10] 
which_wr_iteration = input[11] 
which_time_step_init    = input[12]
which_time_init         = input[13]

# 1.2 Building the keys
#======================
time_table_keys  = time_table.keys()
keys             = bx_table.keys()
keys.sort()
len_time         = len(time_table)
len_tables       = len(bx_table)
num_mesoproblems = len_tables/len_time
keys_new         = []
#get the Elenum/GP num from bx_table
for i in range(0, num_mesoproblems):
    keys_new.append(((keys[(i)*len_time])[0],(keys[(i)*len_time])[1]))
keys_new.sort()
nkeys = len(keys_new)

# 1.3 Get the time from the time_table
#=================================
which_time_step = ( (which_time_step_init - 1) % (len_time) ) + 1
which_time = time_table[which_time_step]

# 1.4 Files that manage the cluster
#================================== 
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
    ncpus = 18
    nodes = ["localhost" for x in range(ncpus)]
    f = open(file_dir + "getdp.sh", "w")
    f.write("#!/bin/sh\n{0} $*\n".format(sys.argv[0])) # same getdp as for macro computation
    f.close()
    os.chmod(file_dir + "getdp.sh", 0755)

for key in keys:
    hx_table[key] = 0.0
    hy_table[key] = 0.0
    hz_table[key] = 0.0
    
