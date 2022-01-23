#include <stdio.h>
#pragma warning(disable:4996)

long long dp[201][201];


int main(void) {

	int N, K;
	
	scanf("%d %d", &N, &K);
	
	for (int i = 1; i <= K; i++) {
		dp[1][i] = i;
	}
	for (int i = 2; i <= N; i++) {
		dp[i][1] = 1;
		for (int j = 1; j <= K; j++)
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j])%1000000000;
	}
	printf("%lld", dp[N][K]);

	return 0;
}