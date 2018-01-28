#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	p = (int*)malloc(1 * sizeof(int));

	if (p == NULL)
	{
		printf("not allocated \n");
		return;
	}

	*p = 1;
	printf("%d\n", p);

	return 0;
}