#include <stdio.h>
#pragma warning(disable:4996)

	long long a[91];
int main(void) {

	int N;
	scanf("%d", &N);

	a[1] = a[2] = 1;
	for (int i = 3; i < 91; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%lld", a[N]);

	return 0;
}