#include "../inc/generate_matrix.h"

void generate_matrix(int** arr, int rows, int cols, int x_left, int x_rigft)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % (x_rigft - x_left + 1) + x_left;
        }
    }
}