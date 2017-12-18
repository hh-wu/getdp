key = (input[0], input[1]) # element num, quadrature point index

field = input[2]

if field == 0:
    output = [item for sublist in F_f_Current[key] for item in sublist]
elif field == 1:
    output = [item for sublist in F_p_Current[key] for item in sublist]
elif field == 2:
    output = [item for sublist in F_pg_Current[key] for item in sublist]

Flag_Print = 0
if(Flag_Print):
    if( (key == (5, 0)) or (key == (5, 1)) or (key == (5, 2)) or (key == (5, 3)) or (key == (5, 4))):    
        if(field == 0):
            output_F_tot = [item for sublist in F_tot_Current[key] for item in sublist]
            print('Printing F_tot_Current for the key', key)
            print(output_F_tot)
        if(field == 0):
            output_F_f = [item for sublist in F_f_Current[key] for item in sublist]
            print('Printing F_f_Current for the key', key)
            print(output_F_f)
        if(field == 2):
            output_F_pg = [item for sublist in F_pg_Current[key] for item in sublist]
            print('Printing F_p_Current for the key', key)
            print(output_F_pg)
        if(field == 2):
            output_F_p = [item for sublist in F_p_Current[key] for item in sublist]
            print('Printing F_pg_Current for the key', key)
            print(output_F_p)
