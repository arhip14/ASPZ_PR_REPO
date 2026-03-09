#include <stdio.h>
#include <stdlib.h>

int main() {

    int *base = malloc(10 * sizeof(int));  
    int *ptr = base + 5;                  

    ptr[0] = 42;

    free(ptr);  

    return 0;
}

// Функція malloc() повертає базову адресу блоку пам’яті.
// Звільняти пам’ять можна лише через цю адресу.

// програма намагається звільнити неправильну адресу, тому що ptr не є початком блоку.
// Це призводить до:
// undefined behavior
// аварійного завершення програми
// пошкодження heap
