#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

void list_files(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (!dir) {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
            continue;

        char full_path[1024];
        snprintf(full_path, sizeof(full_path), "%s/%s", path, entry->d_name);

        struct stat st;
        if (stat(full_path, &st) == 0) {
            if (S_ISDIR(st.st_mode)) {
                printf("[DIR] %s\n", full_path);
                list_files(full_path);
            } else {
                printf("[FILE] %s\n", full_path);
            }
        }
    }

    closedir(dir);
}

int main() {
    list_files(".");
    return 0;
}
