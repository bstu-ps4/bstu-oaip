#include "../inc/get_invert_string.h"

char* get_invert_string(char* S, int K, int N)
{
    if (K > strlen(S))
    {
        return "";
    }

    if (strlen(S) < K + N)
    {
        K = 0;
        N = strlen(S);
    }

    for (int i = 0; i < N / 2; i++)
    {
        char temp = S[K + i];
        S[K + i] = S[K +  (N - 1) - i];
        S[K + (N - 1) - i] = temp;
    }

    return S;
}