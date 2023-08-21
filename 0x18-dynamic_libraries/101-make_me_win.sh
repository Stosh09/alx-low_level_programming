#!/bin/bash
wget -P /tmp/ https://raw.github.com/Stosh09/alx-low_level_programming/master/0x18-dynamic_libraries/randwin.so
export LD_PRELOAD=./randwin.so
