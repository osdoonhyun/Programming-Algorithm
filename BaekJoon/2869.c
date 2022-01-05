#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int A, B, V;
	//int sum= 0;
	int days;

	scanf("%d %d %d", &A, &B, &V);

	days = (V - B - 1) / (A - B) + 1;

	/*
	while (1) {
		
		days++;
		sum += A;
		if (sum >= V)
			break;
		sum -= B;
		
	}
	*/

	printf("%d", days);
	
	return 0;
}