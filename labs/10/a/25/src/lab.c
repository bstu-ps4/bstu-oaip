#include "../inc/lab.h"

void lab()
{
    int n;
    printf("Размер квадратной матрицы: ");
    scanf("%d", &n);

    int** arr = (int**) calloc(n, sizeof(int*));
    for  (int i = 0; i < n; i++)
    {
        arr[i] = (int*) calloc(n, sizeof(int));
    }

    generate_matrix(arr, n, n, 1, 9);
    print_matrix(arr, n, n);

    transp_matrix(arr, n);

    printf("\nТранспонированная матрица:\n");
    print_matrix(arr, n, n);

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);
}