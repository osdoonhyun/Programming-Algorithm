#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	char S[101];
	scanf("%[^\n]%*c", S);

	for (int i = 0; S[i] != '\0'; i++) {
		if ('a' <= S[i] && S[i] <= 'z')
			printf("%c", ((S[i] - 'a' + 13) % 26) + 'a');
		else if ('A' <= S[i] && S[i] <= 'Z')
			printf("%c", ((S[i] - 'A' + 13) % 26) + 'A');
		else
			printf("%c", S[i]);		
	}

	return 0;
}