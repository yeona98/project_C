#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	// ���� ����
	int num1 = 0;
	int num2 = 0;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d, %d", &num1, &num2);

	printf("�Է� ���� �� �� ���� ū ���� ");
	
	if (num1 > num2)
	{
		printf("%d", num1);
	}
	else
	{
		printf("%d", num2);
	}

	printf("�Դϴ�.");

	system("pause");
}