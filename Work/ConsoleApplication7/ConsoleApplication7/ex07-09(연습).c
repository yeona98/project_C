#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int k = 0;

	printf("k°ª : ");
	scanf("%d", &k);

	if (k == 0)
	{
		printf("A");
	}
	else if (k >= 3)
	{
		printf("B");
	}
	else
	{
		printf("C");
	}
}