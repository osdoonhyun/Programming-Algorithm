#include <stdio.h>

#define N 100
#define TRUE 1
#define FALSE 0

int main(void) {

	int prime[N];

	
	for (int i = 0; i < N; i++) {
		prime[i] = TRUE;    // �迭�ʱ�ȭ ��� �Ҽ����ϰ� true�� 
	}

	for (int i = 2; i * i < N; i++) {
		if (prime[i])
			for (int j = i * i; j < N; j += i)
				prime[j] = FALSE;
	}
	// 1�� �Ҽ��� �ռ����� �ƴϹǷ� ����
	for (int i = 2; i < N; i++) {
		if (prime[i])
			printf("%d ", i);
	}
}