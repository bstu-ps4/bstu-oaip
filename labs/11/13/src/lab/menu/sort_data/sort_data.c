#include "sort_data.h"

void sort_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    int choosen_case;
    printf("1. Сортировка по номеру\n");
    printf("2. Сортировка по марке\n");
    printf("3. Сортировка по фамилии\n");
    printf("4. Сортировка по осмотру\n");
    printf("0. Выйти\n");
    printf("\n");
    printf("По какой строке сортировать: ");
    choosen_case = getch();

    switch(choosen_case)
    {
        case '0':
            break;
        case '1':
            get_sorted_array(ID, cars_data, sort_data_by_number_field);
            break;
        case '2':
            get_sorted_array(ID, cars_data, sort_data_by_mark_field);
            break;
        case '3':
            get_sorted_array(ID, cars_data, sort_data_by_surname_field);
            break;
        case '4':
            sort_data_by_osmotr_field(ID, cars_data);
            break;
        default:
            sort_data(ID, cars_data);
    }

    menu(ID, cars_data);
}