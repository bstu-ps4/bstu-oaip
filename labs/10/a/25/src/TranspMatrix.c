#include "../inc/TranspMatrix.h"

void Transp(int** A, int M)
{
    int k = 0;
    for (int i = 0; i < M - 1; i++)
    {
        for (int j = k; j < M; j++) {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
		}
		k++;
	}
}