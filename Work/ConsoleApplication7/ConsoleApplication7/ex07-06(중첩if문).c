#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf("세 수를 입력하세요 :");
	scanf("%d,%d,%d", &x, &y, &z);

	printf("입력 받은 수 중 가장 큰 수는 ");
	if (x > y)
	{
		// x, z 을 비교
		if (x > z)
		{
			printf("%d", x); // x가 가장 큰 수.
		}
		else
		{
			printf("%d", z); // z가 가장 큰 수.
		}
	}
	else
	{
		// y, z를 비교
		if (y > z)
		{
			printf("%d", y); // y가 가장 큰 수.
		}
		else
		{
			printf("%d", z); // z가 가장 큰 수.
		}
	}
	printf("입니다.");

	system("pause");
}