#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>

int number[100001];
int cnt = 0;

void push(int n) {
	number[++cnt] = n;
}

void pop() {
	if (cnt == 0)
		printf("%d\n",-1);
	else {
		printf("%d\n", number[cnt]);
		number[cnt--];
	}
}

void empty() {
	if (cnt == 0)
		printf("%d\n",1);
	else
		printf("%d\n",0);
}

void top() {
	if (cnt == 0)
		printf("%d\n",-1);
	else 
		printf("%d\n", number[cnt]);
}

void size() {
	printf("%d\n", cnt);
}

int main(void) {

	int num,n;
	char stack[100];

	scanf("%d", &num);
		
	for (int i = 0; i < num; i++) {
		scanf("%s", &stack);
		if (strcmp(stack, "push") == 0) {
			scanf("%d", &n);
			push(n);
		}
		else if (strcmp(stack, "pop") == 0)
			pop();
		else if (strcmp(stack, "top") == 0)
			top();
		else if (strcmp(stack, "size") == 0)
			size();
		else if (strcmp(stack, "empty") == 0)
			empty();
	}
	return 0;
}
