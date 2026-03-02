#!/bin/bash

echo "=== Поточні обмеження ulimit ==="
ulimit -a

echo ""
echo "=== Зміна деяких soft-лімітів ==="
ulimit -n 2048 2>/dev/null && echo "Soft limit open files: 2048"
ulimit -f 1024 2>/dev/null && echo "Soft limit max file size: 1024 блоки"
ulimit -t 10 2>/dev/null && echo "Soft limit CPU time: 10 секунд"
ulimit -s 8192 2>/dev/null && echo "Soft limit stack size: 8192 KB"

echo ""
echo "=== Нові обмеження після зміни ==="
ulimit -a

echo ""
echo "=== Тест перевищення ліміту файлу ==="
tmpfile="ulimit_test_file.txt"
> $tmpfile
for i in {1..2000}; do
    echo "Line $i" >> $tmpfile 2>/dev/null
    if [ $? -ne 0 ]; then
        echo "Перевищено ліміт файлу на рядку $i"
        break
    fi
done
rm -f $tmpfile

echo ""
echo "=== Тест завершено ==="
