#include "../inc/sort_data.h"

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
            sort_data_by_number_field(ID, cars_data);
            break;
        case '2':
            sort_data_by_mark_field(ID, cars_data);
            break;
        case '3':
            sort_data_by_surname_field(ID, cars_data);
            break;
        case '4':
            sort_data_by_osmotr_field(ID, cars_data);
            break;
        default:
            sort_data(ID, cars_data);
    }

    menu(ID, cars_data);
}

// - - - - - 1 - Сортировка по номеру - - - - -

void sort_data_by_number_field(int ID, struct structure_for_car* cars_data)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            int k = 0;
            if (cars_data[j].number[k] > cars_data[i].number[k])
            {
                struct structure_for_car temp = cars_data[i];
                cars_data[i] = cars_data[j];
                cars_data[j] = temp;
            }
        }
    }
}

// - - - - - 2 - - - - -

void sort_data_by_mark_field(int ID, struct structure_for_car* cars_data)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            int k = 0;
            if (cars_data[j].mark[k] > cars_data[i].mark[k])
            {
                struct structure_for_car temp = cars_data[i];
                cars_data[i] = cars_data[j];
                cars_data[j] = temp;
            }
        }
    }
}

// - - - - - 3 - - - - -

void sort_data_by_surname_field(int ID, struct structure_for_car* cars_data)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            int k = 0;
            if (cars_data[j].surname[k] > cars_data[i].surname[k])
            {
                struct structure_for_car temp = cars_data[i];
                cars_data[i] = cars_data[j];
                cars_data[j] = temp;
            }
        }
    }
}

// - - - - - 4 - Сортировка по осмотру - - - - -

void sort_data_by_osmotr_field(int ID, struct structure_for_car* cars_data)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            if (cars_data[j].osmotr < cars_data[i].osmotr)
            {
                struct structure_for_car temp = cars_data[i];
                cars_data[i] = cars_data[j];
                cars_data[j] = temp;
            }
        }
    }
}