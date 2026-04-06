#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr = malloc(0);

    if (ptr == NULL) {
        printf("malloc(0) returned NULL\n");
    } else {
        printf("malloc(0) returned non-NULL pointer: %p\n", ptr);
    }

    free(ptr);
    return 0;
}


// malloc(0) не виділяє реальної пам’яті, але повертає вказівник, який можна безпечно передати у free().
// Тому виклик free(ptr) не викликає помилки, навіть якщо ptr не виділяє блок.
// Якщо malloc(0) повертає NULL, free(NULL) теж безпечний (за стандартом C).
// malloc(0) — спеціальний випадок: програма повинна перевіряти повернений вказівник, але безпечно можна робити free() незалежно від того, NULL чи ні.
