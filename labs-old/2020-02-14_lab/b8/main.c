#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    char* str = (char*) calloc(509, sizeof(char));
    printf("������� �����:\n");
    gets(str);

    char hissing[] = "����";

    if (
        str[strlen(str) - 4] == '�' || str[strlen(str) - 4] == '�'
        && str[strlen(str) - 3] == '�'
        && str[strlen(str) - 2] == '�'
        && str[strlen(str) - 1] == '�'
    ) {
        int k = 0;
        for (int i = 0; i < strlen(hissing); i++) {
            if (hissing[i] == str[strlen(str) - 5]) {
                for (int j = 0; j < strlen(str) - 4; j++) {
                    printf("%c", str[j]);
                }
                printf("���");
                continue;
            } else {
                k++;
            }
        }

        //���� k ����� ������ ������� �������, �� ����� ���
        if (k == strlen(hissing)) {
            for (int j = 0; j < strlen(str) - 4; j++) {
                printf("%c", str[j]);
            }
            printf("���");
        }
    } else {
        printf("��� �������� -����, -����");
    }

    free(str);
    return 0;
}

