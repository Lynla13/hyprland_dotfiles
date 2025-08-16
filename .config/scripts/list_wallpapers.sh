#!/bin/bash
echo "["
find /home/lynla_13/Pictures/RIN/ -type f -printf '"%p",\n' | sed '$ s/,$//' 
echo "]"
