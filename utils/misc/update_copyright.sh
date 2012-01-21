#!/bin/sh -

files=`find ../.. -not -path "*.svn*" -and -not -path "*lib*" -and -not -path "*bin*" -and -not -name "update_copyright.sh" | xargs grep 'Copyright (C) 1997-2011 P. Dular, C. Geuzaine' -sl`

echo $files

for file in $files 
do
sed "s|(C) 1997-2011 P|(C) 1997-2012 P|g" $file > $file.tmp
echo modified $file
rm -f $file
mv $file.tmp $file
done
