#include <stdio.h>
#include <stdlib.h>

void recursive(int step)
{
	printf("recusive call. step=%2d \n", step);
	
	// �Լ� Ż�� ����
	if (step == 10) return;

	recursive( step++ );
}

void main(void)
{
	int step = 0;
	recursive( step );
	system("pause");
}
