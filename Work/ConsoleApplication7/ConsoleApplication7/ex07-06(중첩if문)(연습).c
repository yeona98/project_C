#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf("�� ���� �Է��ϼ���. ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
		{
			printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", x);
		}
		else
		{
			printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", z);
		}
	}
	else
	{
		if (y > z)
		{
			printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", y);
		}
		else
		{
			printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", z);
		}
	}

	system("pause");
}