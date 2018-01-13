#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int score = 0;

	printf("¼ºÀû : ");
	scanf("%d", &score);

	if (90 <= score)
	{
		printf("A");
	}
	else if (80 <= score)
	{
		printf("B");
	}
	else if (70 <= score)
	{
		printf("C");
	}
	else if (60 <= score)
	{
		printf("D");
	}
	else if (0 <= score)
	{
		printf("F");
	}

	system("pause");
}