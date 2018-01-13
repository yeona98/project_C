#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("세 수를 입력하세요. ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("입력받은 수 중 가장 큰 수는 %d입니다.", num1);
	}
	else if (num2 > num3)
	{
		printf("입력받은 수 중 가장 큰 수는 %d입니다.", num2);
	}
	else
	{
		printf("입력받은 수 중 가장 큰 수는 %d입니다.", num3);
	}

	system("pause");
}
