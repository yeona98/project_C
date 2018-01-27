#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char ch = '\0';
	char *pc = &ch;
	for (int i = 0; i < 3; i++)
	{
		printf("pc+%d = %p\n", i, pc + i);
	}

	int n = 0;
	int *pi = &n;
	for (int i = 0; i < 3; i++)
	{
		printf("pi+%d = %p\n", i, pi + i);
	}

	double d = 0.0;
	double *pd = &d;
	for (int i = 0; i < 3; i++)
	{
		printf("pd+%d = %p\n", i, pd + i);
	}

}
