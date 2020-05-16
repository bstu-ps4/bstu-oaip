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

    int* indices_array = (int*) calloc(ID, sizeof(int));
    for(int i = 0; i < ID; i++)
    {
        indices_array[i] = i;
    }

    switch(choosen_case)
    {
        case '0':
            break;
        case '1':
            number_field_sort(ID, cars_data, indices_array);
            break;
        case '2':
            mark_field_sort(ID, cars_data, indices_array);
            break;
        case '3':
            surname_field_sort(ID, cars_data, indices_array);
            break;
        case '4':
            osmotr_field_sort(ID, cars_data, indices_array);
            break;
        default:
            sort_data(ID, cars_data);
    }
    
    FILE* file_pointer = fopen("indices.txt", "wt");//открыли файл для записи как текстовый
    for (int i = 0; i < ID; i++)
    {
        fprintf(file_pointer, "%d\n", indices_array[i]); //записали индекс
    }
    fclose(file_pointer); //закрыли файл

    free(indices_array); //очистили массив индексов

    menu(ID, cars_data); //вывод меню
}