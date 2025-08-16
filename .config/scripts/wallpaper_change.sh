#!/bin/bash
WALLPAPERS_DIR="$HOME/Pictures/RIN"
RANDOM_WALLPAPER=$(find "$WALLPAPERS_DIR" -type f | shuf -n 1)
wal -i "$RANDOM_WALLPAPER"
swaybg -i "$RANDOM_WALLPAPER" --mode fill
/home/lynla_13/.config/scripts/refesh.sh
