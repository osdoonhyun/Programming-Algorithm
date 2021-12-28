#include <stdio.h>	
#pragma warning(disable:4996)

int main(void) {

	int sum = 0;
	int n;

	scanf("%d", &n);

	while (n > 0) {
		if (n % 2 == 0) {
			sum += n;
		}
		n--;
	}

	printf("%d", sum);

	return 0;
}