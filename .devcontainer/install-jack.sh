#!/bin/bash

set -e

cd /tmp/

wget -O jack2.tar.gz https://github.com/jackaudio/jack2/archive/v1.9.22.tar.gz

tar xf jack2.tar.gz
cd jack2-1.9.22/

./waf configure --prefix=/opt/jack
./waf install

