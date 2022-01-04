#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>

int main(void) {

	char s[100];

	int arr[26];
	int i,n;

	scanf("%s", s);
	
	for (i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (i = 0; i < strlen(s); i++) {
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;
	}

	for (i = 0; i < 26; i++) {
		printf("%d", arr[i]);
		if (i < 25)
			printf(" ");
	}
	
	
	return 0;
}