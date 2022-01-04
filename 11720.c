#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int n;
	int sum = 0;

	scanf("%d", &n);
	char a[100];

	scanf("%s", a);

	for (int i = 0; i < n; i++) {
		sum += a[i] - '0';
	}

	printf("%d", sum);

	return 0;
}