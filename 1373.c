#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
// 2진수->8진수
int main(void) {

	char str[1000001];
	
	scanf("%s", str);

	int len = strlen(str);
	
	if (len % 3 == 2) {
		printf("%d", (str[0] - '0') * 2 + (str[1] - '0'));
	}
	else if (len % 3 == 1) {
		printf("%d", (str[0] - '0'));
	}
	
	for (int i = len % 3; i < len; i = i + 3) {
		printf("%d", (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0'));
	}



	return 0;
}