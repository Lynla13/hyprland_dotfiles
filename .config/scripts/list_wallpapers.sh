#!/bin/bash
export HOME=/home/$(whoami)

WALLPAPER_DIR=$HOME/Pictures/RIN
WALLPAPER=$(find $WALLPAPER_DIR -type f \( -name "*.jpg" -o -name "*.png" \) -exec basename {} \; | cat | wofi -b --show dmenu) 

swaybg -i "$WALLPAPER_DIR/$WALLPAPER" --mode fill & 
echo "$WALLPAPER_DIR/$WALLPAPER"> ~/.config/scripts/wallpaper.txt 

