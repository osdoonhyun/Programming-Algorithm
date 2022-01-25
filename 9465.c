#include <stdio.h>
#pragma warning(disable:4996)

int max(int a, int b) {
	return a > b ? a : b;
}

int dp[2][100001];
int arr[2][100001];
	
int main(void) {

	int T,n;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		for (int k = 0; k < 2; k++) {
			for (int j = 1; j <= n; j++) {
				scanf("%d", &arr[k][j]);
			}
			dp[0][0] = dp[1][0] = 0;
			dp[0][1] = arr[0][1];
			dp[1][1] = arr[1][1];
			for (int i = 2; i <= n; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + arr[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + arr[1][i];
			}
		}
		printf("%d\n", max(dp[0][n], dp[1][n]));
	}
	
	
	return 0;
}