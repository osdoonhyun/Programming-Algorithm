#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

char str[100001];

int stick(void);

int main(void) {

	int c;

	scanf("%s", str);

	c = stick();

	printf("%d", c);
	
	return 0;
}

int stick() {

	int i, d = 0, c = 0, dot_c = 0;
	// c=막대의 갯수, dot_c = 레이저 발사시 잘리는 막대의 갯수, d = 레이저의 위치를 파악

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(') {
			dot_c++;
			d = 1;
		}
		else if (str[i] == ')' && d == 1) {
			dot_c--;
			c += dot_c;
			d++;
		}
		else if (str[i] == ')' && d != 1) {
			c++;
			dot_c--;
			d++;
		}
	}
	return c;
}
