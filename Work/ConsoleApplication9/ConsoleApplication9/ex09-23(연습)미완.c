#include <stdio.h>
#include <stdlib.h>


int sumDigits(int a, int b, int c)
	{
		return a + b + c;
	}



void main(void)
{
	int a, b, c;
	printf("input : ");
	scanf("%d%d%d", a, b, c);
	printf("%d", sumDigits(a, b, c));
}