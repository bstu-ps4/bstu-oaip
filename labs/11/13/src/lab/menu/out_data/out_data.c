#include "out_data.h"

void out_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("|");
    printf(" ID   |");

    printf(" байт");
    printf(" Номер    |");

    printf(" байт");
    printf(" Марка    |");

    printf(" байт");
    printf(" Фамилия      |");

    printf(" Осмотр     |");
    printf("\n");

    printf("|");
    printf(" ---- |"); //ID

    printf(" ----"); //байт
    printf(" -------- |"); //Номер

    printf(" ----"); //байт
    printf(" -------- |"); //Марка

    printf(" ----"); //байт
    printf(" ------------ |"); //Фамилия

    printf(" ---------- |"); //Осмотр
    printf("\n");

    for (int i = 0; i < ID; i++)
    {
        printf("|");
        printf(" %-4d |", i);

        printf(" %-4d", cars_data[i].number_size);
        printf(" %-8s |", cars_data[i].number);

        printf(" %-4d", cars_data[i].mark_size);
        printf(" %-8s |", cars_data[i].mark);

        printf(" %-4d", cars_data[i].surname_size);
        printf(" %-12s |", cars_data[i].surname);

        printf(" %s |", (cars_data[i].osmotr == yes? "Пройден   ": "Не пройден"));
        printf("\n");
    }

    pause_console();
    menu(ID, cars_data);
}