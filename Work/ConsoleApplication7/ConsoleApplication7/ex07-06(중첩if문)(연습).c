#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf("세 수를 입력하세요. ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
		{
			printf("입력받은 수 중 가장 큰 수는 %d입니다.", x);
		}
		else
		{
			printf("입력받은 수 중 가장 큰 수는 %d입니다.", z);
		}
	}
	else
	{
		if (y > z)
		{
			printf("입력받은 수 중 가장 큰 수는 %d입니다.", y);
		}
		else
		{
			printf("입력받은 수 중 가장 큰 수는 %d입니다.", z);
		}
	}

	system("pause");
}