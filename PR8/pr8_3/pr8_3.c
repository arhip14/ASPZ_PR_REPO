#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void print_array(int *arr, int n) {
    for (int i = 0; i < n && i < 10; i++) {
        printf("%d ", arr[i]);
    }
    if (n > 10) printf("...");
    printf("\n");
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

void test(const char *name, void (*fill)(int*, int), int n) {
    int *arr = malloc(n * sizeof(int));
    if (!arr) return;

    fill(arr, n);

    printf("\n==============================\n");
    printf("Test: %s\n", name);

    printf("Before sort: ");
    print_array(arr, n);

    clock_t start = clock();
    qsort(arr, n, sizeof(int), cmp);
    clock_t end = clock();

    printf("After sort:  ");
    print_array(arr, n);

    printf("Time: %.5f sec\n", (double)(end - start) / CLOCKS_PER_SEC);

    printf("==============================\n");

    free(arr);
}

int main() {
    srand(time(NULL));

    int n = 100000;

    test("Sorted (Best/Average)", fill_sorted, n);
    test("Reverse (Worst case)", fill_reverse, n);
    test("All same (Degenerate)", fill_same, n);
    test("Random", fill_random, n);

    return 0;
} 