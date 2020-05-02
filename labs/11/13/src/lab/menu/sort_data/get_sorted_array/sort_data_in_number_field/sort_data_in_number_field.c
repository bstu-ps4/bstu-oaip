#include "sort_data_in_number_field.h"

void sort_data_by_number_field(int ID, struct structure_for_car* cars_data, int i, int j, int k)
{
    if (k <= strlen(cars_data[i].number) && k <= strlen(cars_data[j].number))
    {
        if (cars_data[i].number[k] == cars_data[j].number[k])
        {
            k++;
            sort_data_by_number_field(ID, cars_data, i, j, k);
        }
        else if (cars_data[i].number[k] < cars_data[j].number[k])
        {
            struct structure_for_car temp = cars_data[i];
            cars_data[i] = cars_data[j];
            cars_data[j] = temp;
        }
    }
}