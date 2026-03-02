#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILENAME "results.txt"
#define MAX_FILE_SIZE 1024
#define NUM_ROLLS 1000

int main() {
    FILE *file;
    int i;
    long file_size =0;
    srand(time(NULL));
//int bytes_per_roll = 2; 
  //  int rolls_allowed = MAX_FILE_SIZE / bytes_per_roll;
   // printf("Прогноз: максимум %d кидків кубика вміститься у файл.\n", rolls_allowed);
    
    file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Не можу відкрити файл!\n");
        return 1;
    }
    for ( i =0; i < NUM_ROLLS; i++) {
        int roll = rand() % 6 + 1;
        char line[4];
        int len = sprintf(line, "%d\n", roll);
        if (file_size + len > MAX_FILE_SIZE) {
            printf("Досягнуто максимальний розмір файлу!\n");
            break;
        }
        fprintf(file, "%s", line); 
        file_size += len;
    }
    fclose(file);
    printf("Запис завершено.\n");
    return 0;
}
