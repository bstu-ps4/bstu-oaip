#include "get_sorted_array.h"

void get_sorted_array(
    int ID,
    struct structure_for_car* cars_data,
    void (*sub_foo)(int ID, struct structure_for_car* cars_data, int i, int j, int k)
)
{
    for (int i = 0; i < ID; i++)
    {
        for (int j = 0; j < ID; j++)
        {
            int k = 0;
            sub_foo(ID, cars_data, i, j, k);
        }
    }
}