Function { 

anhys_b  = { 
0.00000000, 0.29206456, 0.57082803, 0.73924297, 0.85253774,
0.93643148, 1.00221603, 1.05573163, 1.10038538, 1.13834147,
1.17106303, 1.19958705, 1.22467622, 1.24690827, 1.26673145,
1.28450057, 1.30050116, 1.31496627, 1.32808839, 1.34002818,
1.35092093, 1.36088144, 1.37000783, 1.37838442, 1.38608410,
1.39317015, 1.39969774, 1.40571516, 1.41126481, 1.41638402,
1.42110573, 1.42545912, 1.42946999, 1.43316128, 1.43655335,
1.43966429, 1.44251018, 1.44510530, 1.44746232, 1.44959246,
1.45150564, 1.45321054, 1.45471478, 1.45602496, 1.45714673,
1.45808489, 1.45884338, 1.45942537, 1.45983330, 1.46006885,
1.46013301 } ; 

anhys_h  = { 
0.00000000, 31.48945679, 62.94768133, 94.34347236, 125.64569053, 
156.82328930, 187.84534575, 218.68109121, 249.29994180, 279.67152877, 
309.76572863, 339.55269297, 369.00287816, 398.08707454, 426.77643550, 
455.04250600, 482.85725087, 510.19308256, 537.02288850, 563.32005806, 
589.05850886, 614.21271269, 638.75772080, 662.66918868, 685.92340017, 
708.49729101, 730.36847168, 751.51524967, 771.91665092, 791.55244067, 
810.40314351, 828.45006274, 845.67529883, 862.06176725, 877.59321537, 
892.25423862, 906.03029572, 918.90772314, 930.87374864, 941.91650394, 
952.02503648, 961.18932028, 969.40026594, 976.64972956, 982.93052091, 
988.23641048, 992.56213574, 995.90340628, 998.25690814, 999.62030702, 
999.99225068 } ; 

anhys_b2  = List[anhys_b]^2 ;
anhys_nu  = List[anhys_h]/List[anhys_b] ;
anhys_nu(0)  = anhys_nu(1) ;
anhys_nu_b   = ListAlt[anhys_b, anhys_nu] ;
anhys_nu_b2  = ListAlt[anhys_b2, anhys_nu] ;

nu_anhys[]     = InterpolationLinear[SquNorm[$1]]{List[anhys_nu_b2]} ;
dnudb2_anhys[] = dInterpolationLinear[SquNorm[$1]]{List[anhys_nu_b2]} ;
h_anhys[] = nu_anhys[$1#1] * #1 ;
dhdb_anhys[] = TensorDiag[1,1,1] * nu_anhys[$1#1] + 2*dnudb2_anhys[#1] * SquDyadicProduct[#1] ;
dhdb_anhys_NL[] = 2*dnudb2_anhys[$1#1] * SquDyadicProduct[#1] ;
} 