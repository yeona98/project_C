#include <stdio.h>
#include <stdlib.h>

void recursive(int step)
{
	printf("recusive call. step=%2d \n", step);
	
	// 함수 탈출 조건
	if (step == 10) return;

	recursive( step++ );
}

void main(void)
{
	int step = 0;
	recursive( step );
	system("pause");
}
