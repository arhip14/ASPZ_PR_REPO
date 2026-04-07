#!/bin/bash


SEP="------------------------------------------------------------------"
DIRS=("$HOME" "/usr/bin" "/etc")

for DIR in "${DIRS[@]}"; do
    echo "${SEP}"
    echo "КАТАЛОГ: $DIR"
    echo "${SEP}"
    
    echo "[+] Перегляд атрибутів перших 3-х файлів:"
    ls -l "$DIR" | head -n 4 | tail -n 3
    
    TEST_FILE=$(ls -p "$DIR" | grep -v / | head -n 1)
    FULL_PATH="$DIR/$TEST_FILE"
    
    echo -e "\n[!] Тестування доступу до: $FULL_PATH"
    
    cat "$FULL_PATH" > /dev/null 2>&1
    [ $? -eq 0 ] && echo " - Читання: ДОЗВОЛЕНО" || echo " - Читання: ЗАБОРОНЕНО"
    
    echo "" >> "$FULL_PATH" 2>/dev/null
    [ $? -eq 0 ] && echo " - Запис:    ДОЗВОЛЕНО" || echo " - Запис:    ЗАБОРОНЕНО"

    [ -x "$FULL_PATH" ] && echo " - Виконання: ТАК (біт x встановлено)" || echo " - Виконання: НІ (біт x відсутній)"
done

echo "${SEP}"
exit  0
