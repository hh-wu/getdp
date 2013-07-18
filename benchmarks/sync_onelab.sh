#!/bin/sh

DEST=/onelab_files

sudo rsync -avz machines ${DEST}
sudo zip -r ${DEST}/machine.zip machines

sudo rsync -avz relay ${DEST}
sudo zip -r ${DEST}/relay.zip relay

sudo chown -R onelab:onelab ${DEST}/

