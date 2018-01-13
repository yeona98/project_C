#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// 변수 선언
	int num1 = 0;
	int num2 = 0;

	printf("두 수를 입력하세요 : ");
	scanf("%d, %d", &num1, &num2);

	printf("입력 받은 수 중 가장 큰 수는 ");
	
	if (num1 > num2)
	{
		printf("%d", num1);
	}
	else
	{
		printf("%d", num2);
	}

	printf("입니다.");

	system("pause");
}