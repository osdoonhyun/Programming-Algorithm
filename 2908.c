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

//�ٸ� �̵��� Ǯ�̸� ���� ��κ� ���ڿ��� �����ϰ� ����� ����Ͽ� Ǯ���µ�, ������ ���������� ������ �ǵ��� �ľ��ϰ� Ǫ�� ��Ŀ� ������ �Ǿ���.