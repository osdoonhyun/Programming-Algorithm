#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 1001

int main(void) {
	int N;
	int A[MAX];
	int dp[MAX];

	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 1; i <= N; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (A[i] > A[j] && dp[i] <= dp[j])
				dp[i] = dp[j] + 1;
		}
	}
	int max = 0;
	for (int i = 1; i <= N; i++) {
		if (max < dp[i])
			max = dp[i];
		
	}
	printf("%d ", max);

	return 0;
}