#include "../../inc/sort_data/sort_data_in_number_field.h"

void sort_data_by_number_field(int ID, struct structure_for_car* cars_data)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            int k = 0;
            if (cars_data[j].number[k] > cars_data[i].number[k])
            {
                struct structure_for_car temp = cars_data[i];
                cars_data[i] = cars_data[j];
                cars_data[j] = temp;
            }
        }
    }
}