#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {

	char a[1000000];
	int cnt[26] = { 0,};
	int len, max;
	int result = 0;
	int select = 0;

	scanf("%s", a);
	len = strlen(a);

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < len; j++) {
			if (i == a[j])
				cnt[i - 'a']++;
		}
	}

	for (int i = 'A'; i <= 'Z'; i++) {
		for (int j = 0; j < len; j++) {
			if (i == a[j])
				cnt[i - 'A']++;
		}
	}

	max = cnt[0];
	for (int i = 1; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			select = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == cnt[i])
			result++;
	}

	if (result > 1)
		printf("?\n");
	else
		printf("%c", select + 'A');

	return 0;
}

