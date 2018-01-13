#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int k = -1; // 변수 초기화

	printf("K값은?");
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

	// 주소값 보는 방법.
	printf("\n 0x%p", &k);

	system("pause");
}