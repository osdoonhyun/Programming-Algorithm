#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int a[10][10];
	int i,j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int x;
	int y;
	x = 1;
	y = 1;

	while (x<10 || y<10) {

		if (x == 8 && y == 8) {
			a[8][8] = 9;
			break;
		}
		if (a[x][y] == 0) {
			a[x][y] = 9;
			y++;
			continue;
		}
		else if (a[x][y] == 1) {
			--y;
			a[x][y] = 9;
			x++;
			continue;
		}
		else if (a[x][y] == 2) {
			a[x][y] = 9;
			break;
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}