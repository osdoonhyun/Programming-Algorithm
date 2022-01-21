#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	return a > b ? a : b;
}
int main(void) {
	
	int n;
	scanf("%d", &n);
	int a[100001];
	int dp[100001];

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		dp[i] = -200000000;
	}
	int ans = dp[0];

	for (int i = 1; i < n; i++) {
		dp[i + 1] = max(dp[i] + a[i], a[i]);
		if (ans < dp[i + 1])
			ans = dp[i + 1];
	}

	printf("%d", ans);
	return 0;
}