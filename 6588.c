#include <stdio.h>
#pragma warning(disable:4996)
#define N 1000001

int prime[N];

void checkprime() {
	
	for (int i = 2; i < N; i++) prime[i] = 1;
	for (int i = 2; i * i < N; i++) {
		for (int j = 2; prime[i] && i * j < N; j++)
			prime[i * j] = 0;
	}
}

int main(void) {

	int n;
	int find= 0;
	int i;

	checkprime();

	while (scanf("%d", &n) && n) {
		for (i = 3; i * 2 <= n; i += 2) { 
		//mid가 넘어가면 대칭이므로 검사할 필요가 없으므로 i*2
			if (prime[i] && prime[n - i]) {
				printf("%d = %d + %d\n", n, i, n - i);
				find = 1;
				break;
			}
		}
	}
	if (!find) {
		printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}
