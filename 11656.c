#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {

	char str1[1001]={ 0, };
	char str2[1001][1001] = { 0, };
	char temp[1001] = { 0, };

	
	scanf("%s", str1);

	int len = strlen(str1);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			str2[i][j-i] = str1[j];
		}
	}

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			// str2[j] 가  str2[j+1] 보다 알파벳 순으로 뒤쪽이다.
			if (strcmp(str2[j], str2[j + 1]) > 0) {
				strcpy(temp, str2[j]);
				strcpy(str2[j], str2[j + 1]);
				strcpy(str2[j + 1], temp);
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%s\n", str2[i]);
	}

	return 0;
}