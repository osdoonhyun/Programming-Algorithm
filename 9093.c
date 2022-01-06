#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	int top=0;
	char s[1001],stack[1001];
	int T;

	scanf("%d ", &T);

	for (int i = 0; i < T; i++) {
		fgets(s, 1001, stdin);
		//printf("strlen = %d\n", strlen(s));
		for (int i = 0; i < strlen(s) - 1; i++) {
			if (s[i] != ' ')
				stack[top++] = s[i];
			if (s[i] == ' ' || i == strlen(s) - 2) {
				for (int i = top - 1; i >= 0; i--)
					printf("%c", stack[i]);
				printf(" ");
				top = 0;
			}
		}
		printf("\n");
	}

	return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = 0;
char s[1001], stack[1001];

int main(void)
{
	int t;
	scanf("%d ", &t);
	for (int i = 0; i < t; i++) //반복문 실행
	{
		fgets(s, 1001, stdin); //문장입력받기
		for (int i = 0; i < strlen(s) - 1; i++)
		{
			if (s[i] != ' ')
			{
				stack[top++] = s[i];
			}

			if (s[i] == ' ' || i == strlen(s) - 2)
			{
				for (int i = top - 1; i >= 0; i--)
					printf("%c", stack[i]);
				printf(" ");
				top = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
*/