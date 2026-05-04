#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

void fill_sorted(int *arr, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = i;
}

void fill_reverse(int *arr, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = n - i;
}

void fill_same(int *arr, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = 1;
}

void fill_random(int *arr, int n) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % n;
}

double measure(void (*fill)(int*, int), int n) {
    int *arr = malloc(n * sizeof(int));

    fill(arr, n);

    clock_t start = clock();
    qsort(arr, n, sizeof(int), cmp);
    clock_t end = clock();

    free(arr);

    return (double)(end - start) / CLOCKS_PER_SEC;
}

int main() {
    srand(time(NULL));

    int n = 100000;

    printf("========================================\n");
    printf("Type\t\t\tTime (sec)\n");
    printf("========================================\n");

    printf("Sorted\t\t\t%.5f\n", measure(fill_sorted, n));
    printf("Reverse\t\t\t%.5f\n", measure(fill_reverse, n));
    printf("Same\t\t\t%.5f\n", measure(fill_same, n));
    printf("Random\t\t\t%.5f\n", measure(fill_random, n));

    printf("========================================\n");

    return 0;
}