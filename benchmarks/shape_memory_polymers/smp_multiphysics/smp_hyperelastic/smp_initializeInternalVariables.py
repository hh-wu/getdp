print("Python: initializing tables of internal variables.");

if (input[0] == 0):
    
    # Python: initialization of the prev. dictionnaries at "t == t_0"
    #================================================================
    Theta_Previous = {}
    F_f_Previous = {}
    F_p_Previous = {}
    F_pg_Previous = {}
    F_tot_Current = {}
    Theta_Current = {} 
    
    # Python: initialization of current the dictionnaries at at "t == t_0"
    #====================================================================
    F_f_Current = {}
    F_p_Current = {}
    F_pg_Current = {}
    Error_NR_List = {}
else:
    # Python: initialization of prev. the dictionnaries at at "t != t_0"
    #===================================================================
    Theta_Previous = Theta_Current
    F_f_Previous = F_f_Current
    F_p_Previous = F_p_Current
    F_pg_Previous = F_pg_Current

    # Python: initialization of current the dictionnaries at at "t != t_0"
    #====================================================================
    Theta_Current = {} 
    F_f_Current = {}
    F_p_Current = {}
    F_pg_Current = {}
