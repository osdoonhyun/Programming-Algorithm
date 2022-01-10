#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)


void push(int n);
void pop();
void front();
void back();
void size();
void empty();

int k[100001];

int start = 0, end = 0, count = 0;

int main(void) {

	int N,x;
	

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		char a[6];
		scanf("%s", a);
		if (!strcmp(a, "push")){
			scanf("%d", &x);
			push(x);
		}
		else if (!strcmp(a, "pop")) {
			pop();
		}
		else if (!strcmp(a, "front")) {
			front();
		}
		else if (!strcmp(a, "back")) {
			back();
		}
		else if (!strcmp(a, "empty")) {
			empty();
		}
		else if (!strcmp(a, "size")) {
			size();
		}
		
	}
	return 0;
}

void push(int x) {
	k[end++] = x;
	++count;
}
void pop() {
	if (count != 0) {
		printf("%d\n", k[start++]);
		--count;
	}
	else
		printf("-1\n");
}
void size() {
	printf("%d\n", count);
}
void empty() {
	if (count == 0)
		printf("1\n");
	else
		printf("0\n");
}
void front() {
	if (count != 0)
		printf("%d\n", k[start]);
	else
		printf("-1\n");
}
void back() {
	if (count != 0)
		printf("%d\n", k[end - 1]);
	else
		printf("-1\n");
}
