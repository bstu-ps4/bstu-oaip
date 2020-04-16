#include "../inc/lab.h"

void lab()
{
    int n;
    printf("Размер квадратной матрицы: ");
    scanf("%d", &n);

    int** a = (int**) calloc(n, sizeof(int*));
    for  (int i = 0; i < n; i++)
    {
        a[i] = (int*) calloc(n, sizeof(int));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 9 + 1;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    Transp(a, n);

    printf("\nТранспонированная матрица:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        free(a[i]);
    }
    free(a);
}