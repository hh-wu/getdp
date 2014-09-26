
keys = bx_table.keys();
keys.sort();

for k in keys:
    print k, bx_table[k]
    # write out bx, by
    # launch the meso calculation here
    # read h, h eps 1, h eps2 and store hx, hy, dhdb, 
    hx_table[k] = 1
    hy_table[k] = 1
    dhdbxx_table[k] = 1
    dhdbxy_table[k] = 2
    dhdbyx_table[k] = 3
    dhdbyy_table[k] = 4
