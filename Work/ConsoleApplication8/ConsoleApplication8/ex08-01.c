#include <stdio.h>
#include <stdlib.h>

void main(void)
{

	for ( /* ~���� */ int i = 0;
		  /* ~���� */ i <= 10;
		  /* ��� */ i = i + 1)
	{
		printf("%d", i);
	}

	// for���� �̿��� �հ� ���ϱ�
	int sum = 0;
	for (int i = 0;
		     i <= 10;
		     i = i + 1)
	{
		sum = sum + i;
	}
	printf("1���� 10������ �հ�� %d", sum);

	system("pause");
}