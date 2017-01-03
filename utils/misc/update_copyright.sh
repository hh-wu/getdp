#!/bin/sh -

files=`find ../.. -not -path "*.svn*" -and -not -path "*lib*" -and -not -path "*bin*" -and -not -path "*build_*" -and -not -name "update_copyright.sh" | xargs grep 'Copyright (C) 1997-2016 P. Dular and C. Geuzaine' -sl`

echo $files

for file in $files 
do
sed "s|(C) 1997-2016 P\. Dular and C\. Geuzaine|(C) 1997-2017 P\. Dular and C\. Geuzaine|g" $file > $file.tmp
echo modified $file
rm -f $file
mv $file.tmp $file
done

# FIXME: need to modify manually
#   README.txt
#   doc/CREDITS.txt
#   doc/texinfo/getdp.texi
#   doc/getdp.html

