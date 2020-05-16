#include "int_swap.h"

void int_swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}