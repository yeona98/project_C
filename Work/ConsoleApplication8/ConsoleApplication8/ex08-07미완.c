#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 0;

	printf("Number : ");
	scanf("%d", &a);

	printf("Result : \n");

	if (a == 0 || (2 <= a && a <= 9))
	{
		int b = 0;

		if (a == 0)
		{
			a = 2;
			b = 9;
		}
		else
		{
			a = a;
			b = a;
		}

		for (int i = a; i <= b; i = i + 1)
		{
			printf("%d * %d = %2d \n", a, i, a*i);
		}
	
			printf("\n");
		}
	else
	{
		printf("Error\n");
	}
}
