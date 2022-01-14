#include <stdio.h>
#pragma warning(disable:4996)

/*
void decimal(int a);

int main(void) {

	int M, N;

	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++) {
		decimal(i);
	}

	return 0;
}

void decimal(int a) {

	int n = 1;
	int cnt = 0;

	while (a >= n && cnt <= 2) {
		if (a % n== 0) {
			cnt++;
		}
		n++;
	}
	if (cnt == 2) {
		printf("%d\n", a);
	}
}
*/

/*
int main(void) {

	int m, n;
	int arr[1000001] = { 0, };
	arr[1] = 1;
	
	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++) {
		for (int j = 2; i*j <= n; j++) {
			arr[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] == 0)
			printf("%d\n",i);
	}
	return 0;
}
*/



int main(void) {
	int m, n, arr[1000001] = { 0, };
	arr[1] = 1;

	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++) {
		//i*j인 이유 : 이미 걸려졌으므로 불필요한 반복을 없애기 위해 
		for (int j = 2; i * j <= n; j++) {
			arr[i * j] = 1;
		}
	}

	for (int i = m; i <= n; i++) {
		if (arr[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}