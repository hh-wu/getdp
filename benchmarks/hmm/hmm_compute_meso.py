import subprocess

keys = bx_table.keys()
proc = {}
parallel = True

for key in keys:
    args = ["../../bin/getdp", "meso", "-v", "2", 
            "-solve", "a_NR", 
            "-pos", "mean_1", "mean_2", "mean_3", "map_field_1",
            "-setnumber", "BX", str(bx_table[key]),
            "-setnumber", "BY", str(by_table[key]),
            "-setnumber", "ELENUM", str(key[0]),
            "-setnumber", "QPINDEX", str(key[1])]

    if parallel:
        proc[key] = subprocess.Popen(args)
    else:
        proc[key] = subprocess.call(args)
        
if parallel:
    for key in keys:
        proc[key].wait()

Dir_Meso = "hmm_meso_res/" 
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
