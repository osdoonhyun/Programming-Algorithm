#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int a[20][20];
	int i,j,n,x,y;

	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		for (j = 1; j < 20; j++) {
			if (a[x][j] == 0)
				a[x][j] = 1;
			else
				a[x][j] = 0;
		}


		for (j = 1; j < 20; j++) {
			if (a[j][y] == 0)
				a[j][y] = 1;
			else
				a[j][y] = 0;
		}	
	}
	
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}