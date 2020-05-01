#include "sort_data_by_osmotr_field.h"

void sort_data_by_osmotr_field(int ID, struct structure_for_car* cars_data)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            if (cars_data[j].osmotr < cars_data[i].osmotr)
            {
                struct structure_for_car temp = cars_data[i];
                cars_data[i] = cars_data[j];
                cars_data[j] = temp;
            }
        }
    }
}