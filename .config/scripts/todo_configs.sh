#!/bin/bash
cmd="$1"
file="$HOME/Documents/notes.txt"
text="${2}"

if [[ "$cmd" == "add" ]]; then
    echo "$text" >> "$file"
elif [[ "$cmd" == "create" ]]; then
    if [[ -n "$text" ]]; then
        echo "$text" > "$file"
    else
        > "$file"
    fi
elif [[ "$cmd" == "edit" ]]; then
    ${EDITOR:-nano} "$file"
elif [[ "$cmd" == "delete" ]]; then
    rm -f "$file"
elif [[ "$cmd" == "empty" ]]; then
    > "$file"
fi
