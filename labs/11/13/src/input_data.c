#include "../inc/input_data.h"

void input_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    ID++;
    cars_data = (struct structure_for_car*) realloc(cars_data, ID * sizeof(struct structure_for_car));


    printf("Номер машины: ");
    scanf("%s", cars_data[ID - 1].number);


    printf("Марка машины: ");
    scanf("%s", cars_data[ID - 1].mark);


    printf("Фамилия владельца: ");
    scanf("%s", cars_data[ID - 1].surname);


    int osmotr = 2;
    printf("Осмотр: ");
    while (!(osmotr == '0' || osmotr == '1'))
    {
        osmotr = getch();
    }
    cars_data[ID - 1].osmotr = osmotr;

    menu(ID, cars_data);
}