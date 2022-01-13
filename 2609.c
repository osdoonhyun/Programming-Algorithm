//최대공약수와 최소공배수
#include <stdio.h>
#pragma warning(disable:4996)

int gcd(int a, int b);

int main(void) {

	int A, B;

	scanf("%d %d", &A, &B);

	printf("%d\n%d", gcd(A,B),(A*B)/gcd(A,B));
	
	return 0;
}

int gcd(int a, int b) {

	int min;
	min = a > b ? b : a;

	int num = 1;
	int gcd = 1;
	while (min >= num) {
		if (a % num == 0 && b % num == 0) {
			gcd = num;
		}
		num++;
	}
	return gcd;
}