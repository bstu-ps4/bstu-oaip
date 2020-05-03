#include "menu.h"

void menu(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("Меню:\n");
    printf("1. Открыть файл\n");
    printf("2. Ввод данных\n");
    printf("3. Вывод данных\n");
    printf("4. Сортирова по полю\n");
    printf("5. Удалить запись\n");
    printf("6. Сохранить как\n");
    printf("0. Выйти из программы\n");

    int choosen_case;
    switch(choosen_case = getch())
    {
        case '0':
            break;
        case '1':
            open_file(ID, cars_data);
            break;
        case '2':
            input_data(ID, cars_data);
            break;
        case '3':
            out_data(ID, cars_data);
            break;
        case '4':
            sort_data(ID, cars_data);
            break;
        case '5':
            del_data(ID, cars_data);
            break;
        case '6':
            save_as(ID, cars_data);
            break;
        default:
            menu(ID, cars_data);
    }
}