#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a = 0;
	int	b = 0;

	printf("������ �Է��ϼ���: ");
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
		// 3�� ��� �̰ų� �Ǵ� 5�� ��� �̸�
		if(i % 3 == 0 || i % 5 == 0)
		{
			printf("%d�� �տ��� ����\n", i);
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