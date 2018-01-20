#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 10, b = 20, c = 30;

	int sum = 0;

	sum = Add(a, b, c);

	printf("%d", sum);

	system("pause");
}

int Add(int x, int y, int z)
{
	int t = x + y + z;
	return t;
}