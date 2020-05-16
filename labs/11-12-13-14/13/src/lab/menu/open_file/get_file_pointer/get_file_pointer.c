#include "get_file_pointer.h"

FILE *get_file_pointer()
{
    int path_size;
    printf("Размер пути файла: ");
    scanf("%d", &path_size); //ввод размера пути файла

    char *path;
    printf("Какой файл открыть: ");
    path = (char *)calloc(path_size, sizeof(char)); //динамическое выделение памяти для пути файла
    scanf("%s", path);                              //ввод пути файла

    FILE *file_pointer = fopen(path, "r"); //открыли файл для чтения
    free(path);                            //очистка пути файла, т. к. он не нужен

    return file_pointer;
}