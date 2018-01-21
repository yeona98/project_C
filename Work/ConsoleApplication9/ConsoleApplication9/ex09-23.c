#include <stdio.h>
#include <stdlib.h>

int sumDigits(int n);

void main(void)
{
	int a;
	for (int i = 0; i <= 2; i = i + 1)
	{
		printf("input a number : ");
		scanf("%d", &a);

		int r = sumDigits(a);
		printf("result : %d\n", r);

	}
	
	system("pause");
}

int sumDigits(int n)
{
	int sum = 0;
	int num = 0;
	for ( ; n != 0 ; )
	{
		sum = sum + n % 10;
		n = n / 10;
	}

	return sum;
}