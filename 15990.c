#include <stdio.h>
#pragma warning(disable:4996)
#define SIZE 1000001
#define MOD 1000000009

long long n[SIZE][4];

int main(void) {

	int T,k;
	
	scanf("%d", &T);

	n[1][1] = 1;
	n[1][2] = 0;
	n[1][3] = 0;
	n[2][1] = 0;
	n[2][2] = 1;
	n[2][3] = 0;
	n[3][1] = 1;
	n[3][2] = 1;
	n[3][3] = 1;

	for (int i = 4; i < SIZE; i++) {
		n[i][1] = (n[i - 1][2] + n[i - 1][3]) % MOD;
		n[i][2] = (n[i - 2][1] + n[i - 2][3]) % MOD;
		n[i][3] = (n[i - 3][2] + n[i - 3][1]) % MOD;
	}
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		printf("%lld\n", (n[k][1] + n[k][2] + n[k][3]) % MOD);
	}

	return 0;
}