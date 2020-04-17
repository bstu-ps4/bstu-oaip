#include "../inc/integer_swap.h"

void integer_swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}