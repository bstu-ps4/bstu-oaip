#include "../inc/lab.h"

void lab()
{
    int N;
    printf("Сколько элементов: ");
    scanf("%d", &N);

    int K;
    printf("Сколько раз: ");
    scanf("%d", &K);

    printf("Combin2(%d, %d) = %d\n", N, K, Combin2(N, K));
}