
# Ceci est un programme awk (C. Geuzaine)
# Utilisation: awk -f dat2geo fichier

BEGIN {
printf  "lc = 1 ;\n"
printf  "u = 1 ;\n"
num = 1 
}

$1 ~ /TRIANGLE/ {
printf  "Point(%d) = { %s *u, %s *u, 0, lc};\n", num++, substr($2,2), $3
printf  "Point(%d) = { %s *u, %s *u, 0, lc};\n", num++, substr($5,2), $6
printf  "Point(%d) = { %s *u, %s *u, 0, lc};\n", num++, substr($8,2), $9
}


END {
printf  "Coherence ;\n"
}