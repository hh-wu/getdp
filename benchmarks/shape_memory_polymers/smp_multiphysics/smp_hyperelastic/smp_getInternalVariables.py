key = (input[0], input[1]) # element num, quadrature point index

field = input[2]

if field == 0:
    print('Komera lalalalalalalalalalala size of list', len(F_f_Current))
    output = [item for sublist in F_f_Current[key] for item in sublist]
elif field == 1:
    output = [item for sublist in F_p_Current[key] for item in sublist]
elif field == 2:
    output = [item for sublist in F_pg_Current[key] for item in sublist]

if(1):
    if(key == (5, 0)):    
        if((field == 2) and (1)):
            print('Printing F_pg_Current for the key', key)
            print(output)
            print('Printing F_pg_Previous for the key', key)
            output_prev = [item for sublist in F_pg_Previous[key] for item in sublist]
            print(output_prev)
            print('Printing F_tot_Current')
            output_F_tot = [item for sublist in F_tot_Current[key] for item in sublist]
            print(output_F_tot)
