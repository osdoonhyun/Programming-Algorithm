#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 1000001
// if와 else if의 차이
int min(int a, int b) {
	return a > b ? b : a;
}

int main(void) {

	int n;
	int X[MAX];

	X[1] = 0;
	X[2] = 1;
	X[3] = 1;
	scanf("%d", &n);

	for (int i = 4; i <= n; i++) {
		X[i] = X[i - 1] + 1;
		if (i % 3 == 0)
			X[i] = min(X[i],X[i / 3] + 1);
		if (i % 2 == 0)
			X[i] = min(X[i],X[i / 2] + 1);

	}
	printf("%d", X[n]);

	return 0;
}