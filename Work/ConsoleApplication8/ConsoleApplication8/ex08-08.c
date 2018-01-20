#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(void)
{
	int a = 0;
	int b = 0;

	for (; true; )
	{
		// 키보드 입력 처리
		printf("Number : ");
		scanf("%d %d", &a, &b);

		// swap
		if (a > b)
			{
				int temp = a;
					    a = b;
					    b = temp;
			}

		// 루프 탈출 : a == 0 또는 b == 0
		if (a == 0 || b == 0) break;

		// 구구단 출력
		for (int i = a; i <= b; i = i + 1)
		{
			for (int j = 1; j <= 9; j = j + 1)
			{
				printf("%d*%d=%2d ", i, j, i*j);
			}
			printf("\n");
		}
	}

	system("pause");
}