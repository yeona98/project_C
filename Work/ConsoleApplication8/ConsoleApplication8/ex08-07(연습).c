#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num = 0;
	printf("Number : ");
	scanf("%d", &num);
	printf("Result : \n");

	if (2 <= num && num <= 9)
	{
		for (int i = 1; i <= 9; i = i + 1)
		{
			printf("%d * %d = %2d \n", num, i, num*i);
		}
	}
	else if (num == 0)
	{
		for (int i = 2; i <= 9; i = i + 1)
		{
			for (int j = 1; j <= 9; j = j + 1)
			{
				printf("%d*%d=%2d ", i, j, i*j);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error\n");
	}
}
