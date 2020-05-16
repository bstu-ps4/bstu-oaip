#include "if_file_not_founded.h"

void if_file_not_founded(int ID, struct structure_for_car* cars_data)
{
    clearConsole();
    printf("Файл не найден!\n\n");

    printf("Меню:\n");
    printf("1. Открыть файл\n");
    printf("0. Выйти в главное меню\n");

    int choosen_case = getch();
    choosen_case = getch();
    switch (choosen_case)
    {
    case '0':
        menu(ID, cars_data);
        break;
    default:
        open_file(ID, cars_data);
    }
}