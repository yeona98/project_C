#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf("�� ���� �Է��ϼ��� :");
	scanf("%d,%d,%d", &x, &y, &z);

	printf("�Է� ���� �� �� ���� ū ���� ");
	if (x > y)
	{
		// x, z �� ��
		if (x > z)
		{
			printf("%d", x); // x�� ���� ū ��.
		}
		else
		{
			printf("%d", z); // z�� ���� ū ��.
		}
	}
	else
	{
		// y, z�� ��
		if (y > z)
		{
			printf("%d", y); // y�� ���� ū ��.
		}
		else
		{
			printf("%d", z); // z�� ���� ū ��.
		}
	}
	printf("�Դϴ�.");

	system("pause");
}