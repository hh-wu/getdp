#!/bin/sh

# Run this once you have a nice view of the model to generate the screenshots
# used in the ONELAB wiki, e.g.:
#
#  > gmsh main.pro
#  ... get nice view with Gmsh window maximized ...
#  > onelab_screenshot 1
#  ... get nice second view ...
#  > onelab_screenshot 2

if [ $# -lt 1 ]; then
  echo "Usage: $0 number" 1>&2;
  exit 1;
fi

NUMBER=$1

screencapture -Wi screenshot${NUMBER}.png

# create miniature image with width of 512 pixels
convert -resize 512 screenshot${NUMBER}.png screenshot${NUMBER}_512.png
