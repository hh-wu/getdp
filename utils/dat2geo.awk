#
# This is a rudimentary script to transform the DAT format output by dxf2dat.c
# to a geo file
#
# Last Mod by Christophe on Tue Sep 19 15:52:07 2000
#

BEGIN {
    printf  "u  = 1;\n" ;
    printf  "lc = 1;\n" ;
    nump = 1 ;
    numl = 1 ;
}

function same(n1, n2){
    tolerance = 0.02 ;
    n1 += 0 ;
    n2 += 0 ;
    if(n1 == n2) return 1 ;
    else if(n1 > n2 && n1-n2 < tolerance) return 1 ;
    else if(n1 < n2 && n2-n1 < tolerance) return 1 ;
    else return 0 ;
}


$1 ~ /TRIANGLE/ {

    sub("<", "", $2); 
    sub(">", "", $4); 
    sub("<", "", $5);
    sub(">", "", $7); 
    sub("<", "", $8); 
    sub(">", "", $10);

    if(same($2,$5) && same($3,$6) && same($4,$7) &&
       same($2,$8) && same($3,$9) && same($4,$10)){
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $2, $3, $4 ;
    }
    else if(same($2,$5) && same($3,$6) && same($4,$7)){
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $2, $3, $4 ;
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $8, $9, $10 ;
	printf  "Line(%d) = {%s,%s};\n", numl++, nump-2, nump-1 ;
    }
    else if(same($2,$8) && same($3,$9) && same($4,$10)){
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $2, $3, $4 ;
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $5, $6, $7 ;
	printf  "Line(%d) = {%s,%s};\n", numl++, nump-2, nump-1 ;
    }
    else if(same($5,$8) && same($6,$9) && same($7,$10)){
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $2, $3, $4 ;
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc};\n", nump++, $5, $6, $7 ;
	printf  "Line(%d) = {%s,%s};\n", numl++, nump-2, nump-1 ;
    }
    else{
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc}\n", nump++, $2, $3, $4 ;
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc}\n", nump++, $5, $6, $7 ;
	printf  "Point(%d) = {%s *u, %s *u, %s *u, lc}\n", nump++, $8, $9, $10 ;
    }
}

END {
}
