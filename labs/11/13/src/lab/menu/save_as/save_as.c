#include "save_as.h"

void save_as(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("Меню:\n");
    printf("1. Сохранить как tsv файл\n");
    printf("2. Сохранить как bin файл\n");
    printf("0. Выйти\n");

    int choosen_case = getch();
    switch(choosen_case)
    {
        case '0':
            break;
        case '1':
            file_out_data(ID, cars_data, "data.tsv");
            break;
        case '2':
            file_out_data(ID, cars_data, "data.bin");
            break;
        default:
            save_as(ID, cars_data);
    }

    menu(ID, cars_data);
}