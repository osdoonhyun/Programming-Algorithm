#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	return a > b ? a : b;
}
int main(void) {

	int n;
	scanf("%d", &n);
	int w[10001];
	int dp[10001];

	for (int i = 1; i <= n; i++) {
		scanf("%d", &w[i]);
	}
	dp[1] = w[1];
	dp[2] = w[1] + w[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 2] + w[i], max(dp[i - 1], dp[i - 3] + w[i - 1] + w[i]));
	}
	
	printf("%d", dp[n]);
	return 0;
}