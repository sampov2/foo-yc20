#!/bin/bash

export FAUST_VERSION="2.72.14"

set -e

cd /tmp/

wget -O faust.tar.gz https://github.com/grame-cncm/faust/releases/download/$FAUST_VERSION/faust-$FAUST_VERSION.tar.gz

tar xf faust.tar.gz

cd faust-$FAUST_VERSION/

apt-get -y update
apt-get install -y build-essential llvm libncurses5-dev libncurses5 libmicrohttpd-dev git cmake pkg-config 

# Stuff that foo-yc20 needs
apt-get install -y libjack-dev libgtk2.0-dev lv2-dev

make

make install