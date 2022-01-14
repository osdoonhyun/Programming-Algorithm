#include <stdio.h>
#pragma warning(disable:4996)

int decimal(int n);

int main(void) {

	int N;
	scanf("%d", &N);

	int a[101];
	int count = 0;
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		if (decimal(a[i])) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}

int decimal(int n) {
	
	int num = 1;
	int cnt = 0;

	while (n >= num) {
		if (n % num == 0) {
			cnt++;
		}
		num++;
	}
	if(cnt == 2){
		return 1;
	}
	return 0;
}