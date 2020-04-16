#include <stdio.h> // 4 printf(), scanf()
#include <stdlib.h> // 4 free(), malloc()

void lab8_v5_task1();
void lab8_v5_task2();

int main() {
    //lab8_v5_task1();
    //lab8_v5_task2();
    return 0;
}

void lab8_v5_task1() {
    int n; printf("n := "); scanf("%d", &n);
    // if n :. 3 create some task to create array b
    if (n % 3 == 0) {
        //input array a
        int *a = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            printf("a[%2d] (addres = %p) := ", i, a + i); scanf("%d", &a[i]);
        }
        //generated array b
        int *b = (int*)malloc(n / 3 * sizeof(int));
        printf("\ngenerated array b\n");
        for (int i = 0, k = 0; i < n; i+=3, k++) {
            *(b + k) = a[i] + a[i + 1] + a[i + 2];
            printf("b[%2d] (addres = %p) = %d\n", k, b + k, *(b + k));
        }
        //cleaned array a
        free(a);
        printf("\ncleaned array a\n");
        for (int i = 0; i < n; i++)
            printf("a[%2d] (addres = %p) = %d\n", i, a + i, *(a + i));
        //input element what u want to delete
        printf("\nwhat element want u delete on array b\n");
        int e; printf("e := "); scanf("%d", &e);
        //write array b with deleted element e
        printf("\narray with deleted element e = %d\n", e);
        for (int i = 0; i < n / 3; i++)
            if (*(b + i) != e)
                printf("b[%2d] (addres = %p) = %d\n", i, b + i, *(b + i));
        //cleaned array b
        free(b);
        printf("\ncleaned array b\n");
        for (int i = 0; i < n / 3; i++)
            printf("b[%2d] (addres = %p) = %d\n", i, b + i, *(b + i));
    } else
        printf("b[] can't build bcs n not :. 3");
}

void lab8_v5_task2() {
    int n, m;
    printf("n := "); scanf("%d", &n);
    printf("m := "); scanf("%d", &m);
    //generate array
    int *arr = (int*) malloc(n * m * sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(arr + i * m + j) = rand() % 20;
            printf("|%10d|", *(arr + i * m + j));
        }
        printf("\n");
    }
    //find min, max on row
    printf("\narray with max & min\n");
    int min, max;
    for (int i = 0; i < n; i++) {
        min = *(arr + i * m + 0);
        max = *(arr + i * m + 0);
        for (int j = 0; j < m; j++) {
            if ( *(arr + i * m + j) < min )
                min = *(arr + i * m + j);
            if ( *(arr + i * m + j) > max )
                max = *(arr + i * m + j);
            printf("|%10d|", *(arr + i * m + j));
        }
        printf("%4d, %4d|\n", max, min);
    }
    //find min, max on col
    for (int j = 0; j < m; j++) {
        min = *(arr + 0 + j);
        max = *(arr + 0 + j);
        for (int i = 0; i < n; i++) {
            if ( *(arr + i * m + j) < min )
                min = *(arr + i * m + j);
            if ( *(arr + i * m + j) > max )
                max = *(arr + i * m + j);
        }
        printf("|%4d, %4d|", max, min);
    }
    //input e
    int e = n + 1;
    while (e > n) {
        printf("\n\nOn what number row would u like to add element\n");
        printf("e := "); scanf("%d", &e);
    }
    //input numbers what u would to add
    int *arrRow = (int*) malloc(m * sizeof(int));
    for (int j = 0; j < m; j++) {
        printf("arrRow[%d] := ", j);
        scanf("%d", (arrRow + j));
    }
    //array with added row
    printf("\narray with added row:\n");
    for (int i = 0; i < n; i++) {
        if (i == e) {
            for (int j = 0; j < m; j++)
                printf("|%10d|", *(arrRow + j));
            printf("\n");
            for (int j = 0; j < m; j++)
                printf("|%10d|", *(arr + i * m + j));
        }
        else
            for (int j = 0; j < m; j++)
                printf("|%10d|", *(arr + i * m + j));
        printf("\n");
    }
    //clean arrays
    free(arrRow);
    free(arr);
}
