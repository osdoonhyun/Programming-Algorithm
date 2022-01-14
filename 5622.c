#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	char a[15];
	
	int i;
	int len;
	int cnt = 0;
	len = strlen(a);

	scanf("%s", a);
	//for (i = 0; i < len; i++) {

	//}
	i = 0;

	while (a[i] != NULL) {
		switch (a[i])
		{
		case 'A':
		case 'B':
		case 'C': 
			cnt = cnt + 2;
			break;
		case 'D':
		case 'E':
		case 'F':
			cnt = cnt + 3;
			break;
		case 'G':
		case 'H':
		case 'I':
			cnt = cnt + 4;
			break;
		case 'J':
		case 'K':
		case 'L':
			cnt = cnt + 5;
			break;
		case 'M':
		case 'N':
		case 'O':
			cnt = cnt + 6;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			cnt = cnt + 7;
			break;
		case 'T':
		case 'U':
		case 'V':
			cnt = cnt + 8;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			cnt = cnt + 9;
			break;
		default:
			break;
		}
		i++;
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}


