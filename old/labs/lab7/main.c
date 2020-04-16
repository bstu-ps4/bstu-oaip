#include <stdio.h>
#include <stdlib.h>

void lab7_v5_task1();
void lab7_v5_task2();
void lab7_v7_task2();

int main() {
    //lab7_v5_task1();
    //lab7_v5_task2();
    //lab7_v7_task2();
    return 0;
}

void lab7_v5_task1() {
    int N; printf("N := "); scanf("%d", &N);

    if (N % 3 == 0) {
        int a[N], b[N / 3];
        printf("\n%d :. 3 => array b[] can build\n", N);

        printf("\na[%d]: \n", N);
        for(int i = 0; i < N; i++) {
            printf("a[%d] := ", i);
            scanf("%d", &a[i]);
        }

        printf("\nb[%d]: \n", N/3);
        for (int i = 0; i < N; i += 3) {
            b[i] = a[i] + a[i + 1] + a[i + 2];
            printf("%4d ", b[i]);
        }

    } else
        printf("\n%d no :. 3 => array b[] not build\n", N);
}

void lab7_v5_task2() {
    int m, n, a, b, min, max;
    printf("m := "); scanf("%d", &m);
    printf("n := "); scanf("%d", &n);
    printf("a := "); scanf("%d", &a);
    printf("b := "); scanf("%d", &b);
    int arr[m + 1][n + 1];

    for (int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            arr[i][j] = rand() % (b - a + 1) + a;

    for (int i = 1; i <= m; i++) {
        min = max = arr[i][1];
        for (int j = 1; j <= n; j++) {
            if (min > arr[i][j])
                min = arr[i][j];
            if (max < arr[i][j])
                max = arr[i][j];
            printf("%6d| ", arr[i][j]);
        }
        printf("%4d %4d\n", min, max);
    }
    printf("- - -\n");
    for (int j = 1; j <= n; j++) {
        min = max = arr[1][j];
        for (int i = 1; i <= m; i++){
            if (min > arr[i][j])
                min = arr[i][j];
            if (max < arr[i][j])
                max = arr[i][j];
        }
        printf("%3d%3d| ", min, max);
    }
}

void lab7_v7_task2() {
    int N, M, A, B, k, sum, mult;
    printf("N = "); scanf("%d", &N);
    printf("M = "); scanf("%d", &M);
    printf("A = "); scanf("%d", &A);
    printf("B = "); scanf("%d", &B);

    int a[N][N], ba[M], bb[M];
    printf("\nGenerated arr a[%d, %d]:\n", N, M);
    for (int i = 0; i < N; i++) {
        sum = 0;
        mult = 1;
        for (int j = 0; j < M; j++) {
            a[i][j] = rand() % (B - A + 1) + A;
            printf("%4d", a[i][j]);
            sum += a[i][j];
            mult *= a[i][j];
        }
        printf(" sum = %8d, mult = %8d\n", sum, mult);
        ba[i] = sum;
        bb[i] = mult;
    }

    printf("\n\narr ba[%d] with sum on str:\n", N);
    for (int i = 0; i < N; i++)
        printf("%8d", ba[i]);

    printf("\n\narr bb[%d] with mult on str:\n", N);
    for (int i = 0; i < N; i++)
        printf("%8d", bb[i]);
}
