#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int k = -1; // ���� �ʱ�ȭ

	printf("K����?");
	scanf("%d", &k);

	if (k > 3)
	{
		printf("B");
	}
	else if (k == 0)
	{
		printf("A");
	}
	else
	{
		printf("C");
	}

	// �ּҰ� ���� ���.
	printf("\n 0x%p", &k);

	system("pause");
}