#include "file_out_data.h"

void file_out_data(int ID, struct structure_for_car* cars_data, char* file_name, char* file_mode)
{
    FILE* file_pointer = fopen(file_name, file_mode);

    for (int i = 0; i < ID; i++)
    {
        fprintf(file_pointer, "%d\t", i);

        fprintf(file_pointer, "%d\t", cars_data[i].number_size);
        fprintf(file_pointer, "%s\t", cars_data[i].number);

        fprintf(file_pointer, "%d\t", cars_data[i].mark_size);
        fprintf(file_pointer, "%s\t", cars_data[i].mark);

        fprintf(file_pointer, "%d\t", cars_data[i].surname_size);
        fprintf(file_pointer, "%s\t", cars_data[i].surname);

        fprintf(file_pointer, "%d\n", cars_data[i].osmotr == yes? yes: no);
    }

    fclose(file_pointer);
}