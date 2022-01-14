#include <stdio.h>
#pragma warning(disable:4996)


int func(int a) {
	if (a < 0)
		return (-1) * a;
	else
		return a;
}

int gcd(int b, int c) {
	if (c == 0)
		return b;
	else
		gcd(c, b % c);
}

int main(void) {

	int N, S, k;
	long long int A[100010] = { 0, };
	int result;

	scanf("%d %d", &N, &S);

	for (int i = 0; i < N; i++) {
		scanf("%d", &k);
		A[i] = func(k - S);
	}

	for (int i = 0; i <= N - 1; i++) {
		A[i + 1] = gcd(A[i], A[i + 1]);
		result = A[i + 1];
	}

	printf("%d", result);

	return 0;
}

