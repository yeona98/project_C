#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("�� ���� �Է��ϼ���. ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", num1);
	}
	else if (num2 > num3)
	{
		printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", num2);
	}
	else
	{
		printf("�Է¹��� �� �� ���� ū ���� %d�Դϴ�.", num3);
	}

	system("pause");
}
