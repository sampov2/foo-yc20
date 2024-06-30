#!/bin/bash

set -e

cat << EOF | sudo tee -i /etc/apt/sources.list.d/deb-src.list
deb-src http://deb.debian.org/debian bullseye main
deb-src http://deb.debian.org/debian-security bullseye-security main
deb-src http://deb.debian.org/debian bullseye-updates main
EOF

sudo dpkg --add-architecture armhf
sudo apt-get update -y
sudo apt-get install -y build-essential crossbuild-essential-armhf

sudo apt-get build-dep -y -aarmhf foo-yc20 

sudo apt-get install -y libgtk-3-dev:armhf
