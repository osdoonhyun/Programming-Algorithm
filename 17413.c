//단어뒤집기
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

/*
int main(void) {

	char S[1001],stack[1001];
	int top = -1;

	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		fgets(S, 1001, stdin);
		for (int j = 0; j < strlen(S) - 1; j++) {
			if (S[i] != ' ')
				stack[++top] = S[i];
			if (S[i] == ' ' || i == strlen(S)) {
				for (int i = top - 1; i >= 0; i--)
					printf("%c", stack[i]);
				printf(" ");
				top = 0;
			}

		}
	}


	return 0;
}
*/

int main(void){

	int top= -1;
	char S[100001],stack[100001];
	for (int i = 0; i < strlen(S) - 1; i++) {
		if (S[i] != ' ')
			stack[++top] = S[i];
		if (S[i] == ' ' || i == strlen(S) - 2) {
			for (int i = top - 1; i >= 0; i--)
				printf("%c", stack[i]);
			printf(" ");
			top = 0;
		}
		if (S[i] == '<') {
			while (S[i] == '>') {
				printf("%c", S[i]);
				i++;
			}
		}
	}

	return 0;
}