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
	if (x > y && x > z)
	{
		printf("%d", x); // x�� ���� ū ��.
	}
	else if (y > z) // y, z
	{
		printf("%d", y); // y�� ���� ū ��.
	}
	else
	{
		printf("%d", z); // z�� ���� ū ��.
	}
	printf("�Դϴ�.");

	system("pause");
}