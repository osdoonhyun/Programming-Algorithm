#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	return a > b ? a : b;
}
int main(void) {

	int n;
	int a[1001];
	int dp[1001];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	int MAX = dp[1];
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[i] < a[j] && dp[j] >= dp[i])
				dp[i]=  dp[j] + 1;
		}
		MAX = max(MAX, dp[i]);
	}
	printf("%d", MAX);


	return 0;
}