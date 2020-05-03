#include "out_data.h"

void out_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("|");
    printf(" ID   |");
    printf(" Номер      |");
    printf(" Марка      |");
    printf(" Фамилия              |");
    printf(" Осмотр     |");
    printf("\n");

    printf("|");
    printf(" ---- |");
    printf(" ---------- |");
    printf(" ---------- |");
    printf(" -------------------- |");
    printf(" ---------- |");
    printf("\n");

    for (int i = 0; i < ID; i++)
    {
        printf("|");
        printf(" %-4d |", i);
        printf(" %-10s |", cars_data[i].number);
        printf(" %-10s |", cars_data[i].mark);
        printf(" %-20s |", cars_data[i].surname);
        printf(" %s |", (cars_data[i].osmotr == yes? "Пройден   ": "Не пройден"));
        printf("\n");
    }
    pause_console();
    menu(ID, cars_data);
}