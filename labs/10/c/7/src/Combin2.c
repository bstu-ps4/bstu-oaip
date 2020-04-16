#include "../inc/Combin2.h"

int Combin2(int N, int K)
{
    if (K == 0 || K == N)
    {
        return 1;
    }
    else if (N > 0 && 0 <= K && K <= N && N <= 20)
    {
        return Combin2(N - 1, K) + Combin2(N - 1, K - 1);
    }
    else
    {
        return -1;
    }
}
