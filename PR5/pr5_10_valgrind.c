#include <stdio.h>
#include <stdlib.h>

int main() {

    int *base = malloc(10 * sizeof(int));  
    int *ptr = base + 5;                  

    ptr[0] = 42;

    free(ptr);  

    return 0;
}

Програма намагається звільнити адресу, яка не є початком виділеного блоку.

// #include <stdio.h>
// #include <stdlib.h>

// int main() {

//     int *base = malloc(10 * sizeof(int));
//     int *ptr = base + 5;

//     ptr[0] = 42;

//     free(base);   

//     return 0;
// }