#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	int n;
	char PS[51];

	scanf("%d", &n);
	
	int len;
	int sum;

	for (int i = 0; i < n; i++) {
		sum = 0;
		scanf("%s", PS);
		len = strlen(PS);
		for (int j = 0; j < len; j++) {
			switch (PS[j])
			{
			case '(': 
				sum++;
				break;

			case ')':
				sum--;
				break;
			}
			if (sum < 0) {
				printf("NO\n");
				break;
			}
		}
		if (sum > 0)
			printf("NO\n");
		else if(sum == 0)
			printf("YES\n");
	}
	
	return 0;
}