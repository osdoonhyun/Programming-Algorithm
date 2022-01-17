#include <stdio.h>
#pragma warning(disable:4996)

#define MAX 1001

int big(int a, int b) {
	return a > b ? a : b;
}

int main(void) {

	int N;
	int P[MAX]; //P[i]�� ī�尡 i�� �� ī���� ����
	int dp[MAX]; //dP[i]�� ī�� i���� ������ �� �ִ�

	dp[0] = P[0]=0;
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &P[i]);
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = big(dp[i], dp[i - j] + P[j]);
		}
	}
	printf("%d", dp[N]);

	return 0;
}