#include "lab.h"

void lab()
{
    int ID = 0;
    struct structure_for_car* cars_data;
    cars_data = (struct structure_for_car*) calloc(ID, sizeof(struct structure_for_car));

    FILE *file_indices_pointer = fopen("indices.txt", "w");
    for (int i = 0; i < ID; i++)
    {
        fprintf(file_indices_pointer, "%d\n", i);
    }
    fclose(file_indices_pointer);

    menu(ID, cars_data);
}