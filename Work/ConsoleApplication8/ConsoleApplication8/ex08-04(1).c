#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	for (int i = 2; i <= 3; i = i + 1)
	{
		for (int j = 1; j <= 9; j = j + 1)
		{
			printf("%d * %d = %3d \n", i, j, i*j);
		}
	}


	for (int i = 1; i <= 5; i = i + 1)
	{
		for (int j = 0; j <= 9; j = j + 1)
		{
			printf("*");
			
		}
		printf("\n");
	}

	system("pause");
}