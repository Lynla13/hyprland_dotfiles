#!/bin/bash
WALLPAPERS_DIR="$HOME/Pictures/RIN"
RANDOM_WALLPAPER=$(find "$WALLPAPERS_DIR" -type f | shuf -n 1)
wal -i "$RANDOM_WALLPAPER"
swaybg -i "$RANDOM_WALLPAPER" --mode fill &
eww r &
echo "$RANDOM_WALLPAPER"> ~/.config/scripts/wallpaper.txt
notify-send "Themes" "Change theme successful!"
