
BEGIN {
printf  "lc = 1 ;\n"
printf  "u = 1 ;\n"
num = 1 
}

{
printf  "Point(%d) = { %s *u, %s *u, %s *u, lc};\n", num++, $1, $2, $3
}


END {
printf  "Coherence ;\n"
}