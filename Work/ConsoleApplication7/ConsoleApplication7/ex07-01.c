#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 0;
	int b = 0;

	printf("Please enter two integers: ");
	scanf("%d %d", &a, &b);

	if (a <= b)
	{
		printf("%d <= %d", a, b);
	}
	else
	{
		printf("%d > %d", a, b);
	}

	system("pause");
}