#include <stdio.h>

int Combin2(int, int);

int main() {
    while(2 > 1) {
        int N;
        printf("N := ");
        scanf("%d", &N);

        int K;
        printf("K := ");
        scanf("%d", &K);

        printf("Combin2(%d, %d) = %d\n\n", N, K, Combin2(N, K));
    }
    return 0;
}

int Combin2(int N, int K) {
    if (K == 0 || K == N) {
        return 1;
    } else if (
        N > 0
        && 0 <= K
        && K <= N
        && N <= 20
    ) {
        return Combin2(N - 1, K) + Combin2(N - 1, K - 1);
    } else {
        return -1;
    }
}
