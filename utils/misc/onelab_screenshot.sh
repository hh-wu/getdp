#!/bin/sh

# Run this once you have a nice view of the model to generate the wiki
# screenshots
#

if [ $# -lt 1 ]; then
  echo "Usage: $0 number" 1>&2;
  exit 1;
fi

NUMBER=$1

screencapture -Wi screenshot${NUMBER}.png
convert -scale 512 screenshot${NUMBER}.png screenshot${NUMBER}_512.png
