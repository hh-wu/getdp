#!/bin/sh

SRC=../../benchmarks
DST=/onelab_files

sudo rsync -avz ${SRC}/machines ${DST}
sudo zip -r ${DST}/machine.zip ${SRC}/machines

sudo rsync -avz ${SRC}/relay ${DST}
sudo zip -r ${DST}/relay.zip ${SRC}/relay

sudo chown -R onelab:onelab ${DST}/
