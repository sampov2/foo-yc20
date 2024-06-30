#!/bin/bash

set -e

cat << EOF | sudo tee -i /etc/apt/sources.list.d/deb-src.list
deb-src http://deb.debian.org/debian bullseye main
deb-src http://deb.debian.org/debian-security bullseye-security main
deb-src http://deb.debian.org/debian bullseye-updates main
EOF

sudo dpkg --add-architecture arm64
sudo apt-get update -y
sudo apt-get install -y build-essential crossbuild-essential-arm64

sudo apt-get build-dep -y -aarm64 foo-yc20 

sudo apt-get install -y libgtk-3-dev:arm64
