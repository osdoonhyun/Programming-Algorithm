#include <stdio.h>
#pragma warning(disable:4996)


int main(void) {

	int n;
	scanf("%d", &n);

	int a[1001];
	int dp[1001];
	int dp2[1001];

	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j] && dp[i] < dp[j] + 1)
				dp[i] = dp[j] + 1;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		dp2[i] = 1;
		for (int j = n - 1; j > i; j--) {
			if (a[i] > a[j] && dp2[i] < dp2[j] + 1)
				dp2[i] = dp2[j] + 1;
		}
	}
	int max = dp[0]+dp2[0];

	for (int i = 1; i < n; i++) {
		if (max < dp[i] + dp2[i])
			max = dp[i] + dp2[i];
	}
	printf("%d", --max);
	return 0;
}