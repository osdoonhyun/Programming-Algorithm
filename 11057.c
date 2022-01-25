#include <stdio.h>
#pragma warning(disable:4996)

	int dp[1001][10] = { 0, };
int main(void) {

	int n;
	scanf("%d", &n);

	int sum = 0;

	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++)
				dp[i][j] += dp[i - 1][k]%10007;
		}
	}

	for (int i = 0; i < 10; i++) {
		sum += dp[n][i];
		sum %= 10007;
	}
	printf("%d", sum);

	return 0;
}