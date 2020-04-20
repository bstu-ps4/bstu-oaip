#include "../inc/lab.h"

void lab()
{
    int ID = 0;
    struct structure_for_car* cars_data;
    cars_data = (struct structure_for_car*) calloc(ID, sizeof(struct structure_for_car));

    menu(ID, cars_data);
}

void menu(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("Меню:\n");
    printf("1. Ввод данных\n");
    printf("2. Вывод данных\n");
    printf("3. Сортирова по полю\n");
    printf("4. Удалить запись\n");
    printf("0. Выйти из программы\n");

    int choosen_case;
    switch(choosen_case = getch())
    {
        case '0':
            break;
        case '1':
            input_data(ID, cars_data);
            break;
        case '2':
            out_data(ID, cars_data);
            break;
        case '3':
            sort_data(ID, cars_data);
            break;
        case '4':
            del_data(ID, cars_data);
            break;
        default:
            menu(ID, cars_data);
    }
}
