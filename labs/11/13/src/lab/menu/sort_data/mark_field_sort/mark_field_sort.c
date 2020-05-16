#include "mark_field_sort.h"

void mark_field_sort(int ID, struct structure_for_car* cars_data, int* indices_array)
{
    for (int i = 0; i < ID; i++)
    {
        for(int j = 0; j < ID; j++)
        {
            if(strcmp(cars_data[indices_array[i]].mark, cars_data[indices_array[j]].mark) < 0)
            {
                int_swap(&indices_array[i], &indices_array[j]);
            }
        }
    }
}