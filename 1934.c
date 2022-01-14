//최소공배수
#include <stdio.h>
#pragma warning(disable:4996)

int lcm(int a, int b);

int main(void) {

	int T;
	int A, B;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A * B / lcm(A, B));
	}
	return 0;
}

int lcm(int a, int b) {
	int min;
	min = a > b ? b : a;
	int lcm = 1;
	int num = 1;
	while (min >= num) {
		if (a % num == 0 && b % num == 0) {
			lcm = num;
		}
		num++;
	}
	return lcm;
}