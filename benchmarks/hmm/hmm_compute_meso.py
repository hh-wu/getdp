import os
import sys
import signal

keys = bx_table.keys();
keys.sort();

getdp = "../../bin/getdp meso -solve a_NR -v 3 -pos mean_1 mean_2 mean_3";

#signal.signal(signal.SIGINT, sys.exit(0))

for k in keys:
    os.system(getdp +
              " -setnumber BX " + str(bx_table[k]) +
              " -setnumber BY " + str(by_table[k]) +
              " -setnumber ELENUM " + str(k)
              );
    f = open("res_hmm/j1_" + str(k) + ".txt", "r");
    h1 = map(float, f.readline().split())
    f.close()
    f = open("res_hmm/j2_" + str(k) + ".txt", "r");
    h2 = map(float, f.readline().split())
    f.close()
    f = open("res_hmm/j3_" + str(k) + ".txt", "r");
    h3 = map(float, f.readline().split())
    f.close()

    f = open("res_hmm/e1_" + str(k) + ".txt", "r");
    b1 = map(float, f.readline().split())
    f.close()
    f = open("res_hmm/e2_" + str(k) + ".txt", "r");
    b2 = map(float, f.readline().split())
    f.close()
    f = open("res_hmm/e3_" + str(k) + ".txt", "r");
    b3 = map(float, f.readline().split())
    f.close()

    hx_table[k] = h1[1]
    hy_table[k] = h1[2]
    dhdbxx_table[k] = (h2[1] - h1[1]) / (b2[1] - b1[1])
    dhdbxy_table[k] = (h2[2] - h1[2]) / (b2[1] - b1[1])
    dhdbyx_table[k] = (h3[1] - h1[1]) / (b3[2] - b1[2])
    dhdbyy_table[k] = (h3[2] - h1[2]) / (b3[2] - b1[2])
