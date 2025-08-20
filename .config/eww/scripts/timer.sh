#!/bin/bash

step=100
notify-send "Timer Start!!"

while [ $step -gt 1 ]; do
  ((step--))
  echo "$step" > ~/.config/eww/scripts/timer.txt
  sleep $1
done

notify-send "Time up!" "Your time is up!"
mpv '/home/lynla_13/Videos/MMDS/Iwara - 61.Haku-NUMBER 9-20250813 [m6KDs5Y32Fb19T] [Source].mp4'


