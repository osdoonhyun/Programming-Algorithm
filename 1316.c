#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	int N;
	int sum = 0;
	char word[100];
	//char copyword[100];
	int len;

	len = strlen(word);
	//scanf("%s", word);
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", word);
		for (int j = 0; j < len; j++) {
			for (int k = j+1; k < len; k++) {
				if (word[j] == word[k]) {
					int dist = k - j;
					if (dist >= 2) {
						if (word[k] != word[k - 1])
							break;
					}
				}
			}
			sum++;
		}
		
	}

	printf("%d", sum);

	return 0;
}