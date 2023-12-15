#!/bin/bash
wget -O /tmp/libwin.so https://github.com/Mohakad/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
