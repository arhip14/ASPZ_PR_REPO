#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    DIR *dir = opendir(".");
    struct dirent *entry;

    if (!dir) {
        perror("opendir");
        return 1;
    }

    char *dirs[1024];
    int count = 0;

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;

        struct stat st;
        if (stat(entry->d_name, &st) == 0) {
            if (S_ISDIR(st.st_mode)) {
                dirs[count] = strdup(entry->d_name);
                count++;
            }
        }
    }

    closedir(dir);

    qsort(dirs, count, sizeof(char *), compare);

    for (int i = 0; i < count; i++) {
        printf("%s\n", dirs[i]);
        free(dirs[i]);
    }

    return 0;
}