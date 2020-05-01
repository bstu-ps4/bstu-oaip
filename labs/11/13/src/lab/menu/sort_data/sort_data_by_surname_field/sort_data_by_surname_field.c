#include "sort_data_by_surname_field.h"

void sort_data_by_surname_field(int ID, struct structure_for_car* cars_data, int i, int j, int k)
{
    if (k <= strlen(cars_data[i].surname) && k <= strlen(cars_data[j].surname))
    {
        if (cars_data[i].surname[k] == cars_data[j].surname[k])
        {
            k++;
            sort_data_by_surname_field(ID, cars_data, i, j, k);
        }
        else if (cars_data[i].surname[k] < cars_data[j].surname[k])
        {
            struct structure_for_car temp = cars_data[i];
            cars_data[i] = cars_data[j];
            cars_data[j] = temp;
        }
    }
}