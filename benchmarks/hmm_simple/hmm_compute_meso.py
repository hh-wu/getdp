import subprocess
import sys
import os.path
import math

keys = bx_table.keys()
nkeys = len(keys)
file_dir = os.path.abspath(os.path.dirname(__file__)) + "/"

if os.path.isfile(file_dir + "nodes.txt"):
    getdp = "/home/acad/ulg/ace/cgeuzain/src/getdp/bin_seq/getdp" # zenobe
    #getdp = "/home/ulg/ace/geuzaine/src/getdp/bin_seq/getdp" # nic4
    f = open(file_dir + "nodes.txt")
    nodes = f.readlines()
    f.close()
    ncpus = len(nodes)
else:
    getdp = sys.argv[0] # same getdp as for macro computation
    nodes = ["localhost"]
    ncpus = 16

nslices = int(math.ceil(nkeys / float(ncpus)))

print("Python: running {0} meso calculations in {1} slices".format(nkeys, nslices))

for s in range(nslices):
    start = s * ncpus
    end = (s + 1) * ncpus
    print("Python: slice {0} = [{1}, {2}[".format(s, start, end))
    proc = {}
    for idx, key in enumerate(keys[start:end]):
        args = [];
        if nodes[0] != "localhost":
            node = nodes[idx % ncpus].strip()
            print("Python: ssh node {0}".format(node))
            args.extend(["ssh", node])
        args.extend([getdp, file_dir + "meso", "-v", "2", "-solve", "a_NR", 
                     "-pos", "mean_1", "mean_2", "mean_3",
                     "-setnumber", "BX", str(bx_table[key]),
                     "-setnumber", "BY", str(by_table[key]),
                     "-setnumber", "ELENUM", str(key[0]),
                     "-setnumber", "QPINDEX", str(key[1])])
        proc[key] = subprocess.Popen(args)
    for key in keys[start:end]:
        proc[key].wait()

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
