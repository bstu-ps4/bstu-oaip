#include "input_data.h"

void input_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    ID++;
    cars_data = (struct structure_for_car*) realloc(cars_data, ID * sizeof(struct structure_for_car));

    printf("Размер строки номера: ");
    scanf("%d", &cars_data[ID - 1].number_size);
    cars_data[ID - 1].number = (char*) calloc(cars_data[ID - 1].number_size, sizeof(char));
    printf("Номер машины: ");
    scanf("%s", cars_data[ID - 1].number);

    printf("\n");

    printf("Размер строки марки машины: ");
    scanf("%d", &cars_data[ID - 1].mark_size);
    cars_data[ID - 1].mark = (char*) calloc(cars_data[ID - 1].mark_size, sizeof(char));
    printf("Марка машины: ");
    scanf("%s", cars_data[ID - 1].mark);

    printf("\n");

    printf("Размер строки фамилии владельца: ");
    scanf("%d", &cars_data[ID - 1].surname_size);
    cars_data[ID - 1].surname = (char*) calloc(cars_data[ID - 1].surname_size, sizeof(char));
    printf("Фамилия владельца: ");
    scanf("%s", cars_data[ID - 1].surname);

    printf("\n");

    int osmotr = 2;
    printf("Осмотр: ");
    while (!(osmotr == '0' || osmotr == '1'))
    {
        osmotr = getch();
    }
    cars_data[ID - 1].osmotr = osmotr;

    menu(ID, cars_data);
}