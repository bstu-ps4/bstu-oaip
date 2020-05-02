#include "out_data.h"

void out_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    printf("ID\t");
    printf("Номер\t");
    printf("Марка\t");
    printf("Фамилия\t");
    printf("Осмотр\t");
    printf("\n");

    for (int i = 0; i < ID; i++)
    {
        printf("%d\t", i);
        printf("%s\t", cars_data[i].number);
        printf("%s\t", cars_data[i].mark);
        printf("%s\t", cars_data[i].surname);
        printf("%s\t", (cars_data[i].osmotr == yes? "Пройден": "Не пройден"));
        printf("\n");
    }
    pause_console();
    menu(ID, cars_data);
}