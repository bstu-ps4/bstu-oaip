#include "input_number.h"

void input_number(int ID, struct structure_for_car* cars_data)
{
    printf("Размер строки номера: ");

    scanf("%d", &cars_data[ID - 1].number_size);
    cars_data[ID - 1].number = (char*) calloc(cars_data[ID - 1].number_size, sizeof(char));

    printf("Номер машины: ");

    scanf("%s", cars_data[ID - 1].number);
}