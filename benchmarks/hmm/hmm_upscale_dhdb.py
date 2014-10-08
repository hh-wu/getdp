key = (input[0], input[1]) # element num, quadrature point index

output = [ dhdbxx_table[key], dhdbxy_table[key], 0.,
           dhdbyx_table[key], dhdbyy_table[key], 0.,
           0.,                0.,                0.]

#print "The tangent matrix for element " + str(input[0]) + " is :"
#print output
#if input[0] == 1579:
#print "The homogenized tangent matrix for element " + str(input[0]) + " is :"
#print output

if (input[0] < 1590):
    print "The homogenized magnetic field for element " + str(input[0]) + " is :"
    print output
