#include "../inc/transp_matrix.h"

void transp_matrix(int** arr, int rows)
{
    int k = 0;
    for (int i = 0; i < rows - 1; i++)
    {
        for (int j = k; j < rows; j++)
        {
            integer_swap(&arr[i][j], &arr[j][i]);
        }
        k++;
    }
}