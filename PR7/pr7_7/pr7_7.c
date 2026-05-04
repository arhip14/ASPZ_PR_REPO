#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

int is_c_file(const char *name) {
    const char *ext = strrchr(name, '.');
    return ext && strcmp(ext, ".c") == 0;
}

int main() {
    DIR *dir = opendir(".");
    struct dirent *entry;

    if (!dir) {
        perror("opendir");
        return 1;
    }

    char answer;

    while ((entry = readdir(dir)) != NULL) {
        if (!is_c_file(entry->d_name))
            continue;

        printf("C file: %s\n", entry->d_name);

        printf("Give read permission to others? (y/n): ");
        scanf(" %c", &answer);

        if (answer == 'y' || answer == 'Y') {
            struct stat st;
            if (stat(entry->d_name, &st) == 0) {
                chmod(entry->d_name, st.st_mode | S_IROTH);
                printf("Read permission granted.\n");
            } else {
                perror("stat");
            }
        }
    }

    closedir(dir);
    return 0;
}