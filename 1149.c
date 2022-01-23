#include <stdio.h>
#pragma warning(disable:4996)

int min(int a, int b) {
	return a > b ? b : a;
}

int dp[1001][3];

int main(void) {

	int N;
	int R[1001], G[1001], B[1001];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &R[i], &G[i], &B[i]);
	}

	dp[0][1] = R[0];
	dp[0][2] = G[0];
	dp[0][3] = B[0];

	for (int i = 0; i < N; i++) {
		dp[i][0] = R[i]+min(dp[i-1][1],dp[i-1][2]);
		dp[i][1] = G[i]+min(dp[i-1][0],dp[i-1][2]);
		dp[i][2] = B[i]+min(dp[i-1][0],dp[i-1][1]);
	}
	
	printf("%d", min(min(dp[N - 1][0], dp[N - 1][1]), dp[N - 1][2]));
	
	return 0;
}