print("Python: initializing HMM tables");

# vector of macroscale time instant
if (input[0] == 0):
    time_table = {}
    WR_Abs_L_inf_b_0 = 1
    WR_Abs_L_inf_dta_0 = 1
    WR_Abs_L_inf_dtb_0 = 1
    
    # python output (filling after meso computations and used for upscaling)
    hx_table = {}
    hy_table = {}
    hz_table = {}
    dhdbxx_table = {}
    dhdbxy_table = {}
    dhdbxz_table = {}
    dhdbyx_table = {}
    dhdbyy_table = {}
    dhdbyz_table = {}
    dhdbzx_table = {}
    dhdbzy_table = {}
    dhdbzz_table = {}
    JouleLosses_table = {}
    MagneticEnergy_table = {}

    hx_old_table = {}
    hy_old_table = {}
    hz_old_table = {}
    dhdbxx_old_table = {}
    dhdbxy_old_table = {}
    dhdbyx_old_table = {}
    dhdbyy_old_table = {}

# python input (filled during downscaling)
ax_table = {}
ay_table = {}
az_table = {}
bx_table = {}
by_table = {}
bz_table = {}
dtax_table = {}
dtay_table = {}
dtaz_table = {}
dtbx_table = {}
dtby_table = {}
dtbz_table = {}

ax_old_table = {}
ay_old_table = {}
az_old_table = {}
bx_old_table = {}
by_old_table = {}
bz_old_table = {}
dtax_old_table = {}
dtay_old_table = {}
dtaz_old_table = {}
dtbx_old_table = {}
dtby_old_table = {}
dtbz_old_table = {}

delta_bx = {}
delta_by = {}
delta_bz = {}
delta_dtax = {}
delta_dtay = {}
delta_dtaz = {}
delta_dtbx = {}
delta_dtby = {}
delta_dtbz = {}

ref_TS = 1e8
num_tw = input[1]

if (input[0] == 0):
    end_computations = False
if (input[0] == 1):
    end_computations = True
    
