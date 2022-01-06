#include <stdio.h>
#pragma warning(disable:4996)

void han(int n);

int main(void) {

	int N;
	
	scanf("%d", &N);

	han(N);

	return 0;
}

void han(int N) {

	int cnt = 0;

	if (N < 100) {
		cnt = N;
		printf("%d", cnt);
	}
	else if (N < 1000) {
		while (N > 100) {

			if (((N % 10) - (((N / 10) % 10))) == (((N / 10) % 10) - ((N / 100) % 10))) {
				cnt++;
			}
			N--;
		}
		printf("%d", cnt + 99);
	}
	else {
		printf("144\n");
	}
}