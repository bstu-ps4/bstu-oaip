#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* InvertStr(char*, int, int);

int main() {
	char* s = (char*) calloc(509, sizeof(char));
	printf("Write string:\n");
	scanf("%s", s);

	int k;
	printf("k := ");
	scanf("%d", &k);

	int n;
	printf("n := ");
	scanf("%d", &n);

	printf("Edited string:\n%s", InvertStr(s, k, n));

	free(s);
}

char* InvertStr(char* S, int K, int N) {
	if (K > strlen(S))
		return "";

	if (strlen(S) < K + N) {
		K = 0;
		N = strlen(S);
	}

	for (int i = 0; i < N / 2; i++) {
		char temp = S[K + i];
		S[K + i] = S[K +  (N - 1) - i];
		S[K + (N - 1) - i] = temp;
	}

	return S;
}
