#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

int main() {
    DIR *dir = opendir(".");
    struct dirent *entry;

    if (!dir) {
        perror("opendir");
        return 1;
    }

    char answer;

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;

        printf("Delete file: %s ? (y/n): ", entry->d_name);
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y') {
            if (remove(entry->d_name) == 0) {
                printf("Deleted: %s\n", entry->d_name);
            } else {
                perror("remove");
            }
        }
    }

    closedir(dir);
    return 0;
}