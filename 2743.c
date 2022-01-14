#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	char word[101];

	scanf("%s", word);

	printf("%d", strlen(word));
	
	return 0;
}