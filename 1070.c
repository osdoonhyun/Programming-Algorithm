#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {

	int month;

	//scanf("%d", &month);
	scanf("%d", &month);
	
	switch (month)
	{
	case 1:
	case 2:
	case 12:
		printf("winter");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	default:
		printf("fall");
		break;
	}
	return 0;
}