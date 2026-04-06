// Варіант з помилкою
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     void *ptr = NULL;
//     int i;

//     for (i = 0; i < 3; i++) {

//         if (!ptr)
//             ptr = malloc(16);

//         printf("Iteration %d, ptr = %p\n", i, ptr);

//         strcpy(ptr, "Hello");   // використання пам'яті

//         free(ptr);              // звільнили, але ptr не NULL
//     }

//     return 0;
// }

// У цьому коді є логічна помилка.

// Проблема в тому, що після free(ptr) змінна ptr не обнуляється.
// Вона продовжує містити стару адресу (висячий вказівник — dangling pointer)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    void *ptr = NULL;
    int i;

    for (i = 0; i < 3; i++) {

        if (!ptr)
            ptr = malloc(16);

        printf("Iteration %d, ptr = %p\n", i, ptr);

        strcpy(ptr, "Hello");

        free(ptr);
        ptr = NULL;  
    }

    return 0;
}