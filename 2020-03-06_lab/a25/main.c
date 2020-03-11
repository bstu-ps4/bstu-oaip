#include <stdio.h>
#include <stdlib.h>

void lab();
void Transp(int**, int);

int main() {
	lab();
}

void lab() {
	int n;
	printf("n := ");
	scanf("%d", &n);

	int** a = (int**) calloc(n, sizeof(int*));
	for  (int i = 0; i < n; i++) {
		a[i] = (int*) calloc(n, sizeof(int));
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 9 + 1;
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}

	Transp(a, n);

	printf("\n\nTransported matrix:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++) {
        free(a[i]);
	}
    free(a);
}

void Transp(int** A, int M) {
	int k = 0;
	for (int i = 0; i < M - 1; i++) {
		for (int j = k; j < M; j++) {
			int temp = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = temp;
		}
		k++;
	}
}
