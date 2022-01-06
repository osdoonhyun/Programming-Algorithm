#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	int T,R;
	char s[21];

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R,s);
		//fgets(s, 21, stdin);
		for (int i = 0; i < strlen(s); i++) {
			for (int j = 0; j < R; j++) {
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}

	return 0;
}

//fgets함수는 개행문자까지 입력받기 때문에 오류가 생긴다.
