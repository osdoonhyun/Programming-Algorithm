#include <stdio.h>

#define N 100
#define TRUE 1
#define FALSE 0

int main(void) {

	int prime[N];

	
	for (int i = 0; i < N; i++) {
		prime[i] = TRUE;    // 배열초기화 모두 소수라하고 true값 
	}

	for (int i = 2; i * i < N; i++) {
		if (prime[i])
			for (int j = i * i; j < N; j += i)
				prime[j] = FALSE;
	}
	// 1은 소수도 합성수도 아니므로 제외
	for (int i = 2; i < N; i++) {
		if (prime[i])
			printf("%d ", i);
	}
}