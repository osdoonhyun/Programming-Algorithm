#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int n;
	scanf("%d", &n);

	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0)cnt++;
		if (i % 25 == 0)cnt++;
		if (i % 125 == 0)cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}