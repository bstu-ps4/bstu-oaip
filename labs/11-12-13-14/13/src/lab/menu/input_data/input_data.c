#include "input_data.h"

void input_data(int ID, struct structure_for_car* cars_data)
{
    clearConsole();

    ID++;
    cars_data = (struct structure_for_car*) realloc(cars_data, ID * sizeof(struct structure_for_car));

    input_number(ID, cars_data);
    input_mark(ID, cars_data);
    input_surname(ID, cars_data);
    getch();
    input_osmotr(ID, cars_data);

    FILE* file_pointer = fopen("indices.txt", "at");
    fprintf(file_pointer, "%d\n", ID - 1);
    fclose(file_pointer);

    menu(ID, cars_data);
}