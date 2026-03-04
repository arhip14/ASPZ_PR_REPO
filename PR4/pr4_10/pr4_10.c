#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *ptr = malloc(16);
    if (!ptr) { perror("malloc"); return 1; }

    strcpy(ptr, "Hello");

    printf("Original pointer: %p, contents: %s\n", ptr, ptr);

    char *newptr = realloc(ptr, 64);
    if (!newptr) { perror("realloc"); free(ptr); return 1; }

    printf("After realloc pointer: %p, contents: %s\n", newptr, newptr);

    free(newptr);
    return 0;
}

// realloc() намагається розширити на місці, якщо можливо.
// Якщо розширення на місці неможливе, відбувається виділення нового блоку та копіювання даних.
// Це важливо для ефективності: розширення на місці швидше, бо не потребує копіювання.

// Аналіз через ltrace або valgrind
// Якщо адреса не змінилася, було розширення на місці.
// Якщо адреса змінилася, старий блок скопійовано у новий блок пам’яті.
