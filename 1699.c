#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void) {

	int N;
	int dp[100001];
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (dp[i - j * j] + 1 < dp[i])
				dp[i] = dp[i - j * j] + 1;
		}
	}
	printf("%d", dp[N]);

	return 0;
}