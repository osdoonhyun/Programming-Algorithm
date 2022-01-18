#include <stdio.h>
#pragma warning(disable:4996)

#define SIZE 1001

int min(int a, int b) {
	return a > b ? b : a;
}

int main(void) {

	int N;
	int p[SIZE];  //p[i] i���� ī������ ����
	int dp[SIZE]; //dp[i] ī�� i�� ���Ž� �ݾ��� �ּڰ�
	dp[0] = p[0] = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d",&p[i]);
	}
	for (int i = 1; i <= N; i++) {
		dp[i] = 9999;
		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i], dp[i-j] + p[j]);
		}
	}

	printf("%d", dp[N]);
	return 0;
}