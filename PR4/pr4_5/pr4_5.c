#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    char *ptr = malloc(16);
    if (!ptr) {
        printf("malloc failed\n");
        return 1;
    }

    printf("Original pointer: %p\n", ptr);

    size_t huge = (size_t)-1;

    char *tmp = realloc(ptr, huge);

    if (tmp == NULL) {
        printf("realloc failed\n");
        printf("Old pointer is still valid: %p\n", ptr);
        free(ptr); 
    } else {
        ptr = tmp;
        free(ptr);
    }

    return 0;
}

// Якщо realloc(ptr, new_size) не може виділити пам’ять:
// вона повертає NULL
// старий блок пам’яті не звільняється
// початковий вказівник залишається валідним
// Тому не можна одразу присвоювати результат у той самий вказівник, інакше можна втратити адресу старого блоку (memory leak).