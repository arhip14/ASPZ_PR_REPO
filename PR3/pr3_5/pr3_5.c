#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Program need two arguments\n");
        return 1;
    }

    FILE *source, *dest;

    source = fopen(argv[1], "r");
    if (source == NULL) {
        printf("Cannot open file %s for reading\n", argv[1]);
        return 1;
    }

    dest = fopen(argv[2], "w");
    if (dest == NULL) {
        printf("Cannot open file %s for writing\n", argv[2]);
        fclose(source);
        return 1;
    }

    char buffer[BUFFER_SIZE];
    size_t bytes;
    while ((bytes = fread(buffer, 1, BUFFER_SIZE, source)) > 0) {

        if (fwrite(buffer, 1, bytes, dest) != bytes) {
            printf("File size limit exceeded or write error\n");
            fclose(source);
            fclose(dest);
            return 1;
        }
    }

    printf("File copied successfully\n");

    fclose(source);
    fclose(dest);

    return 0;
}
