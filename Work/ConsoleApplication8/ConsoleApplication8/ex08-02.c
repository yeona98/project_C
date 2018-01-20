#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 0;
	int	b = 0;
	
	printf("정수를 입력하세요: ");
	scanf("%d %d", &a, &b);

	if(a > b)
	{ // swap
		int temp = a;
		a = b;
		b = temp;
	}

	int sum = 0;
	for (int i = a; i <= b; i = i + 1)
	{
		sum = sum + i;

		printf("%d", i);
		
		if(i == b)
			printf("=");
		else
			printf("+");
	}

	printf("%d", sum);

	system("pause");
}