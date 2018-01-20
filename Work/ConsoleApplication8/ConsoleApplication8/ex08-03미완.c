#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 0;
	int	b = 0;

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
		// 3의 배수 이거나 또는 5의 배수 이면
		if(i % 3 == 0 || i % 5 == 0)
		{
			printf("%d은 합에서 제외\n", i);
		}
		
			printf("%d", i);
			printf("%d", i);

			if (i = b)
				printf("=");
			else
				printf("+");
		}
	}


		

	printf("%d", sum);

	system("pause");
}