#include "input_surname.h"

void input_surname(int ID, struct structure_for_car* cars_data)
{
    printf("\n");

    printf("Размер строки фамилии владельца: ");

    scanf("%d", &cars_data[ID - 1].surname_size);
    cars_data[ID - 1].surname = (char*) calloc(cars_data[ID - 1].surname_size, sizeof(char));

    printf("Фамилия владельца: ");

    scanf("%s", cars_data[ID - 1].surname);
}