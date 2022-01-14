#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int N;
	int result =1;
	scanf("%d", &N);

	if (N == 0) {
		result = 1;
	}
	else {
		for (int i = N; i > 0; i--) {
			result *= i;
		}
	}
	printf("%d", result);

	return 0;
}