#!/bin/bash


SEP="------------------------------------------------------------------"
TEST_FILE="temp_study_file.txt"

echo "${SEP}"
echo "1. Створення файлу від імені користувача: $(whoami)"
echo "Початковий вміст" > "$TEST_FILE"
ls -l "$TEST_FILE"

echo -e "\n2. Зміна власника на root та прав на 600 (тільки root може читати/писати)"
sudo chown root:root "$TEST_FILE"
sudo chmod 600 "$TEST_FILE"
ls -l "$TEST_FILE"

echo -e "\n3. Перевірка доступу (читання):"
cat "$TEST_FILE" 2>/dev/null
if [ $? -ne 0 ]; then
    echo "Результат: Читання заборонено (Permission denied)."
else
    echo "Результат: Читання дозволено."
fi

echo -e "\n4. Перевірка доступу (запис):"
echo "Спроба запису" >> "$TEST_FILE" 2>/dev/null
if [ $? -ne 0 ]; then
    echo "Результат: Запис заборонено (Permission denied)."
else
    echo "Результат: Запис дозволено."
fi

echo -e "\n5. Повернення прав (chmod 644) - дозволяємо читання всім:"
sudo chmod 644 "$TEST_FILE"
ls -l "$TEST_FILE"
echo -n "Результат читання: "
cat "$TEST_FILE"

sudo rm "$TEST_FILE"
echo "${SEP}"
