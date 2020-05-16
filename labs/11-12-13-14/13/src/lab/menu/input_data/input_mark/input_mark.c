#include "input_mark.h"

void input_mark(int ID, struct structure_for_car* cars_data)
{
    printf("\n");

    printf("Размер строки марки машины: ");

    scanf("%d", &cars_data[ID - 1].mark_size);
    
    cars_data[ID - 1].mark = (char*) calloc(cars_data[ID - 1].mark_size, sizeof(char));

    printf("Марка машины: ");

    scanf("%s", cars_data[ID - 1].mark);
}