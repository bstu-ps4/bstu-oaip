#include "write_table.h"

void print_line(int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("-");
    }
}

void print_sep()
{
    printf(" | ");
}

void write_table(int ID, struct structure_for_car *cars_data, int iterations, int *indices_array)
{
    if (ID < iterations)
    {
        printf("Ошибка!\n");
        printf("В массиве структур меньше элементов, чем в индексном файле индексов\n");
    }
    else
    {
        print_sep();
        printf("ID  ");
        print_sep();
        printf("байт ");
        printf("Номер   ");
        print_sep();
        printf("байт ");
        printf("Марка   ");
        print_sep();
        printf("байт ");
        printf("Фамилия     ");
        print_sep();
        printf("Осмотр    ");
        print_sep();
        printf("\n");

        print_sep();
        print_line(4); //ID
        print_sep();
        print_line(4 + 1 + 8); //байт + Номер
        print_sep();
        print_line(4 + 1 + 8); //байт + Марка
        print_sep();
        print_line(4 + 1 + 12); //байт + Фамилия
        print_sep();
        print_line(10); //Ссмотр
        print_sep();
        printf("\n");

        for (int i = 0; i < iterations; i++)
        {
            print_sep();
            printf("%-4d", i);
            print_sep();
            printf("%-4d ", cars_data[indices_array[i]].number_size);
            printf("%-8s", cars_data[indices_array[i]].number);
            print_sep();
            printf("%-4d ", cars_data[indices_array[i]].mark_size);
            printf("%-8s", cars_data[indices_array[i]].mark);
            print_sep();
            printf("%-4d ", cars_data[indices_array[i]].surname_size);
            printf("%-12s", cars_data[indices_array[i]].surname);
            print_sep();
            printf("%s", (cars_data[indices_array[i]].osmotr == yes ? "Пройден   " : "Не пройден"));
            print_sep();
            printf("\n");
        }
    }
}