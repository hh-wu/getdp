
BEGIN {
}

$1 ~ /TRIANGLE/ {
printf  "%s %s 0\n", substr($2,2), $3
printf  "%s %s 0\n", substr($5,2), $6
printf  "%s %s 0\n", substr($8,2), $9
}

END {
}
