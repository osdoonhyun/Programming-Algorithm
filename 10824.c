//네 수
#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void)
{
	long long A, C;
	int B, D;

	scanf("%lld %d %lld %d", &A, &B, &C, &D);

	int B2 = B, D2 = D;

	while (B > 0)
	{
		B /= 10;
		A *= 10;
	}

	while (D > 0)
	{
		D /= 10;
		C *= 10;
	}

	printf("%lld", A + B2 + C + D2);

	return 0;
}

/*
int main(void) {


	int A, B, C, D;
	int cntB= 1, cntD = 1;
	long long AB, CD;

	scanf("%d %d %d %d", &A, &B, &C, &D);

	while (1) {
		if (B < 10) {
			break;
		}
		else if ((B /= 10) < 10){
			cntB++;
			break;
		}
	}

	while (1) {
		if (D < 10) {
			break;
		}
		if ((D /= 10) < 10) {
			cntD++;
			break;
		}
	}

	AB = A * pow(10,cntB) + B*pow(10,cntB-1);
	CD = C * pow(10, cntD) + D*pow(10,cntD-1);

	printf("%lld", AB + CD);

	return 0;
}

//입력에서 자연수의 범위를 주었는데, 이점을 간과하고 풀려고 했다
*/