import subprocess

keys      = bx_table.keys()
proc      = {}
parallel  = True

n         = 4
integer   = (len(keys))//(n)
remainder = (len(keys))%(n)

if (remainder == 0):
    iterations = integer
else:
    iterations = integer+1

for iP in range(0,iterations):
    lower_bound = iP*n
    upper_bound = 0
    if (iP == iterations):
        upper_bound = len(keys)-1
    else:
        upper_bound = (iP+1)*n
    for key in keys[lower_bound : upper_bound]:
        args = ["../../bin/getdp", "meso_dyn.pro", "-v", "2", 
                "-msh", "meso.msh", 
                "-solve", "a_NR", 
                "-pos", "mean_1", "mean_2", "mean_3",
                "-setnumber", "BX", str(bx_table[key]),
                "-setnumber", "BY", str(by_table[key]),
                "-setnumber", "EX", str(ex_table[key]),
                "-setnumber", "EY", str(ey_table[key]),
                "-setnumber", "dt_BX", str(dt_bx_table[key]),
                "-setnumber", "dt_BY", str(dt_by_table[key]),
                "-setnumber", "currentTime", str(currentTime),
                "-setnumber", "currentTimeStep", str(currentTimeStep),
                "-setnumber", "ELENUM", str(key[0]),
                "-setnumber", "QPINDEX", str(key[1]),
                "-setnumber", "Position_X", str(0.0),
                "-setnumber", "Position_Y", str(0.0),
                "-setnumber", "Position_Z", str(0.0)]
        
        if parallel:
            proc[key] = subprocess.Popen(args)
        else:
            proc[key] = subprocess.call(args)
        
    if parallel:
        for key in keys[lower_bound : upper_bound]:
            proc[key].wait()

Dir_Meso_Comp = "hmm_dyn_meso_comp/" 
for key in keys:
    f = open(Dir_Meso_Comp + "DualField1_" + str(key[0]) + ".txt", "r")
    h1 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso_Comp + "DualField2_" + str(key[0]) + ".txt", "r")
    h2 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso_Comp + "DualField3_" + str(key[0]) + ".txt", "r")
    h3 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso_Comp + "PrimalField1_" + str(key[0]) + ".txt", "r")
    b1 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso_Comp + "PrimalField2_" + str(key[0]) + ".txt", "r")
    b2 = map(float, f.readline().split())
    f.close()
    f = open(Dir_Meso_Comp + "PrimalField3_" + str(key[0]) + ".txt", "r")
    b3 = map(float, f.readline().split())
    f.close()

    if (dhdbxx_table.has_key(key) == True):
        hx_table_old[key] = hx_table[key]
        hy_table_old[key] = hy_table[key]
        dhdbxx_table_old[key] = dhdbxx_table[key]
        dhdbxy_table_old[key] = dhdbxy_table[key]
        dhdbyx_table_old[key] = dhdbyx_table[key]
        dhdbyy_table_old[key] = dhdbyy_table[key]

    hx_table[key] = h1[1]
    hy_table[key] = h1[2]
    dhdbxx_table[key] = (h2[1] - h1[1]) / (b2[1] - b1[1])
    dhdbxy_table[key] = (h2[2] - h1[2]) / (b2[1] - b1[1])
    dhdbyx_table[key] = (h3[1] - h1[1]) / (b3[2] - b1[2])
    dhdbyy_table[key] = (h3[2] - h1[2]) / (b3[2] - b1[2])

    #if (dhdbxx_table_old.has_key(key) == True):
        #print ''
        #print ''
        #print 'diff for hx_table[' + str(key) + '] = ' + str(hx_table[key] - hx_table_old[key])
        #print 'diff for hy_table[' + str(key) + '] = ' + str(hy_table[key] - hy_table_old[key])

        #print 'diff for dhdbxx_table[' + str(key) + '] = ' + str(dhdbxx_table[key] - dhdbxx_table[key])
        #print 'diff for dhdbxy_table[' + str(key) + '] = ' + str(dhdbxy_table[key] - dhdbxy_table[key])
        #print 'diff for dhdbyx_table[' + str(key) + '] = ' + str(dhdbyx_table[key] - dhdbyx_table[key])
        #print 'diff for dhdbyy_table[' + str(key) + '] = ' + str(dhdbyy_table[key] - dhdbyy_table[key])

        #print ''
        #print ''
