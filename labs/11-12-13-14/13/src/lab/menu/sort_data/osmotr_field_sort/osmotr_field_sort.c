#include "osmotr_field_sort.h"

void osmotr_field_sort(int ID, struct structure_for_car* cars_data, int* indices_array)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            if (cars_data[indices_array[j]].osmotr < cars_data[indices_array[i]].osmotr)
            {
                int_swap(&indices_array[i], &indices_array[j]);
            }
        }
    }
}