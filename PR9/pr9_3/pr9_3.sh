#!/bin/bash

SEP="------------------------------------------------------------------"
USER_HOME=$HOME
CURRENT_USER=$(whoami)
FILE_ORIGIN="test_file_original.txt"
FILE_COPY="$USER_HOME/test_file_root_copy.txt"

echo "${SEP}"
echo "1. Створення файлу від імені користувача: $CURRENT_USER"
echo "Hello, this is a test file." > "$FILE_ORIGIN"
ls -l "$FILE_ORIGIN"

echo -e "\n2. Копіювання файлу від імені root за допомогою sudo"

sudo cp "$FILE_ORIGIN" "$FILE_COPY"

echo -e "\n3. Перевірка власника та прав доступу копії:"
ls -l "$FILE_COPY"

echo "${SEP}"
echo "4. Спроба змінити файл від імені звичайного користувача:"
echo "Adding new line" >> "$FILE_COPY" 2>/tmp/error_log
if [ $? -ne 0 ]; then
    echo "Результат: Відмовлено у доступі (Permission denied). Зберегти зміни неможливо."
else
    echo "Результат: Зміни збережено."
fi

echo -e "\n5. Спроба видалити файл командою rm:"
rm "$FILE_COPY"
if [ $? -eq 0 ]; then
    echo "Результат: Файл успішно видалено."
else
    echo "Результат: Не вдалося видалити файл."
fi

rm "$FILE_ORIGIN"
echo "${SEP}"