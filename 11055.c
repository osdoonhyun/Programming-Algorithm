#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	return a > b ? a : b;
}
int main(void) {

	int n;
	int a[1001];
	int dp[1001];
	int sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		dp[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j])
				dp[i] = max(dp[i], a[i] + dp[j]);
		}
		sum = max(sum, dp[i]);
	}

	printf("%d", sum);
	return 0;
}