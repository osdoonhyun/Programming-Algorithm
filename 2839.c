#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int Box = 0;
	int input;

	scanf("%d", &input);

	while (1) {
		if (input % 5 == 0) {
			Box += input / 5;
			printf("%d", Box);
			break;
		}
		input -= 3;
		Box++;

		if (input < 0){
			printf("-1");
			break;
		}
	}

	return 0;
}