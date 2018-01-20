#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	for (int i = 2; i <= 9; i = i + 1)
	{
		for (int j = 1; j <= 9; j = j + 1)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	printf("\n");


	for (int j = 1; j <= 9; j = j + 1)
	{
		for (int i = 2; i <= 9; i = i + 1)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}


	system("pause");
}