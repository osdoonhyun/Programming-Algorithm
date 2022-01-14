//오등큰수
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define MAX_SIZE 1000001

int A[MAX_SIZE] = { 0, };
int stack[MAX_SIZE] = { 0, };
int ans[MAX_SIZE] = { 0, };
int cnt[MAX_SIZE] = { 0, };

int top = -1, s = 0;

void push(int n) {
	stack[++top] = n;
}

int pop() {
	int n;
	n = stack[top--];

	return n;
}

int empty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

int main(void) {

	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &A[i]);
		cnt[A[i]]++;
	}
	for (int i = N; i > 0; i--) {
		if (empty()) {
			ans[i] = -1;
			push(A[i]);
		}
		
		else {
			do {
				s = pop();
				if (cnt[s] > cnt[A[i]]) {
					ans[i] = s;
					push(s);
					push(A[i]);
				}

			} while (!empty() && cnt[s] <= cnt[A[i]]);
			if (ans[i] == 0) {
				ans[i] = -1;
				push(A[i]);
			}
		}

	}

	for (int i = 1; i <= N; i++) {
		printf("%d ", ans[i]);
	}

	return 0;
}