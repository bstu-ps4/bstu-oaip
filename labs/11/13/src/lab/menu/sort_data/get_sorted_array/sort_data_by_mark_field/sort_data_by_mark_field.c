#include "sort_data_by_mark_field.h"

void sort_data_by_mark_field(int ID, struct structure_for_car* cars_data, int i, int j, int k)
{
    if (k <= strlen(cars_data[i].mark) && k <= strlen(cars_data[j].mark))
    {
        if (cars_data[i].mark[k] == cars_data[j].mark[k])
        {
            k++;
            sort_data_by_mark_field(ID, cars_data, i, j, k);
        }
        else if (cars_data[i].mark[k] < cars_data[j].mark[k])
        {
            struct structure_for_car temp = cars_data[i];
            cars_data[i] = cars_data[j];
            cars_data[j] = temp;
        }
    }
}