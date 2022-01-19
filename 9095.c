#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {

	int T;
	int n[101]; //입력 받은 수 
	int f[12]; // 함수

	scanf("%d", &T);

	f[1] = 1;
	f[2] = 2;
	f[3] = 4;
	for (int i = 4; i <= 11; i++) {
		f[i] = f[i - 3] + f[i - 2] + f[i - 1];
	}
	
	for (int i = 0; i < T; i++) {
		scanf("%d", &n[i]);
		printf("%d\n", f[n[i]]);
	}
	
	return 0;
}