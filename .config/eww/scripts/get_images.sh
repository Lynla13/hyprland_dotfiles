#!/bin/bash
IMAGES=($(find ~/Pictures/RIN/ -maxdepth 1 -type f \( -iname "*.jpg" -o -iname "*.png" \) | head -n 5))

echo -n "["
for ((i=0; i<${#IMAGES[@]}; i++)); do
  if [[ $i -ne 0 ]]; then
    echo -n ", "
  fi
  echo -n "\"${IMAGES[$i]}\""
done
echo "]"
