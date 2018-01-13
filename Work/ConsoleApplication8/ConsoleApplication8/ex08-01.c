#include <stdio.h>
#include <stdlib.h>

void main(void)
{

	for ( /* ~부터 */ int i = 0;
		  /* ~까지 */ i <= 10;
		  /* 어떻게 */ i = i + 1)
	{
		printf("%d", i);
	}

	system("pause");
}