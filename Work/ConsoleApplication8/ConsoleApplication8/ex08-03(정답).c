#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 0;
	int b = 0;

	printf("정수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{ // swap
		int temp = a;
		a = b;
		b = temp;
	}

	int sum = 0;
	for (int i = a; i <= b; i = i + 1)
	{
		// 3의 배수이거나 또는 5의 배수 이면 
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d 는 합에서 제외 \n", i);
		}
		else
		{ // 3의 배수가 아니고 그리고 5의 배수가 아니면 
			sum = sum + i;
		}
	}

	for (int i = a; i <= b; i = i + 1)
	{
		// 3의 배수가 아니고 그리고 5의 배수가 아니면  
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);

			if (i == b)
				printf("=");
			else
				printf("+");
		}
	}
