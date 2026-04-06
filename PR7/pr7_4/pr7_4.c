#include <stdio.h>
#include <stdlib.h>

#define LINES_PER_PAGE 20

void wait_for_key() {
    printf("\n--- Press Enter to continue ---");
    while (getchar() != '\n');
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <file1> <file2> ...\n", argv[0]);
        return 1;
    }

    char line[1024];
    int line_count = 0;

    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r");

        if (!file) {
            perror("fopen");
            continue;
        }

        printf("\n--- File: %s ---\n", argv[i]);

        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
            line_count++;

            if (line_count % LINES_PER_PAGE == 0) {
                wait_for_key();
            }
        }

        fclose(file);
    }

    return 0;
}
