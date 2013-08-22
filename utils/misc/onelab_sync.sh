#!/bin/sh

SRC=../../benchmarks
DST=/onelab_files

sudo rsync -avz ${SRC}/machines ${DST} --delete --exclude .svn
sudo zip -r ${DST}/machines.zip ${SRC}/machines -x \*.svn\*

sudo rsync -avz ${SRC}/relay ${DST} --delete --exclude .svn
sudo zip -r ${DST}/relay.zip ${SRC}/relay -x \*.svn\*

sudo chown -R onelab:onelab ${DST}/
