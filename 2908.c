#include <stdio.h>
#pragma warning(disable:4996)

void PrintStack(int stack[]);

int main(void) {

	int top = 0;
	int stackA[10];
	int stackB[10];

	int A, B;

	scanf("%d %d", &A, &B);
	while (top < 3) {

		stackA[top] = A % 10;
		stackB[top] = B % 10;
		top++;
		A /= 10;
		B /= 10;
	}
	//printf("top = %d\n", top);

	for (top = 0; top < 3; top++) {
		if (stackA[top] > stackB[top]) {
			PrintStack(stackA);
			break;
		}	
		else if (stackA[top] < stackB[top]) {
			PrintStack(stackB);
			break;
		}
		else if (stackA[top] == stackB[top])
			continue;
	}
	return 0;
}

void PrintStack(int stack[]) {
	for (int i = 0; i < 3; i++) {
		printf("%d", stack[i]);
	}
}

//다른 이들의 풀이를 보니 대부분 문자열이 간단하게 상수로 취급하여 풀었는데, 조금은 귀찮았지만 문제의 의도를 파악하고 푸는 방식에 도움이 되었다.