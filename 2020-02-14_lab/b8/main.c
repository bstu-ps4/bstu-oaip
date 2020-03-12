#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    char* str = (char*) calloc(509, sizeof(char));
    printf("Введите слово:\n");
    gets(str);

    char hissing[] = "жчшщ";

    if (
        str[strlen(str) - 4] == 'е' || str[strlen(str) - 4] == 'о'
        && str[strlen(str) - 3] == 'н'
        && str[strlen(str) - 2] == 'о'
        && str[strlen(str) - 1] == 'к'
    ) {
        int k = 0;
        for (int i = 0; i < strlen(hissing); i++) {
            if (hissing[i] == str[strlen(str) - 5]) {
                for (int j = 0; j < strlen(str) - 4; j++) {
                    printf("%c", str[j]);
                }
                printf("ата");
                continue;
            } else {
                k++;
            }
        }

        //если k равен длинне массива шипящих, то делай это
        if (k == strlen(hissing)) {
            for (int j = 0; j < strlen(str) - 4; j++) {
                printf("%c", str[j]);
            }
            printf("ята");
        }
    } else {
        printf("Нет суффикса -енок, -онок");
    }

    free(str);
    return 0;
}

