#include <stdio.h>
#pragma warning(disable:4996)

long long dp[100001][3];
int main(void) {

	int n;
	scanf("%d", &n);

	dp[1][1]=1; //��ĭ�� ���ڰ� ��������
	dp[1][2]= 1;//��ĭ�� ���ʿ� ���ڰ� �־�����
	dp[1][3] =1;//��ĭ�� �����ʿ� ���ڰ� �־����� 


	
	for (int i = 2; i <= n; i++) {
		dp[i][1] = dp[i-1][1]+dp[i-1][2]+dp[i-1][3];
		dp[i][2] = dp[i - 1][1] + dp[i - 1][3];
		dp[i][3] = dp[i - 1][1] + dp[i - 1][2];
	
		dp[i][1] % 9901;
		dp[i][2] % 9901;
		dp[i][3] % 9901;
	}
	printf("%lld", (dp[n][1] + dp[n][2] + dp[n][3]) % 9901);

	

	return 0;
}