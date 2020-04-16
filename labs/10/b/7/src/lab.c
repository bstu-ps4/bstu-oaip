#include "../inc/lab.h"

void lab()
{
    int string_size;
    printf("Размер строки: ");
    scanf("%d", &string_size);

    char* str = (char*) calloc(string_size, sizeof(char));
    printf("Строка: ");
    scanf("%s", str);

    int k;
    printf("С какого символа: ");
    scanf("%d", &k);

    int n;
    printf("Сколько символов: ");
    scanf("%d", &n);

    printf("Изменённая строка: %s\n", get_invert_string(str, k, n));

    free(str);
}