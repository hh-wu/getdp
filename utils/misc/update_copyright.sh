#!/bin/sh -

files=`git grep -l '(C) 1997-2020 P. Dular'`

for file in $files; do
  echo "modifying $file"
  sed -i '' -e "s/(C) 1997-2020 P\. Dular/(C) 1997-2021 P\. Dular/g" $file
done

# Need to manually change:
#   CREDITS.txt
#   doc/texinfo/getdp.texi
#   doc/getdp.html
