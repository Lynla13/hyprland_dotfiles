#!/bin/bash
# ~/.local/bin/ai-chat-wofi

# Kiểm tra Ollama đang chạy
if ! curl -s http://localhost:11434/api/tags > /dev/null; then
    wofi --show dmenu -p "Ollama chưa chạy! Khởi động?" && \
    ollama serve &
    sleep 3
fi
USER=$(whoami)

echo "${USER}: ${1} (Model is thinking...)" >> ~/.config/scripts/history.txt
notify-send  "Sending your question" "Done"
# Chọn model
#QUERY=$(tail -n 10 query.txt | wofi --show dmenu --height 110 --prompt "💬" --line 2 )
ANSWER=$(ollama run qwen2.5:0.5b-instruct-q8_0 "${1}") 
#echo -e "AI Respone: ${ANSWER}" | fold -w 70 -s | wofi --show dmenu --line 20
#LOG= $(${ANSWER})

sleep 2
echo $ANSWER >> ~/.config/scripts/history.txt
echo -e "$ANSWER" 
notify-send  "AI Done Thinking" "Responed"

