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

	// for문을 이용한 합계 구하기
	int sum = 0;
	for (int i = 0;
		     i <= 10;
		     i = i + 1)
	{
		sum = sum + i;
	}
	printf("1부터 10까지의 합계는 %d", sum);

	system("pause");
}