#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	char S[100];
	int a[26] = { 0, };
	int N;
	
	scanf("%s", S);

	for (int i = 0; i < strlen(S); i++) {
		a[S[i]- 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}