#include <stdio.h>
#pragma warning(disable:4996)

int d(int n) {

	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(void) {

	int arr[10001] = { 0 };
	int result = 0;

	for (int i = 1; i < 10001; i++) {
		result = d(i);
		if (result < 10001)
			arr[result] = 1;
	}
	for (int j = 1; j < 10001; j++) {
		if (arr[j] != 1)
			printf("%d\n", j);
	}
	return 0;
}
