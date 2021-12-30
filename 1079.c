#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{

    char c;


	do
	{
		scanf("%c ", &c);
		printf("%c\n", c);

	} while (c != 'q');

    return 0;
}