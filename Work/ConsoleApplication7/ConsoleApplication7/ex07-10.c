#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int k = 0;

	printf("k°ªÀº? ");
	scanf("%d", &k);

	switch ( k )
	{
	case 0:
		printf("A");
		break;
	case 3:
		printf("B");
		break;
	default:
		printf("C");

	}
	system("pause");
}