#include "surname_field_sort.h"

void surname_field_sort(int ID, struct structure_for_car* cars_data, int* indices_array)
{
    for (int i = 0; i < ID; i++)
    {
        for(int j = 0; j < ID; j++)
        {
            if(strcmp(cars_data[indices_array[i]].surname, cars_data[indices_array[j]].surname) < 0)
            {
                int temp = indices_array[i];
                indices_array[i] = indices_array[j];
                indices_array[j] = temp;
            }
        }
    }
}