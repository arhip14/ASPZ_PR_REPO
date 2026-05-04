#!/bin/bash

MY_UID=$(id -u)
MY_NAME=$(whoami)

THRESHOLD=1000

echo "--- Пошук звичайних користувачів (UID >= $THRESHOLD) ---"
echo "Ваш UID: $MY_UID ($MY_NAME)"
echo "------------------------------------------------------"

found_others=false

while IFS=: read -r username password uid gid info home shell; do
    if [ "$uid" -ge "$THRESHOLD" ] && [ "$uid" -ne "$MY_UID" ] && [ "$uid" -ne 65534 ]; then
        echo "Знайдено користувача: $username (UID: $uid)"
        found_others=true
    fi
done < <(getent passwd)

if [ "$found_others" = false ]; then
    echo "Окрім вас, звичайних користувачів у системі не знайдено."
fi