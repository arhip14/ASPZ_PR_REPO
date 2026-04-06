#include <stdio.h>
#include <stdlib.h>

int main() {
    int xa = 50000;
    int xb = 50000;

    int num = xa * xb;   

    printf("xa * xb = %d\n", num);

    void *ptr = malloc(num);

    if (ptr == NULL) {
        printf("malloc failed\n");
    } else {
        printf("malloc succeeded\n");
        free(ptr);
    }

    return 0;
}

// Функція malloc() приймає параметр типу size_t (беззнаковий тип).

// Якщо передати від’ємне число, наприклад: malloc(-1);
// то відбудеться неявне перетворення -1 у size_t.

// На x86_64:-1 → 18446744073709551615 (2^64 - 1)

// Тобто malloc() спробує виділити гігантський обсяг пам’яті.

// Результат:
// 	найчастіше поверне NULL
// 	або завершиться помилкою виділення пам’яті
