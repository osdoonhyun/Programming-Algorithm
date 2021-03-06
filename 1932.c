#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	return a > b ? a : b;
}

int dp[501][501];

int main(void) {

	int n;
	int MAX = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for(int j = 1 ; j <= i;j++){
			scanf("%d",&dp[i][j]);
		}
	}
	
	for (int i = 1; i <= n; i++) {
		for(int j = 1; j <= i;j++){
			if (j == 1)
				dp[i][j] = dp[i][j] + dp[i - 1][j];
			else if (i == j)
				dp[i][j] = dp[i][j] + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + dp[i][j];
			if (MAX < dp[i][j])
				MAX = dp[i][j];
		}
	}
	printf("%d", MAX);

	return 0;
}