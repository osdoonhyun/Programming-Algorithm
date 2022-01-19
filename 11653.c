#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int N;
	int cnt = 2;
	scanf("%d", &N);

	while (N != 1) {
		if (N % cnt == 0) {
			printf("%d\n", cnt);
			N /= cnt;
			cnt = 2;
		}
		else cnt++;
	}
	return 0;
}